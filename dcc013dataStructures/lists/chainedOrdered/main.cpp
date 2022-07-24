#include <iostream>
#include <cstdlib> ///rand()
#include <ctime>   ///time()
#include "ListaEncad.h"

using namespace std;

int numAleatorio(int a, int b)
{
    return a + rand()%(b - a + 1) ; /// retorna um numero inteiro aleat�rio entre a e b
}

int main()
{
    ListaEncad l; /// cria lista vazia
    int NumNos = 6;

    srand(time(NULL));
    /// ATENCAO: os valores inseridos na lista sao gerados
    /// aleatoriamente e mudam em cada execucao do programa!!!
    cout << "Inserindo valores: ";
    for(int i = 1; i <= NumNos; i++)
    {
        int val =  numAleatorio(0, 50); /// cria um valor aleat�rio entre 0 e 50
        cout << val << ", ";
        l.insereInicio(val);
    }
    cout << endl;

    cout << "imprimindo a lista:" << endl;
    l.imprime();


    l.limpa();
    
    cout << "imprimindo a lista:" << endl;
    l.imprime();

    cout << "Inserindo valores: ";
    for(int i = 1; i <= NumNos; i++)
    {
        int val =  numAleatorio(0, 50); /// cria um valor aleat�rio entre 0 e 50
        cout << val << ", ";
        l.insereInicio(val);
    }
    cout << endl;

    cout << "imprimindo a lista:" << endl;
    l.imprime();


    bool existe = l.busca(20);
    cout << "O valor 20 esta na lista? ";
    if(existe)
        cout << "Sim" << endl;
    else
        cout << "Nao" << endl;

    cout << "indice de valor maior que 20: " << l.verificaMaior(20) << endl;

    cout << "media dos numeros: " << l.getMedia() << endl;

    ListaEncad l2 = ListaEncad();

    for(int i = 1; i <= NumNos; i++)
    {
        int val =  numAleatorio(0, 50); /// cria um valor aleat�rio entre 0 e 50
        cout << val << ", ";
        l2.insereFinal(val);
    }
    cout << endl;

    l.concat(l2);

    l2.limpa();
    l.imprime();

    return 0;
};

