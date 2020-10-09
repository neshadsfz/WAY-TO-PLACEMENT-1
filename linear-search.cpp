#include <iostream>
using namespace std;
int search(int arr[], int n, int x) {
	int i;
	for (i = 0; i < n; i++)
		if (arr[i] == x) return i;
	return -1;
}
int main(void) {
	int num, x;
	cout << "Enter the number of elements = ";
	cin >> num;
	int arr[num + 1];
	cout << "Enter array data = ";
	for (int i = 0; i < num; i++) {
		cin >> arr[i];
	}
	cout << "Enter the number to be searched = ";
	cin >> x;
	int result = search(arr, num, x);
	(result == -1) ? cout << "Element is not present in array = "
		       : cout << "Element is present at index = " << result;
	return 0;
}
