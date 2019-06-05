#ifndef PARAMS_H
#define PARAMS_H

#include <string>
#include <vector>
#include <set>
#include <fstream>
#include <iostream>
#include <algorithm> 
#include <time.h>
#include <math.h>

#define MY_EPSILON 0.00001

class Params
{
public:

	/* GENERAL PARAMETERS */
	std::string pathToInstance ;	// Path to the instance
	std::string pathToSolution ;	// Path to the solution
	
	/* PARAMETERS OF THE ALGORITHM */
	int seed;						// Random seed (for randomized algorithms)

	/* INSTANCE INFORMATION */
	std::string instanceName;								// Name of the dataset

	/* TO MEASURE CPU TIME */
	clock_t startTime;				// Time when the algorithm started
	clock_t endTime;				// Time when the algorithm ended 

	/* CONSTRUCTOR */
	Params(std::string pathToInstance, std::string pathToSolution, int seed);
};
#endif
