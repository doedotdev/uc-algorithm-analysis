//
// Created by Benjamin D. Horn on 2/18/17.
//

#ifndef ALGOS_HORNER_H
#define ALGOS_HORNER_H

#include <string>
#include <string.h>
#include <vector>
#include <iostream>
#include <algorithm>

class bubble {

public:
    bool isSorted(std::vector<int> data){
        if (data.size() <= 1){
            std::cout << "List is Sorted" << std::endl;
            return true;
        }

        for (unsigned int i = 0; i < data.size() - 1; i++){
            if (data[i]>data[i + 1]){
                return false;
            }
        }
        std::cout << "List is Sorted" << std::endl;;
        return true;
    }

    void bubbleSort(std::vector<int>& data){ // swap up the list until no swaps were made
        if (isSorted(data)){ return; } // checks if size = 1 or 0, then if it is already sorted

        bool is_switched = true;
        while (is_switched){
            is_switched = false; // set back to false at the beginning of the list travseral
            for (unsigned int i = 0; i < data.size() - 1; i++){
                if (data[i] > data[i + 1]){
                    std::swap(data[i], data[i + 1]);
                    is_switched = true;
                }
            }
        }
    }

    void printList(std::vector<int> a){
        if (a.size() == 0){
            std::cout << "[empty]" << std::endl;;
            return;
        }
        std::cout << "[";
        for (int i = 0; i < a.size() - 1; i++){
            std::cout << a[i] << ",";
        }
        std::cout << a[a.size() - 1];
        std::cout << "]" << std::endl;;

    }

    void runCurrentSort(std::vector<int> & data){
        bubbleSort(data);
    }

private:

};


#endif //ALGOS_HORNER_H
