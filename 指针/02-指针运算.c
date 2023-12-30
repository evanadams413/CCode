#include <stdio.h>

int main() {
    int x = 1;
    int *p = &x;
    printf("*p = %d\n", *p);
    printf("*p = %d\n", ++*p);
    printf("*p = %d\n", (*p)++);    // ...(pointer)operator...
    printf("*p = %d\n", *p);
    
    return 0;
}
