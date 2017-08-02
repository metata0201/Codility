#include <algorithm>
#include <cmath>

using namespace std;
/*Lesson1 - BinaryGap
*A binary gap within a positive integer N is any maximal sequence of consecutive zeros that is surrounded by ones at both ends in the binary representation of N.
*
*For example, number 9 has binary representation 1001 and contains a binary gap of length 2. The number 529 has binary representation 1000010001 and contains two
*binary gaps : one of length 4 and one of length 3. The number 20 has binary representation 10100 and contains one binary gap of length 1. The number 15 has 
*binary representation 1111 and has no binary gaps.
*
*Write a function : int BinaryGap(int N);that, given a positive integer N, returns the length of its longest binary gap.The function should return 0 if N doesn't
*contain a binary gap.
*For example, given N = 1041 the function should return 5, because N has binary representation 10000010001 and so its longest binary gap is of length 5.
*
*Assume that :N is an integer within the range[1..2, 147, 483, 647].
*Complexity :
*           expected worst - case time complexity is O(log(N));
*           expected worst - case space complexity is O(1).
*/
int BinaryGap(int N);

/*Lesson3 - FrogJmp
*A small frog wants to get to the other side of the road.The frog is currently located at position X and wants to get to a position greater than or equal to Y.The
*small frog always jumps a fixed distance, D.Count the minimal number of jumps that the small frog must perform to reach its target.
*
*Write a function :int FrogJmp(int X, int Y, int D);
*that, given three integers X, Y and D, returns the minimal number of jumps from position X to a position equal to or greater than Y.
*
*For example, given:X = 10,Y = 85,D = 30,the function should return 3, because the frog will be positioned as follows :
*after the first jump, at position 10 + 30 = 40
*after the second jump, at position 10 + 30 + 30 = 70
*after the third jump, at position 10 + 30 + 30 + 30 = 100
*Assume that :
*    X, Y and D are integers within the range[1..1, 000, 000, 000];
*    X ¡Ü Y.
*Complexity:
*    expected worst - case time complexity is O(1);
*    expected worst - case space complexity is O(1).
*/
int FrogJmp(int X, int Y, int D);