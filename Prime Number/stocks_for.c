/* Author: Dylan Hesser
 * project 2
 *This program asks user for their stock prices. 
 *Once all these are inputted, it will calculate the
 *average, max number, and min number of the stocks entered
 */


#include <stdio.h>
/* These are the variables
 * these are floats so that the user can
 * enter decimals and also see their results as decimals
 */
float stockPrice  ;
float numOfStocks ;
float sumOfStocks ;
float average ;
float min = 99999999 ;
float max = 0.0 ;
float i  ;
float variance;
float sum1 = 0.0;
float sumOfStocks1Average = 0.0;

int main ( ) {
	
	printf(" This program will calculate the average, min, and max number");
	printf("of your stocks.-1 will begin the calculations.\n");
	

	// This for loop continues user input
	for (stockPrice =0 ;stockPrice >= i && stockPrice != -1; ) {
		printf(" Insert  stock price: ");
		scanf( "%f", &stockPrice);
 	
		
		if ( stockPrice > 0) {
		sumOfStocks += stockPrice;	
	    sum1 += (stockPrice * stockPrice); //used in variance equation
		numOfStocks++;
		sumOfStocks1Average = (sumOfStocks * sumOfStocks) / numOfStocks; //used in variance equation
		variance = (sum1 - sumOfStocks1Average) / (numOfStocks - 1); // variance equation
		average = (float)sumOfStocks / numOfStocks;
		
		
	}
	
		
		// This changes the lowest and highest number based on user input
		if ( stockPrice < min && stockPrice != -1) {
			min = stockPrice ;
			}
			
		if ( stockPrice > max) {
			max = stockPrice; }
			
		continue;		
	}
	// This prints the output for the user
	if (stockPrice == -1){
		printf(" We will now begin calculations\n");
	}
	
	
		printf("The average is %.2f\n", average);
		printf("The variance is %.2f\n", variance);
		printf("The max is %.2f\n", max);
		printf("The min is %.2f", min);
		
	}
