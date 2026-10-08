//
// Created by Hive on 2026/9/29.
//

#include <stdio.h>

//栈区：具有临时属性
//堆区：动态内存管理
//静态区：全局变量、静态变量

// //1.static 修饰局部变量
//
// void test() {
//     static int i = 1;
//     i++;
//     printf("%d ", i);
// }
//
// int main() {
//     int i = 0;
//     while (i < 5) {
//         test();
//         i++;
//     }
//     return 0;
// }

//2.static 修饰全局变量
//语法层面上进行限制，static修饰的全局变量仍然存在静态区

// //3.static 修饰函数
// //函数也是具有外部链接属性的；
// //这种属性决定了函数是可以跨文件使用的
// //static 修饰函数是把函数的外部连接属性修改成内部链接属性，使得函数只能在自己所在的文件内使用
// extern int Add(int x, int y);
// int main() {
//     int a = 3;
//     int b = 4;
//     int c = Add(a, b);
//     printf("%d", c);
//     return 0;
// }

// // #define定义的标识符常量
// #define M 100
// #define CH 'w'
//
// int main()
// {
//     int a = M;
//     printf("%d\n", M);
//     printf("%c\n", CH);
//     printf("%d\n", a);
//     return 0;
// }

// //#define 定义宏
// //宏可以有参数
//
// extern int Add(int x, int y);
// #define ADD(x,y) (x+y)
// //       宏的名字  宏的主体
// int main()
// {
//     int a = 3;
//     int b = 5;
//     int c = ADD(a,b);
//     int d = Add(a,b);
//
//     printf("c = %d\n",c);
//     printf("d = %d\n",d);
//     return 0;
// }

//指针
