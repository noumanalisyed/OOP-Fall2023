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
CMAKE_SOURCE_DIR = E:\c-workspace\multi-dimensional-arrays

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = E:\c-workspace\multi-dimensional-arrays\cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/multi_dimensional_arrays.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/multi_dimensional_arrays.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/multi_dimensional_arrays.dir/flags.make

CMakeFiles/multi_dimensional_arrays.dir/main.cpp.obj: CMakeFiles/multi_dimensional_arrays.dir/flags.make
CMakeFiles/multi_dimensional_arrays.dir/main.cpp.obj: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=E:\c-workspace\multi-dimensional-arrays\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/multi_dimensional_arrays.dir/main.cpp.obj"
	C:\PROGRA~2\MINGW-~1\I686-8~1.0-P\mingw32\bin\G__~1.EXE  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles\multi_dimensional_arrays.dir\main.cpp.obj -c E:\c-workspace\multi-dimensional-arrays\main.cpp

CMakeFiles/multi_dimensional_arrays.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/multi_dimensional_arrays.dir/main.cpp.i"
	C:\PROGRA~2\MINGW-~1\I686-8~1.0-P\mingw32\bin\G__~1.EXE $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E E:\c-workspace\multi-dimensional-arrays\main.cpp > CMakeFiles\multi_dimensional_arrays.dir\main.cpp.i

CMakeFiles/multi_dimensional_arrays.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/multi_dimensional_arrays.dir/main.cpp.s"
	C:\PROGRA~2\MINGW-~1\I686-8~1.0-P\mingw32\bin\G__~1.EXE $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S E:\c-workspace\multi-dimensional-arrays\main.cpp -o CMakeFiles\multi_dimensional_arrays.dir\main.cpp.s

# Object files for target multi_dimensional_arrays
multi_dimensional_arrays_OBJECTS = \
"CMakeFiles/multi_dimensional_arrays.dir/main.cpp.obj"

# External object files for target multi_dimensional_arrays
multi_dimensional_arrays_EXTERNAL_OBJECTS =

multi_dimensional_arrays.exe: CMakeFiles/multi_dimensional_arrays.dir/main.cpp.obj
multi_dimensional_arrays.exe: CMakeFiles/multi_dimensional_arrays.dir/build.make
multi_dimensional_arrays.exe: CMakeFiles/multi_dimensional_arrays.dir/linklibs.rsp
multi_dimensional_arrays.exe: CMakeFiles/multi_dimensional_arrays.dir/objects1.rsp
multi_dimensional_arrays.exe: CMakeFiles/multi_dimensional_arrays.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=E:\c-workspace\multi-dimensional-arrays\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable multi_dimensional_arrays.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\multi_dimensional_arrays.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/multi_dimensional_arrays.dir/build: multi_dimensional_arrays.exe

.PHONY : CMakeFiles/multi_dimensional_arrays.dir/build

CMakeFiles/multi_dimensional_arrays.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\multi_dimensional_arrays.dir\cmake_clean.cmake
.PHONY : CMakeFiles/multi_dimensional_arrays.dir/clean

CMakeFiles/multi_dimensional_arrays.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" E:\c-workspace\multi-dimensional-arrays E:\c-workspace\multi-dimensional-arrays E:\c-workspace\multi-dimensional-arrays\cmake-build-debug E:\c-workspace\multi-dimensional-arrays\cmake-build-debug E:\c-workspace\multi-dimensional-arrays\cmake-build-debug\CMakeFiles\multi_dimensional_arrays.dir\DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/multi_dimensional_arrays.dir/depend
