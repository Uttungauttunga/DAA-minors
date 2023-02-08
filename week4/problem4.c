/*
Set Matrix Zeros

Given an m x n integer matrix, if an element is 0, set its entire row and column to 0's. You must do it in place.
Eg:
1 0 1
1 1 1
1 1 1
Output: (set first row and second column to all zeros)
0 0 0
1 0 1
1 0 1

Input Format

First line: m n, 'm' indicating the no. of rows, separated by a space with 'n' indicating the no. of columns 1 <= m, n <= 50
Next m lines: n numbers in each line separated by space

Output Format

Output with m*n elements in matrix format
Each of the m lines containing n numbers separated by space

Testcase 1
Input

3 3
1 0 1
1 1 1
1 1 1

Output

0 0 0 
1 0 1 
1 0 1
*/

#include<stdio.h>

int main()

{
    int m,n;
    int index_j,index_i;
    int count;
    scanf("%d",&m);
    scanf("%d",&n);

    int a[m][n];
    
    int I[m];
    int J[n];
    int count1=0;
    int count2=0;

    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }

    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        {
            if(a[i][j]==0)
            {
                I[count1++]=i;
                J[count2++]=j;

            }
        }
        
    }
  
    int y;
    int z;
    for(int i=0;i<count1;i++)
    {
        y=I[i];
        z=J[i];

        for(int h=0;h<n;h++)
        {
            a[y][h]=0;
        }

        for(int b=0;b<m;b++)
        {
            a[b][z]=0;
        }

    }
    
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        {
            printf("%d ",a[i][j]);
        }
        printf("\n");
    }


    
}
