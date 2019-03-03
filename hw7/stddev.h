/**
 *  Author: Michael Snider
 *  Date: 3/3/2019
 *  Program: stddev.h
 *
 *  \brief This function calculates the standard deviation of an array.
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
 *  \param[in] n The total number of elements being passed as arguments
 *  \return Returns the standard deviation of the array a as type double.
 *
 */

double stddev(int n, ... );
