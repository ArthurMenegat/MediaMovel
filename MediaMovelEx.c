#include <stdio.h>

#define MAX_VALORES 5

static float calcularMediaMovelExponencial(float valor_atual, float valor_anterior, unsigned int janela);

static float calcularMediaMovelExponencial(float valor_atual, float valor_anterior, unsigned int janela)
{
    float constante = 1 / (janela + 1);

    return (valor_atual - valor_anterior) * constante + valor_anterior;
}

int main(void)
{
    float valores[MAX_VALORES];
    unsigned int janela = 0;

    puts("Insira os valores:");

    for(int i = 0; i < MAX_VALORES; i++)
    {
        scanf("%f", &valores[i]);
    }

    puts("Insira a janela:");
    scanf(" %u", &janela);

    int n = sizeof(valores) / sizeof(valores[0]);

    float media_movel = valores[0];

    for(int i = 0; i < n; i++)
    {
       media_movel = calcularMediaMovelExponencial(valores[i], media_movel, janela);
       printf("Valor: %.2f | EMA: %.2f\n", valores[i], media_movel);
    }

    return 0;
}
