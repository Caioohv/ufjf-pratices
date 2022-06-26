/*

Implemente uma única função que receba um vetor de números inteiros (vet) e o seu tamanho (tam) e:

I conte o total de elementos pares;
I conte o total de elementos ı́mpares;
I conte o total de elementos negativos;
I retorne verdadeiro se existirem números negativos no
vetor, ou retorne falso, caso contrário.

Considere o seguinte protótipo:
-> bool func(int tam, int vet[], int *par, int *impar, int *negativos);

*/
#include <iostream>

using namespace std;

bool func(int tam, int vet[], int *par, int *impar, int *negativos){
    for(int i = 0; i < tam; i++){
        if(vet[i] < 0) (*negativos)++;
        if(vet[i] % 2 == 0) (*par)++;
    }

    *impar = tam - *par;
    cout<< "Total: " << tam 
        << "\nPares: " << *par
        << "\nImpares " << *impar
        << "\nNegativos: " << *negativos
        << endl;
    if(*negativos == 0) return false;
    return true;
}

int main(){

    int vet[8] = {3,4,5,6,-1,-2,-3,-4};
    int tam = 8, par = 0, impar = 0, negativo = 0;

    int *pt_par = &par;
    int *pt_impar = &impar;
    int *pt_negativo = &negativo;


    bool resol; 
    resol = func(tam, vet, pt_par, pt_impar, pt_negativo);

    cout << resol << endl;

    return 0;
}