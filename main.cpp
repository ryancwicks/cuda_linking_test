
#include "MainAppLib/main_lib.h"
#include "RegularStaticCudaLib/regular_file.h"
#include "RegularStaticCudaLib/vector_add.h"
#include "RegularStaticWithCudaDependencyLib/regular_file_call_cuda.h"
#include "RegularStaticCudaWithCudaDependencyLib/regular_file_call_cuda_2.h"
#include "RegularStaticCudaWithCudaDependencyLib/regular_file_call_cuda_3.h"
#include "RegularStaticCudaWithCudaDependencyLib/vector_add_2.h"


int main (int argc, char *argv[]) {

    // MainAppLib
    main_lib();

    //Regular Static CUDA Lib
    regular_file();
    vector_add_main();

    //Regular Static with CUDA Dependency Lib
    regular_file_call_cuda();

    //Regular Static CUDA with CUDA Dependency Lib
    regular_file_call_cuda_2();
    regular_file_call_cuda_3();
    vector_add_main_2();

    return 0;
}