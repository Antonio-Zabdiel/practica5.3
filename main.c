#include<stdio.h>

int main(){
    int numeros_inp[52];
    int numeros_par[52];
    int i = 0;
    int j = 0;
    int k = 0;
    int l = 0;

    for (i = 0;  i <= 100 ; i++)
    {
        if(i == 0){
            numeros_par[j] = i;
            j++; 
            continue;
        } else if (i%2 == 0){
            numeros_par[j] = i;
            j++;
            continue;
        } else {
            numeros_inp[k] = i;
            k++;
            continue;
        }
    }
    
    printf("numeros pares            numeros inpares");

    while (numeros_inp[l] != '\0')
    {
        //printf("%d\t",numeros_par[l]);

        if (numeros_inp[l]%2 == 0){
            break;
        } else {
            printf("%d\t\t\t%d\n", numeros_par[l], numeros_inp[l]);
        }
        
        l++;
    }
    
    /*for(l = 0 ; l <=50 ; l++){
        printf("%d\t%d\n",numeros_par[l],numeros_inp[l]);
    }*/

    return 0;
}
