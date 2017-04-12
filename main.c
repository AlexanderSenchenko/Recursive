#include <stdio.h>

int sum_array(int arr[], int n)
{
	if (n == 0) {
		return 0; 
	}
	return arr[n - 1] + sum_array(arr, n - 1); 
}
//1)4 2)4 3)8 4)12 5)20 6)32
int n_fib(int a, int b, int n)
{
	if (n == 1) {
		return a + b;
	}
	return n_fib(b, a + b, n - 1);
}

int main()
{
	int n = 5, m = 6;
	int arr[] = {4, 4, 3, 7, 6}; 
	printf("Сумма массва = %d\n", sum_array(arr, n));
	printf("%d-ый элемент = %d\n", m, n_fib(arr[0], arr[1], m - 2));

	return 0;
}
