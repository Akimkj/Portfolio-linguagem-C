#include <stdio.h>

int notaReposicao(int nota1, int nota2, int nota3) {
    int media = (nota1 + nota2 + nota3) / 3, notaNecessaria = 0;
    
    if (media >= 70) {
        return notaNecessaria;
    }
    
    int menorNota = nota3;
    if (nota1 < nota2 && nota1 < nota3) {
        menorNota = nota1;
    }
    else if (nota2 < nota1 && nota2 < nota3) {
        menorNota = nota2;
    }
    
    notaNecessaria = 210 - (nota1 + nota2 + nota3) + menorNota;
    return notaNecessaria;
}

int main() {
    int p1, p2, p3;
    printf("Informe as suas tres notas: ");
    scanf("%d %d %d", &p1, &p2, &p3);

    printf("A nota necessaria para a reposicao: %d", notaReposicao(p1, p2, p3));
    return 0;
}