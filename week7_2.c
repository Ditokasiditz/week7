#include<stdio.h>

float median(int a[],int start,int end){
    float med;
    int len;
    len=end-start+1;
    if(len%2==0){
        med=((a[start+len/2-1]+a[start+len/2])/2.000);
    }
    else{
        med=(a[start+len/2]/1.0000);
    }
    return med;
}

int main(){
    int number[20],n,i,a,j;
    float Q3;
    printf("enter the value of numbers:");
    scanf("%d",&n);
    for(i=0;i<n;i++){
        scanf("%d",&number[i]);
    }

    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            if(number[i]<number[j]){
                a=number[j];
                number[j]=number[i];
                number[i]=a;
            }
        }
    }

    if(n%2==0){
        Q3 = median(number, n/2, n-1);   
    }
    else{
        Q3 = median(number, n/2+1, n-1);    
    }
    printf("Q3 = %f",Q3);
}