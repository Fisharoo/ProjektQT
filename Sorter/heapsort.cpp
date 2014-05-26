#include "heapsort.h"

HeapSort::HeapSort()
{

}
QList<double> HeapSort::Sort(){
    QList<double> list = getSequence();
    int i,j,k,m,N;
    double x;
    N = list.count() - 1;
    for(i = 2; i <= N; i++){
        j = i;
        k = j / 2;
        x = list[i];
        while((k > 0) && (list[k] < x)){
            list[j] = list[k];
            j = k;
            k = j / 2;
        }
        list[j] = x;
    }

    for(i = N; i > 1; i--){
        list.swap(1, i);
        j = 1;
        k = 2;
        while(k < i){
            if((k + 1 < i) && (list[k + 1] > list[k]))
                m = k + 1;
            else
                m = k;
            if(list[m] <= list[j]) break;
            list.swap(j,m);
            j = m; k = j + j;
        }
    }


    return list;
}
