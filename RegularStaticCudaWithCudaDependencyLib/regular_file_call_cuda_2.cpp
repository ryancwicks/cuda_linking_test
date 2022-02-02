#include "regular_file_call_cuda_2.h"
#include "../RegularStaticCudaLib/vector_add.h"
#include <iostream>

void regular_file_call_cuda_2() {
    std::cout << "In a cpp file in a regular library with a cuda dependency, Version 2." << std::endl;
    vector_add_main();
}