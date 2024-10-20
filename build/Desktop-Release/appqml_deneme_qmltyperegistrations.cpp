/****************************************************************************
** Generated QML type registration code
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <QtQml/qqml.h>
#include <QtQml/qqmlmoduleregistration.h>

#include <TlvParser.h>


#if !defined(QT_STATIC)
#define Q_QMLTYPE_EXPORT Q_DECL_EXPORT
#else
#define Q_QMLTYPE_EXPORT
#endif
Q_QMLTYPE_EXPORT void qml_register_types_qml_deneme()
{
    qmlRegisterTypesAndRevisions<TlvParser>("qml_deneme", 1);
    qmlRegisterModule("qml_deneme", 1, 0);
}

static const QQmlModuleRegistration qmldenemeRegistration("qml_deneme", qml_register_types_qml_deneme);
