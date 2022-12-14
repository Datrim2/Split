#include "Split.h"
#include <QtWidgets/QApplication>
#include <QIcon>

int main(int argc, char *argv[])
{
    // ������ Qt5-���������� (�� ����������� ����������) ������ �������� ��������� ������
    QApplication a(argc, argv);

    // ������� ������, ������� ������������ ���� ����� ���������
    Split w;

    w.setWindowTitle("FileSplitter");
    w.setWindowIcon(QIcon("icon\\split-48.png"));
    w.show();// ������� ������ �� �����

    return a.exec();
}


