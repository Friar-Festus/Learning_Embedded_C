#include <stdio.h>

int main() 
{
	float latitude;
	float longitude;
	char info[80];
	int started = 0;

	puts("data=[");
	while (scanf("%f,%f,%79[^\n]", &latitude, &longitude, info) == 3) {
		if (started) {
			printf(",\n");
		}
		else {
			started = 1;
		}
		if ((latitude < -90.0) || (latitude > 90.0)) {
			fprintf(stderr, "Invalid latitude: %f\n", latitude);
			started = 0;	// Suppress comma
			continue;		// Do not print out invalid data to file
		}
		if ((longitude < -180.0) || (longitude > 180.0)) {
			fprintf(stderr, "Invalid longitude: %f\n", longitude);
			started = 0;	// Suppress comma
			continue;		// Do not print out invalid data to file
		}

		printf("{latitude: %f, longitude: %f, info: '%s'}", latitude, longitude, info);
	}

	puts("\n]");
	return 0;
}
