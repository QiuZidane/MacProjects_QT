#include "sortdialog.h"

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