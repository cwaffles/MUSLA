//
//  University.cpp
//  MUSLA
//
//  Created by June Kim on 2016-07-21.
//  Copyright © 2016 JuneKim_JimmyZhong. All rights reserved.
//

#include "University.hpp"
#include <iostream>

using namespace std;

University::University(){
    
}

void University::display() {
    cout << universityName << ": " << mailingAddress << ", " << emailAddress <<endl;
}