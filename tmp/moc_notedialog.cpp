/****************************************************************************
** Meta object code from reading C++ file 'notedialog.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.7.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../notedialog.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'notedialog.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.7.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_noteDialog_t {
    QByteArrayData data[14];
    char stringdata0[291];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_noteDialog_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_noteDialog_t qt_meta_stringdata_noteDialog = {
    {
QT_MOC_LITERAL(0, 0, 10), // "noteDialog"
QT_MOC_LITERAL(1, 11, 4), // "pass"
QT_MOC_LITERAL(2, 16, 0), // ""
QT_MOC_LITERAL(3, 17, 10), // "passDetail"
QT_MOC_LITERAL(4, 28, 7), // "myEvent"
QT_MOC_LITERAL(5, 36, 32), // "on_eventLineEdit_editingFinished"
QT_MOC_LITERAL(6, 69, 29), // "on_locateEdit_editingFinished"
QT_MOC_LITERAL(7, 99, 35), // "on_startComboBox_currentTextC..."
QT_MOC_LITERAL(8, 135, 4), // "arg1"
QT_MOC_LITERAL(9, 140, 33), // "on_endComboBox_currentTextCha..."
QT_MOC_LITERAL(10, 174, 36), // "on_repeatComboBox_currentText..."
QT_MOC_LITERAL(11, 211, 35), // "on_colorComboBox_currentTextC..."
QT_MOC_LITERAL(12, 247, 21), // "on_buttonBox_accepted"
QT_MOC_LITERAL(13, 269, 21) // "on_buttonBox_rejected"

    },
    "noteDialog\0pass\0\0passDetail\0myEvent\0"
    "on_eventLineEdit_editingFinished\0"
    "on_locateEdit_editingFinished\0"
    "on_startComboBox_currentTextChanged\0"
    "arg1\0on_endComboBox_currentTextChanged\0"
    "on_repeatComboBox_currentTextChanged\0"
    "on_colorComboBox_currentTextChanged\0"
    "on_buttonBox_accepted\0on_buttonBox_rejected"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_noteDialog[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      10,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   64,    2, 0x06 /* Public */,
       3,    1,   67,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       5,    0,   70,    2, 0x08 /* Private */,
       6,    0,   71,    2, 0x08 /* Private */,
       7,    1,   72,    2, 0x08 /* Private */,
       9,    1,   75,    2, 0x08 /* Private */,
      10,    1,   78,    2, 0x08 /* Private */,
      11,    1,   81,    2, 0x08 /* Private */,
      12,    0,   84,    2, 0x08 /* Private */,
      13,    0,   85,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, QMetaType::QString,    2,
    QMetaType::Void, 0x80000000 | 4,    2,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,    8,
    QMetaType::Void, QMetaType::QString,    8,
    QMetaType::Void, QMetaType::QString,    8,
    QMetaType::Void, QMetaType::QString,    8,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void noteDialog::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        noteDialog *_t = static_cast<noteDialog *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->pass((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 1: _t->passDetail((*reinterpret_cast< const myEvent(*)>(_a[1]))); break;
        case 2: _t->on_eventLineEdit_editingFinished(); break;
        case 3: _t->on_locateEdit_editingFinished(); break;
        case 4: _t->on_startComboBox_currentTextChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 5: _t->on_endComboBox_currentTextChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 6: _t->on_repeatComboBox_currentTextChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 7: _t->on_colorComboBox_currentTextChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 8: _t->on_buttonBox_accepted(); break;
        case 9: _t->on_buttonBox_rejected(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (noteDialog::*_t)(const QString );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&noteDialog::pass)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (noteDialog::*_t)(const myEvent );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&noteDialog::passDetail)) {
                *result = 1;
                return;
            }
        }
    }
}

const QMetaObject noteDialog::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_noteDialog.data,
      qt_meta_data_noteDialog,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *noteDialog::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *noteDialog::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_noteDialog.stringdata0))
        return static_cast<void*>(const_cast< noteDialog*>(this));
    return QDialog::qt_metacast(_clname);
}

int noteDialog::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 10)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 10;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 10)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 10;
    }
    return _id;
}

// SIGNAL 0
void noteDialog::pass(const QString _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void noteDialog::passDetail(const myEvent _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}
QT_END_MOC_NAMESPACE
