/*

Implemente uma função que calcule o produto escalar
entre dois vetores do tipo de dados float.

 No programa principal você deve ler o tamanho n dos vetores, os quais
devem ser alocados dinamicamente usando new.

Depois, você deve ler os dados dos vetores e chamar a função para
calcular o produto escalar.

Por fim, use o operador delete para desalocar toda memória alocada de forma
dinâmica. 

rotótipo:

-> float prodEscalar(int n, float x[], float y[]);

Ex. O produto escalar entre x = [1, 2, 3] e y = [4, 5, 6] é dado
por:

x · y = 1 × 4 + 2 × 5 + 3 × 6 = 32.

*/
#include <iostream>

using namespace std;

float prodEscalar(int n, float x[], float y[]){
    float res = 0;

    for(int i = 0; i < n; i++) res += (x[i] * y[i]);

    return res;
}

int main(){

    float x[3] = {1,2,3};
    float y[3] = {4,5,6};

    cout << "resultado: " << prodEscalar(3, x, y) << endl;


    return 0;
}