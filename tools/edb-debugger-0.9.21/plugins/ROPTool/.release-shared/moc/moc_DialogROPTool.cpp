/****************************************************************************
** Meta object code from reading C++ file 'DialogROPTool.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.7)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../DialogROPTool.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'DialogROPTool.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.7. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_ROPTool__DialogROPTool[] = {

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
      24,   23,   23,   23, 0x0a,
      51,   45,   23,   23, 0x0a,
      96,   90,   23,   23, 0x0a,
     128,   90,   23,   23, 0x0a,
     162,   90,   23,   23, 0x0a,
     196,   90,   23,   23, 0x0a,
     229,   90,   23,   23, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_ROPTool__DialogROPTool[] = {
    "ROPTool::DialogROPTool\0\0on_btnFind_clicked()\0"
    "index\0on_listView_doubleClicked(QModelIndex)\0"
    "state\0on_chkShowALU_stateChanged(int)\0"
    "on_chkShowStack_stateChanged(int)\0"
    "on_chkShowLogic_stateChanged(int)\0"
    "on_chkShowData_stateChanged(int)\0"
    "on_chkShowOther_stateChanged(int)\0"
};

void ROPTool::DialogROPTool::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        DialogROPTool *_t = static_cast<DialogROPTool *>(_o);
        switch (_id) {
        case 0: _t->on_btnFind_clicked(); break;
        case 1: _t->on_listView_doubleClicked((*reinterpret_cast< const QModelIndex(*)>(_a[1]))); break;
        case 2: _t->on_chkShowALU_stateChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 3: _t->on_chkShowStack_stateChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 4: _t->on_chkShowLogic_stateChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 5: _t->on_chkShowData_stateChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 6: _t->on_chkShowOther_stateChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData ROPTool::DialogROPTool::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject ROPTool::DialogROPTool::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_ROPTool__DialogROPTool,
      qt_meta_data_ROPTool__DialogROPTool, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &ROPTool::DialogROPTool::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *ROPTool::DialogROPTool::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *ROPTool::DialogROPTool::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_ROPTool__DialogROPTool))
        return static_cast<void*>(const_cast< DialogROPTool*>(this));
    return QDialog::qt_metacast(_clname);
}

int ROPTool::DialogROPTool::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
