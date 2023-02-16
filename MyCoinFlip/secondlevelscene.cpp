#include "secondlevelscene.h"
#include <QPainter>
#include <QDebug>
#include <QPushButton>
//#include "mylevelbutton.h"


SecondLevelScene::SecondLevelScene(QWidget *parent) : MyMainWindow(parent)
{
    this->setWindowTitle("翻金币");

    int iInitXOffset = 25;
    int iInitYOffset = 130;
    int iLevel = 1;
    int iTotalXOffset = 0, iTotalYOffset = 0;
    for(int iRow = 0; iRow < 5; iRow++){
        for(int iCol = 0; iCol < 4; iCol++){
            QPushButton* pLevelBtn = new QPushButton(this);

            pLevelBtn->resize(57,57);

            pLevelBtn->setStyleSheet("QPushButton{border:0px;}");
            pLevelBtn->setIcon(QIcon(":/res/LevelIcon.png"));
            pLevelBtn->setIconSize(QSize(this->width(),this->height()));//易错常用

            pLevelBtn->setText(QString::number(iLevel++));

            iTotalXOffset = 70*iCol + iInitXOffset;
            iTotalYOffset = 70*iRow + iInitYOffset;
            pLevelBtn->move(iTotalXOffset,iTotalYOffset);

            connect(pLevelBtn, &QPushButton::clicked,[=](){
                this->hide();
                m_thirdPlayScene.show();
            });
        }
    }
}

void SecondLevelScene::paintEvent(QPaintEvent *pPaintEvent)
{
    //paint device总漏写导致画不出东西，一步一步耐心查找原因
    QPainter painter(this);
    QPixmap secondScenePixmap;
    secondScenePixmap.load(":/res/OtherSceneBg.png");
    //qDebug()<<"123";
    painter.drawPixmap(0,0,this->width(),this->height(),secondScenePixmap);

    QMainWindow::paintEvent(pPaintEvent);
}
