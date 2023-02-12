#include <stdio.h>
#include<math.h>
// write a program in c to read one more integer (k) and print kth last digit 
int main() {
    int num, k, kth_last_digit;
    printf("Enter a number: ");
    scanf("%d", &num);
    printf("Enter the kth last digit you want to find: ");
    scanf("%d", &k);
    // kth_last_digit = (num / (int)(pow(10,k))) % 10;
    // printf("%dth last digit of %d is %d", k, num, kth_last_digit);
    int j=10*k;

kth_last_digit=(num/j)%10;
printf("%d",kth_last_digit);
    return 0;
}
// int main() {
//     int num=2134674, k, kth_last_digit;
//     printf("Enter the kth last digit you want to find: ");
//     scanf("%d", &k);
//     kth_last_digit = (num / (int)(pow(10,k-1))) % 10;
//     printf("%dth last digit of %d is %d", k, num, kth_last_digit);
//     return 0;
// }
