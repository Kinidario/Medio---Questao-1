//Bibliotecas
#include <stdio.h>
#include <math.h>
//Definido o tamanho de SIZE
#define SIZE 2

//Função 
float Distancia(float str1[SIZE], float str2[SIZE]){
//Calculando a distância entre pontos.
  float dist = pow(pow(str1[0]-str2[0], 2) + pow(str1[1] - str2[1],2),0.5);
  return dist;
}

int main(void) {
//Variáveis
  float str1[SIZE];
  float str2[SIZE];

//Recebendo a primeira coordenada do teclado
  printf("Digite a primeira coordenada : ");
  scanf("%f, %f", &str1[0], &str1[1]);

//Recebendo a segunda coordenada do teclado
  printf("Digite a segunda coordenadas : ");
  scanf("%f, %f", &str2[0], &str2[1]);

//Chamando a função e passando como parâmetro as coordenadas
  printf("%.2f", Distancia(str1, str2));
  
  return 0;
}
