//
// Created by Benjamin D. Horn on 2/21/17.
//

#ifndef ALGOS_MERGESORT_H
#define ALGOS_MERGESORT_H

#include <vector>
#include <string.h>
#include <iostream>
#include <algorithm>
#include <iostream>
#include <stdlib.h>
#include <algorithm>
#include <time.h>

using namespace std;

class mergeSort {
public:


    void printList(vector<int> a){
        if (a.size() == 0){
            cout << "[empty]" << endl;
            return;
        }
        cout << "[";
        for (int i = 0; i < a.size() - 1; i++){
            cout << a[i] << ",";
        }
        cout << a[a.size() - 1];
        cout << "]" << endl;

    }


    bool isSorted(vector<int> data){
        if (data.size() <= 1){
            cout << "List is Sorted" << endl;
            return true;
        }

        for (unsigned int i = 0; i < data.size() - 1; i++){
            if (data[i]>data[i + 1]){
                return false;
            }
        }
        cout << "List is Sorted" << endl;
        return true;
    }


    void mergeSortAlgo(vector<int>& data){ // divide into two halfs
        if (isSorted(data)){ return; }

        vector<int> fir(data.begin(), data.begin() + data.size() / 2);
        vector<int> las(data.begin() + data.size() / 2, data.end());

        sort(fir.begin(), fir.begin() + fir.size());
        sort(las.begin(), las.begin() + las.size());
        merge(fir.begin(), fir.begin() + fir.size(), las.begin(), las.begin() + las.size(), data.begin());
    }


    void runCurrentSort(vector<int> & data){
        mergeSortAlgo(data);
    }
};


#endif //ALGOS_MERGESORT_H
