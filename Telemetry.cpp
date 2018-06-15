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
        // TODO: DO THE THING
    }
}

void task1() 
{
    int max_turn = 5;
    while(1)
    {
        // TODO: DO THE THING
    }
}

void remote_call()
{
    if(iGetARemoteCall())
    {
        // TODO: DO THE THING
    }
}
