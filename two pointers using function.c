#include <stdio.h>

int remainder(int *a, int *b) {
    return *a % *b;
}

int main() {
int x,y;
printf("\n the two numbers that you would like to give is :\n");
scanf("%d %d",&x,&y);
    int result = remainder(&x, &y);
    printf("Remainder of %d divided by %d is %d\n", x, y, result);
    return 0;
}
