# algorithms
Design and Analysis of Algorithms

<h3>Euclidean</h3>
```
Calculating the greatest common divisor of 2 integers.
Wost case = GCD(a,b) where a = f(n) and b = f(n+1) and n is the nth fibonacci number.
```
<a href="https://github.com/hornbd96/algorithms/blob/master/algos/test/euclid.h">Euclidean Algorithm - Implementation</a>
<br>
<a href="https://github.com/hornbd96/algorithms/blob/master/algos/test/euclidTest.cpp">Euclidean Algorithm - Unit Tests</a>
<br>

<h3>Base Converter</h3>
```
Convert any decimal digit to base N where 2 <= N <= 36
```
<a href="https://github.com/hornbd96/algorithms/blob/master/algos/test/baseConvert.h">Base Convert Algorithm - Implementation</a>
<br>
<a href="https://github.com/hornbd96/algorithms/blob/master/algos/test/baseConverTest.cpp">Base Convert - Unit Tests</a>
<br>

<h3>Horner</h3>
```
Calculating the value of a polynomial. 
Normal Solution: 2n mulitplactions and n additions
Horner's Solution: n multiplications and n additions -> Optimal!
```
<a href="https://github.com/hornbd96/algorithms/blob/master/algos/test/horner.h">Horner's Algorithm - Implementation</a>
<br>
<a href="https://github.com/hornbd96/algorithms/blob/master/algos/test/hornerTest.cpp">Horner's Algorithm - Unit Tests</a>
<br>

<h3>Bubble Sort</h3>
```
Best Case: O(n)
Worst Case: O(n^2)
Average Case: O(n^2)
```
<a href="https://github.com/hornbd96/algorithms/blob/master/algos/test/bubbleSort.h">Bubble Sort Algorithm - Implementation</a>
<br>
<a href="https://github.com/hornbd96/algorithms/blob/master/algos/test/bubbleSortTest.cpp">Bubble Sort Algorithm - Unit Tests</a>
<br>

<h3>Quick Sort</h3>
```
Best Case: O(n log n)
Worst Case: O(n^2)
Average Case: O(n log n)
```
<a href="https://github.com/hornbd96/algorithms/blob/master/algos/test/quickSort.h">Quick Sort Algorithm - Implementation</a>
<br>
<a href="https://github.com/hornbd96/algorithms/blob/master/algos/test/quickSortTest.cpp">Quick Sort Algorithm - Unit Tests</a>
<br>

<h3>Selection Sort</h3>
```
Best Case: O(n^2)
Worst Case: O(n^2)
Average Case: O(n^2)
```
<a href="https://github.com/hornbd96/algorithms/blob/master/algos/test/selectionSort.h">Selection Sort Algorithm - Implementation</a>
<br>
<a href="https://github.com/hornbd96/algorithms/blob/master/algos/test/selectionSortTest.cpp">Selection Sort Algorithm - Unit Tests</a>
<br>

<h3>Insertion Sort</h3>
```
Best Case: O(n)
Worst Case: O(n^2)
Average Case: O(n^2)
```
<a href="https://github.com/hornbd96/algorithms/blob/master/algos/test/insertionSort.h">Insertion Sort Algorithm - Implementation</a>
<br>
<a href="https://github.com/hornbd96/algorithms/blob/master/algos/test/insertionSortTest.cpp">Insertion Sort Algorithm - Unit Tests</a>
<br>

<h3>Merge Sort</h3>
```
Best Case: O(n log n)
Worst Case: O(n log n)
Average Case: O(n log n)
```
<a href="https://github.com/hornbd96/algorithms/blob/master/algos/test/mergeSort.h">Merge Sort Algorithm - Implementation</a>
<br>
<a href="https://github.com/hornbd96/algorithms/blob/master/algos/test/mergeSortTest.cpp">Merge Sort Algorithm - Unit Tests</a>
<br>

<h3>Divergent Number Series</h3>
```
1 + 2 + 3 + ... + n
Can be done quicker using the code below.
Tests comparing the time differnece between the standard and quick way of computing the divergent series up to n.
```
<a href="https://github.com/hornbd96/algorithms/blob/master/algos/test/divergent.h">Divergent - Implementation</a>
<br>
<a href="https://github.com/hornbd96/algorithms/blob/master/algos/test/divergentTest.cpp">Divergent - Unit Tests</a>
<br>

<h3>Computing Max Min</h3>
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

<h3>Compute Powers</h3>
```
When computing x^n . . .
Normal Power Computation: x^n = n-1 calculations 
Using Powers Algorithm Below: 2*log(2)n calculations -> 2(log base 2)n calculations
```
<a href="https://github.com/hornbd96/algorithms/blob/master/algos/test/powers.h">Powers - Implementation</a>
<br>
<a href="https://github.com/hornbd96/algorithms/blob/master/algos/test/powersTest.cpp">Powers - Unit Tests</a>
<br>

<h3>Misc Items</h3>
```
Comparisons, races, and other things.
```
<a href="https://github.com/hornbd96/algorithms/blob/master/algos/test/sortTest.cpp">Compare all sorts sorting 10,000 items</a>
<br>

