/*
Robot Return to Origin

There is a robot starting at the position (0, 0), the origin, on a 2D plane. Given a sequence of its moves, judge if this robot ends up at (0, 0) after it completes its moves.
You are given a string moves that represents the move sequence of the robot where moves[i] represents its ith move. Valid moves are 'R' (right), 'L' (left), 'U' (up), and 'D' (down).
Return true if the robot returns to the origin after it finishes all of its moves, or false otherwise.
Note: The way that the robot is "facing" is irrelevant. 'R' will always make the robot move to the right once, 'L' will always make it move left, etc. Also, assume that the magnitude of the robot's movement is the same for each move.
Example 1:
Input: moves = "UD"
Output: true
Explanation: The robot moves up once, and then down once. All moves have the same magnitude, so it ended up at the origin where it started. Therefore, we return true.
Example 2:
Input: moves = "LL"
Output: false
Explanation: The robot moves left twice. It ends up two "moves" to the left of the origin. We return false because it is not at the origin at the end of its moves.

Input Format

A string representing moves

Output Format

String "true" or "false"

Testcase 1
Input

UD
Output

true
*/


#include<stdio.h>




int main()
{char string;
int move0=0;
int move1=0;

while((string=getchar())!=EOF)
{    
    if(string=='U')
    {
        move0=move0+1;
        
    }
    else if(string=='D')
    {
        move0=move0-1;
    }
    else if(string=='R')
    {
        move1=move1+1;
    }
    else if(string=='L')
    {
        move1=move1-1;
    }
    

    
    
 

}
if(move1==0 && move0==0){
    printf("true");}

else{
    printf("false");
}

}
