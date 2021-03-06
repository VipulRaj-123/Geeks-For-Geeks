/* Given a string s, find the minimum number of changes required to it so that all substrings of the string become distinct.

Note: length of string is atmost 26.

Input:
The first line contains an integer T, number of test cases. For each testcase there is only one line containing s atmost 26 characters.

Output:
For each testcase in new line, print the minimum number of changes to the string.

Constraints:
1 <= T <= 100
1 <= |s| <= 26

Example:
Input
3
aab
aebaecedabbee
ab

Output
1
8
0

Explanation
Testcase 1: If we change one instance of 'a' to any character from 'c' to 'z', we get all distinct substrings.
Testcase 2:  We need to change 2 a's, 2 b's and 4 e's to get distinct substrings.
Testcase 3: As no change is required hence 0. */

#include <iostream>
#include <set>
using namespace std;

int dis(string s){
 int n=s.size();
 set<char>st;
 for(int i=0;i<n;i++)
 st.insert(s[i]);
 return n-st.size();
}

int main()
 {
	//code
	int t;
	cin>>t;
	while(t--){
	    string s;
	    cin>>s;
	    cout<<dis(s)<<endl;
	}
	return 0;
}
