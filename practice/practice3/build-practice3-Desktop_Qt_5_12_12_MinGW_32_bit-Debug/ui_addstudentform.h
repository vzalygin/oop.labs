/********************************************************************************
** Form generated from reading UI file 'addstudentform.ui'
**
** Created by: Qt User Interface Compiler version 5.12.12
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADDSTUDENTFORM_H
#define UI_ADDSTUDENTFORM_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_addstudentform
{
public:
    QWidget *verticalLayoutWidget;
    QVBoxLayout *verticalLayout;

    void setupUi(QWidget *addstudentform)
    {
        if (addstudentform->objectName().isEmpty())
            addstudentform->setObjectName(QString::fromUtf8("addstudentform"));
        addstudentform->setWindowModality(Qt::NonModal);
        addstudentform->resize(400, 300);
        addstudentform->setMinimumSize(QSize(400, 300));
        addstudentform->setMaximumSize(QSize(400, 300));
        verticalLayoutWidget = new QWidget(addstudentform);
        verticalLayoutWidget->setObjectName(QString::fromUtf8("verticalLayoutWidget"));
        verticalLayoutWidget->setGeometry(QRect(10, 10, 381, 281));
        verticalLayout = new QVBoxLayout(verticalLayoutWidget);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);

        retranslateUi(addstudentform);

        QMetaObject::connectSlotsByName(addstudentform);
    } // setupUi

    void retranslateUi(QWidget *addstudentform)
    {
        addstudentform->setWindowTitle(QApplication::translate("addstudentform", "Form", nullptr));
    } // retranslateUi

};

namespace Ui {
    class addstudentform: public Ui_addstudentform {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADDSTUDENTFORM_H
