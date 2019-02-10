#include <iostream>
#include <vector>
#include <cmath>

double deviation( double* a, int n )
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
