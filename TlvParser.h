#ifndef TLVPARSER_H
#define TLVPARSER_H

#include <QObject>
#include <QtQml>



class TlvParser : public QObject
{
    Q_OBJECT
    QML_ELEMENT
public:
    explicit TlvParser(QObject *parent = nullptr);

    Q_INVOKABLE void onPushButtonClicked(const QString &inputText);


signals:
 void updateTextField(const QString &text);

private:
};

#endif // TLVPARSER_H
