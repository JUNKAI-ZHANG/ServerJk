# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.3

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
CMAKE_COMMAND = /usr/local/bin/cmake

# The command to remove a file.
RM = /usr/local/bin/cmake -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/ops/CodeHome/ServerJk

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/ops/CodeHome/ServerJk/src

# Include any dependencies generated for this target.
include CMakeFiles/GateServer.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/GateServer.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/GateServer.dir/flags.make

CMakeFiles/GateServer.dir/Server/GateServer/GateServer.cpp.o: CMakeFiles/GateServer.dir/flags.make
CMakeFiles/GateServer.dir/Server/GateServer/GateServer.cpp.o: Server/GateServer/GateServer.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/ops/CodeHome/ServerJk/src/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/GateServer.dir/Server/GateServer/GateServer.cpp.o"
	/usr/bin/c++   $(CXX_DEFINES) $(CXX_FLAGS) -o CMakeFiles/GateServer.dir/Server/GateServer/GateServer.cpp.o -c /home/ops/CodeHome/ServerJk/src/Server/GateServer/GateServer.cpp

CMakeFiles/GateServer.dir/Server/GateServer/GateServer.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/GateServer.dir/Server/GateServer/GateServer.cpp.i"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_FLAGS) -E /home/ops/CodeHome/ServerJk/src/Server/GateServer/GateServer.cpp > CMakeFiles/GateServer.dir/Server/GateServer/GateServer.cpp.i

CMakeFiles/GateServer.dir/Server/GateServer/GateServer.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/GateServer.dir/Server/GateServer/GateServer.cpp.s"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_FLAGS) -S /home/ops/CodeHome/ServerJk/src/Server/GateServer/GateServer.cpp -o CMakeFiles/GateServer.dir/Server/GateServer/GateServer.cpp.s

CMakeFiles/GateServer.dir/Server/GateServer/GateServer.cpp.o.requires:

.PHONY : CMakeFiles/GateServer.dir/Server/GateServer/GateServer.cpp.o.requires

CMakeFiles/GateServer.dir/Server/GateServer/GateServer.cpp.o.provides: CMakeFiles/GateServer.dir/Server/GateServer/GateServer.cpp.o.requires
	$(MAKE) -f CMakeFiles/GateServer.dir/build.make CMakeFiles/GateServer.dir/Server/GateServer/GateServer.cpp.o.provides.build
.PHONY : CMakeFiles/GateServer.dir/Server/GateServer/GateServer.cpp.o.provides

CMakeFiles/GateServer.dir/Server/GateServer/GateServer.cpp.o.provides.build: CMakeFiles/GateServer.dir/Server/GateServer/GateServer.cpp.o


# Object files for target GateServer
GateServer_OBJECTS = \
"CMakeFiles/GateServer.dir/Server/GateServer/GateServer.cpp.o"

# External object files for target GateServer
GateServer_EXTERNAL_OBJECTS =

GateServer: CMakeFiles/GateServer.dir/Server/GateServer/GateServer.cpp.o
GateServer: CMakeFiles/GateServer.dir/build.make
GateServer: lib/libcommon_lib.a
GateServer: CMakeFiles/GateServer.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/ops/CodeHome/ServerJk/src/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable GateServer"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/GateServer.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/GateServer.dir/build: GateServer

.PHONY : CMakeFiles/GateServer.dir/build

CMakeFiles/GateServer.dir/requires: CMakeFiles/GateServer.dir/Server/GateServer/GateServer.cpp.o.requires

.PHONY : CMakeFiles/GateServer.dir/requires

CMakeFiles/GateServer.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/GateServer.dir/cmake_clean.cmake
.PHONY : CMakeFiles/GateServer.dir/clean

CMakeFiles/GateServer.dir/depend:
	cd /home/ops/CodeHome/ServerJk/src && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/ops/CodeHome/ServerJk /home/ops/CodeHome/ServerJk /home/ops/CodeHome/ServerJk/src /home/ops/CodeHome/ServerJk/src /home/ops/CodeHome/ServerJk/src/CMakeFiles/GateServer.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/GateServer.dir/depend

