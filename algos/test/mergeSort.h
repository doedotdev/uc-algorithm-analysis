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
            //cout << "List is Sorted" << endl;
            return true;
        }

        for (unsigned int i = 0; i < data.size() - 1; i++){
            if (data[i]>data[i + 1]){
                return false;
            }
        }
        //cout << "List is Sorted" << endl;
        return true;
    }

    //overloaded mergesort function that gets called with left & right parameters
    void mergeSortAlgo(vector<int>& data, int left, int right){
        if(left < right){
            int mid = (left + right)/2;
            //recursively split into halves then merge to sort them
            mergeSortAlgo(data, left, mid);
            mergeSortAlgo(data, mid+1, right);
            merge(data, left, mid, right);
        }
        return;
    }

    //merge function to combine two (sorted) halves of list
    void merge(vector<int>& data, int left, int mid, int right){
        int pos1 = left;
        int pos2 = mid + 1;
        int count = left;
        int temp[data.size()];
        while(pos1 <= mid && pos2 <= right){//while there are still values in each (sorted) half, add (in order) to temp array
            if(data[pos1] < data[pos2]){
                temp[count] = data[pos1];
                pos1++;
                count++;
            }else{
                temp[count] = data[pos2];
                pos2++;
                count++;
            }
        }

        while(pos1 <= mid){//add remaining values of first half in second half is empty
            temp[count] = data[pos1];
            pos1++;
            count++;
        }
        while(pos2 <= right){//add remaining values of second half if first half is empty
            temp[count] = data[pos2];
            pos2++;
            count++;
        }
        for(int k = left; k < count; k++){//place data in correct location in original array
            data[k] = temp[k];
        }
    }


    /*
    void mergeSortAlgo(vector<int>& data){ // divide into two halfs
        vector<int> fir(data.begin(), data.begin() + data.size() / 2);
        vector<int> las(data.begin() + data.size() / 2, data.end());

        sort(fir.begin(), fir.begin() + fir.size());
        sort(las.begin(), las.begin() + las.size());
        merge(fir.begin(), fir.begin() + fir.size(), las.begin(), las.begin() + las.size(), data.begin());
    }
*/

    void runCurrentSort(vector<int> & data){
        if( isSorted(data)){
            return;
        }
        else{
            mergeSortAlgo(data,0, data.size()-1);
        }
    }
};


#endif //ALGOS_MERGESORT_H
