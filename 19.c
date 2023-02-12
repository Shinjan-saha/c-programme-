#include <stdio.h>
// write me a c program to exchange last & third last 
int main() {
    int num, last_digit, third_last_digit, exchanged_num;
    printf("Enter a number: ");
    scanf("%d", &num);

    last_digit = num % 10;
    third_last_digit = (num / 100) % 10;

    // exchanged_num = (num / 1000) * 1000 + last_digit * 100 + third_last_digit*10 + (num/10)%10;
    exchanged_num=(num / 1000) * 1000 + last_digit * 100 + third_last_digit;
    printf("The number with last and third last digits exchanged is: %d", exchanged_num);
    return 0;
}
