// pre-processor directives

// include needed C and header files
#include "Assignment.c"

// write code for main function

int main(void){
    printf("Intensity\t Target Heart Rate\n");
    heartRate(age, restingPulse);
    printf("\n");
    printf("Intensity\t Target Heart Rate\n");
    heartRateReference(&age, &restingPulse);
}