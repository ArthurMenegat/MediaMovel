#include <stdio.h>

#define MAX_VALORES 5

static float calcularMME(float valor_atual, float valor_anterior, float alpha);

static float calcularMME(float valor_atual, float valor_anterior, float alpha)
{
    return (alpha * valor_atual) + ((1.0f - alpha) * valor_anterior);
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

    puts("Insira o tamanho da janela:");
    scanf("%u", &janela);

    float mediaMovel = valores[0];
    float alpha = 2.0f / (janela + 1.0f);

    for(int i = 0; i < MAX_VALORES; i++)
    {
       mediaMovel = calcularMME(valores[i], mediaMovel, alpha);
       printf("Valor: %.2f | EMA: %.2f\n", valores[i], mediaMovel);
    }

    return 0;
}
