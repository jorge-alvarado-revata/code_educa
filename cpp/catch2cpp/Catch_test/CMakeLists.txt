add_executable(Catch_tests_run demo2Test.cpp)
add_library(A STATIC perros//Perros.cpp)
target_link_libraries(Catch_tests_run A)
