#include<stdio.h> 
main() {  

char str[30], i, str2[30], j; 

printf("Digite a primeira palavra: "); 
 gets(str);  

printf("Digite a segunda palavra: "); 
 gets(str2);  

for(i=0; str[i]; i++); 
 for(j=0; str2[j]; j++, i++)  

str[i] = str2[j]; str[i] = '\0'; /* nao esquecer de "fechar" a copia */ 

 printf("A palavra apos a concatenacao e "%s".", str);  
} 