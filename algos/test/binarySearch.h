//
// Created by Benjamin D. Horn on 2/22/17.
//

#ifndef ALGOS_BINARYSEARCH_H
#define ALGOS_BINARYSEARCH_H

#include <vector>
using namespace std;

class binarySearch {
public:

    bool binSearchCall(std::vector<int> & data, int value){
        return binSearch(data,value,0,data.size()-1);
    }

    bool binSearch(std::vector<int> & data, int value, int left, int right){ // find value in vector
        while( left <= right){
            int mid = (left+right)/2;
            if(data.at(mid)== value){
                return true; // item is in the list
            }
            else if(data.at(mid)>value){
                right = mid -1;
            }
            else{
                left = mid+1;
            }
        }
        return false;
    }
};


#endif //ALGOS_BINARYSEARCH_H
