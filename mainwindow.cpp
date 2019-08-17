#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "qglobal.h"
#include "QDebug"
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

    qsrand(qrand());
    for (unsigned int i=0;i< unsigned(ui->dateGroesse->value());++i) {

        int v= qrand()%128;
        qDebug()<<v<<" is char: "<<char(v);
        MyFile << char(v);
    }
    ui->status->setText("finished producing Trash");
}
