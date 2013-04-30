//
//  main.cpp
//  Queues
//
//  Created by Michael KÃ¼ndig on 2/16/12.
//  Copyright 2012 __MyCompanyName__. All rights reserved.

#include <iostream>
#include <queue>
#include <deque>
#include <string>
#include "Car.h"

using std::cout;
using std::cin;
using std::string;
using std::endl;
using std::queue;
queue<Car> line1;
queue<Car> line2;
void pushNewCar(bool greenLight, Car car);
int main(int argc, const char * argv[]) {
	bool greenLight = false;
	int carnumb = 0;
	string input;

	cout << "Welcome to Traffic Lights!" << endl;
	while (true) {
		cout << "A new Car has arrived! Do you want to switch traffic lights? (y/n)" << endl;
		cin >> input;
		Car car = Car(carnumb++);
		if (input == "y") {
			if (greenLight){
				greenLight = false;
				cout<< "Traffic light is red!" << endl;
			}
			else{
				greenLight = true;
				cout<< "Traffic light is green!" << endl;
			}
		}
		else if (input == "n") {

		}else if(input == "stop"){
			cout << "güüdbye!"<< endl;
			break;
		}

		else {
			cout << "Wrong input!" << endl;
			continue;
		}
		pushNewCar(greenLight, car);

	}
}
void pushNewCar(bool greenLight, Car car) {
	if (line1.size() > line2.size()) {
		line2.push(car);
		if (greenLight) {
			while (!line2.empty()) {
				line2.front().passCrossroads();
				line2.pop();
			}
		} else {
			line2.back().waitAtRedLight(2);
		}
	} else {
		line1.push(car);
		if (greenLight) {
			while (!line1.empty()) {
				line1.front().passCrossroads();
				line1.pop();
			}
		} else {
			line1.back().waitAtRedLight(1);
		}
	}
}

/*
 std::queue<Car> line1;
 std::queue<Car> line2;

 Car car1 = Car(149302);
 Car car2 = Car(143523);
 Car car3 = Car(253902);
 Car car4 = Car(684902);

 line1.push(car1);
 line1.push(car2);
 line2.push(car3);
 line2.push(car4);
 */

