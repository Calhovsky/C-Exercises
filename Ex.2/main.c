#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a,b,i,j,primo;
    printf("Introduza um intervalo entre A e B.\n");
    printf("A: ");
    scanf("%d", &a);
    printf("B: ");
    scanf("%d", &b);
    printf("Numeros primos: ");

    for(i=a;i<=b;i++){//for que percorre o intervalo dado pelo utilizador
        primo=0;
        for(j=1;j<=i;j++){//for para os elementos pelo qual o valor do intervalo vai ser divisivel
            if(i%j==0) //caso resto da divis�o seja 0, incrementa "primo"
                ++primo;
        }
        if(primo == 2 || primo == 1)//if para verificar quantos restos da divis�o s�o igual a 0, onde apenas poder� ser 1
                                    //para o n�mero "1" ou 2 para os restantes valores.
            printf("%d ", i);
    }

}
