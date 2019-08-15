#include "mainwindow.h"
#include "ui_mainwindow.h"

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

void MainWindow::on_pushButton_clicked()
{
    ofstream MyFile;
    ui->status->setText("producingTrash");
    MyFile.open("trash.txt");
    MyFile.clear();
    for (unsigned int i=0;i< unsigned(ui->dateGroesse->value());++i) {
        MyFile << "0";
    }
    ui->status->setText("finished producing Trash");
}
