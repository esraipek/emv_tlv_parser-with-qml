#include "TlvParser.h"
#include "emvtaglist.h"
#include <QDebug>
#include <QQuickItem>
#include <QQmlEngine>

TlvParser::TlvParser(QObject *parent)
    : QObject(parent)
{
}

void TlvParser::onPushButtonClicked(const QString &inputText)
{
    QList<QPair<QString, QString>> TVList;
    QString TLV = inputText;
    EmvTagList tagList;
    QList<Tag> tags = tagList.getTags(); // Access tag list

    int flag=0;
    int flag2=0;

    if (TLV.isEmpty()) {
         emit updateTextField("bos girilmis");
        qDebug()<<"boş girilmiş";
        return;
    }

    for (int i = 0; i < TLV.length(); ++i) {
        QChar ch = TLV[i];
        if (!((ch >= '0' && ch <= '9') || (ch >= 'A' && ch <= 'F') )) {
            qDebug() << "Hexadecimal karakter girilmelidir";
            emit updateTextField("Hexadecimal karakter girilmelidir");
            return;
        }
    }

    if (TLV.length() <= 4) {
        emit updateTextField("yetersiz data");
        qDebug()<<"Yetersiz data";
        return;
    }

    if (TLV.length() % 2 == 1) {
        emit updateTextField("Çift sayıda karakter girmeniz gerekli");
        qDebug()<<"Çift sayıda karakter girmeniz gerekli";
        return;
    }

    int i = 0;
    while (TLV.length() >= 5) {
        i++;
        qDebug()<<"--while döngüsü--"<<i;

        QString tag_part;
        QString length_part;
        QString value_part;
        int length = 0;
        bool found = false;
        bool found2 = false;


        qDebug()<<"TLV eski:"<<TLV;//input:6F1A840E315041592E5359532E4444463031A5088801025F2D02656E
        //input:A50A5F2D02656E5F2D02656E

        tag_part = TLV.mid(0, 4);

        foreach (const Tag &t, tags) {
            if (t.getTag() == tag_part) {
                found = true;
                break;
            }
        }

        if (found) {
            qDebug()<<"tag_part:"<<tag_part;

            length_part = TLV.mid(4, 2);
            qDebug()<<"length_part:"<<length_part;
            length = length_part.toInt(nullptr, 16);

            value_part = TLV.mid(6, length * 2);
            qDebug()<<"value_part:"<<value_part;

            if (TLV.length() < 6 + length * 2) {
                emit updateTextField("yeterli data yok4");
                qDebug() << "Yeterli data yok4";
                return;
            }

            TVList.append(qMakePair(tag_part, value_part));

            if (tag_part == "BF0C") {
                TLV = TLV.mid(6, TLV.length());
                if(TLV.length()<5){
                    qDebug()<<"yetersiz data";
                    flag=1;
                    break;
                }


            } else {
                TLV = TLV.mid(6 + length * 2);
            }

            qDebug() << "TLV yeni4:" << TLV;

        }

        if (!found) {
            tag_part = TLV.mid(0, 2);
            foreach (const Tag &t, tags) {
                if (t.getTag() == tag_part) {
                    found2 = true;
                    break;
                }
            }
        }

        if (found2) {
            tag_part = TLV.left(2);
            qDebug()<<"tag_part:"<<tag_part;

            length_part = TLV.mid(2, 2);
            qDebug()<<"length_part:"<<length_part;
            length = length_part.toInt(nullptr, 16);

            value_part = TLV.mid(4, length * 2);
            qDebug()<<"value_part:"<<value_part;

            if (TLV.length() < 4 + length * 2) {
                emit updateTextField("yeterli data yok2");
                qDebug() << "Yeterli data yok2";
                return;
            }

            TVList.append(qMakePair(tag_part, value_part));

            if (tag_part == "A5" || tag_part == "61" || tag_part == "6F" || tag_part == "70" || tag_part == "73" || tag_part == "77" || tag_part == "80") {
                TLV = TLV.mid(4, TLV.length());

                if(TLV.length()<5){
                    qDebug()<<"yetersiz data";
                    flag=1;
                    break;
                }


            } else {
                TLV = TLV.mid(4 + length * 2);
            }

            qDebug()<<"TLV yeni2:"<<TLV;
        }

        if (!found2 && !found) {
            flag2=1;
            qDebug()<<"tag bulunamadı";
            break;
        }
    }

    QStringList output;
    if(flag==1){
        output.append("yetersiz veri");
    }
    if(flag2==1){
        output.append("tag bulunamadı");
    }

    for (const QPair<QString, QString> &pair : TVList) {
        QString tagName;
        foreach (const Tag &t, tags) {
            if (t.getTag() == pair.first) {
                tagName = t.getName();
                break;
            }
        }
        if (!tagName.isEmpty()) {
            output.append(QString("Tag: %1, Name: %2, Value: %3 ").arg(pair.first).arg(tagName).arg(pair.second)
                          );

        } else {
            output.append(QString("Tag: %1, Name: Unknown, Value: %2 ").arg(pair.first).arg(pair.second)
                          );

        }
    }

   QString result = output.join("\n");

    QStringList lines = result.split("\n");
    for (const QString &line : lines) {
        qDebug() << line;
    }

   emit updateTextField ( result);

}
