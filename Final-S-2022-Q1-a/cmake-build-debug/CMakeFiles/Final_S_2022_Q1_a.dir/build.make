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
CMAKE_SOURCE_DIR = E:\c-workspace\Final-S-2022-Q1-a

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = E:\c-workspace\Final-S-2022-Q1-a\cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/Final_S_2022_Q1_a.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/Final_S_2022_Q1_a.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/Final_S_2022_Q1_a.dir/flags.make

CMakeFiles/Final_S_2022_Q1_a.dir/main.cpp.obj: CMakeFiles/Final_S_2022_Q1_a.dir/flags.make
CMakeFiles/Final_S_2022_Q1_a.dir/main.cpp.obj: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=E:\c-workspace\Final-S-2022-Q1-a\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/Final_S_2022_Q1_a.dir/main.cpp.obj"
	C:\PROGRA~2\MINGW-~1\I686-8~1.0-P\mingw32\bin\G__~1.EXE  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles\Final_S_2022_Q1_a.dir\main.cpp.obj -c E:\c-workspace\Final-S-2022-Q1-a\main.cpp

CMakeFiles/Final_S_2022_Q1_a.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Final_S_2022_Q1_a.dir/main.cpp.i"
	C:\PROGRA~2\MINGW-~1\I686-8~1.0-P\mingw32\bin\G__~1.EXE $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E E:\c-workspace\Final-S-2022-Q1-a\main.cpp > CMakeFiles\Final_S_2022_Q1_a.dir\main.cpp.i

CMakeFiles/Final_S_2022_Q1_a.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Final_S_2022_Q1_a.dir/main.cpp.s"
	C:\PROGRA~2\MINGW-~1\I686-8~1.0-P\mingw32\bin\G__~1.EXE $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S E:\c-workspace\Final-S-2022-Q1-a\main.cpp -o CMakeFiles\Final_S_2022_Q1_a.dir\main.cpp.s

# Object files for target Final_S_2022_Q1_a
Final_S_2022_Q1_a_OBJECTS = \
"CMakeFiles/Final_S_2022_Q1_a.dir/main.cpp.obj"

# External object files for target Final_S_2022_Q1_a
Final_S_2022_Q1_a_EXTERNAL_OBJECTS =

Final_S_2022_Q1_a.exe: CMakeFiles/Final_S_2022_Q1_a.dir/main.cpp.obj
Final_S_2022_Q1_a.exe: CMakeFiles/Final_S_2022_Q1_a.dir/build.make
Final_S_2022_Q1_a.exe: CMakeFiles/Final_S_2022_Q1_a.dir/linklibs.rsp
Final_S_2022_Q1_a.exe: CMakeFiles/Final_S_2022_Q1_a.dir/objects1.rsp
Final_S_2022_Q1_a.exe: CMakeFiles/Final_S_2022_Q1_a.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=E:\c-workspace\Final-S-2022-Q1-a\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable Final_S_2022_Q1_a.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\Final_S_2022_Q1_a.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/Final_S_2022_Q1_a.dir/build: Final_S_2022_Q1_a.exe

.PHONY : CMakeFiles/Final_S_2022_Q1_a.dir/build

CMakeFiles/Final_S_2022_Q1_a.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\Final_S_2022_Q1_a.dir\cmake_clean.cmake
.PHONY : CMakeFiles/Final_S_2022_Q1_a.dir/clean

CMakeFiles/Final_S_2022_Q1_a.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" E:\c-workspace\Final-S-2022-Q1-a E:\c-workspace\Final-S-2022-Q1-a E:\c-workspace\Final-S-2022-Q1-a\cmake-build-debug E:\c-workspace\Final-S-2022-Q1-a\cmake-build-debug E:\c-workspace\Final-S-2022-Q1-a\cmake-build-debug\CMakeFiles\Final_S_2022_Q1_a.dir\DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/Final_S_2022_Q1_a.dir/depend

