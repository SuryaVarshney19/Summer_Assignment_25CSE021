#include <stdio.h>

struct Student {
    int roll;
    char name[50];
    float marks;
};

int main() {
    struct Student s[100];
    int n, i, choice;

    printf("Enter number of students: ");
    scanf("%d", &n);

    do {
        printf("\n===== Student Management System =====");
        printf("\n1. Add Student");
        printf("\n2. Display Students");
        printf("\n3. Exit");
        printf("\nEnter choice: ");
        scanf("%d", &choice);

        switch(choice) {
            case 1:
                for(i = 0; i < n; i++) {
                    printf("\nStudent %d\n", i + 1);

                    printf("Roll No: ");
                    scanf("%d", &s[i].roll);

                    printf("Name: ");
                    scanf("%s", s[i].name);

                    printf("Marks: ");
                    scanf("%f", &s[i].marks);
                }
                break;

            case 2:
                printf("\nStudent Records\n");
                printf("-----------------------------\n");
                printf("Roll\tName\tMarks\n");

                for(i = 0; i < n; i++)
                    printf("%d\t%s\t%.2f\n", s[i].roll, s[i].name, s[i].marks);
                break;

            case 3:
                printf("Thank You!\n");
                break;

            default:
                printf("Invalid Choice\n");
        }

    } while(choice != 3);

    return 0;
}