#include "mainwindow.h"
#include <QApplication>
#include "dialog.h"
#include <QLabel>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;
//    Dialog *dlog = new Dialog;
//    if (dlog->exec() == QDialog::Accepted )
//    {
//        w.show();
//        return a.exec();
//    } else return 0;

    QLabel *label = new QLabel("<h1><i>hello</i>"
                               "<font color=red>Qt!</font></h1>");
    label->show();

//    w.show();
    return a.exec();

}
