#include<stdio.h>
long long calcularPotencia(int base, int expoente) {
    if (expoente == 0)
    {
        return 1;
    }
    return base * calcularPotencia(base, expoente - 1);
}
int main(void)
{
    int base;
    int expoente;
    long long resultado;
    printf("Informe a base: ");
    scanf("%d", &base);
    printf("Informe o expoente: ");
    scanf("%d", &expoente);
    if(expoente < 0) {
        printf("Erro: o expoente não pode ser negativo.\n");
        return 1;
    }
    resultado = calcularPotencia(base, expoente);
    printf("%d elevado a %d e igual a %lld.\n", base, expoente, resultado);
    return 0;
}
