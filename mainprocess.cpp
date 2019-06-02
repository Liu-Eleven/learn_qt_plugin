#include <QDebug>
#include <QObject>
#include <QPluginLoader>
#include <QDir>
#include <QStringList>

#include"animalinterface.h"
#include "mainprocess.h"

MainProcess::MainProcess(QWidget *parent)
    : QWidget(parent)
{
    resize(300,300);
    loadPlug();
}

MainProcess::~MainProcess()
{

}


void MainProcess::loadPlug()
{
    QPluginLoader plugLoader;

    QObject *obj = NULL;
    AnimalInterface *animalObj = NULL;

    QDir dir;
    QStringList strList;
    QStringList fileList;


    dir = QDir::currentPath()+"/lib/";
    strList<<"*.so";
    //qDebug()<<"LINE : %d"<<__LINE__<<dir.path()<<"----------"<<strList;


    fileList = dir.entryList(strList , QDir::Files);
    if(fileList.count() == 0)
    {
        qDebug()<<"no this same plug!";
        return;
    }


    for(int i= 0 ; i <fileList.count() ; i++)
    {
       // qDebug()<<"LINE:%d----lib=%s"<<__LINE__<<fileList.at(i).toLatin1().data();
        plugLoader.setFileName(dir.path()+tr("/")+fileList.at(i));

        //¼ÓÔØ²å¼þ
        if(plugLoader.load())
        {
            obj = plugLoader.instance();
            if(obj)
            {
                animalObj = qobject_cast<AnimalInterface *>(obj);
                if(animalObj)
                {
					qDebug()<<"----------------------------------------";
                    qDebug()<<"Name:"<<animalObj->getAnimalName();
					qDebug()<<"Yell:"<<animalObj->listenAnimalYell();
					qDebug()<<"Legs:"<<animalObj->getAnimalLeg();
					qDebug()<<"ENV:"<<animalObj->getAnimalEnvironment();
					qDebug()<<"----------------------------------------";
                }
            }
        }
        else
        {
            qDebug()<<"LINE:%d plug load faile!@";
        }
    }
}
