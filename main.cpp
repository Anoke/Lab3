#include <iostream>
#include "Triangle.h"
#include "Array.h"
using namespace std;

void FirstTask() {
    cout << "    Task 1:" << endl;
    Triangle First, Second;
    cin >> First >> Second;
    if (First < Second)
        cout << "First triangle is smaller than second" << endl;
    if (First > Second)
        cout << "First triangle is larger than second" << endl;
    if (First == Second)
        cout << "Triangles are same" << endl;
    if (First != Second)
        cout << "Triangles are different" << endl;
    cout << First << endl;
    cout << endl;
    cout << Second << endl;
}
void SecondTask() {
    cout << endl;
    cout << "    Task 2:" << endl;
    Array First, Second;
    int val,amount;
    cin >> amount;
    for (int i = 0; i < amount; ++i) {
        cin >>  val;
        First.arr.push_back(val);
    }
    int amount2;
    cin >> amount2;
    for (int i = 0; i < amount2; ++i) {
        cin >> val;
        Second.arr.push_back(val);
    }
//    cin >> First >> Second;
//    if (First.arr < Second.arr)
//        cout << "First array is smaller than second" << endl;
//    if (First > Second)
//        cout << "First array is larger than second" << endl;
    if (First.arr == Second.arr)
        cout << "Arrays are same" << endl;
//    if (First != Second)
//        cout << "Arrays are different" << endl;
    cout << endl;
    (cout << First.arr);
    cout << endl;
    (cout << Second.arr);
    cout << endl;
    Array Third = First.operator+(Second);
    //cout << Third << endl;
}

int main() {
    cout << "\t --- LAB #3 ---" << endl;
    FirstTask();
    SecondTask();
}