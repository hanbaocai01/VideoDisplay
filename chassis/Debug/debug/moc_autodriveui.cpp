/****************************************************************************
** Meta object code from reading C++ file 'autodriveui.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../autodriveui.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'autodriveui.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_AutoDriveUI_t {
    QByteArrayData data[12];
    char stringdata0[204];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_AutoDriveUI_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_AutoDriveUI_t qt_meta_stringdata_AutoDriveUI = {
    {
QT_MOC_LITERAL(0, 0, 11), // "AutoDriveUI"
QT_MOC_LITERAL(1, 12, 15), // "signal_AutoExit"
QT_MOC_LITERAL(2, 28, 0), // ""
QT_MOC_LITERAL(3, 29, 22), // "on_plottingBtn_clicked"
QT_MOC_LITERAL(4, 52, 7), // "checked"
QT_MOC_LITERAL(5, 60, 20), // "on_globalBtn_clicked"
QT_MOC_LITERAL(6, 81, 18), // "on_MoreBtn_clicked"
QT_MOC_LITERAL(7, 100, 18), // "on_TaskBtn_clicked"
QT_MOC_LITERAL(8, 119, 18), // "on_exitBtn_clicked"
QT_MOC_LITERAL(9, 138, 21), // "on_magnifyBtn_clicked"
QT_MOC_LITERAL(10, 160, 20), // "on_shrinkBtn_clicked"
QT_MOC_LITERAL(11, 181, 22) // "on_locationBtn_clicked"

    },
    "AutoDriveUI\0signal_AutoExit\0\0"
    "on_plottingBtn_clicked\0checked\0"
    "on_globalBtn_clicked\0on_MoreBtn_clicked\0"
    "on_TaskBtn_clicked\0on_exitBtn_clicked\0"
    "on_magnifyBtn_clicked\0on_shrinkBtn_clicked\0"
    "on_locationBtn_clicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_AutoDriveUI[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       9,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   59,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       3,    1,   60,    2, 0x08 /* Private */,
       5,    0,   63,    2, 0x08 /* Private */,
       6,    1,   64,    2, 0x08 /* Private */,
       7,    0,   67,    2, 0x08 /* Private */,
       8,    0,   68,    2, 0x08 /* Private */,
       9,    0,   69,    2, 0x08 /* Private */,
      10,    0,   70,    2, 0x08 /* Private */,
      11,    0,   71,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void, QMetaType::Bool,    4,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,    4,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void AutoDriveUI::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        AutoDriveUI *_t = static_cast<AutoDriveUI *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->signal_AutoExit(); break;
        case 1: _t->on_plottingBtn_clicked((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 2: _t->on_globalBtn_clicked(); break;
        case 3: _t->on_MoreBtn_clicked((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 4: _t->on_TaskBtn_clicked(); break;
        case 5: _t->on_exitBtn_clicked(); break;
        case 6: _t->on_magnifyBtn_clicked(); break;
        case 7: _t->on_shrinkBtn_clicked(); break;
        case 8: _t->on_locationBtn_clicked(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (AutoDriveUI::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&AutoDriveUI::signal_AutoExit)) {
                *result = 0;
                return;
            }
        }
    }
}

const QMetaObject AutoDriveUI::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_AutoDriveUI.data,
      qt_meta_data_AutoDriveUI,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *AutoDriveUI::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *AutoDriveUI::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_AutoDriveUI.stringdata0))
        return static_cast<void*>(const_cast< AutoDriveUI*>(this));
    return QWidget::qt_metacast(_clname);
}

int AutoDriveUI::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 9)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 9;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 9)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 9;
    }
    return _id;
}

// SIGNAL 0
void AutoDriveUI::signal_AutoExit()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
