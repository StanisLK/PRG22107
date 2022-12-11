#include "Perguntas.h"
#include <iostream>
#include <string>
#include "Jogo.h"

    int vez1 = 0;
    int vez2 = 0;

void Perguntas::setaperguntas(
    string q, string a1,
    string a2, string a3,
    string a4, int ca)
{
    Pergunta = q;
    Resposta1 = a1;
    Resposta2 = a2;
    Resposta3 = a3;
    Resposta4 = a4;
    Respostacorreta = ca;
}

// Function to ask questions
void Perguntas::fazpergunta1(Jogo &x)
{
    int Guess;

    cout << endl;

    // Print the questions
    cout << Pergunta << endl;
    cout << "1. " << Resposta1 << endl;
    cout << "2. " << Resposta2 << endl;
    cout << "3. " << Resposta3 << endl;
    cout << "4. " << Resposta4 << endl;
    cout << endl;

    // Display the answer
    cout << "Digite o numero da resposta correta:"
         << endl;
    cin >> Guess;

    // If the answer is correct
    if (Guess == Respostacorreta) {
        cout << endl;
        cout << "Acertou! Pressione Enter para a proxima pergunta" << endl;

        // Update the correct score
        x.Total = x.Total + 10;
        cin.get();
    }

    // Otherise
    else {
        cout << endl;
        cout << "Errou! Pressione Enter para a proxima pergunta" << endl;

        cout << "Resposta correta = "
             << Respostacorreta << endl;
        cout << endl;
        cin.get();
    }
        cin.get();
}

void Perguntas::fazpergunta2(Jogo &x)
{
    int Guess;


    if ((x.pontuacao1 < 5) & (x.pontuacao2 < 5))
    {
        if (vez1 <= vez2)
        {
            cout << endl;

            // Print the questions
            cout << Pergunta << endl;
            cout << "1. " << Resposta1 << endl;
            cout << "2. " << Resposta2 << endl;
            cout << "3. " << Resposta3 << endl;
            cout << "4. " << Resposta4 << endl;
            cout << endl;

            // Display the answer
            cout << "JOGADOR 1, Digite o numero da resposta correta:"
                 << endl;
            cin >> Guess;

            // If the answer is correct
            if (Guess == Respostacorreta)
            {
                cout << endl;
                cout << "Acertou! Pressione Enter para a proxima pergunta" << endl;

                // Update the correct score
                x.pontuacao1 = x.pontuacao1 + 1;
                cin.get();
            }

            // Otherise
            else
            {
                cout << endl;
                cout << "Errou! Pressione Enter para a proxima pergunta" << endl;

                cout << "Resposta correta = "
                << Respostacorreta << endl;
                cout << endl;
                cin.get();
            }
            cin.get();
            vez1++;
        }
        else
        {
            cout << endl;

            // Print the questions
            cout << Pergunta << endl;
            cout << "1. " << Resposta1 << endl;
            cout << "2. " << Resposta2 << endl;
            cout << "3. " << Resposta3 << endl;
            cout << "4. " << Resposta4 << endl;
            cout << endl;

            // Display the answer
            cout << "JOGADOR 2, Digite o numero da resposta correta:"
                 << endl;
            cin >> Guess;

            // If the answer is correct
            if (Guess == Respostacorreta)
            {
                cout << endl;
                cout << "Acertou! Pressione Enter para a proxima pergunta" << endl;

                // Update the correct score
                x.pontuacao2 = x.pontuacao2 + 1;
                cin.get();
            }

            // Otherise
            else
            {
                cout << endl;
                cout << "Errou! Pressione Enter para a proxima pergunta" << endl;

                cout << "Resposta correta = "
                << Respostacorreta << endl;
                cout << endl;
                cin.get();
            }
            cin.get();
            vez2++;
        }

    }
    else
    {
        if (x.pontuacao1 == 5){
            cout << "JOGADOR 1 GANHOUU" << endl;

        }
        else {
            cout << "JOGADOR 2 GANHOUU" << endl;
        }

    }

}



