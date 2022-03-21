#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	char kitu;
    printf("nhap a\n");
    scanf("%d" , &kitu);
    while(kitu != ' '){
        if(kitu>='a' && kitu<='z'|| kitu>='A' && kitu<='Z' ){
            printf("Day la chu cai\n");
        }if(kitu>=0 && kitu<=1000){
            printf("Day la chu so\n");
        }printf("Day la ki tu dac biet");
        break;
    }
	return 0;
}
