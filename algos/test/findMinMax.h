//
// Created by Benjamin D. Horn on 2/23/17.
//

#ifndef ALGOS_FINDMINMAX_H
#define ALGOS_FINDMINMAX_H

#include <vector>

using namespace std;

class findMinMax {
public:
    int findMax(vector<int> & data){ // n-1 comparisons
        int max = data.at(0);
        for (int i = 1; i < data.size(); i++){
            if(data.at(i) > max){
                max = data.at(i);
            }
        }
        return max;
    }

    int findMin(vector<int> & data){ // n-1 comparisons
        int min = data.at(0);
        for (int i = 1; i < data.size(); i++){
            if(data.at(i) < min){
                min = data.at(i);
            }
        }
        return min;
    }

    void findMaxMin(vector<int> & data){ // get both in quick time
        if(data.size() % 2 == 0){ // list is even
            return;
        }
        else{ // list is odd
            return;
        }
    }

private:
    int my_min;
    int my_max;

};


#endif //ALGOS_FINDMINMAX_H
