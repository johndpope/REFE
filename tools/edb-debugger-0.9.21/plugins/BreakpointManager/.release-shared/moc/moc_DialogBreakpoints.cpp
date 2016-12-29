/****************************************************************************
** Meta object code from reading C++ file 'DialogBreakpoints.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.7)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../DialogBreakpoints.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'DialogBreakpoints.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.7. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_BreakpointManager__DialogBreakpoints[] = {

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
      38,   37,   37,   37, 0x0a,
      51,   37,   37,   37, 0x0a,
      71,   37,   37,   37, 0x0a,
      94,   37,   37,   37, 0x0a,
     128,  120,   37,   37, 0x0a,
     170,   37,   37,   37, 0x0a,
     193,   37,   37,   37, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_BreakpointManager__DialogBreakpoints[] = {
    "BreakpointManager::DialogBreakpoints\0"
    "\0updateList()\0on_btnAdd_clicked()\0"
    "on_btnRemove_clicked()\0on_btnCondition_clicked()\0"
    "row,col\0on_tableWidget_cellDoubleClicked(int,int)\0"
    "on_btnImport_clicked()\0on_btnExport_clicked()\0"
};

void BreakpointManager::DialogBreakpoints::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        DialogBreakpoints *_t = static_cast<DialogBreakpoints *>(_o);
        switch (_id) {
        case 0: _t->updateList(); break;
        case 1: _t->on_btnAdd_clicked(); break;
        case 2: _t->on_btnRemove_clicked(); break;
        case 3: _t->on_btnCondition_clicked(); break;
        case 4: _t->on_tableWidget_cellDoubleClicked((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 5: _t->on_btnImport_clicked(); break;
        case 6: _t->on_btnExport_clicked(); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData BreakpointManager::DialogBreakpoints::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject BreakpointManager::DialogBreakpoints::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_BreakpointManager__DialogBreakpoints,
      qt_meta_data_BreakpointManager__DialogBreakpoints, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &BreakpointManager::DialogBreakpoints::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *BreakpointManager::DialogBreakpoints::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *BreakpointManager::DialogBreakpoints::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_BreakpointManager__DialogBreakpoints))
        return static_cast<void*>(const_cast< DialogBreakpoints*>(this));
    return QDialog::qt_metacast(_clname);
}

int BreakpointManager::DialogBreakpoints::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
