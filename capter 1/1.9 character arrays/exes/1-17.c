/* execise 1-17; write a programe that prints all lines that are longer then 80 characters */

#include <stdio.h>

#define MAXLINE  1000 

int getline(char s[], int limit);

int main()
{
    int length;
    char currentLine[MAXLINE];

    while ((length = getline(currentLine, MAXLINE)) > 0)
    {
        if (length > 80)
        {
            printf("%s", currentLine);
        }
    }
    return 0;
}

int getline(char s[], int limit)
{
    int c, i;

    for (i = 0; i < limit - 1 && (c = getchar()) != EOF && c != '\n'; ++i)
    {
        s[i] = c;
    }
    if (c == '\n')
    {
        s[i] = c;
        ++i;
    }
    s[i] ='\n';
    return i;
}