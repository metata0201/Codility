#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;
/*Lesson2 - CyclicRotation
*Task description
*A zero - indexed array A consisting of N integers is given.Rotation of the array means that each element is shifted right by one index,
*and the last element of the array is also moved to the first place.
*
*For example, the rotation of array A = [3, 8, 9, 7, 6] is[6, 3, 8, 9, 7].The goal is to rotate array A K times; that is, each element of
*A will be shifted to the right by K indexes.
*
*Write a function : vector<int> CyclicRotation(vector<int> &A, int K);
*that, given a zero - indexed array A consisting of N integers and an integer K, returns the array A rotated K times.
*
*For example, given array A = [3, 8, 9, 7, 6] and K = 3, the function should return[9, 7, 6, 3, 8].
*Assume that :N and K are integers within the range[0..100];
*            each element of array A is an integer within the range[-1, 000..1, 000].
*In your solution, focus on correctness.The performance of your solution will not be the focus of the assessment.
*/
vector<int> CyclicRotation(vector<int> &A, int K);

/*Lesson2 - OddOccurrencesInArray
*A non - empty zero - indexed array A consisting of N integers is given.The array contains an odd number of elements, and each element
*of the array can be paired with another element that has the same value, except for one element that is left unpaired.
*
*For example, in array A such that :A[0] = 9  A[1] = 3  A[2] = 9 A[3] = 3  A[4] = 9  A[5] = 7 A[6] = 9
*the elements at indexes 0 and 2 have value 9,
*the elements at indexes 1 and 3 have value 3,
*the elements at indexes 4 and 6 have value 9,
*the element at index 5 has value 7 and is unpaired.
*Write a function :
*
*int OddOccurrencesInArray(vector<int> &A); that, given an array A consisting of N integers fulfilling the above conditions, returns
*the value of the unpaired element.
*
*For example, given array A such that : A[0] = 9  A[1] = 3  A[2] = 9 A[3] = 3  A[4] = 9  A[5] = 7 A[6] = 9
*the function should return 7, as explained in the example above.
*
*Assume that :N is an odd integer within the range[1..1, 000, 000];
*             each element of array A is an integer within the range[1..1, 000, 000, 000];
*             all but one of the values in A occur an even number of times.
*Complexity  :expected worst - case time complexity is O(N);
*             expected worst - case space complexity is O(1), beyond input storage(not counting the storage required for input arguments).
*Elements of input arrays can be modified.
*/
int OddOccurrencesInArray(vector<int> &A);

/*Lesson3 - PermMissingElem
*A zero - indexed array A consisting of N different integers is given.The array contains integers in the range[1..(N + 1)], which means that
*exactly one element is missing.Your goal is to find that missing element.
*
*Write a function : int PermMissingElem(vector<int> &A);that, given a zero - indexed array A, returns the value of the missing element.
*
*For example, given array A such that :A[0] = 2,A[1] = 3,A[2] = 1,A[3] = 5,the function should return 4, as it is the missing element.
*
*Assume that :
*    N is an integer within the range[0..100, 000];
*    the elements of A are all distinct;
*    each element of array A is an integer within the range[1..(N + 1)].
*Complexity:
*    expected worst - case time complexity is O(N);
*    expected worst - case space complexity is O(1), beyond input storage(not counting the storage required for input arguments).
*Elements of input arrays can be modified.
*/
int PermMissingElem(vector<int> &A);

