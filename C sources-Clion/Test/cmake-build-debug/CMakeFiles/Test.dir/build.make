# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.22

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

#Suppress display of executed commands.
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
RM = /usr/bin/cmake -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = "/mnt/d/Lin's Code/2023/C sources-Clion/Test"

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = "/mnt/d/Lin's Code/2023/C sources-Clion/Test/cmake-build-debug"

# Include any dependencies generated for this target.
include CMakeFiles/Test.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include CMakeFiles/Test.dir/compiler_depend.make

# Include the progress variables for this target.
include CMakeFiles/Test.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/Test.dir/flags.make

CMakeFiles/Test.dir/main.c.o: CMakeFiles/Test.dir/flags.make
CMakeFiles/Test.dir/main.c.o: ../main.c
CMakeFiles/Test.dir/main.c.o: CMakeFiles/Test.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir="/mnt/d/Lin's Code/2023/C sources-Clion/Test/cmake-build-debug/CMakeFiles" --progress-num=$(CMAKE_PROGRESS_1) "Building C object CMakeFiles/Test.dir/main.c.o"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -MD -MT CMakeFiles/Test.dir/main.c.o -MF CMakeFiles/Test.dir/main.c.o.d -o CMakeFiles/Test.dir/main.c.o -c "/mnt/d/Lin's Code/2023/C sources-Clion/Test/main.c"

CMakeFiles/Test.dir/main.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/Test.dir/main.c.i"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E "/mnt/d/Lin's Code/2023/C sources-Clion/Test/main.c" > CMakeFiles/Test.dir/main.c.i

CMakeFiles/Test.dir/main.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/Test.dir/main.c.s"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S "/mnt/d/Lin's Code/2023/C sources-Clion/Test/main.c" -o CMakeFiles/Test.dir/main.c.s

# Object files for target Test
Test_OBJECTS = \
"CMakeFiles/Test.dir/main.c.o"

# External object files for target Test
Test_EXTERNAL_OBJECTS =

Test: CMakeFiles/Test.dir/main.c.o
Test: CMakeFiles/Test.dir/build.make
Test: CMakeFiles/Test.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir="/mnt/d/Lin's Code/2023/C sources-Clion/Test/cmake-build-debug/CMakeFiles" --progress-num=$(CMAKE_PROGRESS_2) "Linking C executable Test"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/Test.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/Test.dir/build: Test
.PHONY : CMakeFiles/Test.dir/build

CMakeFiles/Test.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/Test.dir/cmake_clean.cmake
.PHONY : CMakeFiles/Test.dir/clean

CMakeFiles/Test.dir/depend:
	cd "/mnt/d/Lin's Code/2023/C sources-Clion/Test/cmake-build-debug" && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" "/mnt/d/Lin's Code/2023/C sources-Clion/Test" "/mnt/d/Lin's Code/2023/C sources-Clion/Test" "/mnt/d/Lin's Code/2023/C sources-Clion/Test/cmake-build-debug" "/mnt/d/Lin's Code/2023/C sources-Clion/Test/cmake-build-debug" "/mnt/d/Lin's Code/2023/C sources-Clion/Test/cmake-build-debug/CMakeFiles/Test.dir/DependInfo.cmake" --color=$(COLOR)
.PHONY : CMakeFiles/Test.dir/depend

