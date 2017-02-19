//
// Created by Benjamin D. Horn on 2/18/17.
//

#ifndef ALGOS_HORNER_H
#define ALGOS_HORNER_H

#include <string>
#include <string.h>
#include <vector>

class horner {

public:
    // where my_ints[] is an array of leading coefficients
    int getHorner(std::vector<int> my_ints, int value){
        int size = my_ints.size();
        if( size == 0){
            return 0;
        }
        std::cout << "SIZE: " << size << std::endl;
        int ret = my_ints[0];
        for (int i = 1; i < size; i ++){ //
            ret = ret*value;
            ret = ret + my_ints[i];
        }

        return ret;
    }

private:

};


#endif //ALGOS_HORNER_H
