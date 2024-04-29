// Cho một dãy lặp tuần hoàn và tính chu kì của dãy đó
#include <stdio.h>
#include <stdbool.h>
int main() {
  int T;
  scanf("%d", &T);
  while (T--) {
    int n;
    scanf("%d", &n);
    int a[n];
    for (int i = 0; i < n; i++) scanf("%d", &a[i]);

    // Tìm chu kỳ của dãy
    int cycle = 1;
    bool found = false;
    while (!found) {
      for (int i = 0; i < n; i++) {
        if (a[i] != a[(i + cycle) % n]) {
          cycle++;
          break;
        }
        if (i == n - 1) found = true;
      }
    }

    // In ra kết quả
    printf("%d\n", cycle);
  }
  return 0;
}
