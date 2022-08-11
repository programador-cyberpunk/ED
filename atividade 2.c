#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int main (){

    int num;

    printf("Digite um numero qualquer: ");

    scanf("%d", &num);

    if (num == 1){
        printf("%d e igual a A", num);
    }else if (num == 2){
       printf("%d e igual a B", num);
    }else if (num== 3) {
      printf("%d e igual a C", num);
    }
    if(num == 4){
        printf("%d e igual a D",num);
    }else {
     printf("%d e igual a 0", num);
    }
    printf("\n\n\n");

    system("pause");
    return 0;
}
