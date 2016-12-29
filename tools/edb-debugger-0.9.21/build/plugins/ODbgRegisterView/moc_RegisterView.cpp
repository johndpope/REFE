/****************************************************************************
** Meta object code from reading C++ file 'RegisterView.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.7.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../plugins/ODbgRegisterView/RegisterView.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'RegisterView.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.7.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_ODbgRegisterView__ODBRegView_t {
    QByteArrayData data[7];
    char stringdata0[109];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_ODbgRegisterView__ODBRegView_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_ODbgRegisterView__ODBRegView_t qt_meta_stringdata_ODbgRegisterView__ODBRegView = {
    {
QT_MOC_LITERAL(0, 0, 28), // "ODbgRegisterView::ODBRegView"
QT_MOC_LITERAL(1, 29, 13), // "fieldSelected"
QT_MOC_LITERAL(2, 43, 0), // ""
QT_MOC_LITERAL(3, 44, 10), // "modelReset"
QT_MOC_LITERAL(4, 55, 12), // "modelUpdated"
QT_MOC_LITERAL(5, 68, 16), // "copyAllRegisters"
QT_MOC_LITERAL(6, 85, 23) // "copyRegisterToClipboard"

    },
    "ODbgRegisterView::ODBRegView\0fieldSelected\0"
    "\0modelReset\0modelUpdated\0copyAllRegisters\0"
    "copyRegisterToClipboard"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_ODbgRegisterView__ODBRegView[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       5,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   39,    2, 0x08 /* Private */,
       3,    0,   40,    2, 0x08 /* Private */,
       4,    0,   41,    2, 0x08 /* Private */,
       5,    0,   42,    2, 0x08 /* Private */,
       6,    0,   43,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void ODbgRegisterView::ODBRegView::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        ODBRegView *_t = static_cast<ODBRegView *>(_o);
        Q_UNUSED(_t)
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

const QMetaObject ODbgRegisterView::ODBRegView::staticMetaObject = {
    { &QScrollArea::staticMetaObject, qt_meta_stringdata_ODbgRegisterView__ODBRegView.data,
      qt_meta_data_ODbgRegisterView__ODBRegView,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *ODbgRegisterView::ODBRegView::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *ODbgRegisterView::ODBRegView::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_ODbgRegisterView__ODBRegView.stringdata0))
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
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 5)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 5;
    }
    return _id;
}
struct qt_meta_stringdata_ODbgRegisterView__FieldWidget_t {
    QByteArrayData data[3];
    char stringdata0[44];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_ODbgRegisterView__FieldWidget_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_ODbgRegisterView__FieldWidget_t qt_meta_stringdata_ODbgRegisterView__FieldWidget = {
    {
QT_MOC_LITERAL(0, 0, 29), // "ODbgRegisterView::FieldWidget"
QT_MOC_LITERAL(1, 30, 12), // "adjustToData"
QT_MOC_LITERAL(2, 43, 0) // ""

    },
    "ODbgRegisterView::FieldWidget\0"
    "adjustToData\0"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_ODbgRegisterView__FieldWidget[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       1,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   19,    2, 0x0a /* Public */,

 // slots: parameters
    QMetaType::Void,

       0        // eod
};

void ODbgRegisterView::FieldWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        FieldWidget *_t = static_cast<FieldWidget *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->adjustToData(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

const QMetaObject ODbgRegisterView::FieldWidget::staticMetaObject = {
    { &QLabel::staticMetaObject, qt_meta_stringdata_ODbgRegisterView__FieldWidget.data,
      qt_meta_data_ODbgRegisterView__FieldWidget,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *ODbgRegisterView::FieldWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *ODbgRegisterView::FieldWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_ODbgRegisterView__FieldWidget.stringdata0))
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
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 1)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 1;
    }
    return _id;
}
struct qt_meta_stringdata_ODbgRegisterView__ValueField_t {
    QByteArrayData data[16];
    char stringdata0[181];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_ODbgRegisterView__ValueField_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_ODbgRegisterView__ValueField_t qt_meta_stringdata_ODbgRegisterView__ValueField = {
    {
QT_MOC_LITERAL(0, 0, 28), // "ODbgRegisterView::ValueField"
QT_MOC_LITERAL(1, 29, 8), // "selected"
QT_MOC_LITERAL(2, 38, 0), // ""
QT_MOC_LITERAL(3, 39, 13), // "defaultAction"
QT_MOC_LITERAL(4, 53, 12), // "pushFPUStack"
QT_MOC_LITERAL(5, 66, 11), // "popFPUStack"
QT_MOC_LITERAL(6, 78, 12), // "adjustToData"
QT_MOC_LITERAL(7, 91, 6), // "select"
QT_MOC_LITERAL(8, 98, 8), // "unselect"
QT_MOC_LITERAL(9, 107, 13), // "updatePalette"
QT_MOC_LITERAL(10, 121, 15), // "copyToClipboard"
QT_MOC_LITERAL(11, 137, 7), // "setZero"
QT_MOC_LITERAL(12, 145, 8), // "setToOne"
QT_MOC_LITERAL(13, 154, 9), // "increment"
QT_MOC_LITERAL(14, 164, 9), // "decrement"
QT_MOC_LITERAL(15, 174, 6) // "invert"

    },
    "ODbgRegisterView::ValueField\0selected\0"
    "\0defaultAction\0pushFPUStack\0popFPUStack\0"
    "adjustToData\0select\0unselect\0updatePalette\0"
    "copyToClipboard\0setZero\0setToOne\0"
    "increment\0decrement\0invert"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_ODbgRegisterView__ValueField[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      14,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   84,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       3,    0,   85,    2, 0x0a /* Public */,
       4,    0,   86,    2, 0x0a /* Public */,
       5,    0,   87,    2, 0x0a /* Public */,
       6,    0,   88,    2, 0x0a /* Public */,
       7,    0,   89,    2, 0x0a /* Public */,
       8,    0,   90,    2, 0x0a /* Public */,
       9,    0,   91,    2, 0x0a /* Public */,
      10,    0,   92,    2, 0x0a /* Public */,
      11,    0,   93,    2, 0x0a /* Public */,
      12,    0,   94,    2, 0x0a /* Public */,
      13,    0,   95,    2, 0x0a /* Public */,
      14,    0,   96,    2, 0x0a /* Public */,
      15,    0,   97,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void ODbgRegisterView::ValueField::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        ValueField *_t = static_cast<ValueField *>(_o);
        Q_UNUSED(_t)
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
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (ValueField::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&ValueField::selected)) {
                *result = 0;
                return;
            }
        }
    }
    Q_UNUSED(_a);
}

