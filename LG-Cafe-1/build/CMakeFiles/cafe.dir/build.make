# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 2.8

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

# The program to use to edit the cache.
CMAKE_EDIT_COMMAND = /usr/bin/ccmake

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/cuser/LukeG/CPP2/LG-Cafe-1

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/cuser/LukeG/CPP2/LG-Cafe-1/build

# Include any dependencies generated for this target.
include CMakeFiles/cafe.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/cafe.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/cafe.dir/flags.make

CMakeFiles/cafe.dir/Cafe.cpp.o: CMakeFiles/cafe.dir/flags.make
CMakeFiles/cafe.dir/Cafe.cpp.o: ../Cafe.cpp
	$(CMAKE_COMMAND) -E cmake_progress_report /home/cuser/LukeG/CPP2/LG-Cafe-1/build/CMakeFiles $(CMAKE_PROGRESS_1)
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Building CXX object CMakeFiles/cafe.dir/Cafe.cpp.o"
	/usr/bin/c++   $(CXX_DEFINES) $(CXX_FLAGS) -o CMakeFiles/cafe.dir/Cafe.cpp.o -c /home/cuser/LukeG/CPP2/LG-Cafe-1/Cafe.cpp

CMakeFiles/cafe.dir/Cafe.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/cafe.dir/Cafe.cpp.i"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_FLAGS) -E /home/cuser/LukeG/CPP2/LG-Cafe-1/Cafe.cpp > CMakeFiles/cafe.dir/Cafe.cpp.i

CMakeFiles/cafe.dir/Cafe.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/cafe.dir/Cafe.cpp.s"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_FLAGS) -S /home/cuser/LukeG/CPP2/LG-Cafe-1/Cafe.cpp -o CMakeFiles/cafe.dir/Cafe.cpp.s

CMakeFiles/cafe.dir/Cafe.cpp.o.requires:
.PHONY : CMakeFiles/cafe.dir/Cafe.cpp.o.requires

CMakeFiles/cafe.dir/Cafe.cpp.o.provides: CMakeFiles/cafe.dir/Cafe.cpp.o.requires
	$(MAKE) -f CMakeFiles/cafe.dir/build.make CMakeFiles/cafe.dir/Cafe.cpp.o.provides.build
.PHONY : CMakeFiles/cafe.dir/Cafe.cpp.o.provides

CMakeFiles/cafe.dir/Cafe.cpp.o.provides.build: CMakeFiles/cafe.dir/Cafe.cpp.o

# Object files for target cafe
cafe_OBJECTS = \
"CMakeFiles/cafe.dir/Cafe.cpp.o"

# External object files for target cafe
cafe_EXTERNAL_OBJECTS =

cafe: CMakeFiles/cafe.dir/Cafe.cpp.o
cafe: CMakeFiles/cafe.dir/build.make
cafe: CMakeFiles/cafe.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --red --bold "Linking CXX executable cafe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/cafe.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/cafe.dir/build: cafe
.PHONY : CMakeFiles/cafe.dir/build

CMakeFiles/cafe.dir/requires: CMakeFiles/cafe.dir/Cafe.cpp.o.requires
.PHONY : CMakeFiles/cafe.dir/requires

CMakeFiles/cafe.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/cafe.dir/cmake_clean.cmake
.PHONY : CMakeFiles/cafe.dir/clean

CMakeFiles/cafe.dir/depend:
	cd /home/cuser/LukeG/CPP2/LG-Cafe-1/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/cuser/LukeG/CPP2/LG-Cafe-1 /home/cuser/LukeG/CPP2/LG-Cafe-1 /home/cuser/LukeG/CPP2/LG-Cafe-1/build /home/cuser/LukeG/CPP2/LG-Cafe-1/build /home/cuser/LukeG/CPP2/LG-Cafe-1/build/CMakeFiles/cafe.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/cafe.dir/depend
