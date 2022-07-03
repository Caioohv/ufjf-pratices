#include <string>
#include <iostream>

using namespace std;

class Aluno
{
    private:
        int idade;
        string nome, matricula;
        double notas[7];
        // exercicio 4
        double frequencia[7];
    public:
        Aluno(string n, string mat);
        ~Aluno();
        // operacoes
        void leNotas();
        // exercicio 1
        double calculaMedia(); // exercicio 1
        //exercicio 2
        string getNome();
        void setNome(string n);
        string getMatricula();
        void setMatricula(string m);

        // exercicio 5
        void leFrequencia();
        //exercicio 6
        void relatorio();
};
