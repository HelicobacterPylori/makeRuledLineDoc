#include "MainWindow.h"
#include "ui_MainWindow.h"

#include <Sample01.h>

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


void MainWindow::on_actionQuit_triggered()
{
    /// @brief [ファイル]→[終了]

    close();
}

void MainWindow::on_actionMakePdf_triggered()
{

    /// @brief 【試行】色々ためす

    Sample01 app;

}
