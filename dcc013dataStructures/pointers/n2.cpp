/*

Implemente a função troca que troca o conteúdo de duas
variáveis inteiras a e b. Faça um programa que teste a
função implementada. Protótipo:
void troca(int *a, int *b);

*/

#include <iostream>

using namespace std;


void troca(int *a, int *b){
    int aux;
    aux = *b;
    *b = *a;
    *a = aux;
    return;
}


int main(){

    int a = 3, b = 5;

    int *pt_a = &a, *pt_b = &b;

    cout << "A e B antes da troca: " << a << " - " << b << endl;

    troca(pt_a, pt_b);

    cout << "A e B depois da troca: " << a << " - " << b << endl;
    cout << "pt A e B: " << *pt_a << " - " << *pt_b << endl;


    return 0;
}