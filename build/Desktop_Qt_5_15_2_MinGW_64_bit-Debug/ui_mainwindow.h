/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QVBoxLayout *verticalLayout;
    QLabel *titleLabel;
    QLabel *statusLabel;
    QTextEdit *logTextEdit;
    QHBoxLayout *buttonLayout;
    QPushButton *refreshBtn;
    QPushButton *clearLogBtn;
    QSpacerItem *horizontalSpacer;
    QPushButton *closeBtn;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(600, 400);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        verticalLayout = new QVBoxLayout(centralwidget);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        titleLabel = new QLabel(centralwidget);
        titleLabel->setObjectName(QString::fromUtf8("titleLabel"));
        QFont font;
        font.setPointSize(16);
        font.setBold(true);
        font.setWeight(75);
        titleLabel->setFont(font);
        titleLabel->setAlignment(Qt::AlignCenter);

        verticalLayout->addWidget(titleLabel);

        statusLabel = new QLabel(centralwidget);
        statusLabel->setObjectName(QString::fromUtf8("statusLabel"));
        statusLabel->setAlignment(Qt::AlignCenter);

        verticalLayout->addWidget(statusLabel);

        logTextEdit = new QTextEdit(centralwidget);
        logTextEdit->setObjectName(QString::fromUtf8("logTextEdit"));
        logTextEdit->setMaximumSize(QSize(16777215, 200));

        verticalLayout->addWidget(logTextEdit);

        buttonLayout = new QHBoxLayout();
        buttonLayout->setObjectName(QString::fromUtf8("buttonLayout"));
        refreshBtn = new QPushButton(centralwidget);
        refreshBtn->setObjectName(QString::fromUtf8("refreshBtn"));

        buttonLayout->addWidget(refreshBtn);

        clearLogBtn = new QPushButton(centralwidget);
        clearLogBtn->setObjectName(QString::fromUtf8("clearLogBtn"));

        buttonLayout->addWidget(clearLogBtn);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        buttonLayout->addItem(horizontalSpacer);

        closeBtn = new QPushButton(centralwidget);
        closeBtn->setObjectName(QString::fromUtf8("closeBtn"));

        buttonLayout->addWidget(closeBtn);


        verticalLayout->addLayout(buttonLayout);

        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 600, 17));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "\345\210\206\347\263\273\347\273\2371", nullptr));
        titleLabel->setText(QCoreApplication::translate("MainWindow", "\345\210\206\347\263\273\347\273\2371 - \350\277\220\350\241\214\344\270\255", nullptr));
        statusLabel->setText(QCoreApplication::translate("MainWindow", "\347\212\266\346\200\201\357\274\232\347\255\211\345\276\205\344\270\273\347\263\273\347\273\237\345\221\275\344\273\244", nullptr));
        logTextEdit->setPlaceholderText(QCoreApplication::translate("MainWindow", "\347\263\273\347\273\237\346\227\245\345\277\227\345\260\206\345\234\250\350\277\231\351\207\214\346\230\276\347\244\272...", nullptr));
        refreshBtn->setText(QCoreApplication::translate("MainWindow", "\345\210\267\346\226\260\347\212\266\346\200\201", nullptr));
        clearLogBtn->setText(QCoreApplication::translate("MainWindow", "\346\270\205\347\251\272\346\227\245\345\277\227", nullptr));
        closeBtn->setText(QCoreApplication::translate("MainWindow", "\345\205\263\351\227\255\347\225\214\351\235\242", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
