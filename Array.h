#pragma once
#include <fstream>
#include "vector"
using namespace std;

class Array
{
private:
    int* array;
    size_t size;
public:
    vector<int> arr;
    Array();
    explicit Array(size_t size);
    Array(Array const&);
    ~Array();
    size_t Size() const;
    void push_back(int v);
    void resize(int newSize);
    int& operator[](int i);
    Array operator+(const vector<int>&);
    friend istream& operator>>(istream&, Array&);
};

ostream& operator<<(ostream&, vector<int>&);
bool operator==(Array&, Array&);
bool operator!=(Array&, Array&);
bool operator>(Array&, Array&);
bool operator<(Array&, Array&);