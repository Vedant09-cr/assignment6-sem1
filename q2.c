#include <stdio.h>

int main(){
    int a = 0, b = 1, c;
    int n, i;

    printf("enter a number: ");
    scanf("%d", &n);

    for(i = 1; i <= n; i++){
        printf("%d ", a);
        c = a + b;
        a = b;
        b = c;
    }
 return 0;
}