#include <stdio.h>
#include <string.h>

int main() {
    char names[5][20] = {"Alice", "Bob", "Charlie", "Diana", "Eve"};
    int marks[5] = {85, 92, 78, 96, 88};

    int highest = marks[0];
    int highestIndex = 0;
    float sum = 0;

    printf("Student Marks:\n");
    printf("Name\t\tMarks\n");
    printf("-------------------------\n");

    for (int i = 0; i < 5; i++) {
        printf("%-10s\t%d\n", names[i], marks[i]);
        sum += marks[i];

        if (marks[i] > highest) {
            highest = marks[i];
            highestIndex = i;
        }
    }

    float average = sum / 5;

    printf("\nHighest Scorer: %s with %d marks\n", names[highestIndex], highest);
    printf("Average Marks: %.2f\n", average);

    return 0;
}
