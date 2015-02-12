#ifndef HTLICMO_H
#define HTLICMO_H

#include <QObject>

class HYLicMO : public QObject
{
    Q_OBJECT
    Q_PROPERTY(QString s001 READ getS001 WRITE setS001)
    Q_PROPERTY(QString s002 READ getS002 WRITE setS002)
    Q_PROPERTY(QString s003 READ getS003 WRITE setS003)
    Q_PROPERTY(QString s004 READ getS004 WRITE setS004)
    Q_PROPERTY(QString s005 READ getS005 WRITE setS005)
    Q_PROPERTY(QString s006 READ getS006 WRITE setS006)
public:
    explicit HYLicMO();
    QString toString();
    void setS001(QString s);
    QString getS001();
    void setS002(QString s);
    QString getS002();
    void setS003(QString s);
    QString getS003();
    void setS004(QString s);
    QString getS004();
    void setS005(QString s);
    QString getS005();
    void setS006(QString s);
    QString getS006();
private:
    QString s001;
    QString s002;
    QString s003;
    QString s004;
    QString s005;
    QString s006;

signals:

public slots:

};

#endif // HTLICMO_H
