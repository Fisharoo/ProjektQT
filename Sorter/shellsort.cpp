#include "shellsort.h"

ShellSort::ShellSort()
{
}

QList<double> ShellSort::Sort(){
    QList<double> lista = getSequence();

    double x;
    int h,i;
    int N = lista.count();
    for(h = 1; h < N ; h = 3 * h + 1);
      h /= 9;
      if(!h) h++;

      while(h)
      {
        for(int j = N - h - 1; j >= 0; j--)
        {
          x = lista[j];
          i = j + h;
          while((i < N) && (x > lista[i]))
          {
            lista[i - h] = lista[i];
            i += h;
          }
          lista[i - h] = x;
        }
        h /= 3;
      }
      return lista;
}
