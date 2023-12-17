/* revise the main routine of the longest-line programe so it will correctly print tne lenght of
     arbitrarily long input lines, and as much as possible of the text */

#include<stdio.h>
#define MAXLINE 1000

int getline(char line[], int maxline);
void copy(char to[], char from[]);


int main()
{
     int c, length, maxlength;
     char line[MAXLINE], longestLine[MAXLINE];

     maxlength = 0;
     while ((length = getline(line, MAXLINE)) > 0)
     {
          /* if we didn't reach the endl, consume the input untill the end is reached 
               while keeping track of the length */

          if (length == MAXLINE - 1 && line[MAXLINE - 2] != '\n')
          {
               while ((c = getchar()) != EOF && ++length && c != '\n')
                    ;
          }
          if (length > maxlength)
          {
               maxlength = length;
               copy(longestLine, line); 
          }
     }

     if (maxlength > 0) // there was a line 
     {
          if (maxlength > maxlength - 1)
          {
               printf("Longest line length: %d, first ", maxlength);
               printf("%d characters: \n%s\n", MAXLINE - 1, longestLine);
          }
          else
          {
               printf("Longest line length: %d; longest line: \n%s\n", maxlength, longestLine);
          }
     }
     return 0;
}

// getline: read a line into s, return length
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

     s[i] = '\0';
     return i;
}

// copy: copy 'from' into 'to'; assume 'to' is big enough
void copy(char to[], char from[])
{
     int i;

     i = 0;
     while ((to[i] = from[i]) != '\0')
     {
          ++i;
     }
     
} 