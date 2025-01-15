/* 

    + Adult BMI Calculator created by Ayaan Shaikh +

*/
#include <stdio.h>
#include <math.h>

int main () {

int age = 0;
float weightKg = 0.00;
float weightLb = 0.00;
float heightInches = 0.00;
float heightMeters = 0.00;
float bmi = 0.00;
int choice; // 1 = Metric units (kg and meters) OR 2 = US customary units (lb and inches)

do {
    printf("+ BMI CALCULATOR +\n");
    printf("To begin, please select your preference.\n1. Metric units (Weight in kg, height in meters)\n");
    printf("2. US customary units (Weight in lbs, height in inches)\n\n");
    printf("Enter your choice: ");
    scanf("%d", &choice);   
} while (choice < 1 || choice > 2);

do {
    printf("Please enter your age: ");
    scanf("%d", &age);
    if (age < 18) {
        printf("This BMI calculator only supports people 18 and above.\n");
    }
} while (age < 18);

// Metric units
if (choice == 1) {
    do {
        printf("Enter your weight in kilograms (kg): ");
        scanf("%f", &weightKg);
        if (weightKg <= 0) {
            printf("Please enter a valid number.\n");
        }
    } while (weightKg <= 0);
    do {
        printf("Enter your height in meters (m): ");
        scanf("%f", &heightMeters);
        if (heightMeters <= 0) {
            printf("Please enter a valid number.\n");
        }
    } while (heightMeters <= 0);

bmi = weightKg / (heightMeters * heightMeters);

} else if (choice == 2) {
    do {
        printf("Enter your weight in pounds (lb): ");
        scanf("%f", &weightLb);
        if (weightLb <= 0) {
            printf("Please enter a valid number.\n");
        }
    } while (weightLb <= 0);
    do {
        printf("Enter your height in inches (in): ");
        scanf("%f", &heightInches);
        if (heightInches <= 0) { 
            printf("Please enter a valid number.\n");
        }
    } while (heightInches <= 0);

printf("%f", weightLb);
printf("%f", heightInches);
bmi = ((weightLb / (heightInches * heightInches))) * 703;
}

/*
Source: https://rtaesthetics.co.uk/how-to-calculate-bmi/
*/

if (bmi < 18.5) {
    printf("\nYour BMI is: %.2f\n", bmi);
    printf("Your BMI indicates you are underweight.\n");
} else if (bmi >= 18.5 && bmi <= 24.9) {
    printf("\nYour BMI is: %.2f\n", bmi);
    printf("Your BMI indicates you are normal weight.\n");   
} else if (bmi >= 25 && bmi <= 29.9) {
    printf("\nYour BMI is: %.2f\n", bmi);
    printf("Your BMI indicates you are overweight.\n");
} else if (bmi >= 30 && bmi <= 34.9) {
    printf("\nYour BMI is: %.2f\n", bmi);
    printf("Your BMI indicates you are obese.\n");
} else if (bmi >= 35) {
    printf("\nYour BMI is: %.2f\n", bmi);
    printf("Your BMI indicates you are extremely obese.\n");
}
    return 0;
}