#ifndef FIRSTSTARTSCENE_H
#define FIRSTSTARTSCENE_H

#include <QWidget>
#include "mymainwindow.h"
#include "secondlevelscene.h"

class FirstStartScene : public MyMainWindow
{
    Q_OBJECT
public:
    explicit FirstStartScene(QWidget *parent = nullptr);

signals:

public slots:

private:
    SecondLevelScene m_secondLevelScene;
};

#endif // FIRSTSTARTSCENE_H
