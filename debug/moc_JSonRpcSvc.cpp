/****************************************************************************
** Meta object code from reading C++ file 'JSonRpcSvc.h'
**
** Created: Wed Dec 10 08:12:09 2014
**      by: The Qt Meta Object Compiler version 62 (Qt 4.7.4)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../utiities/JSonRpcSvc.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'JSonRpcSvc.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 62
#error "This file was generated using the moc from 4.7.4. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_JSonRpcSvc[] = {

 // content:
       5,       // revision
       0,       // classname
       0,    0, // classinfo
       8,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: signature, parameters, type, tag, flags
      33,   12,   11,   11, 0x05,

 // slots: signature, parameters, type, tag, flags
      70,   64,   11,   11, 0x0a,
      94,   89,   11,   11, 0x0a,
     131,  120,   11,   11, 0x0a,
     165,  120,   11,   11, 0x0a,
     208,  199,   11,   11, 0x0a,
     245,  242,   11,   11, 0x0a,
     278,  273,   11,   11, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_JSonRpcSvc[] = {
    "JSonRpcSvc\0\0error,transid,result\0"
    "httpDone(bool,QString,QString)\0error\0"
    "on_http_done(bool)\0stat\0"
    "on_http_stateChanged(int)\0done,total\0"
    "on_http_dataReadProgress(int,int)\0"
    "on_http_dataSendProgress(int,int)\0"
    "id,error\0on_http_requestFinished(int,bool)\0"
    "id\0on_http_requestStarted(int)\0resp\0"
    "on_http_responseHeaderReceived(QHttpResponseHeader)\0"
};

const QMetaObject JSonRpcSvc::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_JSonRpcSvc,
      qt_meta_data_JSonRpcSvc, 0 }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &JSonRpcSvc::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *JSonRpcSvc::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *JSonRpcSvc::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_JSonRpcSvc))
        return static_cast<void*>(const_cast< JSonRpcSvc*>(this));
    return QObject::qt_metacast(_clname);
}

int JSonRpcSvc::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: httpDone((*reinterpret_cast< const bool(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])),(*reinterpret_cast< const QString(*)>(_a[3]))); break;
        case 1: on_http_done((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 2: on_http_stateChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 3: on_http_dataReadProgress((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 4: on_http_dataSendProgress((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 5: on_http_requestFinished((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2]))); break;
        case 6: on_http_requestStarted((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 7: on_http_responseHeaderReceived((*reinterpret_cast< const QHttpResponseHeader(*)>(_a[1]))); break;
        default: ;
        }
        _id -= 8;
    }
    return _id;
}

// SIGNAL 0
void JSonRpcSvc::httpDone(const bool & _t1, const QString & _t2, const QString & _t3)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_END_MOC_NAMESPACE
