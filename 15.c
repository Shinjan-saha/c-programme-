// 15.	Delete kth digit after decimal. For k=3 output 3452.316735.
#include <stdio.h>
#include<math.h>
int main() {
    double input = 3452.3156735;
    int k = 3;

    int decimal = (int)(input * (pow(10, k)));
    for (int i = 1; i < k; i++) {
        if(i==k-1){
            decimal /= 10;
        }else {
            decimal /= 10;
            int digit = decimal % 10;
            printf("%d", digit);
        }
    }
    double newNumber = (double)decimal / pow(10, k - 1);
    printf("The new number with the kth digit after the decimal point deleted is: %f\n", newNumber);

    return 0;
}
