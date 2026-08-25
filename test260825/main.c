#include <stdio.h>
#include <string.h>
//变量的作用域和生命周期
//作用域
//局部变量：局部变量所在的局部范围
//全局变量：整个工程

//生命周期
//局部变量：进入作用域生命周期开始，出作用域生命周期结束
//全局变量：整个程序的生命周期
//
// extern int a;
//
// int main() {
//     printf("global_a = %d\n", a);
//     return 0;
// }


//常量：字面常量，const修饰的常变量，#define定义的标识符常量，枚举常量
//const修饰的常变量
// int main() {
//     const int a = 10; //const修饰的常变量，但a还是变量
//     printf("a = %d\n", a);
//
//     a = 100;
//     printf("a = %d\n", a);
//     return 0;
// }
//证明：
// int main() {
//     int arr[10] = {0};
//     const int n = 10;
//     int arr2[n] = {0};
//
//     return 0;
// }

// //#define定义的标识符常量
// #define M 100
// int main() {
//     int a = M;
//     printf("a = %d\n", a);
//     printf("M = %d\n", M);
//     int arr1[M] = {0};
//     return 0;
// }

// //枚举常量：一一列举
// //enum：枚举关键字
// enum Color {
//     RED,
//     GREEN,
//     BLUE
// };
// int main() {
//     enum Color c = RED;
//     return 0;
// }

// //strlen：库函数，求字符串长度，统计字符串中'\0'之前字符的个数
// int main() {
//     char arr1[] = "abcdef";
//     char arr2[] = {'a', 'b', 'c','d','e','f'};
//
//     printf("%s\n", arr1);
//     printf("%s\n", arr2);
//
//     printf("\n");
//
//     printf("%d\n", strlen(arr1));
//     printf("%d\n", strlen(arr2));//随机值
//     return 0;
// }

//转义字符
// /?
// int main() {
//     printf("(are you ok \?\?)\n");//三字母词
//     printf("(are you ok ??)\n");//三字母词
//     return 0;
// }

// \t水平制表符
// int main() {
//     printf("a\ta\ta\n");
//     printf("b\tb\tb\n");
//     printf("c\tc\tc\n");
//     return 0;
// }

// // \ddd：d d d表示1~3个八进制的数字
// // \xdd：d d表示2个十六进制数字
// // ASCII表：0 ~ 127
// int main() {
//     printf("%c\n",'\x30');
//     return 0;
// }

//C语言；结构化的程序设计语言，顺序结构，选择结构，循环结构
//
// int main() {
//
//     int input = 0;
//     printf("加入比特\n");
//     printf("打算好好学习吗？（1/0）\n");
//     scanf("%d", &input);
//     if (input == 1) {
//         printf("好offer\n");
//     }
//
//     else if (input == 0) {
//         printf("卖红薯\n");
//     }
// }

int main() {
    printf("test\n");
    return 0;
}