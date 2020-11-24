cmake_minimum_required(VERSION "3.19.0")
project("Menu_Beta")


add_executable( ${PROJECT_NAME} ${CMAKE_CURRENT_SOURCE_DIR}/Main.cpp)
# Libraires+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
link_directories( ${CMAKE_SOURCE_DIR}/Dependecies/ChangeTheJ/ChangeTheJ.h)
link_directories( ${CMAKE_SOURCE_DIR}/Dependecies/Fibonum/Fibonum.h)


install(TARGETS "${PROJECT_NAME}" DESTINATION bin) #(CMAKE_INSTALL_PREFIX)\bin
install(FILES "Main.cpp" DESTINATION src) #(CMAKE_INSTALL_PREFIX)\src