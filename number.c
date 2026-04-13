#include <stdio.h>

// Function to check even or odd
void evenOdd(int n) {
    if (n % 2 == 0)
        printf("Even Number\n");
    else
        printf("Odd Number\n");
}

// Function to check prime
void checkPrime(int n) {
    int i, flag = 1;

    if (n <= 1) {
        printf("Not a Prime Number\n");
        return;
    }

    for (i = 2; i <= n/2; i++) {
        if (n % i == 0) {
            flag = 0;
            break;
        }
    }

    if (flag == 1)
        printf("Prime Number\n");
    else
        printf("Not a Prime Number\n");
}

// Function to check palindrome
void checkPalindrome(int n) {
    int original = n, reverse = 0, rem;

    while (n != 0) {
        rem = n % 10;
        reverse = reverse * 10 + rem;
        n /= 10;
    }

    if (original == reverse)
        printf("Palindrome Number\n");
    else
        printf("Not a Palindrome Number\n");
}

// Function to find factorial
void factorial(int n) {
    int i;
    long long fact = 1;

    for (i = 1; i <= n; i++) {
        fact *= i;
    }

    printf("Factorial = %lld\n", fact);
}

// Function to count digits
void countDigits(int n) {
    int count = 0;

    while (n != 0) {
        n /= 10;
        count++;
    }

    printf("Number of digits = %d\n", count);
}

// Function to sum digits
void sumDigits(int n) {
    int sum = 0;

    while (n != 0) {
        sum += n % 10;
        n /= 10;
    }

    printf("Sum of digits = %d\n", sum);
}

int main() {
    int num, choice;

    while (1) {
        printf("\n--- Number Analysis System ---\n");
        printf("1. Enter Number\n");
        printf("2. Check Even/Odd\n");
        printf("3. Check Prime\n");
        printf("4. Check Palindrome\n");
        printf("5. Find Factorial\n");
        printf("6. Count Digits\n");
        printf("7. Sum of Digits\n");
        printf("8. Exit\n");

        printf("Enter choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                printf("Enter number: ");
                scanf("%d", &num);
                break;
            case 2:
                evenOdd(num);
                break;
            case 3:
                checkPrime(num);
                break;
            case 4:
                checkPalindrome(num);
                break;
            case 5:
                factorial(num);
                break;
            case 6:
                countDigits(num);
                break;
            case 7:
                sumDigits(num);
                break;
            case 8:
                return 0;
            default:
                printf("Invalid choice!\n");
        }
    }

    return 0;
}