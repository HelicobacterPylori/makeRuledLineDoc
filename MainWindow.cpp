#include "MainWindow.h"
#include "ui_MainWindow.h"

#include "Sample01.h"

#include "Config.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow),
    m_config(new Config(this))
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_actionFileNew_triggered()
{
    /// @brief [ファイル]→[新規の設定を作成]

    // @TODO ダイアログで指定させる
    m_config->setFormFile("form.png");
}

void MainWindow::on_actionFileOpen_triggered()
{
    /// @brief [ファイル]→[設定ファイルを開く]

    // @TODO 画面から設定
    m_config->setMarginsF(QMarginsF(50,300,10,50));

}

void MainWindow::on_actionFileSave_triggered()
{
    /// @brief [ファイル]→[設定ファイルを保存]

    qDebug() << m_config->formFile();
}

void MainWindow::on_actionQuit_triggered()
{
    /// @brief [ファイル]→[終了]

    close();
}

void MainWindow::on_actionMakePdf_triggered()
{

    /// @brief 【試行】色々ためす

    Sample01 app(m_config);

}

