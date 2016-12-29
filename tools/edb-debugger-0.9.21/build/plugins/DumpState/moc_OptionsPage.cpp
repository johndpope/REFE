/****************************************************************************
** Meta object code from reading C++ file 'OptionsPage.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.7.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../plugins/DumpState/OptionsPage.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'OptionsPage.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.7.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_DumpState__OptionsPage_t {
    QByteArrayData data[7];
    char stringdata0[131];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_DumpState__OptionsPage_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_DumpState__OptionsPage_t qt_meta_stringdata_DumpState__OptionsPage = {
    {
QT_MOC_LITERAL(0, 0, 22), // "DumpState::OptionsPage"
QT_MOC_LITERAL(1, 23, 36), // "on_instructionsBeforeIP_value..."
QT_MOC_LITERAL(2, 60, 0), // ""
QT_MOC_LITERAL(3, 61, 1), // "i"
QT_MOC_LITERAL(4, 63, 35), // "on_instructionsAfterIP_valueC..."
QT_MOC_LITERAL(5, 99, 25), // "on_colorizeOutput_toggled"
QT_MOC_LITERAL(6, 125, 5) // "value"

    },
    "DumpState::OptionsPage\0"
    "on_instructionsBeforeIP_valueChanged\0"
    "\0i\0on_instructionsAfterIP_valueChanged\0"
    "on_colorizeOutput_toggled\0value"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_DumpState__OptionsPage[] = {

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
       4,    1,   32,    2, 0x0a /* Public */,
       5,    1,   35,    2, 0x0a /* Public */,

 // slots: parameters
    QMetaType::Void, QMetaType::Int,    3,
    QMetaType::Void, QMetaType::Int,    3,
    QMetaType::Void, QMetaType::Bool,    6,

       0        // eod
};

void DumpState::OptionsPage::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        OptionsPage *_t = static_cast<OptionsPage *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->on_instructionsBeforeIP_valueChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 1: _t->on_instructionsAfterIP_valueChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 2: _t->on_colorizeOutput_toggled((*reinterpret_cast< bool(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObject DumpState::OptionsPage::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_DumpState__OptionsPage.data,
      qt_meta_data_DumpState__OptionsPage,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *DumpState::OptionsPage::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *DumpState::OptionsPage::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_DumpState__OptionsPage.stringdata0))
        return static_cast<void*>(const_cast< OptionsPage*>(this));
    return QWidget::qt_metacast(_clname);
}

int DumpState::OptionsPage::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
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
