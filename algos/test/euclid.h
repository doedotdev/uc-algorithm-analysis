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

    // checks id gcd returned teh correct gcd of 2 integers
    bool check(int a, int b){
        int g = gcd(a,b);
        return (a%g == 0) && (b%g == 0);
    }

    private:
    // NONE??
};


#endif //ALGOS_EUCLID_H
