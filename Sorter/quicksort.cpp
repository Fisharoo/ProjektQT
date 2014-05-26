#include "quicksort.h"
#include <QDebug>
#include <QList>
QuickSort::QuickSort()
{
}

QList<double> QuickSort::Sort(){
    curList = getSequence();
    if ( curList.count() > 0 ){
    sortIt(0,curList.count()-1);
    }
    return curList;
}
void QuickSort::sortIt(int left, int right){
    int i,j;
    double pivot;
    i = (left + right) / 2;
    pivot = curList[i];
    curList[i] = curList[right];
    for(j = i = left; i < right; i++){
        if(curList[i] < pivot){
            curList.swap(i, j);
            j++;
        }
    }
    curList[right] = curList[j];
    curList[j] = pivot;
    if(left < j - 1) sortIt(left, j - 1);
    if(j + 1 < right) sortIt(j + 1, right);
}
