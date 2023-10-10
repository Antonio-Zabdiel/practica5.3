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
    
    for(l = 0 ; l <=50 ; l++){
        printf("%d\t%d\n",numeros_par[52],numeros_inp[l]);
    }

    return 0;
}
