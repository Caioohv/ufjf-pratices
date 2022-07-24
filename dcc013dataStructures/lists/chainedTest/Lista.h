#include <iostream>
#include "No.h"

class Lista{
    private:
        No *primeiro;
        No *ultimo;
        int numerototal;

    public:
        Lista();
        ~Lista();

        bool contem(int val);
        int get(int pos);
        void set(int pos, int val);
        void insereInicio(int val);
        void insereFinal(int val);
        void removeInicio();
        void removeFinal();
        void imprime();
        int getTamanho();
        int getMaior(int val);
};