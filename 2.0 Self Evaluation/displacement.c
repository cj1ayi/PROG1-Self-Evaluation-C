#include <stdio.h>
#include <math.h>


double calcDisplacement(double velocity, double acceleration, double time);
double meterToYard(double displacement);

int main()
{
    double velocity;
    double acceleration;
    double time;
    double displacement;
    double displacementYards;

    printf("== Displacement Calculator ==\n");
    printf("Input the velocity in (m/s): ");
    scanf("%lf", &velocity);
    printf("Input the acceleration in (m/s^2): ");
    scanf("%lf", &acceleration);
    printf("Input the time in seconds: ");
    scanf("%lf", &time);

    displacement = calcDisplacement(velocity, acceleration, time);
    displacementYards = meterToYard(displacement);

    printf("Displacement in yards: %.2lf yards\n", displacementYards);

    return 0;
}

double calcDisplacement(double velocity, double acceleration, double time)
{
    double displacement = (velocity * time) + (0.5) * (acceleration * pow(time, 2));
    return displacement;
}

double meterToYard(double displacement)
{   
    double displacementYards = (displacement / 0.9144);
    return displacementYards;
}