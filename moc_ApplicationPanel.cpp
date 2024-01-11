/****************************************************************************
** Meta object code from reading C++ file 'ApplicationPanel.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.2.4)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "View/ApplicationPanel.h"
#include <QtGui/qtextcursor.h>
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'ApplicationPanel.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 68
#error "This file was generated using the moc from 6.2.4. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_Sensor__View__ApplicationPanel_t {
    const uint offsetsAndSize[24];
    char stringdata0[205];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(offsetof(qt_meta_stringdata_Sensor__View__ApplicationPanel_t, stringdata0) + ofs), len 
static const qt_meta_stringdata_Sensor__View__ApplicationPanel_t qt_meta_stringdata_Sensor__View__ApplicationPanel = {
    {
QT_MOC_LITERAL(0, 30), // "Sensor::View::ApplicationPanel"
QT_MOC_LITERAL(31, 12), // "changeSensor"
QT_MOC_LITERAL(44, 0), // ""
QT_MOC_LITERAL(45, 16), // "QListWidgetItem*"
QT_MOC_LITERAL(62, 10), // "searchList"
QT_MOC_LITERAL(73, 15), // "clearSearchList"
QT_MOC_LITERAL(89, 20), // "deleteSensorFromList"
QT_MOC_LITERAL(110, 15), // "addSensorToList"
QT_MOC_LITERAL(126, 24), // "std::vector<std::string>"
QT_MOC_LITERAL(151, 15), // "addSensorWindow"
QT_MOC_LITERAL(167, 18), // "modifySensorWindow"
QT_MOC_LITERAL(186, 18) // "modifySensorInList"

    },
    "Sensor::View::ApplicationPanel\0"
    "changeSensor\0\0QListWidgetItem*\0"
    "searchList\0clearSearchList\0"
    "deleteSensorFromList\0addSensorToList\0"
    "std::vector<std::string>\0addSensorWindow\0"
    "modifySensorWindow\0modifySensorInList"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Sensor__View__ApplicationPanel[] = {

 // content:
      10,       // revision
       0,       // classname
       0,    0, // classinfo
       8,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       1,    1,   62,    2, 0x0a,    1 /* Public */,
       4,    0,   65,    2, 0x0a,    3 /* Public */,
       5,    0,   66,    2, 0x0a,    4 /* Public */,
       6,    0,   67,    2, 0x0a,    5 /* Public */,
       7,    1,   68,    2, 0x0a,    6 /* Public */,
       9,    0,   71,    2, 0x0a,    8 /* Public */,
      10,    0,   72,    2, 0x0a,    9 /* Public */,
      11,    1,   73,    2, 0x0a,   10 /* Public */,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 3,    2,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 8,    2,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 8,    2,

       0        // eod
};

void Sensor::View::ApplicationPanel::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<ApplicationPanel *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->changeSensor((*reinterpret_cast< std::add_pointer_t<QListWidgetItem*>>(_a[1]))); break;
        case 1: _t->searchList(); break;
        case 2: _t->clearSearchList(); break;
        case 3: _t->deleteSensorFromList(); break;
        case 4: _t->addSensorToList((*reinterpret_cast< std::add_pointer_t<std::vector<std::string>>>(_a[1]))); break;
        case 5: _t->addSensorWindow(); break;
        case 6: _t->modifySensorWindow(); break;
        case 7: _t->modifySensorInList((*reinterpret_cast< std::add_pointer_t<std::vector<std::string>>>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObject Sensor::View::ApplicationPanel::staticMetaObject = { {
    QMetaObject::SuperData::link<QWidget::staticMetaObject>(),
    qt_meta_stringdata_Sensor__View__ApplicationPanel.offsetsAndSize,
    qt_meta_data_Sensor__View__ApplicationPanel,
    qt_static_metacall,
    nullptr,
qt_incomplete_metaTypeArray<qt_meta_stringdata_Sensor__View__ApplicationPanel_t
, QtPrivate::TypeAndForceComplete<ApplicationPanel, std::true_type>
, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<QListWidgetItem *, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<std::vector<std::string>, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<std::vector<std::string>, std::false_type>


>,
    nullptr
} };


const QMetaObject *Sensor::View::ApplicationPanel::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Sensor::View::ApplicationPanel::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_Sensor__View__ApplicationPanel.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int Sensor::View::ApplicationPanel::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 8)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 8;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 8)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 8;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
