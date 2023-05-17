#include <stdio.h>
#include <math.h>


int main()
{
    int a,b;
    
    printf("Digite dois numeros:\n");
    scanf("%d %d",&a,&b);
    
    if(a>b){
        printf("O maior é: %d",a);
    } else if(a<b){
        printf("O maior é: %d",b);
    } else{
        printf("são iguais");
    }
}
