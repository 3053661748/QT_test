/****************************************************************************
** Meta object code from reading C++ file 'mainvidget.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.7.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../mainvidget.h"
#include <QtCore/qmetatype.h>

#include <QtCore/qtmochelpers.h>

#include <memory>


#include <QtCore/qxptype_traits.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'mainvidget.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 68
#error "This file was generated using the moc from 6.7.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

#ifndef Q_CONSTINIT
#define Q_CONSTINIT
#endif

QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
QT_WARNING_DISABLE_GCC("-Wuseless-cast")
namespace {

#ifdef QT_MOC_HAS_STRINGDATA
struct qt_meta_stringdata_CLASSMainVidgetENDCLASS_t {};
constexpr auto qt_meta_stringdata_CLASSMainVidgetENDCLASS = QtMocHelpers::stringData(
    "MainVidget",
    "on_gb_clicked",
    "",
    "on_pf_clicked",
    "on_about_clicked",
    "on_ss_clicked",
    "on_yinliang_valueChanged",
    "value",
    "on_syq_clicked",
    "on_bf_clicked",
    "on_xyq_clicked",
    "on_dqxh_clicked",
    "on_jindutiao_valueChanged",
    "on_jindutiao_sliderPressed",
    "on_jindutiao_sliderReleased"
);
#else  // !QT_MOC_HAS_STRINGDATA
#error "qtmochelpers.h not found or too old."
#endif // !QT_MOC_HAS_STRINGDATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSMainVidgetENDCLASS[] = {

 // content:
      12,       // revision
       0,       // classname
       0,    0, // classinfo
      12,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       1,    0,   86,    2, 0x08,    1 /* Private */,
       3,    0,   87,    2, 0x08,    2 /* Private */,
       4,    0,   88,    2, 0x08,    3 /* Private */,
       5,    0,   89,    2, 0x08,    4 /* Private */,
       6,    1,   90,    2, 0x08,    5 /* Private */,
       8,    0,   93,    2, 0x08,    7 /* Private */,
       9,    0,   94,    2, 0x08,    8 /* Private */,
      10,    0,   95,    2, 0x08,    9 /* Private */,
      11,    0,   96,    2, 0x08,   10 /* Private */,
      12,    1,   97,    2, 0x08,   11 /* Private */,
      13,    0,  100,    2, 0x08,   13 /* Private */,
      14,    0,  101,    2, 0x08,   14 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,    7,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,    7,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

Q_CONSTINIT const QMetaObject MainVidget::staticMetaObject = { {
    QMetaObject::SuperData::link<QWidget::staticMetaObject>(),
    qt_meta_stringdata_CLASSMainVidgetENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSMainVidgetENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSMainVidgetENDCLASS_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<MainVidget, std::true_type>,
        // method 'on_gb_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_pf_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_about_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_ss_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_yinliang_valueChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        // method 'on_syq_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_bf_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_xyq_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_dqxh_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_jindutiao_valueChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        // method 'on_jindutiao_sliderPressed'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_jindutiao_sliderReleased'
        QtPrivate::TypeAndForceComplete<void, std::false_type>
    >,
    nullptr
} };

void MainVidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<MainVidget *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->on_gb_clicked(); break;
        case 1: _t->on_pf_clicked(); break;
        case 2: _t->on_about_clicked(); break;
        case 3: _t->on_ss_clicked(); break;
        case 4: _t->on_yinliang_valueChanged((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 5: _t->on_syq_clicked(); break;
        case 6: _t->on_bf_clicked(); break;
        case 7: _t->on_xyq_clicked(); break;
        case 8: _t->on_dqxh_clicked(); break;
        case 9: _t->on_jindutiao_valueChanged((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 10: _t->on_jindutiao_sliderPressed(); break;
        case 11: _t->on_jindutiao_sliderReleased(); break;
        default: ;
        }
    }
}

const QMetaObject *MainVidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *MainVidget::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSMainVidgetENDCLASS.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int MainVidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 12)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 12;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 12)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 12;
    }
    return _id;
}
QT_WARNING_POP