/*Lesson3 - TapeEquilibrium
*A non - empty zero - indexed array A consisting of N integers is given.Array A represents numbers on a tape.
*Any integer P, such that 0 < P < N, splits this tape into two non - empty parts : A[0], A[1], ..., A[P - 1] and A[P], A[P + 1], ..., A[N - 1].
*
*The difference between the two parts is the value of : | (A[0] + A[1] + ... + A[P - 1]) -(A[P] + A[P + 1] + ... + A[N - 1]) |
*
*In other words, it is the absolute difference between the sum of the first part and the sum of the second part.
*For example, consider array A such that :A[0] = 3,A[1] = 1,A[2] = 2,A[3] = 4,A[4] = 3,
*We can split this tape in four places :
*P = 1, difference = | 3 - 10 | = 7
*P = 2, difference = | 4 - 9 | = 5
*P = 3, difference = | 6 - 7 | = 1
*P = 4, difference = | 10 - 3 | = 7
*Write a function : int TapeEquilibrium(vector<int> &A);
*that, given a non - empty zero - indexed array A of N integers, returns the minimal difference that can be achieved.
*
*For example, given:A[0] = 3, A[1] = 1, A[2] = 2, A[3] = 4, A[4] = 3,
*the function should return 1, as explained above.
*
*Assume that :
*    N is an integer within the range[2..100, 000];
*    each element of array A is an integer within the range[-1, 000..1, 000].
*Complexity:
*    expected worst - case time complexity is O(N);
*    expected worst - case space complexity is O(N), beyond input storage(not counting the storage required for input arguments).
*Elements of input arrays can be modified.
*/
int TapeEquilibrium(vector<int> &A);

/*Lesson4 - MissingInteger
*Write a function :int MissingInteger(vector<int> &A);that, given a non - empty zero - indexed array A of N integers, returns the minimal positive
*integer(greater than 0) that does not occur in A.
*
*For example, given:A[0] = 1,A[1] = 3,A[2] = 6,A[3] = 4,A[4] = 1,A[5] = 2, the function should return 5.
*
*Assume that:
*    N is an integer within the range[1..100, 000];
*    each element of array A is an integer within the range[−2, 147, 483, 648..2, 147, 483, 647].
*Complexity:
*    expected worst - case time complexity is O(N);
*    expected worst - case space complexity is O(N), beyond input storage(not counting the storage required for input arguments).
Elements of input arrays can be modified.
*/
int MissingInteger(vector<int> &A);

/*Lesson4 - PermCheck
*A non - empty zero - indexed array A consisting of N integers is given.A permutation is a sequence containing each element from
*1 to N once, and only once.
*For example, array A such that :A[0] = 4,A[1] = 1,A[2] = 3,A[3] = 2,is a permutation, but array A such that :
*A[0] = 4,A[1] = 1,A[2] = 3,is not a permutation, because value 2 is missing.
*
*The goal is to check whether array A is a permutation.
*Write a function : int PermCheck(vector<int> &A);that, given a zero - indexed array A, returns 1 if array A is a permutation and 0 if it is not.
*
*For example, given array A such that :
*A[0] = 4
*A[1] = 1
*A[2] = 3
*A[3] = 2
*the function should return 1.
*
*Given array A such that :
*A[0] = 4
*A[1] = 1
*A[2] = 3
*the function should return 0.
*
*Assume that:
*    N is an integer within the range[1..100, 000];
*    each element of array A is an integer within the range[1..1, 000, 000, 000].
*Complexity:
*    expected worst - case time complexity is O(N);
*    expected worst - case space complexity is O(N), beyond input storage(not counting the storage required for input arguments).
*Elements of input arrays can be modified.
*/
int PermCheck(vector<int> &A);

/*Lesson4 - FrogRiverOne
*A small frog wants to get to the other side of a river.The frog is initially located on one bank of the river(position 0) and wants to get
*to the opposite bank(position X + 1).Leaves fall from a tree onto the surface of the river.You are given a zero - indexed array A consisting
*of N integers representing the falling leaves.A[K] represents the position where one leaf falls at time K, measured in seconds.
*
*The goal is to find the earliest time when the frog can jump to the other side of the river.The frog can cross only when leaves appear at
*every position across the river from 1 to X(that is, we want to find the earliest moment when all the positions from 1 to X are covered by leaves).
*You may assume that the speed of the current in the river is negligibly small, i.e.the leaves do not change their positions once they fall in the river.
*
*For example, you are given integer X = 5 and array A such that :
*A[0] = 1,A[1] = 3,A[2] = 1,A[3] = 4,A[4] = 2,A[5] = 3,A[6] = 5,A[7] = 4
*In second 6, a leaf falls into position 5. This is the earliest time when leaves appear in every position across the river.
*
*Write a function : int FrogRiverOne(int X, vector<int> &A);that, given a non - empty zero - indexed array A consisting of N integers and integer X,
*returns the earliest time when the frog can jump to the other side of the river.
*
*If the frog is never able to jump to the other side of the river, the function should return −1.
*
*For example, given X = 5 and array A such that : A[0] = 1, A[1] = 3, A[2] = 1, A[3] = 4, A[4] = 2, A[5] = 3, A[6] = 5, A[7] = 4
*the function should return 6, as explained above.
*
*Assume that:
*    N and X are integers within the range[1..100, 000];
*    each element of array A is an integer within the range[1..X].
*Complexity:
*    expected worst - case time complexity is O(N);
*    expected worst - case space complexity is O(X), beyond input storage(not counting the storage required for input arguments).
*/
int FrogRiverOne(int X, vector<int> &A);

