// . Write a program that takes as input your roll number, say CS26B013 character-by-character and
// prints the following: You are a Computer Science BTech student who joined in 2026, and your roll
// number is 13. If you write CE25B018, the output should be You are a Civil Engineering BTech
// student who joined in 2025, and your roll number is 18.

#include <stdio.h>

int main() {
    char z;
    int a, b;

    // Example input format: CS22B101
    scanf("CS%d%c%d", &a, &z, &b);

    if (z == 'B') {
        printf("You are a Computer Science BTech student who joined in 20%d, and your roll number is %d\n", a, b);
    } else {
        printf("You are a Computer Science MTech student who joined in 20%d, and your roll number is %d\n", a, b);
    }

    return 0;
}
