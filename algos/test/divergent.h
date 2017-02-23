//
// Created by Benjamin D. Horn on 2/23/17.
//

#ifndef ALGOS_DIVERGENT_H
#define ALGOS_DIVERGENT_H


class divergent {
public:
    long long int normal(long long int value){
        long long int sum = 0;
        for(long long int i = 1 ; i <= value; i ++){
            sum = sum + i;
        }
        return sum;
    }

    long long int fast(long long int value){
        return (value*(value+1))/2;
    }


};


#endif //ALGOS_DIVERGENT_H
