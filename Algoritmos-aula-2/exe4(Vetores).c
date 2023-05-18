#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    int vetor[6];
    
    for(int i;i<6;i++){
        //A
        vetor[i]= rand()%10;
    }
    
    printf("Vetor Original: \n");
    for(int i;i<6;i++){
        printf("%d  ",vetor[i]);
    }
    
    //B
    int soma=vetor[0]+vetor[1]+vetor[5];
    printf("\n-------------\nSoma das posições [0],[1],[5]: %d \n",soma);
    
    //C
    vetor[4]=100;
    
    
    //D
    printf("\n-------------\nVetor modificado\n");
    for(int i;i<6;i++){
        printf("%d  ",vetor[i]);
    }
}
