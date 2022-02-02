cmake_minimum_required(VERSION 3.20)

project (RegularStaticWithCudaDependencyLib LANGUAGES CXX)

add_library (regular_static_with_cuda_dependency_lib STATIC 
                regular_file_call_cuda.h 
                regular_file_call_cuda.cpp
            )

# This caused the project to fail to build
#set_target_properties(regular_static_cuda_lib PROPERTIES
#            CUDA_SEPARABLE_COMPILATION ON)

target_link_libraries(regular_static_with_cuda_dependency_lib regular_static_cuda_lib)
