#include "main.h"

int sum_array_rec(int arr[], int n)
{
	if (n == 0) {
		return 0; 
	}
	return arr[n - 1] + sum_array_rec(arr, n - 1); 
}

int sum_array_it(int arr[], int n, int count)
{
	if (n == 0) {
		return count;
	}
	return sum_array_it(arr, n - 1, count + arr[n - 1]);
}
