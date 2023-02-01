/*
Jumping Caterpillars

Given N leaves numbered from 1 to N. A caterpillar at leaf 1, jumps from leaf to leaf in multiples of Aj (Aj, 2Aj, 3Aj). j is specific to the caterpillar. Whenever a caterpillar reaches a leaf, it eats it a little bit.
You have to find out how many leaves, from 1 to N, are left uneaten after all K caterpillars have reached the end. Each caterpillar has its own jump factor denoted by Aj, and each caterpillar starts at leaf number 1.
Example:
Input:
N=10 K=3
arr[] = {2, 3, 5} 
Output: 2
Explanation: The leaves eaten by the first caterpillar are (2, 4, 6, 8, 10). The leaves eaten by the second caterpillar are (3, 6, 9). The leaves eaten by the third caterpillar are (5, 10). Ultimately, the uneaten leaves are 1, 7 and their number is 2.

Input Format

First Line: 'N' indicating the no. of leaves
Second Line: 'K' indicating the no. of caterpillars
Third Line: 'K' values separated by space indicating the jump factor of each caterpillar.

Output Format

A number indicating the no. of uneaten leaves

Testcase 1
Input
10
3
2 3 5


Output
2
*/

#include<stdio.h>



int main()
{   int multiply;
    int n;
    scanf("%d",&n);
    int leaves[n];
    for(int i=1;i<=n;i++)
    {
        leaves[i]=0;
    }

    int k;
    scanf("%d",&k);
    int jump[k];

    for(int i=0;i<k;i++)
    {
    scanf("%d",&jump[i]);
    }
for(int m=0;m<k;m++)
{   multiply=jump[m];
    for(int i=multiply;i<=n;i=i+multiply)
    {

      leaves[i]=1;
    }

}
int count=0;
for(int i=1;i<=n;i++)
    {
        if(leaves[i]==0)
        {  
            count+=1;
        }
    }
printf("%d",count);
}
