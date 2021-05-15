Input
The first line of input consists of a single integer T, denoting the number of integers in Kostya's list.

Then, there are T lines, each of them contain a single integer from the list.

Output
Output T lines. Each of these lines should contain the number of occurences of the digit 4 in the respective integer from Kostya's list.

Constraints
1 ≤ T ≤ 105
(Subtask 1): 0 ≤ Numbers from the list ≤ 9 - 33 points.
(Subtask 2): 0 ≤ Numbers from the list ≤ 109 - 67 points.
Example
Input:
5
447474
228
6664
40
81

Output:
4
0
1
1
0



////// CODE   //////




#include <iostream>
using namespace std;

int main() {
	int n,digit,four;
	cin>>n;
	int arr[n];
	for(int i=0;i<n;i++)
	cin>>arr[i];
	for(int i=0;i<n;i++)
	{
	    four = 0;
	    while(arr[i]!=0)
	    {
	        digit = arr[i]%10;
	        if(digit==4)
	        four++;
	        arr[i]/=10;
	    }
	    cout<<four<<endl;
	}
	return 0;
}
