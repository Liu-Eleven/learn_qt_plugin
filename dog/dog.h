#ifndef DOG_H_
#define DOG_H_

#include <QObject>
#include "../animalinterface.h"


class String;

class Dog : public QObject ,AnimalInterface
{
    Q_OBJECT
    /*Q_INTERFACE告诉meta-object system我们的类支持这样的interface*/
    Q_INTERFACES(AnimalInterface)
public:
    Dog();
	~Dog();
	/*void setAnimalName(QString &str) ;
	void setAnimalSay(QString &str) ;
	void setAnimalLeg(int leg);
	void setAnimalEnvironment(QString &str);*/
  
	QString getAnimalName();
	QString listenAnimalYell();
	int getAnimalLeg();
	QString getAnimalEnvironment();

	


private:
	QString m_Name;
	QString m_Yell;
	int     m_Leg;
	QString m_Env;

	
};
#endif
