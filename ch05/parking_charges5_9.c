//
// Created by Ludmilla Aires on 2/9/16.
//

#include <stdio.h>

float calculateCharges(float hours);

int main (void) {
    //variable for each client.
    float a;
    float b;
    float c;
    // Get the information from the user
    printf("Tell me the hours parkedof the 3 clients: ");
    scanf("%f%f%f", &a, &b, &c);
    printf("Car\n1\n2\n3");
    printf("\t\tHours\n \t\t%.1f\n\t\t%.1f\n\t\t%.1f\n", a, b, c);
    printf("\t\t\tCharge\n \t\t\t%.2f\n\t\t\t%.2f\n\t\t\t%.2f\n ", calculateCharges(a), calculateCharges(b), calculateCharges(c));
}
//calculate de charge for hours
float calculateCharges(float hours)
{
   float charge;
    if (hours <= 3.0) {
        return 2.0;
    }
    if (hours > 3.0 && hours < 24.0){
          charge = ((hours-3.0) * 0.50) + 2.0;
          return charge;
    }
    if (hours == 24.0)
    {
        return 10.0;
    }
}


