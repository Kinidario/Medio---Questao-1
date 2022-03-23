#include <stdio.h>
#include <math.h>
#define SIZE 2

float Distancia(float str1[SIZE], float str2[SIZE]){
  float dist = pow(pow(str1[0]-str2[0], 2) + pow(str1[1] - str2[1],2),0.5);
  return dist;
}

int main(void) {
  float str1[SIZE];
  float str2[SIZE];

  printf("Digite a primeira coordenada : ");
  scanf("%f, %f", &str1[0], &str1[1]);

  printf("Digite a segunda coordenadas : ");
  scanf("%f, %f", &str2[0], &str2[1]);

  printf("%.2f", Distancia(str1, str2));
  
  return 0;
}