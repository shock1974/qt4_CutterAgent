#include <QtGui/QApplication>
#include "CutterAgentSvc.h"
#include "Global.h"
#include <QString>
#include <QDateTime>
#include <QLocale>
#include "QDebug"
#include "QByteArray"
#include "QSystemSemaphore"
#include "QSharedMemory"
#include "QMessageBox"
int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    //    Global *conf=new Global();
    //    conf->init();

    //    //out<<conf->assetId<<" "<<conf->alrtLogPath<<endl;

    // ȷ��ֻ����һ��

    QSystemSemaphore sema("CutterAgent",1,QSystemSemaphore::Open);

    sema.acquire();// ���ٽ������������ڴ�   SharedMemory

    QSharedMemory mem("CutterAgent1");// ȫ�ֶ�����

    if (!mem.create(1))// ���ȫ�ֶ����Դ������˳�

    {

        QMessageBox::information(0, "CutterAgent","An instance has already been running.");

        sema.release();// ����� Unix ϵͳ�����Զ��ͷš�

        return 0;

    }
    sema.release();

    CutterAgentSvc w;
    //w.show();
    //QString str(conf->assetId);
    //w.showMessage(str);

//        QString q = "31323334";
//        QByteArray d = q.toAscii();
//        QByteArray s = d.fromHex(d);
//        qDebug()<<d<<"->"<<s<<endl;


    return a.exec();
}