/*Lesson4 - MaxCounters
You are given N counters, initially set to 0, and you have two possible operations on them :
    increase(X) − counter X is increased by 1,
    max counter − all counters are set to the maximum value of any counter.
A non - empty zero - indexed array A of M integers is given.This array represents consecutive operations :
    if A[K] = X, such that 1 ≤ X ≤ N, then operation K is increase(X),
    if A[K] = N + 1 then operation K is max counter.
For example, given integer N = 5 and array A such that :
    A[0] = 3
    A[1] = 4
    A[2] = 4
    A[3] = 6
    A[4] = 1
    A[5] = 4
    A[6] = 4
the values of the counters after each consecutive operation will be :
    (0, 0, 1, 0, 0)
    (0, 0, 1, 1, 0)
    (0, 0, 1, 2, 0)
    (2, 2, 2, 2, 2)
    (3, 2, 2, 2, 2)
    (3, 2, 2, 3, 2)
    (3, 2, 2, 4, 2)
The goal is to calculate the value of every counter after all operations.

Write a function :vector<int> MaxCounters(int N, vector<int> &A);
that, given an integer N and a non - empty zero - indexed array A consisting of M integers, returns a sequence of integers
representing the values of the counters.

The sequence should be returned as :
For example, given:
    A[0] = 3
    A[1] = 4
    A[2] = 4
    A[3] = 6
    A[4] = 1
    A[5] = 4
    A[6] = 4,the function should return[3, 2, 2, 4, 2], as explained above.
Assume that:
    N and M are integers within the range[1..100, 000];
    each element of array A is an integer within the range[1..N + 1].
Complexity:
    expected worst - case time complexity is O(N + M);
    expected worst - case space complexity is O(N), beyond input storage(not counting the storage required for input arguments).
Elements of input arrays can be modified.
*/
vector<int> MaxCounters(int N, vector<int> &A);

/*Lesson5 - PassingCars(Count the number of passing cars on the road.)
A non - empty zero - indexed array A consisting of N integers is given.The consecutive elements of array A represent consecutive cars on a road.

Array A contains only 0s and / or 1s:
    0 represents a car traveling east,
    1 represents a car traveling west.
The goal is to count passing cars.We say that a pair of cars(P, Q), where 0 ≤ P < Q < N, is passing when P is traveling to the east
and Q is traveling to the west.For example, consider array A such that :
    A[0] = 0
    A[1] = 1
    A[2] = 0
    A[3] = 1
    A[4] = 1
We have five pairs of passing cars : (0, 1), (0, 3), (0, 4), (2, 3), (2, 4).

Write a function:int PassingCars(vector<int> &A);that, given a non - empty zero - indexed array A of N integers, returns the number
of pairs of passing cars.The function should return −1 if the number of pairs of passing cars exceeds 1, 000, 000, 000.

For example, given:
    A[0] = 0
    A[1] = 1
    A[2] = 0
    A[3] = 1
    A[4] = 1,the function should return 5, as explained above.
Assume that:
    N is an integer within the range[1..100, 000];
    each element of array A is an integer that can have one of the following values : 0, 1.
Complexity :
    expected worst - case time complexity is O(N);
    expected worst - case space complexity is O(1), beyond input storage(not counting the storage required for input arguments).
Elements of input arrays can be modified.
*/
int PassingCars(vector<int> &A);