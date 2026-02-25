#include <stdio.h>
#include <stdlib.h>

static void media_movel(unsigned int janela);

static void media_movel(unsigned int janela)
{
    printf("%u", janela);
}

int main(void)
{
    unsigned int janela = 0;
    int *ptr = malloc(sizeof(janela));

    puts("Insira a janela de amostragem:");
    scanf("%u", &janela);

    media_movel(janela);

    return 0;
}
