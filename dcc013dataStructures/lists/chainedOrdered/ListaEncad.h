#ifndef LISTAENCAD_H_INCLUDED
#define LISTAENCAD_H_INCLUDED
#include "No.h"

class ListaEncad
{
public:
    ListaEncad();
    ~ListaEncad();
    bool busca(int val);        /// retorna true caso val esteja na lista e false caso contrario
    int getSize();              /// retorna o tamanho da lista  
    int get(int k);             /// retorna o valor do k-ésimo elemento
    void set(int k, int val);   /// altera o valor do k-ésimo elemento
    void insereInicio(int val); /// insere um novo No contendo val no início da lista
    void insereFinal(int val);  /// insere um novo No contendo val no final da lista
    void removeInicio();        /// remove o primeiro No da lista
    void removeFinal();         /// remove o último No da lista
    void imprime();             /// imprime a lista
    int verificaMaior(int val); /// verifica se existe um elemento com valor maior que o fornecido na lista
    void limpa();               /// limpa lista
    double getMedia();          /// retorna media da soma dos valores;
    void concat(ListaEncad l);   /// concatena uma lista na outra

private:
    No *primeiro;  /// ponteiro para o primeiro No da lista
    No *ultimo;    /// ponteiro para o ultimo No da lista
    int n;         /// numero de nos na lista
};
#endif
