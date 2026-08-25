#include <stdio.h>

//初识C语言
// 1.main - 固定的名字
// 主函数：程序的入口，写的C语言代码都是从main函数的第一行开始执行的；
// main函数是必须有的，但是有且只有一个
// C语言中所有的字符都是英文的字符
// int是整型

//2. printf：库函数，C语言标准库中提供的一个现成函数，可以直接使用，功能是在屏幕上打印信息
//库函数的使用，是需要包含头文件的，printf需要的头文件：stdio.h

int main() {
    printf("Hello World!\n");
    return 0;
}


// main函数的其他写法

//1.非常古老的写法 - 不推荐
// void main () {
//     //......
// }

//2.明确main函数不接收参数
// int main(void) { //void是在明确main函数不接收参数
//     //......
//     return 0;
// }

//3.明确指定main函数参数
// int main(int argc, char *argv[]) {
//     //.....
//     return 0;
// }