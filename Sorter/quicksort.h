#ifndef QUICKSORT_H
#define QUICKSORT_H

#include <sorting.h>

class QuickSort: public sorting
{
public:
    QuickSort();
    QList<double> Sort();
private:
    void sortIt(int left, int right);
    QList<double> curList;
};

#endif // QUICKSORT_H
