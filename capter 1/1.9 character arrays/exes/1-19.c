#include <stdio.h>
#define MAXLINE 1000

int getline(char line[], int limit);
void reverse(char s[]);

// reverse the input one line at a time

int main() {
  char line[MAXLINE]; // current input line

  while (getline(line, MAXLINE) > 0) {
    reverse(line);
    printf("%s", line);
  }
  return 0;
}

// reverse: reverses the string

void reverse(char s[]) {
  int i, j;
  char temparery_string;

  i = 0;
  while (s[i] != '\0')
    ++i;

  --i;

  if (s[i] == '\n')
    --i;

  j = 0;

  while (j < i) {
    temparery_string = s[j];
    s[j] = s[i];
    s[i] = temparery_string;
    --i;
    ++j;
  }
}

int getline(char s[], int limit) {
  int c, i;

  for (i = 0; i < limit - 1 && (c = getchar()) != EOF && c != '\n'; ++i) {
    s[i] = c;
  }
  if (c == '\n') {
    s[i] = c;
    ++i;
  }

  s[i] = '\0';
  return i;
}
