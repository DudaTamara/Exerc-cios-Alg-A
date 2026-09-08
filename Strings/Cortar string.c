/*Escreva um programa que leia uma string e um caractere e corte a string na posição da primeira ocorrência do caractere lido. 
Por exemplo, lidos “palavra” e ‘v’, a string resultante deve ser “pala”. Se não houver ocorrência da letra lida na string, 
nenhuma modificação deve ser feita na string. Atenção: não é só exibir a string até certo ponto. 
Deve ser feita a modificação na string para que ela termine na posição do caractere lido. */

#include<stdio.h> 
main(){ 

char str[30],c; 
int i; 

printf("Digite a string: \n"); 
gets(str); 

printf("Digite o caracter de corte: \n"); 
scanf("%c",&c); 

for(i=0; str[i];i++){ 
  if(str[i] == c ){ 
    str[i] = '\0'; 
    break; 
  } 
} 

printf("string resultante: %s",str); 
} 