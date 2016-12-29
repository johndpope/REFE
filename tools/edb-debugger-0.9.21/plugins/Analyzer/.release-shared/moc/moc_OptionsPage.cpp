/****************************************************************************
** Meta object code from reading C++ file 'OptionsPage.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.7)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../OptionsPage.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'OptionsPage.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.7. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_Analyzer__OptionsPage[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       2,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      31,   23,   22,   22, 0x0a,
      57,   22,   22,   22, 0x2a,

       0        // eod
};

static const char qt_meta_stringdata_Analyzer__OptionsPage[] = {
    "Analyzer::OptionsPage\0\0checked\0"
    "on_checkBox_toggled(bool)\0"
    "on_checkBox_toggled()\0"
};

void Analyzer::OptionsPage::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        OptionsPage *_t = static_cast<OptionsPage *>(_o);
        switch (_id) {
        case 0: _t->on_checkBox_toggled((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 1: _t->on_checkBox_toggled(); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData Analyzer::OptionsPage::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject Analyzer::OptionsPage::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_Analyzer__OptionsPage,
      qt_meta_data_Analyzer__OptionsPage, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &Analyzer::OptionsPage::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *Analyzer::OptionsPage::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *Analyzer::OptionsPage::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_Analyzer__OptionsPage))
        return static_cast<void*>(const_cast< OptionsPage*>(this));
    return QWidget::qt_metacast(_clname);
}

int Analyzer::OptionsPage::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 2)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 2;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
