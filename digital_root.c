// 🔢 Problem Statement
// Print the sum of digits of a number until the sum becomes a single digit.
// (Also called the digital root problem.)

// 🧠 Example
// If input is 9875,
// → 9 + 8 + 7 + 5 = 29
// → 2 + 9 = 11
// → 1 + 1 = 2
// ✅ Final output: 2


#include <stdio.h>

int main() {
    int num,digit;
    printf("enter a number\n");
    scanf("%d", &num);
    
    while (num>9)
    {
        int sum=0;
        while (num>0)
        {
            
            digit = num % 10;
            sum += digit;
            num = num/10;
        }
        printf("%d\n",sum);
        num = sum;
    }
    return 0;
}