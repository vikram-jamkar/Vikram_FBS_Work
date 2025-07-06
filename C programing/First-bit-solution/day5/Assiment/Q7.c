#include <stdio.h>

int main() {
    double basic, da, ta, hra, total;

    // Input basic salary
    printf("Enter the basic salary: ");
    scanf("%lf", &basic);

    // Conditions based on salary
    if (basic <= 5000) {
        da = basic * 0.10;  // 10%
        ta = basic * 0.20;  // 20%
        hra = basic * 0.25; // 25%
    } else {
        da = basic * 0.15;  // 15%
        ta = basic * 0.25;  // 25%
        hra = basic * 0.30; // 30%
    }

    // Calculate total salary
    total = basic + da + ta + hra;

    // Print result
    printf("DA = %.2lf\n", da);
    printf("TA = %.2lf\n", ta);
    printf("HRA = %.2lf\n", hra);
    printf("Total Salary = %.2lf\n", total);

    
}
