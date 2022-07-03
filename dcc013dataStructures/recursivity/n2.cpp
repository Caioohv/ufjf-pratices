/*

Desenvolver uma função recursiva que recebe um vetor de
reais e seu tamanho n, calcular e retornar o menor valor do
vetor.

*/

#include <iostream>

using namespace std;


int menor(int vet[], int tam){
    if(tam == 0)
        return vet[0];

    if(vet[tam] < menor(vet, tam-1))
        return vet[tam];

    return menor(vet, tam-1);
}

int main(){

    int vet[5] = {11,3,5,-1,9};

    cout << "Menor: " << menor(vet, 4) << endl;

    return 0;
}