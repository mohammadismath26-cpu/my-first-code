#include <stdio.h>
#include <string.h>

struct Device {
    int id;
    char name[50];
    float voltage;
    char status[20];
};
int main() {
    struct Device d[5];
    int i, searchId, found = 0;
    printf("Enter details for 5 devices:\n");
    for(i = 0; i < 5; i++) {
        printf("\nDevice %d\n", i+1);
        printf("Enter ID: ");
        scanf("%d", &d[i].id);
        printf("Enter Name: ");
        scanf("%s", d[i].name);
        printf("Enter Voltage: ");
        scanf("%f", &d[i].voltage);
        printf("Enter Status (ON/OFF): ");
        scanf("%s", d[i].status);
    }
    printf("\nEnter device ID to search: ");
    scanf("%d", &searchId);
    for(i = 0; i < 5; i++) {
        if(d[i].id == searchId) {
            printf("\nDevice Found:\n");
            printf("ID: %d\n", d[i].id);
            printf("Name: %s\n", d[i].name);
            printf("Voltage: %.2f V\n", d[i].voltage);
            printf("Status: %s\n", d[i].status);
            found = 1;
            break;
        }
    }
    if(found == 0) {
        printf("Device with ID %d not found.\n", searchId);
    }
   return 0;
}