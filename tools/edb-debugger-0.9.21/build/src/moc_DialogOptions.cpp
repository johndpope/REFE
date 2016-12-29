/****************************************************************************
** Meta object code from reading C++ file 'DialogOptions.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.7.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../src/DialogOptions.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'DialogOptions.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.7.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_DialogOptions_t {
    QByteArrayData data[10];
    char stringdata0[143];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_DialogOptions_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_DialogOptions_t qt_meta_stringdata_DialogOptions = {
    {
QT_MOC_LITERAL(0, 0, 13), // "DialogOptions"
QT_MOC_LITERAL(1, 14, 23), // "on_btnSymbolDir_clicked"
QT_MOC_LITERAL(2, 38, 0), // ""
QT_MOC_LITERAL(3, 39, 23), // "on_btnPluginDir_clicked"
QT_MOC_LITERAL(4, 63, 17), // "on_btnTTY_clicked"
QT_MOC_LITERAL(5, 81, 24), // "on_btnSessionDir_clicked"
QT_MOC_LITERAL(6, 106, 10), // "closeEvent"
QT_MOC_LITERAL(7, 117, 12), // "QCloseEvent*"
QT_MOC_LITERAL(8, 130, 5), // "event"
QT_MOC_LITERAL(9, 136, 6) // "accept"

    },
    "DialogOptions\0on_btnSymbolDir_clicked\0"
    "\0on_btnPluginDir_clicked\0on_btnTTY_clicked\0"
    "on_btnSessionDir_clicked\0closeEvent\0"
    "QCloseEvent*\0event\0accept"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_DialogOptions[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       6,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   44,    2, 0x0a /* Public */,
       3,    0,   45,    2, 0x0a /* Public */,
       4,    0,   46,    2, 0x0a /* Public */,
       5,    0,   47,    2, 0x0a /* Public */,
       6,    1,   48,    2, 0x0a /* Public */,
       9,    0,   51,    2, 0x0a /* Public */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 7,    8,
    QMetaType::Void,

       0        // eod
};

void DialogOptions::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        DialogOptions *_t = static_cast<DialogOptions *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->on_btnSymbolDir_clicked(); break;
        case 1: _t->on_btnPluginDir_clicked(); break;
        case 2: _t->on_btnTTY_clicked(); break;
        case 3: _t->on_btnSessionDir_clicked(); break;
        case 4: _t->closeEvent((*reinterpret_cast< QCloseEvent*(*)>(_a[1]))); break;
        case 5: _t->accept(); break;
        default: ;
        }
    }
}

const QMetaObject DialogOptions::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_DialogOptions.data,
      qt_meta_data_DialogOptions,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *DialogOptions::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *DialogOptions::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_DialogOptions.stringdata0))
        return static_cast<void*>(const_cast< DialogOptions*>(this));
    return QDialog::qt_metacast(_clname);
}

int DialogOptions::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 6)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 6;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 6)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 6;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
