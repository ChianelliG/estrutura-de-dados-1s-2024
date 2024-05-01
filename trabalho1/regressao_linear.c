#include <stdio.h>
#include <stdlib.h>
#include <math.h>

typedef struct{
    int x;
    float y;
} Ponto;

void ler_pontos(FILE *arquivo, Ponto *pontos, int n){
    for(int i = 0; i < n; i++){
        fscanf(arquivo, "%d,%f\n", &pontos[i].x, &pontos[i].y);
    }
}

float calcular_media_x(int* valores, int n){
    int soma = 0;
    for(int i = 0; i < n; i++){
        soma += valores[i];
    }
    return (float)soma / n;
}

float calcular_media_y(float* valores, int n){
    float soma = 0;
    for(int i = 0; i < n; i++){
        soma += valores[i];
    }
    return soma / n;
}

int main(int argc, char* argv[]){
    
    int valores_x[] = {1, 2, 3, 4, 5}; // Exemplo de valores de x
    float valores_y[] = {2.5, 3.5, 4.5, 5.5, 6.5}; // Exemplo de valores de y
    int n = sizeof(valores_x) / sizeof(valores_x[0]); // Número de elementos

    float media_x = calcular_media_x(valores_x, n);
    float media_y = calcular_media_y(valores_y, n);
    
    float inclinacao = (media_x * media_y) / pow(media_x, 2);
    float interceptacao = media_y - inclinacao * media_x;
    float regressao = inclinacao * media_x + interceptacao;

    printf("Inclinação: %.2f\n", inclinacao);
    printf("Interceptação: %.2f\n", interceptacao);
    printf("Regressão: %.2f\n", regressao);
    printf("Média de X: %.2f\n", media_x);
    printf("Média de Y: %.2f\n", media_y);

    return 0;
}
