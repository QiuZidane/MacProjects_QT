#include "mainwindow.h"
#include <QApplication>
#include "dialog.h"
#include <QLabel>
#include <QHBoxLayout>
#include <QSlider>
#include <QSpinBox>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);

//    MainWindow w;
//    Dialog *dlog = new Dialog;
//    if (dlog->exec() == QDialog::Accepted )
//    {
//        w.show();
//        return a.exec();
//    } else return 0;


//    QLabel *label = new QLabel("<h1><i>hello</i>"
//                               "<font color=red>Qt!</font></h1>");
//    label->show();

    QWidget *window = new QWidget;
    window->setWindowTitle("输入age");

    QSpinBox spinbox; //= new QSpinBox;
    QSlider *slider= new QSlider(Qt::Horizontal);
    spinbox.setRange(0,130);
    slider->setRange(0,130);

    QObject::connect(&spinbox,SIGNAL(valueChanged(int)),slider, SLOT(setValue(int)));
    QObject::connect(slider,SIGNAL(valueChanged(int)),&spinbox, SLOT(setValue(int)));
    spinbox.setValue(33);

    QHBoxLayout laybox; //= new QHBoxLayout;
    laybox.addWidget(&spinbox);
    laybox.addWidget(slider);
    window->setLayout(&laybox);

    window->show();


    return a.exec();

}
