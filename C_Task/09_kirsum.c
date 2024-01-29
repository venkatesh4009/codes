#include <stdio.h>

int main() {
    int i1, i2, i3, i4, i5, i6,sum;

    printf("Enter the values of current:\n");
    scanf("%d%d%d%d%d%d", &i1, &i2, &i3, &i4, &i5, &i6);

    sum=i1+i2-i3+i4+i5-i6;
    printf("sum of current:%d",sum);
    return 0;
}
