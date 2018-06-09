/********************************************
@author     Erick Gabriel Brunoro Mesquita
@email      erick.mesquita@usp.br
@nusp       9267182
@data       09/06/2018

Exercício-Programa conjunto Numérico-SisPot 2

@arquivo:   main.c
********************************************/

#include <stdio.h>
#include <stdlib.h>

char* enderecoSom = "../dados_sons/Harry.dat";
char* linha;

int main(){

    FILE* som = fopen(enderecoSom, "r");

    for(int i = 0; i < 999; i++){
        printf("%c", fgetc(som));
    }
    return 0;
}
