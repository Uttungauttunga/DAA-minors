/*
Search Insert Position

Given a sorted array of distinct integers and a target value, return the index if the target is found. If not, return the index where it would be if it were inserted in order. You must write an algorithm with O(log n) runtime complexity.
Eg1: Array : 1 2 5 10
Search Element: 5
Output: 2

Eg2: Array : 1 2 5 10
Search Element: 12
Output: 4

Input Format

First line: 'N' indicating number of elements
Second line: N numbers separated by space
Third line: Search element for which the position has to be found in the sorted array

Output Format

Position for search element insertion

Testcase 1

Input

4
1 2 5 10
5

Output

2
*/

#include<stdio.h>
int findInsPos(int a[],int key,int low,int high);
int main()
{
    int n;
    int a[10];
    int key;

    scanf("%d",&n);
    for(int i=0;i<n;i++)
    scanf("%d",&a[i]);
    scanf("%d",&key);
    int pos=findInsPos(a,key,0,n-1);
    printf("%d",pos);
}



int findInsPos(int a[],int key,int low,int high)
{   int mid;
    mid=(low+high)/2;
    if(a[mid]==key)
    {
        return mid;
    }
    
    else if(low == high)
    {
        if(key > a[low])
            return low + 1;
        else
            return low;
    }

   
    else if(a[mid]>key)
    {
        return findInsPos(a,key,low,mid-1);
    }

    else if(a[mid]<=key)
    {
       return  findInsPos(a,key,mid,high+1);
    }


}

    


    

