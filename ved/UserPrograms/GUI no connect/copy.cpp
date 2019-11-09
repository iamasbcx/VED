#include "copy.h"
#include "ui_copy.h"
#include <QFileDialog>

Copy::Copy(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Copy)
{
    ui->setupUi(this);
    ui->label->setVisible(false);
}

Copy::~Copy()
{
    delete ui;
}

void Copy::on_Ok_clicked()
{
    if(ui->Dir->text().isEmpty()||ui->File->text().isEmpty())
    ui->label->setVisible(true);
    else
    {
        emit signalToTable();
        close();
    }
}

void Copy::on_Cancel_clicked()
{
    close();
}

void Copy::on_PathButton_clicked()
{
    ui->File->setText(QFileDialog::getOpenFileName(this, "Get Any File","C://"));
}

void Copy::on_PathButton_2_clicked()
{
    ui->Dir->setText(QFileDialog::getExistingDirectory(this, "Get Any File","C://"));
}
