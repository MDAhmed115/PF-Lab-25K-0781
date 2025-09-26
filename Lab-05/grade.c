#include <stdio.h>

int main() {
    char examType;
    char grade;

    printf("Enter exam type (m = Midterm, f = Final): ");
    scanf(" %c", &examType);

    switch (examType) {
        case 'm':
        case 'M':
            printf("Enter grade (A, B, C, D, F): ");
            scanf(" %c", &grade);

            switch (grade) {
                case 'A':
                    printf("Midterm Remark: Excellent Progress.\n");
                    break;
                case 'B':
                    printf("Midterm Remark: Good Progress.\n");
                    break;
                case 'C':
                    printf("Midterm Remark: Needs More Practice.\n");
                    break;
                case 'D':
                    printf("Midterm Remark: Work Harder.\n");
                    break;
                case 'F':
                    printf("Midterm Remark: At Risk – Immediate Improvement Required.\n");
                    break;
                default:
                    printf("Invalid Grade.\n");
            }
            break;

        case 'f':
        case 'F':
            printf("Enter grade (A, B, C, D, F): ");
            scanf(" %c", &grade);

            switch (grade) {
                case 'A':
                    printf("Final Remark: Excellent Overall Performance.\n");
                    break;
                case 'B':
                    printf("Final Remark: Very Good – Keep It Up.\n");
                    break;
                case 'C':
                    printf("Final Remark: Satisfactory, Can Improve.\n");
                    break;
                case 'D':
                    printf("Final Remark: Below Average – Consider Extra Help.\n");
                    break;
                case 'F':
                    printf("Final Remark: Retake Required.\n");
                    break;
                default:
                    printf("Invalid Grade.\n");
            }
            break;

        default:
            printf("Invalid Exam Type.\n");
    }

    return 0;
}
