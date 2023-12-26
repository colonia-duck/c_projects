#include <stdio.h>

#define MAXLINE 1000 // max input size

int maxLength;         // max length seen so far
char line[MAXLINE];    // current input line
char longest[MAXLINE]; // longest line saved here

int get_line(void);
void copy(void);

/* print longest input line ; specialised version */
int main() {
  int length;
  extern int maxLength;
  extern char longest[];

  maxLength = 0;
  while ((length = get_line()) > 0) {
    if (length > maxLength) {
      maxLength = length;
      copy();
    }
  }

  if (maxLength > 0) {
    printf("%s", longest);
  }
  return 0;
}

/* get_line specialised version */
int get_line(void) {
  int c, i;
  extern char line[];

  for (i = 0; i < MAXLINE - 1 && (c = getchar()) != EOF && c != '\n'; ++i) {
    line[i] = c;
  }

  if (c == '\n') {
    line[i] = c;
    ++i;
  }

  line[i] = '\0';
  return i;
}

/* copy: specialised version */
void copy(void) {
  int i;
  extern char line[], longest[];

  i = 0;

  while ((longest[i] = line[i]) != '\0')
    ++i;
}
