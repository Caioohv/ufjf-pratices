#include <iostream>
#include "Ponto.h"
#include "ListaCont.h"

using namespace std;

int main()
{
    ListaCont l(10);

    l.insereFinal(24);
    l.insereFinal(3);
    l.insereFinal(2);
    l.insereFinal(-1);
    l.insereFinal(99);
    l.imprime();

    ListaCont l1(50);
    ListaCont l2(50);
    ListaCont l3(50);

    for(int i = 0; i < 50; i++){
        l1.insereFinal(i);
    }
    for(int i = 0; i < 25; i++){
        l2.insereFinal(l1.get(i));
    }
    for(int i = 25; i < 50; i++){
        l3.insereFinal(l1.get(i));
    }

    l2.imprime();
    l3.imprime();


    return 0;
}
