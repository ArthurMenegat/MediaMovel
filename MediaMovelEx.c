#include <stdio.h>

#define MAX_VALORES 5

static void calcularMediaMovel(unsigned int janela);

static void calcularMediaMovel(unsigned int janela)
{

}

int main(void)
{
    float valores[MAX_VALORES];
    unsigned int janela = 0;

    puts("Insira os valores:");

    for(int i = 0; i < MAX_VALORES; i ++)
    {
        scanf("%f", &valores[i]);
    }

    puts("Insira a janela:");
    scanf(" %u", &janela);

    printf("Valores: ");

    for(int i = 0; i < MAX_VALORES; i++)
    {
        printf("%.2f ", valores[i]);
    }

    printf("Janela: %u", janela);

    return 0;
}
