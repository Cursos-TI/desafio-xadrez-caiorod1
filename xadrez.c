#include <stdio.h>
int main()
{
    char torre[10] = "Torre", rainha[10] = "Rainha", bispo[10] = "Bispo";
    int escolher_peca;

    do
    {

        // MENU INTERATIVO
        printf("=====================================\n");
        printf("♙ ♜ ♔    QUAL PEÇA DESEJA MOVER:   ♙ ♜ ♔\n");
        printf("=====================================\n");
        printf("  [1] ♙  BISPO \n");
        printf("  [2] ♔  RAINHA \n");
        printf("  [3] ♜  TORRE \n");
        printf("  [4] Sair do Jogo... \n");
        printf("👉 Escolha uma opção: ");
        scanf("%d", &escolher_peca);

        // Criando um switch case para o Menu interativo
        switch (escolher_peca)
        {
        case 1:
            printf("=====================================\n");
            printf("         ♙  BISPO ♙       \n");
            printf("=====================================\n");
            for (int mover_bispo = 1; mover_bispo <= 5; mover_bispo++)  // Laço de repetição, ele vai parar quando o Bispo se "mover" 5 casas.
                printf("CIMA - DIREITA\n");
            break;
        case 2:
            printf("=====================================\n");
            printf("         ♔  RAINHA  ♔       \n");
            printf("=====================================\n");
            int mover_rainha = 1;
            while (mover_rainha <= 8) // Laço de repetição, ele vai parar quando a Rainha se "mover" 8 casas.
            {
                printf("ESQUERDA\n");
                mover_rainha++; 
            }
            break;
        case 3:
            printf("=====================================\n");
            printf("         ♔  TORRE  ♔       \n");
            printf("=====================================\n");

            int mover_torrer = 1; 
            do
            {
                printf("DIREITA \n");
                mover_torrer++;
            } while (mover_torrer <= 5); // Laço de repetição, ele vai parar quando a Torre se "mover" 5 casas.

            break;
        case 4:
            printf("=====================================\n");
            printf("♙ ♜ ♔    Saindo...  ♙ ♜ ♔"); // Quando o usuario selecionar 4, vai sair do laço de repetição e terminar o programa.
            break;
        default:
            printf("Opção incorreta!!!\n"); 
            break;
        }
    } while (escolher_peca != 4);
    return 0;
}