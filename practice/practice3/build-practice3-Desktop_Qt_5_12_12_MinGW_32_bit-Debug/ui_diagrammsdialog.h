/********************************************************************************
** Form generated from reading UI file 'diagrammsdialog.ui'
**
** Created by: Qt User Interface Compiler version 5.12.12
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DIAGRAMMSDIALOG_H
#define UI_DIAGRAMMSDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>

QT_BEGIN_NAMESPACE

class Ui_DiagrammsDialog
{
public:

    void setupUi(QDialog *DiagrammsDialog)
    {
        if (DiagrammsDialog->objectName().isEmpty())
            DiagrammsDialog->setObjectName(QString::fromUtf8("DiagrammsDialog"));
        DiagrammsDialog->resize(400, 300);

        retranslateUi(DiagrammsDialog);

        QMetaObject::connectSlotsByName(DiagrammsDialog);
    } // setupUi

    void retranslateUi(QDialog *DiagrammsDialog)
    {
        DiagrammsDialog->setWindowTitle(QApplication::translate("DiagrammsDialog", "Dialog", nullptr));
    } // retranslateUi

};

namespace Ui {
    class DiagrammsDialog: public Ui_DiagrammsDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DIAGRAMMSDIALOG_H
