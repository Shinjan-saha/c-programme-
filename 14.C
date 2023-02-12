// 14.	Sum of k digits before decimal. For k=3 output 2+5+4=11.
#include <stdio.h>

int main() {
    double input = 3452.3156735;
    int k = 3;
    int sum = 0;

    int whole = (int)input;
    for (int i = 0; i < k; i++) {
        sum += whole % 10;
        whole /= 10;
    }

    printf("The sum of the first %d digits before the decimal point is: %d\n", k, sum);

    return 0;
}