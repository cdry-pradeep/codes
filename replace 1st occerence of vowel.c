#include <stdio.h>

void replaceFirstVowel(char str[]) {
    char vowels[] = "aeiouAEIOU";
    int i, j;

    for (i = 0; str[i] != '\0'; i++) {
        for (j = 0; vowels[j] != '\0'; j++) {
            if (str[i] == vowels[j]) {
                str[i] = '-'; // Replace the first vowel with '-'
                return; // Exit the function after replacing
            }
        }
    }
}

int main() {
    char str[100]; // Array to hold input string
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);
    int len = 0;
    while (str[len] != '\0') {
        if (str[len] == '\n') {
            str[len] = '\0';
            break;
        }
        len++;
    }

    replaceFirstVowel(str);
    printf("Modified string: %s\n", str);

    return 0;
}
