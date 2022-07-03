/*

Desenvolver uma função recursiva que recebe um número
inteiro n e retorna o valor do somatório:
n + (n − 1) + (n − 2) + . . . + 2 + 1.

*/

#include <iostream>

using namespace std;

int soma(int i){
    if(i == 1) return i;
    return i + soma(i-1);
}



int main(){
    int n = 432;

    cout << "Soma: " << soma(n) << endl;

    return 0;
}

