/****************************************************************************
** Meta object code from reading C++ file 'widget.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.12.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../25_MyMedia/widget.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'widget.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.12.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_Widget_t {
    QByteArrayData data[27];
    char stringdata0[526];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_Widget_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_Widget_t qt_meta_stringdata_Widget = {
    {
QT_MOC_LITERAL(0, 0, 6), // "Widget"
QT_MOC_LITERAL(1, 7, 14), // "updatePosition"
QT_MOC_LITERAL(2, 22, 0), // ""
QT_MOC_LITERAL(3, 23, 8), // "position"
QT_MOC_LITERAL(4, 32, 12), // "stateChanged"
QT_MOC_LITERAL(5, 45, 19), // "QMediaPlayer::State"
QT_MOC_LITERAL(6, 65, 5), // "state"
QT_MOC_LITERAL(7, 71, 18), // "mediaStatusChanged"
QT_MOC_LITERAL(8, 90, 25), // "QMediaPlayer::MediaStatus"
QT_MOC_LITERAL(9, 116, 6), // "status"
QT_MOC_LITERAL(10, 123, 9), // "showError"
QT_MOC_LITERAL(11, 133, 19), // "QMediaPlayer::Error"
QT_MOC_LITERAL(12, 153, 5), // "error"
QT_MOC_LITERAL(13, 159, 24), // "metaDataAvailableChanged"
QT_MOC_LITERAL(14, 184, 9), // "available"
QT_MOC_LITERAL(15, 194, 26), // "on_pushButton_Play_clicked"
QT_MOC_LITERAL(16, 221, 27), // "on_pushButton_Pause_clicked"
QT_MOC_LITERAL(17, 249, 26), // "on_pushButton_Stop_clicked"
QT_MOC_LITERAL(18, 276, 31), // "on_horizontalSlider_sliderMoved"
QT_MOC_LITERAL(19, 308, 29), // "on_pushButton_Capture_clicked"
QT_MOC_LITERAL(20, 338, 33), // "on_pushButton_Open_Camera_cli..."
QT_MOC_LITERAL(21, 372, 34), // "on_pushButton_Close_Camera_cl..."
QT_MOC_LITERAL(22, 407, 14), // "updateProgress"
QT_MOC_LITERAL(23, 422, 8), // "duration"
QT_MOC_LITERAL(24, 431, 36), // "on_pushButton_Start_Recorder_..."
QT_MOC_LITERAL(25, 468, 35), // "on_pushButton_Stop_Recorder_c..."
QT_MOC_LITERAL(26, 504, 21) // "on_pushButton_clicked"

    },
    "Widget\0updatePosition\0\0position\0"
    "stateChanged\0QMediaPlayer::State\0state\0"
    "mediaStatusChanged\0QMediaPlayer::MediaStatus\0"
    "status\0showError\0QMediaPlayer::Error\0"
    "error\0metaDataAvailableChanged\0available\0"
    "on_pushButton_Play_clicked\0"
    "on_pushButton_Pause_clicked\0"
    "on_pushButton_Stop_clicked\0"
    "on_horizontalSlider_sliderMoved\0"
    "on_pushButton_Capture_clicked\0"
    "on_pushButton_Open_Camera_clicked\0"
    "on_pushButton_Close_Camera_clicked\0"
    "updateProgress\0duration\0"
    "on_pushButton_Start_Recorder_clicked\0"
    "on_pushButton_Stop_Recorder_clicked\0"
    "on_pushButton_clicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Widget[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      16,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    1,   94,    2, 0x08 /* Private */,
       4,    1,   97,    2, 0x08 /* Private */,
       7,    1,  100,    2, 0x08 /* Private */,
      10,    1,  103,    2, 0x08 /* Private */,
      13,    1,  106,    2, 0x08 /* Private */,
      15,    0,  109,    2, 0x08 /* Private */,
      16,    0,  110,    2, 0x08 /* Private */,
      17,    0,  111,    2, 0x08 /* Private */,
      18,    1,  112,    2, 0x08 /* Private */,
      19,    0,  115,    2, 0x08 /* Private */,
      20,    0,  116,    2, 0x08 /* Private */,
      21,    0,  117,    2, 0x08 /* Private */,
      22,    1,  118,    2, 0x08 /* Private */,
      24,    0,  121,    2, 0x08 /* Private */,
      25,    0,  122,    2, 0x08 /* Private */,
      26,    0,  123,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void, QMetaType::LongLong,    3,
    QMetaType::Void, 0x80000000 | 5,    6,
    QMetaType::Void, 0x80000000 | 8,    9,
    QMetaType::Void, 0x80000000 | 11,   12,
    QMetaType::Void, QMetaType::Bool,   14,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,    3,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::LongLong,   23,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void Widget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Widget *_t = static_cast<Widget *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->updatePosition((*reinterpret_cast< qint64(*)>(_a[1]))); break;
        case 1: _t->stateChanged((*reinterpret_cast< QMediaPlayer::State(*)>(_a[1]))); break;
        case 2: _t->mediaStatusChanged((*reinterpret_cast< QMediaPlayer::MediaStatus(*)>(_a[1]))); break;
        case 3: _t->showError((*reinterpret_cast< QMediaPlayer::Error(*)>(_a[1]))); break;
        case 4: _t->metaDataAvailableChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 5: _t->on_pushButton_Play_clicked(); break;
        case 6: _t->on_pushButton_Pause_clicked(); break;
        case 7: _t->on_pushButton_Stop_clicked(); break;
        case 8: _t->on_horizontalSlider_sliderMoved((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 9: _t->on_pushButton_Capture_clicked(); break;
        case 10: _t->on_pushButton_Open_Camera_clicked(); break;
        case 11: _t->on_pushButton_Close_Camera_clicked(); break;
        case 12: _t->updateProgress((*reinterpret_cast< qint64(*)>(_a[1]))); break;
        case 13: _t->on_pushButton_Start_Recorder_clicked(); break;
        case 14: _t->on_pushButton_Stop_Recorder_clicked(); break;
        case 15: _t->on_pushButton_clicked(); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 1:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QMediaPlayer::State >(); break;
            }
            break;
        case 2:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QMediaPlayer::MediaStatus >(); break;
            }
            break;
        case 3:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QMediaPlayer::Error >(); break;
            }
            break;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject Widget::staticMetaObject = { {
    &QWidget::staticMetaObject,
    qt_meta_stringdata_Widget.data,
    qt_meta_data_Widget,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *Widget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Widget::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_Widget.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int Widget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 16)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 16;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 16)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 16;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
