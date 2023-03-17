#pragma once
#include <algorithm>
#include<iostream>    
#include<array> 
#include<string>
using namespace std;
ref class HeapSort
{
    void down_heap(int a[], int n, int i) {
        int cur = a[i];
        while (i < n) {
            int child = (i << 1) | 1;
            if (child >= n)
                break;
            if (child + 1 < n && a[child] < a[child + 1]) ++child;
            if (a[child] <= cur)
                break;
            a[i] = a[child];
            i = child;
        }
        a[i] = cur;
    }
public:
    void heap_sort(int a[], int n) {
        for (int i = n / 2 - 1; i >= 0; --i)
            down_heap(a, n, i);
        for (int i = n - 1; i > 0; --i) {
            swap(a[i], a[0]);
            down_heap(a, i, 0);
        }
    }


};

