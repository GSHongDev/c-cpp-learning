#include <stdio.h>
//变量的作用域和生命周期
//作用域
//局部变量：局部变量所在的局部范围
//全局变量：整个工程

//生命周期
//局部变量：进入作用域生命周期开始，出作用域生命周期结束
//全局变量：整个程序的生命周期

extern int a;

int main() {
    printf("global_a = %d\n", a);
    return 0;
}
