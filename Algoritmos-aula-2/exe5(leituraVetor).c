#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    int vetor[6];
    
    for(int i;i<6;i++){
        vetor[i]= rand()%10;
    }
    
    printf("Vetor Original: \n");
    for(int i;i<6;i++){
        printf("%d  ",vetor[i]);
    }
}
