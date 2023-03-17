#pragma once
#include <algorithm>
#include<iostream>    
#include<array> 
#include<string>
using namespace std;

ref class MergeSort
{

    void merge_sort_DnC(int a[], int l, int r) {
        if (l == r) return;
        int mid = (l + r) >> 1;
        merge_sort_DnC(a, l, mid);
        merge_sort_DnC(a, mid + 1, r);
        std::inplace_merge(a + l, a + mid + 1, a + r + 1);
    }
public:
    void merge_sort(int a[], int n) {
        merge_sort_DnC(a, 0, n - 1);
    }
};

