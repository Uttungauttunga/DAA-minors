*/

Count of smaller numbers after self

Given an unsorted array arr[] of distinct integers, construct another array countSmaller[] such that countSmaller[i] contains the count of smaller elements on the right side of each element arr[i] in the array.

Eg: Array: 50 40 10 90 30
Output: 3 2 0 1 0

Input Format

First line: 'N' indicating number of elements
Second line: N numbers separated by space

Output Format

N numbers separated by space representing the no. of smaller elements on the right side of each element arr[i] in the array.

Testcase 1
Input

5
50 40 10 90 30
Output

3 2 0 1 0
*/

#include<stdio.h>

int main()
{
    int n,count;
    scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }

    for(int i=0;i<n;i++)
    {   count=0;
        for(int j=i+1;j<n;j++)
        {
        
            if(a[i]>a[j])
            {
                count++;
            }
        }
        printf("%d ",count);
    }
}
