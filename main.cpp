#include "MainWindow.h"

#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);

    // ボタン等を日本語化
    QTranslator translator;
    translator.load("qt_ja_JP", QLibraryInfo::location(QLibraryInfo::TranslationsPath));
    qApp->installTranslator(&translator);

    MainWindow w;
    w.show();
    return a.exec();
}
