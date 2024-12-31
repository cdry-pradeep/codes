#include <stdio.h>

int main() {
    char name[50];
    int age;
    char email[50];

    printf("Enter your name: ");
    scanf("%s", name);

    printf("Enter your age: ");
    scanf("%d", &age);

    printf("Enter your email: ");
    scanf("%s", email);

    printf("\n--- Form Details ---\n");
    printf("Name: %s\n", name);
    printf("Age: %d\n", age);
    printf("Email: %s\n", email);

    return 0;
}
