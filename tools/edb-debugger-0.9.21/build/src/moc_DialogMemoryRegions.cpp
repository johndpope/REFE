/****************************************************************************
** Meta object code from reading C++ file 'DialogMemoryRegions.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.7.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../src/DialogMemoryRegions.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'DialogMemoryRegions.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.7.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_DialogMemoryRegions_t {
    QByteArrayData data[17];
    char stringdata0[257];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_DialogMemoryRegions_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_DialogMemoryRegions_t qt_meta_stringdata_DialogMemoryRegions = {
    {
QT_MOC_LITERAL(0, 0, 19), // "DialogMemoryRegions"
QT_MOC_LITERAL(1, 20, 43), // "on_regions_table_customContex..."
QT_MOC_LITERAL(2, 64, 0), // ""
QT_MOC_LITERAL(3, 65, 3), // "pos"
QT_MOC_LITERAL(4, 69, 30), // "on_regions_table_doubleClicked"
QT_MOC_LITERAL(5, 100, 5), // "index"
QT_MOC_LITERAL(6, 106, 15), // "set_access_none"
QT_MOC_LITERAL(7, 122, 12), // "set_access_r"
QT_MOC_LITERAL(8, 135, 12), // "set_access_w"
QT_MOC_LITERAL(9, 148, 12), // "set_access_x"
QT_MOC_LITERAL(10, 161, 13), // "set_access_rw"
QT_MOC_LITERAL(11, 175, 13), // "set_access_rx"
QT_MOC_LITERAL(12, 189, 13), // "set_access_wx"
QT_MOC_LITERAL(13, 203, 14), // "set_access_rwx"
QT_MOC_LITERAL(14, 218, 11), // "view_in_cpu"
QT_MOC_LITERAL(15, 230, 13), // "view_in_stack"
QT_MOC_LITERAL(16, 244, 12) // "view_in_dump"

    },
    "DialogMemoryRegions\0"
    "on_regions_table_customContextMenuRequested\0"
    "\0pos\0on_regions_table_doubleClicked\0"
    "index\0set_access_none\0set_access_r\0"
    "set_access_w\0set_access_x\0set_access_rw\0"
    "set_access_rx\0set_access_wx\0set_access_rwx\0"
    "view_in_cpu\0view_in_stack\0view_in_dump"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_DialogMemoryRegions[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      13,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    1,   79,    2, 0x08 /* Private */,
       4,    1,   82,    2, 0x08 /* Private */,
       6,    0,   85,    2, 0x08 /* Private */,
       7,    0,   86,    2, 0x08 /* Private */,
       8,    0,   87,    2, 0x08 /* Private */,
       9,    0,   88,    2, 0x08 /* Private */,
      10,    0,   89,    2, 0x08 /* Private */,
      11,    0,   90,    2, 0x08 /* Private */,
      12,    0,   91,    2, 0x08 /* Private */,
      13,    0,   92,    2, 0x08 /* Private */,
      14,    0,   93,    2, 0x08 /* Private */,
      15,    0,   94,    2, 0x08 /* Private */,
      16,    0,   95,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void, QMetaType::QPoint,    3,
    QMetaType::Void, QMetaType::QModelIndex,    5,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void DialogMemoryRegions::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        DialogMemoryRegions *_t = static_cast<DialogMemoryRegions *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->on_regions_table_customContextMenuRequested((*reinterpret_cast< const QPoint(*)>(_a[1]))); break;
        case 1: _t->on_regions_table_doubleClicked((*reinterpret_cast< const QModelIndex(*)>(_a[1]))); break;
        case 2: _t->set_access_none(); break;
        case 3: _t->set_access_r(); break;
        case 4: _t->set_access_w(); break;
        case 5: _t->set_access_x(); break;
        case 6: _t->set_access_rw(); break;
        case 7: _t->set_access_rx(); break;
        case 8: _t->set_access_wx(); break;
        case 9: _t->set_access_rwx(); break;
        case 10: _t->view_in_cpu(); break;
        case 11: _t->view_in_stack(); break;
        case 12: _t->view_in_dump(); break;
        default: ;
        }
    }
}

const QMetaObject DialogMemoryRegions::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_DialogMemoryRegions.data,
      qt_meta_data_DialogMemoryRegions,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *DialogMemoryRegions::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *DialogMemoryRegions::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_DialogMemoryRegions.stringdata0))
        return static_cast<void*>(const_cast< DialogMemoryRegions*>(this));
    return QDialog::qt_metacast(_clname);
}

int DialogMemoryRegions::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 13)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 13;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 13)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 13;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
