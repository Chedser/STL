#include <iostream>
#include <vector>

using namespace std;

int main(){
    setlocale(LC_ALL, "ru");

   /* int arr[] = {1, 2, 3, 4, 5};

    cout << arr[1] << endl;
    cout << *(arr + 1) << endl; */

    vector<int> v = { 1, 2, 3, 4, 5 };

    vector<int>::iterator it = v.begin();
    cout << "Элементы вектора" << endl;

    /* // Обычный итератор
 for (vector<int>::iterator it = v.begin(); it != v.end(); it++) {
     cout << *it << endl;
 } */
   
    /* // Константный итератор с приведением типа
    for (vector<int>::const_iterator it = v.begin(); it != v.end(); it++) {
        //*it = *it + 2; Нельзя изменять!
        cout << *it << endl;
    } */

     /* Константый итератор */
    for (vector<int>::const_iterator it = v.cbegin(); it != v.cend(); it++) {
    //*it = *it + 2; Нельзя изменять!
    cout << *it << endl;
 } 
    
    cout << endl;

    cout << "Начальный элемент вектора: " << *it << endl;
    cout << "*it_begin = 1000" << endl;
    *it = 1000;
    cout << "Начальный элемент вектора: " << *it << endl << endl;

    ++it;
    cout << "++it | Смещение итератора на 1 вперед" << endl;
    cout << "Текущий элемент итератора: " << *it << endl << endl;

    cout << "it += 2 | Смещение итератора на 2 вперед" << endl;
    it += 2;
    cout << "Текущий элемент итератора: " << *it << endl << endl;

    cout << "it-- | Смещение итератора на 1 назад" << endl;
    it--;
    cout << "Текущий элемент итератора: " << *it << endl << endl;
        
    cout << "Перебор элементов в обратном порядке" << endl;
    /* Перебор элементов в обратном порядке*/
    for(vector<int>::reverse_iterator it = v.rbegin(); it != v.rend(); it++) {
        cout << *it << endl;
    }

    cout << endl;
    
    cout << "it = v.begin() | Смещение итератора в начало" << endl;
    it = v.begin();
    cout << "advance(it, 3) | Смещение итератора на 3 вперед" << endl;
    advance(it, 3);
    cout << "Текущий элемент итератора: " << *it << endl << endl;
    cout << "advance(it, -3) | Смещение итератора на 3 назад" << endl;
    advance(it, -3);
    cout << "Текущий элемент итератора: " << *it << endl << endl;

    cout << "Элементы до вставки" << endl;
    for (vector<int>::const_iterator it = v.cbegin(); it != v.cend(); it++) {
        cout << *it << endl;
    }
    
    cout << endl;

    v.insert(it, 999); // Вставка до 1-го элемента. Элементы сдвигаются вперед
    cout << "v.insert(it, 999)" << endl;
    cout << "Элементы после вставки" << endl;
    for (vector<int>::const_iterator it = v.cbegin(); it != v.cend(); it++) {
        cout << *it << endl;
    }

    cout << endl;

    vector<int>::iterator itErase = v.begin();
    cout << "v.erase(itErase) | Удаление элемента" << endl;
    v.erase(itErase);
    cout << "Элементы после удаления" << endl;

    for (vector<int>::const_iterator it = v.cbegin(); it != v.cend(); it++) {
        cout << *it << endl;
    }

    return 0;
}

