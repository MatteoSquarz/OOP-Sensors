/****************************************************************************
** Meta object code from reading C++ file 'ModifyWindow.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.2.4)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "View/ModifyWindow.h"
#include <QtGui/qtextcursor.h>
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'ModifyWindow.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 68
#error "This file was generated using the moc from 6.2.4. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_Sensor__View__ModifyWindow_t {
    const uint offsetsAndSize[10];
    char stringdata0[79];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(offsetof(qt_meta_stringdata_Sensor__View__ModifyWindow_t, stringdata0) + ofs), len 
static const qt_meta_stringdata_Sensor__View__ModifyWindow_t qt_meta_stringdata_Sensor__View__ModifyWindow = {
    {
QT_MOC_LITERAL(0, 26), // "Sensor::View::ModifyWindow"
QT_MOC_LITERAL(27, 12), // "modifySensor"
QT_MOC_LITERAL(40, 0), // ""
QT_MOC_LITERAL(41, 24), // "std::vector<std::string>"
QT_MOC_LITERAL(66, 12) // "retrieveData"

    },
    "Sensor::View::ModifyWindow\0modifySensor\0"
    "\0std::vector<std::string>\0retrieveData"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Sensor__View__ModifyWindow[] = {

 // content:
      10,       // revision
       0,       // classname
       0,    0, // classinfo
       2,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags, initial metatype offsets
       1,    1,   26,    2, 0x06,    1 /* Public */,

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       4,    0,   29,    2, 0x0a,    3 /* Public */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3,    2,

 // slots: parameters
    QMetaType::Void,

       0        // eod
};

void Sensor::View::ModifyWindow::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<ModifyWindow *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->modifySensor((*reinterpret_cast< std::add_pointer_t<std::vector<std::string>>>(_a[1]))); break;
        case 1: _t->retrieveData(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (ModifyWindow::*)(std::vector<std::string> );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ModifyWindow::modifySensor)) {
                *result = 0;
                return;
            }
        }
    }
}

const QMetaObject Sensor::View::ModifyWindow::staticMetaObject = { {
    QMetaObject::SuperData::link<QDialog::staticMetaObject>(),
    qt_meta_stringdata_Sensor__View__ModifyWindow.offsetsAndSize,
    qt_meta_data_Sensor__View__ModifyWindow,
    qt_static_metacall,
    nullptr,
qt_incomplete_metaTypeArray<qt_meta_stringdata_Sensor__View__ModifyWindow_t
, QtPrivate::TypeAndForceComplete<ModifyWindow, std::true_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<std::vector<std::string>, std::false_type>
, QtPrivate::TypeAndForceComplete<void, std::false_type>


>,
    nullptr
} };


const QMetaObject *Sensor::View::ModifyWindow::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Sensor::View::ModifyWindow::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_Sensor__View__ModifyWindow.stringdata0))
        return static_cast<void*>(this);
    return QDialog::qt_metacast(_clname);
}

int Sensor::View::ModifyWindow::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 2)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 2;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 2)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 2;
    }
    return _id;
}

// SIGNAL 0
void Sensor::View::ModifyWindow::modifySensor(std::vector<std::string> _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
