//
// Created by Hive on 2026/10/12.
//

#include <math.h>
#include <stdio.h>

// //数组
// int main()
// {
//     int arr[10] = {1,2,3,4,5,6,7,8,9,10};
//     for (int i = 0; i < sizeof(arr)/sizeof(arr[1]); i++)
//     {
//         printf("%d\n", arr[i]);
//     }
//     return 0;
// }

// // 前置++，先使用，后 +1
// // 后置++，先 +1，后使用
// // 前置、后置加加减减，不要过于复杂；
// int main()
// {
//     int a = 0;
//     // int b = ++a;
//     // printf("a =  %d\n", a); // a = 1;
//     // printf("b = %d\n", b); // b = 1;
//
//     int b = a++;
//     printf("a = %d\n", a); // a = 1;
//     printf("b = %d\n", b); // b = 0;
//     return 0;
// }

// //逻辑运算符
// //&& ||
// int main()
// {
//     int month = 0;
//     scanf("%d",&month);
//     if (month >= 3 && month <= 5)
//     {
//         printf("Spring\n");
//     }
//
//     else if (month >= 6 && month <= 8)
//     {
//         printf("Summer\n");
//     }
//     else if (month == 1 || month == 2 || month == 12)
//     {
//         printf("Winter\n");
//     }
//     else if (month >=9 && month <= 11)
//     {
//         printf("Autumn\n");
//     }
//     return 0;
// }

//下标引用、函数调用
int Add(int a, int b)
{
    return a + b;
}

int main()
{
    int arr1[10]={1,2,3,4,5,6,7,8,9,10};
    printf("%d",arr1[10]);//[] 下标引用操作符

    int z = Add(2,3);// () 函数调用操作符，Add,2,3是()的操作数
    return 0;
}