#ifndef FISH_H_
#define FISH_H_

#include <QObject>
#include "../animalinterface.h"


class String;

class Fish : public QObject ,AnimalInterface
{
    Q_OBJECT
    /*Q_INTERFACE����meta-object system���ǵ���֧��������interface*/
    Q_INTERFACES(AnimalInterface)
public:
    Fish();
	~Fish();
  
	QString getAnimalName();
	QString listenAnimalYell();
	int getAnimalLeg();
	QString getAnimalEnvironment();

	/*
	void setAnimalName(QString &str) ;
	void setAnimalSay(QString &str) ;
	void setAnimalLeg(int leg);
	void setAnimalEnvironment(QString &str);*/


private:
	QString m_Name;
	QString m_Yell;
	int     m_Leg;
	QString m_Env;

	
};
#endif
