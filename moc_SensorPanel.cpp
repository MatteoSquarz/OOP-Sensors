/****************************************************************************
** Meta object code from reading C++ file 'SensorPanel.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.2.4)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "View/SensorPanel.h"
#include <QtGui/qtextcursor.h>
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'SensorPanel.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 68
#error "This file was generated using the moc from 6.2.4. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_Sensor__View__SensorPanel_t {
    const uint offsetsAndSize[10];
    char stringdata0[72];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(offsetof(qt_meta_stringdata_Sensor__View__SensorPanel_t, stringdata0) + ofs), len 
static const qt_meta_stringdata_Sensor__View__SensorPanel_t qt_meta_stringdata_Sensor__View__SensorPanel = {
    {
QT_MOC_LITERAL(0, 25), // "Sensor::View::SensorPanel"
QT_MOC_LITERAL(26, 12), // "deleteSensor"
QT_MOC_LITERAL(39, 0), // ""
QT_MOC_LITERAL(40, 12), // "modifySensor"
QT_MOC_LITERAL(53, 18) // "generateSimulation"

    },
    "Sensor::View::SensorPanel\0deleteSensor\0"
    "\0modifySensor\0generateSimulation"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Sensor__View__SensorPanel[] = {

 // content:
      10,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags, initial metatype offsets
       1,    0,   32,    2, 0x06,    1 /* Public */,
       3,    0,   33,    2, 0x06,    2 /* Public */,

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       4,    0,   34,    2, 0x0a,    3 /* Public */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void,

       0        // eod
};

void Sensor::View::SensorPanel::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<SensorPanel *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->deleteSensor(); break;
        case 1: _t->modifySensor(); break;
        case 2: _t->generateSimulation(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (SensorPanel::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&SensorPanel::deleteSensor)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (SensorPanel::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&SensorPanel::modifySensor)) {
                *result = 1;
                return;
            }
        }
    }
    (void)_a;
}

const QMetaObject Sensor::View::SensorPanel::staticMetaObject = { {
    QMetaObject::SuperData::link<QWidget::staticMetaObject>(),
    qt_meta_stringdata_Sensor__View__SensorPanel.offsetsAndSize,
    qt_meta_data_Sensor__View__SensorPanel,
    qt_static_metacall,
    nullptr,
qt_incomplete_metaTypeArray<qt_meta_stringdata_Sensor__View__SensorPanel_t
, QtPrivate::TypeAndForceComplete<SensorPanel, std::true_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>
, QtPrivate::TypeAndForceComplete<void, std::false_type>


>,
    nullptr
} };


const QMetaObject *Sensor::View::SensorPanel::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Sensor::View::SensorPanel::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_Sensor__View__SensorPanel.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int Sensor::View::SensorPanel::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 3)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 3;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 3)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 3;
    }
    return _id;
}

// SIGNAL 0
void Sensor::View::SensorPanel::deleteSensor()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void Sensor::View::SensorPanel::modifySensor()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE