/*
 * stock_trading.c
 *
 *  Created on: Apr 12, 2018
 *      Author: Luke
 */

int main(){
	double stockPrice = 45.50;
	int stocksBought = 1000;
	double commission1 = ((double)stocksBought*stockPrice)*.02;

	double stockSell = 56.90;
	int stocksSold = 1000;
	double commission2 = ((double)stocksSold*stockSell)*.02;

	double profit = ((stockSell*(double)stocksSold)-commission2) - ((stockPrice*(double)stocksBought)+commission2);

	printf("Joe paid $%f for the stock.\n", stockPrice*(double)stocksBought);
	printf("He paid $%f commission when he bought it.\n", commission1);
	printf("He sold the stock for $%f.\n", stockSell*(double)stocksSold);
	printf("He paid another $%f commission when he sold it.\n", commission2);

	printf("Joe's profit was $%f.", profit);
}
