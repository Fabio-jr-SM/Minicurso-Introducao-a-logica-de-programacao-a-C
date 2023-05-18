#include <stdio.h>

int main()
{
    int cont=1,i;
    
    printf("Contagem WHILE: ");
    while(cont<=100){
        printf("%d ",cont);
        cont++;
    }
    
    printf("\n---------------------------\nContagem FOR: ");
    for(cont=1;cont<=100;cont++){
        printf("%d ",cont);
    }
    
}
