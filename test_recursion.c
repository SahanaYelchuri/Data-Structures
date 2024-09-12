#include <stdio.h>
#include <assert.h>
#include <stdlib.h>

extern int factorial_rec(int);
extern int factorial_tail(int);

void test_factorial() {
    int input, expected, result_rec, result_tail;

    // Test Case 1
    input = 1;
    expected = 1;
    result_rec = factorial_rec(input);
    result_tail = factorial_tail(input);
    printf("Recursion: Input = %d, Expected = %d, Actual = %d\n", input, expected, result_rec);
    printf("Tail Recursion: Input = %d, Expected = %d, Actual = %d\n", input, expected, result_tail);
    assert(result_rec == expected && result_tail == expected);

    // Test Case 2
    input = 5;
    expected = 120;
    result_rec = factorial_rec(input);
    result_tail = factorial_tail(input);
    printf("Recursion: Input = %d, Expected = %d, Actual = %d\n", input, expected, result_rec);
    printf("Tail Recursion: Input = %d, Expected = %d, Actual = %d\n", input, expected, result_tail);
    assert(result_rec == expected && result_tail == expected);

    // Test Case 3
    input = 12;
    expected = 479001600;
    result_rec = factorial_rec(input);
    result_tail = factorial_tail(input);
    printf("Recursion: Input = %d, Expected = %d, Actual = %d\n", input, expected, result_rec);
    printf("Tail Recursion: Input = %d, Expected = %d, Actual = %d\n", input, expected, result_tail);
    assert(result_rec == expected && result_tail == expected);

    // Test Case 4
    input = 7;
    expected = 5040;
    result_rec = factorial_rec(input);
    result_tail = factorial_tail(input);
    printf("Recursion: Input = %d, Expected = %d, Actual = %d\n", input, expected, result_rec);
    printf("Tail Recursion: Input = %d, Expected = %d, Actual = %d\n", input, expected, result_tail);
    assert(result_rec == expected && result_tail == expected);

    // Test Case 5: Negative input
    input = -1;
    expected = -1;  // Assuming your factorial function returns -1 for invalid inputs
    result_rec = factorial_rec(input);  // You may modify your recursion functions to handle negative inputs.
    result_tail = factorial_tail(input);  // You may modify the tail recursion as well.
    printf("Recursion: Input = %d, Expected = %d, Actual = %d\n", input, expected, result_rec);
    printf("Tail Recursion: Input = %d, Expected = %d, Actual = %d\n", input, expected, result_tail);
    assert(result_rec == expected && result_tail == expected);

    printf("All factorial test cases passed for both recursion and tail recursion.\n");
}

int main() {
    test_factorial();
    return 0;
}