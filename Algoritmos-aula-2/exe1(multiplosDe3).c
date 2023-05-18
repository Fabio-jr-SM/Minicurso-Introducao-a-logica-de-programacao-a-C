#include <stdio.h>

int main()
{
    int cont=0,i;
    
    printf("Multiplo de 3: ");
    while(cont!=5){
        if((i%3==0) && (i>0)){
            printf("%d ",i);
            cont++;
        }
        i++;
    }
}
