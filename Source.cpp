#include<stdio.h>
#include<iostream>
using namespace std;
void swap(int* a, int* b) {
	int temp = *a;
	*a = *b;
	*b = temp;
}
int main() {
	const int N = 5;
	int arr[N];
	printf("MAX OR MIN : ");
	string str;
	cin >> str;
	for (int i = 0; i < N  ; i++) {
		scanf_s("%d", &arr[i]);
	}
	for (int i = 0; i < N - 1; i++) {
		for (int j = 0; j < N - i-1; j++) {
			if (arr[j] > arr[j + 1]) {
				swap(&arr[j], &arr[j + 1]);
			}
		}
	}
	if (str == "MAX" || str == "MIN" ||str=="min"||str=="max") {
		if (str == "MAX")
			printf("%d", arr[4]);
		else if (str == "MIN")
			printf("%d", arr[0]);
	}
	else
		printf("GG");
}