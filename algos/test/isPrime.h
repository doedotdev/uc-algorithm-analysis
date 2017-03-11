//
// Created by Benjamin D. Horn on 3/11/17.
//

#ifndef ALGOS_ISPRIME_H
#define ALGOS_ISPRIME_H


class isPrime {
    int check;

public:
    isPrime(int v) {
        check = v;
    }

    bool getCheck() const {
        return checkPrime();
    }

    void setCheck(int check) {
        isPrime::check = check;
    }

    bool checkPrime() const{
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



};


#endif //ALGOS_ISPRIME_H
