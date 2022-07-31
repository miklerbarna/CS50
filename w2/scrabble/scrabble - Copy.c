#include <stdio.h>
#include <ctype.h>
#include <string.h>

// Points assigned to each letter of the alphabet
int POINTS[] = {1, 3, 3, 2, 1, 4, 2, 4, 1, 8, 5, 1, 3, 1, 1, 3, 10, 1, 1, 1, 1, 4, 4, 8, 4, 10};

int compute_score(char* word);
int letter_score(char letter);

int main(void)
{
    // setvbuf(stdout, NULL, _IONBF, 0);
    // Get input words from both players
    printf("Player 1: ");
    char word1[50];
    scanf("%s", &word1);

    printf("Player 2: ");
    char word2[50];
    scanf("%s", &word2);

    compute_score(word1);
    // Score both words
    int score1 = compute_score(word1);
    int score2 = compute_score(word2);

    printf("%i and %i\n", score1, score2);

    if (score1 > score2)
    {
        printf("Player 1 is the winner");
    }
    else if (score1 < score2)
    {
        printf("Player 2 is the winner");
    }
    else 
    {
        printf("It\'s a tie");
    }
    // TODO: Print the winner
}

int compute_score(char* word)
{
    int score = 0;
    int length = strlen(word);
    for (int i = 0; i < length; i++)
    {
        // printf("letter: %c\n", word[i]);
        score += letter_score(word[i]);
        // printf("Score after evaluation: %i\n", score);
    }

    return score;
    
}

int letter_score(char letter)
{
    if ( letter >= 97 && letter <= 122)
    {
       return POINTS[letter - 96 - 1];
    }
    else if (letter >= 65 && letter <= 90)
    {
        return POINTS[letter - 64 - 1];
    }
    else 
    {
        // printf("got here\n");
        return 0;
    }
    
}
