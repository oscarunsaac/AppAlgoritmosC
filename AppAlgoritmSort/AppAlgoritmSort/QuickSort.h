#pragma once
#include <algorithm>
#include<iostream>    
#include<array> 
#include<string>
using namespace std;

ref class QuickSort
{
    void quick_sort_DnC(int a[], int l, int r) {
        if (l == r) return;
        int pivot = a[getRandom(l, r)];
        int left = l, right = r;
        while (left <= right) {
            while (a[left] < pivot) ++left;
            while (pivot < a[right]) --right;
            if (left <= right) {
                swap(a[left], a[right]);
                ++left;
                --right;
            }
        }
        if (left < r)
            quick_sort_DnC(a, left, r);
        if (l < right)
            quick_sort_DnC(a, l, right);
    }
    int getRandom(int l, int r) {
        return 1ll * rand() * rand() * rand() % (r - l + 1) + l;
    }
public:
    void quick_sort(int a[], int n) {
        quick_sort_DnC(a, 0, n - 1);
    }
};

