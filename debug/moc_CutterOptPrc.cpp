/****************************************************************************
** Meta object code from reading C++ file 'CutterOptPrc.h'
**
** Created: Wed Dec 10 08:12:22 2014
**      by: The Qt Meta Object Compiler version 62 (Qt 4.7.4)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../CutterOptPrc.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'CutterOptPrc.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 62
#error "This file was generated using the moc from 4.7.4. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_CutterOptPrc[] = {

 // content:
       5,       // revision
       0,       // classname
       0,    0, // classinfo
       2,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: signature, parameters, type, tag, flags
      18,   14,   13,   13, 0x05,

 // slots: signature, parameters, type, tag, flags
      53,   35,   13,   13, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_CutterOptPrc[] = {
    "CutterOptPrc\0\0msg\0handled(QString)\0"
    "ok,transid,result\0postedOptLog(bool,QString,QString)\0"
};

const QMetaObject CutterOptPrc::staticMetaObject = {
    { &QThread::staticMetaObject, qt_meta_stringdata_CutterOptPrc,
      qt_meta_data_CutterOptPrc, 0 }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &CutterOptPrc::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *CutterOptPrc::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *CutterOptPrc::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_CutterOptPrc))
        return static_cast<void*>(const_cast< CutterOptPrc*>(this));
    return QThread::qt_metacast(_clname);
}

int CutterOptPrc::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QThread::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: handled((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 1: postedOptLog((*reinterpret_cast< bool(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2])),(*reinterpret_cast< QString(*)>(_a[3]))); break;
        default: ;
        }
        _id -= 2;
    }
    return _id;
}

// SIGNAL 0
void CutterOptPrc::handled(const QString & _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_END_MOC_NAMESPACE
