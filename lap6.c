#include<stdio.h>
int main(){
    int N,i,k;
    char ch;
    printf("Nhap bang cuu chuong mong muon N = ");
    scanf("%d",&N);
    for(i=1;i<=9;i++){
    k=N*i;
    printf("%d x %d = %d \n",N,i,k);}
        printf("de tiep tuc nhan'N'\n");
        printf("de dung lai nhan 'Y'\n");
        fflush(stdin);
        ch = getchar();
    while(ch=='N'){
            printf("Nhap bang cuu chuong mong muon N = ");
            scanf("%d",&N);
            for(i=1;i<=9;i++){
             k=N*i;
             printf("%d x %d = %d \n",N,i,k);}
             printf("de tiep tuc nhan'N'\n");
             printf("de dung lai nhan 'Y'\n");
             fflush(stdin);
             ch = getchar();
             } if(ch=='Y'){
                 printf("ket thuc chuong trinh");}}
