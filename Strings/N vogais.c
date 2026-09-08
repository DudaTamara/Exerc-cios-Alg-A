/* Faça um programa que leia uma string e mostre na tela o número de vogais.*/

#include<stdio.h> 
main(){ 

char str[30],v; 
int i, c=0; 

printf("Digite a string: "); 
gets(str); 

for(i=0; str[i] != '\0';i++){ 
   if(str[i]=='a' || str[i]=='A')
      c++; 
     if(str[i]=='e' || str[i]=='E') 
       c++; 
      if(str[i]=='i' || str[i]=='I') 
        c++; 
       if(str[i]=='o' || str[i]=='O') 
         c++; 
        if(str[i]=='U' || str[i]=='u') 
          c++; 
} 

printf("o numero de vogais na string e: %d",c); 
} 