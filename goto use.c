#include <stdio.h>

void main() {
	int intNum1 = 0, intNum2 = 10;
	if (intNum1 == 0)
		goto error1;

	if (intNum2 == 0)
		goto error2;

	// below two lines will be executed if both the numbers are non-zero, else it will continue executing any one of the label
	int result = intNum1 / intNum2;
	printf("Result is %d", result);
	goto end;

	error1: printf("\nFirst number is zero and hence result will be zero"); //goto end;
	error2: printf("\nResults in Division by zero!"); goto end;

    end: printf("\nEnd of the program!");
}
