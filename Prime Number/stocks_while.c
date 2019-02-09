/* Author: Dylan Hesser
 * Project 2
 * This program asks user for their stock prices. 
 * Once all these are inputted, it will calculate the
 * average, max number, and min number of the stocks entered
 */


#include <stdio.h>
/* These are the variables
 * these are floats so that the user can
 * enter decimals and also see their results as decimals
 */
float stockPrice ;
float numOfStocks = 0.0;
float sumOfStocks = 0.0 ;
float average = 0.0;
float min = 0.0;
float max = 0.0;
float stockPriceSquared ;
float sum1 = 0.0; // Will be used to add up the sum of stockPriceSquared
float sumVariance = 0.0 ;
float numOfStocksMinusOne = 0.0; 
float variance = 0.0;
float sumOfStocks1 = 0.0 ;
float sumOfStocks1Average = 0.0;

int main ( ) {
	



	printf(" This program will calculate the average, min, and max number");
	printf("of your stocks.A negative number will begin the calculations.\n");
	
	// asks user for first stock and sets variables based on it
	printf(" Insert first stock price: ");
	scanf("%f", &stockPrice);
	// These next lines set the variables for the first inputted number
	max = stockPrice;
	min = stockPrice;
	sumOfStocks+=stockPrice;
	numOfStocks++;
			
	sum1 += (stockPrice * stockPrice);
	
	
	// this while loop will loop continues user input
	 
	while (stockPrice >= 0 ) {
		printf(" Insert next stock price: ");
		scanf( "%f", &stockPrice);
		
		if (stockPrice >=0) {	
		sumOfStocks += stockPrice;	
	    sum1 += (stockPrice * stockPrice);
		numOfStocks++;
		sumOfStocks1Average = (sumOfStocks * sumOfStocks) / numOfStocks; //
		variance = (sum1 - sumOfStocks1Average) / (numOfStocks - 1); // variance equation
		average = (float)sumOfStocks / numOfStocks;
	}
	
	// This next section sets up the min and max number and changes it
		if ( stockPrice < min && stockPrice >= 0) {
			min = stockPrice ;
			}
		else if ( stockPrice > max) {
			max = stockPrice; }
		continue;
		
	}
	
	printf(" We will now begin calculations\n");
	
	// This prints the output 	
	printf("The average is %.2f\n", average);
	printf("The variance is %.2f\n", variance);
	printf("The max is %.2f\n", max);
	printf("The min is %.2f", min);
	
		
	}

