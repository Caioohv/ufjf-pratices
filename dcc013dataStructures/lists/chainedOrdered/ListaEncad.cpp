#include <iostream>
#include <cstdlib>
#include "ListaEncad.h"

using namespace std;

ListaEncad::ListaEncad()
{
    cout << "Criando objeto ListaEncad" << endl;
    primeiro = NULL;
    ultimo = NULL;
    n = 0;
}

ListaEncad::~ListaEncad()
{
    cout << "Destruindo objeto ListaEncad" << endl;
    No *p = primeiro;
    while(p != NULL)
    {
        No *t = p->getProx();
        delete p;
        p = t;
    }
}

bool ListaEncad::busca(int val)
{
    No *p;
    for(p = primeiro; p != NULL; p = p->getProx())
        if(p->getInfo() == val)
            return true;
    return false;
}

int ListaEncad::get(int k)
{
    No *p = primeiro;
    int i = 0;
    while(i < k && p != NULL){
        i++;
        p = p->getProx();
    }

    if(p == NULL){
        cout << "ERRO: Indice invalido!" << endl;
        exit(1);
    }
    else
        return p->getInfo();
}

void ListaEncad::set(int k, int val)
{
    No *p = primeiro;
    int i = 0;
    while(i < k && p != NULL)
    {
        i++;
        p = p->getProx();
    }
    if(p == NULL)
        cout << "ERRO: Indice invalido!" << endl;
    else
        p->setInfo(val);
}


void ListaEncad::insereInicio(int val)
{
    No* p = new No();
    p->setInfo(val);
    p->setProx(primeiro);

    primeiro = p;

    n++;
    if(n == 1) ultimo = p;
}

void ListaEncad::insereFinal(int val)
{
    No* p = new No();
    p->setInfo(val);
    p->setProx(NULL);

    if(ultimo != NULL) ultimo->setProx(p);
    ultimo = p;

    n++;
    if(n == 1) primeiro = p;
}

void ListaEncad::removeInicio()
{
    No* p;
    if(primeiro != NULL)
    {
        p = primeiro;
        primeiro = p->getProx();
        delete p;

        n--;
        if(n == 0) ultimo = NULL;
    }
    else
        cout << "ERRO: lista vazia!" << endl;
}

void ListaEncad::removeFinal()
{
    No* p;
    if(ultimo != NULL)
    {
        if(primeiro == ultimo){
            primeiro = NULL;
            p = NULL;
        }
        else{
            p = primeiro;
            while(p->getProx() != ultimo)
                p = p->getProx();
            p->setProx(NULL);
        }
        delete ultimo;
        ultimo = p;
        n--;
    }
    else
        cout << "ERRO: lista vazia!" << endl;
}

void ListaEncad::imprime(){
    No *aux = primeiro;

    if(primeiro == NULL){
        cout << "lista vazia" << endl;
        return;
    }


    while(aux->getProx() != NULL){
        cout << aux->getInfo() << " - ";
        aux = aux->getProx();
    }
    cout << aux->getInfo() << endl;
    return;
}

int ListaEncad::verificaMaior(int val){
    No *aux = primeiro;
    int i = 0;
    while(aux->getProx() != NULL){
        if(aux->getInfo() > val) return i;
        aux = aux->getProx();
        i++;
    }
    if(aux->getInfo() > val) return i;
    return -1;
}

void ListaEncad::limpa(){
    cout << "Limpando objeto ListaEncad" << endl;
    No *p = primeiro;
    while(p != NULL)
    {
        No *t = p->getProx();
        delete p;
        p = t;
    }
    primeiro = NULL;
    ultimo = NULL;
    n = 0;
    return;
}

double ListaEncad::getMedia(){
    No *aux = primeiro;
    double total = 0, nItens = 0;

    while(aux->getProx() != NULL){
        total += aux->getInfo();
        nItens++;
        aux = aux->getProx();
    }
    total += aux->getInfo();
    nItens++;
    
    return (total / nItens);
}

int ListaEncad::getSize(){
    return n;
}

void ListaEncad::concat(ListaEncad l){
    cout << "encadeando listas" << endl;
    for(int i = 0; i < l.getSize(); i++){
        insereFinal(l.get(i));
    }
    return;
}