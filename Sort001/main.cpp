#include "sortdialog.h"
#include <QApplication>
#include "dialog1.h"


int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    SortDialog w;
    w.show();
//    Dialog1 dl1;
//    dl1.show();


    return a.exec();
}
