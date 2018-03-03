#include <stdio.h>

int myAtoi(char *str)
{
    int result = 0; // Initialize result
    // str[0] = 5
    // str[1] = 4
    // str[2] = 3
    // str[3] = 2

    printf("%d\n", str[0] - '0'); // prints 5

    // Iterate through all characters of input string and
    // update result
    for (int i = 0; str[i] != '\0'; i++)
        result = result*10 + (str[i] - '0');
    return result;
}

// Driver program to test above function
int main()
{
    char str[] = "5432";
    int val = myAtoi(str);
    printf ("%d ", val);
    return 0;
}
