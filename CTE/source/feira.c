#include <stdio.h>

int valorInicial = 20;
int duzias;
int valorPorDuzia = 5;
int valorASerSubtraido;
int troco;

int main(){
printf("Quantas duzias Joao comprou?\n");
scanf("%d", &duzias);
valorASerSubtraido = valorPorDuzia * duzias;
troco = valorInicial - valorASerSubtraido;
printf("%d", troco);
}
