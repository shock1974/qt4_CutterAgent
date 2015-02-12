/********************************************************************************
** Form generated from reading UI file 'CutterAgentSvc.ui'
**
** Created by: Qt User Interface Compiler version 5.1.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CUTTERAGENTSVC_H
#define UI_CUTTERAGENTSVC_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_CutterAgentSvc
{
public:

    void setupUi(QWidget *CutterAgentSvc)
    {
        if (CutterAgentSvc->objectName().isEmpty())
            CutterAgentSvc->setObjectName(QStringLiteral("CutterAgentSvc"));
        CutterAgentSvc->resize(300, 300);
        CutterAgentSvc->setMaximumSize(QSize(300, 300));
        QIcon icon;
        icon.addFile(QStringLiteral("app.ico"), QSize(), QIcon::Normal, QIcon::Off);
        CutterAgentSvc->setWindowIcon(icon);

        retranslateUi(CutterAgentSvc);

        QMetaObject::connectSlotsByName(CutterAgentSvc);
    } // setupUi

    void retranslateUi(QWidget *CutterAgentSvc)
    {
        CutterAgentSvc->setWindowTitle(QApplication::translate("CutterAgentSvc", "CutterAgentSvc", 0));
    } // retranslateUi

};

namespace Ui {
    class CutterAgentSvc: public Ui_CutterAgentSvc {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CUTTERAGENTSVC_H
