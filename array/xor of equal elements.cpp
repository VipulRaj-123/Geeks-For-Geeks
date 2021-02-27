/*Given an array A[] of size N. Find the number of pairs (i, j) such that
Ai XOR Aj = 0, and 1 = i < j = N.

Example 1:

​Input : arr[ ] = {1, 3, 4, 1, 4}
Output : 2
Explanation:
Index( 0, 3 ) and (2 , 4 ) are only pairs 
whose xors is zero so count is 2.

​Example 2:

Input : arr[ ] = {2, 2, 2} 
Output :  3

 

Your Task:
This is a function problem. The input is already taken care of by the driver code. You only need to complete the function calculate() that takes an array (arr), sizeOfArray (n), and return the count of Zeros Xor's Pairs. The driver code takes care of the printing.

Expected Time Complexity: O(N*Log(N)).
Expected Auxiliary Space: O(1).



Output:
For each test case, output a single integer i.e counts of Zeros Xors Pairs

Constraints
2 = N = 10^5
1 = A[i] = 10^5 

LOGIC :- As XOR of equal elements is 0 so we sort them and count number of equal pairs*/

long long int calculate(int a[], int n)
{
    // Complete the function
    sort(a,a+n);
    long long int c=1,sum=0;
    for(int i=0;i<n;i++){
        if(a[i]==a[i+1])
        c++;
        else{
            sum+=(c-1)*c/2;
            c=1;
        }
    }
    return sum;
}
 


