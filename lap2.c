#include<stdio.h>
int main(){
int n,s,a;
   s = 0;
    printf("Nhap n: ");
    scanf("%d",&n);
    for(;n!=0;){
        a = n % 10;
        s += a;
        n /= 10;}
    printf("%d",s);}
