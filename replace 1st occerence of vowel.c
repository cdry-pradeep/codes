#include <stdio.h>

// Function to replace the first occurrence of a vowel with '-'
void replaceFirstVowel(char str[]) {
    //String that contains lowercase and uppercase vowels
    //We will use this to check the vowels in input string
    char vowels[] = "aeiouAEIOU";
    int i, j;

    // Traverse the string to find the first vowel
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

    // Prompt the user to enter a string
    printf("Enter a string: ");

    // Read the input string and store in array str[]
    fgets(str, sizeof(str), stdin);

    // Remove newline character if present
    int len = 0;
    while (str[len] != '\0') {
        if (str[len] == '\n') {
            str[len] = '\0';
            break;
        }
        len++;
    }

    // Call the function to replace the first vowel
    replaceFirstVowel(str);

    // Print the modified string
    printf("Modified string: %s\n", str);

    return 0;
}
