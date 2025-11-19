#include <stdio.h>

int main() {
    
    char categories[3][20] = {
        "Appetizers",
        "Main Course",
        "Desserts"
    };

    
    char items[3][3][30] = {
        {"French Fries", "Papar", "Soup"},
        {"Nihari", "Haleem", "Korma"},
        {"Rass malai", "Gulab Jamun", "Shahi Tukre"}
    };

    
    float prices[3][3] = {
        {5.50, 4.00, 7.25},      
        {12.00, 9.50, 11.25},    
        {3.75, 5.00, 6.25}       
    };

    int i, j;


    printf("\n---------- Restaurant Menu ----------\n\n");

    for (i = 0; i < 3; i++) {
        printf("%s:\n", categories[i]);
        for (j = 0; j < 3; j++) {
            printf("  %-20s $%.2f\n", items[i][j], prices[i][j]);
        }
        printf("\n");
    }



    printf("---------- Budget-Friendly Items (Under $10) ----------\n\n");

    int found = 0;

    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            if (prices[i][j] < 10) {
                printf("%-20s | %-12s | $%.2f\n",
                       items[i][j], categories[i], prices[i][j]);
                found = 1;
            }
        }
    }

    if (!found) {
        printf("No budget items available.\n");
    }

    return 0;
}
