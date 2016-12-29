/****************************************************************************
** Meta object code from reading C++ file 'BookmarkWidget.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.7.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../plugins/Bookmarks/BookmarkWidget.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'BookmarkWidget.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.7.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_Bookmarks__BookmarkWidget_t {
    QByteArrayData data[12];
    char stringdata0[185];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_Bookmarks__BookmarkWidget_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_Bookmarks__BookmarkWidget_t qt_meta_stringdata_Bookmarks__BookmarkWidget = {
    {
QT_MOC_LITERAL(0, 0, 25), // "Bookmarks::BookmarkWidget"
QT_MOC_LITERAL(1, 26, 17), // "on_btnAdd_clicked"
QT_MOC_LITERAL(2, 44, 0), // ""
QT_MOC_LITERAL(3, 45, 17), // "on_btnDel_clicked"
QT_MOC_LITERAL(4, 63, 19), // "on_btnClear_clicked"
QT_MOC_LITERAL(5, 83, 32), // "on_tableWidget_cellDoubleClicked"
QT_MOC_LITERAL(6, 116, 3), // "row"
QT_MOC_LITERAL(7, 120, 3), // "col"
QT_MOC_LITERAL(8, 124, 41), // "on_tableWidget_customContextM..."
QT_MOC_LITERAL(9, 166, 3), // "pos"
QT_MOC_LITERAL(10, 170, 8), // "shortcut"
QT_MOC_LITERAL(11, 179, 5) // "index"

    },
    "Bookmarks::BookmarkWidget\0on_btnAdd_clicked\0"
    "\0on_btnDel_clicked\0on_btnClear_clicked\0"
    "on_tableWidget_cellDoubleClicked\0row\0"
    "col\0on_tableWidget_customContextMenuRequested\0"
    "pos\0shortcut\0index"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Bookmarks__BookmarkWidget[] = {

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
       5,    2,   47,    2, 0x0a /* Public */,
       8,    1,   52,    2, 0x0a /* Public */,
      10,    1,   55,    2, 0x0a /* Public */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int, QMetaType::Int,    6,    7,
    QMetaType::Void, QMetaType::QPoint,    9,
    QMetaType::Void, QMetaType::Int,   11,

       0        // eod
};

void Bookmarks::BookmarkWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        BookmarkWidget *_t = static_cast<BookmarkWidget *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->on_btnAdd_clicked(); break;
        case 1: _t->on_btnDel_clicked(); break;
        case 2: _t->on_btnClear_clicked(); break;
        case 3: _t->on_tableWidget_cellDoubleClicked((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 4: _t->on_tableWidget_customContextMenuRequested((*reinterpret_cast< const QPoint(*)>(_a[1]))); break;
        case 5: _t->shortcut((*reinterpret_cast< int(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObject Bookmarks::BookmarkWidget::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_Bookmarks__BookmarkWidget.data,
      qt_meta_data_Bookmarks__BookmarkWidget,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *Bookmarks::BookmarkWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Bookmarks::BookmarkWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_Bookmarks__BookmarkWidget.stringdata0))
        return static_cast<void*>(const_cast< BookmarkWidget*>(this));
    return QWidget::qt_metacast(_clname);
}

int Bookmarks::BookmarkWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
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
