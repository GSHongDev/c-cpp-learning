//
// Created by Hive on 2026/10/10.
//

#include <stdio.h>

// //局部变量的作用域
// int main()
// {
//
//     int a = 10;
//     {
//         int b = 20;
//         printf("b = %d\n",b);
//         printf("a1 = %d\n",a);
//     }
//     printf("a2 = %d\n",a);
//
//     return 0;
// }

//全局变量的作用域
extern int a;
void test()
{
    printf("test()_a = %d\n",a);
}
int main()
{
    printf("main()_a = %d\n",a);
    test();
    return 0;
}