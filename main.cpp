
#include <QGuiApplication>
#include <QQmlApplicationEngine>
#include "TlvParser.h"
#include "emvtaglist.h"

int main(int argc, char *argv[])
{
    QGuiApplication app(argc, argv);

    QQmlApplicationEngine engine;

    TlvParser parser;
    engine.rootContext()->setContextProperty(QStringLiteral("parser"), &parser);


        engine.loadFromModule("qml_deneme", "Main");

    return app.exec();
}
