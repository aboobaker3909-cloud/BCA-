#include <stdio.h>

int main() {
    int n;
    int category;
    int regular  = 0;
    int premium  = 0;
    int recliner = 0;
    float total = 0;
    float finalAmount = 0;

    printf("Enter number of tickets: ");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++) {
        printf("Enter category for %d ticket , 1.regular 2.premium 3.recliner ", i);
        scanf("%d", &category);

        if (category == 1) {
            total =total + 150;
            regular++;
        } else if (category == 2) {
            total = total + 250;
            premium++;
        } else if (category == 3) {
            total = total + 400;
            recliner++;
        } else {
            printf("Invalid category! Skipping this ticket.\n");
           
        }
    }

    printf("\n--- Final Bill ---\n");
    printf("Regular tickets: %d\n", regular);
    printf("Premium tickets: %d\n", premium);
    printf("Recliner tickets: %d\n", recliner);
    printf("Total (before discount): %.0f\n", total);

    if (n >= 5) {
        finalAmount = total - (total * 0.10);
        printf("Discount applied: Yes \n");
    } else {
        finalAmount = total;
        printf("Discount applied: No\n");
    }

    printf("Final Amount: %.0f\n", finalAmount);

    return 0;
}