/*

Faça um programa que leia um número inteiro n e aloque
um vetor com n inteiros de forma dinâmica (use o
operador new). 

Em seguida, o programa deve ler os valores do vetor e
calcular a média dos elementos desse vetor. Por fim,
deve desalocar (use o operador delete) a memória
usada para armazenar os seus elementos.

*/
#include <iostream>

using namespace std;

int main(){
    int n;

    cin >> n;

    int *vet = new int[n];

    for(int i = 0; i < n; i++){
        cin >> vet[i];
    }

    double total = 0;

    for(int i = 0; i < n; i++){
        total += vet[i];
    }

    double media = total / n;

    cout << "Media: " << media << endl;

    delete vet;
}