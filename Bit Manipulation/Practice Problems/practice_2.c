/*
Given two integers a and b, the task is to determine whether they have opposite signs. 
Return true if the signs of the two numbers are different and false otherwise.
Examples:

Input: a = -5, b = 10
Output: true
Explanation: One number is negative and the other is positive, so their signs are different.

Input: a = 7, b = 15
Output: false
Explanation: Both numbers are positive, so their signs are the same.

Input: a = 99, b = -112
Output: true
Explanation: One number is negative and the other is positive, so their signs are different.
*/

#include<stdio.h>
_Bool check_sign(int a, int b);

int main(void)
{
    int a,b;
    printf("Enter two integer numbers: ");
    scanf("%d %d", &a, &b);
    int alpha = check_sign(a,b);
    if(alpha)  printf("true\n"); // Different Sign = True
    else printf("false\n"); // Same Sign = False
return 0;
}

_Bool check_sign(int a, int b)
{
    int x = ((a^b))>>31;
    if(x == -1) return 1;
    else return 0;
}