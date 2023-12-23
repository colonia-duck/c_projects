/*
    write a programe that take an input;
        removes traling blanks from input;
            removes entirely blank lines
*/

#include <stdio.h>

#define MAXLINE 1000

int get_line(char line[], int limit)
{
    int c, i;

    for (i = 0; i < limit - 1 && (c = getchar()) != EOF && c != '\n'; ++i)
    {
        line[i] = c;
    }
    if (c == '\n')
        line[i++] = c;
    {
        line[i] = '\0';
    }

    return i;
}

void trim(char line[], int length)
{
    int i;

    for (i = length - 2; i >= 0 && (line[i] == ' ' || line[i] == '\t'); i--)
    {
        line[++i] = '\n';
        line[++i] = '\0';
    }
}

int main()
{
    int length;
    char line[MAXLINE];

    while ((length = get_line(line, MAXLINE)) > 0) // there was a line
    {
        trim(line, length);
        if (line[0] != '\n')
            printf("%s", line);
    }
    return 0;
}