/*Escreva um programa que leia uma string e faça a sua inversão. Por exemplo, lida a string "prova", 
deve ser exibido na tela "avorp". A inversão deve ser feita na própria string, sem copiar seu conteúdo para outra.*/

#include<stdio.h> 
main(){ 

char str[30]; 
int i, f, aux; 

printf("Digite a string: "); 
gets(str); 

for(f = 0; str[f];f++); 
  for(i = 0,f--;i < f;i++,f--){ 
    aux = str[i]; 
    str[i] = str[f]; 
    str[f] = aux; 
} 

printf("string resultante: %s",str); 
}