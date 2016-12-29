/****************************************************************************
** Meta object code from reading C++ file 'DialogOptions.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.7)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../DialogOptions.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'DialogOptions.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.7. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_DialogOptions[] = {

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
      15,   14,   14,   14, 0x0a,
      41,   14,   14,   14, 0x0a,
      67,   14,   14,   14, 0x0a,
      87,   14,   14,   14, 0x0a,
     120,  114,   14,   14, 0x0a,
     145,   14,   14,   14, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_DialogOptions[] = {
    "DialogOptions\0\0on_btnSymbolDir_clicked()\0"
    "on_btnPluginDir_clicked()\0on_btnTTY_clicked()\0"
    "on_btnSessionDir_clicked()\0event\0"
    "closeEvent(QCloseEvent*)\0accept()\0"
};

void DialogOptions::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        DialogOptions *_t = static_cast<DialogOptions *>(_o);
        switch (_id) {
        case 0: _t->on_btnSymbolDir_clicked(); break;
        case 1: _t->on_btnPluginDir_clicked(); break;
        case 2: _t->on_btnTTY_clicked(); break;
        case 3: _t->on_btnSessionDir_clicked(); break;
        case 4: _t->closeEvent((*reinterpret_cast< QCloseEvent*(*)>(_a[1]))); break;
        case 5: _t->accept(); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData DialogOptions::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject DialogOptions::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_DialogOptions,
      qt_meta_data_DialogOptions, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &DialogOptions::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *DialogOptions::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *DialogOptions::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_DialogOptions))
        return static_cast<void*>(const_cast< DialogOptions*>(this));
    return QDialog::qt_metacast(_clname);
}

int DialogOptions::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
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
