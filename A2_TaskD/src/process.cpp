/*
 Assignment 2 - Algorithms and data structures
 
 University of Zurich
 Department of Informatics
 Vizualization and Multimedia Laboratory
 
 Author: Genc Mazlami
 */

#include <iostream>
#include "process.h"

process::process(int id, std::string description){
    _id = id;
    _description = description;
}

int process::get_id(){
    return _id;
}

std::string process::get_description(){
    return _description;
}

