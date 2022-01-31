#include <QtQuick>

#include "mainwindow.h"
#include "ui_mainwindow.h"

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
    QQuickView *view = new QQuickView;
    view->setSource(QUrl("/home/mark/CLionProjects/qt-example/qml/tic-tac-toe.qml"));
    view->show();
}
