/****************************************************************************
** Meta object code from reading C++ file 'DialogInputValue.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.7.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../src/DialogInputValue.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'DialogInputValue.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.7.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_DialogInputValue_t {
    QByteArrayData data[5];
    char stringdata0[95];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_DialogInputValue_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_DialogInputValue_t qt_meta_stringdata_DialogInputValue = {
    {
QT_MOC_LITERAL(0, 0, 16), // "DialogInputValue"
QT_MOC_LITERAL(1, 17, 22), // "on_hexInput_textEdited"
QT_MOC_LITERAL(2, 40, 0), // ""
QT_MOC_LITERAL(3, 41, 25), // "on_signedInput_textEdited"
QT_MOC_LITERAL(4, 67, 27) // "on_unsignedInput_textEdited"

    },
    "DialogInputValue\0on_hexInput_textEdited\0"
    "\0on_signedInput_textEdited\0"
    "on_unsignedInput_textEdited"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_DialogInputValue[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    1,   29,    2, 0x0a /* Public */,
       3,    1,   32,    2, 0x0a /* Public */,
       4,    1,   35,    2, 0x0a /* Public */,

 // slots: parameters
    QMetaType::Void, QMetaType::QString,    2,
    QMetaType::Void, QMetaType::QString,    2,
    QMetaType::Void, QMetaType::QString,    2,

       0        // eod
};

void DialogInputValue::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        DialogInputValue *_t = static_cast<DialogInputValue *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->on_hexInput_textEdited((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 1: _t->on_signedInput_textEdited((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 2: _t->on_unsignedInput_textEdited((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObject DialogInputValue::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_DialogInputValue.data,
      qt_meta_data_DialogInputValue,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *DialogInputValue::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *DialogInputValue::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_DialogInputValue.stringdata0))
        return static_cast<void*>(const_cast< DialogInputValue*>(this));
    return QDialog::qt_metacast(_clname);
}

int DialogInputValue::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 3)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 3;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 3)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 3;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
