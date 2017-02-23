//
// Created by Benjamin D. Horn on 2/22/17.
//

#ifndef ALGOS_POWERS_H
#define ALGOS_POWERS_H


class powers {
public:
    powers(){
        // default constructor
    }

    long long int compute(long long int base, long long int exponent){
        if(exponent == 1){
            return base;
        }
        else if(exponent%2 ==0){ // even exponent
            return compute(base*base, exponent/2);
        }
        else{ // odd exponent
            return base*compute(base*base, (exponent-1)/2);
        }
    }

private:
    //long long int base;
    //long long int exponent;

};


#endif //ALGOS_POWERS_H
