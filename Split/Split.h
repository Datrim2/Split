#pragma once

#include <QtWidgets/QMainWindow>
#include "ui_Split.h"

#include <QFileDialog>

class Split : public QMainWindow
{
    Q_OBJECT // ���� ������ ������ ���������� � ������, ������� ��������� ���� ����������� ������� � �����

public:
    Split(QWidget *parent = nullptr);
    ~Split();

private:
    void on_pushButton_clicked();
    void on_pushButton_2_clicked();
    void on_pushButton_4_clicked();
    Ui::SplitClass ui;
};
