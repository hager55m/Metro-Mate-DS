/****************************************************************************
** Meta object code from reading C++ file 'loginpage.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.6.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../loginpage.h"
#include <QtCore/qmetatype.h>

#if __has_include(<QtCore/qtmochelpers.h>)
#include <QtCore/qtmochelpers.h>
#else
QT_BEGIN_MOC_NAMESPACE
#endif


#include <memory>

#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'loginpage.h' doesn't include <QObject>."
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
struct qt_meta_stringdata_CLASSLoginPageENDCLASS_t {};
constexpr auto qt_meta_stringdata_CLASSLoginPageENDCLASS = QtMocHelpers::stringData(
    "LoginPage",
    "SwitchTOSignup",
    "",
    "SwitchToMainPage",
    "SwitchToAdminPage",
    "on_signup_clicked",
    "on_login_clicked"
);
#else  // !QT_MOC_HAS_STRING_DATA
struct qt_meta_stringdata_CLASSLoginPageENDCLASS_t {
    uint offsetsAndSizes[14];
    char stringdata0[10];
    char stringdata1[15];
    char stringdata2[1];
    char stringdata3[17];
    char stringdata4[18];
    char stringdata5[18];
    char stringdata6[17];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_CLASSLoginPageENDCLASS_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_CLASSLoginPageENDCLASS_t qt_meta_stringdata_CLASSLoginPageENDCLASS = {
    {
        QT_MOC_LITERAL(0, 9),  // "LoginPage"
        QT_MOC_LITERAL(10, 14),  // "SwitchTOSignup"
        QT_MOC_LITERAL(25, 0),  // ""
        QT_MOC_LITERAL(26, 16),  // "SwitchToMainPage"
        QT_MOC_LITERAL(43, 17),  // "SwitchToAdminPage"
        QT_MOC_LITERAL(61, 17),  // "on_signup_clicked"
        QT_MOC_LITERAL(79, 16)   // "on_login_clicked"
    },
    "LoginPage",
    "SwitchTOSignup",
    "",
    "SwitchToMainPage",
    "SwitchToAdminPage",
    "on_signup_clicked",
    "on_login_clicked"
};
#undef QT_MOC_LITERAL
#endif // !QT_MOC_HAS_STRING_DATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSLoginPageENDCLASS[] = {

 // content:
      12,       // revision
       0,       // classname
       0,    0, // classinfo
       5,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       3,       // signalCount

 // signals: name, argc, parameters, tag, flags, initial metatype offsets
       1,    0,   44,    2, 0x06,    1 /* Public */,
       3,    0,   45,    2, 0x06,    2 /* Public */,
       4,    0,   46,    2, 0x06,    3 /* Public */,

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       5,    0,   47,    2, 0x08,    4 /* Private */,
       6,    0,   48,    2, 0x08,    5 /* Private */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

Q_CONSTINIT const QMetaObject LoginPage::staticMetaObject = { {
    QMetaObject::SuperData::link<QWidget::staticMetaObject>(),
    qt_meta_stringdata_CLASSLoginPageENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSLoginPageENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSLoginPageENDCLASS_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<LoginPage, std::true_type>,
        // method 'SwitchTOSignup'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'SwitchToMainPage'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'SwitchToAdminPage'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_signup_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_login_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>
    >,
    nullptr
} };

void LoginPage::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<LoginPage *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->SwitchTOSignup(); break;
        case 1: _t->SwitchToMainPage(); break;
        case 2: _t->SwitchToAdminPage(); break;
        case 3: _t->on_signup_clicked(); break;
        case 4: _t->on_login_clicked(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (LoginPage::*)();
            if (_t _q_method = &LoginPage::SwitchTOSignup; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (LoginPage::*)();
            if (_t _q_method = &LoginPage::SwitchToMainPage; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (LoginPage::*)();
            if (_t _q_method = &LoginPage::SwitchToAdminPage; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 2;
                return;
            }
        }
    }
    (void)_a;
}

const QMetaObject *LoginPage::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *LoginPage::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSLoginPageENDCLASS.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int LoginPage::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 5)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 5;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 5)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 5;
    }
    return _id;
}

// SIGNAL 0
void LoginPage::SwitchTOSignup()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void LoginPage::SwitchToMainPage()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void LoginPage::SwitchToAdminPage()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}
QT_WARNING_POP
