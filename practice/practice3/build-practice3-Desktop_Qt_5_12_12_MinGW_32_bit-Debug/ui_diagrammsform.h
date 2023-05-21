/********************************************************************************
** Form generated from reading UI file 'diagrammsform.ui'
**
** Created by: Qt User Interface Compiler version 5.12.12
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DIAGRAMMSFORM_H
#define UI_DIAGRAMMSFORM_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_DiagrammsForm
{
public:

    void setupUi(QWidget *DiagrammsForm)
    {
        if (DiagrammsForm->objectName().isEmpty())
            DiagrammsForm->setObjectName(QString::fromUtf8("DiagrammsForm"));
        DiagrammsForm->resize(400, 300);

        retranslateUi(DiagrammsForm);

        QMetaObject::connectSlotsByName(DiagrammsForm);
    } // setupUi

    void retranslateUi(QWidget *DiagrammsForm)
    {
        DiagrammsForm->setWindowTitle(QApplication::translate("DiagrammsForm", "Form", nullptr));
    } // retranslateUi

};

namespace Ui {
    class DiagrammsForm: public Ui_DiagrammsForm {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DIAGRAMMSFORM_H
