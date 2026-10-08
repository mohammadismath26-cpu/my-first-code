#include <stdio.h>
int main() {
    int mark;
    printf("Enter mark: ");
    scanf("%d", &mark);
    if(mark >= 90) {
        printf("Grade A");
    } else if(mark >= 75) {
        printf("Grade B");
    } else if(mark >= 50) {
        printf("Grade C");
    } else {
        printf("FAIL");
    }
    return 0;
}