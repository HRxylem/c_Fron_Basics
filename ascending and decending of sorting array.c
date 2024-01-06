#include <stdio.h>

int main() {
  
  int s, i, j, t;

  printf("Enter the s of the array: ");
  scanf("%d", &s);

  int ar[s];

  printf("Enter %d elements:\n", s);
  for (i = 0; i < s; i++) {
    scanf("%d", &ar[i]);
  }

  for (i = 0; i < s - 1; i++) {
    for (j = 0; j < s - i - 1; j++) {
      if (ar[j] > ar[j + 1]) {
        t = ar[j];
        ar[j] = ar[j + 1];
        ar[j + 1] = t;
      }
    }
  }

  printf("Ascending order:\n");
  for (i = 0; i < s; i++) {
    printf("%d ", ar[i]);
  }
  printf("\n");

  for (i = 0; i < s - 1; i++) {
    for (j = 0; j < s - i - 1; j++) {
      if (ar[j] < ar[j + 1]) {
        t = ar[j];
        ar[j] = ar[j + 1];
        ar[j + 1] = t;
      }
    }
  }

  printf("Descending order:\n");
  for (i = 0; i < s; i++) {
    printf("%d ", ar[i]);
  }
  printf("\n");

  return 0;
}