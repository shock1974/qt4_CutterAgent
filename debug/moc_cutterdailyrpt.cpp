/****************************************************************************
** Meta object code from reading C++ file 'cutterdailyrpt.h'
**
** Created: Wed Dec 10 08:11:50 2014
**      by: The Qt Meta Object Compiler version 62 (Qt 4.7.4)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../cutterdailyrpt.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'cutterdailyrpt.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 62
#error "This file was generated using the moc from 4.7.4. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_CutterDailyRpt[] = {

 // content:
       5,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
       8,   14, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // properties: name, type, flags
      23,   15, 0x0a095103,
      28,   15, 0x0a095103,
      33,   15, 0x0a095103,
      38,   15, 0x0a095103,
      43,   15, 0x0a095103,
      48,   15, 0x0a095103,
      53,   15, 0x0a095103,
      58,   15, 0x0a095103,

       0        // eod
};

static const char qt_meta_stringdata_CutterDailyRpt[] = {
    "CutterDailyRpt\0QString\0s001\0s002\0s003\0"
    "s004\0s005\0s006\0s007\0s008\0"
};

const QMetaObject CutterDailyRpt::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_CutterDailyRpt,
      qt_meta_data_CutterDailyRpt, 0 }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &CutterDailyRpt::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *CutterDailyRpt::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *CutterDailyRpt::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_CutterDailyRpt))
        return static_cast<void*>(const_cast< CutterDailyRpt*>(this));
    return QObject::qt_metacast(_clname);
}

int CutterDailyRpt::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    
#ifndef QT_NO_PROPERTIES
     if (_c == QMetaObject::ReadProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QString*>(_v) = getS001(); break;
        case 1: *reinterpret_cast< QString*>(_v) = getS002(); break;
        case 2: *reinterpret_cast< QString*>(_v) = getS003(); break;
        case 3: *reinterpret_cast< QString*>(_v) = getS004(); break;
        case 4: *reinterpret_cast< QString*>(_v) = getS005(); break;
        case 5: *reinterpret_cast< QString*>(_v) = getS006(); break;
        case 6: *reinterpret_cast< QString*>(_v) = getS007(); break;
        case 7: *reinterpret_cast< QString*>(_v) = getS008(); break;
        }
        _id -= 8;
    } else if (_c == QMetaObject::WriteProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: setS001(*reinterpret_cast< QString*>(_v)); break;
        case 1: setS002(*reinterpret_cast< QString*>(_v)); break;
        case 2: setS003(*reinterpret_cast< QString*>(_v)); break;
        case 3: setS004(*reinterpret_cast< QString*>(_v)); break;
        case 4: setS005(*reinterpret_cast< QString*>(_v)); break;
        case 5: setS006(*reinterpret_cast< QString*>(_v)); break;
        case 6: setS007(*reinterpret_cast< QString*>(_v)); break;
        case 7: setS008(*reinterpret_cast< QString*>(_v)); break;
        }
        _id -= 8;
    } else if (_c == QMetaObject::ResetProperty) {
        _id -= 8;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 8;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 8;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 8;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 8;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 8;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}
QT_END_MOC_NAMESPACE
