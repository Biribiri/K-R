#include <stdio.h>
#define TABSTOP 8

int main(int argc, const char *argv[]) {
  int c, i = 0;

  while ((c = getchar()) != EOF) {
    if (c == '\n') {
      putchar(c);
      i = 0;
    } else if (c == '\t')
      do {
        putchar(' ');
      } while (++i % TABSTOP);
    else {
      putchar(c);
      ++i;
    }
  }

  return 0;
}

