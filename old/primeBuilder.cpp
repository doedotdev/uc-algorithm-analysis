// primeBuilder.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <vector>

using namespace std;


vector<int> primes; // holds all prime numbers;; and continually builds on itself


bool checkPrime(int i){
	int index = 0;
	if (i <= 1){
		return false;
	}
	if (i <= 3){
		return true;
	}
	while (primes[index] <= sqrt(i)){
		if (i%primes[index] == 0){
			return false;
		}
		index++;
	}
	return true;
}

int _tmain(int argc, _TCHAR* argv[])
{
	
	//get all prime numbers up to acertain number

	int limit = 10000000;
	for (int i = 0; i < limit; i++){
		if (checkPrime(i)){
			primes.push_back(i);
		}
	}

	for (int i = 0; i < primes.size(); i++){
		cout << i + 1 << ": " << primes[i] << endl;
	}
	
	cout << "Between 0 and " << limit << "there are " << primes.size() << "prime numbers." << endl;
	

	return 0;
}

