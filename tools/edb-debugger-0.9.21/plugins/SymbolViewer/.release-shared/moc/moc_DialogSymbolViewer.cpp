/****************************************************************************
** Meta object code from reading C++ file 'DialogSymbolViewer.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.7)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../DialogSymbolViewer.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'DialogSymbolViewer.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.7. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_SymbolViewer__DialogSymbolViewer[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       7,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      40,   34,   33,   33, 0x0a,
      83,   79,   33,   33, 0x0a,
     130,   33,   33,   33, 0x0a,
     154,   33,   33,   33, 0x08,
     172,   33,   33,   33, 0x08,
     196,   33,   33,   33, 0x08,
     215,   33,   33,   33, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_SymbolViewer__DialogSymbolViewer[] = {
    "SymbolViewer::DialogSymbolViewer\0\0"
    "index\0on_listView_doubleClicked(QModelIndex)\0"
    "pos\0on_listView_customContextMenuRequested(QPoint)\0"
    "on_btnRefresh_clicked()\0mnuFollowInDump()\0"
    "mnuFollowInDumpNewTab()\0mnuFollowInStack()\0"
    "mnuFollowInCPU()\0"
};

void SymbolViewer::DialogSymbolViewer::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        DialogSymbolViewer *_t = static_cast<DialogSymbolViewer *>(_o);
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

const QMetaObjectExtraData SymbolViewer::DialogSymbolViewer::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject SymbolViewer::DialogSymbolViewer::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_SymbolViewer__DialogSymbolViewer,
      qt_meta_data_SymbolViewer__DialogSymbolViewer, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &SymbolViewer::DialogSymbolViewer::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *SymbolViewer::DialogSymbolViewer::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *SymbolViewer::DialogSymbolViewer::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_SymbolViewer__DialogSymbolViewer))
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
    }
    return _id;
}
QT_END_MOC_NAMESPACE
