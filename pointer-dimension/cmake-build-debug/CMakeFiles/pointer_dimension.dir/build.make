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
CMAKE_SOURCE_DIR = E:\c-workspace\pointer-dimension

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = E:\c-workspace\pointer-dimension\cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/pointer_dimension.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/pointer_dimension.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/pointer_dimension.dir/flags.make

CMakeFiles/pointer_dimension.dir/main.cpp.obj: CMakeFiles/pointer_dimension.dir/flags.make
CMakeFiles/pointer_dimension.dir/main.cpp.obj: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=E:\c-workspace\pointer-dimension\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/pointer_dimension.dir/main.cpp.obj"
	C:\PROGRA~2\MINGW-~1\I686-8~1.0-P\mingw32\bin\G__~1.EXE  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles\pointer_dimension.dir\main.cpp.obj -c E:\c-workspace\pointer-dimension\main.cpp

CMakeFiles/pointer_dimension.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/pointer_dimension.dir/main.cpp.i"
	C:\PROGRA~2\MINGW-~1\I686-8~1.0-P\mingw32\bin\G__~1.EXE $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E E:\c-workspace\pointer-dimension\main.cpp > CMakeFiles\pointer_dimension.dir\main.cpp.i

CMakeFiles/pointer_dimension.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/pointer_dimension.dir/main.cpp.s"
	C:\PROGRA~2\MINGW-~1\I686-8~1.0-P\mingw32\bin\G__~1.EXE $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S E:\c-workspace\pointer-dimension\main.cpp -o CMakeFiles\pointer_dimension.dir\main.cpp.s

# Object files for target pointer_dimension
pointer_dimension_OBJECTS = \
"CMakeFiles/pointer_dimension.dir/main.cpp.obj"

# External object files for target pointer_dimension
pointer_dimension_EXTERNAL_OBJECTS =

pointer_dimension.exe: CMakeFiles/pointer_dimension.dir/main.cpp.obj
pointer_dimension.exe: CMakeFiles/pointer_dimension.dir/build.make
pointer_dimension.exe: CMakeFiles/pointer_dimension.dir/linklibs.rsp
pointer_dimension.exe: CMakeFiles/pointer_dimension.dir/objects1.rsp
pointer_dimension.exe: CMakeFiles/pointer_dimension.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=E:\c-workspace\pointer-dimension\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable pointer_dimension.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\pointer_dimension.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/pointer_dimension.dir/build: pointer_dimension.exe

.PHONY : CMakeFiles/pointer_dimension.dir/build

CMakeFiles/pointer_dimension.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\pointer_dimension.dir\cmake_clean.cmake
.PHONY : CMakeFiles/pointer_dimension.dir/clean

CMakeFiles/pointer_dimension.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" E:\c-workspace\pointer-dimension E:\c-workspace\pointer-dimension E:\c-workspace\pointer-dimension\cmake-build-debug E:\c-workspace\pointer-dimension\cmake-build-debug E:\c-workspace\pointer-dimension\cmake-build-debug\CMakeFiles\pointer_dimension.dir\DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/pointer_dimension.dir/depend
