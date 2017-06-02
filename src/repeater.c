#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char* argv[]) {
  char* text = NULL;

  int times = atoi(argv[2]);

  if (times == 0) {
    exit(0);
  }

  char* str = argv[1];
  int len = strlen(str);
  int outlen = (sizeof(char) * len * times) + 2;

  text = (char*)malloc(outlen);

  for (int i = 0; i < outlen; i += len) {
    memcpy(text + i, str, len);
  }

  text[outlen - 2] = '\n';
  text[outlen - 1] = '\0';

  printf("%s", text);

  free(text);

  return 0;
}
