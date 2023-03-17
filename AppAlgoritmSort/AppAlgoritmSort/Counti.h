#pragma once

#include<iostream>    
#include<array> 
#include<string>

using namespace std;

class Counti
{
    int __cnt[30000];
public:
    void couting_sort(int a[], int n) {
        if (n <= 0) return;
        for (int i = 0; i < n; ++i)
            ++__cnt[a[i]];
        int l = 0;
        for (int i = 0; i < n; ++i)
            for (; __cnt[i]; --__cnt[i], ++l)
                a[l] = i;
    }

};
