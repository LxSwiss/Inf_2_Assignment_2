//
//  ReversePolishCalculator.cpp
//  Stacks
//
//  Created by Rafael Ballester on 15/01/13.
//  Copyright 2013 Universität Zürich. All rights reserved.
//

#include <iostream>
#include "ReversePolishCalculator.h"


void ReversePolishCalculator::introduceNumber(int input) {
	internalStack.push(input);
}

void ReversePolishCalculator::operate(std::string operatorString) {
    if((int)internalStack.size()>=2){
	int b = internalStack.top();
    internalStack.pop();
    int a = internalStack.top();
    internalStack.pop();
    int result;

   if(operatorString=="+")
    	result = a + b;
   else if(operatorString=="-")
    	result = a - b;
   else if(operatorString=="*")
    	result = a*b;
   else result = 0;
   	   	 internalStack.push(result);
    }
}

void ReversePolishCalculator::printResult() {
  if((int)internalStack.size()==1){
	  std::cout << "the Result is : "<< internalStack.top()<< std::endl;
  }else{
	  std::cout << "U're using it wrong!!"<< std::endl;
  }
}
