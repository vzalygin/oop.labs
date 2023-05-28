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
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QGridLayout *gridLayout_2;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout_2;
    QPushButton *bck_but;
    QPushButton *ClearEm_but;
    QPushButton *ClearAll_but;
    QHBoxLayout *horizontalLayout;
    QGridLayout *gridLayout;
    QPushButton *Plus_but;
    QPushButton *Mult_but;
    QPushButton *two_but;
    QPushButton *nule_but;
    QPushButton *four_but;
    QPushButton *Inverse_but;
    QPushButton *six_but;
    QPushButton *five_but;
    QPushButton *seven_but;
    QPushButton *dot_but;
    QPushButton *eight_but;
    QPushButton *Minus_but;
    QPushButton *one_but;
    QPushButton *three_but;
    QPushButton *nine_but;
    QPushButton *Log_but;
    QPushButton *Pow_but;
    QPushButton *Sin_but;
    QPushButton *Cos_but;
    QPushButton *Div_but;
    QPushButton *Total_but;
    QTextEdit *textEdit;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(543, 304);
        QPalette palette;
        QBrush brush(QColor(170, 0, 0, 255));
        brush.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Highlight, brush);
        QBrush brush1(QColor(240, 240, 240, 255));
        brush1.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Inactive, QPalette::Highlight, brush1);
        QBrush brush2(QColor(0, 120, 215, 255));
        brush2.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Disabled, QPalette::Highlight, brush2);
        MainWindow->setPalette(palette);
        MainWindow->setMouseTracking(false);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        gridLayout_2 = new QGridLayout(centralwidget);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        bck_but = new QPushButton(centralwidget);
        bck_but->setObjectName(QString::fromUtf8("bck_but"));

        horizontalLayout_2->addWidget(bck_but);

        ClearEm_but = new QPushButton(centralwidget);
        ClearEm_but->setObjectName(QString::fromUtf8("ClearEm_but"));
        QPalette palette1;
        QBrush brush3(QColor(0, 0, 0, 255));
        brush3.setStyle(Qt::SolidPattern);
        palette1.setBrush(QPalette::Active, QPalette::WindowText, brush3);
        palette1.setBrush(QPalette::Active, QPalette::Button, brush);
        QBrush brush4(QColor(255, 0, 0, 255));
        brush4.setStyle(Qt::SolidPattern);
        palette1.setBrush(QPalette::Active, QPalette::Light, brush4);
        QBrush brush5(QColor(212, 0, 0, 255));
        brush5.setStyle(Qt::SolidPattern);
        palette1.setBrush(QPalette::Active, QPalette::Midlight, brush5);
        QBrush brush6(QColor(85, 0, 0, 255));
        brush6.setStyle(Qt::SolidPattern);
        palette1.setBrush(QPalette::Active, QPalette::Dark, brush6);
        QBrush brush7(QColor(113, 0, 0, 255));
        brush7.setStyle(Qt::SolidPattern);
        palette1.setBrush(QPalette::Active, QPalette::Mid, brush7);
        palette1.setBrush(QPalette::Active, QPalette::Text, brush3);
        QBrush brush8(QColor(255, 255, 255, 255));
        brush8.setStyle(Qt::SolidPattern);
        palette1.setBrush(QPalette::Active, QPalette::BrightText, brush8);
        palette1.setBrush(QPalette::Active, QPalette::ButtonText, brush3);
        palette1.setBrush(QPalette::Active, QPalette::Base, brush8);
        palette1.setBrush(QPalette::Active, QPalette::Window, brush);
        palette1.setBrush(QPalette::Active, QPalette::Shadow, brush3);
        QBrush brush9(QColor(212, 127, 127, 255));
        brush9.setStyle(Qt::SolidPattern);
        palette1.setBrush(QPalette::Active, QPalette::AlternateBase, brush9);
        QBrush brush10(QColor(255, 255, 220, 255));
        brush10.setStyle(Qt::SolidPattern);
        palette1.setBrush(QPalette::Active, QPalette::ToolTipBase, brush10);
        palette1.setBrush(QPalette::Active, QPalette::ToolTipText, brush3);
        QBrush brush11(QColor(0, 0, 0, 127));
        brush11.setStyle(Qt::SolidPattern);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette1.setBrush(QPalette::Active, QPalette::PlaceholderText, brush11);
#endif
        palette1.setBrush(QPalette::Inactive, QPalette::WindowText, brush3);
        palette1.setBrush(QPalette::Inactive, QPalette::Button, brush1);
        palette1.setBrush(QPalette::Inactive, QPalette::Light, brush8);
        QBrush brush12(QColor(227, 227, 227, 255));
        brush12.setStyle(Qt::SolidPattern);
        palette1.setBrush(QPalette::Inactive, QPalette::Midlight, brush12);
        QBrush brush13(QColor(160, 160, 160, 255));
        brush13.setStyle(Qt::SolidPattern);
        palette1.setBrush(QPalette::Inactive, QPalette::Dark, brush13);
        palette1.setBrush(QPalette::Inactive, QPalette::Mid, brush13);
        palette1.setBrush(QPalette::Inactive, QPalette::Text, brush3);
        palette1.setBrush(QPalette::Inactive, QPalette::BrightText, brush8);
        palette1.setBrush(QPalette::Inactive, QPalette::ButtonText, brush3);
        palette1.setBrush(QPalette::Inactive, QPalette::Base, brush8);
        palette1.setBrush(QPalette::Inactive, QPalette::Window, brush1);
        QBrush brush14(QColor(105, 105, 105, 255));
        brush14.setStyle(Qt::SolidPattern);
        palette1.setBrush(QPalette::Inactive, QPalette::Shadow, brush14);
        QBrush brush15(QColor(245, 245, 245, 255));
        brush15.setStyle(Qt::SolidPattern);
        palette1.setBrush(QPalette::Inactive, QPalette::AlternateBase, brush15);
        palette1.setBrush(QPalette::Inactive, QPalette::ToolTipBase, brush10);
        palette1.setBrush(QPalette::Inactive, QPalette::ToolTipText, brush3);
        QBrush brush16(QColor(0, 0, 0, 128));
        brush16.setStyle(Qt::SolidPattern);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette1.setBrush(QPalette::Inactive, QPalette::PlaceholderText, brush16);
#endif
        palette1.setBrush(QPalette::Disabled, QPalette::WindowText, brush6);
        palette1.setBrush(QPalette::Disabled, QPalette::Button, brush);
        palette1.setBrush(QPalette::Disabled, QPalette::Light, brush4);
        palette1.setBrush(QPalette::Disabled, QPalette::Midlight, brush5);
        palette1.setBrush(QPalette::Disabled, QPalette::Dark, brush6);
        palette1.setBrush(QPalette::Disabled, QPalette::Mid, brush7);
        palette1.setBrush(QPalette::Disabled, QPalette::Text, brush6);
        palette1.setBrush(QPalette::Disabled, QPalette::BrightText, brush8);
        palette1.setBrush(QPalette::Disabled, QPalette::ButtonText, brush6);
        palette1.setBrush(QPalette::Disabled, QPalette::Base, brush);
        palette1.setBrush(QPalette::Disabled, QPalette::Window, brush);
        palette1.setBrush(QPalette::Disabled, QPalette::Shadow, brush3);
        palette1.setBrush(QPalette::Disabled, QPalette::AlternateBase, brush15);
        palette1.setBrush(QPalette::Disabled, QPalette::ToolTipBase, brush10);
        palette1.setBrush(QPalette::Disabled, QPalette::ToolTipText, brush3);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette1.setBrush(QPalette::Disabled, QPalette::PlaceholderText, brush16);
