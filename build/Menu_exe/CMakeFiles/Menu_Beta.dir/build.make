# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.16

# Delete rule output on recipe failure.
.DELETE_ON_ERROR:


#=============================================================================
# Special targets provided by cmake.

# Disable implicit rules so canonical targets will work.
.SUFFIXES:


# Remove some rules from gmake that .SUFFIXES does not remove.
SUFFIXES =

.SUFFIXES: .hpux_make_needs_suffix_list


# Suppress display of executed commands.
$(VERBOSE).SILENT:


# A target that is always out of date.
cmake_force:

.PHONY : cmake_force

#=============================================================================
# Set environment variables for the build.

# The shell in which to execute make rules.
SHELL = /bin/sh

# The CMake executable.
CMAKE_COMMAND = /usr/bin/cmake

# The command to remove a file.
RM = /usr/bin/cmake -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/skate/MenuV8/Menu

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/skate/MenuV8/build

# Include any dependencies generated for this target.
include Menu_exe/CMakeFiles/Menu_Beta.dir/depend.make

# Include the progress variables for this target.
include Menu_exe/CMakeFiles/Menu_Beta.dir/progress.make

# Include the compile flags for this target's objects.
include Menu_exe/CMakeFiles/Menu_Beta.dir/flags.make

Menu_exe/CMakeFiles/Menu_Beta.dir/main.cpp.o: Menu_exe/CMakeFiles/Menu_Beta.dir/flags.make
Menu_exe/CMakeFiles/Menu_Beta.dir/main.cpp.o: /home/skate/MenuV8/Menu/Menu_exe/main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/skate/MenuV8/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object Menu_exe/CMakeFiles/Menu_Beta.dir/main.cpp.o"
	cd /home/skate/MenuV8/build/Menu_exe && /usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/Menu_Beta.dir/main.cpp.o -c /home/skate/MenuV8/Menu/Menu_exe/main.cpp

Menu_exe/CMakeFiles/Menu_Beta.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Menu_Beta.dir/main.cpp.i"
	cd /home/skate/MenuV8/build/Menu_exe && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/skate/MenuV8/Menu/Menu_exe/main.cpp > CMakeFiles/Menu_Beta.dir/main.cpp.i

Menu_exe/CMakeFiles/Menu_Beta.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Menu_Beta.dir/main.cpp.s"
	cd /home/skate/MenuV8/build/Menu_exe && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/skate/MenuV8/Menu/Menu_exe/main.cpp -o CMakeFiles/Menu_Beta.dir/main.cpp.s

# Object files for target Menu_Beta
Menu_Beta_OBJECTS = \
"CMakeFiles/Menu_Beta.dir/main.cpp.o"

# External object files for target Menu_Beta
Menu_Beta_EXTERNAL_OBJECTS =

Menu_exe/Menu_Beta: Menu_exe/CMakeFiles/Menu_Beta.dir/main.cpp.o
Menu_exe/Menu_Beta: Menu_exe/CMakeFiles/Menu_Beta.dir/build.make
Menu_exe/Menu_Beta: ChangeTheJ/libChangeTheJ.a
Menu_exe/Menu_Beta: Fibonum/libFibonum.a
Menu_exe/Menu_Beta: Rock/libRock.a
Menu_exe/Menu_Beta: Menu_exe/CMakeFiles/Menu_Beta.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/skate/MenuV8/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable Menu_Beta"
	cd /home/skate/MenuV8/build/Menu_exe && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/Menu_Beta.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
Menu_exe/CMakeFiles/Menu_Beta.dir/build: Menu_exe/Menu_Beta

.PHONY : Menu_exe/CMakeFiles/Menu_Beta.dir/build

Menu_exe/CMakeFiles/Menu_Beta.dir/clean:
	cd /home/skate/MenuV8/build/Menu_exe && $(CMAKE_COMMAND) -P CMakeFiles/Menu_Beta.dir/cmake_clean.cmake
.PHONY : Menu_exe/CMakeFiles/Menu_Beta.dir/clean

Menu_exe/CMakeFiles/Menu_Beta.dir/depend:
	cd /home/skate/MenuV8/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/skate/MenuV8/Menu /home/skate/MenuV8/Menu/Menu_exe /home/skate/MenuV8/build /home/skate/MenuV8/build/Menu_exe /home/skate/MenuV8/build/Menu_exe/CMakeFiles/Menu_Beta.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : Menu_exe/CMakeFiles/Menu_Beta.dir/depend

