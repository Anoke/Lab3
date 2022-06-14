#pragma once
#include <fstream>

using namespace std;

class Triangle{
public:
    class Point{
    public:
        Point(double x, double y);
        ~Point();
        double x;
        double y;
        friend istream& operator>>(istream&, Point&);
    };
    Point A;
    Point B;
    Point C;
    Triangle();
    Triangle(Point A_, Point B_, Point C_);
    ~Triangle();
    friend istream& operator>>(istream&, Triangle&);
};

double distance(Triangle::Point a, Triangle::Point b);
double area(Triangle a);
ostream& operator<<(ostream&, const Triangle::Point&);
ostream& operator<<(ostream&, const Triangle&);
bool operator==(Triangle&, Triangle&);
bool operator!=(Triangle&, Triangle&);
bool operator>(Triangle&, Triangle&);
bool operator<(Triangle&, Triangle&);