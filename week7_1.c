#include<stdio.h>

int main(){
    int number[20],i,n,j,a,full;
    float Q3,q,m;
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
    
    Q3 = (3*m+3)/4;
    full = Q3;
    if(full == Q3){
        q=number[full];
    }
    else{
        q= number[full-1]+(Q3-full)*(number[full]-number[full-1]);
    }
    printf("Q3 = %f",q);
}


