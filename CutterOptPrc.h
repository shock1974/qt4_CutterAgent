#ifndef CUTTEROPTPRC_H
#define CUTTEROPTPRC_H

#include <QThread>
#include "Global.h"
#include "cutteroptlog.h"
#include "cuttermonthlyrpt.h"
#include "cutterdailyrpt.h"
#include "utiities/JSonRpcSvc.h"
class CutterOptPrc : public QThread
{
    Q_OBJECT
public:
    explicit CutterOptPrc();
    void setGlobal(Global *global);

    void run();

signals:
    void handled(const QString &msg);
private:
    Global *global;
    JSonRpcSvc  http;
    //��ǰ�Ƿ����ϴ�����������ǣ����ܴ�����һ���ļ�
    bool isProcessing;

    void checkOptLogs();
    void handleOptLog(const QString &filename,CutterOptLog *log,CutterDailyRpt *drpt,CutterMonthlyRpt *mrpt);
    bool uploadOptLog(const QString &filename,CutterOptLog *log,CutterDailyRpt *drpt,CutterMonthlyRpt *mrpt);

public slots:
    void postedOptLog(bool ok,QString transid,QString result);

};

#endif // CUTTEROPTPRC_H
