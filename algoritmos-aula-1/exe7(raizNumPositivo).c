
#include <stdio.h>
#include <math.h>


int main()
{
    float a,raiz;
    
    printf("Digite dois numeros:\n");
    scanf("%f",&a);
    
    if(a>0){
        raiz=pow(a,0.5);
        printf("Raiz quadrada é: %f",raiz);
    } else if(a<0){
        printf("O numero nao é real, use conjunto dos numeros complexos");
    }
}
