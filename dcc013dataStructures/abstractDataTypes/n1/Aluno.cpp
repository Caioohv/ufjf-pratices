#include <iostream>
#include <string>
#include "Aluno.h"

using namespace std;

Aluno::Aluno(string n, string m){
    nome = n;
    matricula = m;
}

Aluno::~Aluno(){

}

void Aluno::leNotas(){
    cout << "Lendo 7 notas:" << endl;
    for(int i = 0; i < 7; i++){
        cin >> notas[i];
    }
    return;
}

//exercicio 5
void Aluno::leFrequencia(){
    cout << "Lendo 7 frequências:" << endl;
    // int aux;
    for(int i = 0; i < 7; i++){
        cin >> frequencia[i];
    }
    return;
}

double Aluno::calculaMedia(){
    double media = 0;

    for(int i = 0; i < 7; i++){
        media += notas[i];
    }

    media /= 7;

    return media;
}

string Aluno::getNome(){
    return nome;
}
void Aluno::setNome(string n){
    nome = n;
    return;
}
string Aluno::getMatricula(){
    return matricula;
}
void Aluno::setMatricula(string m){
    matricula = m;
    return;
}

void Aluno::relatorio(){
    cout << "Relatório de Aluno" << endl;
    cout << "Nome: " << nome << endl;
    cout << "Matricula: " << matricula << endl;
    cout << "Media: " << this->calculaMedia() << endl;
    for(int i = 0; i < 7; i++){
        cout << "Disciplina " << i << ": " << notas[i] << " - Frequente? ";
        
        if(frequencia[i]) cout << "Sim";
        else cout << "não";
        cout << endl;
        
        cout << "Aprovado: ";
        if(calculaMedia() >= 60) cout << "sim";
        else cout << "não";
        cout << endl;
        
    }
    cout << "Nota e Frequência: " << nome << endl;
}
