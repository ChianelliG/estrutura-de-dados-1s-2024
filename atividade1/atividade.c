#include <stdio.h>

int main() {
    int n, num, menor, maior;
    
    printf("Digite a quantidade de numeros a serem inseridos: ");
    scanf("%d", &n);
    
    if (n <= 0) {
        printf("Erro: A quantidade de numeros deve ser maior que zero.\n");
        return 1;
    }
    
    printf("Digite %d numeros inteiros:\n", n);
    scanf("%d", &num);
    
    menor = num;
    maior = num;
    for (int i = 1; i < n; i++) {
        scanf("%d", &num);
        
        if (num < menor) {
            menor = num;
        }
        
        if (num > maior) {
            maior = num;
        }
    }
    
    printf("Quantidade de numeros: %d\n", n);
    printf("Menor numero: %d\n", menor);
    printf("Maior numero: %d\n", maior);
    printf("Numeros em ordem crescente:\n");
    for (int i = menor; i <= maior; i++) {
        printf("%d ", i);
    }
    printf("\n");
    
    return 0;
}