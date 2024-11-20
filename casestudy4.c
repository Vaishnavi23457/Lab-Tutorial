#include <stdio.h>
#include <string.h>

void gemStones(int n, char rocks[][101]) {
    int common[26] = {0};
    for (int i = 0; i < 26; i++) {
        common[i] = 1; // Assume all elements are common initially
    }

    for (int i = 0; i < n; i++) {
        int present[26] = {0};
        for (int j = 0; rocks[i][j] != '\0'; j++) {
            present[rocks[i][j] - 'a'] = 1;
        }
        for (int k = 0; k < 26; k++) {
            common[k] &= present[k];
        }
    }

    int count = 0;
    for (int i = 0; i < 26; i++) {
        if (common[i]) count++;
    }
    printf("%d\n", count);
}

int main() {
    int n;
    scanf("%d", &n);
    char rocks[n][101];
    for (int i = 0; i < n; i++) {
        scanf("%s", rocks[i]);
    }
    gemStones(n, rocks);
    return 0;
}
```