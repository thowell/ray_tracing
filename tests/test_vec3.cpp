#include <iostream>
#include "vec3.h"

int main(){
    std::cout << "testing vec3 class..." << std::endl;

    vec3 v0(0.0, 0.0, 0.0);
    vec3 v1(1.0, 1.0, 1.0);
    vec3 v2(1.0, 2.0, 3.0);

    v0 += v1;

    
    return 0;
}