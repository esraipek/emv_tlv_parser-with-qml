#include "settextfield.h"

#include <QDebug>

SetTextField::SetTextField(QObject *parent) : QObject(parent) {}

void SetTextField::logMessage(const QString &message) {
    emit updateTextField(message);  // Emit signal with the message
}
