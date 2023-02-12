// 13.	Find sum of first k digits after decimal. For k=3 output 3+1+5=9.
#include <stdio.h>
#include<math.h>

int main() {
    double input = 3452.3156735;
    int k = 3;
    int sum = 0;

    int decimal = (int)(input * (pow(10, k)));
    for (int i = 0; i < k; i++) {
        sum += decimal % 10;
        decimal /= 10;
    }

    printf("The sum of the first %d digits after the decimal point is: %d\n", k, sum);

    return 0;
}