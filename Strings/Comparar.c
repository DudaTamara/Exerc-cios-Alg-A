#include<stdio.h> 
main() { 

char str[30], i, str2[30], iguais = 1; 

printf("Digite a primeira palavra: "); 
  scanf("%s", str); 

  printf("Digite a segunda palavra: "); 
   scanf("%s", str2); 

  for (i = 0; str[i] && str2[i]; i++) { 
    if(str[i] != str2[i]) 
      iguais = 0; 
    } 

  if(iguais && str[i]==str2[i]) 
    printf("As strings sao iguais."); 
   else 
   printf("As strings sao diferentes."); 
  } 