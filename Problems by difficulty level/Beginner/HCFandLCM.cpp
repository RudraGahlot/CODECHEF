Two integers A and B are the inputs. Write a program to find GCD and LCM of A and B.

Input
The first line contains an integer T, total number of testcases. Then follow T lines, each line contains an integer A and B.

Output
Display the GCD and LCM of A and B separated by space respectively. The answer for each test case must be displayed in a new line.

Constraints
1 ≤ T ≤ 1000
1 ≤ A,B ≤ 1000000
Example
Input
3 
120 140
10213 312
10 30

Output

20 840
1 3186456
10 30

  
  ////    code    /////
  
  
  #include <bits/stdc++.h>
using namespace std;
#define int long long
int32_t main() {

		int t;
	cin>>t;
	
	while(t--){
	    int A,B;
	    cin>>A >>B;
	    int g = __gcd(A, B);
        int l = (A / g) * B;
        cout << g << " " << l << endl;
	}
	return 0;
}
