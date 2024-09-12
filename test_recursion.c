#include <stdio.h>
#include <assert.h>

extern int factorial(int);

void test_factorial(){
    int input, expected, result;

    // Test Case 1
    input = 1;
    expected = 1;
    result = factorial(input);
    printf("Input = %d, Expected Output = %d, Actual Output = %d\n", input, expected, result);
    assert(result == expected);

    // Test Case 2
    input = 5;
    expected = 120;
    result = factorial(input);
    printf("Input = %d, Expected Output = %d, Actual Output = %d\n", input, expected, result);
    assert(result == expected);

    // Test Case 3
    input = 12;
    expected = 479001600;
    result = factorial(input);
    printf("Input = %d, Expected Output = %d, Actual Output = %d\n", input, expected, result);
    assert(result == expected);

    // Test Case 4
    input = 7;
    expected = 5040;
    result = factorial(input);
    printf("Input = %d, Expected Output = %d, Actual Output = %d\n", input, expected, result);
    assert(result == expected);

    // Test Case 5: Negative input
    input = -1;
    expected = -1;  // Assuming your factorial function returns -1 for invalid inputs
    result = factorial(input);
    printf("Input = %d, Expected Output = %d, Actual Output = %d\n", input, expected, result);
    assert(result == expected);

    printf("All factorial test cases passed successfully.\n");
}

int main(){
    test_factorial();
    return 0;
}