/*Escrever um programa para ler uma string e um número n, e eliminar os n caracteres do final da string. 
A string resultante deve ser mostrada na tela. Por exemplo, lida a string “Agora” e o número 3, deve mostrar na tela a palavra “Ag”.*/

#include<stdio.h>

int main (){
char str[30]; 
int i, n; 

printf("Digite a string: "); 
gets(str); 

printf("Digite o numeo de letras a serem cortadas no final: "); 
scanf("%d",&n); 

for(i = 0; str[i]; i++) { }
str[i - n] = '\0';

printf("string resultante: %s",str); 
}