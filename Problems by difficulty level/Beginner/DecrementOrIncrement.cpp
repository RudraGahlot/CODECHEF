Write a program to obtain a number [Math Processing Error] and increment its value by 1 if the number is divisible by 4 [Math Processing Error] decrement its value by 1.

Input:
First line will contain a number [Math Processing Error].
Output:
Output a single line, the new value of the number.

Constraints
[Math Processing Error]
Sample Input:
5
Sample Output:
4
EXPLANATION:
Since 5 is not divisible by 4 hence, its value is decreased by 1.





//////// CODE  /////



#include <iostream>
using namespace std;

int main() {
	int n;
	cin>>n;
	if(n%4==0)
      {
          n=n+1;
          cout<<n<<endl;
      }
      else
     {
         n=n-1;
         cout<<n<<endl;
         
     }
	return 0;
}
