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
    int i,j,matriz[5][5];
    
    
    printf("Matriz:");
    for(i=0;i<5;i++){
        printf("\n");
        for(j=0;j<5;j++){
            if(i==j){
                matriz[i][j]=1;
            }else{
                matriz[i][j]=0;
            }
            printf("%d ",matriz[i][j]);
        }
    }
}
