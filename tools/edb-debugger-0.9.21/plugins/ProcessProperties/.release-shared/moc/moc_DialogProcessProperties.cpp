/****************************************************************************
** Meta object code from reading C++ file 'DialogProcessProperties.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.7)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../DialogProcessProperties.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'DialogProcessProperties.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.7. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_ProcessProperties__DialogProcessProperties[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       8,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      44,   43,   43,   43, 0x0a,
      67,   43,   43,   43, 0x0a,
      89,   43,   43,   43, 0x0a,
     124,   43,   43,   43, 0x0a,
     155,   43,   43,   43, 0x0a,
     179,   43,   43,   43, 0x0a,
     210,   43,   43,   43, 0x0a,
     245,  240,   43,   43, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_ProcessProperties__DialogProcessProperties[] = {
    "ProcessProperties::DialogProcessProperties\0"
    "\0on_btnParent_clicked()\0on_btnImage_clicked()\0"
    "on_btnRefreshEnvironment_clicked()\0"
    "on_btnRefreshHandles_clicked()\0"
    "on_btnStrings_clicked()\0"
    "on_btnRefreshThreads_clicked()\0"
    "on_btnRefreshMemory_clicked()\0text\0"
    "on_txtSearchEnvironment_textChanged(QString)\0"
};

void ProcessProperties::DialogProcessProperties::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        DialogProcessProperties *_t = static_cast<DialogProcessProperties *>(_o);
        switch (_id) {
        case 0: _t->on_btnParent_clicked(); break;
        case 1: _t->on_btnImage_clicked(); break;
        case 2: _t->on_btnRefreshEnvironment_clicked(); break;
        case 3: _t->on_btnRefreshHandles_clicked(); break;
        case 4: _t->on_btnStrings_clicked(); break;
        case 5: _t->on_btnRefreshThreads_clicked(); break;
        case 6: _t->on_btnRefreshMemory_clicked(); break;
        case 7: _t->on_txtSearchEnvironment_textChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData ProcessProperties::DialogProcessProperties::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject ProcessProperties::DialogProcessProperties::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_ProcessProperties__DialogProcessProperties,
      qt_meta_data_ProcessProperties__DialogProcessProperties, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &ProcessProperties::DialogProcessProperties::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *ProcessProperties::DialogProcessProperties::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *ProcessProperties::DialogProcessProperties::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_ProcessProperties__DialogProcessProperties))
        return static_cast<void*>(const_cast< DialogProcessProperties*>(this));
    return QDialog::qt_metacast(_clname);
}

int ProcessProperties::DialogProcessProperties::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 8)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 8;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
