#include <stdio.h>

int main() {
  int s, i, se;

  printf("Enter the s of the array: ");
  scanf("%d", &s);

  int ar[s];

  printf("Enter %d elements:\n", s);
  for (i = 0; i < s; i++) {
    scanf("%d", &ar[i]);
  }

  printf("Enter the element to search: ");
  scanf("%d", &se);

  for (i = 0; i < s; i++) {
    if (ar[i] == se) {
      printf("Element %d found at index %d.\n", se, i);
      break;
    }
  }

  if (i == s) {
    printf("Element %d not found in the array.\n", se);
  }

  return 0;
}