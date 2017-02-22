//
// Created by Benjamin D. Horn on 2/21/17.
//

#ifndef ALGOS_SELECTIONSORT_H
#define ALGOS_SELECTIONSORT_H

#include <vector>
#include <string.h>
#include <iostream>
#include <algorithm>
#include <iostream>
#include <stdlib.h>
#include <algorithm>
#include <time.h>

using namespace std;

class selectionSort {
public:
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


// selection sort
// sorts from left to right
// finds next smallest element and swaps them
// Sorting Speeds
// Best Case(already sorted): O(n^2)
// Worst Case Sort Speed: O(n^2)
    void selectionSortAlgo(vector<int>& data){
        if (isSorted(data)){ return; }

        for (unsigned int i = 0; i < data.size(); i++){
            for (unsigned int j = i + 1; j < data.size(); j++){// start at the next value and check it
                if (data[i] > data[j]){
                    swap(data[i], data[j]);
                }
            }
        }
    }

    void runCurrentSort(vector<int> & data){
        selectionSortAlgo(data);
    }

};


#endif //ALGOS_SELECTIONSORT_H
