#pragma once

#include <QtWidgets/QMainWindow>
#include "ui_Split.h"

#include <QFileDialog>

class Split : public QMainWindow
{
    Q_OBJECT // этот макрос должен включатьс€ в классы, которые объ€вл€ют свои собственные сигналы и слоты

public:
    Split(QWidget *parent = nullptr);
    ~Split();

private:
    void on_pushButton_clicked();
    void on_pushButton_2_clicked();
    void on_pushButton_4_clicked();
    Ui::SplitClass ui;
};
