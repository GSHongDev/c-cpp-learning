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

// //全局变量的作用域
// extern int a;
// void test()
// {
//     printf("test()_a = %d\n",a);
// }
// int main()
// {
//     printf("main()_a = %d\n",a);
//     test();
//     return 0;
// }

// //常量
// int main()
// {
//     const int a = 10;
//     printf("a = %d\n", a);
//     // a = 100;
//     // printf("a = %d\n", a);
//      // int arr[a]= {0}; //C++内可以
//
//     return 0;
// }

// int main()
// {
//     enum Color { RED, GREEN, BLUE };//枚举常量
//
//     enum Color color1 = RED;
//     enum Color color2 = GREEN;
//     enum Color color3 = BLUE;
//
//     return 0;
// }

//字符串
int main()
{
    char arr1[] = {'a','b','c','d','e'};
    char arr2[] = {"abcde"};
    printf("%s\n", arr1);
    printf("%s\n", arr2);
    return 0;
}