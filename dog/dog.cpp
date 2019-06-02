#include <QString>
#include <QtCore/QtPlugin>
#include "dog.h"


Dog::Dog()
    :QObject()
{

	m_Name = "dog";
    m_Yell = "wang wang";
    m_Leg = 4;
    m_Env = "land";
}
Dog::~Dog()
{

}

QString Dog::getAnimalName()
{
	return m_Name;
}
QString Dog::listenAnimalYell()
{
	return m_Yell;
}
int Dog::getAnimalLeg()
{
	return m_Leg;
}
QString Dog::getAnimalEnvironment()
{
	return m_Env;
}
/*
void Dog::setAnimalName(QString &str)
{
	 m_Name = str;
}

void Dog::setAnimalSay(QString &str)
{
	 m_Yell = str;
}

void Dog::setAnimalLeg(int leg)
{
    m_Leg = leg;
}

void Dog::setAnimalEnvironment(QString &str)
{
	 m_Env = str;
}*/
//两个参数，一个插件的名字，一个类名
Q_EXPORT_PLUGIN2(dog , Dog)
