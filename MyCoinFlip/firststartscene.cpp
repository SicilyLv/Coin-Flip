#include "firststartscene.h"
#include <QPushButton>
#include <QDebug>


FirstStartScene::FirstStartScene(QWidget *parent) : MyMainWindow(parent)
{
    this->setWindowTitle("开始场景");

    //靠代码实现各种窗口、布局
    QPushButton* pStartButton = new QPushButton(QIcon(":/res/MenuSceneStartButton.png"),"",this);

    //常用函数的功能、用法需记：靠多用,不必死记硬背
    pStartButton->resize(114,114);

    int iX = (this->width()-pStartButton->width())/2;
    //位置出问题了，那就一个一个按坐标排查
    //运算符计算顺序，不确定就用括号
    int iY = this->height()*3/4-pStartButton->height()/2;
    //qDebug()<<iX<<iY;
    pStartButton->move(iX,iY);

    pStartButton->setIconSize(QSize(114,114));
    pStartButton->setStyleSheet("QPushButton{border:0px;}");

    connect(pStartButton,&QPushButton::clicked,[=](){
        this->hide();
        m_secondLevelScene.show();
    });
}
