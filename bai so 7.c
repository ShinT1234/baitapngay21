#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
int a(int n) {
    if (n < 0) {
        return -1;
    } else if (n == 0 || n == 1) {
        return n;
    } else {
        return a(n - 1) + a(n - 2);
    }
}
{
 int i;
    printf(" day so Fibonacci: \n");
        for (i = 0; i < 9; i++) {
        printf("%d ", a(i));
    }
}
	return 0;
}
