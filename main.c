#include <stdio.h>
#include <stdlib.h>

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

char* may_itoa(uint32_t a, char* word, int i)
{
	int b = a % 10;
	word[0] = b;
	if (a >= 10) {
		a = (a - b) / 10;
	} else {
		for (int y = 0; y < i / 2; y++, i--) {
			char c = word[i];
			word[i] = word[y];
			word[y] = c;
		}
		return word;
	}
	return may_itoa(a, word, i++);
}

int main()
{
	int n = 5, m = 6;
	int arr[] = {4, 4, 3, 7, 6}; 
	printf("Сумма массва = %d\n", sum_array(arr, n));
	printf("%d-ый элемент = %d\n", m, n_fib(arr[0], arr[1], m - 2));

	char *word = malloc(sizeof(char) * 10);
	word = may_itoa(123, word, 0);
	printf("%s\n", word);

	return 0;
}
