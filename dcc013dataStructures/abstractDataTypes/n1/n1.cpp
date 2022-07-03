#include <iostream>
#include "Aluno.h"

using namespace std;

void imprimeDados(Aluno a){
    cout << "Aluno: " << a.getNome() << endl;
    cout << "Matricula: " << a.getMatricula() << endl;
    cout << "Media: " << a.calculaMedia() << endl;
    return;
}

int main()
{
    cout << "LABORATORIO DE PROGRAMACAO II - AULA 04\n" << endl;

    // ------------------------------------------------------------------------
    // EXERCICIO 1
    // ------------------------------------------------------------------------
    Aluno a("Carlos", "201566123AB");

    // leitura das notas do aluno
    a.leNotas();
    double m = a.calculaMedia();

    cout << "Media do aluno: " << m << endl;

    // ------------------------------------------------------------------------
    // EXERCICIO 3
    // ------------------------------------------------------------------------

    // Implemente aqui
    imprimeDados(a);

    // ------------------------------------------------------------------------
    // EXERCICIO 5
    // ------------------------------------------------------------------------

    // Implemente aqui
    a.leFrequencia();

    // ------------------------------------------------------------------------
    // EXERCICIO 6
    // ------------------------------------------------------------------------

    // Implemente aqui
    a.relatorio();

    // ------------------------------------------------------------------------
    // EXERCICIO 7
    // ------------------------------------------------------------------------

    //Prova p(3);


    return 0;
}
