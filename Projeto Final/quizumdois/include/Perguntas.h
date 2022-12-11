#ifndef PERGUNTAS_H
#define PERGUNTAS_H

#include <iostream>
#include <string>
#include "Jogo.h"
using namespace std;

class Perguntas {
private:
    string Pergunta;
    string Resposta1;
    string Resposta2;
    string Resposta3;
    string Resposta4;
    int Respostacorreta;

public:
    // Setter Function
    void setaperguntas(string, string,
                   string, string,
                   string, int);

    // Function to ask questions
    void fazpergunta1(Jogo&);
    void fazpergunta2(Jogo&);
};

#endif // PERGUNTAS_H
