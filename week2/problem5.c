/*
Find the row with maximum number of 1s

Given a boolean 2D array, where each row is sorted. Find the row with the maximum number of 1s.
Eg: Input matrix : 
0 1 1 1
0 0 1 1
1 1 1 1  // this row has maximum 1s
0 0 0 0
Output: 
2 

Input Format

First Line: m n, where m is the no. of rows and n is the no. of columns. m <= 10, n <=10.
Next m lines, row wise sorted elements in matrix separated by a space

Output Format

Index of the row containing max no. of 1s

Testcase 1
Input

4 4
0 1 1 1
0 0 1 1
1 1 1 1
0 0 0 0

Output

2
*/

#include<stdio.h>

int main()
{int m,n;
int count=0;
int maxcount=0;
scanf("%d",&m);
scanf("%d",&n);
int a[m][n];
int index=0;
for(int i=0;i<m;i++)
{
    for(int j=0;j<n;j++)
    {
        scanf("%d",&a[i][j]);
        
    }
}


for(int i=0;i<m;i++)
{  count=0;
    for(int j=0;j<n;j++)
    { 
        if((a[i][j])==1)
        {
        count+=1;
        }

    }
    if(maxcount<count)
    {
        maxcount=count;
        index=i;
    }

}

printf("%d",index);


}
