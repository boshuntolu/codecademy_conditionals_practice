# include <stdio.h>

int main() {

    // instantiating weight and planet choice variables
    double weight;
    int number; 

    // initiating user interaction
    printf("Please enter your Earth weight: \n");
    scanf("%lf", &weight);

    // listing current planets available
    printf("\nI have information for the following planets:\n\n");
    printf("\t1. Mercury\t2. Venus\t3. Mars\t4. Jupiter\n");
    printf("\t5. Saturn\t6. Uranus\t7. Neptune\n\n");

    // asking user which planet they would like to visit
    printf("What planet will you be visiting?\n");
    scanf("%d", &number);

    // conditional for each planet, multiplying user's weight by planet multiplier
    switch (number) {
        case 1:
            weight *= .38;
            break;
        case 2:
            weight *= .91;
            break;
        case 3:
            weight *= .38;
            break;
        case 4:
            weight *= 2.34;
            break;
        case 5:
            weight *= 1.06;
            break;
        case 6:
            weight *= 0.92;
            break;
        case 7:
            weight *= 1.19;
            break;
    }
    printf("\nYour weight: %lf\n", weight);
    
}
