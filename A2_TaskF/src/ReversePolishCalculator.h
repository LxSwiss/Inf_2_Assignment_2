//
//  ReversePolishCalculator.h
//  Stacks
//
//  Created by Rafael Ballester on 15/01/13.
//  Copyright 2013 Universität Zürich. All rights reserved.
//

#ifndef ReversePolishCalculator_h
#define ReversePolishCalculator_h

#include <stack>

class ReversePolishCalculator {

	public:
    	void introduceNumber(int input);
    	void operate(std::string operatorString);
    	void printResult();

	private:
    	std::stack<int> internalStack;
};

#endif
