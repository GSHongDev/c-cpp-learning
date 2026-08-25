#include <stdio.h>
//变量的作用域和生命周期

extern int a;

int main() {
    printf("global_a = %d\n", a);
    return 0;
}
