#include "Array.h"
#include "cmath"
#include "vector"
using namespace std;

Array::Array()
{
    size = 0;
}
Array::Array(size_t size)
{
    this->size = size;
    array = new int[size];
    for (size_t i = 0; i < size; i++) {
        array[i] = 0;
    }
}
Array::Array(Array const& a)
{
    size = a.Size();
    array = new int[size];
    for (size_t i = 0; i < size; i++) {
        array[i] = a.array[i];
    }
}
Array::~Array()
{
    delete[] array;
}

size_t Array::Size() const {
    return size;
}
void Array::push_back(int v) {
    int* temp = new int[size + 1];
    for (size_t i = 0; i < size; i++) {
        temp[i] = array[i];
    }
    temp[size] = v;
    delete[] array;
    array = temp;
    size++;
}
void Array::resize(int newSize)
{
    int* temp = new int[newSize];
    size_t minSize = newSize > size ? size : newSize;
    for (size_t i = 0; i < minSize; i++) {
        temp[i] = array[i];
    }
    delete[] array;
    array = temp;
    size = newSize;
}
int& Array::operator[] (int i) {
    if (i < size && i >= 0)
        return array[i];
}
istream& operator>>(istream& stream, Array& a)
{
    size_t size;
    stream >> size;
    for (size_t i = 0; i < size; i++)
    {
        int temp;
        stream >> temp;
        a.push_back(temp);
    }
    return stream;
}
ostream& operator<<(ostream& stream, vector<int>& a)
{
    stream << "Length: " << a.size() << "\n" << "[ ";
    for (size_t i = 0; i < a.size(); i++)
    {
        stream << a[i] << " ";
    }
    stream << "]";
    return stream;
}
Array Array::operator+(const Array& b)
{
    int tmp = this->size;
    this->resize(this->size + b.size);
    for (int i = 0; i < b.size; i++) {
        this->array[tmp + i] = b.array[i];
    }
    return *this;
}
bool operator==(vector<int>& a, vector<int>& b)
{
    return (a.size() == b.size());

}
bool operator!=(Array& a, Array& b)
{
    return a.Size() != b.Size();
}
bool operator<(Array& a, Array& b)
{
    return a.Size() < b.Size();
}
bool operator>(Array& a, Array& b)
{
    return a.Size() > b.Size();
}