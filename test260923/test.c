//
// Created by Hive on 2026/9/23.
//

#include <stdio.h>
// 单目操作符：只有一个操作数的操作符
int main() {
    int arr[10] = {1,2,3,4,5,6,7,8,9,10};
    size_t size = sizeof(arr)/sizeof(arr[0]);
    for(int i = 0; i < size; i++) {
        printf("%d\n", arr[i]);
    }
    return 0;
}
