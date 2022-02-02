#include "regular_file_call_cuda_3.h"
#include "vector_add_2.h"
#include <iostream>

void regular_file_call_cuda_3() {
    std::cout << "In a cpp file in a regular library with a local cuda dependency, Version 3." << std::endl;
    vector_add_main_2();
}