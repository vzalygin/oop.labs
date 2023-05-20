/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.12.12
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QWidget *verticalLayoutWidget;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout_4;
    QPushButton *loadListButton;
    QPushButton *addStudentButton;
    QPushButton *deleteStudentButton;
    QHBoxLayout *horizontalLayout_5;
    QPushButton *groupByLastNameButton;
    QPushButton *analGroupButton;
    QPushButton *analRatingButton;
    QPushButton *averageRatingButton;
    QHBoxLayout *horizontalLayout_3;
    QListWidget *list;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(870, 620);
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(MainWindow->sizePolicy().hasHeightForWidth());
        MainWindow->setSizePolicy(sizePolicy);
        MainWindow->setMinimumSize(QSize(870, 620));
        MainWindow->setMaximumSize(QSize(870, 620));
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        sizePolicy.setHeightForWidth(centralwidget->sizePolicy().hasHeightForWidth());
        centralwidget->setSizePolicy(sizePolicy);
        verticalLayoutWidget = new QWidget(centralwidget);
        verticalLayoutWidget->setObjectName(QString::fromUtf8("verticalLayoutWidget"));
        verticalLayoutWidget->setGeometry(QRect(10, 10, 841, 551));
        verticalLayout = new QVBoxLayout(verticalLayoutWidget);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        horizontalLayout_4->setContentsMargins(0, -1, 400, -1);
        loadListButton = new QPushButton(verticalLayoutWidget);
        loadListButton->setObjectName(QString::fromUtf8("loadListButton"));
        QSizePolicy sizePolicy1(QSizePolicy::Minimum, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(loadListButton->sizePolicy().hasHeightForWidth());
        loadListButton->setSizePolicy(sizePolicy1);

        horizontalLayout_4->addWidget(loadListButton);

        addStudentButton = new QPushButton(verticalLayoutWidget);
        addStudentButton->setObjectName(QString::fromUtf8("addStudentButton"));
        sizePolicy1.setHeightForWidth(addStudentButton->sizePolicy().hasHeightForWidth());
        addStudentButton->setSizePolicy(sizePolicy1);

        horizontalLayout_4->addWidget(addStudentButton);

        deleteStudentButton = new QPushButton(verticalLayoutWidget);
        deleteStudentButton->setObjectName(QString::fromUtf8("deleteStudentButton"));
        sizePolicy1.setHeightForWidth(deleteStudentButton->sizePolicy().hasHeightForWidth());
        deleteStudentButton->setSizePolicy(sizePolicy1);

        horizontalLayout_4->addWidget(deleteStudentButton);


        verticalLayout->addLayout(horizontalLayout_4);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName(QString::fromUtf8("horizontalLayout_5"));
        groupByLastNameButton = new QPushButton(verticalLayoutWidget);
        groupByLastNameButton->setObjectName(QString::fromUtf8("groupByLastNameButton"));

        horizontalLayout_5->addWidget(groupByLastNameButton);

        analGroupButton = new QPushButton(verticalLayoutWidget);
        analGroupButton->setObjectName(QString::fromUtf8("analGroupButton"));

        horizontalLayout_5->addWidget(analGroupButton);

        analRatingButton = new QPushButton(verticalLayoutWidget);
        analRatingButton->setObjectName(QString::fromUtf8("analRatingButton"));

        horizontalLayout_5->addWidget(analRatingButton);

        averageRatingButton = new QPushButton(verticalLayoutWidget);
        averageRatingButton->setObjectName(QString::fromUtf8("averageRatingButton"));

        horizontalLayout_5->addWidget(averageRatingButton);


        verticalLayout->addLayout(horizontalLayout_5);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        list = new QListWidget(verticalLayoutWidget);
        list->setObjectName(QString::fromUtf8("list"));

        horizontalLayout_3->addWidget(list);


        verticalLayout->addLayout(horizontalLayout_3);

        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 870, 20));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "\320\237\321\200\320\260\320\272\321\202\320\270\320\272\320\260 3", nullptr));
        loadListButton->setText(QApplication::translate("MainWindow", "\320\236\320\261\320\275\320\276\320\262\320\270\321\202\321\214 \321\201\320\277\320\270\321\201\320\276\320\272", nullptr));
        addStudentButton->setText(QApplication::translate("MainWindow", "\320\224\320\276\320\261\320\260\320\262\320\270\321\202\321\214 \321\201\321\202\321\203\320\264\320\265\320\275\321\202\320\260", nullptr));
        deleteStudentButton->setText(QApplication::translate("MainWindow", "\320\243\320\264\320\260\320\273\320\270\321\202\321\214 \321\201\321\202\321\203\320\264\320\265\320\275\321\202\320\260", nullptr));
        groupByLastNameButton->setText(QApplication::translate("MainWindow", "\320\241\320\263\321\200\321\203\320\277\320\277\320\270\321\200\320\276\320\262\320\260\321\202\321\214 \320\277\320\276 \321\204\320\260\320\274\320\270\320\273\320\270\320\270", nullptr));
        analGroupButton->setText(QApplication::translate("MainWindow", "\320\220\320\275\320\260\320\273\320\270\320\267 \320\263\321\200\321\203\320\277\320\277 \321\201\321\202\321\203\320\264\320\265\320\275\321\202\320\276\320\262", nullptr));
        analRatingButton->setText(QApplication::translate("MainWindow", "\320\220\320\275\320\260\320\273\320\270\320\267 \321\200\320\265\320\271\321\202\320\270\320\275\320\263\320\260 \321\201\321\202\321\203\320\264\320\265\320\275\321\202\320\276\320\262", nullptr));
        averageRatingButton->setText(QApplication::translate("MainWindow", "\320\241\321\200\320\265\320\264\320\275\320\270\320\271 \321\200\320\265\320\271\321\202\320\270\320\275\320\263 \320\277\320\276 \320\263\321\200\321\203\320\277\320\277\320\265", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
