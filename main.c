#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int guessednumber;
    int trys = 0;
    int difficulty;
    clock_t start_time, end_time;
    double elapsed_time;
    
   //i dont really know what this does but this does magic (if you know what this does please tell at dms on discord @GGLVXD)
    srand(time(0)); 

    printf("Welcome to guess the number! \n");
    printf("Please choose difficulty: \n");
    printf("Level 1: Number from 1 to 1000\n");
    printf("Level 2: Number from 1 to 100000\n");
    printf("Level 3: Number from 1 to 1000000\n");
    printf("Please choose from 1 to 3: ");
    scanf("%d", &difficulty);
    
    start_time = clock();

    if(difficulty == 1) {
        int randomnumber = rand() % 1000;
        printf("You chose difficulty 1\n");

        do {
            printf("Guess the number: ");
            scanf("%d", &guessednumber);
            trys++;
            if(guessednumber > randomnumber) {
                printf("Lower\n");
            } else if(guessednumber < randomnumber) {
                printf("Higher\n");
            } else {
                end_time = clock();
                elapsed_time = ((double) (end_time - start_time)) / CLOCKS_PER_SEC;
                printf("You won!\n");
                printf("With %d tries\n", trys);
                printf("Time it took: %.2f seconds\n", elapsed_time);
                printf("tap any key to to kill process...");
                while (!kbhit()) {
                }
                break;
            }
        } while(1);

    } else if(difficulty == 2) {
        int randomnumber = rand() % 100000;
        printf("You chose difficulty 2\n");

        do {
            printf("Guess the number: ");
            scanf("%d", &guessednumber);
            trys++;
            if(guessednumber > randomnumber) {
                printf("Lower\n");
            } else if(guessednumber < randomnumber) {
                printf("Higher\n");
            } else {
                end_time = clock();
                elapsed_time = ((double) (end_time - start_time)) / CLOCKS_PER_SEC;
                printf("You won!\n");
                printf("With %d tries\n", trys);
                printf("Time it took: %.2f seconds\n", elapsed_time);
                printf("tap any key to to kill process...");
                while (!kbhit()) {
                }
                break;
            }
        } while(1);

    } else if(difficulty == 3) {
        int randomnumber = rand() % 1000000;
        printf("You chose difficulty 3\n");

        do {
            printf("Guess the number: ");
            scanf("%d", &guessednumber);
            trys++;
            if(guessednumber > randomnumber) {
                printf("Lower\n");
            } else if(guessednumber < randomnumber) {
                printf("Higher\n");
            } else {
                end_time = clock();
                elapsed_time = ((double) (end_time - start_time)) / CLOCKS_PER_SEC;
                printf("You won!\n");
                printf("With %d tries\n", trys);
                printf("Time it took: %.2f seconds\n", elapsed_time);
                printf("tap any key to to kill process...");
                while (!kbhit()) {
                }
                break;
            }
        } while(1);

    } else {
        printf("Invalid choice\n");
        return 1;
    }

    return 0;
}
