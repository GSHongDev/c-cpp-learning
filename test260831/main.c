
//practice

// //BC6
// #include <stdio.h>
// int main(){
//     printf("     **     \n");
//     printf("     **     \n");
//     printf("************\n");
//     printf("************\n");
//     printf("    *  *\n");
//     printf("    *  *\n");
//     return 0;
// }
//
// //BC41
// int main(){
//     int iq = 0;
//     while (scanf("%d",&iq) != EOF) {
//         if (iq >= 140) {
//             printf("Genius\n");
//         }
//     }
//     return 0;
// }

// //BC31
// #include <stdio.h>
// int main(){
//     printf("I lost my cellphone!\n");
//     return 0;
// }

// //BC17
// #include <stdio.h>
// int main(){
//     int a = 40;
//     int c = 212;
//     int r = 0;
//     r = (-8+22) * a - 10 + c / 2;
//     printf("%d",r);
//     return 0;
// }

// //The output of the following code is: ( 1 )
// #include <stdio.h>
// int num = 10;
// int main()
// {
//     int num = 1;
//     printf("num = %d\n", num);
//     return 0;
// }

// //The output of the following code is: ( random value )
// #include <stdio.h>
// #include <string.h>
//
// int main()
// {
//     char arr[] = {'b', 'i', 't'};
//     printf("%d\n", strlen(arr));
//     return 0;
// }

// //The output of the following code is: ( 7 )
// #include <stdio.h>
// #include <string.h>
// int main()
// {
//     printf("%d\n", strlen("c:\test\121"));
//     return 0;
// }

// //BC83
// #include <stdio.h>
//
// int main(){
//     int M = 0;
//     while (scanf("%d", &M) != EOF) {
//         if(0 == M%5){
//             printf("YES\n");
//         }
//         else {
//             printf("NO\n");
//         }
//     }
//     return 0;
// }

// //BC84
// #include <stdio.h>
// int main(){
//     int x = 0;
//     while (EOF != scanf("%d",&x)) {
//         if (x < 0) {
//             printf("1\n");
//         }
//         if (x > 0) {
//             printf("-1\n");
//         }
//         if (x == 0) {
//             printf("0\n");
//         }
//     }
//     return 0;
// }
//
// //BC18
// #include <stdio.h>
//
// int main() {
//     int a = 0;
//     int b = 0;
//     while (scanf("%d %d", &a, &b) != EOF) {
//         int c = a/b;
//         int d = a%b;
//         printf("%d %d\n",c,d);
//     }
//     return 0;
// }