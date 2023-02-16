#ifndef SECONDLEVELSCENE_H
#define SECONDLEVELSCENE_H

#include <QWidget>
#include "mymainwindow.h"
#include "thirdplayscene.h"

class SecondLevelScene : public MyMainWindow
{
    Q_OBJECT
public:
    explicit SecondLevelScene(QWidget *parent = nullptr);

signals:

public slots:

protected:
    void paintEvent(QPaintEvent* pPaintEvent);

private:
    ThirdPlayScene m_thirdPlayScene;
};

#endif // SECONDLEVELSCENE_H
