//
// Created by Benjamin D. Horn on 2/18/17.
//

#ifndef ALGOS_EUCLID_H
#define ALGOS_EUCLID_H


class euclid {
    public:

    // returns the GCD of 2 integers

    long long int getEuclid(long long int a, long long int b){
        if(a == b){
            return a;
        }
        return gcd(a,b);
    }

    long long int gcd(long long int a, long long int b){
        if ( b == 0 ){
            return a;
        }
        return gcd(b, a%b);
    }

    private:
    // none
};


#endif //ALGOS_EUCLID_H
