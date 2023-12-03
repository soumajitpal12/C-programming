#include <stdio.h>

struct student {
    char name[50];
    int physics;
    int chemistry;
    int math;
    int bengali;
    int english;
    int roll;
    float percentage;
};

int main() {
    int n;
    printf("Enter the number of students: ");
    scanf("%d", &n);

    struct student s[n];

    // Input student information
    for (int i = 0; i < n; i++) {
        printf("\nEnter details for student %d:\n", i + 1);
        printf("Enter student name: ");
        scanf(" %s", s[i].name);

        printf("Enter physics marks: ");
        scanf("%d", &s[i].physics);

        printf("Enter chemistry marks: ");
        scanf("%d", &s[i].chemistry);

        printf("Enter math marks: ");
        scanf("%d", &s[i].math);

        printf("Enter Bengali marks: ");
        scanf("%d", &s[i].bengali);

        printf("Enter English marks: ");
        scanf("%d", &s[i].english);

        s[i].roll = i + 1; // Assigning roll numbers in ascending order

        // Calculate percentage
        int total_marks = s[i].physics + s[i].chemistry + s[i].math + s[i].bengali + s[i].english;
        s[i].percentage = (float)total_marks / 5;
    }

    // Display student information in a table
    printf("\nStudent Information\n");
    //printf("----------------------------------------------------------------------------------------------------\n");
    printf( "Roll \t Name\tPhysics\tChemistry\tMath\tBengali\tEnglish\tPercentage\n\n"); 
    //printf("----------------------------------------------------------------------------------------------------\n");

    for (int i = 0; i < n; i++) {
        printf(" %d \t %s \t %d \t %d \t %d \t %d \t %d \t %2f \n", s[i].roll, s[i].name, s[i].physics, s[i].chemistry, s[i].math, s[i].bengali, s[i].english, s[i].percentage);
    }

    printf("----------------------------------------------------------------------------------------------------\n");



return 0;
}

