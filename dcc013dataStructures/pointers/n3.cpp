/* 

Dados dois números inteiros num e div, faça uma função
para calcular e retornar o quociente e o resto da divisão
inteira de num por div. Considerar o seguinte protótipo:

-> void divisao(int num, int div, int *q, int *r);

onde:
I num é dividendo;
I div é o divisor;
I q é o quociente;
I r é o resto.

*/
#include <iostream>

using namespace std;

void divisao(int num, int div, int *q, int *r){
    *q = num / div;
    *r = num % div;
}

int main(){
    int *q, *r;
    int num, div;

    cin >> num;
    cin >> div;

    divisao(num, div, q, r);

    cout << "Quociente: " << *q << " - Resto: " << *r << endl;

    return 0;

}
