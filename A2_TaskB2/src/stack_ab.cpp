//
//  stack_ab.cpp
//  stack_arraybased
//
//  Created by Loc Nguyen on 16.02.12.
//  Copyright (c) 2012 Universität Zürich. All rights reserved.
//

#include <iostream>
#include "stack_ab.h"

Stack_ab::Stack_ab() {

	index = 0;
}

Stack_ab::~Stack_ab() {

}

int Stack_ab::size() {
	return index;
}

void Stack_ab::push(std::string newelement) {
	if (index >= StackMax) {
		throw OverFlow();
		/*OverFlow overFlowex;
		 overFlowex.overflowoutput();*/
	}
	data[index] = newelement;
	index++;

}

std::string Stack_ab::pop() {
	if (index <= 0) {
		throw UnderFlow();
	/*UnderFlow underFlowex;
	 underFlowex.underflowoutput();*/

	}
		index--;
		return data[index];
}

std::string Stack_ab::top() {
	if (index <= 0) {
		throw UnderFlow();
	}
	return data[index-1];
}

bool Stack_ab::empty() {
	return index <= 0;
}

