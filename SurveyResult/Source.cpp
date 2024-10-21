#include <stdio.h>
#define RESPONSE_SIZE 20
#define FREQUENCY_SIZE 6

int main() {
	int responses[RESPONSE_SIZE] = { 1, 2, 5, 4, 3, 5, 2, 1, 3, 1, 4, 3, 3, 3, 2, 3, 3, 2, 2, 5 };
	// empthy array 

	int frequency[FREQUENCY_SIZE] = { NULL };

	for (int answer = 0; answer < RESPONSE_SIZE; answer++)
	{
		frequency[responses[answer]]++;

	}

	// display results
	printf("%s%12s\n", "Rating", "Frequency");

	// output the frequencies in a tabular format
	for (int rating = 1; rating < FREQUENCY_SIZE; rating++) {
		printf("%6d%12d\n", rating, frequency[rating]);

	}
    return 0;
}