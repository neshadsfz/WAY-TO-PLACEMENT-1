#include <stdio.h>
#include <iostream>
using namespace std;
int floorSearch(int arr[], int low, int high, int x) {
	if (low > high) return -1;
	if (x >= arr[high]) return high;
	int mid = (low + high) / 2;
	if (arr[mid] == x) return mid;
	if (mid > 0 && arr[mid - 1] <= x && x < arr[mid]) return mid - 1;
	if (x < arr[mid]) return floorSearch(arr, low, mid - 1, x);
	return floorSearch(arr, mid + 1, high, x);
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
	cin >> m;
	printf("Minimum time = ");
	int index = floorSearch(arr, 0, num - 1, m);
	if (index == -1)
		printf("Floor of %d doesn't exist in array ", m);
	else
		printf("Floor of %d is %d", m, arr[index]);
	return 0;
}

