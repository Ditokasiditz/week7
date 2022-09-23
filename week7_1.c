#include<stdio.h>

int main(){
    int number[20],i,n,j,a,full;
    float Q,q,m;
    printf("enter value of number:");
    scanf("%d",&n);
    m=n;
    for(i=0;i<n;i++) {scanf("%d",&number[i]);}

    for (i = 0; i < n; ++i){
        for (j = i + 1; j < n; ++j){
            if (number[i] > number[j]){
                a =  number[j];
                number[j] = number[i];
                number[i] = a;
            }
        }
    }
    
    Q = (3*m+3)/4;
    full = Q;
    if(full == Q){
        q=number[full];
    }
    else{
        q= number[full-1]+(Q-full)*(number[full]-number[full-1]);
    }
    printf("%f",q);
}


