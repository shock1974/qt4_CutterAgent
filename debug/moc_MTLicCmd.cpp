/****************************************************************************
** Meta object code from reading C++ file 'MTLicCmd.h'
**
** Created: Tue Nov 29 12:50:54 2011
**      by: The Qt Meta Object Compiler version 62 (Qt 4.7.4)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../MTLicCmd.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'MTLicCmd.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 62
#error "This file was generated using the moc from 4.7.4. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_MTLicCmd[] = {

 // content:
       5,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
       3,   14, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // properties: name, type, flags
      17,    9, 0x0a095103,
      22,    9, 0x0a095103,
      27,    9, 0x0a095103,

       0        // eod
};

static const char qt_meta_stringdata_MTLicCmd[] = {
    "MTLicCmd\0QString\0s001\0s002\0s003\0"
};

const QMetaObject MTLicCmd::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_MTLicCmd,
      qt_meta_data_MTLicCmd, 0 }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &MTLicCmd::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *MTLicCmd::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *MTLicCmd::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_MTLicCmd))
        return static_cast<void*>(const_cast< MTLicCmd*>(this));
    return QObject::qt_metacast(_clname);
}

int MTLicCmd::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
        }
        _id -= 3;
    } else if (_c == QMetaObject::WriteProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: setS001(*reinterpret_cast< QString*>(_v)); break;
        case 1: setS002(*reinterpret_cast< QString*>(_v)); break;
        case 2: setS003(*reinterpret_cast< QString*>(_v)); break;
        }
        _id -= 3;
    } else if (_c == QMetaObject::ResetProperty) {
        _id -= 3;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 3;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 3;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 3;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 3;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 3;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}
QT_END_MOC_NAMESPACE
