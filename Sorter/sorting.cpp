#include "sorting.h"
#include <QDebug>

sorting::sorting()
{
}

QList<double> sorting::getSequence(){
    return seqList;
}

QList<double> sorting::createList(QString input){
    QString temp;
    QList<double> sequence;
    for(int i = 0; i < input.length(); i++){
        if(input.at(i).isNumber()){
            temp += input.at(i);
        }
        else if(input.at(i) == '.' && input.at(i+1).isNumber() && input.at(i-1).isNumber()){
            temp += input.at(i);
        }
        else if(!temp.isEmpty()){
            sequence << temp.toDouble();
            temp = "";
        }
    }

return sequence;
}

QString sorting::listToString(QList<double> lista){
    QString sorted;
    for ( int j = 0 ; j < lista.count() ; j++){
        sorted += QString::number(lista[j]) + "\n";
    }
    return sorted;

}
void sorting::setSequence(QString input){
    seqList = createList(input);
}
