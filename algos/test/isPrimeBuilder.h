//
// Created by Benjamin D. Horn on 3/11/17.
//
// retrieve all primes up to a certain number

#ifndef ALGOS_ISPRIMEBUILDER_H
#define ALGOS_ISPRIMEBUILDER_H
#include <vector>

class isPrimeBuilder {
public:
    isPrimeBuilder(int v) { // primes up to that value and equal to that value
        value = v;
    }

    void runPrimes(){
        for(int i = 0 ; i <= value; i++){
            if(checkPrime(i) == true){
                primes.push_back(i);
            }
        }
    }

    void runPrimesBuiler(){
        for(int i = 0 ; i <= value; i++){
            if(checkPrimeWithBuilder(i) == true){
                primes.push_back(i);
            }
        }
    }

    int getSize(){
        return primes.size();
    }

    bool checkPrime(int check) const{
        if(check == 0 || check == 1){
            return false;
        }
        else if(check == 2){
            return true;
        }
        else if(check %2 == 0){
            return false;
        }
        else{
            for(int i = 3; i*i <= check; i = i + 2 ){
                if(check%i == 0){
                    return false;
                }
            }
        }
        return true;
    }

    bool checkPrimeWithBuilder(int check) const{
        int index = 0;
        if(check == 0 || check == 1){
            return false;
        }
        else if(check == 2){
            return true;
        }
        else if(check %2 == 0){
            return false;
        }
        else{
            while (primes[index] <= sqrt(check)){
                if (check%primes[index] == 0){
                    return false;
                }
                index++;
            }
        }
        return true;
    }


private:
    std::vector<int> primes;
    int value;

};


#endif //ALGOS_ISPRIMEBUILDER_H
