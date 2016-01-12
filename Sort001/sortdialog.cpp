#include "sortdialog.h"
#include "dialog1.h"
#include <QtDebug>

SortDialog::SortDialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::SortDialog)
{
    ui->setupUi(this);

//    ui->secondaryGroupBox->hide();
//    ui->tertiaryGroupBox->hide();

    layout()->setSizeConstraint(QLayout::SetFixedSize);

    setColumnRange('A','Z');


}

SortDialog::~SortDialog()
{
    delete ui;
}

void SortDialog::setColumnRange(QChar first, QChar last)
{



}

void SortDialog::on_pushButton_4_clicked()
{
    // 方式1
    Dialog1 *dl1 = new Dialog1();
    dl1->show();

    //方式2
    Dialog1 dl2;
    dl2.show();

    qDebug() << "123";
}
