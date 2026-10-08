//
// Created by Hive on 2026/10/8.
//
// 1.初识C语言
// 1.1什么是C语言
// 1.2

#include <stdio.h>
// //第一个C语言代码
// int main()
// {
//     printf("Hello World\n");
//
//     return 0;
// }

// //常见数据类型
// int main()
// {
//     printf("%d\n",sizeof(char));
//     printf("%d\n",sizeof(short));
//     printf("%d\n",sizeof(int));
//     printf("%d\n",sizeof(long));
//     printf("%d\n",sizeof(long long));
//     printf("%d\n",sizeof(float));
//     printf("%d\n",sizeof(double));
//     return 0;
// }


// // 全局变量：定义在{}外的变量
// // 局部变量：定义在{}内的变量
// // 局部变量优先原则
// int b = 20;//全局变量
//
// int main(){
//
//     int a = 10;//局部变量
//
//     printf ("a = %d\n",a);
//     printf ("b = %d\n",b);
//
//     return 0;
// }

//写一个函数，实现两个整数的相加，并输出结果
int main()
{
    int a = 0;
    int b = 0;

    scanf("%d %d",&a,&b);

    int c = a + b;

    printf("a + b = %d\n",c);
    return 0;
}