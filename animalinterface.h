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
	
	//��ȡ��������
	virtual QString getAnimalName()=0;
	//�������
	virtual QString listenAnimalYell()=0;
	//�������
	virtual int getAnimalLeg()=0;
	//����Ļ���
	virtual QString getAnimalEnvironment()=0;

};
//��֪qt meta-object system������һ��interface;
//��һ������Ϊ����������ڶ�����ʽΪcom.XXX.XXXX����ѧ��JAVA��android��ͬѧ��֪�����Ͳ�������Ū�ˡ�

Q_DECLARE_INTERFACE(AnimalInterface , "com.plug.animalinterface");


#endif
