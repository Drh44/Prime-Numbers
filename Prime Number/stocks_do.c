/* Author: Dylan Hesser
 * Project 2
 * This program asks user for their stock prices. 
 * Once all these are inputted, it will calculate the
 * average, max number, and min number of the stocks entered
 */

#include <stdio.h>

float stockPrice  ;
float numOfStocks = 0;
float sumOfStocks = 0;
float average = 0.0;
float min = 999999 ;
float max = 0.0;
float variance = 0.0;
float sum1 = 0.0; // Will be used to add up the sum of stockPriceSquared
float sumOfStocks1Average = 0.0;


int main ( ) {
	

	printf(" This program will calculate the average, min, and max number");
	printf("of your stocks.-1 will begin the calculations.\n");
	
	
	//printf(" Insert first stock price: ");
	//scanf("%d", &stockPrice);
	

	// This is the do loop that continues user input
	do {
		printf(" Insert next stock price: ");
		scanf( "%f", &stockPrice);
			
	
		if (stockPrice >=0) {
		sumOfStocks += stockPrice;	
	    sum1 += (stockPrice * stockPrice); //used in variance equation
		numOfStocks++;
		sumOfStocks1Average = (sumOfStocks * sumOfStocks) / numOfStocks; //used in variance equation
		variance = (sum1 - sumOfStocks1Average) / (numOfStocks - 1); // variance equation
		average = (float)sumOfStocks / numOfStocks;

			
		}
		// changes the min and max accordingly
	if( stockPrice < min && stockPrice >= 0) {
			min = stockPrice ;
			}
		
		if ( stockPrice > max) {
			max = stockPrice; }
		
		continue;
	
		} while (stockPrice >= 0 ) ;		
	
	if (stockPrice == -1) {
	printf(" We will now begin calculations\n");
	}
// This prints the calculations for the user

	printf("The average is %.2f\n", average);
	printf(" The variance is %.2f\n", variance);
	printf("The max is %.2f\n", max);
	printf("The min is %.2f", min);
	
	}
