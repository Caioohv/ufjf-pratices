#include <iostream>
#include "Lista.h"

using namespace std;

Lista::Lista(){
    // cout << "Criando Lista" << endl;

    numerototal = 0;
    primeiro = NULL;
    ultimo = NULL;

    return;
}
Lista::~Lista(){
    // cout << "DELETANDO LISTA!" << endl;
    No *proximo = primeiro;
    No *aux;

    while(proximo != NULL){
        aux = proximo->getProximo();
        delete proximo;
        proximo = aux;
    }
    return;
}

bool Lista::contem(int val){
    // cout << "---- verificando se tem o valor " << val << endl;
    No *proximo = primeiro;
    while(proximo != NULL){
        if(proximo->getValor() == val) return true;
        proximo = proximo->getProximo();
    }
    return false;

}

int Lista::get(int pos){
    // cout << "---- procurando o indice " << pos << endl;
    if(pos > numerototal) {
        // cout << "ERRO: Indice invalido!" << endl;
        exit(1);
    }
    int i = 0;
    No *aux = primeiro;
    while(i < pos){
        i++;
        aux = aux->getProximo();
    }
    return aux->getValor();
}
void Lista::set(int pos, int val){
    // cout << "---- definindo o indice "<< pos << "com o valor " << val << endl;
    if(pos > numerototal) {
        // cout << "ERRO: Indice invalido!" << endl;
        exit(1);
    }
    int i = 0;
    No *aux = primeiro;
    while(i < pos){
        i++;
        aux = aux->getProximo();
    }
    aux->setValor(val);
    return;
}

void Lista::insereInicio(int val){
    // cout << "---- inserindo valor " << "no inicio da lista" << endl;
    No *aux = primeiro;
    No *novoprimeiro = new No();
    novoprimeiro->setValor(val);
    novoprimeiro->setProximo(primeiro);
    primeiro = aux;
    numerototal++;
    return;
}
void Lista::insereFinal(int val){
    // cout << "---- inserindo valor " << val << " no final da lista" << endl;
    
    No *novo = new No();
    novo->setValor(val);
    novo->setProximo(NULL);

    if(ultimo != NULL) ultimo->setProximo(novo);
    ultimo = novo;


    numerototal++;
    if(numerototal == 1) primeiro = novo;

    return;
}
void Lista::removeInicio(){
    // cout << "---- removendo valor " << "do inicio da lista" << endl;
    No *aux = primeiro;
    primeiro = aux->getProximo();
    delete aux;
    return;
}
void Lista::removeFinal(){
    // cout << "---- removendo valor " << "do final da lista" << endl;
    if(ultimo == NULL){
        cout << "ERRO: lista vazia!" << endl;
        exit(1);
    }

    No *aux = primeiro;
    while(aux->getProximo() != ultimo){
        aux = aux->getProximo();
    }
    aux->setProximo(NULL);
    delete ultimo;
    ultimo = aux;
    numerototal--;
    return;
}
void Lista::imprime(){
    No *aux = primeiro;
    while(aux->getProximo() != NULL){
        cout << aux->getValor() << " - ";
        aux = aux->getProximo();
    }
    cout << aux->getValor() << endl;
    return;
}

int Lista::getTamanho(){
    return numerototal;
}

int Lista::getMaior(int val){
    
}






















