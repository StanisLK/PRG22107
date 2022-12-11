#include "Jogo.h"
#include "Perguntas.h"
#include "umjogador.h"
#include "doisjogadores.h"
#include <iostream>
#include <string>
#include <stdio.h>

using namespace std;



void Jogo::inicio(Jogo &x)
{
    x.Total = 0;


    cout << "\n\n\t\t\t\tJOGO QUIZ UM/DOIS JOGADORES"
         << endl;
    cout << "\nAperte Enter para comecar o jogo" << endl;

    // Input
    cin.get();
    string Respond;
while (1){

    cout << "Qual o tema do quiz desejado?"
         << " eletronica/copa/carros "
         << endl;
    cin >> Respond;



    if (Respond == "eletronica") {
        cout << endl;
        cout << "tema selecionado: eletronica" << endl;
        x.tema = 1;
        break;
    }
    else if (Respond == "copa") {
        cout << endl;
        cout << "tema selecionado: copa do mundo" << endl;
        x.tema = 2;
        break;
    }
    else if (Respond == "carros") {
        cout << endl;
        cout << "tema selecionado: carros" << endl;
        x.tema = 3;
        break;
    }
    else {
        cout << "tente novamente!" << endl;
    }
}
while (1){
    cout << "Qual o modo de jogo desejado? um ou dois jogadores, digite (um/dois)" << endl;
    cin >> Respond;

    if (Respond == "um") {
        cout << endl;
        cout << "Boa sorte!" << endl;
        umjogador a;
        a.jogar(x);
        break;
    }
    else if (Respond == "dois") {
        cout << endl;
        cout << "Boa batalha :D !" << endl;
        x.pontuacao1 = 0;
        x.pontuacao2 = 0;
        doisjogadores a;
        a.jogar(x);
        break;
    }
}


}


