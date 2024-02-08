#include<stdlib.h>
#include<sys/time.h>
#include <iostream>
#include <string>
using namespace std;

// function prototypes
int senseDistance();
void getSensors( int sensors[] );
void printSensors( int sensors[], string labels[] );
int furthest( int sensors[] );

// main function
int main() {
	int sensors[4];// array of four distance sensors
	string labels[4];// array of labels for each sensor
	int dir;// indicates which direction to go next
	srand( time( NULL ));// initialize the random number generator
	labels[0] = "north";// initialize the sensor labels
	labels[1] = "west";
	labels[2] = "south";
	labels[3] = "east";
	for ( int i=0; i<5; i++ ) { // simulate 5 moves by the robot
    	getSensors( sensors );// get values for all the sensors
	    printSensors( sensors, labels ); // print out the sensor values
	    dir = furthest( sensors ); // find the direction that is furthest from an obstacle
	    cout << "moving " << labels[dir] << endl; // ``go''
	}
} // end of main()

int senseDistance()
{
	return rand() % 100 + 1;
}

void getSensors(int sensors[])
{
	for(int i = 0 ; i < 4; i++)
	{
		sensors[i] = senseDistance();
	}
}

void printSensors( int sensors[], string labels[] )
{
	cout << "sensors = ";
	for(int i = 0 ; i < 4; i++)
	{
		cout << "[" << labels[i] << "=" << sensors[i] << "] ";
	}
	cout << endl;
}

int furthest( int sensors[] )
{
	int largest = sensors[0]; 
    int furthest = 0; 

    for (int i = 1; i < 4; ++i) { 
        if (sensors[i] > largest) {
            largest = sensors[i];
            furthest = i;
        }
    }

    return furthest;
}
	
