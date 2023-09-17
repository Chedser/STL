#include <iostream>
#include <algorithm>
#include <vector>
#include <string>

using namespace std;

class Person {

public:
	string name;
	int score;
	int age;
	Person(string name, int score, int age) {
		this->name = name;
		this->score = score;
		this->age = age;
	};
};

void Print(const vector<Person>& v) {
	for (auto el : v) {
		cout << "Имя:" << el.name << ", Очки: " << 
			el.score << ", Возраст:" << 
			el.age << endl;
	}
}


int main(){
	setlocale(LC_ALL, "ru");

	vector<Person> people{
		Person("Вася", 181, 30),
		Person("Петя", 30, 31),
		Person("Маша", 179, 25)
	};

	vector<Person> result;
	cout << "Всего элементов: \t" << result.size() << endl;
	copy(people.begin(), people.end(), back_inserter(result));
	cout << "Всего элементов после копирования: \t" << result.size() << endl;
	Print(result);

	result.clear();
	cout << "Очистка вектора результата. Копирование элементов по условию" << endl;
	copy_if(people.begin(), people.end(), back_inserter(result), [](const Person& p) {
		return p.age >= 30 && p.score > 180;
		});

	cout << "Элементы вектора результата" << endl;
	Print(result);

    return 0;
}
