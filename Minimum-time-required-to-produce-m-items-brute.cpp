#include <bits/stdc++.h>
using namespace std;
int minTime(int arr[], int n, int m) {
	int t = 0;
	while (1) {
		int items = 0;
		for (int i = 0; i < n; i++) items += (t / arr[i]);
		if (items >= m) return t;
		t++;
	}
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

