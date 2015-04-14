#include <gsl/gsl_cdf.h>
#include <stdio.h>

<<<<<<< HEAD
int main()
{
  double bottom_tail = gsl_cdf_gaussian_P(-1.96, 1);
  printf("Area between [-1.96, 1.96]: %g\n", 1-2*bottom_tail);
  
  return 0;
=======
int main() 
{
	double bottom_tail = gsl_cdf_gaussian_P(-1.96, 1);
	printf("Area between [-1.96, 1.96]: %g\n", 1-2*bottom_tail);
	
	return 0;
>>>>>>> 8975f4dc37c60c3d8d125deddb009f187f987127
}
