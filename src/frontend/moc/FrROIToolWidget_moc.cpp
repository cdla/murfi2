/****************************************************************************
** Meta object code from reading C++ file 'FrROIToolWidget.h'
**
** Created: Sat 15. Nov 00:01:09 2008
**      by: The Qt Meta Object Compiler version 59 (Qt 4.3.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../Widgets/FrROIToolWidget.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'FrROIToolWidget.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 59
#error "This file was generated using the moc from 4.3.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

static const uint qt_meta_data_FrROIToolWidget[] = {

 // content:
       1,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   10, // methods
       0,    0, // properties
       0,    0, // enums/sets

 // signals: signature, parameters, type, tag, flags
      26,   17,   16,   16, 0x05,
      61,   55,   16,   16, 0x05,

 // slots: signature, parameters, type, tag, flags
      96,   90,   16,   16, 0x08,
     115,   16,   16,   16, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_FrROIToolWidget[] = {
    "FrROIToolWidget\0\0toolType\0"
    "CurrentToolChanged(ToolType)\0value\0"
    "CurrentToolParamChanged(int)\0index\0"
    "OnToolChanged(int)\0OnToolParamChanged()\0"
};

const QMetaObject FrROIToolWidget::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_FrROIToolWidget,
      qt_meta_data_FrROIToolWidget, 0 }
};

const QMetaObject *FrROIToolWidget::metaObject() const
{
    return &staticMetaObject;
}

void *FrROIToolWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_FrROIToolWidget))
	return static_cast<void*>(const_cast< FrROIToolWidget*>(this));
    return QWidget::qt_metacast(_clname);
}

int FrROIToolWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: CurrentToolChanged((*reinterpret_cast< ToolType(*)>(_a[1]))); break;
        case 1: CurrentToolParamChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 2: OnToolChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 3: OnToolParamChanged(); break;
        }
        _id -= 4;
    }
    return _id;
}

// SIGNAL 0
void FrROIToolWidget::CurrentToolChanged(ToolType _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void FrROIToolWidget::CurrentToolParamChanged(int _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}