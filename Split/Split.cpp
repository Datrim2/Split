#include "Split.h"
#include <QFile>
#include <QTextStream>
#include <QFileInfo>
#include <QIntValidator>

Split::Split(QWidget *parent)
    : QMainWindow(parent)
{
    ui.setupUi(this);
    ui.lineEdit_2->setValidator(new QIntValidator(1, 100000000, this));
    this->statusBar()->setSizeGripEnabled(false);
    this->setFixedSize(QSize(500, 400));
    connect(ui.pushButton, &QPushButton::clicked, this, &Split::on_pushButton_clicked);
    connect(ui.pushButton_2, &QPushButton::clicked, this, &Split::on_pushButton_2_clicked);
    connect(ui.pushButton_3, &QPushButton::clicked, qApp, &QApplication::quit);
    connect(ui.pushButton_4, &QPushButton::clicked, this, &Split::on_pushButton_4_clicked);
}

Split::~Split()
{}

void Split::on_pushButton_clicked() {
    QString str;
    QFileDialog dir;
    str = dir.getOpenFileName(this,"Выбрать файл","","Text Files (*.txt);; CSV Files (*.csv)");
    ui.lineEdit->setText(str);
    ui.lineEdit_3->setText(dir.directory().currentPath());
}
void Split::on_pushButton_4_clicked() {
    QString str;
    str = QFileDialog::getExistingDirectory(this, "Выбрать папку", "", QFileDialog::ShowDirsOnly | QFileDialog::DontResolveSymlinks);
    ui.lineEdit_3->setText(str);
}
void Split::on_pushButton_2_clicked() {
    if (ui.lineEdit_2->text() != "")
    {
        ui.label_2->setText("");
        ui.label_4->setText(0);
        ui.progressBar->setValue(0);
        ui.progressBar_2->setValue(0);

        QString filep = ui.lineEdit->text();
        QFile file(filep);
        if (!file.open(QIODevice::ReadOnly)) {
            ui.label_2->setText("* Невозможно открыть файл");
        }
        else {
            QFileInfo fileinfo(ui.lineEdit->text());
            QString absolutePath = ui.lineEdit_3->text();
            QString fileName = fileinfo.fileName();
            QString reverseFileName = fileName;
            std::reverse(reverseFileName.begin(), reverseFileName.end());
            int pos = reverseFileName.indexOf(".") + 1;
            QString type = fileName.right(pos);
            fileName = fileName.left(fileName.size() - pos);
            int file_number = 1;
            QString filePath = absolutePath + "/" + fileName + "-" + QString::number(file_number) + type;
            QFile fileSave(filePath);
            double sizeFile = fileinfo.size();
            double szFile = sizeFile/100;
            if (!fileSave.open(QIODevice::WriteOnly)) {
                ui.label_2->setText("* Невозможно создать файл");
            }
            else {
                QTextStream in(&file);
                QTextStream out(&fileSave);
                out.setCodec("UTF-8");
                int line_count = 1;
                ui.label_4->setText(QString::number(line_count));
                while (!in.atEnd()) {
                    QString line = in.readLine();
                    out << line << endl;
                    int pB = int(in.pos() / szFile);
                    ui.progressBar->setValue(pB);
                    if ((line_count % ui.lineEdit_2->text().toInt())==0) {
                        file_number++;
                        filePath = absolutePath + "/" + fileName + "-" + QString::number(file_number) + type;
                        fileSave.setFileName(filePath);
                        if (!fileSave.open(QIODevice::WriteOnly)) {
                            ui.label_2->setText("* Невозможно создать файл #" + file_number);
                            break;
                        }
                        ui.label_4->setText(QString::number(file_number));
                        ui.progressBar_2->setValue(0);
                    }
                    double rowCountOne = ui.lineEdit_2->text().toInt()/100;
                    int pB2 = int((line_count - (file_number - 1) * ui.lineEdit_2->text().toInt() )/ rowCountOne);
                    ui.progressBar_2->setValue(pB2);
                    line_count++;
                }
                fileSave.close();
            }
        }
        file.close();
    }
    else {
        ui.label_2->setText("* Введите количество строк для разбиения файла");
    }
}