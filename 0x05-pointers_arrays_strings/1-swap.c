#include "main.h"

/**
 * swap_int -swap values of a and b
 *
 * @a: pointer a
 * @b: pointer b
 */
void swap_int(int *a, int *b){
	int temp = *a;
	*a = *b;
	*b = temp;
}

int main() {
	int num1 =5;
	int num2 = 10;

	printf("Before swapping: num1 = %d, num2 = %d\n", num1, num2);
	swap_int(&num1, &num2);
	printf("After swapping: num1 = %d, num2 = %d\n", num1, num2);
	return 0;
}
	

