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


# Command-line flag to silence nested $(MAKE).
$(VERBOSE)MAKESILENT = -s

# Suppress display of executed commands.
$(VERBOSE).SILENT:


# A target that is always out of date.
cmake_force:

.PHONY : cmake_force

#=============================================================================
# Set environment variables for the build.

SHELL = cmd.exe

# The CMake executable.
CMAKE_COMMAND = "C:\Program Files\JetBrains\CLion 2020.2.1\bin\cmake\win\bin\cmake.exe"

# The command to remove a file.
RM = "C:\Program Files\JetBrains\CLion 2020.2.1\bin\cmake\win\bin\cmake.exe" -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = C:\Users\Artem\Desktop\Univ\Proga\Labs\14

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = C:\Users\Artem\Desktop\Univ\Proga\Labs\14\cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/14.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/14.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/14.dir/flags.make

CMakeFiles/14.dir/main.c.obj: CMakeFiles/14.dir/flags.make
CMakeFiles/14.dir/main.c.obj: ../main.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=C:\Users\Artem\Desktop\Univ\Proga\Labs\14\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building C object CMakeFiles/14.dir/main.c.obj"
	C:\PROGRA~1\MINGW-~1\X86_64~1.0-P\mingw64\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles\14.dir\main.c.obj   -c C:\Users\Artem\Desktop\Univ\Proga\Labs\14\main.c

CMakeFiles/14.dir/main.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/14.dir/main.c.i"
	C:\PROGRA~1\MINGW-~1\X86_64~1.0-P\mingw64\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E C:\Users\Artem\Desktop\Univ\Proga\Labs\14\main.c > CMakeFiles\14.dir\main.c.i

CMakeFiles/14.dir/main.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/14.dir/main.c.s"
	C:\PROGRA~1\MINGW-~1\X86_64~1.0-P\mingw64\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S C:\Users\Artem\Desktop\Univ\Proga\Labs\14\main.c -o CMakeFiles\14.dir\main.c.s

# Object files for target 14
14_OBJECTS = \
"CMakeFiles/14.dir/main.c.obj"

# External object files for target 14
14_EXTERNAL_OBJECTS =

14.exe: CMakeFiles/14.dir/main.c.obj
14.exe: CMakeFiles/14.dir/build.make
14.exe: CMakeFiles/14.dir/linklibs.rsp
14.exe: CMakeFiles/14.dir/objects1.rsp
14.exe: CMakeFiles/14.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=C:\Users\Artem\Desktop\Univ\Proga\Labs\14\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking C executable 14.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\14.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/14.dir/build: 14.exe

.PHONY : CMakeFiles/14.dir/build

CMakeFiles/14.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\14.dir\cmake_clean.cmake
.PHONY : CMakeFiles/14.dir/clean

CMakeFiles/14.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" C:\Users\Artem\Desktop\Univ\Proga\Labs\14 C:\Users\Artem\Desktop\Univ\Proga\Labs\14 C:\Users\Artem\Desktop\Univ\Proga\Labs\14\cmake-build-debug C:\Users\Artem\Desktop\Univ\Proga\Labs\14\cmake-build-debug C:\Users\Artem\Desktop\Univ\Proga\Labs\14\cmake-build-debug\CMakeFiles\14.dir\DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/14.dir/depend
