/*
Flood fill Algorithm

In MS-Paint, when we take the brush to a pixel and click, the color of the region of that pixel is replaced with a new selected color. Following is the problem statement to do this task. 

Given a 2D screen, location of a pixel in the screen and a color, replace color of the given pixel and all adjacent same colored pixels with the given color.
Input:
screen[M][N] = {{1, 1, 1, 1, 1, 1, 1, 1},
               {1, 1, 1, 1, 1, 1, 0, 0},
               {1, 0, 0, 1, 1, 0, 1, 1},
               {1, 2, 2, 2, 2, 0, 1, 0},
               {1, 1, 1, 2, 2, 0, 1, 0},
               {1, 1, 1, 2, 2, 2, 2, 0},
               {1, 1, 1, 1, 1, 2, 1, 1},
               {1, 1, 1, 1, 1, 2, 2, 1},
               };
    x = 4, y = 4, newColor = 3
The values in the given 2D screen indicate colors of the pixels.
x and y are coordinates of the brush, newColor is the color that should replace the previous color on screen[x][y] and all surrounding pixels with same color.
Output:
Screen should be changed to following.
screen[M][N] = {{1, 1, 1, 1, 1, 1, 1, 1},
               {1, 1, 1, 1, 1, 1, 0, 0},
               {1, 0, 0, 1, 1, 0, 1, 1},
               {1, 3, 3, 3, 3, 0, 1, 0},
               {1, 1, 1, 3, 3, 0, 1, 0},
               {1, 1, 1, 3, 3, 3, 3, 0},
               {1, 1, 1, 1, 1, 3, 1, 1},
               {1, 1, 1, 1, 1, 3, 3, 1},
               };

Input Format

First Line: m n, where m is the no. of rows and n is the no. of columns. m <= 10, n <=10.
Next m lines, row wise elements in matrix separated by a space
Last line x y c, where x is the x coordinate, y is the y coordinate and c is the new color.

Output Format

Matrix with the color replaced

Testcase 1
Input

8 8
1 1 1 1 1 1 1 1
1 1 1 1 1 1 0 0
1 0 0 1 1 0 1 1
1 2 2 2 2 0 1 0
1 1 1 2 2 0 1 0
1 1 1 2 2 2 2 0
1 1 1 1 1 2 1 1
1 1 1 1 1 2 2 1
4 4 3


Output

1 1 1 1 1 1 1 1 
1 1 1 1 1 1 0 0 
1 0 0 1 1 0 1 1 
1 3 3 3 3 0 1 0 
1 1 1 3 3 0 1 0 
1 1 1 3 3 3 3 0 
1 1 1 1 1 3 1 1 
1 1 1 1 1 3 3 1 
*/


#include<stdio.h>

int main()
{int m,n;
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

int row=0;
int column=0;
int pixel=0;
int oldpixel=0;

scanf("%d",&row);
scanf("%d",&column);
scanf("%d",&pixel);
oldpixel=a[row][column];
a[row][column]=pixel;

for(int i=0;i<m;i++)
{
    for(int j=0;j<n;j++)
    {if(a[i][j]==oldpixel && (a[i][j-1]==pixel||a[i][j+1]==pixel||a[i+1][j]==pixel||a[i-1][j]==pixel))
    {
        a[i][j]=pixel;
    }
    }

}

for(int i=m;i>=0;i--)
{
    for(int j=n;j>=0;j--)
    {if(a[i][j]==oldpixel && (a[i][j-1]==pixel||a[i][j+1]==pixel||a[i+1][j]==pixel||a[i-1][j]==pixel))
    {
        a[i][j]=pixel;
    }
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

