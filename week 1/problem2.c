/*
Dutch National Flag Problem

Sort the given array a[]. Array a[] consists of only 0s, 1s, and 2s.
Eg: If the array a = { 0, 2, 1, 2, 1, 0, 0, 0, 2}
Output should be the sorted array in ascending order a = { 0, 0, 0, 0, 1, 1, 2, 2, 2}.

Input Format

First Line: No. of elements in array 1<= n <= 10
Second Line: Array elements separated by space

Output Format

Sorted array elements separated by space

Testcase 1
Input

9
0 2 1 2 1 0 0 0 1

Output

0 0 0 0 1 1 1 2 2

*/

#include<stdio.h>

void main()

{
int a[100];
int temp;
int n;
scanf("%d",&n);

for(int i=0;i<n;i++)
{

    scanf("%d",&a[i]);
}
for(int i=0;i<n;i++)
{
    for(int j=i;j<n;j++)

    {
        if(a[i]>a[j])
        {
            temp=a[i];
            a[i]=a[j];
            a[j]=temp;
        }
    }
}
for(int i=0;i<n;i++)
{

    printf("%d ",a[i]);
}



}
