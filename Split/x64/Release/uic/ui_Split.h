/********************************************************************************
** Form generated from reading UI file 'Split.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SPLIT_H
#define UI_SPLIT_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QProgressBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_SplitClass
{
public:
    QWidget *centralWidget;
    QPushButton *pushButton;
    QLineEdit *lineEdit;
    QLabel *label;
    QLineEdit *lineEdit_2;
    QPushButton *pushButton_2;
    QPushButton *pushButton_3;
    QLabel *label_2;
    QProgressBar *progressBar;
    QProgressBar *progressBar_2;
    QLabel *label_3;
    QLabel *label_4;
    QLineEdit *lineEdit_3;
    QPushButton *pushButton_4;
    QLabel *label_5;
    QLabel *label_6;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *SplitClass)
    {
        if (SplitClass->objectName().isEmpty())
            SplitClass->setObjectName(QString::fromUtf8("SplitClass"));
        SplitClass->resize(500, 400);
        SplitClass->setMinimumSize(QSize(500, 400));
        SplitClass->setMaximumSize(QSize(500, 400));
        centralWidget = new QWidget(SplitClass);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        pushButton = new QPushButton(centralWidget);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(10, 40, 121, 24));
        lineEdit = new QLineEdit(centralWidget);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));
        lineEdit->setGeometry(QRect(140, 40, 341, 24));
        label = new QLabel(centralWidget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(10, 137, 141, 16));
        lineEdit_2 = new QLineEdit(centralWidget);
        lineEdit_2->setObjectName(QString::fromUtf8("lineEdit_2"));
        lineEdit_2->setGeometry(QRect(160, 137, 321, 20));
        pushButton_2 = new QPushButton(centralWidget);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
        pushButton_2->setGeometry(QRect(300, 267, 81, 31));
        pushButton_3 = new QPushButton(centralWidget);
        pushButton_3->setObjectName(QString::fromUtf8("pushButton_3"));
        pushButton_3->setGeometry(QRect(400, 267, 81, 31));
        label_2 = new QLabel(centralWidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(10, 10, 471, 16));
        label_2->setStyleSheet(QString::fromUtf8("color : red;"));
        progressBar = new QProgressBar(centralWidget);
        progressBar->setObjectName(QString::fromUtf8("progressBar"));
        progressBar->setGeometry(QRect(10, 187, 471, 23));
        progressBar->setValue(0);
        progressBar->setAlignment(Qt::AlignCenter);
        progressBar->setTextVisible(true);
        progressBar_2 = new QProgressBar(centralWidget);
        progressBar_2->setObjectName(QString::fromUtf8("progressBar_2"));
        progressBar_2->setGeometry(QRect(10, 227, 471, 23));
        progressBar_2->setValue(0);
        progressBar_2->setAlignment(Qt::AlignCenter);
        progressBar_2->setTextVisible(true);
        label_3 = new QLabel(centralWidget);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(40, 230, 101, 16));
        label_4 = new QLabel(centralWidget);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(143, 230, 16, 16));
        lineEdit_3 = new QLineEdit(centralWidget);
        lineEdit_3->setObjectName(QString::fromUtf8("lineEdit_3"));
        lineEdit_3->setGeometry(QRect(140, 90, 341, 24));
        pushButton_4 = new QPushButton(centralWidget);
        pushButton_4->setObjectName(QString::fromUtf8("pushButton_4"));
        pushButton_4->setGeometry(QRect(10, 90, 121, 24));
        label_5 = new QLabel(centralWidget);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setGeometry(QRect(10, 20, 81, 16));
        label_6 = new QLabel(centralWidget);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setGeometry(QRect(10, 70, 121, 16));
        SplitClass->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(SplitClass);
        menuBar->setObjectName(QString::fromUtf8("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 500, 21));
        SplitClass->setMenuBar(menuBar);
        mainToolBar = new QToolBar(SplitClass);
        mainToolBar->setObjectName(QString::fromUtf8("mainToolBar"));
        SplitClass->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(SplitClass);
        statusBar->setObjectName(QString::fromUtf8("statusBar"));
        SplitClass->setStatusBar(statusBar);

        retranslateUi(SplitClass);

        QMetaObject::connectSlotsByName(SplitClass);
    } // setupUi

    void retranslateUi(QMainWindow *SplitClass)
    {
        SplitClass->setWindowTitle(QCoreApplication::translate("SplitClass", "Split", nullptr));
        pushButton->setText(QCoreApplication::translate("SplitClass", "\320\222\321\213\320\261\321\200\320\260\321\202\321\214 \321\204\320\260\320\271\320\273", nullptr));
        label->setText(QCoreApplication::translate("SplitClass", "\320\232\320\276\320\273\320\270\321\207\320\265\321\201\321\202\320\262\320\276 \321\201\321\202\321\200\320\276\320\272 \320\262 \321\204\320\260\320\271\320\273\320\265:", nullptr));
        pushButton_2->setText(QCoreApplication::translate("SplitClass", "\320\222\321\213\320\277\320\276\320\273\320\275\320\270\321\202\321\214", nullptr));
        pushButton_3->setText(QCoreApplication::translate("SplitClass", "\320\222\321\213\321\205\320\276\320\264", nullptr));
        label_2->setText(QString());
        label_3->setText(QCoreApplication::translate("SplitClass", "\320\241\320\276\320\267\320\264\320\260\320\275\320\270\320\265 \321\204\320\260\320\271\320\273\320\260 \342\204\226", nullptr));
        label_4->setText(QCoreApplication::translate("SplitClass", "0", nullptr));
        pushButton_4->setText(QCoreApplication::translate("SplitClass", "\320\222\321\213\320\261\321\200\320\260\321\202\321\214 \320\277\320\260\320\277\320\272\321\203", nullptr));
        label_5->setText(QCoreApplication::translate("SplitClass", "\320\244\320\260\320\271\320\273:", nullptr));
        label_6->setText(QCoreApplication::translate("SplitClass", "\320\234\320\265\321\201\321\202\320\276 \320\275\320\260\320\267\320\275\320\260\321\207\320\265\320\275\320\270\321\217:", nullptr));
    } // retranslateUi

};

namespace Ui {
    class SplitClass: public Ui_SplitClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SPLIT_H
