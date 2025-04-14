#include <stdio.h>

int main() {
    int idade;
    float altura;
    printf("Digite sua idade: ");
    scanf("%d", &idade);
    printf("Digite sua altura: ");
    scanf(" %f", &altura);

    if ((idade >= 16 && idade <= 80) && (altura >= 1.60)) {
        printf("pode entrar na montanha russa!");
    }
    else {
        printf("nao pode entrar na montanha russa!");
    }

    return 0;
}