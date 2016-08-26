/****************************************************************************
** Meta object code from reading C++ file 'widget.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.7.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../widget.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'widget.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.7.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_Widget_t {
    QByteArrayData data[17];
    char stringdata0[229];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_Widget_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_Widget_t qt_meta_stringdata_Widget = {
    {
QT_MOC_LITERAL(0, 0, 6), // "Widget"
QT_MOC_LITERAL(1, 7, 8), // "readFile"
QT_MOC_LITERAL(2, 16, 0), // ""
QT_MOC_LITERAL(3, 17, 8), // "fileName"
QT_MOC_LITERAL(4, 26, 24), // "on_OnRadiobutton_toggled"
QT_MOC_LITERAL(5, 51, 7), // "checked"
QT_MOC_LITERAL(6, 59, 21), // "on_calendar_activated"
QT_MOC_LITERAL(7, 81, 4), // "date"
QT_MOC_LITERAL(8, 86, 19), // "on_calendar_clicked"
QT_MOC_LITERAL(9, 106, 22), // "on_clearButton_clicked"
QT_MOC_LITERAL(10, 129, 23), // "on_deleteButton_clicked"
QT_MOC_LITERAL(11, 153, 28), // "on_displayList_itemActivated"
QT_MOC_LITERAL(12, 182, 16), // "QListWidgetItem*"
QT_MOC_LITERAL(13, 199, 4), // "item"
QT_MOC_LITERAL(14, 204, 7), // "addNote"
QT_MOC_LITERAL(15, 212, 8), // "addEvent"
QT_MOC_LITERAL(16, 221, 7) // "myEvent"

    },
    "Widget\0readFile\0\0fileName\0"
    "on_OnRadiobutton_toggled\0checked\0"
    "on_calendar_activated\0date\0"
    "on_calendar_clicked\0on_clearButton_clicked\0"
    "on_deleteButton_clicked\0"
    "on_displayList_itemActivated\0"
    "QListWidgetItem*\0item\0addNote\0addEvent\0"
    "myEvent"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Widget[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       9,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    1,   59,    2, 0x08 /* Private */,
       4,    1,   62,    2, 0x08 /* Private */,
       6,    1,   65,    2, 0x08 /* Private */,
       8,    1,   68,    2, 0x08 /* Private */,
       9,    0,   71,    2, 0x08 /* Private */,
      10,    0,   72,    2, 0x08 /* Private */,
      11,    1,   73,    2, 0x08 /* Private */,
      14,    1,   76,    2, 0x0a /* Public */,
      15,    1,   79,    2, 0x0a /* Public */,

 // slots: parameters
    QMetaType::Bool, QMetaType::QString,    3,
    QMetaType::Void, QMetaType::Bool,    5,
    QMetaType::Void, QMetaType::QDate,    7,
    QMetaType::Void, QMetaType::QDate,    7,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 12,   13,
    QMetaType::Void, QMetaType::QString,    2,
    QMetaType::Void, 0x80000000 | 16,    2,

       0        // eod
};

void Widget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Widget *_t = static_cast<Widget *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: { bool _r = _t->readFile((*reinterpret_cast< const QString(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 1: _t->on_OnRadiobutton_toggled((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 2: _t->on_calendar_activated((*reinterpret_cast< const QDate(*)>(_a[1]))); break;
        case 3: _t->on_calendar_clicked((*reinterpret_cast< const QDate(*)>(_a[1]))); break;
        case 4: _t->on_clearButton_clicked(); break;
        case 5: _t->on_deleteButton_clicked(); break;
        case 6: _t->on_displayList_itemActivated((*reinterpret_cast< QListWidgetItem*(*)>(_a[1]))); break;
        case 7: _t->addNote((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 8: _t->addEvent((*reinterpret_cast< const myEvent(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObject Widget::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_Widget.data,
      qt_meta_data_Widget,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *Widget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Widget::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_Widget.stringdata0))
        return static_cast<void*>(const_cast< Widget*>(this));
    return QWidget::qt_metacast(_clname);
}

int Widget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
QT_END_MOC_NAMESPACE
