#ifndef SORTING_H
#define SORTING_H

#include <QString>
#include <QList>

class sorting
{
public:
    sorting();
    void setSequence(QString input);
    QList<double> getSequence();
    QString listToString(QList<double> lista);
private:
    QList<double> seqList;
    QList<double> createList(QString input);
};

#endif // SORTING_H
