/*
 Assignment 2 - Algorithms and data structures
 
 University of Zurich
 Department of Informatics
 Vizualization and Multimedia Laboratory
 
 Author: Genc Mazlami
 */

#include <iostream>
#include "process_queue.h"
#include "process.h"


process_queue::process_queue(){
    _tail_index = 0;
}

int process_queue::get_size(){
    return _tail_index;
}

bool process_queue::is_empty(){
    return _tail_index==0;
}

void process_queue::add(process *my_process){
	if(this->get_size()<=MAX_SIZE){
	_processes[_tail_index] = my_process;
	_tail_index++;
	}
}

process* process_queue::remove(){
	process *removedElem;
	removedElem = _processes[0];
    _tail_index--;
    for(int i=0;i<_tail_index;i++){
    	_processes[i]= _processes[i+1];
    }
    //delete _processes[_tail_index+1];

    return removedElem;
}
