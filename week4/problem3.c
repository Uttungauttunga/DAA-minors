/*
Find lucky numbers in matrix

Given an m x n matrix of distinct numbers, return all lucky numbers in the matrix. A lucky number is an element of the matrix such that it is the minimum element in its row and maximum in its column.
Eg:
50 30 60
80 20 70
40 10 90
Output: 30 (It is the minimum in the row and maximum in the column.

Input Format

First line: m n, 'm' indicating the no. of rows, separated by a space with 'n' indicating the no. of columns 1 <= m, n <= 50
Next m lines: n numbers in each line separated by space

Output Format

All the lucky numbers in different lines

Testcase 1
Input

3 3
50 30 60
80 20 70
40 10 90

Output

30

*/
#include<stdio.h>

int main()

{
    int m,n;

    
    int min,max;
    int index;
    scanf("%d",&m);
    scanf("%d",&n);
    int a[m][n];
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }

    for(int i=0;i<m;i++)
    {   
        index=0;
        min=a[i][0];
        for(int j=1;j<n;j++)
        {  
          if(min>a[i][j])
          
          {
              min=a[i][j];
              index=j;
          }
        }
        max=a[i][index];
        for(int s=0;s<m;s++)
        {
        if(a[s][index]>max)
        {

            max=a[s][index];
        }
        }
    
    if(min==max)
    {
        printf("%d\n",min);
    }
    
    }



    
}