const QMetaObject ODbgRegisterView::ValueField::staticMetaObject = {
    { &FieldWidget::staticMetaObject, qt_meta_stringdata_ODbgRegisterView__ValueField.data,
      qt_meta_data_ODbgRegisterView__ValueField,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *ODbgRegisterView::ValueField::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *ODbgRegisterView::ValueField::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_ODbgRegisterView__ValueField.stringdata0))
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
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 14)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 14;
    }
    return _id;
}

// SIGNAL 0
void ODbgRegisterView::ValueField::selected()
{
    QMetaObject::activate(this, &staticMetaObject, 0, Q_NULLPTR);
}
struct qt_meta_stringdata_ODbgRegisterView__FPUValueField_t {
    QByteArrayData data[6];
    char stringdata0[96];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_ODbgRegisterView__FPUValueField_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_ODbgRegisterView__FPUValueField_t qt_meta_stringdata_ODbgRegisterView__FPUValueField = {
    {
QT_MOC_LITERAL(0, 0, 31), // "ODbgRegisterView::FPUValueField"
QT_MOC_LITERAL(1, 32, 12), // "showFPUAsRaw"
QT_MOC_LITERAL(2, 45, 0), // ""
QT_MOC_LITERAL(3, 46, 14), // "showFPUAsFloat"
QT_MOC_LITERAL(4, 61, 20), // "displayFormatChanged"
QT_MOC_LITERAL(5, 82, 13) // "updatePalette"

    },
    "ODbgRegisterView::FPUValueField\0"
    "showFPUAsRaw\0\0showFPUAsFloat\0"
    "displayFormatChanged\0updatePalette"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_ODbgRegisterView__FPUValueField[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   34,    2, 0x0a /* Public */,
       3,    0,   35,    2, 0x0a /* Public */,
       4,    0,   36,    2, 0x0a /* Public */,
       5,    0,   37,    2, 0x0a /* Public */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void ODbgRegisterView::FPUValueField::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        FPUValueField *_t = static_cast<FPUValueField *>(_o);
        Q_UNUSED(_t)
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

const QMetaObject ODbgRegisterView::FPUValueField::staticMetaObject = {
    { &ValueField::staticMetaObject, qt_meta_stringdata_ODbgRegisterView__FPUValueField.data,
      qt_meta_data_ODbgRegisterView__FPUValueField,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *ODbgRegisterView::FPUValueField::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *ODbgRegisterView::FPUValueField::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_ODbgRegisterView__FPUValueField.stringdata0))
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
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 4)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 4;
    }
    return _id;
}
struct qt_meta_stringdata_ODbgRegisterView__MultiBitFieldWidget_t {
    QByteArrayData data[5];
    char stringdata0[67];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_ODbgRegisterView__MultiBitFieldWidget_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_ODbgRegisterView__MultiBitFieldWidget_t qt_meta_stringdata_ODbgRegisterView__MultiBitFieldWidget = {
    {
QT_MOC_LITERAL(0, 0, 37), // "ODbgRegisterView::MultiBitFie..."
QT_MOC_LITERAL(1, 38, 8), // "setValue"
QT_MOC_LITERAL(2, 47, 0), // ""
QT_MOC_LITERAL(3, 48, 5), // "value"
QT_MOC_LITERAL(4, 54, 12) // "adjustToData"

    },
    "ODbgRegisterView::MultiBitFieldWidget\0"
    "setValue\0\0value\0adjustToData"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_ODbgRegisterView__MultiBitFieldWidget[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       2,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    1,   24,    2, 0x0a /* Public */,
       4,    0,   27,    2, 0x0a /* Public */,

 // slots: parameters
    QMetaType::Void, QMetaType::Int,    3,
    QMetaType::Void,

       0        // eod
};

void ODbgRegisterView::MultiBitFieldWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        MultiBitFieldWidget *_t = static_cast<MultiBitFieldWidget *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->setValue((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 1: _t->adjustToData(); break;
        default: ;
        }
    }
}

const QMetaObject ODbgRegisterView::MultiBitFieldWidget::staticMetaObject = {
    { &ValueField::staticMetaObject, qt_meta_stringdata_ODbgRegisterView__MultiBitFieldWidget.data,
      qt_meta_data_ODbgRegisterView__MultiBitFieldWidget,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *ODbgRegisterView::MultiBitFieldWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *ODbgRegisterView::MultiBitFieldWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_ODbgRegisterView__MultiBitFieldWidget.stringdata0))
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
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 2)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 2;
    }
    return _id;
}
struct qt_meta_stringdata_ODbgRegisterView__SIMDValueManager_t {
    QByteArrayData data[8];
    char stringdata0[104];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_ODbgRegisterView__SIMDValueManager_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_ODbgRegisterView__SIMDValueManager_t qt_meta_stringdata_ODbgRegisterView__SIMDValueManager = {
    {
QT_MOC_LITERAL(0, 0, 34), // "ODbgRegisterView::SIMDValueMa..."
QT_MOC_LITERAL(1, 35, 20), // "displayFormatChanged"
QT_MOC_LITERAL(2, 56, 0), // ""
QT_MOC_LITERAL(3, 57, 9), // "showAsInt"
QT_MOC_LITERAL(4, 67, 4), // "size"
QT_MOC_LITERAL(5, 72, 11), // "showAsFloat"
QT_MOC_LITERAL(6, 84, 12), // "setIntFormat"
QT_MOC_LITERAL(7, 97, 6) // "format"

    },
    "ODbgRegisterView::SIMDValueManager\0"
    "displayFormatChanged\0\0showAsInt\0size\0"
    "showAsFloat\0setIntFormat\0format"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_ODbgRegisterView__SIMDValueManager[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   34,    2, 0x0a /* Public */,
       3,    1,   35,    2, 0x08 /* Private */,
       5,    1,   38,    2, 0x08 /* Private */,
       6,    1,   41,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,    4,
    QMetaType::Void, QMetaType::Int,    4,
    QMetaType::Void, QMetaType::Int,    7,

       0        // eod
};

void ODbgRegisterView::SIMDValueManager::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        SIMDValueManager *_t = static_cast<SIMDValueManager *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->displayFormatChanged(); break;
        case 1: _t->showAsInt((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 2: _t->showAsFloat((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 3: _t->setIntFormat((*reinterpret_cast< int(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObject ODbgRegisterView::SIMDValueManager::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_ODbgRegisterView__SIMDValueManager.data,
      qt_meta_data_ODbgRegisterView__SIMDValueManager,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *ODbgRegisterView::SIMDValueManager::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *ODbgRegisterView::SIMDValueManager::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_ODbgRegisterView__SIMDValueManager.stringdata0))
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
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 4)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 4;
    }
    return _id;
}
struct qt_meta_stringdata_ODbgRegisterView__RegisterGroup_t {
    QByteArrayData data[4];
    char stringdata0[59];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_ODbgRegisterView__RegisterGroup_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_ODbgRegisterView__RegisterGroup_t qt_meta_stringdata_ODbgRegisterView__RegisterGroup = {
    {
QT_MOC_LITERAL(0, 0, 31), // "ODbgRegisterView::RegisterGroup"
QT_MOC_LITERAL(1, 32, 11), // "adjustWidth"
QT_MOC_LITERAL(2, 44, 0), // ""
QT_MOC_LITERAL(3, 45, 13) // "hideAndReport"

    },
    "ODbgRegisterView::RegisterGroup\0"
    "adjustWidth\0\0hideAndReport"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_ODbgRegisterView__RegisterGroup[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       2,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   24,    2, 0x0a /* Public */,
       3,    0,   25,    2, 0x0a /* Public */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void ODbgRegisterView::RegisterGroup::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        RegisterGroup *_t = static_cast<RegisterGroup *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->adjustWidth(); break;
        case 1: _t->hideAndReport(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

const QMetaObject ODbgRegisterView::RegisterGroup::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_ODbgRegisterView__RegisterGroup.data,
      qt_meta_data_ODbgRegisterView__RegisterGroup,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *ODbgRegisterView::RegisterGroup::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *ODbgRegisterView::RegisterGroup::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_ODbgRegisterView__RegisterGroup.stringdata0))
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
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 2)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 2;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
