#include <stdio.h>
#include <string.h>

int main() {
  int i;
  FILE *fp, *fp1, *fp2, *fp3;
  char d[50], e[50], n[50], nw[50], g[50];
  printf("Enter file name: ");
  scanf("%s", &n);
  fflush(stdin);
  printf("Enter data to write: ");
  gets(d);
  fp = fopen(n, "w");
  if (fp == NULL) {
    printf("Failed to open %s", n);
  } else {
    printf("File %s opened successfully\n", n);
    if (strlen(d) > 0) {
      fputs(d, fp);
      fputs("\n", fp);
    }
    fclose(fp);
  }

  fp1 = fopen(n, "r");
  if (fp1 == NULL) {
    printf("Failed to open %s", n);
  } else {
    fgets(e, 50, fp1);
    printf("The content of the file:\n%s", e);
    fclose(fp1);
  }

  printf("\n");
  printf("Enter new file name: ");
  scanf("%s", &nw);
  fp2 = fopen(nw, "w");
  if (fp2 == NULL) {The content of the file:
    printf("Failed to open %s", nw);
  } else {
    printf("File %s opened successfully\n", nw);
    if (strlen(e) > 0) {
      fputs(e, fp2);
      fputs("\n", fp2);
    }
    fclose(fp2);
  }

  fp3 = fopen(nw, "r");
  if (fp3 == NULL) {
    printf("Failed to open %s", nw);
  } else {
    fgets(g, 50, fp3);
    printf("The contents are:\n%s", g);
    i = strcmp(e, g);
    if (i == 0) {
      printf("Copied successfully.");
    } else {
      printf("Unsuccessful.");
    }
    fclose(fp3);
  }
  return 0;
}