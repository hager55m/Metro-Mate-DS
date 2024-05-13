/****************************************************************************
** Meta object code from reading C++ file 'ticket.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.6.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../ticket.h"
#include <QtCore/qmetatype.h>

#if __has_include(<QtCore/qtmochelpers.h>)
#include <QtCore/qtmochelpers.h>
#else
QT_BEGIN_MOC_NAMESPACE
#endif


#include <memory>

#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'ticket.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 68
#error "This file was generated using the moc from 6.6.3. It"
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
struct qt_meta_stringdata_CLASSTicketENDCLASS_t {};
constexpr auto qt_meta_stringdata_CLASSTicketENDCLASS = QtMocHelpers::stringData(
    "Ticket",
    "switshtoadmin",
    "",
    "switshtomanage",
    "switshtosub",
    "switshtostation",
    "switshtologin",
    "on_pushButton1_clicked",
    "on_pushButton_4_clicked",
    "on_pushButton_5_clicked",
    "on_station_2_clicked",
    "on_pushButton_6_clicked",
    "on_logout_clicked"
);
#else  // !QT_MOC_HAS_STRING_DATA
struct qt_meta_stringdata_CLASSTicketENDCLASS_t {
    uint offsetsAndSizes[26];
    char stringdata0[7];
    char stringdata1[14];
    char stringdata2[1];
    char stringdata3[15];
    char stringdata4[12];
    char stringdata5[16];
    char stringdata6[14];
    char stringdata7[23];
    char stringdata8[24];
    char stringdata9[24];
    char stringdata10[21];
    char stringdata11[24];
    char stringdata12[18];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_CLASSTicketENDCLASS_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_CLASSTicketENDCLASS_t qt_meta_stringdata_CLASSTicketENDCLASS = {
    {
        QT_MOC_LITERAL(0, 6),  // "Ticket"
        QT_MOC_LITERAL(7, 13),  // "switshtoadmin"
        QT_MOC_LITERAL(21, 0),  // ""
        QT_MOC_LITERAL(22, 14),  // "switshtomanage"
        QT_MOC_LITERAL(37, 11),  // "switshtosub"
        QT_MOC_LITERAL(49, 15),  // "switshtostation"
        QT_MOC_LITERAL(65, 13),  // "switshtologin"
        QT_MOC_LITERAL(79, 22),  // "on_pushButton1_clicked"
        QT_MOC_LITERAL(102, 23),  // "on_pushButton_4_clicked"
        QT_MOC_LITERAL(126, 23),  // "on_pushButton_5_clicked"
        QT_MOC_LITERAL(150, 20),  // "on_station_2_clicked"
        QT_MOC_LITERAL(171, 23),  // "on_pushButton_6_clicked"
        QT_MOC_LITERAL(195, 17)   // "on_logout_clicked"
    },
    "Ticket",
    "switshtoadmin",
    "",
    "switshtomanage",
    "switshtosub",
    "switshtostation",
    "switshtologin",
    "on_pushButton1_clicked",
    "on_pushButton_4_clicked",
    "on_pushButton_5_clicked",
    "on_station_2_clicked",
    "on_pushButton_6_clicked",
    "on_logout_clicked"
};
#undef QT_MOC_LITERAL
#endif // !QT_MOC_HAS_STRING_DATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSTicketENDCLASS[] = {

 // content:
      12,       // revision
       0,       // classname
       0,    0, // classinfo
      11,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       5,       // signalCount

 // signals: name, argc, parameters, tag, flags, initial metatype offsets
       1,    0,   80,    2, 0x06,    1 /* Public */,
       3,    0,   81,    2, 0x06,    2 /* Public */,
       4,    0,   82,    2, 0x06,    3 /* Public */,
       5,    0,   83,    2, 0x06,    4 /* Public */,
       6,    0,   84,    2, 0x06,    5 /* Public */,

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       7,    0,   85,    2, 0x08,    6 /* Private */,
       8,    0,   86,    2, 0x08,    7 /* Private */,
       9,    0,   87,    2, 0x08,    8 /* Private */,
      10,    0,   88,    2, 0x08,    9 /* Private */,
      11,    0,   89,    2, 0x08,   10 /* Private */,
      12,    0,   90,    2, 0x08,   11 /* Private */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

Q_CONSTINIT const QMetaObject Ticket::staticMetaObject = { {
    QMetaObject::SuperData::link<QDockWidget::staticMetaObject>(),
    qt_meta_stringdata_CLASSTicketENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSTicketENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSTicketENDCLASS_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<Ticket, std::true_type>,
        // method 'switshtoadmin'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'switshtomanage'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'switshtosub'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'switshtostation'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'switshtologin'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_pushButton1_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_pushButton_4_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_pushButton_5_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_station_2_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_pushButton_6_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_logout_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>
    >,
    nullptr
} };

void Ticket::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<Ticket *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->switshtoadmin(); break;
        case 1: _t->switshtomanage(); break;
        case 2: _t->switshtosub(); break;
        case 3: _t->switshtostation(); break;
        case 4: _t->switshtologin(); break;
        case 5: _t->on_pushButton1_clicked(); break;
        case 6: _t->on_pushButton_4_clicked(); break;
        case 7: _t->on_pushButton_5_clicked(); break;
        case 8: _t->on_station_2_clicked(); break;
        case 9: _t->on_pushButton_6_clicked(); break;
        case 10: _t->on_logout_clicked(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (Ticket::*)();
            if (_t _q_method = &Ticket::switshtoadmin; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (Ticket::*)();
            if (_t _q_method = &Ticket::switshtomanage; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (Ticket::*)();
            if (_t _q_method = &Ticket::switshtosub; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (Ticket::*)();
            if (_t _q_method = &Ticket::switshtostation; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 3;
                return;
            }
        }
        {
            using _t = void (Ticket::*)();
            if (_t _q_method = &Ticket::switshtologin; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 4;
                return;
            }
        }
    }
    (void)_a;
}

const QMetaObject *Ticket::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Ticket::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSTicketENDCLASS.stringdata0))
        return static_cast<void*>(this);
    return QDockWidget::qt_metacast(_clname);
}

int Ticket::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDockWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 11)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 11;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 11)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 11;
    }
    return _id;
}

// SIGNAL 0
void Ticket::switshtoadmin()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void Ticket::switshtomanage()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void Ticket::switshtosub()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}

// SIGNAL 3
void Ticket::switshtostation()
{
    QMetaObject::activate(this, &staticMetaObject, 3, nullptr);
}

// SIGNAL 4
void Ticket::switshtologin()
{
    QMetaObject::activate(this, &staticMetaObject, 4, nullptr);
}
QT_WARNING_POP
