#include <stdio.h>

int main() {
    int i, score = 0;
    char answer;

    char questions[3][100] = {
        "1. What is the capital of India?",
        "2. Which language is used for system programming?",
        "3. What is 5 + 3?"
    };

    char options[3][4][50] = {
        {"A. Mumbai", "B. Delhi", "C. Kolkata", "D. Chennai"},
        {"A. Python", "B. Java", "C. C", "D. HTML"},
        {"A. 6", "B. 7", "C. 8", "D. 9"}
    };

    char correctAnswers[3] = {'B', 'C', 'C'};

    printf("=== Simple Quiz Program ===\n\n");

    for (i = 0; i < 3; i++) {
        printf("%s\n", questions[i]);

        for (int j = 0; j < 4; j++) {
            printf("%s\n", options[i][j]);
        }

        printf("Enter your answer (A/B/C/D): ");
        scanf(" %c", &answer);

        if (answer == correctAnswers[i] || answer == correctAnswers[i] + 32) {
            printf("Correct!\n\n");
            score++;
        } else {
            printf("Wrong! Correct answer is %c\n\n", correctAnswers[i]);
        }
    }

    printf("=== Quiz Finished ===\n");
    printf("Your Score: %d out of 3\n", score);

    if (score == 3) {
        printf("Excellent!\n");
    } else if (score == 2) {
        printf("Good job!\n");
    } else {
        printf("Better luck next time!\n");
    }

    return 0;
}