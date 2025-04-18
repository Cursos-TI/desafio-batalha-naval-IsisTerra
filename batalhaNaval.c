#include <stdio.h>

// Desafio Batalha Naval - MateCheck
// Nível Aventureiro - Expansão do Tabuleiro e Posicionamento Diagonal

int main()
{
    int agua = 0;
    int tabuleiro[10][10];

    for (int i = 0; i < 10; i++) // Linhas
    {
        for (int j = 0; j < 10; j++) // Colunas
        {
            tabuleiro[i][j] = agua; // Tabuleiro incializado com todas as posições com água (0);
        }
    }

    int navioVertical[3] = {3, 3, 3};
    int navioHorizontal[3] = {3, 3, 3};

    int navioVerticalLinha = 3;    // posição inicial
    int navioVerticalColuna = 2;   // fixo
    int navioHorizontalLinha = 7;  // fixo
    int navioHorizontalColuna = 1; // posição inicial
    int navioDiagonal1Linha = 1;
    int navioDiagonal1Coluna = 6;
    int navioDiagonal2Linha = 6;
    int navioDiagonal2Coluna = 5;

    // Posicionando o navio vertical
    if (navioVerticalLinha < 0 || navioVerticalLinha + 2 >= 10 || navioVerticalColuna < 0 || navioVerticalColuna >= 10) // Verificação do navio dentro dos limites do tabuleiro
    {
        printf("Erro! Navio fora dos limites do tabuleiro!\n"); // Mensagem de erro
    }
    else
    {
        int sobreposicaoVertical = 0;
        for (int i = 0; i < 3; i++)
        {
            if (tabuleiro[navioVerticalLinha + i][navioVerticalColuna] == 3) // Verificando se já está preenchido, com outro navio, a posição escolhida
            {
                printf("Erro! Sobreposição com outro navio!\n");
                sobreposicaoVertical = 1;
                break;
            }
        }
        if (!sobreposicaoVertical)
        {
            for (int i = 0; i < 3; i++)
            {
                tabuleiro[navioVerticalLinha + i][navioVerticalColuna] = 3;
            } // Inserindo navio no tabuleiro
        }
    }

    // Posicionando o navio horizontal

    if (navioHorizontalLinha < 0 || navioHorizontalLinha >= 10 || navioHorizontalColuna < 0 || navioHorizontalColuna + 2 >= 10) // Verificação do navio dentro dos limites do tabuleiro
    {
        printf("Erro! Navio fora dos limites do tabuleiro\n"); // Mensagem de erro
    }
    else
    {
        int sobreposicaoHorizontal = 0; // Verificando se já está preenchido, com outro navio, a posição escolhida
        for (int i = 0; i < 3; i++)
        {
            if (tabuleiro[navioHorizontalLinha][navioHorizontalColuna + i] == 3)
            {
                printf("Erro! Sobreposição com outro navio!\n");
                sobreposicaoHorizontal = 1;
                break;
            }
        }
        if (!sobreposicaoHorizontal)
        {
            for (int i = 0; i < 3; i++)
            {
                tabuleiro[navioHorizontalLinha][navioHorizontalColuna + i] = 3;
            } // Inserindo navio no tabuleiro
        }
    }

    //Posicionando navio diagonal 1 - Para baixo e direita

    if (navioDiagonal1Linha < 0 || navioDiagonal1Linha >= 10 || navioDiagonal1Coluna < 0 || navioDiagonal1Coluna + 2 >= 10) // Verificação do navio dentro dos limites do tabuleiro
    {
        printf("Erro! Navio fora dos limites do tabuleiro\n"); // Mensagem de erro
    }
    else
    {
        int sobreposicaoDiagonal = 0; // Verificando se já está preenchido, com outro navio, a posição escolhida
        for (int i = 0; i < 3; i++)
        {
            if (tabuleiro[navioDiagonal1Linha + i][navioDiagonal1Coluna + i] == 3)
            {
                printf("Erro! Sobreposição com outro navio!\n");
                sobreposicaoDiagonal = 1;
                break;
            }
        }
        if (!sobreposicaoDiagonal)
        {
            for (int i = 0; i < 3; i++)
            {
                tabuleiro[navioDiagonal1Linha + i][navioDiagonal1Coluna + i] = 3;
            } // Inserindo navio no tabuleiro
        }
    }

    //  //Posicionando navio diagonal 2 - Para cima e direita

     if (navioDiagonal2Linha < 0 || navioDiagonal2Linha >= 10 || navioDiagonal2Coluna < 0 || navioDiagonal2Coluna + 2 >= 10) // Verificação do navio dentro dos limites do tabuleiro
     {
         printf("Erro! Navio fora dos limites do tabuleiro\n"); // Mensagem de erro
     }
     else
     {
         int sobreposicaoDiagonal = 0; // Verificando se já está preenchido, com outro navio, a posição escolhida
         for (int i = 0; i < 3; i++)
         {
             if (tabuleiro[navioDiagonal2Linha - i][navioDiagonal2Coluna + i] == 3)
             {
                 printf("Erro! Sobreposição com outro navio!\n");
                 sobreposicaoDiagonal = 1;
                 break;
             }
         }
         if (!sobreposicaoDiagonal)
         {
             for (int i = 0; i < 3; i++)
             {
                 tabuleiro[navioDiagonal2Linha - i][navioDiagonal2Coluna + i] = 3;
             } // Inserindo navio no tabuleiro
         }
     }

    // Tabuleiro com navios posicionados
    for (int i = 0; i < 10; i++) // Linhas
    {
        for (int j = 0; j < 10; j++) // Colunas
        {
            printf("%d ", tabuleiro[i][j]);
        }
        printf("\n");
    }

    return 0;
}

// Nível Mestre - Habilidades Especiais com Matrizes
// Sugestão: Crie matrizes para representar habilidades especiais como cone, cruz, e octaedro.
// Sugestão: Utilize estruturas de repetição aninhadas para preencher as áreas afetadas por essas habilidades no tabuleiro.
// Sugestão: Exiba o tabuleiro com as áreas afetadas, utilizando 0 para áreas não afetadas e 1 para áreas atingidas.

// Exemplos de exibição das habilidades:
// Exemplo para habilidade em cone:
// 0 0 1 0 0
// 0 1 1 1 0
// 1 1 1 1 1

// Exemplo para habilidade em octaedro:
// 0 0 1 0 0
// 0 1 1 1 0
// 0 0 1 0 0

// Exemplo para habilidade em cruz:
// 0 0 1 0 0
// 1 1 1 1 1
// 0 0 1 0 0