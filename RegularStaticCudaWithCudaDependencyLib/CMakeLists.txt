cmake_minimum_required(VERSION 3.20)

project (RegularCudaStaticWithCudaDependencyLib LANGUAGES CXX CUDA)

add_library (regular_cuda_static_with_cuda_dependency_lib STATIC 
                regular_file_call_cuda_2.h 
                regular_file_call_cuda_2.cpp
                regular_file_call_cuda_3.h 
                regular_file_call_cuda_3.cpp
                vector_add_2.h 
                vector_add_2.cu
            )

# This caused the project to fail to build
#set_target_properties(regular_static_cuda_lib PROPERTIES
#            CUDA_SEPARABLE_COMPILATION ON)

target_link_libraries(regular_cuda_static_with_cuda_dependency_lib regular_static_cuda_lib cudart)
