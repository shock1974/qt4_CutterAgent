#include "CutterAgentSvc.h"
#include "ui_CutterAgentSvc.h"



CutterAgentSvc::~CutterAgentSvc()
{
    delete conf;
    delete ui;
}
CutterAgentSvc::CutterAgentSvc(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::CutterAgentSvc)
{
    QTextCodec::setCodecForTr(QTextCodec::codecForName("GB2312"));
    setMinimumSize(200,100);
    b1=new QPushButton("Asset ID",this);
    b1->setGeometry(20,20,160,40);
    QIcon icon = QIcon("app.ico");
    setWindowIcon(icon);
    trayIcon = new QSystemTrayIcon(this);
    trayIcon->setIcon(icon);
    createActions();
    createTrayIcon();
    trayIcon->show();
    setWindowTitle(tr("CutterAgent V2.12(rel:20141210)"));
    conf =new Global();
    conf->init();
    alarmProcessor.setGlobal(conf);
    alarmProcessor.start();
    optProcessor.setGlobal(conf);
    optProcessor.start();
    licProcessor.setGlobal(conf);
    licProcessor.start();



    connect(trayIcon,SIGNAL(activated(QSystemTrayIcon::ActivationReason)),this,SLOT(iconActivated(QSystemTrayIcon::ActivationReason)));
    connect(b1,SIGNAL(clicked()),this,SLOT(showM()));
    connect(&alarmProcessor,SIGNAL(handled(const QString &)),this,SLOT(showPrc(const QString &)));
    connect(&optProcessor,SIGNAL(handled(const QString &)),this,SLOT(showPrc(const QString &)));
    connect(&licProcessor,SIGNAL(handled(const QString &)),this,SLOT(showPrc(const QString &)));

}

void CutterAgentSvc::showPrc(const QString &msg)
{
    QString titlec=QString::fromLocal8Bit("执行内容");
    QString textc=msg.toLocal8Bit().data();
    trayIcon->showMessage(titlec,textc,QSystemTrayIcon::Information,5000);
}
void CutterAgentSvc::showM()
{
    QString titlec=QString::fromLocal8Bit("欢迎使用CutterAgent v2.12");
    QString textc=QString("%1:%2").arg(QString::fromLocal8Bit("资产编号")).arg(conf->assetId);//::fromLocal8Bit("测试内容单击、双击、中键、按钮");
    trayIcon->showMessage(titlec,textc,QSystemTrayIcon::Information,5000);
}

void CutterAgentSvc::showMessage(QString &msg)
{
    QString titlec=msg;
    QString textc=QString::fromLocal8Bit("测试内容单击、双击、中键、按钮");
    trayIcon->showMessage(titlec,textc,QSystemTrayIcon::Information,5000);
}

void CutterAgentSvc::iconActivated(QSystemTrayIcon::ActivationReason reason)
{
    switch (reason) {
    case QSystemTrayIcon::Trigger:
    {
        QString message = QString::fromLocal8Bit("单击");
        //showMessage(message);
     }
        break;
    case QSystemTrayIcon::DoubleClick:
        //ui->setupUi(this);
        showNormal();
        break;
    case QSystemTrayIcon::MiddleClick:
    {
        QString message = QString::fromLocal8Bit("");
        showMessage(message);
    }
        break;
    default:
        ;
    }
}

void CutterAgentSvc::createActions()
{
    minimizeAction = new QAction(QString::fromLocal8Bit("最小化 (&I)"), this);
    connect(minimizeAction, SIGNAL(triggered()), this, SLOT(hide()));

    maximizeAction = new QAction(QString::fromLocal8Bit("最大化 (&X)"), this);
    connect(maximizeAction, SIGNAL(triggered()), this, SLOT(showMaximized()));

    restoreAction = new QAction(QString::fromLocal8Bit("还原 (&R)"), this);
    connect(restoreAction, SIGNAL(triggered()), this, SLOT(showNormal()));

    quitAction = new QAction(QString::fromLocal8Bit("退出 (&Q)"), this);
    connect(quitAction, SIGNAL(triggered()), qApp, SLOT(quit()));
}

void CutterAgentSvc::createTrayIcon()
{
    trayIconMenu = new QMenu(this);
    trayIconMenu->addAction(minimizeAction);
    trayIconMenu->addAction(maximizeAction);
    trayIconMenu->addAction(restoreAction);
    trayIconMenu->addSeparator();
    trayIconMenu->addAction(quitAction);
    trayIcon->setContextMenu(trayIconMenu);
}

//关闭到托盘---------
void CutterAgentSvc::closeEvent(QCloseEvent *e)
{
    e->ignore();
    this->hide();
}


//最小化到托盘----
void CutterAgentSvc::changeEvent(QEvent *e)
{
    if((e->type()==QEvent::WindowStateChange)&&this->isMinimized())
    {
        QTimer::singleShot(100, this, SLOT(close()));
    }
}

