#include "quicksort.h"
#include <QDebug>
QuickSort::QuickSort()
{
}

void QuickSort::Sort(){
    QList<double> lista = getSequence();
    sortIt(0,lista.count()-1);

}
void QuickSort::sortIt(int left, int right){
    int i,j,pivot;

}
