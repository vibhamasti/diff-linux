// Write a program in C to mimic the “diff” command 
// (compare files line by line) on Linux. Refer man 
// pages for the command “diff”.

#include <stdio.h>
#include <string.h>

#include <time.h>

#include "edit.h"


int main(int argc, char *argv[]) {

    // Start clock
    time_t start = clock();

    // Validate input
    if (argc != 3) {
        printf("Insufficient/too many arguments.\n");
        printf ("Usage: ./diff <file1> <file2>\n");
        // Execute echo $? to find return status
        return 1;
    }

    // The file pointers
    char *fname_1=argv[1], *fname_2=argv[2];

    // Pass the filenames to edit_path function
    int valid = edit_path(fname_1, fname_2);

    if (valid < 0) {
        return 1;
    }

    // Stop clock
    time_t end = clock();

    double elapsed = (end-start) * 1000.0/CLOCKS_PER_SEC;

    printf("Executed in %f ms\n", elapsed);

    return 0;
}
