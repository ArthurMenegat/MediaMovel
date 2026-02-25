#include <stdio.h>
#include <stdlib.h>

static void media_movel(unsigned int janela);

static void media_movel(unsigned int janela)
{
    printf("%u\n", janela);
}

//change

int main(void)
{
    unsigned int janela = 0;
    int *ptr = malloc(sizeof(janela));
    int exit = 0;

    puts("Insira a janela de amostragem:");
    scanf("%u", &janela);

    media_movel(janela);

    scanf(" %d", &exit);

    return 0;
}
