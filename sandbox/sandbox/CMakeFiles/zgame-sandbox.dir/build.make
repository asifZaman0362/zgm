# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.23

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
CMAKE_SOURCE_DIR = /home/zero/projects/zgame

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/zero/projects/zgame/sandbox

# Include any dependencies generated for this target.
include sandbox/CMakeFiles/zgame-sandbox.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include sandbox/CMakeFiles/zgame-sandbox.dir/compiler_depend.make

# Include the progress variables for this target.
include sandbox/CMakeFiles/zgame-sandbox.dir/progress.make

# Include the compile flags for this target's objects.
include sandbox/CMakeFiles/zgame-sandbox.dir/flags.make

sandbox/CMakeFiles/zgame-sandbox.dir/source.cpp.o: sandbox/CMakeFiles/zgame-sandbox.dir/flags.make
sandbox/CMakeFiles/zgame-sandbox.dir/source.cpp.o: source.cpp
sandbox/CMakeFiles/zgame-sandbox.dir/source.cpp.o: sandbox/CMakeFiles/zgame-sandbox.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/zero/projects/zgame/sandbox/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object sandbox/CMakeFiles/zgame-sandbox.dir/source.cpp.o"
	cd /home/zero/projects/zgame/sandbox/sandbox && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT sandbox/CMakeFiles/zgame-sandbox.dir/source.cpp.o -MF CMakeFiles/zgame-sandbox.dir/source.cpp.o.d -o CMakeFiles/zgame-sandbox.dir/source.cpp.o -c /home/zero/projects/zgame/sandbox/source.cpp

sandbox/CMakeFiles/zgame-sandbox.dir/source.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/zgame-sandbox.dir/source.cpp.i"
	cd /home/zero/projects/zgame/sandbox/sandbox && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/zero/projects/zgame/sandbox/source.cpp > CMakeFiles/zgame-sandbox.dir/source.cpp.i

sandbox/CMakeFiles/zgame-sandbox.dir/source.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/zgame-sandbox.dir/source.cpp.s"
	cd /home/zero/projects/zgame/sandbox/sandbox && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/zero/projects/zgame/sandbox/source.cpp -o CMakeFiles/zgame-sandbox.dir/source.cpp.s

# Object files for target zgame-sandbox
zgame__sandbox_OBJECTS = \
"CMakeFiles/zgame-sandbox.dir/source.cpp.o"

# External object files for target zgame-sandbox
zgame__sandbox_EXTERNAL_OBJECTS =

sandbox/zgame-sandbox: sandbox/CMakeFiles/zgame-sandbox.dir/source.cpp.o
sandbox/zgame-sandbox: sandbox/CMakeFiles/zgame-sandbox.dir/build.make
sandbox/zgame-sandbox: sandbox/CMakeFiles/zgame-sandbox.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/zero/projects/zgame/sandbox/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable zgame-sandbox"
	cd /home/zero/projects/zgame/sandbox/sandbox && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/zgame-sandbox.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
sandbox/CMakeFiles/zgame-sandbox.dir/build: sandbox/zgame-sandbox
.PHONY : sandbox/CMakeFiles/zgame-sandbox.dir/build

sandbox/CMakeFiles/zgame-sandbox.dir/clean:
	cd /home/zero/projects/zgame/sandbox/sandbox && $(CMAKE_COMMAND) -P CMakeFiles/zgame-sandbox.dir/cmake_clean.cmake
.PHONY : sandbox/CMakeFiles/zgame-sandbox.dir/clean

sandbox/CMakeFiles/zgame-sandbox.dir/depend:
	cd /home/zero/projects/zgame/sandbox && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/zero/projects/zgame /home/zero/projects/zgame/sandbox /home/zero/projects/zgame/sandbox /home/zero/projects/zgame/sandbox/sandbox /home/zero/projects/zgame/sandbox/sandbox/CMakeFiles/zgame-sandbox.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : sandbox/CMakeFiles/zgame-sandbox.dir/depend

