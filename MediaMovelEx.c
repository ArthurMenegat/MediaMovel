#include <stdio.h>

static void media_movel(unsigned int janela);

static void media_movel(unsigned int janela)
{
    printf("%u", janela);
}

int main(void)
{
    unsigned int janela = 0;

    puts("Insira a janela de amostragem:");
    scanf("%u", &janela);

    media_movel(janela);

    return 0;
}
