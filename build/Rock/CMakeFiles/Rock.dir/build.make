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
include Rock/CMakeFiles/Rock.dir/depend.make

# Include the progress variables for this target.
include Rock/CMakeFiles/Rock.dir/progress.make

# Include the compile flags for this target's objects.
include Rock/CMakeFiles/Rock.dir/flags.make

Rock/CMakeFiles/Rock.dir/src/Rock/Rock.cpp.o: Rock/CMakeFiles/Rock.dir/flags.make
Rock/CMakeFiles/Rock.dir/src/Rock/Rock.cpp.o: /home/skate/MenuV8/Menu/Rock/src/Rock/Rock.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/skate/MenuV8/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object Rock/CMakeFiles/Rock.dir/src/Rock/Rock.cpp.o"
	cd /home/skate/MenuV8/build/Rock && /usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/Rock.dir/src/Rock/Rock.cpp.o -c /home/skate/MenuV8/Menu/Rock/src/Rock/Rock.cpp

Rock/CMakeFiles/Rock.dir/src/Rock/Rock.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Rock.dir/src/Rock/Rock.cpp.i"
	cd /home/skate/MenuV8/build/Rock && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/skate/MenuV8/Menu/Rock/src/Rock/Rock.cpp > CMakeFiles/Rock.dir/src/Rock/Rock.cpp.i

Rock/CMakeFiles/Rock.dir/src/Rock/Rock.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Rock.dir/src/Rock/Rock.cpp.s"
	cd /home/skate/MenuV8/build/Rock && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/skate/MenuV8/Menu/Rock/src/Rock/Rock.cpp -o CMakeFiles/Rock.dir/src/Rock/Rock.cpp.s

# Object files for target Rock
Rock_OBJECTS = \
"CMakeFiles/Rock.dir/src/Rock/Rock.cpp.o"

# External object files for target Rock
Rock_EXTERNAL_OBJECTS =

Rock/libRock.a: Rock/CMakeFiles/Rock.dir/src/Rock/Rock.cpp.o
Rock/libRock.a: Rock/CMakeFiles/Rock.dir/build.make
Rock/libRock.a: Rock/CMakeFiles/Rock.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/skate/MenuV8/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX static library libRock.a"
	cd /home/skate/MenuV8/build/Rock && $(CMAKE_COMMAND) -P CMakeFiles/Rock.dir/cmake_clean_target.cmake
	cd /home/skate/MenuV8/build/Rock && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/Rock.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
Rock/CMakeFiles/Rock.dir/build: Rock/libRock.a

.PHONY : Rock/CMakeFiles/Rock.dir/build

Rock/CMakeFiles/Rock.dir/clean:
	cd /home/skate/MenuV8/build/Rock && $(CMAKE_COMMAND) -P CMakeFiles/Rock.dir/cmake_clean.cmake
.PHONY : Rock/CMakeFiles/Rock.dir/clean

Rock/CMakeFiles/Rock.dir/depend:
	cd /home/skate/MenuV8/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/skate/MenuV8/Menu /home/skate/MenuV8/Menu/Rock /home/skate/MenuV8/build /home/skate/MenuV8/build/Rock /home/skate/MenuV8/build/Rock/CMakeFiles/Rock.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : Rock/CMakeFiles/Rock.dir/depend
