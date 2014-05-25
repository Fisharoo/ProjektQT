#ifndef QUICKSORT_H
#define QUICKSORT_H

#include <sorting.h>

class QuickSort: public sorting
{
public:
    QuickSort();
    void Sort();
private:
    void sortIt(int left, int right);
};

#endif // QUICKSORT_H
