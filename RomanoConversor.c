#include <stdio.h>

void conversorR(int num)
{
    int num2[] = {1000, 900, 500, 400, 100, 90, 50, 40, 10, 9, 5, 4, 1};
    char *romanos[] = {"M", "CM", "D", "CD", "C", "XC", "L", "XL", "X", "IX", "V", "IV", "I"};
    for (int i = 0; i < 13; i++)
    {
        while (num >= num2[i])
        {
            printf("%s", romanos[i]);
            num -= num2[i];
        }
    }
    printf("\n");
}

int main()
{

    int num, escolha;
    int loop = 1;

    while (loop == 1)
    {

        printf("\n");
        printf("Escolha uma opcao: \n");
        printf("1. Converter um Inteiro para Romano. \n");
        printf("2. Sair. \n");
        scanf("%d", &escolha);

        if (escolha == 1)
        {
            printf("Insira um numero inteiro: \n");
            scanf("%d", &num);
            conversorR(num);
        }
        if (escolha == 2)
        {
            printf("\n");
            printf("Obrigado por usar o conversor! \n");
            loop = 0;
        }
    }

    return 0;
}