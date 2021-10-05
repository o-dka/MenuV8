cmake_minimum_required(VERSION 3.0.0)
project(Menu_V_Eight VERSION 1.3.0)


add_executable(Menu_V_Eight main/main.cpp)

add_subdirectory(Rock)
add_subdirectory(ChangeTheJ)
add_subdirectory(Fibonum)

target_link_libraries(Menu_V_Eight PUBLIC ChangeTheJ)
target_link_libraries(Menu_V_Eight PUBLIC Fibonum)
target_link_libraries(Menu_V_Eight PUBLIC Rock) 
