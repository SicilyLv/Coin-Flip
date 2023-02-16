#include "mymainwindow.h"
#include <QApplication>
#include "firststartscene.h"

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
//    MyMainWindow w;
//    w.show();

    FirstStartScene startScene;
    startScene.show();

    return a.exec();
}
