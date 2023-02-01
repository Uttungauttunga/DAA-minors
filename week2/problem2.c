/*
Rotate a Matrix by 180 degree

Given a square matrix, the task is that we turn it by 180 degrees in an anti-clockwise direction without using any extra space.
Eg:
Input :  
1 2 3
4 5 6
7 8 9
Output :
9 8 7
6 5 4
3 2 1

Input Format

First Line: n, where n is the no. of rows and columns. n <=10.
Next n lines, row wise elements in matrix separated by a space.

Output Format

Matrix rotated to 180 degree anti clockwise.

Testcase 1
Input

3
1 2 3
4 5 6
7 8 9


Output

9 8 7 
6 5 4 
3 2 1

*/

*/
Rotate a Matrix by 180 degree

Given a square matrix, the task is that we turn it by 180 degrees in an anti-clockwise direction without using any extra space.
Eg:
Input :  
1 2 3
4 5 6
7 8 9
Output :
9 8 7
6 5 4
3 2 1

Input Format

First Line: n, where n is the no. of rows and columns. n <=10.
Next n lines, row wise elements in matrix separated by a space.

Output Format

Matrix rotated to 180 degree anti clockwise.

Testcase 1
Input

3
1 2 3
4 5 6
7 8 9


Output

9 8 7 
6 5 4 
3 2 1

*/

#include<stdio.h>

int main()
{
int n,temp;
scanf("%d",&n);
int arr[20][20];
int m=n;

for(int p=0;p<n;p++)
{
    for(int q=0;q<n;q++)
    {
        scanf("%d",&arr[p][q]);
     
        
    }

}
int i,j;
if(n%2)
{
for( i=0;i<n;i++)
{
    for( j=0;j<n;j++)

    {  
        {temp=arr[i][j];
        arr[i][j]=arr[n-1][n-1+i-j];
        arr[n-1][n-1+i-j]=temp;
        }
    }
   
   n--;

}
}

else
{
for( i=0;i<n;i++)
{
    for( j=0;j<m;j++)

    {  
        {temp=arr[i][j];
        arr[i][j]=arr[n-1][n-1+i-j];
        arr[n-1][n-1+i-j]=temp;
        }
    }
   
   n--;

}

}




for(int k=0;k<m;k++)
{
    for(int l=0;l<m;l++)
    {  
        printf("%d ",arr[k][l]);
    }
    printf("\n");

}

}
