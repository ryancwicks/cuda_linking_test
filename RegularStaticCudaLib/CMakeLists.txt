cmake_minimum_required(VERSION 3.20)

project (RegularStaticCudaLib LANGUAGES CXX CUDA)

add_library (regular_static_cuda_lib STATIC 
                vector_add.h 
                vector_add.cu
                regular_file.h 
                regular_file.cpp
            )

# This caused the project to fail to build
#set_target_properties(regular_static_cuda_lib PROPERTIES
#            CUDA_SEPARABLE_COMPILATION ON)

target_link_libraries(regular_static_cuda_lib cudart)
