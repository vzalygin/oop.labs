/********************************************************************************
** Form generated from reading UI file 'numberfilterdialog.ui'
**
** Created by: Qt User Interface Compiler version 5.12.12
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_NUMBERFILTERDIALOG_H
#define UI_NUMBERFILTERDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_NumberFilterDialog
{
public:
    QDialogButtonBox *buttonBox;
    QWidget *verticalLayoutWidget;
    QVBoxLayout *verticalLayout;
    QLabel *label;
    QLineEdit *filterEdit;

    void setupUi(QDialog *NumberFilterDialog)
    {
        if (NumberFilterDialog->objectName().isEmpty())
            NumberFilterDialog->setObjectName(QString::fromUtf8("NumberFilterDialog"));
        NumberFilterDialog->resize(400, 111);
        buttonBox = new QDialogButtonBox(NumberFilterDialog);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setGeometry(QRect(20, 70, 361, 32));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);
        verticalLayoutWidget = new QWidget(NumberFilterDialog);
        verticalLayoutWidget->setObjectName(QString::fromUtf8("verticalLayoutWidget"));
        verticalLayoutWidget->setGeometry(QRect(10, 10, 371, 61));
        verticalLayout = new QVBoxLayout(verticalLayoutWidget);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        label = new QLabel(verticalLayoutWidget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setFrameShape(QFrame::WinPanel);

        verticalLayout->addWidget(label);

        filterEdit = new QLineEdit(verticalLayoutWidget);
        filterEdit->setObjectName(QString::fromUtf8("filterEdit"));

        verticalLayout->addWidget(filterEdit);


        retranslateUi(NumberFilterDialog);
        QObject::connect(buttonBox, SIGNAL(accepted()), NumberFilterDialog, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), NumberFilterDialog, SLOT(reject()));

        QMetaObject::connectSlotsByName(NumberFilterDialog);
    } // setupUi

    void retranslateUi(QDialog *NumberFilterDialog)
    {
        NumberFilterDialog->setWindowTitle(QApplication::translate("NumberFilterDialog", "Dialog", nullptr));
        label->setText(QApplication::translate("NumberFilterDialog", "\320\222\320\262\320\265\320\264\320\270\321\202\320\265 \321\204\320\270\320\273\321\214\321\202\321\200 (\321\207\320\270\321\201\320\273\320\276) \320\277\320\276 \320\272\320\276\320\273\320\270\321\207\320\265\321\201\321\202\320\262\321\203 \321\201\321\202\321\203\320\264\320\265\320\275\321\202\320\276\320\262", nullptr));
    } // retranslateUi

};

namespace Ui {
    class NumberFilterDialog: public Ui_NumberFilterDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_NUMBERFILTERDIALOG_H
