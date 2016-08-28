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
    QByteArrayData data[21];
    char stringdata0[313];
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
QT_MOC_LITERAL(10, 129, 28), // "on_displayList_itemActivated"
QT_MOC_LITERAL(11, 158, 16), // "QListWidgetItem*"
QT_MOC_LITERAL(12, 175, 4), // "item"
QT_MOC_LITERAL(13, 180, 23), // "on_deleteButton_clicked"
QT_MOC_LITERAL(14, 204, 21), // "on_editButton_clicked"
QT_MOC_LITERAL(15, 226, 31), // "on_comboBox_currentIndexChanged"
QT_MOC_LITERAL(16, 258, 5), // "index"
QT_MOC_LITERAL(17, 264, 23), // "on_dateEdit_dateChanged"
QT_MOC_LITERAL(18, 288, 7), // "addNote"
QT_MOC_LITERAL(19, 296, 8), // "addEvent"
QT_MOC_LITERAL(20, 305, 7) // "myEvent"

    },
    "Widget\0readFile\0\0fileName\0"
    "on_OnRadiobutton_toggled\0checked\0"
    "on_calendar_activated\0date\0"
    "on_calendar_clicked\0on_clearButton_clicked\0"
    "on_displayList_itemActivated\0"
    "QListWidgetItem*\0item\0on_deleteButton_clicked\0"
    "on_editButton_clicked\0"
    "on_comboBox_currentIndexChanged\0index\0"
    "on_dateEdit_dateChanged\0addNote\0"
    "addEvent\0myEvent"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Widget[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      12,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    1,   74,    2, 0x08 /* Private */,
       4,    1,   77,    2, 0x08 /* Private */,
       6,    1,   80,    2, 0x08 /* Private */,
       8,    1,   83,    2, 0x08 /* Private */,
       9,    0,   86,    2, 0x08 /* Private */,
      10,    1,   87,    2, 0x08 /* Private */,
      13,    0,   90,    2, 0x08 /* Private */,
      14,    0,   91,    2, 0x08 /* Private */,
      15,    1,   92,    2, 0x08 /* Private */,
      17,    1,   95,    2, 0x08 /* Private */,
      18,    1,   98,    2, 0x0a /* Public */,
      19,    1,  101,    2, 0x0a /* Public */,

 // slots: parameters
    QMetaType::Bool, QMetaType::QString,    3,
    QMetaType::Void, QMetaType::Bool,    5,
    QMetaType::Void, QMetaType::QDate,    7,
    QMetaType::Void, QMetaType::QDate,    7,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 11,   12,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,   16,
    QMetaType::Void, QMetaType::QDate,    7,
    QMetaType::Void, QMetaType::QString,    2,
    QMetaType::Void, 0x80000000 | 20,    2,

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
        case 5: _t->on_displayList_itemActivated((*reinterpret_cast< QListWidgetItem*(*)>(_a[1]))); break;
        case 6: _t->on_deleteButton_clicked(); break;
        case 7: _t->on_editButton_clicked(); break;
        case 8: _t->on_comboBox_currentIndexChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 9: _t->on_dateEdit_dateChanged((*reinterpret_cast< const QDate(*)>(_a[1]))); break;
        case 10: _t->addNote((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 11: _t->addEvent((*reinterpret_cast< myEvent(*)>(_a[1]))); break;
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
        if (_id < 12)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 12;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 12)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 12;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
