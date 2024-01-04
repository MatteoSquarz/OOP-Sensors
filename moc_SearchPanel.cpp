/****************************************************************************
** Meta object code from reading C++ file 'SearchPanel.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.2.4)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "View/SearchPanel.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'SearchPanel.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 68
#error "This file was generated using the moc from 6.2.4. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_Sensor__View__SearchPanel_t {
    const uint offsetsAndSize[14];
    char stringdata0[85];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(offsetof(qt_meta_stringdata_Sensor__View__SearchPanel_t, stringdata0) + ofs), len 
static const qt_meta_stringdata_Sensor__View__SearchPanel_t qt_meta_stringdata_Sensor__View__SearchPanel = {
    {
QT_MOC_LITERAL(0, 25), // "Sensor::View::SearchPanel"
QT_MOC_LITERAL(26, 11), // "itemClicked"
QT_MOC_LITERAL(38, 0), // ""
QT_MOC_LITERAL(39, 16), // "QListWidgetItem*"
QT_MOC_LITERAL(56, 6), // "search"
QT_MOC_LITERAL(63, 11), // "clearSearch"
QT_MOC_LITERAL(75, 9) // "addSensor"

    },
    "Sensor::View::SearchPanel\0itemClicked\0"
    "\0QListWidgetItem*\0search\0clearSearch\0"
    "addSensor"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Sensor__View__SearchPanel[] = {

 // content:
      10,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       4,       // signalCount

 // signals: name, argc, parameters, tag, flags, initial metatype offsets
       1,    1,   38,    2, 0x06,    1 /* Public */,
       4,    0,   41,    2, 0x06,    3 /* Public */,
       5,    0,   42,    2, 0x06,    4 /* Public */,
       6,    0,   43,    2, 0x06,    5 /* Public */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3,    2,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void Sensor::View::SearchPanel::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<SearchPanel *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->itemClicked((*reinterpret_cast< std::add_pointer_t<QListWidgetItem*>>(_a[1]))); break;
        case 1: _t->search(); break;
        case 2: _t->clearSearch(); break;
        case 3: _t->addSensor(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (SearchPanel::*)(QListWidgetItem * );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&SearchPanel::itemClicked)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (SearchPanel::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&SearchPanel::search)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (SearchPanel::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&SearchPanel::clearSearch)) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (SearchPanel::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&SearchPanel::addSensor)) {
                *result = 3;
                return;
            }
        }
    }
}

const QMetaObject Sensor::View::SearchPanel::staticMetaObject = { {
    QMetaObject::SuperData::link<QWidget::staticMetaObject>(),
    qt_meta_stringdata_Sensor__View__SearchPanel.offsetsAndSize,
    qt_meta_data_Sensor__View__SearchPanel,
    qt_static_metacall,
    nullptr,
qt_incomplete_metaTypeArray<qt_meta_stringdata_Sensor__View__SearchPanel_t
, QtPrivate::TypeAndForceComplete<SearchPanel, std::true_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<QListWidgetItem *, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>



>,
    nullptr
} };


const QMetaObject *Sensor::View::SearchPanel::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Sensor::View::SearchPanel::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_Sensor__View__SearchPanel.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int Sensor::View::SearchPanel::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 4)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 4;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 4)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 4;
    }
    return _id;
}

// SIGNAL 0
void Sensor::View::SearchPanel::itemClicked(QListWidgetItem * _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void Sensor::View::SearchPanel::search()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void Sensor::View::SearchPanel::clearSearch()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}

// SIGNAL 3
void Sensor::View::SearchPanel::addSensor()
{
    QMetaObject::activate(this, &staticMetaObject, 3, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
