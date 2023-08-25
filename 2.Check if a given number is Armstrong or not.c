#include <stdio.h>
#include <math.h>

int isArmstrong(int num) {
    int originalNum = num;
    int numDigits = 0;
    while (originalNum != 0) {
        originalNum /= 10;
        numDigits++;
    }
    
    originalNum = num;
    int sum = 0;
    while (originalNum != 0) {
        int digit = originalNum % 10;
        sum += pow(digit, numDigits);
        originalNum /= 10;
    }
    
    return (sum == num);
}

int main() {
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    
    if (isArmstrong(num)) {
        printf("%d is an Armstrong number.\n", num);
    } else {
        printf("%d is not an Armstrong number.\n", num);
    }
    
    return 0;
}
