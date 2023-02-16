#include "mymainwindow.h"
#include "ui_mymainwindow.h"
#include <QPainter>

MyMainWindow::MyMainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MyMainWindow)
{
    this->ui->setupUi(this);

    //是this而非ui
    this->setFixedSize(320,588);
    this->setWindowIcon(QIcon(":/res/Coin0001.png"));//???为啥不是QIcon::QIcon()
}

MyMainWindow::~MyMainWindow()
{
    delete ui;
}

void MyMainWindow::paintEvent(QPaintEvent* pPaintEvent){
    QPainter painter(this);

    //资源必须放在当前项目目录下
    QPixmap pixmap(":/res/MenuSceneBg.png");
    painter.drawPixmap(0,0,this->width(),this->height(),pixmap);

    QMainWindow::paintEvent(pPaintEvent);
}
