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
include core/CMakeFiles/core.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include core/CMakeFiles/core.dir/compiler_depend.make

# Include the progress variables for this target.
include core/CMakeFiles/core.dir/progress.make

# Include the compile flags for this target's objects.
include core/CMakeFiles/core.dir/flags.make

core/CMakeFiles/core.dir/src/scenemanager.cpp.o: core/CMakeFiles/core.dir/flags.make
core/CMakeFiles/core.dir/src/scenemanager.cpp.o: ../core/src/scenemanager.cpp
core/CMakeFiles/core.dir/src/scenemanager.cpp.o: core/CMakeFiles/core.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/zero/projects/zgame/sandbox/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object core/CMakeFiles/core.dir/src/scenemanager.cpp.o"
	cd /home/zero/projects/zgame/sandbox/core && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT core/CMakeFiles/core.dir/src/scenemanager.cpp.o -MF CMakeFiles/core.dir/src/scenemanager.cpp.o.d -o CMakeFiles/core.dir/src/scenemanager.cpp.o -c /home/zero/projects/zgame/core/src/scenemanager.cpp

core/CMakeFiles/core.dir/src/scenemanager.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/core.dir/src/scenemanager.cpp.i"
	cd /home/zero/projects/zgame/sandbox/core && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/zero/projects/zgame/core/src/scenemanager.cpp > CMakeFiles/core.dir/src/scenemanager.cpp.i

core/CMakeFiles/core.dir/src/scenemanager.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/core.dir/src/scenemanager.cpp.s"
	cd /home/zero/projects/zgame/sandbox/core && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/zero/projects/zgame/core/src/scenemanager.cpp -o CMakeFiles/core.dir/src/scenemanager.cpp.s

core/CMakeFiles/core.dir/src/scene.cpp.o: core/CMakeFiles/core.dir/flags.make
core/CMakeFiles/core.dir/src/scene.cpp.o: ../core/src/scene.cpp
core/CMakeFiles/core.dir/src/scene.cpp.o: core/CMakeFiles/core.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/zero/projects/zgame/sandbox/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object core/CMakeFiles/core.dir/src/scene.cpp.o"
	cd /home/zero/projects/zgame/sandbox/core && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT core/CMakeFiles/core.dir/src/scene.cpp.o -MF CMakeFiles/core.dir/src/scene.cpp.o.d -o CMakeFiles/core.dir/src/scene.cpp.o -c /home/zero/projects/zgame/core/src/scene.cpp

core/CMakeFiles/core.dir/src/scene.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/core.dir/src/scene.cpp.i"
	cd /home/zero/projects/zgame/sandbox/core && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/zero/projects/zgame/core/src/scene.cpp > CMakeFiles/core.dir/src/scene.cpp.i

core/CMakeFiles/core.dir/src/scene.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/core.dir/src/scene.cpp.s"
	cd /home/zero/projects/zgame/sandbox/core && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/zero/projects/zgame/core/src/scene.cpp -o CMakeFiles/core.dir/src/scene.cpp.s

core/CMakeFiles/core.dir/src/input.cpp.o: core/CMakeFiles/core.dir/flags.make
core/CMakeFiles/core.dir/src/input.cpp.o: ../core/src/input.cpp
core/CMakeFiles/core.dir/src/input.cpp.o: core/CMakeFiles/core.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/zero/projects/zgame/sandbox/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Building CXX object core/CMakeFiles/core.dir/src/input.cpp.o"
	cd /home/zero/projects/zgame/sandbox/core && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT core/CMakeFiles/core.dir/src/input.cpp.o -MF CMakeFiles/core.dir/src/input.cpp.o.d -o CMakeFiles/core.dir/src/input.cpp.o -c /home/zero/projects/zgame/core/src/input.cpp

core/CMakeFiles/core.dir/src/input.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/core.dir/src/input.cpp.i"
	cd /home/zero/projects/zgame/sandbox/core && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/zero/projects/zgame/core/src/input.cpp > CMakeFiles/core.dir/src/input.cpp.i

core/CMakeFiles/core.dir/src/input.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/core.dir/src/input.cpp.s"
	cd /home/zero/projects/zgame/sandbox/core && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/zero/projects/zgame/core/src/input.cpp -o CMakeFiles/core.dir/src/input.cpp.s

