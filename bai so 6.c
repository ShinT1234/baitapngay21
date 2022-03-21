#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	 int N,i,k;
    char ch;
    printf("Nhap bang cuu chuong mong muon N = ");
    scanf("%d",&N);
    for(i=1;i<=10;i++){
    k=N*i;
    printf("%d%d=%d\n",N,i,k);}
        printf("de tiep tuc nhan'N'\n");
        printf("de dung lai nhan 'Y'\n");
        fflush(stdin);
        ch = getchar();
    while(ch=='N'){
            printf("Nhap bang cuu chuong mong muon N = ");
            scanf("%d",&N);
            for(i=1;i<=10;i++){
             k=N*i;
             printf("%d%d=%d\n",N,i,k);}
             } if(ch=='Y'){
                 printf("ket thuc chuong trinh");}
	return 0;
}
