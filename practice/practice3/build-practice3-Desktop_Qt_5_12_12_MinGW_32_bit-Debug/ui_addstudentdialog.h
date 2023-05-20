/********************************************************************************
** Form generated from reading UI file 'addstudentdialog.ui'
**
** Created by: Qt User Interface Compiler version 5.12.12
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADDSTUDENTDIALOG_H
#define UI_ADDSTUDENTDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_AddStudentDialog
{
public:
    QDialogButtonBox *buttonBox;
    QWidget *verticalLayoutWidget;
    QVBoxLayout *verticalLayout;
    QLabel *nameLabel;
    QLineEdit *nameEdit;
    QLabel *lastNameLabel;
    QLineEdit *lastNameEdit;
    QLabel *groupLabel;
    QLineEdit *groupEdit;
    QLabel *ratingLabel;
    QLineEdit *ratingEdit;

    void setupUi(QDialog *AddStudentDialog)
    {
        if (AddStudentDialog->objectName().isEmpty())
            AddStudentDialog->setObjectName(QString::fromUtf8("AddStudentDialog"));
        AddStudentDialog->resize(400, 300);
        buttonBox = new QDialogButtonBox(AddStudentDialog);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setGeometry(QRect(20, 250, 361, 32));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);
        verticalLayoutWidget = new QWidget(AddStudentDialog);
        verticalLayoutWidget->setObjectName(QString::fromUtf8("verticalLayoutWidget"));
        verticalLayoutWidget->setGeometry(QRect(20, 20, 361, 221));
        verticalLayout = new QVBoxLayout(verticalLayoutWidget);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        nameLabel = new QLabel(verticalLayoutWidget);
        nameLabel->setObjectName(QString::fromUtf8("nameLabel"));

        verticalLayout->addWidget(nameLabel);

        nameEdit = new QLineEdit(verticalLayoutWidget);
        nameEdit->setObjectName(QString::fromUtf8("nameEdit"));

        verticalLayout->addWidget(nameEdit);

        lastNameLabel = new QLabel(verticalLayoutWidget);
        lastNameLabel->setObjectName(QString::fromUtf8("lastNameLabel"));

        verticalLayout->addWidget(lastNameLabel);

        lastNameEdit = new QLineEdit(verticalLayoutWidget);
        lastNameEdit->setObjectName(QString::fromUtf8("lastNameEdit"));

        verticalLayout->addWidget(lastNameEdit);

        groupLabel = new QLabel(verticalLayoutWidget);
        groupLabel->setObjectName(QString::fromUtf8("groupLabel"));

        verticalLayout->addWidget(groupLabel);

        groupEdit = new QLineEdit(verticalLayoutWidget);
        groupEdit->setObjectName(QString::fromUtf8("groupEdit"));

        verticalLayout->addWidget(groupEdit);

        ratingLabel = new QLabel(verticalLayoutWidget);
        ratingLabel->setObjectName(QString::fromUtf8("ratingLabel"));

        verticalLayout->addWidget(ratingLabel);

        ratingEdit = new QLineEdit(verticalLayoutWidget);
        ratingEdit->setObjectName(QString::fromUtf8("ratingEdit"));

        verticalLayout->addWidget(ratingEdit);


        retranslateUi(AddStudentDialog);
        QObject::connect(buttonBox, SIGNAL(accepted()), AddStudentDialog, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), AddStudentDialog, SLOT(reject()));

        QMetaObject::connectSlotsByName(AddStudentDialog);
    } // setupUi

    void retranslateUi(QDialog *AddStudentDialog)
    {
        AddStudentDialog->setWindowTitle(QApplication::translate("AddStudentDialog", "Dialog", nullptr));
        nameLabel->setText(QApplication::translate("AddStudentDialog", "\320\230\320\274\321\217", nullptr));
        lastNameLabel->setText(QApplication::translate("AddStudentDialog", "\320\244\320\260\320\274\320\270\320\273\320\270\321\217", nullptr));
        groupLabel->setText(QApplication::translate("AddStudentDialog", "\320\223\321\200\321\203\320\277\320\277\320\260", nullptr));
        ratingLabel->setText(QApplication::translate("AddStudentDialog", "\320\240\320\265\320\271\321\202\320\270\320\275\320\263 (\320\276\321\202 0 \320\264\320\276 100)", nullptr));
    } // retranslateUi

};

namespace Ui {
    class AddStudentDialog: public Ui_AddStudentDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADDSTUDENTDIALOG_H
