//
//  Car.cpp
//  Queues
//
//  Created by Michael Kündig on 2/16/12.
//  Copyright 2012 __MyCompanyName__. All rights reserved.
//

#include <iostream>
#include "Car.h"

void Car::waitAtRedLight(int lane) {
    std::cout << "Car number " << carNumber << " is waiting at the red light (lane " << lane << ")\n" << std::endl;
}

void Car::passCrossroads() {
    std::cout << "Car number " << carNumber << " is passing the crossroads\n" << std::endl;
}
