// pre-processor directives

// include needed header file
#include "./headers/Assignment.h"

// write code for functions declared in header file
void heartRate (int age, int restingPulse){
    float i = START;
    

    do {
    float targetHeartRate = (((220 - age) - restingPulse) * i) + restingPulse;
    printf("%.f\t\t %.f bpm\n", i*100, targetHeartRate);
    // printf("Intensity\n %.f\n", i*100);
    // printf("Target Heart Rate\n %.f\n", targetHeartRate);
    i += 0.05;
    } while (STOP(i));


}

void heartRateReference (int *age, int *restingPulse){
    float i = START;
    float targetHeartRate = 0.0;
    

    do {
    targetHeartRate = (((220 - *age) - *restingPulse) * i) + *restingPulse;
    printf("%.f\t\t %.f bpm\n", i*100, targetHeartRate);
    // printf("Intensity\n %.f\n", i*100);
    // printf("Target Heart Rate\n %.f\n", targetHeartRate);
    i += 0.05;
    } while (STOP(i));


}