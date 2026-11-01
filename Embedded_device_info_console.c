#include <stdio.h>
int main() {
    char model[50];
    float voltage, current, temperature, power;
    printf("Enter Device Model Number: ");
    scanf("%s", model);
    printf("Enter Voltage (V): ");
    scanf("%f", &voltage);
    printf("Enter Current (A): ");
    scanf("%f", &current);
    printf("Enter Temperature (C): ");
    scanf("%f", &temperature);
    power = voltage * current;
    printf("Model Number:%s\n", model);
    printf("Voltage     :%.2f V\n", voltage);
    printf("Current     :%.2f A\n", current);
    printf("Temperature :%.2f C\n", temperature);
    printf("Power       :%.2f W\n", power);
    return 0;
}