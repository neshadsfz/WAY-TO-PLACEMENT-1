#include <stdio.h>
#include <iostream>
using namespace std;
int floorSearch(int arr[], int n, int x) {
	if (x >= arr[n - 1]) return n - 1;
	if (x < arr[0]) return -1;
	for (int i = 1; i < n; i++)
		if (arr[i] > x) return (i - 1);

	return -1;
}
int main() {
	int num, m;
	printf("Enter the size of the array = ");
	cin >> num;
	int arr[num];
	printf("Enter elements = ");
	for (int i = 0; i < num; i++) {
		cin >> arr[i];
	}
	printf("Enter the value to be generated = ");
	cin>>m;
	printf("Minimum time = ");
	int index = floorSearch(arr, num - 1, m);
	if (index == -1)
		printf("Floor of %d doesn't exist in array ", m);
	else
		printf("Floor of %d is %d", m, arr[index]);
	return 0;
}

