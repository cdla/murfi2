/****************************************************************************
** Meta object code from reading C++ file 'FrSpinToolWidget.h'
**
** Created: Thu 6. Nov 17:35:02 2008
**      by: The Qt Meta Object Compiler version 59 (Qt 4.3.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../Widgets/FrSpinToolWidget.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'FrSpinToolWidget.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 59
#error "This file was generated using the moc from 4.3.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

static const uint qt_meta_data_FrSpinToolWidget[] = {

 // content:
       1,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
       0,    0, // properties
       0,    0, // enums/sets

       0        // eod
};

static const char qt_meta_stringdata_FrSpinToolWidget[] = {
    "FrSpinToolWidget\0"
};

const QMetaObject FrSpinToolWidget::staticMetaObject = {
    { &FrBaseToolWidget::staticMetaObject, qt_meta_stringdata_FrSpinToolWidget,
      qt_meta_data_FrSpinToolWidget, 0 }
};

const QMetaObject *FrSpinToolWidget::metaObject() const
{
    return &staticMetaObject;
}

void *FrSpinToolWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_FrSpinToolWidget))
	return static_cast<void*>(const_cast< FrSpinToolWidget*>(this));
    return FrBaseToolWidget::qt_metacast(_clname);
}

int FrSpinToolWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = FrBaseToolWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    return _id;
}
