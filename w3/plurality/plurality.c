#include <stdio.h>
#include <string.h>

// Max number of candidates
#define MAX 9

// Candidates have name and vote count
typedef struct
{
    char* name;
    int votes;
}
candidate;

// Array of candidates
candidate candidates[MAX];

// Number of candidates
int candidate_count;

// Function prototypes
int vote(char* name, int candidate_count);
void print_winner(void);

int main(int argc, char* argv[])
{
    setvbuf(stdout, NULL, _IONBF, 0);
    // Check for invalid usage
    if (argc < 2)
    {
        printf("Usage: plurality [candidate ...]\n");
        return 1;
    }

    // Populate array of candidates
    candidate_count = argc - 1;
    if (candidate_count > MAX)
    {
        printf("Maximum number of candidates is %i\n", MAX);
        return 2;
    }
    for (int i = 0; i < candidate_count; i++)
    {
        candidates[i].name = argv[i + 1];
        candidates[i].votes = 0;
    }

    int voter_count;
    printf("Number of voters: ");
    scanf("%i", &voter_count);

    // Loop over all voters
    for (int i = 0; i < voter_count; i++)
    {
        char name[50];
        printf("Vote: ");
        scanf("%s", name);
        // Check for invalid vote
        if (vote(name, candidate_count))
        {
            printf("Invalid vote.\n");
        }
    }

    // Display winner of election
    print_winner();
}

// Update vote totals given a new vote
int vote(char* name, int candidate_count)
{
    for (int i = 0; i < candidate_count; i++)
    {
        if (strcmp(candidates[i].name, name) == 0)
        {
            candidates[i].votes++;
            return 0;
        }
    }
    return 1;
}

// Print the winner (or winners) of the election
void print_winner(void)
{
    candidate candidate_max[MAX];
    for (int i = 0; i < MAX; i++) candidate_max[i].votes = 0;
    for (int i = 0; i < MAX; i++) candidate_max[i].name = "";
    int i = 0;
    while (candidates[i].name != NULL)
    {
        if (candidates[i].votes > candidate_max[0].votes)
        {
            candidate_max[0].votes = candidates[i].votes;
            candidate_max[0].name = candidates[i].name;
        }
        i++;
    }

    //check for more than one winner

    i = 0;
    int j = 1;
    while(candidates[i].name != NULL)
    {
        if (candidates[i].votes == candidate_max[0].votes && candidates[i].name != candidate_max[0].name)
        {
            candidate_max[j].votes = candidates[i].votes;
            candidate_max[j].name = candidates[i].name;
            j++;
        }
        i++;
    }

    i = 0;
    while (candidate_max[i].name != "")
    {
        printf("The winner is: %s, with %i votes!\n", candidate_max[i].name, candidate_max[i].votes);
        i++;
    }

}