#include<stdio.h>
#include<stdlib.h>

int main () {
int v1[5], v2[5];
int i = 0, j = 0;

for (i = 0; i < 5; i++){
 for (j = 0; j < 5; j++){
  if (v1[i] == v2[j]){
   printf("\nValores iguais na posicao: %d e %d", i + 1, j + 1);}
   }
}
system("pause");
}
