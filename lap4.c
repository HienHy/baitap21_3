#include<stdio.h>

int main() {
    char ch;
    do{
       printf("nhap ki tu can kiem tra : ");
        fflush(stdin);
        scanf("%c",&ch);
        if(ch>=97 && ch<=122){
            printf("Ki tu ban nhap la chu thuong\n");
        } else if(ch>=65 && ch<=90){
            printf("Ki tu ban nhap la chu hoa\n");
        }else if(ch>=48 && ch<=57){
            printf("Ki tu ban nhap la so\n");
        }else{
            printf("Ki tu ban nhap la ki tu dac biet\n");
        }
    }
    while(ch!=32);
    printf("Chuong trinh da dung do chua dau cach");}
	
	
	


	

