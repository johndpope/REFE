/****************************************************************************
** Meta object code from reading C++ file 'BinaryString.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.7.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../include/BinaryString.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'BinaryString.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.7.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_BinaryString_t {
    QByteArrayData data[6];
    char stringdata0[106];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_BinaryString_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_BinaryString_t qt_meta_stringdata_BinaryString = {
    {
QT_MOC_LITERAL(0, 0, 12), // "BinaryString"
QT_MOC_LITERAL(1, 13, 22), // "on_txtAscii_textEdited"
QT_MOC_LITERAL(2, 36, 0), // ""
QT_MOC_LITERAL(3, 37, 20), // "on_txtHex_textEdited"
QT_MOC_LITERAL(4, 58, 22), // "on_txtUTF16_textEdited"
QT_MOC_LITERAL(5, 81, 24) // "on_keepSize_stateChanged"

    },
    "BinaryString\0on_txtAscii_textEdited\0"
    "\0on_txtHex_textEdited\0on_txtUTF16_textEdited\0"
    "on_keepSize_stateChanged"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_BinaryString[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    1,   34,    2, 0x08 /* Private */,
       3,    1,   37,    2, 0x08 /* Private */,
       4,    1,   40,    2, 0x08 /* Private */,
       5,    0,   43,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void, QMetaType::QString,    2,
    QMetaType::Void, QMetaType::QString,    2,
    QMetaType::Void, QMetaType::QString,    2,
    QMetaType::Void,

       0        // eod
};

void BinaryString::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        BinaryString *_t = static_cast<BinaryString *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->on_txtAscii_textEdited((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 1: _t->on_txtHex_textEdited((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 2: _t->on_txtUTF16_textEdited((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 3: _t->on_keepSize_stateChanged(); break;
        default: ;
        }
    }
}

const QMetaObject BinaryString::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_BinaryString.data,
      qt_meta_data_BinaryString,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *BinaryString::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *BinaryString::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_BinaryString.stringdata0))
        return static_cast<void*>(const_cast< BinaryString*>(this));
    return QWidget::qt_metacast(_clname);
}

int BinaryString::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 4)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 4;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 4)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 4;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
