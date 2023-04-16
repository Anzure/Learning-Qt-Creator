#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    qInfo() << "Constructed main window";
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    qInfo() << "Destructed main window";
    delete ui;
}

void MainWindow::on_pushButton_clicked()
{
    qInfo() << "Clicked submit button";
    if (ui->checkBox->isChecked()) {
        ui->checkBox->setDisabled(true);
        ui->lineEdit->setDisabled(true);
        ui->lineEdit_2->setDisabled(true);
        ui->lineEdit_3->setDisabled(true);
        ui->lineEdit_4->setDisabled(true);
        QMessageBox::information(this, "Informasjon", "Du trykket på knappen");
        ui->pushButton->setVisible(false);
    } else {
        QMessageBox::critical(this, "Avbrutt", "Avmerkingsboksen ikke huket av");
    }
}
