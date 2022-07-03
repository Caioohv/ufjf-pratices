#include "Prova.h"

Prova::Prova(int nq)
{
    // implemente o construtor aqui
    cout << "Criando uma prova" << endl;
    n = nq;
    notasQuestoes = new double[n];
    notaFinal = 0;
    return;
}

Prova::~Prova(){
    delete [] notasQuestoes;
    return;
}

void Prova::leNotas(){
    for(int i = 0; i < n; i++){
        cin >> notasQuestoes[i];
    }
    return;
}

// exercicio 7
// implemente aqui
void Prova::calculaNotaFinal(){
    double menor = 100;
    for(int i = 0; i < n; i++){
        notaFinal += notasQuestoes[i];
        if(notasQuestoes[i] < menor) menor = notasQuestoes[i];
    }
    notaFinal -= menor;
    return;
}

double Prova::obtemNotaFinal(){
    return notaFinal;
}