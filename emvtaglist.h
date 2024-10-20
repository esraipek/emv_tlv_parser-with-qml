#ifndef EMVTAGLIST_H
#define EMVTAGLIST_H

#include <QObject>
#include <QList>
#include "Tag.h"

class EmvTagList : public QObject
{
    Q_OBJECT
private:
    QList<Tag> emvTagList;
public:
    EmvTagList(QObject *parent = nullptr);
    void initializeTags(); // Function to add tags
    QList<Tag> getTags() const;
};

#endif // EMVTAGLIST_H
