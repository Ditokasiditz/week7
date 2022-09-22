//จงเขียนโปรแกรมแสดงผล Q3ของชุดข้อมูลที่ใส่เข้าไป (Level 3)

#include<stdio.h>

int main(){
    int number[20],i,n,j,a;
    printf("enter value of number:");
    scanf("%d",&n);
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
    printf("The numbers arranged in ascending order are given below \n");
        for (i = 0; i < n; ++i)
            printf("%d\n", number[i]);
return 0;
}
