#include <stdio.h>
#include <stdlib.h>

float mais (float a, float b)
{
    float s = a + b;
    return s;
}

float menos (float a, float b)
{
    float sub = a - b;
    return sub;
}

float vezes (float a, float b)
{
    float m = a * b;
    return m;
}

float divi (float a, float b)
{
    float d = a / b;
    return d;
}

int main()
{
    printf("\t ***** CALCULADORA ***** \n\n");
    printf("Instrucoes:\n");
    printf(" - Primeiro digite o simbolo da operacao.\n (+ = soma // - = subtracao // * = multiplicacao // / = divisao) \n");
    printf(" - Caso queira zerar os valores digite tecle Z.\n");
    printf(" - Caso queira encerrar os calculos tecle f.\n\n");
    float n1, n2, n3, soma, sub, multi, div, raiz, x = 0;
    char car;
    inicio:
    n1 = 0; n2 = 0; n3 = 0; x = 0;
    printf("Digite o simbolo da operacao: ");
    car = getchar();
    printf("Digite o primeiro valor: ");
    scanf("%f", &n1);
    printf("Digite o segundo valor: ");
    scanf("%f", &n2);
    if(car == '+')
        {
            soma = mais(n1, n2);
            printf("A soma eh: %.2f \n\n", soma);
            x = soma;
        }
        else if(car == '-')
        {
            sub = menos(n1, n2);
            printf("A subtracao eh: %.2f \n\n", sub);
            x = sub;
        }
        else if(car == '*')
        {
            multi = vezes(n1, n2);
            printf("A multiplicacao eh: %.2f \n\n", multi);
            x = multi;
        }
        else if(car == '/')
        {
            while(n2 == 0)
            {
                printf("Valor do denominador eh invalido!!! /n/n");
                printf("Digite o primeiro valor: ");
                scanf("%f", &n1);
                printf("Digite o segundo valor: ");
                scanf("%f", &n2);
            }
            div = divi(n1, n2);
            printf("A divisao eh: %.2f \n\n", div);
            x = div;
        }

    do
    {
        setbuf(stdin, NULL);
        printf("Digite o simbolo da operacao: ");
        car = getchar();
        printf("Digite o novo valor: ");
        scanf("%f", &n3);
        if(car == '+')
        {
            soma = mais(x, n3);
            printf("A soma eh: %.2f \n\n", soma);
            x = soma;
        }
        else if(car == '-')
        {
            sub = menos(x, n3);
            printf("A subtracao eh: %.2f \n\n", sub);
            x = sub;
        }
        else if(car == '*')
        {
            multi = vezes(x, n3);
            printf("A multiplicacao eh: %.2f \n\n", multi);
            x = multi;
        }
        else if(car == '/')
        {
            while(n3 == 0)
            {
                printf("Valor do denominador eh invalido!!! /n/n");
                printf("Digite o primeiro valor: ");
                scanf("%f", &n1);
                printf("Digite o segundo valor: ");
                scanf("%f", &n2);
            }
            div = divi(x, n3);
            printf("A divisao eh: %.2f \n\n", div);
            x = div;
        }
    }
    while(car != 'f' && car != 'z');
    goto inicio;
    system("pause");
    return 0;
}
