#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
//Jogo:
    //Se o usuário e a máquina escolherem os mesmos números:
int game(char voce, char gonMachine) {
    if (voce  == gonMachine)
    return -1;
    //Se o usuário escolher pedra e a máquina papel:
    if (voce  == 's' && gonMachine== 'p')
        return 0;
        //Usuario escolhe papel e maquina pedra:
        else if (voce  == 'p' && gonMachine == 's')
            return 1;
    //Usuário escolhe pedra e máquina tesoura:
    if (voce == 's' && gonMachine == 'z')
        return 1;
    //Usuário escolheu tesoura e máquina escolhe pedra:
    else if (voce ==  'z' && gonMachine ==  's')
        return 0;
    //Usuário escolheu papel e máquina tesoura:
    if (voce == 'p' && gonMachine == 'z')
        return 0;
    //Usuário escolheu tesoura e máquina papel:
    else if(voce == 'z' && gonMachine == 'p')
        return 1;
}

//Código principal:
int main (void)
{
    //Guardar o número aleatório:
    int n;
    char voce, gonMachine, resultado;

    //Escolher o numero aleatório:
    srand(time(NULL));

    //Calcular a porcentagem de cada jogada da máquina:
    n = rand() % 100;

    //Divide-se o número 100 nas 3 alternativas:

    //Escolher pedra (Stone):
    if (n < 33)
        gonMachine = 's';

    //Escolher papel (Paper):
    else if (n > 33 && n<66)
        gonMachine = 'p';

    //Escolher tesoura (Scissors, 'z'):
    else
        gonMachine = 'z';

    // Interface:

    printf("=====+==> BEM VINDO AO TORNEIO DE JOKENPO! ESCOLHA SUA MAO E TENTE GANHAR DA MAQUINA(Gon)!!  <==+=====\n"
           "\tDIGITE s PARA ESCOLHER PEDRA\tp PARA PAPEL\t E z PARA TESOURA!!!\n");

    //Entrada do usuário:
    scanf("%c",&voce);

    //Chama a função do jogo:

    resultado = game(voce, gonMachine);

    if (resultado == -1) {
        printf("EMMMMMMPATEEEEEE!!! AMBOS OS COMPETIDORES LANCARAM A MESMA MAO!\n");
    }
    else if (resultado == 1) {
        printf("VOCE FOI O VENCEDORRRRRR!!!!!!!!!\n");
    }
    else {
        printf("A MAQUINA SAIU VENCEDORA!\n TENTE NOVAMENTE!\n\n");
    }

    printf("Voce escolheu: %c \nA maquina escolheu: %c\n", voce, gonMachine);
    return 0;
}