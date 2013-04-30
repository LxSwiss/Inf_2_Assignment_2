//
//  main.cpp
//  Mail
//
//  Created by Fabian Hofstetter on 09.02.12.
//  Updated by Rafael Ballester on 15.01.13.
//  Copyright 2013 Universität Zürich. All rights reserved.
//

#include <iostream>
#include <stack>
#include <vector>

#include "letter.hpp"

void init();
void printTrays();
void cleanUp();
std::stack<letter*> orderByPriority(std::stack<letter*> tray);

std::stack<letter*> tray_work;
std::stack<letter*> tray_family;
std::stack<letter*> tray_hobby;

using std::string;
using std::cout;
using std::endl;
using std::stack;
using std::vector;

int main (int argc, const char * argv[])
{

    init();
    
    printTrays();
    
    cleanUp();
    
    printTrays();
    
    tray_work = orderByPriority(tray_work);
    tray_family = orderByPriority(tray_family);
    tray_hobby = orderByPriority(tray_hobby);
    
    printTrays();
    
    return 0;
}

void init(){
    
    letter* letter1 = new letter(5, "work", "John");
    letter* letter2 = new letter(3, "family", "Jack");
    letter* letter3 = new letter(1, "work", "Hugo");
    letter* letter4 = new letter(9, "hobby", "Lisa");
    letter* letter5 = new letter(4, "family", "Lena");
    letter* letter6 = new letter(0, "work", "Madden");
    letter* letter7 = new letter(8, "hobby", "Jules");
    letter* letter8 = new letter(4, "hobby", "Rachel");
    letter* letter9 = new letter(0, "family", "Sam");
    letter* letter10 = new letter(7, "work", "Lio");

    tray_work.push(letter1);
    tray_work.push(letter2);
    tray_work.push(letter3);
    
    tray_family.push(letter4);
    tray_family.push(letter5);
    tray_family.push(letter6);
    
    tray_hobby.push(letter7);
    tray_hobby.push(letter8);
    tray_hobby.push(letter9);
    tray_hobby.push(letter10);
}

void printTrays(){
	stack<letter*> *trayarr[] = {&tray_work, &tray_family, &tray_hobby};
	string trnames[] = {"Tray Work contains: ","Tray Family contains: ", "Tray Hobby contains: "};
	for(int i=0; i<3;i++){
	stack<letter*> copy(*trayarr[i]);

	cout << trnames[i] << endl;
	int j = 1;
	while(!copy.empty()){
		letter* lcopy = copy.top();
		cout<<"[" << j++<< "] " << lcopy->getPriority()<< " "<< lcopy->getTray() << " "<< lcopy->getSender()<<endl;
		copy.pop();
	}
	}
}


void cleanUp(){
	stack<letter*> tempArray;
	stack<letter*> *trayarr[] = {&tray_work, &tray_family, &tray_hobby};

	//put all letters into tempArray
	for(int i=0; i<3; i++){
		while(!trayarr[i]->empty()){
			tempArray.push(trayarr[i]->top());
			trayarr[i]->pop();
		}
	}

	//sort letters
	while(!tempArray.empty()){
		letter* lcopy = tempArray.top();

		if(lcopy->getTray()=="work"){
			tray_work.push(lcopy);
		}
		if(lcopy->getTray()=="family"){
		tray_family.push(lcopy);
		}
		if(lcopy->getTray()=="hobby"){
		tray_hobby.push(lcopy);
		}
		tempArray.pop();
	}


}

std::stack<letter*> orderByPriority(std::stack<letter*> tray_){
	//buuuuuu
	return tray_;
}
