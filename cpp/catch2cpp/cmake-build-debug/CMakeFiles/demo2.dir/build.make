# CMAKE generated file: DO NOT EDIT!
# Generated by "MinGW Makefiles" Generator, CMake Version 3.14

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

SHELL = cmd.exe

# The CMake executable.
CMAKE_COMMAND = "D:\Program Files\JetBrains\CLion 2019.2.1\bin\cmake\win\bin\cmake.exe"

# The command to remove a file.
RM = "D:\Program Files\JetBrains\CLion 2019.2.1\bin\cmake\win\bin\cmake.exe" -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = "C:\Users\Jorge Alvarado\CLionProjects\demo2"

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = "C:\Users\Jorge Alvarado\CLionProjects\demo2\cmake-build-debug"

# Include any dependencies generated for this target.
include CMakeFiles/demo2.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/demo2.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/demo2.dir/flags.make

CMakeFiles/demo2.dir/main.cpp.obj: CMakeFiles/demo2.dir/flags.make
CMakeFiles/demo2.dir/main.cpp.obj: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir="C:\Users\Jorge Alvarado\CLionProjects\demo2\cmake-build-debug\CMakeFiles" --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/demo2.dir/main.cpp.obj"
	D:\mingw\bin\g++.exe  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles\demo2.dir\main.cpp.obj -c "C:\Users\Jorge Alvarado\CLionProjects\demo2\main.cpp"

CMakeFiles/demo2.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/demo2.dir/main.cpp.i"
	D:\mingw\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E "C:\Users\Jorge Alvarado\CLionProjects\demo2\main.cpp" > CMakeFiles\demo2.dir\main.cpp.i

CMakeFiles/demo2.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/demo2.dir/main.cpp.s"
	D:\mingw\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S "C:\Users\Jorge Alvarado\CLionProjects\demo2\main.cpp" -o CMakeFiles\demo2.dir\main.cpp.s

CMakeFiles/demo2.dir/Perros.cpp.obj: CMakeFiles/demo2.dir/flags.make
CMakeFiles/demo2.dir/Perros.cpp.obj: ../Perros.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir="C:\Users\Jorge Alvarado\CLionProjects\demo2\cmake-build-debug\CMakeFiles" --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object CMakeFiles/demo2.dir/Perros.cpp.obj"
	D:\mingw\bin\g++.exe  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles\demo2.dir\Perros.cpp.obj -c "C:\Users\Jorge Alvarado\CLionProjects\demo2\Perros.cpp"

CMakeFiles/demo2.dir/Perros.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/demo2.dir/Perros.cpp.i"
	D:\mingw\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E "C:\Users\Jorge Alvarado\CLionProjects\demo2\Perros.cpp" > CMakeFiles\demo2.dir\Perros.cpp.i

CMakeFiles/demo2.dir/Perros.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/demo2.dir/Perros.cpp.s"
	D:\mingw\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S "C:\Users\Jorge Alvarado\CLionProjects\demo2\Perros.cpp" -o CMakeFiles\demo2.dir\Perros.cpp.s

# Object files for target demo2
demo2_OBJECTS = \
"CMakeFiles/demo2.dir/main.cpp.obj" \
"CMakeFiles/demo2.dir/Perros.cpp.obj"

# External object files for target demo2
demo2_EXTERNAL_OBJECTS =

demo2.exe: CMakeFiles/demo2.dir/main.cpp.obj
demo2.exe: CMakeFiles/demo2.dir/Perros.cpp.obj
demo2.exe: CMakeFiles/demo2.dir/build.make
demo2.exe: CMakeFiles/demo2.dir/linklibs.rsp
demo2.exe: CMakeFiles/demo2.dir/objects1.rsp
demo2.exe: CMakeFiles/demo2.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir="C:\Users\Jorge Alvarado\CLionProjects\demo2\cmake-build-debug\CMakeFiles" --progress-num=$(CMAKE_PROGRESS_3) "Linking CXX executable demo2.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\demo2.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/demo2.dir/build: demo2.exe

.PHONY : CMakeFiles/demo2.dir/build

CMakeFiles/demo2.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\demo2.dir\cmake_clean.cmake
.PHONY : CMakeFiles/demo2.dir/clean

CMakeFiles/demo2.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" "C:\Users\Jorge Alvarado\CLionProjects\demo2" "C:\Users\Jorge Alvarado\CLionProjects\demo2" "C:\Users\Jorge Alvarado\CLionProjects\demo2\cmake-build-debug" "C:\Users\Jorge Alvarado\CLionProjects\demo2\cmake-build-debug" "C:\Users\Jorge Alvarado\CLionProjects\demo2\cmake-build-debug\CMakeFiles\demo2.dir\DependInfo.cmake" --color=$(COLOR)
.PHONY : CMakeFiles/demo2.dir/depend

