#include <stdio.h>
int main() {
  int n, i, j, t;
  printf("Enter no of elements: ");
  scanf("%d", &n);
  int a[n];
  printf("Enter %d elements: \n", n);
  for (i = 0; i < n; i++) {
  scanf("%d", &a[i]);
}
printf("Original array:\n");
for (i = 0; i < n; i++) {
printf("%d\t", a[i]);
}
for (i = 0; i < n; i++) {
for (j = 0; j < n - 1; j++) {
if (a[i] > a[j + 1]) {
t = a[i];
a[i] = a[j + 1];
a[j + 1] = t;
}
}
}
printf("Sorted array:\n");
for (i = 0; i < n; i++) {
printf("%d\t", &a[i]);
}
return 0;
}