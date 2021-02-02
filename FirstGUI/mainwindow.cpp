#include "mainwindow.h"
#include "ui_mainwindow.h"
#include<QMessageBox>
MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_pushButton_clicked()
{
    if(ui->checkBox->isChecked() and ui->checkBox_3->isChecked() ){
        QMessageBox::information(this, "title","selected small coffee with cream .");

    }
    if(ui->checkBox_2->isChecked() and ui->checkBox_3->isChecked()) {
        QMessageBox::information(this, "title","selected large coffee with sugar");
    }
    if(ui->checkBox->isChecked() and ui->checkBox_4->isChecked()) {
        QMessageBox::information(this, "title","selected large coffee with cream");
    }
    if(ui->checkBox_2->isChecked() and ui->checkBox_4->isChecked()){
        QMessageBox::information(this, "title","selected small coffee with sugar");
    }
}
