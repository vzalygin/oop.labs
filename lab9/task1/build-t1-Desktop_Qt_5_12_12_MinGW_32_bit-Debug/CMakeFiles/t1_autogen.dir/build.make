# CMAKE generated file: DO NOT EDIT!
# Generated by "MinGW Makefiles" Generator, CMake Version 3.24

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

SHELL = cmd.exe

# The CMake executable.
CMAKE_COMMAND = "C:\Program Files\CMake\bin\cmake.exe"

# The command to remove a file.
RM = "C:\Program Files\CMake\bin\cmake.exe" -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = D:\repos\oop.labs\lab9\task1\t1

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = D:\repos\oop.labs\lab9\task1\build-t1-Desktop_Qt_5_12_12_MinGW_32_bit-Debug

# Utility rule file for t1_autogen.

# Include any custom commands dependencies for this target.
include CMakeFiles/t1_autogen.dir/compiler_depend.make

# Include the progress variables for this target.
include CMakeFiles/t1_autogen.dir/progress.make

CMakeFiles/t1_autogen:
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --blue --bold --progress-dir=D:\repos\oop.labs\lab9\task1\build-t1-Desktop_Qt_5_12_12_MinGW_32_bit-Debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Automatic MOC and UIC for target t1"
	"C:\Program Files\CMake\bin\cmake.exe" -E cmake_autogen D:/repos/oop.labs/lab9/task1/build-t1-Desktop_Qt_5_12_12_MinGW_32_bit-Debug/CMakeFiles/t1_autogen.dir/AutogenInfo.json Debug

t1_autogen: CMakeFiles/t1_autogen
t1_autogen: CMakeFiles/t1_autogen.dir/build.make
.PHONY : t1_autogen

# Rule to build all files generated by this target.
CMakeFiles/t1_autogen.dir/build: t1_autogen
.PHONY : CMakeFiles/t1_autogen.dir/build

CMakeFiles/t1_autogen.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\t1_autogen.dir\cmake_clean.cmake
.PHONY : CMakeFiles/t1_autogen.dir/clean

CMakeFiles/t1_autogen.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" D:\repos\oop.labs\lab9\task1\t1 D:\repos\oop.labs\lab9\task1\t1 D:\repos\oop.labs\lab9\task1\build-t1-Desktop_Qt_5_12_12_MinGW_32_bit-Debug D:\repos\oop.labs\lab9\task1\build-t1-Desktop_Qt_5_12_12_MinGW_32_bit-Debug D:\repos\oop.labs\lab9\task1\build-t1-Desktop_Qt_5_12_12_MinGW_32_bit-Debug\CMakeFiles\t1_autogen.dir\DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/t1_autogen.dir/depend

