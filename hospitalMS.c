#include <stdio.h>
#include <string.h>

struct Patient {
    char name[30];
    int age;
    char problem[50];
   
};

int main() {
    struct Patient p[50];
    int choice, count = 0;
    char searchName[30];
     int i;

    while (1) {
        printf("\n----- Hospital Patient Record System -----\n");
        printf("1. Add Patient\n");
        printf("2. Search Patient by Name\n");
        printf("3. Display All Patients\n");
        printf("4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                printf("Enter Patient Name: ");
                scanf("%s", p[count].name);
                printf("Enter Age: ");
                scanf("%d", &p[count].age);
                printf("Enter Problem: ");
                scanf("%s", p[count].problem);

                count++;
                printf("Record Added Successfully!\n");
                break;

            case 2:
                printf("Enter Name to Search: ");
                scanf("%s", searchName);

                for (i = 0; i < count; i++) {
                    if (strcmp(p[i].name, searchName) == 0) {
                        printf("\nPatient Found!\n");
                        printf("Name    : %s\n", p[i].name);
                        printf("Age     : %d\n", p[i].age);
                        printf("Problem : %s\n", p[i].problem);
                        break;
                    }

                    if (i == count - 1)
                        printf("Patient Not Found!\n");
                }
                break;

            case 3:
                if (count == 0) {
                    printf("No Records Available!\n");
                    break;
                }

                printf("\n--- Patient List ---\n");
                for (i = 0; i < count; i++) {
                    printf("\nPatient %d:\n", i + 1);
                    printf("Name    : %s\n", p[i].name);
                    printf("Age     : %d\n", p[i].age);
                    printf("Problem : %s\n", p[i].problem);
                }
                break;

            case 4:
                printf("Exiting Program...\n");
                return 0;

            default:
                printf("Invalid Choice! Try Again.\n");
        }
    }
}

