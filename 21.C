// write me a c program to print second last digit of a integer
#include<stdio.h>
int main() {
    int num, second_last_digit;
    printf("Enter a number: ");
    scanf("%d", &num);
    second_last_digit = (num / 10) % 10;
    printf("Second last digit of %d is %d", num, second_last_digit);
    return 0;
}
