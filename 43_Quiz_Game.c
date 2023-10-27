#include <stdio.h>
#include <ctype.h>

int main()
{
    char questions[][100] = {"1. What year did the c language debut?: ",
                             "2. Who is credited with creating c?: ",
                             "3. What is the predecessor of c?: "};

    char options[][100] = {"A. 1969",
                           "B. 1972",
                           "C. 1975",
                           "D. 1999",
                           "A. Dennis Ritchie",
                           "B. N Tesla",
                           "C. J Carmack",
                           "D. Dhoni",
                           "A. Objective C",
                           "B. B",
                           "C. C++",
                           "D. C#"};

    char answers[3] = {'B', 'A', 'B'};

    int numberOfQuestions = sizeof(questions) / sizeof(questions[0]);

    char guess;
    int score;

    printf("Quiz Game\n");

    for (int i = 0; i < numberOfQuestions; i++)
    {
        printf("********************\n");
        printf("%s\n", questions[i]);
        printf("*********************\n");

        for (int j = (i * 4); j < (i * 4) + 4; j++)
        {
            printf("%s\n", options[j]);
        }
    }
    return 0;
}
