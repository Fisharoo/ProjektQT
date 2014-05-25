#include "bubblesort.h"
#include <QDebug>
#include <QList>
#include <QElapsedTimer>

BubbleSort::BubbleSort()
{
}

QList<double> BubbleSort::Sort(){
    QList<double> lista = getSequence();

        double temp;
        int pmin = 0;
        int pmax = lista.count() - 1;
        int p;
          do
          {
            p = -1;
            for(int i = pmin; i < pmax; i++)
              if(lista[i] > lista[i+1])
              {
                temp = lista[i];
                lista[i] = lista[i+1];
                lista[i+1] = temp;
                if(p < 0) pmin = i;
                p = i;
              }
            if(pmin) pmin--;
            pmax = p;
          } while(p >= 0);


        return lista;
}
