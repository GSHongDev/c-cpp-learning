//
// Created by Hive on 2026/10/13.
//

#include <stdio.h>

//指针
// //初识
// int main()
// {
//     int a = 10;
//     //& 取地址操作符
//     int* pa = &a;
//     printf("%d\n", a);
//     //* 解引用操作符
//     *pa = 20;
//     printf("%d\n", a);
//
//
//     return 0;
// }

// //指针大小
// int main()
// {
//     printf("%d\n",sizeof(int*));
//     printf("%d\n",sizeof(char*));
//     printf("%d\n",sizeof(long*));
//     printf("%d\n",sizeof(long long*));
//     printf("%d\n",sizeof(float*));
//     printf("%d\n",sizeof(double*));
//
//     return 0;
// }

// //结构体
// int main()
// {
//     struct student
//     {
//         char name[20];
//         int age;
//         float score;
//     };
//
//     struct student st = {"Joe",18,88.5};
//     printf("Student info:\n");
//
//     // //做法1：结构体变量.结构体成员变量
//     // printf("Student Name: %s\n", st.name);
//     // printf("Student Age: %d\n", st.age);
//     // printf("Student Score: %f\n", st.score);
//
//     //做法2：结构体指针->结构体成员变量
//     struct student* ps1 = &st;
//     ps1->age = 18;
//     ps1->score = 88.5;
//     printf("Student info:\n");
//     printf("Student Name: %s\n", ps1->name);
//     printf("Student Age: %d\n", ps1->age);
//     printf("Student Score: %f\n", ps1->score);
//     return 0;
// }