#include <stdio.h>
#include <stdlib.h>

#define EXIT_SUCCESS 0
#define EXIT_FAILURE -1

int main()
{
    FILE *file;

    // open the file in read-only mode
    file = fopen("myFile.txt", "r");

    if (file == NULL)
    {
        printf("Error in opening file");

        // exit failure
        exit(EXIT_FAILURE);
    }

    // exit success
    exit(EXIT_SUCCESS);
}