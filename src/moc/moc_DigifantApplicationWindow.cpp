/****************************************************************************
** Meta object code from reading C++ file 'DigifantApplicationWindow.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.7.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../multidisplay-app/src/DigifantApplicationWindow.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'DigifantApplicationWindow.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.7.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_DigifantApplicationWindow_t {
    QByteArrayData data[5];
    char stringdata0[53];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_DigifantApplicationWindow_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_DigifantApplicationWindow_t qt_meta_stringdata_DigifantApplicationWindow = {
    {
QT_MOC_LITERAL(0, 0, 25), // "DigifantApplicationWindow"
QT_MOC_LITERAL(1, 26, 9), // "visualize"
QT_MOC_LITERAL(2, 36, 0), // ""
QT_MOC_LITERAL(3, 37, 13), // "MdDataRecord*"
QT_MOC_LITERAL(4, 51, 1) // "d"

    },
    "DigifantApplicationWindow\0visualize\0"
    "\0MdDataRecord*\0d"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_DigifantApplicationWindow[] = {

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
       1,    1,   19,    2, 0x0a /* Public */,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 3,    4,

       0        // eod
};

void DigifantApplicationWindow::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        DigifantApplicationWindow *_t = static_cast<DigifantApplicationWindow *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->visualize((*reinterpret_cast< MdDataRecord*(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObject DigifantApplicationWindow::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_DigifantApplicationWindow.data,
      qt_meta_data_DigifantApplicationWindow,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *DigifantApplicationWindow::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *DigifantApplicationWindow::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_DigifantApplicationWindow.stringdata0))
        return static_cast<void*>(const_cast< DigifantApplicationWindow*>(this));
    return QDialog::qt_metacast(_clname);
}

int DigifantApplicationWindow::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
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
QT_END_MOC_NAMESPACE
