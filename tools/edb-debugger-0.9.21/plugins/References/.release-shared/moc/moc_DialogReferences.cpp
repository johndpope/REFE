/****************************************************************************
** Meta object code from reading C++ file 'DialogReferences.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.7)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../DialogReferences.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'DialogReferences.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.7. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_References__DialogReferences[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: signature, parameters, type, tag, flags
      30,   29,   29,   29, 0x05,

 // slots: signature, parameters, type, tag, flags
      50,   29,   29,   29, 0x0a,
      76,   71,   29,   29, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_References__DialogReferences[] = {
    "References::DialogReferences\0\0"
    "updateProgress(int)\0on_btnFind_clicked()\0"
    "item\0on_listWidget_itemDoubleClicked(QListWidgetItem*)\0"
};

void References::DialogReferences::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        DialogReferences *_t = static_cast<DialogReferences *>(_o);
        switch (_id) {
        case 0: _t->updateProgress((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 1: _t->on_btnFind_clicked(); break;
        case 2: _t->on_listWidget_itemDoubleClicked((*reinterpret_cast< QListWidgetItem*(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData References::DialogReferences::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject References::DialogReferences::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_References__DialogReferences,
      qt_meta_data_References__DialogReferences, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &References::DialogReferences::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *References::DialogReferences::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *References::DialogReferences::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_References__DialogReferences))
        return static_cast<void*>(const_cast< DialogReferences*>(this));
    return QDialog::qt_metacast(_clname);
}

int References::DialogReferences::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 3)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 3;
    }
    return _id;
}

// SIGNAL 0
void References::DialogReferences::updateProgress(int _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_END_MOC_NAMESPACE
