//
//  Car.h
//  Queues
//
//  Created by Michael Kündig on 2/16/12.
//  Copyright 2012 __MyCompanyName__. All rights reserved.
//

#ifndef Queues_Car_h
#define Queues_Car_h

class Car {
public:
    Car(int number) : carNumber(number) {}
    void waitAtRedLight(int lane);
    void passCrossroads();
private:
    int carNumber;
};

#endif
