#include "mainwindow.h"
#include "ui_mainwindow.h"

#include <QMovie>

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    QMovie *movie = new QMovie(":/prefix/images/test.gif");
    ui->label->setMovie(movie);
    ui->label->setScaledContents(true);
    movie->start();

    ui->logLatEdit->setText("ha ha");
}

MainWindow::~MainWindow()
{
    delete ui;
}
