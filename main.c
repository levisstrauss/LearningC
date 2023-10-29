#include <stdio.h>
int main(void) {
    //! showArray(word, cursors=[i])
    char word[30];
    int i = 0;
    printf("Please enter a word: ");
    scanf("%s", word);
    while (word[i]!='\0')
        i++;
    if (i % 2 == 0)
        printf("1\n");
    else
        printf("2\n");
    return 0;
}














