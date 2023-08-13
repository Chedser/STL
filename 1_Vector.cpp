#include <iostream>
#include <vector>
using std::cout;
using std::endl;
using std::vector;

int main(){
    setlocale(LC_ALL, "ru");
    
    const int COUNT = 5;

  /*  vector<int>* v = new vector<int>();
    
    for (int i = 0; i < VECTOR_SIZE; i++) {
        v->push_back(i);
    } */
   
    /*vector<int> v = {1, 2, 3};
    vector<int>* v = new vector<int>({ 1, 2, 3 }); */
    
    vector<int> v;
    cout << "Capacity до добавления элементов: " << v.capacity() << endl;
    cout << "Size до добавления элементов: " << v.size() << endl;
    for (int i = 0; i < COUNT; i++) {
        v.push_back(i);
    }

    cout << "Добавлено " << COUNT << " элементов" << endl;
    cout << "Capacity: " << v.capacity() << endl;
    cout << "Size: " << v.size() << endl;
    cout << "Последний элемент: " << v.back() << endl;
    
   /* try {
        cout << v.at(10) << endl;
    }
    catch (const std::exception& ex) {
        cout << ex.what() << endl;
    } */
    

    /* Индексация через at() */
    for (int i = 0; i < v.size(); i++) {
        cout << v.at(i) << endl;
    }

    cout << endl;
    
    // Индексация через [] 
   /* for (int i = 0; i < v.size(); i++) {
        cout << v[i] << endl;
    }
    
    cout << endl;

    // Индексация через iterator 
    for (vector<int>::iterator it = v.begin(); it < v.end(); it++) {
        cout << *it << endl;
    }
    
    cout << endl;

    // Индексация через iterator 
    for(auto it = v.begin(); it < v.end(); it++) {
        cout << *it << endl;
    }

    cout << endl;
    v.clear();
    cout << "Очистка вектора" << endl;
    cout << "Количество элементов в векторе: " << v.size() << endl;
    
    for (int i = 0; i < VECTOR_SIZE; i++) {
        v.push_back(i);
    }
    */
    cout << "Добавлено " << COUNT << " элемента" << endl;
    for (int i = 0; i < v.size(); i++) {
        cout << v.at(i) << endl;
    }

    cout << endl; 

    v.pop_back(); //Удаление последнего (size - 1) элемента
    cout << "Удален последний элемент" << endl;
    cout << "Элементы после удаления" << endl;
    for (int i = 0; i < v.size(); i++) {
        cout << v.at(i) << endl;
    }

    cout << endl;
    cout << "Capacity: " << v.capacity() << endl;
    cout << "Size: " << v.size() << endl;
    cout << "Последний элемент: " << v.back() << endl;

    cout << endl;

    v.reserve(100);
    cout << "v.reserve(100) | Установка capacity 100" << endl;
    cout << "Capacity: " << v.capacity() << endl;
    cout << "Size: " << v.size() << endl << endl;

    cout << "shrink_to_fit() | capacity == size" << endl;
    v.shrink_to_fit();
    cout << "Capacity: " << v.capacity() << endl;
    cout << "Size: " << v.size() << endl << endl;

    cout << "Создание вектора vector<int> v2(20)" << endl;
    vector<int> v2(20);
    cout << "Capacity: " << v2.capacity() << endl;
    cout << "Size: " << v2.size() << endl << endl;
    for (int i = 0; i < v2.size(); i++) {
        cout << v2.at(i) << endl;
    }

    cout << endl;

    cout << "Создание вектора vector<int> v3(20, 1)" << endl;
    vector<int> v3(20, 1);
    cout << "Capacity: " << v3.capacity() << endl;
    cout << "Size: " << v3.size() << endl << endl;
    for (int i = 0; i < v3.size(); i++) {
        cout << v3.at(i) << endl;
    }

    cout << endl;
    cout << "v3.empty(): " << bool(v3.empty()) << endl;
    cout << "Очистка вектора v3" << endl;
    v3.clear();
    cout << "v3.empty(): " << bool(v3.empty()) << endl;
    cout << "Capacity: " << v3.capacity() << endl;
    cout << "Size: " << v3.size() << endl << endl;

    v3.resize(20);

    cout << "Увеличение количества элементов | v3.resize(20)" << endl;
    cout << "Capacity: " << v3.capacity() << endl;
    cout << "Size: " << v3.size() << endl << endl;

    return 0;
}

