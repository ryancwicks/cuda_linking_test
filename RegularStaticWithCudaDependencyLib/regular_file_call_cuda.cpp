#include "regular_file_call_cuda.h"
#include "../RegularStaticCudaLib/vector_add.h"
#include <iostream>

void regular_file_call_cuda() {
    std::cout << "In a cpp file in a regular library with a cuda dependency." << std::endl;
    vector_add_main();
}