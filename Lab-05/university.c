#include <stdio.h>

int main() {
    char personType, studentType, facultyType, appointment;
    int hour;

    printf("Enter person type (s=student, f=faculty, v=visitor): ");
    scanf(" %c", &personType);

    if (personType == 's' || personType == 'S') {
        printf("Undergraduate or Postgraduate? (u/p): ");
        scanf(" %c", &studentType);

        if (studentType == 'u' || studentType == 'U') {
            printf("Enter current hour (0-23): ");
            scanf("%d", &hour);

            if (hour >= 8 && hour < 18) {
                printf("Access Granted (Undergraduate).\n");
            } else {
                printf("Access Denied (Outside Undergraduate Hours).\n");
            }
        } else if (studentType == 'p' || studentType == 'P') {
            printf("Access Granted (Postgraduate).\n");
        } else {
            printf("Invalid student type.\n");
        }
    }
    else if (personType == 'f' || personType == 'F') {
        printf("Full-time or Visiting faculty? (t/v): ");
        scanf(" %c", &facultyType);

        if (facultyType == 't' || facultyType == 'T') {
            printf("Access Granted (Full-time Faculty).\n");
        } else if (facultyType == 'v' || facultyType == 'V') {
            printf("Enter current hour (0-23): ");
            scanf("%d", &hour);

            if (hour >= 8 && hour < 18) {
                printf("Access Granted (Visiting Faculty).\n");
            } else {
                printf("Access Denied (Outside Visiting Faculty Hours).\n");
            }
        } else {
            printf("Invalid faculty type.\n");
        }
    }
    else if (personType == 'v' || personType == 'V') {
        printf("Do you have an appointment? (y/n): ");
        scanf(" %c", &appointment);

        if (appointment == 'y' || appointment == 'Y') {
            printf("Access Granted (Visitor with Appointment).\n");
        } else {
            printf("Access Denied (Visitor without Appointment).\n");
        }
    }
    else {
        printf("Invalid person type.\n");
    }

    return 0;
}
