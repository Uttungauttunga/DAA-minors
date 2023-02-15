/*
Median of two sorted Arrays

Given two sorted arrays, a[] and b[], find the median of these sorted arrays when merged as another sorted array.
Eg1: Array 1: 10 100
Array 2: 50 60 70
Output: 60 (It is the median of the merged sorted array: 10 50 60 70 100)

Eg1: Array 1: 10 100 200
Array 2: 50 60 65
Output: 62.5 (It is the median of the merged sorted array: 10 50 60 65 100 200)

Input Format

First line: m indicating number of elements in array 1
Second line: m sorted numbers of first array separated by space
Third line: n indicating number of elements in array 2
Fourth line: n sorted numbers of second array separated by space

Output Format

Median element of the merged sorted array

Testcase 1
Input

2
10 100
3
50 60 70

Output

60.000000

*/

#include<stdio.h>

int main()

{
    int m,n,i;
    scanf("%d",&m);
    int arr1[100];
    

    for(i=0;i<m;i++)
    {
        scanf("%d",&arr1[i]);
    }

    scanf("%d",&n);
  
    
    for(i=m;i<m+n;i++)
    {
        scanf("%d",&arr1[i]);
        
    }

    int temp;
    for(int i=0;i<m+n;i++)
    {
        for(int j=i;j<m+n;j++)
        { if(arr1[i]>arr1[j])
        {
            temp=arr1[i];
            arr1[i]=arr1[j];
            arr1[j]=temp;
        }
        }
    }
    
    if((m+n)%2)

    {printf("%f",arr1[((m+n-1)/2)]/1.0);
    }

    else
    {
        printf("%f",((arr1[((m+n-1)/2)+1])+(arr1[((m+n-1)/2)]))/2.0);
    }
   
}
