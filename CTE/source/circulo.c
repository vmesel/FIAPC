#include <stdio.h>

float pi;
float raio;
float resultado;

void main(){
printf("Digite o valor para o raio do circulo:\n");
scanf("%f", &raio);
printf("Digite o valor de pi para o calculo:\n");
scanf("%f", &pi);
resultado = raio * raio * pi;
printf("Seu raio deu: %f", resultado);
}
