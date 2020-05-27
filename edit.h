#ifndef EDIT_H
#define EDIT_H

#define MAX_LINES 128
#define MAX_CHARS 128

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// enum values that represent possible actions a line must undergo
enum action {
    EMPTY,
    INSERTION,
    SUBSTITUTION,
    DELETION,
    NO_OP
};


// Compute the edit path from file1 to file2
int edit_path(char*, char*);

// Finds the minimum of 3 numbers
int min_3(int, int, int);

// Strip trailing newline from line
void strip(char*);

// Counts the number of lines in a file
int line_count(char*);

// Makes a map of unique indices of lines to every unique line
// in both the files
int make_map(FILE*, FILE*, int [], int [], char [][MAX_CHARS]);

// Returns the unique index of a line in the map
int line_index(char*, char[][MAX_CHARS], int);

/* Print the minimum edit distance
(dynamic programming) table */
void print_dp(int, int, int*, int*, int*);

/* Compute the edit distance (Levenshtein Distance) and 
fills the matrix */
int LevenshteinDistance(int*, int *, int, int, int*);

#endif