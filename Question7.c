#include <stdio.h>
#include <string.h>

int main() {
    
    char students[4][20] = {"Alice", "Bob", "Charlie", "Diana"};

    
    char courses[4][5][20] = {
        {"Math", "Physics", "English"},               
        {"Biology", "Chemistry"},                     
        {"Math", "History", "Physics", "Art"},        
        {"Computer", "Math", "Physics", "Chemistry"}  
    };

    
    int count[4] = {3, 2, 4, 4};

    int i, j;

  
    printf("Student Course Registrations:\n");
    printf("---------------------------------\n");

    for (i = 0; i < 4; i++) {
        printf("%s is taking: ", students[i]);
        for (j = 0; j < count[i]; j++) {
            printf("%s", courses[i][j]);
            if (j < count[i] - 1)
                printf(", ");
        }
        printf("\n");
    }

    char search[20];
    printf("\nEnter course to search: ");
    scanf("%s", search);

    printf("\nStudents taking %s:\n", search);
    int found = 0;

    for (i = 0; i < 4; i++) {
        for (j = 0; j < count[i]; j++) {
            if (strcmp(courses[i][j], search) == 0) {
                printf("- %s\n", students[i]);
                found = 1;
                break;
            }
        }
    }

    if (!found)
        printf("No students found taking this course.\n");

    
    printf("\nOverloaded Students (more than 3 courses):\n");
    int overload = 0;

    for (i = 0; i < 4; i++) {
        if (count[i] > 3) {
            printf("- %s (%d courses)\n", students[i], count[i]);
            overload = 1;
        }
    }

    if (!overload)
        printf("No overloaded students.\n");

    return 0;
}
