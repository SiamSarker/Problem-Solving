# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.17

# Delete rule output on recipe failure.
.DELETE_ON_ERROR:


#=============================================================================
# Special targets provided by cmake.

# Disable implicit rules so canonical targets will work.
.SUFFIXES:


# Disable VCS-based implicit rules.
% : %,v


# Disable VCS-based implicit rules.
% : RCS/%


# Disable VCS-based implicit rules.
% : RCS/%,v


# Disable VCS-based implicit rules.
% : SCCS/s.%


# Disable VCS-based implicit rules.
% : s.%


.SUFFIXES: .hpux_make_needs_suffix_list


# Command-line flag to silence nested $(MAKE).
$(VERBOSE)MAKESILENT = -s

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
CMAKE_COMMAND = /Applications/CLion.app/Contents/bin/cmake/mac/bin/cmake

# The command to remove a file.
RM = /Applications/CLion.app/Contents/bin/cmake/mac/bin/cmake -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = "/Users/siamsarker/Google Drive/Problem Solving/STL"

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = "/Users/siamsarker/Google Drive/Problem Solving/STL/cmake-build-debug"

# Include any dependencies generated for this target.
include CMakeFiles/STL1.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/STL1.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/STL1.dir/flags.make

CMakeFiles/STL1.dir/bitset_Sieve.cpp.o: CMakeFiles/STL1.dir/flags.make
CMakeFiles/STL1.dir/bitset_Sieve.cpp.o: ../bitset_Sieve.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir="/Users/siamsarker/Google Drive/Problem Solving/STL/cmake-build-debug/CMakeFiles" --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/STL1.dir/bitset_Sieve.cpp.o"
	/Library/Developer/CommandLineTools/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/STL1.dir/bitset_Sieve.cpp.o -c "/Users/siamsarker/Google Drive/Problem Solving/STL/bitset_Sieve.cpp"

CMakeFiles/STL1.dir/bitset_Sieve.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/STL1.dir/bitset_Sieve.cpp.i"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E "/Users/siamsarker/Google Drive/Problem Solving/STL/bitset_Sieve.cpp" > CMakeFiles/STL1.dir/bitset_Sieve.cpp.i

CMakeFiles/STL1.dir/bitset_Sieve.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/STL1.dir/bitset_Sieve.cpp.s"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S "/Users/siamsarker/Google Drive/Problem Solving/STL/bitset_Sieve.cpp" -o CMakeFiles/STL1.dir/bitset_Sieve.cpp.s

# Object files for target STL1
STL1_OBJECTS = \
"CMakeFiles/STL1.dir/bitset_Sieve.cpp.o"

# External object files for target STL1
STL1_EXTERNAL_OBJECTS =

STL1: CMakeFiles/STL1.dir/bitset_Sieve.cpp.o
STL1: CMakeFiles/STL1.dir/build.make
STL1: CMakeFiles/STL1.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir="/Users/siamsarker/Google Drive/Problem Solving/STL/cmake-build-debug/CMakeFiles" --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable STL1"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/STL1.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/STL1.dir/build: STL1

.PHONY : CMakeFiles/STL1.dir/build

CMakeFiles/STL1.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/STL1.dir/cmake_clean.cmake
.PHONY : CMakeFiles/STL1.dir/clean

CMakeFiles/STL1.dir/depend:
	cd "/Users/siamsarker/Google Drive/Problem Solving/STL/cmake-build-debug" && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" "/Users/siamsarker/Google Drive/Problem Solving/STL" "/Users/siamsarker/Google Drive/Problem Solving/STL" "/Users/siamsarker/Google Drive/Problem Solving/STL/cmake-build-debug" "/Users/siamsarker/Google Drive/Problem Solving/STL/cmake-build-debug" "/Users/siamsarker/Google Drive/Problem Solving/STL/cmake-build-debug/CMakeFiles/STL1.dir/DependInfo.cmake" --color=$(COLOR)
.PHONY : CMakeFiles/STL1.dir/depend
