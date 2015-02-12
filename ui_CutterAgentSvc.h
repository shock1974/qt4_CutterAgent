/********************************************************************************
** Form generated from reading UI file 'CutterAgentSvc.ui'
**
** Created: Wed Dec 10 08:09:13 2014
**      by: Qt User Interface Compiler version 4.7.4
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CUTTERAGENTSVC_H
#define UI_CUTTERAGENTSVC_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QHeaderView>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_CutterAgentSvc
{
public:

    void setupUi(QWidget *CutterAgentSvc)
    {
        if (CutterAgentSvc->objectName().isEmpty())
            CutterAgentSvc->setObjectName(QString::fromUtf8("CutterAgentSvc"));
        CutterAgentSvc->resize(300, 300);
        CutterAgentSvc->setMaximumSize(QSize(300, 300));
        QIcon icon;
        icon.addFile(QString::fromUtf8("app.ico"), QSize(), QIcon::Normal, QIcon::Off);
        CutterAgentSvc->setWindowIcon(icon);

        retranslateUi(CutterAgentSvc);

        QMetaObject::connectSlotsByName(CutterAgentSvc);
    } // setupUi

    void retranslateUi(QWidget *CutterAgentSvc)
    {
        CutterAgentSvc->setWindowTitle(QApplication::translate("CutterAgentSvc", "CutterAgentSvc", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class CutterAgentSvc: public Ui_CutterAgentSvc {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CUTTERAGENTSVC_H