#endif
        ClearEm_but->setPalette(palette1);

        horizontalLayout_2->addWidget(ClearEm_but);

        ClearAll_but = new QPushButton(centralwidget);
        ClearAll_but->setObjectName(QString::fromUtf8("ClearAll_but"));
        QPalette palette2;
        palette2.setBrush(QPalette::Active, QPalette::WindowText, brush3);
        palette2.setBrush(QPalette::Active, QPalette::Button, brush);
        palette2.setBrush(QPalette::Active, QPalette::Light, brush4);
        palette2.setBrush(QPalette::Active, QPalette::Midlight, brush5);
        palette2.setBrush(QPalette::Active, QPalette::Dark, brush6);
        palette2.setBrush(QPalette::Active, QPalette::Mid, brush7);
        palette2.setBrush(QPalette::Active, QPalette::Text, brush3);
        palette2.setBrush(QPalette::Active, QPalette::BrightText, brush8);
        palette2.setBrush(QPalette::Active, QPalette::ButtonText, brush3);
        palette2.setBrush(QPalette::Active, QPalette::Base, brush8);
        palette2.setBrush(QPalette::Active, QPalette::Window, brush);
        palette2.setBrush(QPalette::Active, QPalette::Shadow, brush3);
        palette2.setBrush(QPalette::Active, QPalette::AlternateBase, brush9);
        palette2.setBrush(QPalette::Active, QPalette::ToolTipBase, brush10);
        palette2.setBrush(QPalette::Active, QPalette::ToolTipText, brush3);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette2.setBrush(QPalette::Active, QPalette::PlaceholderText, brush11);
#endif
        palette2.setBrush(QPalette::Inactive, QPalette::WindowText, brush3);
        palette2.setBrush(QPalette::Inactive, QPalette::Button, brush1);
        palette2.setBrush(QPalette::Inactive, QPalette::Light, brush8);
        palette2.setBrush(QPalette::Inactive, QPalette::Midlight, brush12);
        palette2.setBrush(QPalette::Inactive, QPalette::Dark, brush13);
        palette2.setBrush(QPalette::Inactive, QPalette::Mid, brush13);
        palette2.setBrush(QPalette::Inactive, QPalette::Text, brush3);
        palette2.setBrush(QPalette::Inactive, QPalette::BrightText, brush8);
        palette2.setBrush(QPalette::Inactive, QPalette::ButtonText, brush3);
        palette2.setBrush(QPalette::Inactive, QPalette::Base, brush8);
        palette2.setBrush(QPalette::Inactive, QPalette::Window, brush1);
        palette2.setBrush(QPalette::Inactive, QPalette::Shadow, brush14);
        palette2.setBrush(QPalette::Inactive, QPalette::AlternateBase, brush15);
        palette2.setBrush(QPalette::Inactive, QPalette::ToolTipBase, brush10);
        palette2.setBrush(QPalette::Inactive, QPalette::ToolTipText, brush3);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette2.setBrush(QPalette::Inactive, QPalette::PlaceholderText, brush16);
#endif
        palette2.setBrush(QPalette::Disabled, QPalette::WindowText, brush6);
        palette2.setBrush(QPalette::Disabled, QPalette::Button, brush);
        palette2.setBrush(QPalette::Disabled, QPalette::Light, brush4);
        palette2.setBrush(QPalette::Disabled, QPalette::Midlight, brush5);
        palette2.setBrush(QPalette::Disabled, QPalette::Dark, brush6);
        palette2.setBrush(QPalette::Disabled, QPalette::Mid, brush7);
        palette2.setBrush(QPalette::Disabled, QPalette::Text, brush6);
        palette2.setBrush(QPalette::Disabled, QPalette::BrightText, brush8);
        palette2.setBrush(QPalette::Disabled, QPalette::ButtonText, brush6);
        palette2.setBrush(QPalette::Disabled, QPalette::Base, brush);
        palette2.setBrush(QPalette::Disabled, QPalette::Window, brush);
        palette2.setBrush(QPalette::Disabled, QPalette::Shadow, brush3);
        palette2.setBrush(QPalette::Disabled, QPalette::AlternateBase, brush15);
        palette2.setBrush(QPalette::Disabled, QPalette::ToolTipBase, brush10);
        palette2.setBrush(QPalette::Disabled, QPalette::ToolTipText, brush3);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette2.setBrush(QPalette::Disabled, QPalette::PlaceholderText, brush16);
