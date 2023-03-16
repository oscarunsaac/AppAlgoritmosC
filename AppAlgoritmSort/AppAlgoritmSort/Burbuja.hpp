#pragma once
#include <algorithm>
#include<iostream>    
using namespace std;
ref class Burbuja
{
    
public:
    void bubble_sort(int a[], int n) {
        for (int j = n; j > 1; --j)
            for (int i = 1; i < j; ++i)
                if (a[i - 1] > a[i])
                    swap(a[i - 1], a[i]);
    }

public:
    void bubble_sort_Palabras(string a[], int n) {
        for (int j = n; j > 1; --j)
            for (int i = 1; i < j; ++i)
                if (a[i - 1] > a[i])
                    swap(a[i - 1], a[i]);
    }

    template <class T>
    inline void swap(T& a, T& b) {
        T tmp = b;
        b = a;
        a = tmp;
    }
};

