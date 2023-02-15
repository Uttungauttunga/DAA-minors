/*
Peak element which is not smaller than its neighbors

Given an array of integers a[], the task is to print a list of all the peaks. A peak is an element in the array which is greater than its neighboring elements. Note that the first and the last element of the array will have a single neighbor.
Eg: Array: 50 40 10 90 30 (50 > 40 and 90 > 10 and 30)
Output: 50 90

Input Format

First line: 'N' indicating number of elements
Second line: N numbers separated by space

Output Format

Peak elements separated by space (if more than one)

Testcase 1
Input

5
50 40 10 90 30
Output

50 90
*/


#include<stdio.h>


int main()

{
    int n;
    scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }

    for(int i=0;i<n;i++)
    {
    if(i==0 && a[i+1]<a[i])
    {
        printf("%d ",a[i]);
    }

    else if(i!=n-1 && a[i+1]<a[i] && a[i-1]<a[i])
    {  
        printf("%d ",a[i]);
    }
    else if(a[i]>a[i-1])
    {
        printf("%d ",a[i]);
    }
    
    }

}
