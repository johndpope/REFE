/****************************************************************************
** Meta object code from reading C++ file 'DialogSymbolViewer.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.7.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../plugins/SymbolViewer/DialogSymbolViewer.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'DialogSymbolViewer.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.7.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_SymbolViewer__DialogSymbolViewer_t {
    QByteArrayData data[11];
    char stringdata0[201];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_SymbolViewer__DialogSymbolViewer_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_SymbolViewer__DialogSymbolViewer_t qt_meta_stringdata_SymbolViewer__DialogSymbolViewer = {
    {
QT_MOC_LITERAL(0, 0, 32), // "SymbolViewer::DialogSymbolViewer"
QT_MOC_LITERAL(1, 33, 25), // "on_listView_doubleClicked"
QT_MOC_LITERAL(2, 59, 0), // ""
QT_MOC_LITERAL(3, 60, 5), // "index"
QT_MOC_LITERAL(4, 66, 38), // "on_listView_customContextMenu..."
QT_MOC_LITERAL(5, 105, 3), // "pos"
QT_MOC_LITERAL(6, 109, 21), // "on_btnRefresh_clicked"
QT_MOC_LITERAL(7, 131, 15), // "mnuFollowInDump"
QT_MOC_LITERAL(8, 147, 21), // "mnuFollowInDumpNewTab"
QT_MOC_LITERAL(9, 169, 16), // "mnuFollowInStack"
QT_MOC_LITERAL(10, 186, 14) // "mnuFollowInCPU"

    },
    "SymbolViewer::DialogSymbolViewer\0"
    "on_listView_doubleClicked\0\0index\0"
    "on_listView_customContextMenuRequested\0"
    "pos\0on_btnRefresh_clicked\0mnuFollowInDump\0"
    "mnuFollowInDumpNewTab\0mnuFollowInStack\0"
    "mnuFollowInCPU"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_SymbolViewer__DialogSymbolViewer[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       7,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    1,   49,    2, 0x0a /* Public */,
       4,    1,   52,    2, 0x0a /* Public */,
       6,    0,   55,    2, 0x0a /* Public */,
       7,    0,   56,    2, 0x08 /* Private */,
       8,    0,   57,    2, 0x08 /* Private */,
       9,    0,   58,    2, 0x08 /* Private */,
      10,    0,   59,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void, QMetaType::QModelIndex,    3,
    QMetaType::Void, QMetaType::QPoint,    5,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void SymbolViewer::DialogSymbolViewer::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        DialogSymbolViewer *_t = static_cast<DialogSymbolViewer *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->on_listView_doubleClicked((*reinterpret_cast< const QModelIndex(*)>(_a[1]))); break;
        case 1: _t->on_listView_customContextMenuRequested((*reinterpret_cast< const QPoint(*)>(_a[1]))); break;
        case 2: _t->on_btnRefresh_clicked(); break;
        case 3: _t->mnuFollowInDump(); break;
        case 4: _t->mnuFollowInDumpNewTab(); break;
        case 5: _t->mnuFollowInStack(); break;
        case 6: _t->mnuFollowInCPU(); break;
        default: ;
        }
    }
}

const QMetaObject SymbolViewer::DialogSymbolViewer::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_SymbolViewer__DialogSymbolViewer.data,
      qt_meta_data_SymbolViewer__DialogSymbolViewer,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *SymbolViewer::DialogSymbolViewer::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *SymbolViewer::DialogSymbolViewer::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_SymbolViewer__DialogSymbolViewer.stringdata0))
        return static_cast<void*>(const_cast< DialogSymbolViewer*>(this));
    return QDialog::qt_metacast(_clname);
}

int SymbolViewer::DialogSymbolViewer::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 7)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 7;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 7)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 7;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
