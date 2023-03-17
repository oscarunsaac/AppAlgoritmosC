#pragma once
#include <algorithm>
#include<iostream>    
#include<array> 
#include<string>
using namespace std;
ref class RadixSort
{
    void radix_sort_DnC(int a[], int level, int l, int r) {
        if (l == r || level < 0) return;
        int left = l, right = r;
        while (left <= right) {
            while (!(a[left] >> level & 1)) ++left;
            while (a[right] >> level & 1) --right;
            if (left <= right) {
                swap(a[left], a[right]);
                ++left;
                --right;
            }
        }
        if (left < r)
            radix_sort_DnC(a, level - 1, left, r);
        if (l < right)
            radix_sort_DnC(a, level - 1, l, right);
    }
public:
    void radix_sort(int a[], int n) {
        int level = 0;
        while ((1 << level) < n) ++level;
        radix_sort_DnC(a, level, 0, n - 1);
    }

};

