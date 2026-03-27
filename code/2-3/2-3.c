#include <stdio.h>
#include <string.h>

int main() {
    char a[64] = "Hello";
    char b[64] = "world";
    char c[128];

    int len = strlen(a);
    printf("length of a: %d\n", len);

    strcpy(c, a);
    printf("a: %s, c: %s\n", a, c);

    strcat(c, " ");
    strcat(c, b);
    printf("c: %s\n", c);

    int cmp1 = strcmp(a, a);
    int cmp2 = strcmp(a, b);
    printf("strcmp(%s, %s) = %d\n", a, a, cmp1 > 0 ? 1 : (cmp1 < 0 ? -1 : 0));
    printf("strcmp(%s, %s) = %d\n", a, b, cmp2 > 0 ? 1 : (cmp2 < 0 ? -1 : 0));
    return 0;
}
