
#include <stdio.h>
#include <math.h>


int main()
{
    float a,raiz,quadrado;
    
    printf("Digite dois numeros:\n");
    scanf("%f",&a);
    
    if(a>0){
        raiz=sqrt(a);
        printf("Raiz quadrada é: %f",raiz);
    } else if(a<0){
        quadrado=pow(a,2);
        printf("Quadrado do numero é: %f",quadrado);
    }
}
