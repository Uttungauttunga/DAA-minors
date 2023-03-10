/*
Find the number of binary digits in the binary representation of a positive decimal integer using recursion.

Eg: 256 in binary form is 100000000. Therefore no. of digits = 9

Input Format

Positive integer n, 1<= n <= 256

Output Format

No. of binary digits

Testcase 1
Input

256


Output

9
*/


#include<stdio.h>
int count_to_binary(int);
int count_to_binary(int m)
{int count=0;

 if(m/2==0)
 {
     return 1;
 }

 else
 {
     return 1+count_to_binary(m/2);
 }
}
int main()
{int n;
scanf("%d",&n);
printf("%d",count_to_binary(n));
}
