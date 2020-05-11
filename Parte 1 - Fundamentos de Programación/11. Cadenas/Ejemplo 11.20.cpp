//
//  main.cpp
//  Ejemplo 11.20
//
//  Created by Aerodron Colombia on 7/03/20.
//  Copyright © 2020 Carlos Daniel Pimentel Díaz. All rights reserved.
//

#include <iostream>
using namespace std;

int main(int argc, const char * argv[]) {
    char cad[81] = "T+u+r+b+o C++";
    char *cadPtr;
    cadPtr = strchr(cad, '+');
    cout << cadPtr << endl;
}
