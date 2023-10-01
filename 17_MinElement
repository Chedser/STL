#include <iostream>
#include <algorithm>
#include <vector>
#include <list>
#include <string>

using namespace std;

void Print(const vector<int>& v) {
	for (auto el : v) { cout << el << endl; }
}

void Print(const list<int>& v) {
	for (auto el : v) { cout << el << endl; }
}

void Print(int* arr, const int size) {
	for (int i = 0; i < size; i++) { cout << arr[i] << endl; }
}

int main() {
	setlocale(LC_ALL, "ru");

	vector<int> v = { 1, 2, 3, 4, 5 };
	list<int> lst = { 4, 2, 9, 77, 8, 11, 23 };
	const int SIZE = 3;
	int arr[] = { 2, 1, 3 };

	cout << "Элементы вектора" << endl;
	Print(v);
	auto result1 = max_element(v.begin(), v.end());
	cout << "Максимальный элемент вектора: " << *result1 << endl;

	cout << "Элементы списка" << endl;
	Print(lst);
	auto result2 = max_element(lst.begin(), lst.end());
	cout << "Максимальный элемент списка: " << *result2 << endl;

	cout << "Элементы массива" << endl;
	Print(arr, SIZE);
	auto result3 = max_element(arr, arr + SIZE);
	cout << "Максимальный элемент массива: " << *result3 << endl;

	return 0;
}
