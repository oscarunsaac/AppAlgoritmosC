#pragma once

#include<iostream>    
#include<array> 
#include<string>


using namespace std;


ref class ShellSort
{
public:
    void shell_sort(int a[], int n) {
        int gapsd[9] = { 1750, 701, 301, 132, 57, 23, 10, 4, 1 };
        for (int gap : gapsd) {
            for (int i = gap; i < n; ++i) {
                int cur = a[i];
                int j = i;
                for (; j >= gap && a[j - gap] > cur; j -= gap)
                    a[j] = a[j - gap];
                a[j] = cur;
            }
        }
    }

};

