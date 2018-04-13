/*
 * ocean_levels.c
 *
 *  Created on: Apr 12, 2018
 *      Author: Luke
 */

double calculateLevel(double years, double factor){
	printf("In %f years, the ocean's level will be %f millimeters higher than it is currently.\n", years, years*factor);
}

int main(){

	calculateLevel(5, 1.5);
	calculateLevel(7, 1.5);
	calculateLevel(10, 1.5);

}

