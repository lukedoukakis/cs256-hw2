/*
 * restaurant_bill.c
 *
 *  Created on: Apr 12, 2018
 *      Author: Luke
 */

int main(){

	double meal, tax, tip, total;

	meal = 88.67;
	tax = .0675;
	tip = .2;

	total = (meal + meal*tax);
	total = total + total*tip;

	printf("meal: %f\n", meal);
	printf("tax: %f\n", meal*tax);
	printf("tip: %f\n", (meal*tax)*tip);
	printf("total: %f\n", total);
}
