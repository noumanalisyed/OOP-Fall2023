# CMAKE generated file: DO NOT EDIT!
# Generated by "MinGW Makefiles" Generator, CMake Version 3.17

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


# Suppress display of executed commands.
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
CMAKE_SOURCE_DIR = E:\c-workspace\mid2-q2-b

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = E:\c-workspace\mid2-q2-b\cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/mid2_q2_b.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/mid2_q2_b.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/mid2_q2_b.dir/flags.make

CMakeFiles/mid2_q2_b.dir/main.cpp.obj: CMakeFiles/mid2_q2_b.dir/flags.make
CMakeFiles/mid2_q2_b.dir/main.cpp.obj: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=E:\c-workspace\mid2-q2-b\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/mid2_q2_b.dir/main.cpp.obj"
	C:\PROGRA~2\MINGW-~1\I686-8~1.0-P\mingw32\bin\G__~1.EXE  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles\mid2_q2_b.dir\main.cpp.obj -c E:\c-workspace\mid2-q2-b\main.cpp

CMakeFiles/mid2_q2_b.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/mid2_q2_b.dir/main.cpp.i"
	C:\PROGRA~2\MINGW-~1\I686-8~1.0-P\mingw32\bin\G__~1.EXE $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E E:\c-workspace\mid2-q2-b\main.cpp > CMakeFiles\mid2_q2_b.dir\main.cpp.i

CMakeFiles/mid2_q2_b.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/mid2_q2_b.dir/main.cpp.s"
	C:\PROGRA~2\MINGW-~1\I686-8~1.0-P\mingw32\bin\G__~1.EXE $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S E:\c-workspace\mid2-q2-b\main.cpp -o CMakeFiles\mid2_q2_b.dir\main.cpp.s

# Object files for target mid2_q2_b
mid2_q2_b_OBJECTS = \
"CMakeFiles/mid2_q2_b.dir/main.cpp.obj"

# External object files for target mid2_q2_b
mid2_q2_b_EXTERNAL_OBJECTS =

mid2_q2_b.exe: CMakeFiles/mid2_q2_b.dir/main.cpp.obj
mid2_q2_b.exe: CMakeFiles/mid2_q2_b.dir/build.make
mid2_q2_b.exe: CMakeFiles/mid2_q2_b.dir/linklibs.rsp
mid2_q2_b.exe: CMakeFiles/mid2_q2_b.dir/objects1.rsp
mid2_q2_b.exe: CMakeFiles/mid2_q2_b.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=E:\c-workspace\mid2-q2-b\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable mid2_q2_b.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\mid2_q2_b.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/mid2_q2_b.dir/build: mid2_q2_b.exe

.PHONY : CMakeFiles/mid2_q2_b.dir/build

CMakeFiles/mid2_q2_b.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\mid2_q2_b.dir\cmake_clean.cmake
.PHONY : CMakeFiles/mid2_q2_b.dir/clean

CMakeFiles/mid2_q2_b.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" E:\c-workspace\mid2-q2-b E:\c-workspace\mid2-q2-b E:\c-workspace\mid2-q2-b\cmake-build-debug E:\c-workspace\mid2-q2-b\cmake-build-debug E:\c-workspace\mid2-q2-b\cmake-build-debug\CMakeFiles\mid2_q2_b.dir\DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/mid2_q2_b.dir/depend
