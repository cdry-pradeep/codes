#include <stdio.h>
#include <stdlib.h>

struct Employee {
    char name[50];
    float salary;
    char email[50];
    char contact[15];
};

void addEmployee(FILE *file) {
    struct Employee emp;

    printf("Enter employee name: ");
    scanf("%s", emp.name);

    printf("Enter employee salary: ");
    scanf("%f", &emp.salary);

    printf("Enter employee email: ");
    scanf("%s", emp.email);

    printf("Enter employee contact: ");
    scanf("%s", emp.contact);

    fwrite(&emp, sizeof(struct Employee), 1, file);
}

void displayEmployees(FILE *file) {
    struct Employee emp;

    rewind(file);

    while (fread(&emp, sizeof(struct Employee), 1, file)) {
        printf("Name: %s\n", emp.name);
        printf("Salary: %.2f\n", emp.salary);
        printf("Email: %s\n", emp.email);
        printf("Contact: %s\n\n", emp.contact);
    }
}

int main() {
    FILE *file;
    int choice;

    file = fopen("employees.dat", "rb+");
    if (file == NULL) {
        file = fopen("employees.dat", "wb+");
        if (file == NULL) {
            printf("Unable to open file.\n");
            return 1;
        }
    }

    while (1) {
        printf("1. Add Employee\n");
        printf("2. Display Employees\n");
        printf("3. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                addEmployee(file);
                break;
            case 2:
                displayEmployees(file);
                break;
            case 3:
                fclose(file);
                return 0;
            default:
                printf("Invalid choice.\n");
        }
    }

    return 0;
}
