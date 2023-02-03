/*
Union and Intersection of array elements

Given two sorted arrays, find the union and intersection.
Example: Input: 
arr1[4] = {1, 5, 8 ,10}     arr2[3] = {7, 10, 20}
Output:  
Union = 1 5 7 8 10 20
Intersection = 10

Input Format

Input Format:
First line: 'N', indicating the number of elements in array1
Second line: N values separated by space
Third line: 'M', indicating the number of elements in array2
Fourth line: M values separated by space

Output Format

Output Format:
First line: Union of numbers
Second line: Intersection of numbers (if exists)

Testcase 1
Input

4
1 5 8 10
3
7 10 20
  
Output

1 5 7 8 10 20 
10
*/

#include<stdio.h>

int main()
{
int m,n;
int count1=0;
int count2=0;
int unio[100];
int intersection[100];
scanf("%d",&m);
int arr1[m];
for(int i=0;i<m;i++)
{
    scanf("%d",&arr1[i]);
    unio[count2]=arr1[i];
    count2=count2+1;
}

scanf("%d",&n);
int arr2[n];
for(int i=0;i<n;i++)
{
    scanf("%d",&arr2[i]);
    unio[count2]=arr2[i];
    count2=count2+1;
}



for(int s=0;s<m;s++)
{ 
    for(int p=0;p<n;p++)
    {   
        if(arr1[s]==arr2[p])
        {
            intersection[count1]=arr1[s];
           
        
            count1=count1+1;
            
        }
    }

}
int temp=0;
for(int i=0;i<count2;i++)
{ for(int j=0;j<count2;j++)
    if(unio[i]<unio[j])
    {
    temp=unio[i];
    unio[i]=unio[j];
    unio[j]=temp;
    }
}
int count3=0;
for(int i=0;i<count2;i++)
{
    for(int j=0;j<count1;j++)
    {   
        if(unio[i]==intersection[j])
        {count3=count3+1;
        
        if(count3!=1)
        {
            unio[i]=NULL;
        }

        }
        
    }
}

for(int u=0;u<count2;u++)
{  if(unio[u]!=NULL)
    {
    printf("%d ",unio[u]);
    }
}


printf("\n");

for(int x=0;x<count1;x++)
{

    printf("%d ",intersection[x]);

}
}
