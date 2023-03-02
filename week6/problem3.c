/*
MinMax in an array

Use divide and Conquer approach to find the maximum and minimum element present in an array.

Input Format

First line: 'N' indicating number of elements
Second line: N numbers separated by space

Output Format

Min element separated by space with maximum element

Testcase 1
Input

5
50 40 10 90 30
Output

10 90
*/


#include<stdio.h>
#include<stdlib.h>

int* MinMax(int *a,int low,int high)
{
      int min=0;
      int max=0;
      

      if(high-low+1==1)
      {
          min=a[low];
          max=a[high];
      }

      else if(high-low+1==2)
      {
      if(a[low]>a[high])
      {
          max=a[low];
          min=a[high];
      }  

       else{
           max=a[high];
           min=a[low];
       }

    
      }


      else
      {   int mid;

          mid=(high+low)/2;
          int *arr1,*arr2;
          arr1=MinMax(a,low,mid);
          arr2=MinMax(a,mid+1,high);

          if(arr1[0]<=arr2[0])
          {
              min=arr1[0];
          }
          else
          {
          min=arr2[0];
          }

          if(arr2[1]<=arr1[1])
          {
              max=arr1[1];
          }

          else{
              max=arr2[1];
          }
      }
    
    int *arr=malloc(2*sizeof(int));
    arr[0]=min;
    arr[1]=max;

    return arr;






}

int main()
{
    int n,count;
    scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
 
   int *abc;
   abc=MinMax(a,0,n-1);
   printf("%d %d",abc[0],abc[1]);

}
