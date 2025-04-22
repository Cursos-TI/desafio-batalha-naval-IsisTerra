#include <stdio.h>

// Desafio Batalha Naval - MateCheck
// Nível Mestre - Habilidades Especiais com Matrizes

int main()
{
    int agua = 0;
    int areaAfetada = 5;
    int tabuleiro[10][10];

    for (int i = 0; i < 10; i++) // Linhas
    {
        for (int j = 0; j < 10; j++) // Colunas
        {
            tabuleiro[i][j] = agua; // Tabuleiro incializado com todas as posições com água (0);
        }
    }

    int cone[5][5];

    int coneOrigemLinha = 0;

    int coneOrigemColuna = 2;

    // Habilidade do cone
    for (int i = 0; i < 5; i++) // Linhas

    {

        for (int j = 0; j < 5; j++) // Colunas

        {

            if (i >= 0 && j >= 2 - i && j <= 2 + i)

            {

                cone[i][j] = areaAfetada;
            }

            else
            {

                cone[i][j] = agua;
            }

            printf("%d ", cone[i][j]);
        }

        printf("\n");
    }

    int cruz[5][5];

    int crurOrigemLinha = 7;

    int cruzOrigemColuna = 2;

    // Habilidade da cruz

    for (int i = 0; i < 5; i++) // Linhas

    {

        for (int j = 0; j < 5; j++) // Colunas

        {

            if (i >= 5 && j >= 0 - i && j <= 4)
            {

                cruz[i][j] = areaAfetada;
            }

            else

            {

                cruz[i][j] = agua;
            }
        }
    }

    int octaedro[5][5];

    int ostaedroOrigemLinha = 6;

    int octaedroOrigemColuna = 7;

    // Habilidade do octaedro

    for (int i = 0; i < 5; i++) // Linhas

    {

        for (int j = 0; j < 5; j++) // Colunas

        {

            if (i >= 4 && i <= 8 && j >= 5 - i)
            {

                octaedro[i][j] = areaAfetada;
            }

            else

            {

                octaedro[i][j] = agua;
            }
        }
    }

    // int navioVertical[3] = {3, 3, 3};
    // int navioHorizontal[3] = {3, 3, 3};

    // int navioVerticalLinha = 3;    // posição inicial
    // int navioVerticalColuna = 2;   // fixo
    // int navioHorizontalLinha = 7;  // fixo
    // int navioHorizontalColuna = 1; // posição inicial
    // int navioDiagonal1Linha = 1;
    // int navioDiagonal1Coluna = 6;
    // int navioDiagonal2Linha = 6;
    // int navioDiagonal2Coluna = 5;

    // // Posicionando o navio vertical
    // if (navioVerticalLinha < 0 || navioVerticalLinha + 2 >= 10 || navioVerticalColuna < 0 || navioVerticalColuna >= 10) // Verificação do navio dentro dos limites do tabuleiro
    // {
    //     printf("Erro! Navio fora dos limites do tabuleiro!\n"); // Mensagem de erro
    // }
    // else
    // {
    //     int sobreposicaoVertical = 0;
    //     for (int i = 0; i < 3; i++)
    //     {
    //         if (tabuleiro[navioVerticalLinha + i][navioVerticalColuna] == 3) // Verificando se já está preenchido, com outro navio, a posição escolhida
    //         {
    //             printf("Erro! Sobreposição com outro navio!\n");
    //             sobreposicaoVertical = 1;
    //             break;
    //         }
    //     }
    //     if (!sobreposicaoVertical)
    //     {
    //         for (int i = 0; i < 3; i++)
    //         {
    //             tabuleiro[navioVerticalLinha + i][navioVerticalColuna] = 3;
    //         } // Inserindo navio no tabuleiro
    //     }
    // }

    // // Posicionando o navio horizontal

    // if (navioHorizontalLinha < 0 || navioHorizontalLinha >= 10 || navioHorizontalColuna < 0 || navioHorizontalColuna + 2 >= 10) // Verificação do navio dentro dos limites do tabuleiro
    // {
    //     printf("Erro! Navio fora dos limites do tabuleiro\n"); // Mensagem de erro
    // }
    // else
    // {
    //     int sobreposicaoHorizontal = 0; // Verificando se já está preenchido, com outro navio, a posição escolhida
    //     for (int i = 0; i < 3; i++)
    //     {
    //         if (tabuleiro[navioHorizontalLinha][navioHorizontalColuna + i] == 3)
    //         {
    //             printf("Erro! Sobreposição com outro navio!\n");
    //             sobreposicaoHorizontal = 1;
    //             break;
    //         }
    //     }
    //     if (!sobreposicaoHorizontal)
    //     {
    //         for (int i = 0; i < 3; i++)
    //         {
    //             tabuleiro[navioHorizontalLinha][navioHorizontalColuna + i] = 3;
    //         } // Inserindo navio no tabuleiro
    //     }
    // }

    // //Posicionando navio diagonal 1 - Para baixo e direita

    // if (navioDiagonal1Linha < 0 || navioDiagonal1Linha >= 10 || navioDiagonal1Coluna < 0 || navioDiagonal1Coluna + 2 >= 10) // Verificação do navio dentro dos limites do tabuleiro
    // {
    //     printf("Erro! Navio fora dos limites do tabuleiro\n"); // Mensagem de erro
    // }
    // else
    // {
    //     int sobreposicaoDiagonal = 0; // Verificando se já está preenchido, com outro navio, a posição escolhida
    //     for (int i = 0; i < 3; i++)
    //     {
    //         if (tabuleiro[navioDiagonal1Linha + i][navioDiagonal1Coluna + i] == 3)
    //         {
    //             printf("Erro! Sobreposição com outro navio!\n");
    //             sobreposicaoDiagonal = 1;
    //             break;
    //         }
    //     }
    //     if (!sobreposicaoDiagonal)
    //     {
    //         for (int i = 0; i < 3; i++)
    //         {
    //             tabuleiro[navioDiagonal1Linha + i][navioDiagonal1Coluna + i] = 3;
    //         } // Inserindo navio no tabuleiro
    //     }
    // }

    // //  //Posicionando navio diagonal 2 - Para cima e direita

    //  if (navioDiagonal2Linha < 0 || navioDiagonal2Linha >= 10 || navioDiagonal2Coluna < 0 || navioDiagonal2Coluna + 2 >= 10) // Verificação do navio dentro dos limites do tabuleiro
    //  {
    //      printf("Erro! Navio fora dos limites do tabuleiro\n"); // Mensagem de erro
    //  }
    //  else
    //  {
    //      int sobreposicaoDiagonal = 0; // Verificando se já está preenchido, com outro navio, a posição escolhida
    //      for (int i = 0; i < 3; i++)
    //      {
    //          if (tabuleiro[navioDiagonal2Linha - i][navioDiagonal2Coluna + i] == 3)
    //          {
    //              printf("Erro! Sobreposição com outro navio!\n");
    //              sobreposicaoDiagonal = 1;
    //              break;
    //          }
    //      }
    //      if (!sobreposicaoDiagonal)
    //      {
    //          for (int i = 0; i < 3; i++)
    //          {
    //              tabuleiro[navioDiagonal2Linha - i][navioDiagonal2Coluna + i] = 3;
    //          } // Inserindo navio no tabuleiro
    //      }
    //  }

    // Imprimindo tabuleiro
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
