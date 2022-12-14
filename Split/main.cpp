#include "Split.h"
#include <QtWidgets/QApplication>
#include <QIcon>

int main(int argc, char *argv[])
{
    // Каждое Qt5-приложение (за исключением консольных) должно включать следующую строку
    QApplication a(argc, argv);

    // Главный виджет, который представляет окно нашей программы
    Split w;

    w.setWindowTitle("FileSplitter");
    w.setWindowIcon(QIcon("icon\\split-48.png"));
    w.show();// выводим виджет на экран

    return a.exec();
}


