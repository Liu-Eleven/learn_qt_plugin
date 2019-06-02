#ifndef ANIMALINTERFACE_H_
#define ANIMALINTERFACE_H_

class QString;


class AnimalInterface
{
public:
	virtual ~AnimalInterface(){};

/*
	virtual void setAnimalName(QString &str) ;
	virtual void setAnimalSay(QString &str) ;
	virtual void setAnimalLeg(int leg);
	virtual void setAnimalEnvironment(QString &str);*/
	
	//获取动物名字
	virtual QString getAnimalName()=0;
	//动物叫声
	virtual QString listenAnimalYell()=0;
	//动物的退
	virtual int getAnimalLeg()=0;
	//动物的环境
	virtual QString getAnimalEnvironment()=0;

};
//告知qt meta-object system有这样一个interface;
//第一个参数为你的类名，第二个格式为com.XXX.XXXX相信学过JAVA和android的同学都知道，就不过多卖弄了。

Q_DECLARE_INTERFACE(AnimalInterface , "com.plug.animalinterface");


#endif
