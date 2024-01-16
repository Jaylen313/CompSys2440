

#include <stdio.h>

float CmToInches(float x)
{
    return x * 0.3937;
}

float InchesToCm(float a)
{
    return a * 2.54;
}

float InchesToFt(float y)
{
    return y * 0.0833;
}

float FtToInches(float b)
{
    return b * 12;
}

float FeetToMeters(float z)
{
    return z * 0.3048;
}

float MetersToFeet(float c)
{
    return c * 3.28084;
}

int main()
{

    int MetricPick;
    float a, b;

    printf("***********************\n");
    printf("Welcome to Metric Trans, your go to solution for simple metric conversions.\n"); 
    printf("The simple metric converter app allows users to convert between centimeters, inches,\n");
    printf("feet, and meters. Simply choose your conversion type (1-6), input the value, and recieve\n");
    printf("the results. We have also included a easy exit option by entering 0.\n");
    printf("***********************\n");





    do
    {
        printf("\nEnter a metric conversion choice (1-6):\n");
        printf("1 = Centimetres to Inches\n2 = Inches to Centimetres\n3 = Inches to Feet\n");
        printf("4 = Feet to Inches\n5 = Feet to Meters\n6 = Meters to Feet\n");
        scanf("%d", &MetricPick);

        switch (MetricPick)
        {
        case 1:

            printf("Enter value for centimeters\n");
            scanf("%f", &b);

            a = CmToInches(b);
            printf("%.2f inches\n", a);
            break;

        case 2:

            printf("Enter value for inches\n");
            scanf("%f", &b);

            a = InchesToCm(b);
            printf("%.2f centimetres\n", a);
            break;

        case 3:

            printf("Enter value for inches\n");
            scanf("%f", &b);

            a = InchesToFt(b);
            printf("%.2f feet\n", a);
            break;

        case 4:

            printf("Enter value for feet\n");
            scanf("%f", &b);

            a = FtToInches(b);
            printf("%.2f inches\n", a);
            break;

        case 5:

            printf("Enter value for feet\n");
            scanf("%f", &b);

            a = FeetToMeters(b);
            printf("%.2f meters\n", a);
            break;

        case 6:

            printf("Enter value for meters\n");
            scanf("%f", &b);

            a = MetersToFeet(b);
            printf("%.2f feet\n", a);
            break;

        case 0:

            printf("Exiting the program. Have a nice day!\n");
            break;

        default:

            printf("Choose a option 1-6 or 0 to exit");
            break;
        }
    } while (MetricPick != 0);


    return 0;
}
