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
CMAKE_SOURCE_DIR = "C:\Users\Jorge Alvarado\Documents\GitHub\archivos-sol"

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = "C:\Users\Jorge Alvarado\Documents\GitHub\archivos-sol\cmake-build-debug"

# Include any dependencies generated for this target.
include CMakeFiles/archivos_sol.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/archivos_sol.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/archivos_sol.dir/flags.make

CMakeFiles/archivos_sol.dir/.vscode/CAleatorio.cpp.obj: CMakeFiles/archivos_sol.dir/flags.make
CMakeFiles/archivos_sol.dir/.vscode/CAleatorio.cpp.obj: CMakeFiles/archivos_sol.dir/includes_CXX.rsp
CMakeFiles/archivos_sol.dir/.vscode/CAleatorio.cpp.obj: ../.vscode/CAleatorio.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir="C:\Users\Jorge Alvarado\Documents\GitHub\archivos-sol\cmake-build-debug\CMakeFiles" --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/archivos_sol.dir/.vscode/CAleatorio.cpp.obj"
	D:\mingw\bin\g++.exe  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles\archivos_sol.dir\.vscode\CAleatorio.cpp.obj -c "C:\Users\Jorge Alvarado\Documents\GitHub\archivos-sol\.vscode\CAleatorio.cpp"

CMakeFiles/archivos_sol.dir/.vscode/CAleatorio.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/archivos_sol.dir/.vscode/CAleatorio.cpp.i"
	D:\mingw\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E "C:\Users\Jorge Alvarado\Documents\GitHub\archivos-sol\.vscode\CAleatorio.cpp" > CMakeFiles\archivos_sol.dir\.vscode\CAleatorio.cpp.i

CMakeFiles/archivos_sol.dir/.vscode/CAleatorio.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/archivos_sol.dir/.vscode/CAleatorio.cpp.s"
	D:\mingw\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S "C:\Users\Jorge Alvarado\Documents\GitHub\archivos-sol\.vscode\CAleatorio.cpp" -o CMakeFiles\archivos_sol.dir\.vscode\CAleatorio.cpp.s

CMakeFiles/archivos_sol.dir/.vscode/Main.cpp.obj: CMakeFiles/archivos_sol.dir/flags.make
CMakeFiles/archivos_sol.dir/.vscode/Main.cpp.obj: CMakeFiles/archivos_sol.dir/includes_CXX.rsp
CMakeFiles/archivos_sol.dir/.vscode/Main.cpp.obj: ../.vscode/Main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir="C:\Users\Jorge Alvarado\Documents\GitHub\archivos-sol\cmake-build-debug\CMakeFiles" --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object CMakeFiles/archivos_sol.dir/.vscode/Main.cpp.obj"
	D:\mingw\bin\g++.exe  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles\archivos_sol.dir\.vscode\Main.cpp.obj -c "C:\Users\Jorge Alvarado\Documents\GitHub\archivos-sol\.vscode\Main.cpp"

CMakeFiles/archivos_sol.dir/.vscode/Main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/archivos_sol.dir/.vscode/Main.cpp.i"
	D:\mingw\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E "C:\Users\Jorge Alvarado\Documents\GitHub\archivos-sol\.vscode\Main.cpp" > CMakeFiles\archivos_sol.dir\.vscode\Main.cpp.i

CMakeFiles/archivos_sol.dir/.vscode/Main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/archivos_sol.dir/.vscode/Main.cpp.s"
	D:\mingw\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S "C:\Users\Jorge Alvarado\Documents\GitHub\archivos-sol\.vscode\Main.cpp" -o CMakeFiles\archivos_sol.dir\.vscode\Main.cpp.s

# Object files for target archivos_sol
archivos_sol_OBJECTS = \
"CMakeFiles/archivos_sol.dir/.vscode/CAleatorio.cpp.obj" \
"CMakeFiles/archivos_sol.dir/.vscode/Main.cpp.obj"

# External object files for target archivos_sol
archivos_sol_EXTERNAL_OBJECTS =

archivos_sol.exe: CMakeFiles/archivos_sol.dir/.vscode/CAleatorio.cpp.obj
archivos_sol.exe: CMakeFiles/archivos_sol.dir/.vscode/Main.cpp.obj
archivos_sol.exe: CMakeFiles/archivos_sol.dir/build.make
archivos_sol.exe: CMakeFiles/archivos_sol.dir/linklibs.rsp
archivos_sol.exe: CMakeFiles/archivos_sol.dir/objects1.rsp
archivos_sol.exe: CMakeFiles/archivos_sol.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir="C:\Users\Jorge Alvarado\Documents\GitHub\archivos-sol\cmake-build-debug\CMakeFiles" --progress-num=$(CMAKE_PROGRESS_3) "Linking CXX executable archivos_sol.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\archivos_sol.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/archivos_sol.dir/build: archivos_sol.exe

.PHONY : CMakeFiles/archivos_sol.dir/build

CMakeFiles/archivos_sol.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\archivos_sol.dir\cmake_clean.cmake
.PHONY : CMakeFiles/archivos_sol.dir/clean

CMakeFiles/archivos_sol.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" "C:\Users\Jorge Alvarado\Documents\GitHub\archivos-sol" "C:\Users\Jorge Alvarado\Documents\GitHub\archivos-sol" "C:\Users\Jorge Alvarado\Documents\GitHub\archivos-sol\cmake-build-debug" "C:\Users\Jorge Alvarado\Documents\GitHub\archivos-sol\cmake-build-debug" "C:\Users\Jorge Alvarado\Documents\GitHub\archivos-sol\cmake-build-debug\CMakeFiles\archivos_sol.dir\DependInfo.cmake" --color=$(COLOR)
.PHONY : CMakeFiles/archivos_sol.dir/depend

