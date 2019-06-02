#ifndef MAINPROCESS_H
#define MAINPROCESS_H

#include <QtGui/QWidget>

class MainProcess : public QWidget
{
    Q_OBJECT

public:
    MainProcess(QWidget *parent = 0);
    ~MainProcess();


private:
    void loadPlug();
};

#endif // MAINPROCESS_H
