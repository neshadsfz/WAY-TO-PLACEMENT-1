#include <bits/stdc++.h>
using namespace std;
int findItems(int arr[], int n, int temp) {
	int ans = 0;
	for (int i = 0; i < n; i++) ans += (temp / arr[i]);
	return ans;
}
int bs(int arr[], int n, int m, int high) {
	int low = 1;
	while (low < high) {
		int mid = (low + high) >> 1;
		int itm = findItems(arr, n, mid);
		if (itm < m)
			low = mid + 1;
		else
			high = mid;
	}

	return high;
}
int minTime(int arr[], int n, int m) {
	int maxval = INT_MIN;
	for (int i = 0; i < n; i++) maxval = max(maxval, arr[i]);
	return bs(arr, n, m, maxval * m);
}
int main() {
	int num, m;
	cout << "Enter the size of the array = ";
	cin >> num;
	int arr[num];
	cout << "Enter elements = ";
	for (int i = 0; i < num; i++) {
		cin >> arr[i];
	}
	cout << "Enter the value to be generated = ";
	cin >> m;
	cout << "Minimum time = ";
	cout << minTime(arr, num, m) << endl;

	return 0;
}
