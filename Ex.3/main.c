#include <stdio.h>
#include <stdlib.h>

int main()
{
    int candA,candB,candC,i,num,voto;
    candA=0;
    candB=0;
    candC=0;
    printf("Qual o numero total de votantes?: ");
    scanf("%d", &num);//ler número de votantes
    printf("Candidato A:1, Candidato B:2, Candidato C:3\n");
    for(i=1;i<=num;i++){ //ciclo for para perguntar qual o voto durante "num" vezes
        printf("Voto: ");
        scanf("%d",&voto);
        switch (voto){//estrutura de decisão Switch para cada caso/voto
        case 1:
          ++candA;
        break;

        case 2:
          candB++;
          break;

        case 3:
          ++candC;
        break;
        default: //caso não seja inserido o valor correspondente a cada candidato, esse voto é nulo.
          printf("Voto Nulo.\n");
        }
    }
    printf("Candidato A: %d votos.\n",candA);
    printf("Candidato B: %d votos.\n",candB);
    printf("Candidato C: %d votos.",candC);
}
