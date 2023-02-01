/*
To check if a given square matrix is identity matrix.

An Identity Matrix is a square matrix in which all the elements of the principal or main diagonal are 1’s and all other elements are 0’s.

Input Format

First Line: No. of rows in the matrix 1<= n <=5
Next n lines: Matrix elements row wise separated by space

Output Format

Print Yes if the matrix is identity matrix else print No.

Testcase 1
Input

3
1 0 0
0 1 0
0 0 1

Output

Yes
*/


#include<stdio.h>

void main()
{int flag=0;
int n;
scanf("%d",&n);
int a[100][100];

for(int i=0;i<n;i++)


{
 for(int j=0;j<n;j++)
 {
     scanf("%d",&a[i][j]);
 }
}


for(int i=0;i<n;i++)


{
 for(int j=0;j<n;j++)
 {
   if(i==j)
   {
       if(a[i][j]!=1)
       {
           flag=1;
       }
   } 

   else{

       if(a[i][j]!=0)
       {
           flag=1;
       }
   }
 }
}

if(flag==1)
{
    printf("No");
}

else{
    printf("Yes");
}
}
