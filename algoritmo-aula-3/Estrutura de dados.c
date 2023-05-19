#include <stdio.h>

typedef struct{
    int op;
    int num;
    char nome[30];
}Telefone;

/*void cadastro(){
    int k=0;
    for(int i=0;i<k;i++){
        printf("Digite o nome: ");
        scanf("%c ",&telefone.nome);
        k++;
    }
}*/

int main()
{
    Telefone tel;
    
    printf("Lista telefonica :)\n");
    printf("1. Cadastrar usuario\n");
    printf("2. Exibir lista\n");
    printf("0. sair\n");
    scanf("%d",&tel.op);
    
    switch(tel.op){
        case 1:
            printf("Digite o nome: ");
            scanf("%s",tel.nome);
            
            printf("Digite o telefone: ");
            scanf("%d",&tel.num);
        break;
    }
}
