/*
Square root of a number

Given an integer X, find its square root. If X is not a perfect square, then return floor(√x).
Example: 
Input: 25 Output: 5
Input: 37 Output: 6 (square toot of 37 lies between 6 and 7, therefore 6)

Input Format

'N' indicating the integer to which square root needs to be computed

Output Format

Computed square root

Testcase 1
Input

101
Output

10
*/


#include<stdio.h>
#include<math.h>



int main()

{

    int a,b,n=0;
    scanf("%d",&n);
    a = pow(n,0.5);
    b = a-(a%1);
    printf("%d",b);
}
