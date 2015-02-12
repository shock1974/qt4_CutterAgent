#ifndef CUTTERAGENTSVC_H
#define CUTTERAGENTSVC_H

#include <QtGui>
#include "CutterAltPrc.h"
#include "CutterOptPrc.h"
#include "processor/CutterSyncPrc.h"

#include "Global.h"
namespace Ui {
    class CutterAgentSvc;
}

class CutterAgentSvc : public QWidget
{
    Q_OBJECT

public:
    explicit CutterAgentSvc(QWidget *parent = 0);
    ~CutterAgentSvc();
    QPushButton *b1;
    QSystemTrayIcon *trayIcon;
    QString msg;
    void showMessage(QString &msg);
    void createActions();
    void createTrayIcon();
    QAction *minimizeAction;
    QAction *maximizeAction;
    QAction *restoreAction;
    QAction *quitAction;
    QMenu *trayIconMenu;
    void closeEvent(QCloseEvent *);
    void changeEvent(QEvent *);
    Global *conf;
private slots:
    void showM();
    void iconActivated(QSystemTrayIcon::ActivationReason reason);
public slots:
    void showPrc(const QString &msg);
private:
    Ui::CutterAgentSvc *ui;
    CutterAltPrc alarmProcessor;
    CutterOptPrc optProcessor;
    CutterSyncPrc licProcessor;
};

#endif // CUTTERAGENTSVC_H
