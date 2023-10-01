#include <iostream>
#include <algorithm>
#include <vector>
#include <string>
//#include <numeric>

using namespace std;

class Point {
public:
	Point(float x, float y) {
		this->x = x;
		this->y = y;
	}

	float x;
	float y;

};

void Print(const vector<int>& v) {
	for (auto el : v) { cout << el << endl; }
}

void Print(int* arr, const int size) {
	for (int i = 0; i < size; i++) { cout << arr[i] << endl; }
}

void Print(const vector<Point>& p) {
	for (Point el: p) { 
		cout << "x: " << el.x << ", y: " << el.y << endl; 
	}
}


int main() {
	setlocale(0, "ru");
	
	vector<Point> p1 = {
		Point(1, 2),
		Point(3, 4),
		Point(5, 6)
	};

	vector<Point> p2 = {
	Point(1, 2),
	Point(3, 3),
	Point(7, 1)
	};

	cout << "Элементы первого вектора vector<Point>" << endl;
	Print(p1);
	cout << "Элементы второго вектора vector<Point>" << endl;
	Print(p2);

	bool result = equal(begin(p1), end(p1), begin(p2), end(p2), [](const Point& p1, const Point& p2) {
		return p1.x == p2.x && p2.y == p2.y;
		});

	cout << "Вектора равны: " << result << endl;

	return 0;
}
