#include<stdio.h> 
main() {  

char str[30], i, str2[30];  

printf("Digite a palavra: "); 
 gets(str); 

 for(i=0; str[i]; i++) 
  str2[i] = str[i]; str2[i] = '\0'; 

 printf("A palavra lida e "%s" e a copiada e "%s".", str, str2); 
 } 