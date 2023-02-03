/*
Duplicate element in an array

Given an array of n elements that contains elements from 0 to n-1, with any of these numbers appearing any number of times. Find these repeating numbers.
n=7, arr[]= {1, 2, 3, 6, 3, 6, 1}
Output: 1 3 6

Input Format

First line: 'N' indicating number of elements
Second line: N numbers separated by space

Output Format

Repeated elements separated by space

Testcase 1

Input

7
1 2 3 6 3 6 1


Output

1 3 6

*/

#include<stdio.h>

int main()

{
int n;
scanf("%d",&n);
int multiple[n];
int unique[100];
int c=0;
int count;
for(int i=0;i<n;i++)
{
scanf("%d",&multiple[i]);

}


for(int i=0;i<n-1;i++)
{   count=0;
    for(int j=i+1;j<n;j++)
    {  
        if(multiple[i]==multiple[j])
         {count+=1;
         }

    }
        if(count>=1)

        {  
            unique[c]=multiple[i];
            c=c+1;
        }

}


for(int i=0;i<c;i++)
{
    printf("%d ",unique[i]);
}





}
