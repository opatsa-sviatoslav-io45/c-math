#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int
main(int argc, char** argv)
{
	char buf[32];
	double alpha, beta, z1, z2,
		sin_a, cos_a, sin_b, cos_b;

	alpha = 0;
	beta = 0;
	
	printf("Alpha: ");
	scanf("%s", buf);
	alpha = (atof(buf) / 180) * M_PI;
	
	printf("Beta: ");
	scanf("%s", buf);
	beta = (atof(buf) / 180) * M_PI;
	
	sin_a = sin(alpha);
	cos_a = cos(alpha);

	sin_b = sin(beta);
	cos_b = cos(beta);

	printf("sin_a = %.5f, cos_a = %.5f\tsin_b = %.5f, cos_b = %.5f\n", sin_a, cos_a, sin_b, cos_b);

	z1 = pow(cos_a - cos_b, 2) - pow(sin_a - sin_b, 2);
	z2 = -4 * pow(sin((alpha - beta) / 2), 2) * cos(alpha + beta);

	printf("z1: %.5f\t z2: %.5f\n", z1, z2);


	return 0;
}