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

void swap(struct student a, struct student b) {
    struct student temp = a;
    a = b;
    b = temp;
}

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

        // Calculate percentage
        int total_marks = s[i].physics + s[i].chemistry + s[i].math + s[i].bengali + s[i].english;
        s[i].percentage = (float)total_marks / 5;
    }

    // Sort students in descending order based on percentage
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (s[j].percentage < s[j + 1].percentage) {
                swap(s[j], s[j + 1]);
            }
        }
    }

    // Assign roll numbers based on the sorted order
    for (int i = 0; i < n; i++) {
        s[i].roll = i + 1;
    }

    // Display student information
    printf("\nStudent Information\n");
    printf("Roll \t Name\tPhysics\tChemistry\tMath\tBengali\tEnglish\tPercentage\n\n");
    for (int i = 0; i < n; i++) {
        printf(" %d \t %s \t %d \t %d \t %d \t %d \t %d \t %2f \n", s[i].roll, s[i].name, s[i].physics, s[i].chemistry, s[i].math, s[i].bengali, s[i].english, s[i].percentage);
    }

    return 0;
}

