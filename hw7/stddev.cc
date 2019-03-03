// Function Definition
#include "stddev.h"
#include <iostream>
#include <vector>
#include <cmath>
#include <cstdarg>

using namespace std;

double stddev(int n, ... ){
  // Initial Check: verify n >= 0
  if (n <= 0){
    std::cerr << "Invalid 2nd function parameter. Element cout is set to <= 0." << std::endl;
    return 0.00;
  }

  double sum = 0.00;
  double mean = 0.00;
  double stddev = 0.00;

  va_list args;
  va_start(args, n);

  // Find the total sum of all elements in a
  for(int i = 0; i < n; i++)
  {
    sum += va_arg(args, int);
  }

  // Calculate the mean of all elements.
  mean = sum / n;

  // End va_list
  va_end(args);

  //Restart list
  va_list args2;
  va_start(args2, n);

  // Find the Standard Deviation (part 1)
  int temp_value;
  for(int i = 0; i < n; i++)
  {
    temp_value = va_arg(args2, int);
    stddev += ((temp_value - mean) * (temp_value - mean));
  }

  // Find the standard deviation (part 2)
  stddev /= n;

  if(stddev == 0)
    std::cout << "Sigma is zero." << std::endl;

  return sqrt(stddev);
}
