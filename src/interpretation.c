#include "main.h"

char* interpretation(char* word, int a, int n)
{
	if (n < 0) {
		return 0;
	}
	word[n - 1] = a % 10 + '0';
	return interpretation(word, a / 10, n - 1);
}

int rank(int a)
{
	int n = 0;
	while (a > 0) {
		n++;
		a = a / 10;
	}
	return n;
}

char* may_itoa(int a)
{
	char *word;
	int n = rank(a);
	word = malloc(sizeof(char) * n);
	interpretation(word, a, n);
	return word;
}
