//จงเขียนโปรแกรมแสดงผล Q3ของชุดข้อมูลที่ใส่เข้าไป (Level 3)

#include<stdio.h>



int main(){
    int number[20],i,v;
    printf("enter value of number:");
    scanf("%d",&v);
    for(i=0;i<v;i++) {scanf("%d",&number[i]);}

    for (i = 0; i < n; ++i){
        for (j = i + 1; j < n; ++j){
            if (number[i] > number[j]){
                a =  number[i];
                number[i] = number[j];
                number[j] = a;
                }
            }
        }
    

}