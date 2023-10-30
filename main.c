#include <stdio.h>
#include <string.h>

int main() {
    char word[51];
    scanf("%s", word);

    int len = strlen(word);

    // Sort the word using bubble sort
    for (int i = 0; i < len - 1; i++) {
        for (int j = i + 1; j < len; j++) {
            if (word[i] > word[j]) {
                char temp = word[i];
                word[i] = word[j];
                word[j] = temp;
            }
        }
    }

    int count = 0;
    for (int i = 0; i < len - 1; i++) {
        if (word[i] == word[i + 1]) {
            count++;
            // Skip other occurrences of the same letter
            while (i < len - 1 && word[i] == word[i + 1]) {
                i++;
            }
        }
    }

    printf("%d\n", count);
    return 0;
}













