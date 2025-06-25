#include <stdio.h>

int main() {
    int size,a[100],temp_swap,first_letter_1,first_letter_2,i;
    printf("enter size of an array\n");
    scanf("%d", &size);
    printf("enter %d elements here\n",size);
    for ( i = 0; i < size; i++)
    {
        scanf("%d", &a[i]);
    }
    for (i = 0; i < size-1; i++)
    {
        int num1=a[i],num2=a[i+1],digit1,digit2;      
            while (num1>0)
            {
                digit1 = num1 % 10;  // digit1 = 1
                num1 /= 10;
            }
            while (num2>0)
            {
                digit2 = num2 % 10;  //digit2 = 2
                num2 /= 10;
            }
        
        if (digit1<digit2)
        {
            temp_swap = a[i];
            a[i] = a[i+1];
            a[i+1] = temp_swap;
        }
        
        
    }
        for ( i = 0; i < size; i++)
        {
            printf("%d",a[i]);
        }
        
    return 0;
}