#endif
        ClearAll_but->setPalette(palette2);

        horizontalLayout_2->addWidget(ClearAll_but);


        verticalLayout->addLayout(horizontalLayout_2);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        gridLayout = new QGridLayout();
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        Plus_but = new QPushButton(centralwidget);
        Plus_but->setObjectName(QString::fromUtf8("Plus_but"));
        QSizePolicy sizePolicy(QSizePolicy::Minimum, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(Plus_but->sizePolicy().hasHeightForWidth());
        Plus_but->setSizePolicy(sizePolicy);
        QPalette palette3;
        palette3.setBrush(QPalette::Active, QPalette::WindowText, brush3);
        QBrush brush17(QColor(85, 170, 255, 255));
        brush17.setStyle(Qt::SolidPattern);
        palette3.setBrush(QPalette::Active, QPalette::Button, brush17);
        QBrush brush18(QColor(212, 234, 255, 255));
        brush18.setStyle(Qt::SolidPattern);
        palette3.setBrush(QPalette::Active, QPalette::Light, brush18);
        QBrush brush19(QColor(148, 202, 255, 255));
        brush19.setStyle(Qt::SolidPattern);
        palette3.setBrush(QPalette::Active, QPalette::Midlight, brush19);
        QBrush brush20(QColor(42, 85, 127, 255));
        brush20.setStyle(Qt::SolidPattern);
        palette3.setBrush(QPalette::Active, QPalette::Dark, brush20);
        QBrush brush21(QColor(57, 113, 170, 255));
        brush21.setStyle(Qt::SolidPattern);
        palette3.setBrush(QPalette::Active, QPalette::Mid, brush21);
        palette3.setBrush(QPalette::Active, QPalette::Text, brush3);
        palette3.setBrush(QPalette::Active, QPalette::BrightText, brush8);
        palette3.setBrush(QPalette::Active, QPalette::ButtonText, brush3);
        palette3.setBrush(QPalette::Active, QPalette::Base, brush8);
        palette3.setBrush(QPalette::Active, QPalette::Window, brush17);
        palette3.setBrush(QPalette::Active, QPalette::Shadow, brush3);
        QBrush brush22(QColor(170, 212, 255, 255));
        brush22.setStyle(Qt::SolidPattern);
        palette3.setBrush(QPalette::Active, QPalette::AlternateBase, brush22);
        palette3.setBrush(QPalette::Active, QPalette::ToolTipBase, brush10);
        palette3.setBrush(QPalette::Active, QPalette::ToolTipText, brush3);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette3.setBrush(QPalette::Active, QPalette::PlaceholderText, brush11);
#endif
        palette3.setBrush(QPalette::Inactive, QPalette::WindowText, brush3);
        palette3.setBrush(QPalette::Inactive, QPalette::Button, brush1);
        palette3.setBrush(QPalette::Inactive, QPalette::Light, brush8);
        palette3.setBrush(QPalette::Inactive, QPalette::Midlight, brush12);
        palette3.setBrush(QPalette::Inactive, QPalette::Dark, brush13);
        palette3.setBrush(QPalette::Inactive, QPalette::Mid, brush13);
        palette3.setBrush(QPalette::Inactive, QPalette::Text, brush3);
        palette3.setBrush(QPalette::Inactive, QPalette::BrightText, brush8);
        palette3.setBrush(QPalette::Inactive, QPalette::ButtonText, brush3);
        palette3.setBrush(QPalette::Inactive, QPalette::Base, brush8);
        palette3.setBrush(QPalette::Inactive, QPalette::Window, brush1);
        palette3.setBrush(QPalette::Inactive, QPalette::Shadow, brush14);
        palette3.setBrush(QPalette::Inactive, QPalette::AlternateBase, brush15);
        palette3.setBrush(QPalette::Inactive, QPalette::ToolTipBase, brush10);
        palette3.setBrush(QPalette::Inactive, QPalette::ToolTipText, brush3);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette3.setBrush(QPalette::Inactive, QPalette::PlaceholderText, brush16);
#endif
        palette3.setBrush(QPalette::Disabled, QPalette::WindowText, brush20);
        palette3.setBrush(QPalette::Disabled, QPalette::Button, brush17);
        palette3.setBrush(QPalette::Disabled, QPalette::Light, brush18);
        palette3.setBrush(QPalette::Disabled, QPalette::Midlight, brush19);
        palette3.setBrush(QPalette::Disabled, QPalette::Dark, brush20);
        palette3.setBrush(QPalette::Disabled, QPalette::Mid, brush21);
        palette3.setBrush(QPalette::Disabled, QPalette::Text, brush20);
        palette3.setBrush(QPalette::Disabled, QPalette::BrightText, brush8);
        palette3.setBrush(QPalette::Disabled, QPalette::ButtonText, brush20);
        palette3.setBrush(QPalette::Disabled, QPalette::Base, brush17);
        palette3.setBrush(QPalette::Disabled, QPalette::Window, brush17);
        palette3.setBrush(QPalette::Disabled, QPalette::Shadow, brush3);
        palette3.setBrush(QPalette::Disabled, QPalette::AlternateBase, brush15);
        palette3.setBrush(QPalette::Disabled, QPalette::ToolTipBase, brush10);
        palette3.setBrush(QPalette::Disabled, QPalette::ToolTipText, brush3);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette3.setBrush(QPalette::Disabled, QPalette::PlaceholderText, brush16);
#endif
        Plus_but->setPalette(palette3);

        gridLayout->addWidget(Plus_but, 3, 3, 1, 1);

        Mult_but = new QPushButton(centralwidget);
        Mult_but->setObjectName(QString::fromUtf8("Mult_but"));
        sizePolicy.setHeightForWidth(Mult_but->sizePolicy().hasHeightForWidth());
        Mult_but->setSizePolicy(sizePolicy);
        QPalette palette4;
        palette4.setBrush(QPalette::Active, QPalette::WindowText, brush3);
        palette4.setBrush(QPalette::Active, QPalette::Button, brush17);
        palette4.setBrush(QPalette::Active, QPalette::Light, brush18);
        palette4.setBrush(QPalette::Active, QPalette::Midlight, brush19);
        palette4.setBrush(QPalette::Active, QPalette::Dark, brush20);
        palette4.setBrush(QPalette::Active, QPalette::Mid, brush21);
        palette4.setBrush(QPalette::Active, QPalette::Text, brush3);
        palette4.setBrush(QPalette::Active, QPalette::BrightText, brush8);
        palette4.setBrush(QPalette::Active, QPalette::ButtonText, brush3);
        palette4.setBrush(QPalette::Active, QPalette::Base, brush8);
        palette4.setBrush(QPalette::Active, QPalette::Window, brush17);
        palette4.setBrush(QPalette::Active, QPalette::Shadow, brush3);
        palette4.setBrush(QPalette::Active, QPalette::AlternateBase, brush22);
        palette4.setBrush(QPalette::Active, QPalette::ToolTipBase, brush10);
        palette4.setBrush(QPalette::Active, QPalette::ToolTipText, brush3);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette4.setBrush(QPalette::Active, QPalette::PlaceholderText, brush11);
#endif
        palette4.setBrush(QPalette::Inactive, QPalette::WindowText, brush3);
        palette4.setBrush(QPalette::Inactive, QPalette::Button, brush1);
        palette4.setBrush(QPalette::Inactive, QPalette::Light, brush8);
        palette4.setBrush(QPalette::Inactive, QPalette::Midlight, brush12);
        palette4.setBrush(QPalette::Inactive, QPalette::Dark, brush13);
        palette4.setBrush(QPalette::Inactive, QPalette::Mid, brush13);
        palette4.setBrush(QPalette::Inactive, QPalette::Text, brush3);
        palette4.setBrush(QPalette::Inactive, QPalette::BrightText, brush8);
        palette4.setBrush(QPalette::Inactive, QPalette::ButtonText, brush3);
        palette4.setBrush(QPalette::Inactive, QPalette::Base, brush8);
        palette4.setBrush(QPalette::Inactive, QPalette::Window, brush1);
        palette4.setBrush(QPalette::Inactive, QPalette::Shadow, brush14);
        palette4.setBrush(QPalette::Inactive, QPalette::AlternateBase, brush15);
        palette4.setBrush(QPalette::Inactive, QPalette::ToolTipBase, brush10);
        palette4.setBrush(QPalette::Inactive, QPalette::ToolTipText, brush3);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette4.setBrush(QPalette::Inactive, QPalette::PlaceholderText, brush16);
#endif
        palette4.setBrush(QPalette::Disabled, QPalette::WindowText, brush20);
        palette4.setBrush(QPalette::Disabled, QPalette::Button, brush17);
        palette4.setBrush(QPalette::Disabled, QPalette::Light, brush18);
        palette4.setBrush(QPalette::Disabled, QPalette::Midlight, brush19);
        palette4.setBrush(QPalette::Disabled, QPalette::Dark, brush20);
        palette4.setBrush(QPalette::Disabled, QPalette::Mid, brush21);
        palette4.setBrush(QPalette::Disabled, QPalette::Text, brush20);
        palette4.setBrush(QPalette::Disabled, QPalette::BrightText, brush8);
        palette4.setBrush(QPalette::Disabled, QPalette::ButtonText, brush20);
        palette4.setBrush(QPalette::Disabled, QPalette::Base, brush17);
        palette4.setBrush(QPalette::Disabled, QPalette::Window, brush17);
        palette4.setBrush(QPalette::Disabled, QPalette::Shadow, brush3);
        palette4.setBrush(QPalette::Disabled, QPalette::AlternateBase, brush15);
        palette4.setBrush(QPalette::Disabled, QPalette::ToolTipBase, brush10);
        palette4.setBrush(QPalette::Disabled, QPalette::ToolTipText, brush3);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette4.setBrush(QPalette::Disabled, QPalette::PlaceholderText, brush16);
#endif
        Mult_but->setPalette(palette4);
        QFont font;
        font.setPointSize(10);
        Mult_but->setFont(font);

        gridLayout->addWidget(Mult_but, 1, 3, 1, 1);

        two_but = new QPushButton(centralwidget);
        two_but->setObjectName(QString::fromUtf8("two_but"));
        sizePolicy.setHeightForWidth(two_but->sizePolicy().hasHeightForWidth());
        two_but->setSizePolicy(sizePolicy);

        gridLayout->addWidget(two_but, 2, 1, 1, 1);

        nule_but = new QPushButton(centralwidget);
        nule_but->setObjectName(QString::fromUtf8("nule_but"));
        sizePolicy.setHeightForWidth(nule_but->sizePolicy().hasHeightForWidth());
        nule_but->setSizePolicy(sizePolicy);
        nule_but->setFont(font);

        gridLayout->addWidget(nule_but, 3, 0, 1, 1);

        four_but = new QPushButton(centralwidget);
        four_but->setObjectName(QString::fromUtf8("four_but"));
        sizePolicy.setHeightForWidth(four_but->sizePolicy().hasHeightForWidth());
        four_but->setSizePolicy(sizePolicy);

        gridLayout->addWidget(four_but, 1, 0, 1, 1);

        Inverse_but = new QPushButton(centralwidget);
        Inverse_but->setObjectName(QString::fromUtf8("Inverse_but"));
        sizePolicy.setHeightForWidth(Inverse_but->sizePolicy().hasHeightForWidth());
        Inverse_but->setSizePolicy(sizePolicy);

        gridLayout->addWidget(Inverse_but, 3, 1, 1, 1);

        six_but = new QPushButton(centralwidget);
        six_but->setObjectName(QString::fromUtf8("six_but"));
        sizePolicy.setHeightForWidth(six_but->sizePolicy().hasHeightForWidth());
        six_but->setSizePolicy(sizePolicy);

        gridLayout->addWidget(six_but, 1, 2, 1, 1);

        five_but = new QPushButton(centralwidget);
        five_but->setObjectName(QString::fromUtf8("five_but"));
        sizePolicy.setHeightForWidth(five_but->sizePolicy().hasHeightForWidth());
        five_but->setSizePolicy(sizePolicy);

        gridLayout->addWidget(five_but, 1, 1, 1, 1);

        seven_but = new QPushButton(centralwidget);
        seven_but->setObjectName(QString::fromUtf8("seven_but"));
        sizePolicy.setHeightForWidth(seven_but->sizePolicy().hasHeightForWidth());
        seven_but->setSizePolicy(sizePolicy);

        gridLayout->addWidget(seven_but, 0, 0, 1, 1);

        dot_but = new QPushButton(centralwidget);
        dot_but->setObjectName(QString::fromUtf8("dot_but"));
        sizePolicy.setHeightForWidth(dot_but->sizePolicy().hasHeightForWidth());
        dot_but->setSizePolicy(sizePolicy);

        gridLayout->addWidget(dot_but, 3, 2, 1, 1);

        eight_but = new QPushButton(centralwidget);
        eight_but->setObjectName(QString::fromUtf8("eight_but"));
        sizePolicy.setHeightForWidth(eight_but->sizePolicy().hasHeightForWidth());
        eight_but->setSizePolicy(sizePolicy);

        gridLayout->addWidget(eight_but, 0, 1, 1, 1);

        Minus_but = new QPushButton(centralwidget);
        Minus_but->setObjectName(QString::fromUtf8("Minus_but"));
        sizePolicy.setHeightForWidth(Minus_but->sizePolicy().hasHeightForWidth());
        Minus_but->setSizePolicy(sizePolicy);
        QPalette palette5;
        palette5.setBrush(QPalette::Active, QPalette::WindowText, brush3);
        palette5.setBrush(QPalette::Active, QPalette::Button, brush17);
        palette5.setBrush(QPalette::Active, QPalette::Light, brush18);
        palette5.setBrush(QPalette::Active, QPalette::Midlight, brush19);
        palette5.setBrush(QPalette::Active, QPalette::Dark, brush20);
        palette5.setBrush(QPalette::Active, QPalette::Mid, brush21);
        palette5.setBrush(QPalette::Active, QPalette::Text, brush3);
        palette5.setBrush(QPalette::Active, QPalette::BrightText, brush8);
        palette5.setBrush(QPalette::Active, QPalette::ButtonText, brush3);
        palette5.setBrush(QPalette::Active, QPalette::Base, brush8);
        palette5.setBrush(QPalette::Active, QPalette::Window, brush17);
        palette5.setBrush(QPalette::Active, QPalette::Shadow, brush3);
        palette5.setBrush(QPalette::Active, QPalette::AlternateBase, brush22);
        palette5.setBrush(QPalette::Active, QPalette::ToolTipBase, brush10);
        palette5.setBrush(QPalette::Active, QPalette::ToolTipText, brush3);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette5.setBrush(QPalette::Active, QPalette::PlaceholderText, brush11);
#endif
        palette5.setBrush(QPalette::Inactive, QPalette::WindowText, brush3);
        palette5.setBrush(QPalette::Inactive, QPalette::Button, brush1);
        palette5.setBrush(QPalette::Inactive, QPalette::Light, brush8);
        palette5.setBrush(QPalette::Inactive, QPalette::Midlight, brush12);
        palette5.setBrush(QPalette::Inactive, QPalette::Dark, brush13);
        palette5.setBrush(QPalette::Inactive, QPalette::Mid, brush13);
        palette5.setBrush(QPalette::Inactive, QPalette::Text, brush3);
        palette5.setBrush(QPalette::Inactive, QPalette::BrightText, brush8);
        palette5.setBrush(QPalette::Inactive, QPalette::ButtonText, brush3);
        palette5.setBrush(QPalette::Inactive, QPalette::Base, brush8);
        palette5.setBrush(QPalette::Inactive, QPalette::Window, brush1);
        palette5.setBrush(QPalette::Inactive, QPalette::Shadow, brush14);
        palette5.setBrush(QPalette::Inactive, QPalette::AlternateBase, brush15);
        palette5.setBrush(QPalette::Inactive, QPalette::ToolTipBase, brush10);
        palette5.setBrush(QPalette::Inactive, QPalette::ToolTipText, brush3);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette5.setBrush(QPalette::Inactive, QPalette::PlaceholderText, brush16);
#endif
        palette5.setBrush(QPalette::Disabled, QPalette::WindowText, brush20);
        palette5.setBrush(QPalette::Disabled, QPalette::Button, brush17);
        palette5.setBrush(QPalette::Disabled, QPalette::Light, brush18);
        palette5.setBrush(QPalette::Disabled, QPalette::Midlight, brush19);
        palette5.setBrush(QPalette::Disabled, QPalette::Dark, brush20);
        palette5.setBrush(QPalette::Disabled, QPalette::Mid, brush21);
        palette5.setBrush(QPalette::Disabled, QPalette::Text, brush20);
        palette5.setBrush(QPalette::Disabled, QPalette::BrightText, brush8);
        palette5.setBrush(QPalette::Disabled, QPalette::ButtonText, brush20);
        palette5.setBrush(QPalette::Disabled, QPalette::Base, brush17);
        palette5.setBrush(QPalette::Disabled, QPalette::Window, brush17);
        palette5.setBrush(QPalette::Disabled, QPalette::Shadow, brush3);
        palette5.setBrush(QPalette::Disabled, QPalette::AlternateBase, brush15);
        palette5.setBrush(QPalette::Disabled, QPalette::ToolTipBase, brush10);
        palette5.setBrush(QPalette::Disabled, QPalette::ToolTipText, brush3);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette5.setBrush(QPalette::Disabled, QPalette::PlaceholderText, brush16);
#endif
        Minus_but->setPalette(palette5);
        Minus_but->setFont(font);

        gridLayout->addWidget(Minus_but, 2, 3, 1, 1);

        one_but = new QPushButton(centralwidget);
        one_but->setObjectName(QString::fromUtf8("one_but"));
        sizePolicy.setHeightForWidth(one_but->sizePolicy().hasHeightForWidth());
        one_but->setSizePolicy(sizePolicy);
        one_but->setFont(font);

        gridLayout->addWidget(one_but, 2, 0, 1, 1);

        three_but = new QPushButton(centralwidget);
        three_but->setObjectName(QString::fromUtf8("three_but"));
        sizePolicy.setHeightForWidth(three_but->sizePolicy().hasHeightForWidth());
        three_but->setSizePolicy(sizePolicy);

        gridLayout->addWidget(three_but, 2, 2, 1, 1);

        nine_but = new QPushButton(centralwidget);
        nine_but->setObjectName(QString::fromUtf8("nine_but"));
        sizePolicy.setHeightForWidth(nine_but->sizePolicy().hasHeightForWidth());
        nine_but->setSizePolicy(sizePolicy);

        gridLayout->addWidget(nine_but, 0, 2, 1, 1);

        Log_but = new QPushButton(centralwidget);
        Log_but->setObjectName(QString::fromUtf8("Log_but"));
        sizePolicy.setHeightForWidth(Log_but->sizePolicy().hasHeightForWidth());
        Log_but->setSizePolicy(sizePolicy);
        QPalette palette6;
        palette6.setBrush(QPalette::Active, QPalette::WindowText, brush3);
        palette6.setBrush(QPalette::Active, QPalette::Button, brush17);
        palette6.setBrush(QPalette::Active, QPalette::Light, brush18);
        palette6.setBrush(QPalette::Active, QPalette::Midlight, brush19);
        palette6.setBrush(QPalette::Active, QPalette::Dark, brush20);
        palette6.setBrush(QPalette::Active, QPalette::Mid, brush21);
        palette6.setBrush(QPalette::Active, QPalette::Text, brush3);
        palette6.setBrush(QPalette::Active, QPalette::BrightText, brush8);
        palette6.setBrush(QPalette::Active, QPalette::ButtonText, brush3);
        palette6.setBrush(QPalette::Active, QPalette::Base, brush8);
        palette6.setBrush(QPalette::Active, QPalette::Window, brush17);
        palette6.setBrush(QPalette::Active, QPalette::Shadow, brush3);
        palette6.setBrush(QPalette::Active, QPalette::AlternateBase, brush22);
        palette6.setBrush(QPalette::Active, QPalette::ToolTipBase, brush10);
        palette6.setBrush(QPalette::Active, QPalette::ToolTipText, brush3);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette6.setBrush(QPalette::Active, QPalette::PlaceholderText, brush11);
#endif
        palette6.setBrush(QPalette::Inactive, QPalette::WindowText, brush3);
        palette6.setBrush(QPalette::Inactive, QPalette::Button, brush1);
        palette6.setBrush(QPalette::Inactive, QPalette::Light, brush8);
        palette6.setBrush(QPalette::Inactive, QPalette::Midlight, brush12);
        palette6.setBrush(QPalette::Inactive, QPalette::Dark, brush13);
        palette6.setBrush(QPalette::Inactive, QPalette::Mid, brush13);
        palette6.setBrush(QPalette::Inactive, QPalette::Text, brush3);
        palette6.setBrush(QPalette::Inactive, QPalette::BrightText, brush8);
        palette6.setBrush(QPalette::Inactive, QPalette::ButtonText, brush3);
        palette6.setBrush(QPalette::Inactive, QPalette::Base, brush8);
        palette6.setBrush(QPalette::Inactive, QPalette::Window, brush1);
        palette6.setBrush(QPalette::Inactive, QPalette::Shadow, brush14);
        palette6.setBrush(QPalette::Inactive, QPalette::AlternateBase, brush15);
        palette6.setBrush(QPalette::Inactive, QPalette::ToolTipBase, brush10);
        palette6.setBrush(QPalette::Inactive, QPalette::ToolTipText, brush3);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette6.setBrush(QPalette::Inactive, QPalette::PlaceholderText, brush16);
#endif
        palette6.setBrush(QPalette::Disabled, QPalette::WindowText, brush20);
        palette6.setBrush(QPalette::Disabled, QPalette::Button, brush17);
        palette6.setBrush(QPalette::Disabled, QPalette::Light, brush18);
        palette6.setBrush(QPalette::Disabled, QPalette::Midlight, brush19);
        palette6.setBrush(QPalette::Disabled, QPalette::Dark, brush20);
        palette6.setBrush(QPalette::Disabled, QPalette::Mid, brush21);
        palette6.setBrush(QPalette::Disabled, QPalette::Text, brush20);
        palette6.setBrush(QPalette::Disabled, QPalette::BrightText, brush8);
        palette6.setBrush(QPalette::Disabled, QPalette::ButtonText, brush20);
        palette6.setBrush(QPalette::Disabled, QPalette::Base, brush17);
        palette6.setBrush(QPalette::Disabled, QPalette::Window, brush17);
        palette6.setBrush(QPalette::Disabled, QPalette::Shadow, brush3);
        palette6.setBrush(QPalette::Disabled, QPalette::AlternateBase, brush15);
        palette6.setBrush(QPalette::Disabled, QPalette::ToolTipBase, brush10);
        palette6.setBrush(QPalette::Disabled, QPalette::ToolTipText, brush3);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette6.setBrush(QPalette::Disabled, QPalette::PlaceholderText, brush16);
#endif
        Log_but->setPalette(palette6);

        gridLayout->addWidget(Log_but, 0, 4, 1, 1);

        Pow_but = new QPushButton(centralwidget);
        Pow_but->setObjectName(QString::fromUtf8("Pow_but"));
        sizePolicy.setHeightForWidth(Pow_but->sizePolicy().hasHeightForWidth());
        Pow_but->setSizePolicy(sizePolicy);
        QPalette palette7;
        palette7.setBrush(QPalette::Active, QPalette::WindowText, brush3);
        palette7.setBrush(QPalette::Active, QPalette::Button, brush17);
        palette7.setBrush(QPalette::Active, QPalette::Light, brush18);
        palette7.setBrush(QPalette::Active, QPalette::Midlight, brush19);
        palette7.setBrush(QPalette::Active, QPalette::Dark, brush20);
        palette7.setBrush(QPalette::Active, QPalette::Mid, brush21);
        palette7.setBrush(QPalette::Active, QPalette::Text, brush3);
        palette7.setBrush(QPalette::Active, QPalette::BrightText, brush8);
        palette7.setBrush(QPalette::Active, QPalette::ButtonText, brush3);
        palette7.setBrush(QPalette::Active, QPalette::Base, brush8);
        palette7.setBrush(QPalette::Active, QPalette::Window, brush17);
        palette7.setBrush(QPalette::Active, QPalette::Shadow, brush3);
        palette7.setBrush(QPalette::Active, QPalette::AlternateBase, brush22);
        palette7.setBrush(QPalette::Active, QPalette::ToolTipBase, brush10);
        palette7.setBrush(QPalette::Active, QPalette::ToolTipText, brush3);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette7.setBrush(QPalette::Active, QPalette::PlaceholderText, brush11);
#endif
        palette7.setBrush(QPalette::Inactive, QPalette::WindowText, brush3);
        palette7.setBrush(QPalette::Inactive, QPalette::Button, brush1);
        palette7.setBrush(QPalette::Inactive, QPalette::Light, brush8);
        palette7.setBrush(QPalette::Inactive, QPalette::Midlight, brush12);
        palette7.setBrush(QPalette::Inactive, QPalette::Dark, brush13);
        palette7.setBrush(QPalette::Inactive, QPalette::Mid, brush13);
        palette7.setBrush(QPalette::Inactive, QPalette::Text, brush3);
        palette7.setBrush(QPalette::Inactive, QPalette::BrightText, brush8);
        palette7.setBrush(QPalette::Inactive, QPalette::ButtonText, brush3);
        palette7.setBrush(QPalette::Inactive, QPalette::Base, brush8);
        palette7.setBrush(QPalette::Inactive, QPalette::Window, brush1);
        palette7.setBrush(QPalette::Inactive, QPalette::Shadow, brush14);
        palette7.setBrush(QPalette::Inactive, QPalette::AlternateBase, brush15);
        palette7.setBrush(QPalette::Inactive, QPalette::ToolTipBase, brush10);
        palette7.setBrush(QPalette::Inactive, QPalette::ToolTipText, brush3);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette7.setBrush(QPalette::Inactive, QPalette::PlaceholderText, brush16);
#endif
        palette7.setBrush(QPalette::Disabled, QPalette::WindowText, brush20);
        palette7.setBrush(QPalette::Disabled, QPalette::Button, brush17);
        palette7.setBrush(QPalette::Disabled, QPalette::Light, brush18);
        palette7.setBrush(QPalette::Disabled, QPalette::Midlight, brush19);
        palette7.setBrush(QPalette::Disabled, QPalette::Dark, brush20);
        palette7.setBrush(QPalette::Disabled, QPalette::Mid, brush21);
        palette7.setBrush(QPalette::Disabled, QPalette::Text, brush20);
        palette7.setBrush(QPalette::Disabled, QPalette::BrightText, brush8);
        palette7.setBrush(QPalette::Disabled, QPalette::ButtonText, brush20);
        palette7.setBrush(QPalette::Disabled, QPalette::Base, brush17);
        palette7.setBrush(QPalette::Disabled, QPalette::Window, brush17);
        palette7.setBrush(QPalette::Disabled, QPalette::Shadow, brush3);
        palette7.setBrush(QPalette::Disabled, QPalette::AlternateBase, brush15);
        palette7.setBrush(QPalette::Disabled, QPalette::ToolTipBase, brush10);
        palette7.setBrush(QPalette::Disabled, QPalette::ToolTipText, brush3);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette7.setBrush(QPalette::Disabled, QPalette::PlaceholderText, brush16);
#endif
        Pow_but->setPalette(palette7);

        gridLayout->addWidget(Pow_but, 1, 4, 1, 1);

        Sin_but = new QPushButton(centralwidget);
        Sin_but->setObjectName(QString::fromUtf8("Sin_but"));
        sizePolicy.setHeightForWidth(Sin_but->sizePolicy().hasHeightForWidth());
        Sin_but->setSizePolicy(sizePolicy);
        QPalette palette8;
        palette8.setBrush(QPalette::Active, QPalette::WindowText, brush3);
        palette8.setBrush(QPalette::Active, QPalette::Button, brush17);
        palette8.setBrush(QPalette::Active, QPalette::Light, brush18);
        palette8.setBrush(QPalette::Active, QPalette::Midlight, brush19);
        palette8.setBrush(QPalette::Active, QPalette::Dark, brush20);
        palette8.setBrush(QPalette::Active, QPalette::Mid, brush21);
        palette8.setBrush(QPalette::Active, QPalette::Text, brush3);
        palette8.setBrush(QPalette::Active, QPalette::BrightText, brush8);
        palette8.setBrush(QPalette::Active, QPalette::ButtonText, brush3);
        palette8.setBrush(QPalette::Active, QPalette::Base, brush8);
        palette8.setBrush(QPalette::Active, QPalette::Window, brush17);
        palette8.setBrush(QPalette::Active, QPalette::Shadow, brush3);
        palette8.setBrush(QPalette::Active, QPalette::AlternateBase, brush22);
        palette8.setBrush(QPalette::Active, QPalette::ToolTipBase, brush10);
        palette8.setBrush(QPalette::Active, QPalette::ToolTipText, brush3);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette8.setBrush(QPalette::Active, QPalette::PlaceholderText, brush11);
#endif
        palette8.setBrush(QPalette::Inactive, QPalette::WindowText, brush3);
        palette8.setBrush(QPalette::Inactive, QPalette::Button, brush1);
        palette8.setBrush(QPalette::Inactive, QPalette::Light, brush8);
        palette8.setBrush(QPalette::Inactive, QPalette::Midlight, brush12);
        palette8.setBrush(QPalette::Inactive, QPalette::Dark, brush13);
        palette8.setBrush(QPalette::Inactive, QPalette::Mid, brush13);
        palette8.setBrush(QPalette::Inactive, QPalette::Text, brush3);
        palette8.setBrush(QPalette::Inactive, QPalette::BrightText, brush8);
        palette8.setBrush(QPalette::Inactive, QPalette::ButtonText, brush3);
        palette8.setBrush(QPalette::Inactive, QPalette::Base, brush8);
        palette8.setBrush(QPalette::Inactive, QPalette::Window, brush1);
        palette8.setBrush(QPalette::Inactive, QPalette::Shadow, brush14);
        palette8.setBrush(QPalette::Inactive, QPalette::AlternateBase, brush15);
        palette8.setBrush(QPalette::Inactive, QPalette::ToolTipBase, brush10);
        palette8.setBrush(QPalette::Inactive, QPalette::ToolTipText, brush3);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette8.setBrush(QPalette::Inactive, QPalette::PlaceholderText, brush16);
#endif
        palette8.setBrush(QPalette::Disabled, QPalette::WindowText, brush20);
        palette8.setBrush(QPalette::Disabled, QPalette::Button, brush17);
        palette8.setBrush(QPalette::Disabled, QPalette::Light, brush18);
        palette8.setBrush(QPalette::Disabled, QPalette::Midlight, brush19);
        palette8.setBrush(QPalette::Disabled, QPalette::Dark, brush20);
        palette8.setBrush(QPalette::Disabled, QPalette::Mid, brush21);
        palette8.setBrush(QPalette::Disabled, QPalette::Text, brush20);
        palette8.setBrush(QPalette::Disabled, QPalette::BrightText, brush8);
        palette8.setBrush(QPalette::Disabled, QPalette::ButtonText, brush20);
        palette8.setBrush(QPalette::Disabled, QPalette::Base, brush17);
        palette8.setBrush(QPalette::Disabled, QPalette::Window, brush17);
        palette8.setBrush(QPalette::Disabled, QPalette::Shadow, brush3);
        palette8.setBrush(QPalette::Disabled, QPalette::AlternateBase, brush15);
        palette8.setBrush(QPalette::Disabled, QPalette::ToolTipBase, brush10);
        palette8.setBrush(QPalette::Disabled, QPalette::ToolTipText, brush3);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette8.setBrush(QPalette::Disabled, QPalette::PlaceholderText, brush16);
#endif
        Sin_but->setPalette(palette8);

        gridLayout->addWidget(Sin_but, 2, 4, 1, 1);

        Cos_but = new QPushButton(centralwidget);
        Cos_but->setObjectName(QString::fromUtf8("Cos_but"));
        sizePolicy.setHeightForWidth(Cos_but->sizePolicy().hasHeightForWidth());
        Cos_but->setSizePolicy(sizePolicy);
        QPalette palette9;
        palette9.setBrush(QPalette::Active, QPalette::WindowText, brush3);
        palette9.setBrush(QPalette::Active, QPalette::Button, brush17);
        palette9.setBrush(QPalette::Active, QPalette::Light, brush18);
        palette9.setBrush(QPalette::Active, QPalette::Midlight, brush19);
        palette9.setBrush(QPalette::Active, QPalette::Dark, brush20);
        palette9.setBrush(QPalette::Active, QPalette::Mid, brush21);
        palette9.setBrush(QPalette::Active, QPalette::Text, brush3);
        palette9.setBrush(QPalette::Active, QPalette::BrightText, brush8);
        palette9.setBrush(QPalette::Active, QPalette::ButtonText, brush3);
        palette9.setBrush(QPalette::Active, QPalette::Base, brush8);
        palette9.setBrush(QPalette::Active, QPalette::Window, brush17);
        palette9.setBrush(QPalette::Active, QPalette::Shadow, brush3);
        palette9.setBrush(QPalette::Active, QPalette::AlternateBase, brush22);
        palette9.setBrush(QPalette::Active, QPalette::ToolTipBase, brush10);
        palette9.setBrush(QPalette::Active, QPalette::ToolTipText, brush3);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette9.setBrush(QPalette::Active, QPalette::PlaceholderText, brush11);
#endif
        palette9.setBrush(QPalette::Inactive, QPalette::WindowText, brush3);
        palette9.setBrush(QPalette::Inactive, QPalette::Button, brush1);
        palette9.setBrush(QPalette::Inactive, QPalette::Light, brush8);
        palette9.setBrush(QPalette::Inactive, QPalette::Midlight, brush12);
        palette9.setBrush(QPalette::Inactive, QPalette::Dark, brush13);
        palette9.setBrush(QPalette::Inactive, QPalette::Mid, brush13);
        palette9.setBrush(QPalette::Inactive, QPalette::Text, brush3);
        palette9.setBrush(QPalette::Inactive, QPalette::BrightText, brush8);
        palette9.setBrush(QPalette::Inactive, QPalette::ButtonText, brush3);
        palette9.setBrush(QPalette::Inactive, QPalette::Base, brush8);
        palette9.setBrush(QPalette::Inactive, QPalette::Window, brush1);
        palette9.setBrush(QPalette::Inactive, QPalette::Shadow, brush14);
        palette9.setBrush(QPalette::Inactive, QPalette::AlternateBase, brush15);
        palette9.setBrush(QPalette::Inactive, QPalette::ToolTipBase, brush10);
        palette9.setBrush(QPalette::Inactive, QPalette::ToolTipText, brush3);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette9.setBrush(QPalette::Inactive, QPalette::PlaceholderText, brush16);
#endif
        palette9.setBrush(QPalette::Disabled, QPalette::WindowText, brush20);
        palette9.setBrush(QPalette::Disabled, QPalette::Button, brush17);
        palette9.setBrush(QPalette::Disabled, QPalette::Light, brush18);
        palette9.setBrush(QPalette::Disabled, QPalette::Midlight, brush19);
        palette9.setBrush(QPalette::Disabled, QPalette::Dark, brush20);
        palette9.setBrush(QPalette::Disabled, QPalette::Mid, brush21);
        palette9.setBrush(QPalette::Disabled, QPalette::Text, brush20);
        palette9.setBrush(QPalette::Disabled, QPalette::BrightText, brush8);
        palette9.setBrush(QPalette::Disabled, QPalette::ButtonText, brush20);
        palette9.setBrush(QPalette::Disabled, QPalette::Base, brush17);
        palette9.setBrush(QPalette::Disabled, QPalette::Window, brush17);
        palette9.setBrush(QPalette::Disabled, QPalette::Shadow, brush3);
        palette9.setBrush(QPalette::Disabled, QPalette::AlternateBase, brush15);
        palette9.setBrush(QPalette::Disabled, QPalette::ToolTipBase, brush10);
        palette9.setBrush(QPalette::Disabled, QPalette::ToolTipText, brush3);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette9.setBrush(QPalette::Disabled, QPalette::PlaceholderText, brush16);
#endif
        Cos_but->setPalette(palette9);

        gridLayout->addWidget(Cos_but, 3, 4, 1, 1);

        Div_but = new QPushButton(centralwidget);
        Div_but->setObjectName(QString::fromUtf8("Div_but"));
        sizePolicy.setHeightForWidth(Div_but->sizePolicy().hasHeightForWidth());
        Div_but->setSizePolicy(sizePolicy);
        QPalette palette10;
        palette10.setBrush(QPalette::Active, QPalette::WindowText, brush3);
        palette10.setBrush(QPalette::Active, QPalette::Button, brush17);
        palette10.setBrush(QPalette::Active, QPalette::Light, brush18);
        palette10.setBrush(QPalette::Active, QPalette::Midlight, brush19);
        palette10.setBrush(QPalette::Active, QPalette::Dark, brush20);
        palette10.setBrush(QPalette::Active, QPalette::Mid, brush21);
        palette10.setBrush(QPalette::Active, QPalette::Text, brush3);
        palette10.setBrush(QPalette::Active, QPalette::BrightText, brush8);
        palette10.setBrush(QPalette::Active, QPalette::ButtonText, brush3);
        palette10.setBrush(QPalette::Active, QPalette::Base, brush8);
        palette10.setBrush(QPalette::Active, QPalette::Window, brush17);
        palette10.setBrush(QPalette::Active, QPalette::Shadow, brush3);
        palette10.setBrush(QPalette::Active, QPalette::AlternateBase, brush22);
        palette10.setBrush(QPalette::Active, QPalette::ToolTipBase, brush10);
        palette10.setBrush(QPalette::Active, QPalette::ToolTipText, brush3);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette10.setBrush(QPalette::Active, QPalette::PlaceholderText, brush11);
#endif
        palette10.setBrush(QPalette::Inactive, QPalette::WindowText, brush3);
        palette10.setBrush(QPalette::Inactive, QPalette::Button, brush1);
        palette10.setBrush(QPalette::Inactive, QPalette::Light, brush8);
        palette10.setBrush(QPalette::Inactive, QPalette::Midlight, brush12);
        palette10.setBrush(QPalette::Inactive, QPalette::Dark, brush13);
        palette10.setBrush(QPalette::Inactive, QPalette::Mid, brush13);
        palette10.setBrush(QPalette::Inactive, QPalette::Text, brush3);
        palette10.setBrush(QPalette::Inactive, QPalette::BrightText, brush8);
        palette10.setBrush(QPalette::Inactive, QPalette::ButtonText, brush3);
        palette10.setBrush(QPalette::Inactive, QPalette::Base, brush8);
        palette10.setBrush(QPalette::Inactive, QPalette::Window, brush1);
        palette10.setBrush(QPalette::Inactive, QPalette::Shadow, brush14);
        palette10.setBrush(QPalette::Inactive, QPalette::AlternateBase, brush15);
        palette10.setBrush(QPalette::Inactive, QPalette::ToolTipBase, brush10);
        palette10.setBrush(QPalette::Inactive, QPalette::ToolTipText, brush3);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette10.setBrush(QPalette::Inactive, QPalette::PlaceholderText, brush16);
#endif
        palette10.setBrush(QPalette::Disabled, QPalette::WindowText, brush20);
        palette10.setBrush(QPalette::Disabled, QPalette::Button, brush17);
        palette10.setBrush(QPalette::Disabled, QPalette::Light, brush18);
        palette10.setBrush(QPalette::Disabled, QPalette::Midlight, brush19);
        palette10.setBrush(QPalette::Disabled, QPalette::Dark, brush20);
        palette10.setBrush(QPalette::Disabled, QPalette::Mid, brush21);
        palette10.setBrush(QPalette::Disabled, QPalette::Text, brush20);
        palette10.setBrush(QPalette::Disabled, QPalette::BrightText, brush8);
        palette10.setBrush(QPalette::Disabled, QPalette::ButtonText, brush20);
        palette10.setBrush(QPalette::Disabled, QPalette::Base, brush17);
        palette10.setBrush(QPalette::Disabled, QPalette::Window, brush17);
        palette10.setBrush(QPalette::Disabled, QPalette::Shadow, brush3);
        palette10.setBrush(QPalette::Disabled, QPalette::AlternateBase, brush15);
        palette10.setBrush(QPalette::Disabled, QPalette::ToolTipBase, brush10);
        palette10.setBrush(QPalette::Disabled, QPalette::ToolTipText, brush3);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette10.setBrush(QPalette::Disabled, QPalette::PlaceholderText, brush16);
#endif
        Div_but->setPalette(palette10);

        gridLayout->addWidget(Div_but, 0, 3, 1, 1);


        horizontalLayout->addLayout(gridLayout);

        Total_but = new QPushButton(centralwidget);
        Total_but->setObjectName(QString::fromUtf8("Total_but"));
        QSizePolicy sizePolicy1(QSizePolicy::Minimum, QSizePolicy::Expanding);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(Total_but->sizePolicy().hasHeightForWidth());
        Total_but->setSizePolicy(sizePolicy1);
        QPalette palette11;
        palette11.setBrush(QPalette::Active, QPalette::WindowText, brush3);
        palette11.setBrush(QPalette::Active, QPalette::Button, brush17);
        QBrush brush23(QColor(225, 210, 255, 255));
        brush23.setStyle(Qt::SolidPattern);
        palette11.setBrush(QPalette::Active, QPalette::Light, brush23);
        QBrush brush24(QColor(0, 255, 255, 255));
        brush24.setStyle(Qt::SolidPattern);
        palette11.setBrush(QPalette::Active, QPalette::Midlight, brush24);
        palette11.setBrush(QPalette::Active, QPalette::Dark, brush20);
        palette11.setBrush(QPalette::Active, QPalette::Mid, brush21);
        palette11.setBrush(QPalette::Active, QPalette::Text, brush3);
        palette11.setBrush(QPalette::Active, QPalette::BrightText, brush8);
        palette11.setBrush(QPalette::Active, QPalette::ButtonText, brush3);
        palette11.setBrush(QPalette::Active, QPalette::Base, brush8);
        palette11.setBrush(QPalette::Active, QPalette::Window, brush8);
        palette11.setBrush(QPalette::Active, QPalette::Shadow, brush3);
        palette11.setBrush(QPalette::Active, QPalette::HighlightedText, brush);
        palette11.setBrush(QPalette::Active, QPalette::AlternateBase, brush);
        palette11.setBrush(QPalette::Active, QPalette::ToolTipBase, brush10);
        palette11.setBrush(QPalette::Active, QPalette::ToolTipText, brush3);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette11.setBrush(QPalette::Active, QPalette::PlaceholderText, brush11);
#endif
        palette11.setBrush(QPalette::Inactive, QPalette::WindowText, brush3);
        palette11.setBrush(QPalette::Inactive, QPalette::Button, brush1);
        palette11.setBrush(QPalette::Inactive, QPalette::Light, brush8);
        palette11.setBrush(QPalette::Inactive, QPalette::Midlight, brush12);
        palette11.setBrush(QPalette::Inactive, QPalette::Dark, brush13);
        palette11.setBrush(QPalette::Inactive, QPalette::Mid, brush13);
        palette11.setBrush(QPalette::Inactive, QPalette::Text, brush3);
        palette11.setBrush(QPalette::Inactive, QPalette::BrightText, brush8);
        palette11.setBrush(QPalette::Inactive, QPalette::ButtonText, brush3);
        palette11.setBrush(QPalette::Inactive, QPalette::Base, brush8);
        palette11.setBrush(QPalette::Inactive, QPalette::Window, brush1);
        palette11.setBrush(QPalette::Inactive, QPalette::Shadow, brush14);
        palette11.setBrush(QPalette::Inactive, QPalette::HighlightedText, brush3);
        palette11.setBrush(QPalette::Inactive, QPalette::AlternateBase, brush15);
        palette11.setBrush(QPalette::Inactive, QPalette::ToolTipBase, brush10);
        palette11.setBrush(QPalette::Inactive, QPalette::ToolTipText, brush3);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette11.setBrush(QPalette::Inactive, QPalette::PlaceholderText, brush16);
#endif
        palette11.setBrush(QPalette::Disabled, QPalette::WindowText, brush20);
        palette11.setBrush(QPalette::Disabled, QPalette::Button, brush17);
        palette11.setBrush(QPalette::Disabled, QPalette::Light, brush23);
        palette11.setBrush(QPalette::Disabled, QPalette::Midlight, brush24);
        palette11.setBrush(QPalette::Disabled, QPalette::Dark, brush20);
        palette11.setBrush(QPalette::Disabled, QPalette::Mid, brush21);
        palette11.setBrush(QPalette::Disabled, QPalette::Text, brush20);
        palette11.setBrush(QPalette::Disabled, QPalette::BrightText, brush8);
        palette11.setBrush(QPalette::Disabled, QPalette::ButtonText, brush20);
        palette11.setBrush(QPalette::Disabled, QPalette::Base, brush8);
        palette11.setBrush(QPalette::Disabled, QPalette::Window, brush8);
        palette11.setBrush(QPalette::Disabled, QPalette::Shadow, brush3);
        palette11.setBrush(QPalette::Disabled, QPalette::HighlightedText, brush8);
        palette11.setBrush(QPalette::Disabled, QPalette::AlternateBase, brush15);
        palette11.setBrush(QPalette::Disabled, QPalette::ToolTipBase, brush10);
        palette11.setBrush(QPalette::Disabled, QPalette::ToolTipText, brush3);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette11.setBrush(QPalette::Disabled, QPalette::PlaceholderText, brush16);
#endif
        Total_but->setPalette(palette11);
        QFont font1;
        font1.setPointSize(10);
        font1.setBold(true);
        Total_but->setFont(font1);

        horizontalLayout->addWidget(Total_but);


        verticalLayout->addLayout(horizontalLayout);


        gridLayout_2->addLayout(verticalLayout, 3, 0, 1, 2);

        textEdit = new QTextEdit(centralwidget);
        textEdit->setObjectName(QString::fromUtf8("textEdit"));

        gridLayout_2->addWidget(textEdit, 0, 0, 1, 1);

        MainWindow->setCentralWidget(centralwidget);

        retranslateUi(MainWindow);

        Total_but->setDefault(false);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", nullptr));
        bck_but->setText(QApplication::translate("MainWindow", "<-", nullptr));
        ClearEm_but->setText(QApplication::translate("MainWindow", "CE", nullptr));
        ClearAll_but->setText(QApplication::translate("MainWindow", "ClearAll", nullptr));
        Plus_but->setText(QApplication::translate("MainWindow", "+", nullptr));
        Mult_but->setText(QApplication::translate("MainWindow", "*", nullptr));
        two_but->setText(QApplication::translate("MainWindow", "2", nullptr));
        nule_but->setText(QApplication::translate("MainWindow", "0", nullptr));
        four_but->setText(QApplication::translate("MainWindow", "4", nullptr));
        Inverse_but->setText(QApplication::translate("MainWindow", "-/+", nullptr));
        six_but->setText(QApplication::translate("MainWindow", "6", nullptr));
        five_but->setText(QApplication::translate("MainWindow", "5", nullptr));
        seven_but->setText(QApplication::translate("MainWindow", "7", nullptr));
        dot_but->setText(QApplication::translate("MainWindow", ".", nullptr));
        eight_but->setText(QApplication::translate("MainWindow", "8", nullptr));
        Minus_but->setText(QApplication::translate("MainWindow", "-", nullptr));
        one_but->setText(QApplication::translate("MainWindow", "1", nullptr));
        three_but->setText(QApplication::translate("MainWindow", "3", nullptr));
        nine_but->setText(QApplication::translate("MainWindow", "9", nullptr));
        Log_but->setText(QApplication::translate("MainWindow", "LOGa(x)", nullptr));
        Pow_but->setText(QApplication::translate("MainWindow", "x^a", nullptr));
        Sin_but->setText(QApplication::translate("MainWindow", "sin(x)", nullptr));
        Cos_but->setText(QApplication::translate("MainWindow", "cos(x)", nullptr));
        Div_but->setText(QApplication::translate("MainWindow", "/", nullptr));
        Total_but->setText(QApplication::translate("MainWindow", "=", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
