#include <iostream>

class No{
    private:
        int valor;
        No *proximo;
    public:
        No()                        {};
        ~No()                       {};
        No* getProximo()            { return proximo; };
        void setProximo(No *prox)   { proximo = prox; };
        int getValor()              { return valor; };
        void setValor(int val)      { valor = val; };
};