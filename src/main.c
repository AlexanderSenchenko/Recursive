#include "main.h"

int main()
{
	int arr[] = {-4, -4, 3, 7, 6}, n, m = 8, count = 0;
	n = sizeof(arr) / sizeof(int);
	printf("Array: ");
	for (int i = 0; i < sizeof(arr) / sizeof(int); i++) {
		printf("%d ", arr[i]);
	}
	//task 1
	printf("\ntask 1\nСумма массва(рекурсия) = %d\n", sum_array_rec(arr, n));
	printf("Сумма массва(итерация) = %d\n", sum_array_it(arr, n, count));
	//task 2
	printf("task 2\n%d-ой элемент(рекурсия) = %d\n", m, fib_rec(m));
	printf("%d-ой элемент(итерация) = %d\n", m, fib_it(m));
	//task 3
	printf("task 3\n%s\n", may_itoa(123));

	return 0;
}
