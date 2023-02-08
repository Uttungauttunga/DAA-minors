/*
Find min and max element in an array

Given an array of size n, find the minimum and maximum element of the array.
Eg: 50, 40, 10, 90, 30
Output: 
10
90

Input Format

First line: 'N' indicating number of elements
Second line: N numbers separated by space

Output Format

First line: Min element
Second line: Max element

Testcase 1
Input

5
50 40 10 90 30


Output

10
90
*/

#include<stdio.h>

int main()
{
    int n;
    scanf("%d",&n);
    int a[n];
    int max,min;
    

    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }

    max=a[0];
    min=a[0];


    for(int i=0;i<n;i++)
    {
        for(int j=i;j<n;j++)
        {
            if(a[i]<a[j])
            {
                min=a[i];
            }

            else if(a[i]>a[j])
            {
                max=a[i];
            }
        }
    }

    printf("%d\n%d",min,max);
}
