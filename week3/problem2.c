/*


Missing number in an array

Given an array of size N-1, such that, it only contains distinct integers in the range of 1 to N, find the missing element.

Input Format

First line: 'N', indicating the number of elements in array
Second line: N values separated by space

Output Format

The missing number

Testcase 1

Input
5
1 3 2 5


Output
4
*/
#include<stdio.h>


int main()

{

int flag=0;
int n;
int a[n];
scanf("%d",&n);
for(int i=0;i<n-1;i++)

{
scanf("%d",&a[i]);
}


for(int i=1;i<n;i++)
{
    flag=0;
    for(int j=0;j<n-1;j++)
    {
        if(i==a[j])
        {
            flag=1;
        }

        
    }
if(flag==0)
{
    printf("%d",i);
}
}
}
