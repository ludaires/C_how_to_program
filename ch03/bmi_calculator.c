//
// Created by Ludmilla Aires on 1/20/16.
//

#include <stdio.h>
#include <cs50.h>

int main (void)
{

    printf("Tell me your weight(kg): ");
    double weight = GetDouble();

    double height = 0;
    int counter = 0;

    while (height <= 0)
    {
        if (counter > 0)
        {
            printf("What?! Think again!!!");
        }
         printf("Tell me your height(m): ");
         height = GetDouble();
         counter++;
    }

    double bmi = weight/(height*height);

    printf("Your BMI is %0.2lf\n", bmi);

    //BMI VALUES Department of Health

    if (bmi < 18.5)
    {
        printf("Underweight");
    }
    else if (bmi >= 18.5 && bmi <= 24.9)
    {
        printf("Normal");
    }
    else if (bmi >= 25 && bmi <= 29.9)
    {
        printf("Overweight");
    }
    else
    {
        printf("Obese");
    }

    return 0;
}