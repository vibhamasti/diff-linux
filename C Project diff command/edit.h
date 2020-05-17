#ifndef EDIT_H
#define EDIT_H

#define MAX_LINES 128
#define MAX_CHARS 128

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct line {
    char *string;
    int len;
} Line;

enum action {
    EMPTY,
    INSERTION,
    SUBSTITUTION,
    DELETION
};

int min_3(int, int, int);
void strip(char*);
int edit_path(char*, char*);
int line_count(char*);
int line_index(char*, char[][MAX_CHARS], int);
int make_map(FILE*, FILE*, int [], int [], char [][MAX_CHARS]);
void print_dp(int, int, int*, int*, int*);
int LevenshteinDistance(int*, int *, int, int, int*);

#endif