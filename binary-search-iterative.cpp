#include <iostream>
using namespace std;
int binarySearch(int num, int startingPoint, int endPoint, int arr[]) {
	while (endPoint >= startingPoint) {
		int mid = (startingPoint + endPoint) / 2;
		if (arr[mid] == num) {
			return mid;
		}
		if (arr[mid] > num) {
			endPoint = mid - 1;
		}
		if (arr[mid] < num) {
			startingPoint = mid + 1;
		}
	}
	return 0;
}
int main() {
	int a, num;
	cout << "Input array size = ";
	cin >> a;
	int arr[a];
	cout << "Input array elements = ";
	for (int i = 0; i < a; i++) {
		cin >> arr[i];
	}
	cout << "Input the number to be searched = ";
	cin >> num;
	cout << binarySearch(num, 0, a - 1, arr);
	return 0;
}
