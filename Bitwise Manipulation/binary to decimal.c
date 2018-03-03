#include <stdio.h>
void main()
{
    long num, decimal_num, remainder, base = 1, binary = 0, no_of_1s = 0;

    printf("Enter a decimal integer \n");
    scanf("%ld", &num);
    decimal_num = num;

    while (num > 0)
    {
        // num = 5, rem = 1
        // num = 2, rem = 0
        // num = 1, rem = 1
        // num = 0, out of loop

        remainder = num % 2;

        if (remainder == 1)
        {
            no_of_1s++;
        }

        // binary = binary + 1*1
        // binary = 1 + 0*10
        // binary = 1 + 1*100 = 101

        binary = binary + remainder * base;
        num = num / 2;
        base = base * 10;
    }
    printf("Input number is = %d\n", decimal_num);
    printf("Its binary equivalent is = %ld\n", binary);
    printf("No.of 1's in the binary number is = %d\n", no_of_1s);
}
