# PROJETO FINAL: JOGO MODELO "QUIZ" MULTIPLAYER OU SINGLEPLAYER

O jogo deve começar perguntando ao usuario qual o modo de jogo desejado (um ou dois jogadores), em seguida será selecionado o tema do quiz, começando o jogo. As rodadas terão tempo limite de 10 segundos para cada pergunta.

No modo dois jogadores o jogo deve acabar quando um dos dois jogadores acertar 5 perguntas primeiro.

No modo um jogador o jogador é vitorioso caso acerte 7 ou mais perguntas de 10.

##Casos de uso

Iniciando o jogo é necessário selecionar qual o modo de jogo um ou dois jogadores, seguido do tema das perguntas do jogo, ao clicar em começar a primeira pergunta é apresentada e começa a contagem para responder:

As perguntas aparecem em uma caixa de texto, onde aparecem durante 10 segundos para serem respondidas, caso a pergunta não seja respondida ela é contabilizada como uma resposta errada. Para responder uma pergunta o jogador deve selecionar a letra da resposta correta no checkbox, será apresentado na tela então se a resposta foi correta ou errada (apresentando o item da resposta correta), para partir para a proxima pergunta o jogador deve clicar no botão proxima pergunta, dando continuidade ao jogo.

Um jogador: Será apresentado um contador (progress bar) das 10 perguntas que serão feitas para o jogador, ao final das 10 perguntas é apresentado na tela se o jogador foi vitorioso ou não (7 ou mais perguntas certas), o jogador deve então selecionar se quer fechar o programa ou começar um novo jogo, onde ele volta para o inicio do jogo.

Dois jogadores: Será apresentado um contador (progress bar) das 5 perguntas para cada jogador das que foram acertadas, ao acertar as 5 perguntas é apresentado na tela o jogador vitorioso, deve ser selecionado se o usuario quer fechar o programa ou começar um novo jogo, onde ele volta para o inicio do jogo.

