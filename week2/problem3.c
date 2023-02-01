/*

Count number of islands where every island is row-wise and column-wise separated.

Given a rectangular matrix which has only two possible values 1 and 0. The values 1 always appear in form of rectangular islands and these islands are always row-wise and column-wise separated by at least one line of 0s. Note that islands can only be diagonally adjacent. Count the number of islands in the given matrix.
Eg 1:
mat[M][N] =  {{0, 0, 0},
{1, 1, 0},
{1, 1, 0},
{0, 0, 1},
{0, 0, 1},
{1, 1, 0} 
};
Output: Number of islands is 3

Eg 2:
mat[M][N] =  {{1, 0, 0, 0, 0, 0},
              {1, 0, 1, 1, 1, 1},
              {0, 0, 0, 0, 0, 0},
              {1, 1, 1, 0, 1, 1},
              {1, 1, 1, 0, 1, 1},
              {0, 0, 0, 0, 1, 1},
             };
Output: Number of islands is 4

Input Format

First Line: m n, where m is the no. of rows and n is the no. of columns. m <= 10, n <=10.
Next m lines, matrix containing only 1 and 0 row wise

Output Format

A number representing the no. of islands

Testcase 1
Input

6 3
0 0 0
1 1 0
1 1 0
0 0 1
0 0 1
1 1 0


Output

3

*/


#include<stdio.h>

int a[11][11];


int counting_island(int x_cor,int y_cor,int m,int n,int number_of_islands)
{int neighbour;

a[x_cor][y_cor]=neighbour;
for(int i=0;i<m;i++)
{
    for(int j=0;j<n;j++)
    {if(a[i][j]==1 && (a[i][j-1]==neighbour||a[i][j+1]==neighbour||a[i+1][j]==neighbour||a[i-1][j]==neighbour))
    {
        a[i][j]=neighbour;
    }
    }

}

for(int i=m;i>=0;i--)
{
    for(int j=n;j>=0;j--)
    {if(a[i][j]==1 && (a[i][j-1]==neighbour||a[i][j+1]==neighbour||a[i+1][j]==neighbour||a[i-1][j]==neighbour))
    {
        a[i][j]=neighbour;
    }
    }

}
return ++number_of_islands;
}



int main()
{int m,n,number_of_islands;
scanf("%d",&m);
scanf("%d",&n);
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
        if((a[i][j])==1)
        {
            number_of_islands=counting_island(i,j,m,n,number_of_islands);
        }
        
    }
}

printf("%d",number_of_islands);

}
