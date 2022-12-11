#include "doisjogadores.h"
#include <iostream>
#include <string>
#include <stdio.h>



void doisjogadores::jogar(Jogo &x)
{
    Perguntas q1;
    Perguntas q2;
    Perguntas q3;
    Perguntas q4;
    Perguntas q5;
    Perguntas q6;
    Perguntas q7;
    Perguntas q8;
    Perguntas q9;
    Perguntas q10;
    Perguntas q11;
    Perguntas q12;
    Perguntas q13;
    Perguntas q14;
    Perguntas q15;
    Perguntas q16;
    Perguntas q17;
    Perguntas q18;
    Perguntas q19;
    Perguntas q20;

   if (x.tema == 1) {
    q1.setaperguntas("Pergunta 1 : Qual o nome do instrumento de Medicao que e possivel ver as formas de onda de um determinado sinal eletrico?"
                , "Osciloscopio",
                 "Teleonda", "Varivolt",
                 "Ondoscopico", 1);
    q2.setaperguntas("Pergunta 2 : Qual e a Principal Maquina Eletrica utilizada nas industrias que Transforma energia eletrica em Energia Mecanica?", "Gerador Capacitivo",
                 "Retificador Meia - Onda", "Motor Eletrico",
                 "Varistor Mecanico", 3);
    q3.setaperguntas("Pergunta 3 : Qual a Potencia dissipada num resistor de 10 Ohms, submetido a uma fonte de 15Vcc?", "225 Watts",
                 "22,5 Watts", "2,25 Watts",
                 "2,25 volts", 3);
    q4.setaperguntas("Pergunta 4 : Qual e o tempo de total de carga de um capacitor Eletrolitico de 300uF, em serie com um resistor de 10kOhms, ligado a uma fonte de 10Vcc?: ", "15 Minutos",
                 "15 Segundos", "1,5 Segundo",
                 "15 Milissegundos", 2);
    q5.setaperguntas("Pergunta 5 : O que e um Circuito Retificador Monofasico?", "Circuito que deixa plano o valor da resistencia",
                 "Circuito de Filtro", "Circuito que Converte AC em RF",
                 "Circuito que Transforma CA em DC", 4);
    q6.setaperguntas("Pergunta 6 : O Resistor e um componente que tem por sua principal caracteristica:", "Oferecer uma oposicao a passagem da corrente eletrica.",
                 "Converter energia Luminosa em Energia eletrica", "Converter Energia Eletrica em energia Quimica",
                 "Oferecer uma facilidade a passagem da corrente eletrica", 1);
    q7.setaperguntas("Pergunta 7 : o Transformador, e uma maquina eletrica que tem por funcao:", "Transformar Corrente Alternada em Corrente Continua",
                 "Abaixar, elevar, ou isolar um determinado valor de tensao eletrica.", "Transformar a pequena potencia em uma alta potencia.",
                 "Ser usado como filtro passa - Baixa para tensoes em CC", 2);
    q8.setaperguntas("Pergunta 8 : Qual o comportamento do Capacitor em Corrente Alternada?", "Se torna uma Variancia, variando o seu valor nominal a todo tempo.",
                 "se torna um resistor, dissipando energia eletrica em luminosa.", "Se torna uma Reatancia, reagindo as variações de corrente do circuito.",
                 "Se torna uma Indutancia, Armazenando energia na forma de campo magnetico.", 3);
    q9.setaperguntas("Pergunta 9 : O Fator de potencia vem do Quociente entre as Potencias?:", "Potencia Ativa e Potencia Aparente",
                 "Potencia Util e Potencia Reativa", "Potencia Reativa Indutiva e Potencia Reativa resistiva",
                 "Potencia Capacitiva e Potencia Resistiva", 1);
    q10.setaperguntas("Pergunta 10 : O Inversor de Frequencia e utilizado em qual tipo de Maquina Eletrica?", "Motor Monofasico",
                  "Motor de Corrente Continua", "Motor de Inducao Trifasico - Rotor Gaiola",
                  "Motor de Passo", 3);
    q11.setaperguntas("Eletronica : ", "Answer 1",
                 "Answer 2", "Answer 3",
                 "Answer 4", 3);
    q12.setaperguntas("Eletronica : ", "Answer 1",
                 "Answer 2", "Answer 3",
                 "Answer 4", 3);
    q13.setaperguntas("Eletronica : ", "Answer 1",
                 "Answer 2", "Answer 3",
                 "Answer 4", 3);
    q14.setaperguntas("Eletronica : ", "Answer 1",
                 "Answer 2", "Answer 3",
                 "Answer 4", 3);
    q15.setaperguntas("Eletronica : ", "Answer 1",
                 "Answer 2", "Answer 3",
                 "Answer 4", 3);
    q16.setaperguntas("Eletronica : ", "Answer 1",
                 "Answer 2", "Answer 3",
                 "Answer 4", 3);
    q17.setaperguntas("Eletronica : ", "Answer 1",
                 "Answer 2", "Answer 3",
                 "Answer 4", 3);
    q18.setaperguntas("Eletronica : ", "Answer 1",
                 "Answer 2", "Answer 3",
                 "Answer 4", 3);
    q19.setaperguntas("Eletronica : ", "Answer 1",
                 "Answer 2", "Answer 3",
                 "Answer 4", 3);
    q20.setaperguntas("Eletronica : ", "Answer 1",
                  "Answer 2", "Answer 3",
                  "Answer 4", 3);
    }
        if (x.tema == 2) {
    q1.setaperguntas("Pergunta 1 : Quantas vezes o Brasil foi campeao?", "2",
                 "3", "4",
                 "5", 4);
    q2.setaperguntas("Pergunta 2 : Em 2022 o Brasil foi eliminado por qual selecao", "Argentina",
                 "Croacia", "Belgica",
                 "Alemanha", 2);
    q3.setaperguntas("Pergunta 3 : Em 2022 durante o jogo do BrasilxCroacia quem acertou um chute na trava na cobranca dos penaltis?", "Neymar",
                 "Rodrygo", "Marquinhos",
                 "Casemiro", 3);
    q4.setaperguntas("Pergunta 4 : Em 2022 durante o jogo do BrasilxCroacia quem marcou o gol a favor do Brasil?", "Neymar",
                 "Vini Jr.", "Raphinha",
                 "Richarlison", 1);
    q5.setaperguntas("Pergunta 5 : Em 2022 para qual selecao a argentina perdeu em seu jogo de estreia", "Mexico",
                 "Polonia", "Arabia Saudita",
                 "Holanda", 3);
    q6.setaperguntas("Pergunta 6 : Em 2022 qual foi o resultado do jogo BrasilxCamaroes?", "3x0",
                 "2x1", "0x2",
                 "0x1", 4);
    q7.setaperguntas("Pergunta 7 : Em 2022 qual foi o resultado do jogo BrasilxCoreia?", "4x1",
                 "2x0", "3x1",
                 "1x2", 1);
    q8.setaperguntas("Pergunta 8 : Em 2022 quem foi o artilheiro da copa?", "Mbappe",
                 "Messi", "Enner Valencia",
                 "Cristiano Ronaldo", 1);
    q9.setaperguntas("Pergunta 9 : Quem foi o campeao em 2018?", "Franca",
                 "Croacia", "Belgica",
                 "Alemanha", 1);
    q10.setaperguntas("Pergunta 10 : Quem foi o campeao em 2022?", "Franca",
                  "Marrocos", "Argentina",
                  "Croacia", 2);
    q11.setaperguntas("Copa do mundo : ", "Answer 1",
                 "Answer 2", "Answer 3",
                 "Answer 4", 3);
    q12.setaperguntas("Copa do mundo : ", "Answer 1",
                 "Answer 2", "Answer 3",
                 "Answer 4", 3);
    q13.setaperguntas("Copa do mundo : ", "Answer 1",
                 "Answer 2", "Answer 3",
                 "Answer 4", 3);
    q14.setaperguntas("Copa do mundo : ", "Answer 1",
                 "Answer 2", "Answer 3",
                 "Answer 4", 3);
    q15.setaperguntas("Copa do mundo : ", "Answer 1",
                 "Answer 2", "Answer 3",
                 "Answer 4", 3);
    q16.setaperguntas("Copa do mundo : ", "Answer 1",
                 "Answer 2", "Answer 3",
                 "Answer 4", 3);
    q17.setaperguntas("Copa do mundo : ", "Answer 1",
                 "Answer 2", "Answer 3",
                 "Answer 4", 3);
    q18.setaperguntas("Copa do mundo : ", "Answer 1",
                 "Answer 2", "Answer 3",
                 "Answer 4", 3);
    q19.setaperguntas("Copa do mundo : ", "Answer 1",
                 "Answer 2", "Answer 3",
                 "Answer 4", 3);
    q20.setaperguntas("Copa do mundo : ", "Answer 1",
                  "Answer 2", "Answer 3",
                  "Answer 4", 3);
    }

            if (x.tema == 3) {
    q1.setaperguntas("Pergunta 1 : O carro (Supra) pertence a qual montadora?", "Toyota",
                 "Mitsubishi", "Volkswagen",
                 "Honda", 1);
    q2.setaperguntas("Pergunta 2 : O carro (Chevette) pertence a qual montadora?", "Renault",
                 "Fiat", "Chevrolet",
                 "Volkswagen", 3);
    q3.setaperguntas("Pergunta 2 : O carro (Omega) pertence a qual montadora?", "Renault",
                 "Fiat", "Chevrolet",
                 "Honda", 3);
    q4.setaperguntas("Pergunta 4 : Qual o motor das BMW 320i F30?", "B58",
                 "N54", "N55",
                 "N20", 4);
    q5.setaperguntas("Pergunta 5 : Qual o motor utilizado pelo Chevrolet Calibra", "C20NE",
                 "C20XE", "C22NE",
                 "C30NE", 2);
    q6.setaperguntas("Pergunta 6 : Qual o nome do componente responsavel por carregar a bateria", "Fusivel",
                 "Bobina", "Alternador",
                 "Retificador", 3);
    q7.setaperguntas("Pergunta 7 : Qual tipo de injecao de combustivel e utilizada pelo golf gti mk7", "Direta",
                 "Indireta", "Nenhuma das alternativas",
                 "Direta + Indireta", 4);
    q8.setaperguntas("Pergunta 8 : Charles Leclerc e um piloto de:", "Nascar",
                 "Formula Indy", "Rally",
                 "Formula 1", 4);
    q9.setaperguntas("Pergunta 9 : Charles Leclerc em 2022 correu para qual equipe de f1?", "Ferrari",
                 "Hass", "RedBull",
                 "Mercedes", 1);
    q10.setaperguntas("Pergunta 10 : Fueltech e uma empresa brasileira especializada em:", "Manutencao",
                  "Bicos Injetores", "Injecoes Programaveis",
                  "Reprogramacao", 3);
    q11.setaperguntas("carros : ", "Answer 1",
                 "Answer 2", "Answer 3",
                 "Answer 4", 3);
    q12.setaperguntas("carros : ", "Answer 1",
                 "Answer 2", "Answer 3",
                 "Answer 4", 3);
    q13.setaperguntas("carros : ", "Answer 1",
                 "Answer 2", "Answer 3",
                 "Answer 4", 3);
    q14.setaperguntas("carros : ", "Answer 1",
                 "Answer 2", "Answer 3",
                 "Answer 4", 3);
    q15.setaperguntas("carros : ", "Answer 1",
                 "Answer 2", "Answer 3",
                 "Answer 4", 3);
    q16.setaperguntas("carros : ", "Answer 1",
                 "Answer 2", "Answer 3",
                 "Answer 4", 3);
    q17.setaperguntas("carros : ", "Answer 1",
                 "Answer 2", "Answer 3",
                 "Answer 4", 3);
    q18.setaperguntas("carros : ", "Answer 1",
                 "Answer 2", "Answer 3",
                 "Answer 4", 3);
    q19.setaperguntas("carros : ", "Answer 1",
                 "Answer 2", "Answer 3",
                 "Answer 4", 3);
    q20.setaperguntas("carros : ", "Answer 1",
                  "Answer 2", "Answer 3",
                  "Answer 4", 3);
    }

    q1.fazpergunta2(x);
    q2.fazpergunta2(x);
    q3.fazpergunta2(x);
    q4.fazpergunta2(x);
    q5.fazpergunta2(x);
    q6.fazpergunta2(x);
    q7.fazpergunta2(x);
    q8.fazpergunta2(x);
    q9.fazpergunta2(x);
    q10.fazpergunta2(x);
    q11.fazpergunta2(x);
    q12.fazpergunta2(x);
    q13.fazpergunta2(x);
    q14.fazpergunta2(x);
    q15.fazpergunta2(x);
    q16.fazpergunta2(x);
    q17.fazpergunta2(x);
    q18.fazpergunta2(x);
    q19.fazpergunta2(x);
    q20.fazpergunta2(x);
}


