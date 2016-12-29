/****************************************************************************
** Meta object code from reading C++ file 'RegisterView.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.7)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../RegisterView.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'RegisterView.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.7. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_ODbgRegisterView__ODBRegView[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       5,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      30,   29,   29,   29, 0x08,
      46,   29,   29,   29, 0x08,
      59,   29,   29,   29, 0x08,
      74,   29,   29,   29, 0x08,
      93,   29,   29,   29, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_ODbgRegisterView__ODBRegView[] = {
    "ODbgRegisterView::ODBRegView\0\0"
    "fieldSelected()\0modelReset()\0"
    "modelUpdated()\0copyAllRegisters()\0"
    "copyRegisterToClipboard()\0"
};

void ODbgRegisterView::ODBRegView::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        ODBRegView *_t = static_cast<ODBRegView *>(_o);
        switch (_id) {
        case 0: _t->fieldSelected(); break;
        case 1: _t->modelReset(); break;
        case 2: _t->modelUpdated(); break;
        case 3: _t->copyAllRegisters(); break;
        case 4: _t->copyRegisterToClipboard(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

const QMetaObjectExtraData ODbgRegisterView::ODBRegView::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject ODbgRegisterView::ODBRegView::staticMetaObject = {
    { &QScrollArea::staticMetaObject, qt_meta_stringdata_ODbgRegisterView__ODBRegView,
      qt_meta_data_ODbgRegisterView__ODBRegView, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &ODbgRegisterView::ODBRegView::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *ODbgRegisterView::ODBRegView::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *ODbgRegisterView::ODBRegView::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_ODbgRegisterView__ODBRegView))
        return static_cast<void*>(const_cast< ODBRegView*>(this));
    return QScrollArea::qt_metacast(_clname);
}

int ODbgRegisterView::ODBRegView::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QScrollArea::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 5)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 5;
    }
    return _id;
}
static const uint qt_meta_data_ODbgRegisterView__FieldWidget[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       1,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      31,   30,   30,   30, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_ODbgRegisterView__FieldWidget[] = {
    "ODbgRegisterView::FieldWidget\0\0"
    "adjustToData()\0"
};

void ODbgRegisterView::FieldWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        FieldWidget *_t = static_cast<FieldWidget *>(_o);
        switch (_id) {
        case 0: _t->adjustToData(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

const QMetaObjectExtraData ODbgRegisterView::FieldWidget::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject ODbgRegisterView::FieldWidget::staticMetaObject = {
    { &QLabel::staticMetaObject, qt_meta_stringdata_ODbgRegisterView__FieldWidget,
      qt_meta_data_ODbgRegisterView__FieldWidget, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &ODbgRegisterView::FieldWidget::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *ODbgRegisterView::FieldWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *ODbgRegisterView::FieldWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_ODbgRegisterView__FieldWidget))
        return static_cast<void*>(const_cast< FieldWidget*>(this));
    return QLabel::qt_metacast(_clname);
}

int ODbgRegisterView::FieldWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QLabel::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 1)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 1;
    }
    return _id;
}
static const uint qt_meta_data_ODbgRegisterView__ValueField[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
      14,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: signature, parameters, type, tag, flags
      30,   29,   29,   29, 0x05,

 // slots: signature, parameters, type, tag, flags
      41,   29,   29,   29, 0x0a,
      57,   29,   29,   29, 0x0a,
      72,   29,   29,   29, 0x0a,
      86,   29,   29,   29, 0x0a,
     101,   29,   29,   29, 0x0a,
     110,   29,   29,   29, 0x0a,
     121,   29,   29,   29, 0x0a,
     137,   29,   29,   29, 0x0a,
     155,   29,   29,   29, 0x0a,
     165,   29,   29,   29, 0x0a,
     176,   29,   29,   29, 0x0a,
     188,   29,   29,   29, 0x0a,
     200,   29,   29,   29, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_ODbgRegisterView__ValueField[] = {
    "ODbgRegisterView::ValueField\0\0selected()\0"
    "defaultAction()\0pushFPUStack()\0"
    "popFPUStack()\0adjustToData()\0select()\0"
    "unselect()\0updatePalette()\0copyToClipboard()\0"
    "setZero()\0setToOne()\0increment()\0"
    "decrement()\0invert()\0"
};

void ODbgRegisterView::ValueField::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        ValueField *_t = static_cast<ValueField *>(_o);
        switch (_id) {
        case 0: _t->selected(); break;
        case 1: _t->defaultAction(); break;
        case 2: _t->pushFPUStack(); break;
        case 3: _t->popFPUStack(); break;
        case 4: _t->adjustToData(); break;
        case 5: _t->select(); break;
        case 6: _t->unselect(); break;
        case 7: _t->updatePalette(); break;
        case 8: _t->copyToClipboard(); break;
        case 9: _t->setZero(); break;
        case 10: _t->setToOne(); break;
        case 11: _t->increment(); break;
        case 12: _t->decrement(); break;
        case 13: _t->invert(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

const QMetaObjectExtraData ODbgRegisterView::ValueField::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject ODbgRegisterView::ValueField::staticMetaObject = {
    { &FieldWidget::staticMetaObject, qt_meta_stringdata_ODbgRegisterView__ValueField,
      qt_meta_data_ODbgRegisterView__ValueField, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &ODbgRegisterView::ValueField::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *ODbgRegisterView::ValueField::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *ODbgRegisterView::ValueField::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_ODbgRegisterView__ValueField))
        return static_cast<void*>(const_cast< ValueField*>(this));
    return FieldWidget::qt_metacast(_clname);
}

int ODbgRegisterView::ValueField::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = FieldWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 14)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 14;
    }
    return _id;
}

// SIGNAL 0
void ODbgRegisterView::ValueField::selected()
{
    QMetaObject::activate(this, &staticMetaObject, 0, 0);
}
static const uint qt_meta_data_ODbgRegisterView__FPUValueField[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      33,   32,   32,   32, 0x0a,
      48,   32,   32,   32, 0x0a,
      65,   32,   32,   32, 0x0a,
      88,   32,   32,   32, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_ODbgRegisterView__FPUValueField[] = {
    "ODbgRegisterView::FPUValueField\0\0"
    "showFPUAsRaw()\0showFPUAsFloat()\0"
    "displayFormatChanged()\0updatePalette()\0"
};

void ODbgRegisterView::FPUValueField::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        FPUValueField *_t = static_cast<FPUValueField *>(_o);
        switch (_id) {
        case 0: _t->showFPUAsRaw(); break;
        case 1: _t->showFPUAsFloat(); break;
        case 2: _t->displayFormatChanged(); break;
        case 3: _t->updatePalette(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

const QMetaObjectExtraData ODbgRegisterView::FPUValueField::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject ODbgRegisterView::FPUValueField::staticMetaObject = {
    { &ValueField::staticMetaObject, qt_meta_stringdata_ODbgRegisterView__FPUValueField,
      qt_meta_data_ODbgRegisterView__FPUValueField, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &ODbgRegisterView::FPUValueField::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *ODbgRegisterView::FPUValueField::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *ODbgRegisterView::FPUValueField::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_ODbgRegisterView__FPUValueField))
        return static_cast<void*>(const_cast< FPUValueField*>(this));
    return ValueField::qt_metacast(_clname);
}

int ODbgRegisterView::FPUValueField::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = ValueField::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 4)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 4;
    }
    return _id;
}
static const uint qt_meta_data_ODbgRegisterView__MultiBitFieldWidget[] = {

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
      45,   39,   38,   38, 0x0a,
      59,   38,   38,   38, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_ODbgRegisterView__MultiBitFieldWidget[] = {
    "ODbgRegisterView::MultiBitFieldWidget\0"
    "\0value\0setValue(int)\0adjustToData()\0"
};

void ODbgRegisterView::MultiBitFieldWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        MultiBitFieldWidget *_t = static_cast<MultiBitFieldWidget *>(_o);
        switch (_id) {
        case 0: _t->setValue((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 1: _t->adjustToData(); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData ODbgRegisterView::MultiBitFieldWidget::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject ODbgRegisterView::MultiBitFieldWidget::staticMetaObject = {
    { &ValueField::staticMetaObject, qt_meta_stringdata_ODbgRegisterView__MultiBitFieldWidget,
      qt_meta_data_ODbgRegisterView__MultiBitFieldWidget, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &ODbgRegisterView::MultiBitFieldWidget::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *ODbgRegisterView::MultiBitFieldWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *ODbgRegisterView::MultiBitFieldWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_ODbgRegisterView__MultiBitFieldWidget))
        return static_cast<void*>(const_cast< MultiBitFieldWidget*>(this));
    return ValueField::qt_metacast(_clname);
}

int ODbgRegisterView::MultiBitFieldWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = ValueField::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 2)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 2;
    }
    return _id;
}
static const uint qt_meta_data_ODbgRegisterView__SIMDValueManager[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      36,   35,   35,   35, 0x0a,
      64,   59,   35,   35, 0x08,
      79,   59,   35,   35, 0x08,
     103,   96,   35,   35, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_ODbgRegisterView__SIMDValueManager[] = {
    "ODbgRegisterView::SIMDValueManager\0\0"
    "displayFormatChanged()\0size\0showAsInt(int)\0"
    "showAsFloat(int)\0format\0setIntFormat(int)\0"
};

void ODbgRegisterView::SIMDValueManager::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        SIMDValueManager *_t = static_cast<SIMDValueManager *>(_o);
        switch (_id) {
        case 0: _t->displayFormatChanged(); break;
        case 1: _t->showAsInt((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 2: _t->showAsFloat((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 3: _t->setIntFormat((*reinterpret_cast< int(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData ODbgRegisterView::SIMDValueManager::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject ODbgRegisterView::SIMDValueManager::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_ODbgRegisterView__SIMDValueManager,
      qt_meta_data_ODbgRegisterView__SIMDValueManager, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &ODbgRegisterView::SIMDValueManager::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *ODbgRegisterView::SIMDValueManager::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *ODbgRegisterView::SIMDValueManager::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_ODbgRegisterView__SIMDValueManager))
        return static_cast<void*>(const_cast< SIMDValueManager*>(this));
    return QObject::qt_metacast(_clname);
}

int ODbgRegisterView::SIMDValueManager::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 4)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 4;
    }
    return _id;
}
static const uint qt_meta_data_ODbgRegisterView__RegisterGroup[] = {

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
      33,   32,   32,   32, 0x0a,
      47,   32,   32,   32, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_ODbgRegisterView__RegisterGroup[] = {
    "ODbgRegisterView::RegisterGroup\0\0"
    "adjustWidth()\0hideAndReport()\0"
};

void ODbgRegisterView::RegisterGroup::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        RegisterGroup *_t = static_cast<RegisterGroup *>(_o);
        switch (_id) {
        case 0: _t->adjustWidth(); break;
        case 1: _t->hideAndReport(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

const QMetaObjectExtraData ODbgRegisterView::RegisterGroup::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject ODbgRegisterView::RegisterGroup::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_ODbgRegisterView__RegisterGroup,
      qt_meta_data_ODbgRegisterView__RegisterGroup, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &ODbgRegisterView::RegisterGroup::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *ODbgRegisterView::RegisterGroup::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *ODbgRegisterView::RegisterGroup::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_ODbgRegisterView__RegisterGroup))
        return static_cast<void*>(const_cast< RegisterGroup*>(this));
    return QWidget::qt_metacast(_clname);
}

int ODbgRegisterView::RegisterGroup::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
