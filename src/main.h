#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <stdlib.h>

//task 1
int sum_array_rec(int arr[], int n);
int sum_array_it(int arr[], int n, int count);
//task 2
int fib_rec_count(int a, int b, int n);
int fib_rec(int n);
int fib_it_count(int a, int b, int n);
int fib_it(int n);
//task 3
char* interpretation(char* word, int a, int n);
int rank(int a);
char* may_itoa(int a);

#endif
