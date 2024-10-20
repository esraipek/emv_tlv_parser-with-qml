#ifndef SETTEXTFIELD_H
#define SETTEXTFIELD_H

#include <QObject>

class SetTextField : public QObject{

    Q_OBJECT
public:
   explicit SetTextField(QObject *parent = nullptr);

public slots:
   void logMessage(const QString &message);

signals:
    void updateTextField(const QString &text);

};

#endif // SETTEXTFIELD_H


