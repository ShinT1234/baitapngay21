#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int n, i, a[100], max, min;

            printf("Nhap so phan tu cua day N = ");

            scanf("%d",&n);

            for(i=1; i<=n; i++) {

                        printf("a[%d]: ",i);

                        scanf("%d",&a[i]);

            }

            max=a[1];

            for(i=1; i<=n; i++) {

                        if(a[i]>max) {

                                    max=a[i];

                        }

            }

            printf("\nSo lon nhat trong day la: %d", max);

            min=a[1];

            for(i=1; i<=n; i++) {

                        if(a[i]<min) {

                                    min=a[i];

                        }

            }

            printf("\nSo nho nhat trong day la: %d", min);


	return 0;
}
