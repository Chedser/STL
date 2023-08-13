#include <iostream>
#include <list>

using namespace std;

template<typename T> void PrintList(const list<T>& lst) {
    for (auto it = lst.cbegin(); it != lst.cend(); it++) {
        cout << *it << endl;
        //*it = 999; Нельзя!
    }
}

int main(){
    setlocale(LC_ALL, "ru");
    
    list<int> lst = {1, 2, 3,};
    lst.push_back(4);
    lst.push_front(5);

    list<int>::iterator it = lst.begin();
    //auto it = lst.begin();

    cout << "Элементы до сортировки" << endl;
    PrintList<int>(lst);
    cout << endl;
    
    lst.sort(); // Сортировка по возрастанию
    cout << "Элементы после сортировки (по возрастанию)" << endl;
    PrintList<int>(lst);
    cout << endl;

    cout << "pop_front" << endl;
    lst.pop_front();
    PrintList<int>(lst);
    cout << endl;

    cout << "pop_back" << endl;
    lst.pop_back();
    PrintList<int>(lst);
    cout << endl;

    cout << "Количество элементов в списке: " << lst.size() << endl;
    cout << endl;
    
    lst.unique();
    cout << "unique" << endl;
    PrintList<int>(lst);
    cout << endl;

    lst.reverse();
    cout << "reverse" << endl;
    PrintList<int>(lst);
    cout << endl;

    lst.clear();
    cout << "clear" << endl;
    PrintList<int>(lst);
    cout << endl;

    lst.insert(lst.begin(), 999);
    lst.insert(lst.begin(), 1);
    cout << "lst.insert(lst.begin(), 999), lst.insert(lst.begin(), 1)" << endl;
    PrintList<int>(lst);
    cout << endl;

    cout << "Смещение итератора на 1 вперед" << endl;
    auto it2 = lst.begin();
    ++it2;
    lst.insert(it2, 777);
    cout << "lst.insert(it2, 777)" << endl;
    cout << "Элемент, на который указывает итератор: " << *it2 << endl;
    PrintList<int>(lst);
    cout << endl;
    
    lst.push_back(555);
    cout << "lst.push_back(555)" << endl;
    
    advance(it2, -2);
    cout << "advance(it2, -2)" << endl;
    cout << "Элемент, на который указывает итератор: " << *it2 << endl;
    PrintList<int>(lst);
    cout << endl;

    lst.erase(it2); //Удаление элемента по итератору
    cout << "lst.erase(it2)" << endl;
    PrintList<int>(lst);
    cout << endl;

    lst.remove(555);//Удаление числа в списке
    cout << "lst.remove(555)" << endl;
    PrintList<int>(lst);
    cout << endl;

    lst.assign(10, 1000);//Заменяет все элементы на 1000
    cout << "  lst.assign(3, 1000) | Заменяет все элементы на 1000" << endl;
    PrintList<int>(lst);
    cout << endl;

    lst.clear();
    cout << "Очистка списка" << endl;
    list<int> lst1 = {1,2,3};
    lst.insert(lst.begin(), 555);
    lst.assign(lst1.begin(), lst1.end());
    cout << "lst.assign(lst1.begin(), lst1.end()) | Замена значений" << endl;
    PrintList<int>(lst);

    return 0;
}
