#include "bubblesort.h"
#include <QDebug>
#include <QList>
#include <QElapsedTimer>

BubbleSort::BubbleSort()
{
}

QString BubbleSort::Sort(){
    QList<double> lista = getSequence();


    QElapsedTimer timer;
        timer.start();

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
         qDebug() << timer.elapsed();

        QString sorted;
        for ( int j = 0 ; j < lista.count() ; j++){
            sorted += QString::number(lista[j]) + "\n";
        }

        return sorted;
}
