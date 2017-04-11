#include <stdio.h>

int sum_array(int arr[], int n)
{
	if (n == -1) {
		return 0; 
	}
	return arr[n - 1] + sum_array(arr, n - 1); 
}

int n_fib(int a, int b, int n)
{
	return n + n_fib(n - 1);
}

int main()
{
	int n = 5;
	int arr[] = {1, 4, 3, 6, 5}; 
	printf("Сумма массва = %d\n", sum_array(arr, n));
	printf("%d-ый элемент = %d", n, n_fib(arr[0], arr[1], n));

	return 0;
}
