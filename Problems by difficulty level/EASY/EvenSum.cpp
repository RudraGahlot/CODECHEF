//////    QUESTION   ////

There are N integers in an array A.

Two players take turns alternatively in placing signs (+ or -) before them, and then they all are added. 
  The sign can be placed before any element of the array that has not been assigned a sign yet. 
  All elements must be assigned a sign.

Player 1 wins if the resulting sum is even, else player 2 wins. Find out who shall win if they both play optimally.

Input:
First line will contain T, number of testcases. Then the testcases follow.
Each testcase contains 2 lines of input.
First line contains a single integer N, size of the array.
Second line contains N space separated integers - A1,A2,…,AN, denoting the array elements.
Output:
For each testcase, output in a single line "1", if the first person wins or "2" if the second person wins.

Constraints
1≤T≤10
1≤N≤105
1≤Ai≤109
Subtasks
Subtask #1 (100 points): Original constraints

Sample Input:
3
2
1 2
3
1 1 2
3
1 2 4
Sample Output:
2
1
2


////   CODE     /////


#include <iostream>
using namespace std;

int main() {
	// your code goes here
		int t;
	cin>>t;
	while(t)
	{
	    long long n,i,num=0;
	    cin>>n;
	    long long a[n];
	    for(i=0;i<n;i++)
	    {
	        cin>>a[i];
	        if(a[i]%2!=0)
	        {
	            num++;
	        }
	    }
	    if(num%2==0)
	    {
	        cout<<1<<endl;
	    }
	    else
	    {
	        cout<<2<<endl;
	    }
	    t--;
	}
	return 0;
}
