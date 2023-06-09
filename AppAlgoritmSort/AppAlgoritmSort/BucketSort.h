#pragma once
#include <algorithm>
#include<iostream>    
#include<array> 
#include<string>
#include<vector>
using namespace std;
ref class BucketSort
{
    void bucketSort(float arr[], int n) {

        // 1) Create n empty buckets
        
        
        vector<float> b(n);

        // 2) Put array elements
        // in different buckets
        for (int i = 0; i < n; i++) {
            int bi = n * arr[i]; // Index in bucket
            b[bi]=(arr[i]);
        }
        /*
        // 3) Sort individual buckets
        for (int i = 0; i < n; i++)
            sort(b[i].begin(), b[i].end());

        // 4) Concatenate all buckets into arr[]
        int index = 0;
        for (int i = 0; i < n; i++)
            for (int j = 0; j < b[i].size(); j++)
                arr[index++] = b[i][j];
        */
    }

};

