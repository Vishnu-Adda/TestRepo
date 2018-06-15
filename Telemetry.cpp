#include <stdio.h>
#include "telemetry.hpp"

char types[32];
void * array[32];
int index = 0;

void registerVariable(char type, void * data) {}
void task1() {}
void task1() {}
void remote_call() {}

#include <stdio.h>
#include "telemetry.hpp"

char types[32];
void * array[32];
int index = 0;

void registerVariable(char type, void * data) 
{
    types[index] = type;
    array[index] = data;
    index++;
}

void task1() 
{
    float max_speed = 3.75;
    registerVariable('f', &max_speed);
    while(1)
    {
        driveWheels(max_speed);
    }
}

void task1() 
{
    int max_turn = 5;
    while(1)
    {
        steerWheels(max_turn);
    }
}

void remote_call()
{
    if(iGetARemoteCall())
    {
        if(type[0] == 'f')
        {
            printf("%f\n", *(static_cast<float *>(array[0]));
        }
    }
}
