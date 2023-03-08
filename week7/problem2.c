/*
Find first and last position of an element in a sorted array

Given an array of integers sorted in non-decreasing order, find the starting and ending position of a given target value.
If target is not found in the array, return -1 -1.
You must write an algorithm with O(log n) runtime complexity.

Eg1: Array: 10 20 20 20 30 40
Target value: 20
Output: 1 3

Input Format

First line: 'N' indicating number of elements
Second line: N integers in non-decreasing order separated by space
Third line: Target value

Output Format

First position and last position separated by space

Testcase 1

Input

6
10 20 30 40 50 60
50

Output

4 4
*/

#include <stdio.h>

int firstPos(int a[], int key, int n);
int lastPos(int a[], int key, int n);

int main()
{
    int n;
    int a[10];
    int key;

    scanf("%d", &n);
    for(int i=0; i<n; i++)
        scanf("%d", &a[i]);
    scanf("%d", &key);

    int first=firstPos(a, key, n);
    int last=lastPos(a, key, n);

    if(first == -1 || last == -1)
        printf("-1 -1");
    else
        printf("%d %d", first, last);

    return 0;
}

int firstPos(int a[], int key, int n)
{
    int low = 0;
    int high = n-1;
    int result = -1;

    while(low <= high)
    {
        int mid = (low + high) / 2;
        if(a[mid] == key)
        {
            result = mid;
            high = mid - 1;
        }
        else if(a[mid] < key)
            low = mid + 1;
        else
            high = mid - 1;
    }

    return result;
}

int lastPos(int a[], int key, int n)
{
    int high = 0;
    int low = n-1;
    int result = -1;

    while(high <= low)
    {
        int mid = (high + low) / 2;
        if(a[mid] == key)
        {
            result = mid;
            high= mid + 1;
        }
        else if(a[mid] < key)
            high = mid + 1;
        else
            low = mid - 1;
    }

    return result;
}
