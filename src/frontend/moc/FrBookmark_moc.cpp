/****************************************************************************
** Meta object code from reading C++ file 'FrBookmark.h'
**
** Created: Wed 17. Sep 23:04:32 2008
**      by: The Qt Meta Object Compiler version 59 (Qt 4.4.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../Widgets/FrBookmark.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'FrBookmark.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 59
#error "This file was generated using the moc from 4.4.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_FrBookmark[] = {

 // content:
       1,       // revision
       0,       // classname
       0,    0, // classinfo
       2,   10, // methods
       0,    0, // properties
       0,    0, // enums/sets

 // signals: signature, parameters, type, tag, flags
      21,   12,   11,   11, 0x05,
      50,   42,   11,   11, 0x05,

       0        // eod
};

static const char qt_meta_stringdata_FrBookmark[] = {
    "FrBookmark\0\0bookmark\0Clicked(FrBookmark&)\0"
    "newName\0NameChanged(QString&)\0"
};

const QMetaObject FrBookmark::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_FrBookmark,
      qt_meta_data_FrBookmark, 0 }
};

const QMetaObject *FrBookmark::metaObject() const
{
    return &staticMetaObject;
}

void *FrBookmark::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_FrBookmark))
        return static_cast<void*>(const_cast< FrBookmark*>(this));
    return QWidget::qt_metacast(_clname);
}

int FrBookmark::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: Clicked((*reinterpret_cast< FrBookmark(*)>(_a[1]))); break;
        case 1: NameChanged((*reinterpret_cast< QString(*)>(_a[1]))); break;
        }
        _id -= 2;
    }
    return _id;
}

// SIGNAL 0
void FrBookmark::Clicked(FrBookmark & _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void FrBookmark::NameChanged(QString & _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}
QT_END_MOC_NAMESPACE
