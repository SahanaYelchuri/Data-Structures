#include <stdio.h>
#include <stdlib.h>
/*
What is recursion?
-Defers operations
-needs the output from sub-problem to do the opertaion 
What is tail recursion?
-the recursive call is the last operation in the function
-no need to perform any further computation after the recursive call returns
*/


/*
Program to calculate factorial of n
*/

int factorial_rec(int n){
    if (n < 0) return -1;

    if(n==0) return 1;

    return n*factorial_rec(n-1);
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

int ft(int n, int p){
    if(n==0){
        return p;
    }
    
    return ft(n-1,n*p);

}

int factorial_tail(int n){
    ft(n,1);
}




