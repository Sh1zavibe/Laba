# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.30

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
CMAKE_COMMAND = /home/sh1zavibe/Downloads/CLion-2024.3/clion-2024.3/bin/cmake/linux/x64/bin/cmake

# The command to remove a file.
RM = /home/sh1zavibe/Downloads/CLion-2024.3/clion-2024.3/bin/cmake/linux/x64/bin/cmake -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/sh1zavibe/Documents/453504/OAIP/LR6

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/sh1zavibe/Documents/453504/OAIP/LR6/cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/LR6.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include CMakeFiles/LR6.dir/compiler_depend.make

# Include the progress variables for this target.
include CMakeFiles/LR6.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/LR6.dir/flags.make

CMakeFiles/LR6.dir/main.cpp.o: CMakeFiles/LR6.dir/flags.make
CMakeFiles/LR6.dir/main.cpp.o: /home/sh1zavibe/Documents/453504/OAIP/LR6/main.cpp
CMakeFiles/LR6.dir/main.cpp.o: CMakeFiles/LR6.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir=/home/sh1zavibe/Documents/453504/OAIP/LR6/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/LR6.dir/main.cpp.o"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/LR6.dir/main.cpp.o -MF CMakeFiles/LR6.dir/main.cpp.o.d -o CMakeFiles/LR6.dir/main.cpp.o -c /home/sh1zavibe/Documents/453504/OAIP/LR6/main.cpp

CMakeFiles/LR6.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing CXX source to CMakeFiles/LR6.dir/main.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/sh1zavibe/Documents/453504/OAIP/LR6/main.cpp > CMakeFiles/LR6.dir/main.cpp.i

CMakeFiles/LR6.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling CXX source to assembly CMakeFiles/LR6.dir/main.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/sh1zavibe/Documents/453504/OAIP/LR6/main.cpp -o CMakeFiles/LR6.dir/main.cpp.s

CMakeFiles/LR6.dir/library.cpp.o: CMakeFiles/LR6.dir/flags.make
CMakeFiles/LR6.dir/library.cpp.o: /home/sh1zavibe/Documents/453504/OAIP/LR6/library.cpp
CMakeFiles/LR6.dir/library.cpp.o: CMakeFiles/LR6.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir=/home/sh1zavibe/Documents/453504/OAIP/LR6/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object CMakeFiles/LR6.dir/library.cpp.o"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/LR6.dir/library.cpp.o -MF CMakeFiles/LR6.dir/library.cpp.o.d -o CMakeFiles/LR6.dir/library.cpp.o -c /home/sh1zavibe/Documents/453504/OAIP/LR6/library.cpp

CMakeFiles/LR6.dir/library.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing CXX source to CMakeFiles/LR6.dir/library.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/sh1zavibe/Documents/453504/OAIP/LR6/library.cpp > CMakeFiles/LR6.dir/library.cpp.i

CMakeFiles/LR6.dir/library.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling CXX source to assembly CMakeFiles/LR6.dir/library.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/sh1zavibe/Documents/453504/OAIP/LR6/library.cpp -o CMakeFiles/LR6.dir/library.cpp.s

# Object files for target LR6
LR6_OBJECTS = \
"CMakeFiles/LR6.dir/main.cpp.o" \
"CMakeFiles/LR6.dir/library.cpp.o"

# External object files for target LR6
LR6_EXTERNAL_OBJECTS =

LR6: CMakeFiles/LR6.dir/main.cpp.o
LR6: CMakeFiles/LR6.dir/library.cpp.o
LR6: CMakeFiles/LR6.dir/build.make
LR6: CMakeFiles/LR6.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --bold --progress-dir=/home/sh1zavibe/Documents/453504/OAIP/LR6/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Linking CXX executable LR6"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/LR6.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/LR6.dir/build: LR6
.PHONY : CMakeFiles/LR6.dir/build

CMakeFiles/LR6.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/LR6.dir/cmake_clean.cmake
.PHONY : CMakeFiles/LR6.dir/clean

CMakeFiles/LR6.dir/depend:
	cd /home/sh1zavibe/Documents/453504/OAIP/LR6/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/sh1zavibe/Documents/453504/OAIP/LR6 /home/sh1zavibe/Documents/453504/OAIP/LR6 /home/sh1zavibe/Documents/453504/OAIP/LR6/cmake-build-debug /home/sh1zavibe/Documents/453504/OAIP/LR6/cmake-build-debug /home/sh1zavibe/Documents/453504/OAIP/LR6/cmake-build-debug/CMakeFiles/LR6.dir/DependInfo.cmake "--color=$(COLOR)"
.PHONY : CMakeFiles/LR6.dir/depend

