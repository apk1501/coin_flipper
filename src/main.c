#include <stdio.h>
#include <stdlib.h>
#include <time.h>

// Function to simulate a coin flip
const char* flipCoin() {
    int result = rand() % 2;  // 0 or 1
    return (result == 0) ? "Heads" : "Tails";
}

int main() {
    char choice;

    // Initialize random seed
    srand(time(NULL));

    printf("=== Coin Flip Simulator ===\n");

    do {
        printf("Flipping the coin...\n");
        printf("Result: %s\n", flipCoin());

        printf("Flip again? (y/n): ");
        scanf(" %c", &choice);  // space before %c handles stray newline

    } while (choice == 'y' || choice == 'Y');

    printf("Thanks for playing!\n");
    return 0;
}
