#include <stdio.h>

/*
What is recursion?
What is tail recursion?
*/


/*
Program to calculate factorial of n
*/

int factorial(int n){
    if (n < 0) return -1;

    if(n==0) return 1;

    return n*factorial(n-1);
}

/*
4*f(3)
      3*f(2)
              2*f(1)=1
                      return 1
             return 2*1
        return 3*2
return 4*6

Time Complexity:O(n)
Space Complexity:O(n)
*/

/*
Calculate factorial using tail recursion
*/

