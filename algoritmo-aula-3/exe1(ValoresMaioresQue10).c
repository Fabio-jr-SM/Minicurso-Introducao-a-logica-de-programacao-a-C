/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    int i,j,matriz[4][4],cont10=0;
    
    
    printf("Matriz sorteada: \n");
    for(i=0;i<4;i++){
        printf("\n");
        for(j=0;j<4;j++){
            matriz[i][j]=rand()%11;
            printf("%d ",matriz[i][j]);
            
            if(matriz[i][j]==10){
                cont10++;
            }
        }
    }
    
    printf("\nNumeros iguais a 10 na matriz: %d",cont10);
    return 0;
}
