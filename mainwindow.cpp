#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "general_header.h"
#include <thread>

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::display_number(unsigned long long num)
{
    ui->pushButton_2->setText(QString::number(num));
}

void MainWindow::on_pushButton_clicked()
{
    if(ui->pushButton_2->isHidden() == true)
        ui->pushButton_2->show();
    else {
        ui->pushButton_2->hide();
    }

}

void MainWindow::on_pushButton_3_clicked()
{
    if(ui->pushButton_2->text() == ""){
        ui->pushButton_2->setText("got it!");
    }
    else {
        ui->pushButton_2->setText("");
    }
}

void MainWindow::on_pushButton_4_clicked()
{
    std::thread cal_1(fibx, this, ui->lineEdit->text().toInt());
    cal_1.detach();


}
