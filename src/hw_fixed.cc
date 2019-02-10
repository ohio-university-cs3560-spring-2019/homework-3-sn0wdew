/** \file */

#include <iostream>
#include <vector>
#include <cmath>

/**
 *  \brief This function calculates the standard deviation of an array.
 *
 *
 *  # How this function calculates standard deviation #
 *
 *  Standard Deviation Equation
 *
 *  \f$ SD = \sqrt{\frac{\displaystyle\sum_{i=0}^{n} | a[i] - \mu |^2 }{n}} \f$
 *
 *  1. Find the mean (mean = \f$ \mu \f$) of all elements in array a using n as the base
 *  2. For each member in a, find the square of its difference from the mean (example below).
 *    - \f$ \mu \f$ = 2
 *    - a[1] = 5
 *    - Equation: \f$ (a[1] - \mu)^2  = (5-2)^2 = 9 \f$
 *  3. Sum all the values from step 2
 *  4. Find them mean of step 3 using n as the base
 *  5. Take the square of step 4
 *
 *  \param[in] a A pointer to an array of type int.
 *  \param[in] n The total number of elements in array a.
 *  \return Returns the standard deviation of the array a as type double.
 *
 */
double deviation( int* a, int n )
{
	// Initial Check: verify n >= 0
	if (n <= 0){
		std::cerr << "Invalid 2nd function parameter. Element cout is set to <= 0." << std::endl;
		return 0.00;
	}

	double sum = 0.00;
	double mean = 0.00;
	double stddev = 0.00;

	// Find the total sum of all elements in a
	for(int i = 0; i < n; i++)
	{
		sum += a[i];
	}

  // Calculate the mean of all elements.
	mean = sum / n;

  // Find the Standard Deviation (part 1)
	for(int i = 0; i < n; i++)
	{
		stddev += ((a[i] - mean) * (a[i] - mean));
	}

  // Find the standard deviation (part 2)
	stddev /= n;

	if(stddev == 0)
		std::cout << "Sigma is zero." << std::endl;

	return sqrt(stddev);
}
