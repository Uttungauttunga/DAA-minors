/*
Maximum Sub Array Sum

You are given an array that may contain both positive and negative integers. Find the sum of contiguous sub array of numbers which has the largest sum.
Eg: Array : -5 2 -1 10
Max sub array sum is by adding 2, -1, 10.
Output: 11 

Input Format

First line: 'N' indicating number of elements
Second line: N numbers separated by space

Output Format

An integer representing maximum sub array sum

Testcase 1
Input

4
-5 2 -1 10
Output

11
*/

#include<stdio.h>

int main()
{   //kadane's algorithm
    int n;
    int maxend=0,maxfar=0;
    scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }



    for(int i=0;i<n;i++)
    {
        maxend+=a[i];

        if(maxend<0)
        {
            maxend=0;
        }


        else if(maxfar<maxend)
        {
            maxfar=maxend;
        }

    }

printf("%d",maxfar);

}
