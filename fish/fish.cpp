#include <QString>
#include <QtCore/QtPlugin>
#include "fish.h"


Fish::Fish()
    :QObject()
{
	m_Name = "fish";
    m_Yell = "null";
    m_Leg = 0;
    m_Env = "water";
   
}
Fish::~Fish()
{


}
QString Fish::getAnimalName()
{
	return m_Name;
}
QString Fish::listenAnimalYell()
{
	return m_Yell;
}
int Fish::getAnimalLeg()
{
	return m_Leg;
}
QString Fish::getAnimalEnvironment()
{
	return m_Env;
}

/*
void Fish::setAnimalName(QString &str)
{
	 m_Name = str;
}
void Fish::setAnimalSay(QString &str)
{
	 m_Yell = str;
}
void Fish::setAnimalLeg(int leg)
{
    m_Leg = leg;
}
void Fish::setAnimalEnvironment(QString &str)
{
	 m_Env = str;
}*/
//两个参数，一个插件的名字，一个类名
Q_EXPORT_PLUGIN2(fish , Fish)
