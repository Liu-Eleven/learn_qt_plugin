#include <QString>
#include <QtCore/QtPlugin>
#include "bird.h"


Bird::Bird()
    :QObject()
{
	m_Name = "bird";
    m_Yell = "ji ji zha zha ";
    m_Leg = 2;
    m_Env = "sky";
   
}
Bird::~Bird()
{


}
QString Bird::getAnimalName()
{
	return m_Name;
}
QString Bird::listenAnimalYell()
{
	return m_Yell;
}
int Bird::getAnimalLeg()
{
	return m_Leg;
}
QString Bird::getAnimalEnvironment()
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
Q_EXPORT_PLUGIN2(bird , Bird)
