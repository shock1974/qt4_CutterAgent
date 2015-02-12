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

    // 确保只运行一次

    QSystemSemaphore sema("CutterAgent",1,QSystemSemaphore::Open);

    sema.acquire();// 在临界区操作共享内存   SharedMemory

    QSharedMemory mem("CutterAgent1");// 全局对象名

    if (!mem.create(1))// 如果全局对象以存在则退出

    {

        QMessageBox::information(0, "CutterAgent","An instance has already been running.");

        sema.release();// 如果是 Unix 系统，会自动释放。

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
