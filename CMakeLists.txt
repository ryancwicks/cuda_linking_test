cmake_minimum_required(VERSION 3.20)

project (CUDALinkingTest LANGUAGES CXX)

add_subdirectory(MainAppLib)
add_subdirectory(RegularStaticCudaLib)
add_subdirectory(RegularStaticWithCudaDependencyLib)
add_subdirectory(RegularStaticCudaWithCudaDependencyLib)
 
add_executable(cuda_link_test_app main.cpp)

target_link_libraries (cuda_link_test_app PRIVATE
                        main_lib
                        regular_static_cuda_lib 
                        regular_static_with_cuda_dependency_lib
                        regular_cuda_static_with_cuda_dependency_lib
                        )