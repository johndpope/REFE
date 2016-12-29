/****************************************************************************
** Meta object code from reading C++ file 'BookmarkWidget.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.7)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../BookmarkWidget.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'BookmarkWidget.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.7. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_Bookmarks__BookmarkWidget[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       6,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      27,   26,   26,   26, 0x0a,
      47,   26,   26,   26, 0x0a,
      67,   26,   26,   26, 0x0a,
      97,   89,   26,   26, 0x0a,
     143,  139,   26,   26, 0x0a,
     199,  193,   26,   26, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_Bookmarks__BookmarkWidget[] = {
    "Bookmarks::BookmarkWidget\0\0"
    "on_btnAdd_clicked()\0on_btnDel_clicked()\0"
    "on_btnClear_clicked()\0row,col\0"
    "on_tableWidget_cellDoubleClicked(int,int)\0"
    "pos\0on_tableWidget_customContextMenuRequested(QPoint)\0"
    "index\0shortcut(int)\0"
};

void Bookmarks::BookmarkWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        BookmarkWidget *_t = static_cast<BookmarkWidget *>(_o);
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

const QMetaObjectExtraData Bookmarks::BookmarkWidget::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject Bookmarks::BookmarkWidget::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_Bookmarks__BookmarkWidget,
      qt_meta_data_Bookmarks__BookmarkWidget, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &Bookmarks::BookmarkWidget::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *Bookmarks::BookmarkWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *Bookmarks::BookmarkWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_Bookmarks__BookmarkWidget))
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
    }
    return _id;
}
QT_END_MOC_NAMESPACE
