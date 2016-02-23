#include <stdio.h>

float calculateCharges(float hours);

int main (void)
{
    //variable for each client.
    float a = 0;
    float b = 0;
    float c = 0;

    // Get the information from the user
    printf("Tell me the hours parked for the 3 costumers: ");
    scanf("%f%f%f", &a, &b, &c);
    printf("Chage %f%f%f", calculateCharges(a), calculateCharges(b), calculateCharges(c));

//calculate de charge for hours
float calculateCharges(float hours)
{
    double charge;
    if (float hours < 3.0)
    {
        printf("2.0");
    }
    if (hours > 3.0 && hours < 24.0)
    {
        charge = hours * 0.50;
        printf("%f", charge);
    }
    if (hours == 24.0)
    {
        printf("10.0");
    }
    return 0;
}
