#include <iostream>
#include "Lista.h"

using namespace std;

int main(){

    Lista lista = Lista();

    cout << "->  inserindo de 0 a 9 na lista " << endl;
    for(int i = 0; i < 10; i++) lista.insereFinal(i);
    lista.imprime();

    cout << "->  inserindo 30 no final da lista " << endl;
    lista.insereFinal(30);
    lista.imprime();

    cout << "->  obtendo posicao 7 da lista " << endl;
    cout << lista.get(7) << endl;

    cout << "->  alterando posicao 5 da lista para 12" << endl;
    lista.set(5, 12);
    lista.imprime();

    cout << "->  removendo inicio da lista " << endl;
    lista.removeInicio();
    lista.imprime();

    cout << "->  removendo final da lista " << endl;
    lista.removeFinal();
    lista.imprime();

    cout << "-> removendo inicio da lista " << endl;
    lista.removeInicio();
    lista.imprime();

    cout << "->  removendo final da lista " << endl;
    lista.removeFinal();
    lista.imprime();

    cout << "-> obtendo tamanho total " << endl;
    cout << lista.getTamanho() << endl;

    

    return 0;
}