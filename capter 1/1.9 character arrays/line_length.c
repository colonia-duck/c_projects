#include<stdio.h>

#define MAXLINE 1000

int getline(char line[], int maxline);
void copy(char to[], char from[]);

/* print longest input line */
int main()
{
    int length, maxlength;
    char line[MAXLINE];     // current input line
    char longest[MAXLINE];  //longest line save here

    maxlength = 0;

    while ((length = getline(line, MAXLINE)) > 0)
    {
        if (length > maxlength)
        {
            maxlength = length;
            copy(longest, line);
        }
    }

    if(maxlength > 0)   //  there was a line
    {
        printf("%s", longest);
    }

    return 0;
} 

/* getline: read a line into s, return length */
int getline(char s[], int limit)
{
    int c, i;

    for (i = 0; i < limit && (c = getchar()) != EOF && c != '\n'; ++i)
    {
        s[i] = c;
    }

    if (c == '\n')
    {
        s[i] = c;
        ++i;
    }

    s[i] = '\0';
    return i;
}

// copy: copy 'from' into 'to': assume 'to' is big enough
void copy(char to[], char from[])
{
    int i;

    i = 0;
    while ((to[i] = from[i]) != '\0')
    {
        ++i;
    }
}