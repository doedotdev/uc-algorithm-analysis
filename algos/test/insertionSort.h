//
// Created by Benjamin D. Horn on 2/21/17.
//

#ifndef ALGOS_INSERTIONSORT_H
#define ALGOS_INSERTIONSORT_H

#include <vector>
#include <string.h>
#include <iostream>
#include <algorithm>
#include <iostream>
#include <stdlib.h>
#include <algorithm>
#include <time.h>

using namespace std;

class insertionSort {
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

    // insertion sort
    // shifts and inserts in the correct spot\
    // how you sort cards
    // Sorting Speeds
    // Best Case(already sorted): O(n)
    // Worst Case Sort Speed: O(n^2)
    void insertionSortAlgo(vector<int>& data){
        if (isSorted(data)){ return; }
        int j;
        for (int i = 0; i < data.size(); i++){
            j = i;
            while (j > 0 && data[j] < data[j - 1]){
                swap(data[j], data[j - 1]);
                j--;
            }
        }
    }




    void runCurrentSort(vector<int> & data){
        insertionSortAlgo(data);
    }


};


#endif //ALGOS_INSERTIONSORT_H
