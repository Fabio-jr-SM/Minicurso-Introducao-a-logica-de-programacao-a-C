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
    int i,j,matriz[3][3],soma=0;
    
    
    printf("Matriz:");
    for(i=0;i<3;i++){
        printf("\n");
        for(j=0;j<3;j++){
            matriz[i][j]=rand()%10;
            printf("%d ",matriz[i][j]);
            
            if(i!=j && i >j){
                soma=soma+matriz[i][j];
            }
        }
    }
    
    printf("\nSoma: %d",soma);
}
