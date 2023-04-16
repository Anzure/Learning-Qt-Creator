
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
    qInfo() << "Clicked button";
    QMessageBox::information(this, "Informasjon", "Du trykket");
}
