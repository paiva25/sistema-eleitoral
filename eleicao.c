#include <stdio.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "Portuguese");

    // Variaveis
    int voto;
    int candidato1 = 0;
    int candidato2 = 0;
    int candidato3 = 0;
    int branco = 0;
    int nulo = 0;
    int totalEleitores = 0;
    int eleito;

    printf("=================================\n");
    printf("      APURACAO DA ELEICAO\n");
    printf("=================================\n");

   
    do
    {
        printf("\nDigite seu voto:\n");
        printf("1 - Candidato 1\n");
        printf("2 - Candidato 2\n");
        printf("3 - Candidato 3\n");
        printf("4 - Branco\n");
        printf("0 - Encerrar\n");

        printf("Voto: ");
        scanf("%d", &voto);

        // Candidato 1
        if (voto == 1)
        {
            candidato1++;
            totalEleitores++;

            printf("Voto computado para o Candidato 1!\n");
        }

        // Candidato 2
        else if (voto == 2)
        {
            candidato2++;
            totalEleitores++;

            printf("Voto computado para o Candidato 2!\n");
        }

        // Candidato 3
        else if (voto == 3)
        {
            candidato3++;
            totalEleitores++;

            printf("Voto computado para o Candidato 3!\n");
        }

        // Branco
        else if (voto == 4)
        {
            branco++;
            totalEleitores++;

            printf("Voto em branco computado!\n");
        }

        // Nulo
        else if (voto != 0)
        {
            nulo++;
            totalEleitores++;

            printf("Voto nulo computado!\n");
        }

    } while (voto != 0);

    // Resultado
    printf("\n=================================\n");
    printf("     RESULTADO FINAL\n");
    printf("=================================\n");

    printf("Candidato 1: %d votos\n", candidato1);
    printf("Candidato 2: %d votos\n", candidato2);
    printf("Candidato 3: %d votos\n", candidato3);

    printf("Brancos: %d\n", branco);
    printf("Nulos: %d\n", nulo);

    printf("Total de eleitores: %d\n", totalEleitores);

    // Verifica vencedor
    if (candidato1 > candidato2 && candidato1 > candidato3)
    {
        eleito = 1;
    }

    else if (candidato2 > candidato1 && candidato2 > candidato3)
    {
        eleito = 2;
    }

    else if (candidato3 > candidato1 && candidato3 > candidato2)
    {
        eleito = 3;
    }

    else
    {
        eleito = 0;
    }

    // Exibe vencedor
    if (eleito != 0)
    {
        printf("Candidato eleito: %d\n", eleito);
    }

    else
    {
        printf("A eleicao terminou empatada.\n");
    }

    getchar();
    getchar();

    return 0;
}
