/****************************************************************************
** Meta object code from reading C++ file 'DialogAttach.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.7)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../DialogAttach.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'DialogAttach.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.7. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_DialogAttach[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       2,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      22,   14,   13,   13, 0x0a,
      57,   50,   13,   13, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_DialogAttach[] = {
    "DialogAttach\0\0checked\0on_filter_uid_clicked(bool)\0"
    "filter\0on_filter_textChanged(QString)\0"
};

void DialogAttach::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        DialogAttach *_t = static_cast<DialogAttach *>(_o);
        switch (_id) {
        case 0: _t->on_filter_uid_clicked((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 1: _t->on_filter_textChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData DialogAttach::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject DialogAttach::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_DialogAttach,
      qt_meta_data_DialogAttach, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &DialogAttach::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *DialogAttach::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *DialogAttach::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_DialogAttach))
        return static_cast<void*>(const_cast< DialogAttach*>(this));
    return QDialog::qt_metacast(_clname);
}

int DialogAttach::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 2)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 2;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
