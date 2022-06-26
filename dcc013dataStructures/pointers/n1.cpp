#include <iostream>;

using namespace std;

int main(){

    // Declare um ponteiro para inteiro pt.
    int *pt;
    // Imprima o endereço de pt.
    cout << "Endereço de pt: " << pt << endl;
    // Crie uma variável inteira x.
    int x;
    // Leia um valor para x.
    cin >> x;
    // Faça com que pt aponte para x.
    pt = &x;
    // Imprima o conteúdo da variável pt.
    cout << "Conteúdo de pt: " << pt << endl;
    // Imprima o endereço de x.
    cout << "Endereço de x: " << &x << endl;
    // Usando apenas o ponteiro pt multiplique x por 10 e altere o seu valor.
    *pt = *pt * 10;
    // Imprima o conteúdo apontado por pt.
    cout << "Conteúdo apontado por pt: " << *pt << endl;
    // Some 10 à variável pt.
    *pt = *pt + 10;
    // Imprima o seu conteúdo novamente. Qual o significado desta saı́da?
    cout << "Conteúdo apontado por pt: " << *pt << endl;

    return 0;
}