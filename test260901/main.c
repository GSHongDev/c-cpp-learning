#include <stdio.h>

int Max(int a, int b) {
    if (a > b) {
        return a;
    }
    return b;
}

int main() {
    int a = 0;
    int b = 0; 
    //Input
    scanf("%d %d", &a, &b);
    //Function
    Max();
    //Output
    return 0;
}