core/CMakeFiles/core.dir/src/game.cpp.o: core/CMakeFiles/core.dir/flags.make
core/CMakeFiles/core.dir/src/game.cpp.o: ../core/src/game.cpp
core/CMakeFiles/core.dir/src/game.cpp.o: core/CMakeFiles/core.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/zero/projects/zgame/sandbox/CMakeFiles --progress-num=$(CMAKE_PROGRESS_4) "Building CXX object core/CMakeFiles/core.dir/src/game.cpp.o"
	cd /home/zero/projects/zgame/sandbox/core && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT core/CMakeFiles/core.dir/src/game.cpp.o -MF CMakeFiles/core.dir/src/game.cpp.o.d -o CMakeFiles/core.dir/src/game.cpp.o -c /home/zero/projects/zgame/core/src/game.cpp

core/CMakeFiles/core.dir/src/game.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/core.dir/src/game.cpp.i"
	cd /home/zero/projects/zgame/sandbox/core && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/zero/projects/zgame/core/src/game.cpp > CMakeFiles/core.dir/src/game.cpp.i

core/CMakeFiles/core.dir/src/game.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/core.dir/src/game.cpp.s"
	cd /home/zero/projects/zgame/sandbox/core && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/zero/projects/zgame/core/src/game.cpp -o CMakeFiles/core.dir/src/game.cpp.s

core/CMakeFiles/core.dir/src/assetmanager.cpp.o: core/CMakeFiles/core.dir/flags.make
core/CMakeFiles/core.dir/src/assetmanager.cpp.o: ../core/src/assetmanager.cpp
core/CMakeFiles/core.dir/src/assetmanager.cpp.o: core/CMakeFiles/core.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/zero/projects/zgame/sandbox/CMakeFiles --progress-num=$(CMAKE_PROGRESS_5) "Building CXX object core/CMakeFiles/core.dir/src/assetmanager.cpp.o"
	cd /home/zero/projects/zgame/sandbox/core && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT core/CMakeFiles/core.dir/src/assetmanager.cpp.o -MF CMakeFiles/core.dir/src/assetmanager.cpp.o.d -o CMakeFiles/core.dir/src/assetmanager.cpp.o -c /home/zero/projects/zgame/core/src/assetmanager.cpp

core/CMakeFiles/core.dir/src/assetmanager.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/core.dir/src/assetmanager.cpp.i"
	cd /home/zero/projects/zgame/sandbox/core && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/zero/projects/zgame/core/src/assetmanager.cpp > CMakeFiles/core.dir/src/assetmanager.cpp.i

core/CMakeFiles/core.dir/src/assetmanager.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/core.dir/src/assetmanager.cpp.s"
	cd /home/zero/projects/zgame/sandbox/core && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/zero/projects/zgame/core/src/assetmanager.cpp -o CMakeFiles/core.dir/src/assetmanager.cpp.s

# Object files for target core
core_OBJECTS = \
"CMakeFiles/core.dir/src/scenemanager.cpp.o" \
"CMakeFiles/core.dir/src/scene.cpp.o" \
"CMakeFiles/core.dir/src/input.cpp.o" \
"CMakeFiles/core.dir/src/game.cpp.o" \
"CMakeFiles/core.dir/src/assetmanager.cpp.o"

# External object files for target core
core_EXTERNAL_OBJECTS =

core/libcore.a: core/CMakeFiles/core.dir/src/scenemanager.cpp.o
core/libcore.a: core/CMakeFiles/core.dir/src/scene.cpp.o
core/libcore.a: core/CMakeFiles/core.dir/src/input.cpp.o
core/libcore.a: core/CMakeFiles/core.dir/src/game.cpp.o
core/libcore.a: core/CMakeFiles/core.dir/src/assetmanager.cpp.o
core/libcore.a: core/CMakeFiles/core.dir/build.make
core/libcore.a: core/CMakeFiles/core.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/zero/projects/zgame/sandbox/CMakeFiles --progress-num=$(CMAKE_PROGRESS_6) "Linking CXX static library libcore.a"
	cd /home/zero/projects/zgame/sandbox/core && $(CMAKE_COMMAND) -P CMakeFiles/core.dir/cmake_clean_target.cmake
	cd /home/zero/projects/zgame/sandbox/core && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/core.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
core/CMakeFiles/core.dir/build: core/libcore.a
.PHONY : core/CMakeFiles/core.dir/build

core/CMakeFiles/core.dir/clean:
	cd /home/zero/projects/zgame/sandbox/core && $(CMAKE_COMMAND) -P CMakeFiles/core.dir/cmake_clean.cmake
.PHONY : core/CMakeFiles/core.dir/clean

core/CMakeFiles/core.dir/depend:
	cd /home/zero/projects/zgame/sandbox && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/zero/projects/zgame /home/zero/projects/zgame/core /home/zero/projects/zgame/sandbox /home/zero/projects/zgame/sandbox/core /home/zero/projects/zgame/sandbox/core/CMakeFiles/core.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : core/CMakeFiles/core.dir/depend
