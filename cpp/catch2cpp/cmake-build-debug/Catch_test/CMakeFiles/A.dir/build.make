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
include Catch_test/CMakeFiles/A.dir/depend.make

# Include the progress variables for this target.
include Catch_test/CMakeFiles/A.dir/progress.make

# Include the compile flags for this target's objects.
include Catch_test/CMakeFiles/A.dir/flags.make

Catch_test/CMakeFiles/A.dir/perros/Perros.cpp.obj: Catch_test/CMakeFiles/A.dir/flags.make
Catch_test/CMakeFiles/A.dir/perros/Perros.cpp.obj: ../Catch_test/perros/Perros.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir="C:\Users\Jorge Alvarado\CLionProjects\demo2\cmake-build-debug\CMakeFiles" --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object Catch_test/CMakeFiles/A.dir/perros/Perros.cpp.obj"
	cd /d C:\Users\JORGEA~1\CLIONP~1\demo2\CMAKE-~1\CATCH_~1 && D:\mingw\bin\g++.exe  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles\A.dir\perros\Perros.cpp.obj -c "C:\Users\Jorge Alvarado\CLionProjects\demo2\Catch_test\perros\Perros.cpp"

Catch_test/CMakeFiles/A.dir/perros/Perros.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/A.dir/perros/Perros.cpp.i"
	cd /d C:\Users\JORGEA~1\CLIONP~1\demo2\CMAKE-~1\CATCH_~1 && D:\mingw\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E "C:\Users\Jorge Alvarado\CLionProjects\demo2\Catch_test\perros\Perros.cpp" > CMakeFiles\A.dir\perros\Perros.cpp.i

Catch_test/CMakeFiles/A.dir/perros/Perros.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/A.dir/perros/Perros.cpp.s"
	cd /d C:\Users\JORGEA~1\CLIONP~1\demo2\CMAKE-~1\CATCH_~1 && D:\mingw\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S "C:\Users\Jorge Alvarado\CLionProjects\demo2\Catch_test\perros\Perros.cpp" -o CMakeFiles\A.dir\perros\Perros.cpp.s

# Object files for target A
A_OBJECTS = \
"CMakeFiles/A.dir/perros/Perros.cpp.obj"

# External object files for target A
A_EXTERNAL_OBJECTS =

Catch_test/libA.a: Catch_test/CMakeFiles/A.dir/perros/Perros.cpp.obj
Catch_test/libA.a: Catch_test/CMakeFiles/A.dir/build.make
Catch_test/libA.a: Catch_test/CMakeFiles/A.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir="C:\Users\Jorge Alvarado\CLionProjects\demo2\cmake-build-debug\CMakeFiles" --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX static library libA.a"
	cd /d C:\Users\JORGEA~1\CLIONP~1\demo2\CMAKE-~1\CATCH_~1 && $(CMAKE_COMMAND) -P CMakeFiles\A.dir\cmake_clean_target.cmake
	cd /d C:\Users\JORGEA~1\CLIONP~1\demo2\CMAKE-~1\CATCH_~1 && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\A.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
Catch_test/CMakeFiles/A.dir/build: Catch_test/libA.a

.PHONY : Catch_test/CMakeFiles/A.dir/build

Catch_test/CMakeFiles/A.dir/clean:
	cd /d C:\Users\JORGEA~1\CLIONP~1\demo2\CMAKE-~1\CATCH_~1 && $(CMAKE_COMMAND) -P CMakeFiles\A.dir\cmake_clean.cmake
.PHONY : Catch_test/CMakeFiles/A.dir/clean

Catch_test/CMakeFiles/A.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" "C:\Users\Jorge Alvarado\CLionProjects\demo2" "C:\Users\Jorge Alvarado\CLionProjects\demo2\Catch_test" "C:\Users\Jorge Alvarado\CLionProjects\demo2\cmake-build-debug" "C:\Users\Jorge Alvarado\CLionProjects\demo2\cmake-build-debug\Catch_test" "C:\Users\Jorge Alvarado\CLionProjects\demo2\cmake-build-debug\Catch_test\CMakeFiles\A.dir\DependInfo.cmake" --color=$(COLOR)
.PHONY : Catch_test/CMakeFiles/A.dir/depend

