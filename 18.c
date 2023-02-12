#include <stdio.h>
// write me a c program to exchange last 2 digit 
int main() {
    int num, last_digit, second_last_digit, exchanged_num;
    printf("Enter a number: ");
    scanf("%d", &num);

    last_digit = num % 10;
    second_last_digit = (num / 10) % 10;

    // exchanged_num = (num / 100) * 100 + last_digit * 10 + second_last_digit;
    exchanged_num=(num/100)*100 +num % 10 *10+(num / 10) % 10;

    printf("The number with last two digits exchanged is: %d", exchanged_num);
    return 0;
}
