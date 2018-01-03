# algorithms
Design and Analysis of Algorithms

### Euclidean 
```
Calculating the greatest common divisor of 2 integers.
Wost case = GCD(a,b) where a = f(n) and b = f(n+1) and n is the nth fibonacci number.
```
[Euclidean Algorithm - Implementation](https://github.com/hornbd96/algorithms/blob/master/algos/test/euclid.h)

[Euclidean Algorithm - Unit Tests](https://github.com/hornbd96/algorithms/blob/master/algos/test/euclidTest.cpp)

### Primes (cpp)
```
Calculating Primes as fast as possible. I think.
isPrime - in java and c++
prime builder -> finding primes based on previous primes - > cpp

```
[Primes - Implementation (cpp)](https://github.com/hornbd96/algorithms/blob/master/algos/test/isPrime.h)

[Prime Builder - Implementation (cpp)](https://github.com/hornbd96/algorithms/blob/master/algos/test/isPrimeBuilder.h)

[Prime and Builder - Unit Tests (cpp -> Google Test)](https://github.com/hornbd96/algorithms/blob/master/algos/test/isPrimeTest.cpp)

### Primes (Java)
```
Actually located in my Data Encoding Repo.
The trivial prime checker vs a fast prime checker.
Working on a prime building application.
```
<a href="https://github.com/hornbd96/dataEncoding/blob/master/dataEncoding/src/kit/prime.java">isPrime - Implementation</a>
<br>
<a href="https://github.com/hornbd96/dataEncoding/blob/master/dataEncoding/test/kit/primeTest.java">isPrime - Unit Tests</a>
<br>

### Base Converter
```
Convert any decimal digit to base N where 2 <= N <= 36
```
<a href="https://github.com/hornbd96/algorithms/blob/master/algos/test/baseConvert.h">Base Convert Algorithm - Implementation</a>
<br>
<a href="https://github.com/hornbd96/algorithms/blob/master/algos/test/baseConvertTest.cpp">Base Convert - Unit Tests</a>
<br>

### Fibonacci
```
Recursion
fib(n) = fib(n-1) + fib(n-2)
```
<a href="https://github.com/hornbd96/algorithms/blob/master/algos/test/fib.h">Fib Algorithm - Implementation</a>
<br>
<a href="https://github.com/hornbd96/algorithms/blob/master/algos/test/fibTest.cpp">Fib - Unit Tests</a>
<br>

### Horner
```
Calculating the value of a polynomial. 
Normal Solution: 2n mulitplactions and n additions
Horner's Solution: n multiplications and n additions -> Optimal!
```
<a href="https://github.com/hornbd96/algorithms/blob/master/algos/test/horner.h">Horner's Algorithm - Implementation</a>
<br>
<a href="https://github.com/hornbd96/algorithms/blob/master/algos/test/hornerTest.cpp">Horner's Algorithm - Unit Tests</a>
<br>

### Bubble Sort
```
Best Case: O(n)
Worst Case: O(n^2)
Average Case: O(n^2)
```
<a href="https://github.com/hornbd96/algorithms/blob/master/algos/test/bubbleSort.h">Bubble Sort Algorithm - Implementation</a>
<br>
<a href="https://github.com/hornbd96/algorithms/blob/master/algos/test/bubbleSortTest.cpp">Bubble Sort Algorithm - Unit Tests</a>
<br>

### Quick Sort
```
Best Case: O(n log n)
Worst Case: O(n^2)
Average Case: O(n log n)
```
<a href="https://github.com/hornbd96/algorithms/blob/master/algos/test/quickSort.h">Quick Sort Algorithm - Implementation</a>
<br>
<a href="https://github.com/hornbd96/algorithms/blob/master/algos/test/quickSortTest.cpp">Quick Sort Algorithm - Unit Tests</a>
<br>

### Selection Sort
```
Best Case: O(n^2)
Worst Case: O(n^2)
Average Case: O(n^2)
```
<a href="https://github.com/hornbd96/algorithms/blob/master/algos/test/selectionSort.h">Selection Sort Algorithm - Implementation</a>
<br>
<a href="https://github.com/hornbd96/algorithms/blob/master/algos/test/selectionSortTest.cpp">Selection Sort Algorithm - Unit Tests</a>
<br>

### Insertion Sort
```
Best Case: O(n)
Worst Case: O(n^2)
Average Case: O(n^2)
```
<a href="https://github.com/hornbd96/algorithms/blob/master/algos/test/insertionSort.h">Insertion Sort Algorithm - Implementation</a>
<br>
<a href="https://github.com/hornbd96/algorithms/blob/master/algos/test/insertionSortTest.cpp">Insertion Sort Algorithm - Unit Tests</a>
<br>

### Merge Sort
```
Best Case: O(n log n)
Worst Case: O(n log n)
Average Case: O(n log n)
```
<a href="https://github.com/hornbd96/algorithms/blob/master/algos/test/mergeSort.h">Merge Sort Algorithm - Implementation</a>
<br>
<a href="https://github.com/hornbd96/algorithms/blob/master/algos/test/mergeSortTest.cpp">Merge Sort Algorithm - Unit Tests</a>
<br>

### Divergent Number Series
```
1 + 2 + 3 + ... + n
Can be done quicker using the code below.
Tests comparing the time differnece between the standard and quick way of computing the divergent series up to n.
```
<a href="https://github.com/hornbd96/algorithms/blob/master/algos/test/divergent.h">Divergent - Implementation</a>
<br>
<a href="https://github.com/hornbd96/algorithms/blob/master/algos/test/divergentTest.cpp">Divergent - Unit Tests</a>
<br>

### Computing Max Min
```
Computing Max: n-1
Computing Min: n-1
Computing Max and Min: 2n-2
But it can be faster!
Computing max and min: (3n/2) - 2
How?
Check the implementation below!
*Asuming an un-ordered list. You can of course keep track of max and min on insertion depending on your implementation. That would be O(1) speed in that case. But this is assuming you were given an entire unordered list from scratch.*
```
<a href="https://github.com/hornbd96/algorithms/blob/master/algos/test/divergent.h">Max + Min - Implementation</a>
<br>
<a href="https://github.com/hornbd96/algorithms/blob/master/algos/test/divergentTest.cpp">Max + Min - Unit Tests</a>
<br>

### Compute Powers
```
When computing x^n . . .
Normal Power Computation: x^n = n-1 calculations 
Using Powers Algorithm Below: 2*log(2)n calculations -> 2(log base 2)n calculations
```
<a href="https://github.com/hornbd96/algorithms/blob/master/algos/test/powers.h">Powers - Implementation</a>
<br>
<a href="https://github.com/hornbd96/algorithms/blob/master/algos/test/powersTest.cpp">Powers - Unit Tests</a>
<br>

### Misc Items
```
Comparisons, races, and other things.
```
<a href="https://github.com/hornbd96/algorithms/blob/master/algos/test/sortTest.cpp">Compare all sorts sorting 10,000 items</a>
<br>

