# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.5

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
CMAKE_COMMAND = /usr/bin/cmake

# The command to remove a file.
RM = /usr/bin/cmake -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/apachetest/Documents/mtrain/tests

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/apachetest/Documents/mtrain/tests/build-dir

# Include any dependencies generated for this target.
include CMakeFiles/blink.elf.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/blink.elf.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/blink.elf.dir/flags.make

CMakeFiles/blink.elf.dir/blink.c.o: CMakeFiles/blink.elf.dir/flags.make
CMakeFiles/blink.elf.dir/blink.c.o: ../blink.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/apachetest/Documents/mtrain/tests/build-dir/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building C object CMakeFiles/blink.elf.dir/blink.c.o"
	/usr/bin/cc  $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/blink.elf.dir/blink.c.o   -c /home/apachetest/Documents/mtrain/tests/blink.c

CMakeFiles/blink.elf.dir/blink.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/blink.elf.dir/blink.c.i"
	/usr/bin/cc  $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /home/apachetest/Documents/mtrain/tests/blink.c > CMakeFiles/blink.elf.dir/blink.c.i

CMakeFiles/blink.elf.dir/blink.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/blink.elf.dir/blink.c.s"
	/usr/bin/cc  $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /home/apachetest/Documents/mtrain/tests/blink.c -o CMakeFiles/blink.elf.dir/blink.c.s

CMakeFiles/blink.elf.dir/blink.c.o.requires:

.PHONY : CMakeFiles/blink.elf.dir/blink.c.o.requires

CMakeFiles/blink.elf.dir/blink.c.o.provides: CMakeFiles/blink.elf.dir/blink.c.o.requires
	$(MAKE) -f CMakeFiles/blink.elf.dir/build.make CMakeFiles/blink.elf.dir/blink.c.o.provides.build
.PHONY : CMakeFiles/blink.elf.dir/blink.c.o.provides

CMakeFiles/blink.elf.dir/blink.c.o.provides.build: CMakeFiles/blink.elf.dir/blink.c.o


# Object files for target blink.elf
blink_elf_OBJECTS = \
"CMakeFiles/blink.elf.dir/blink.c.o"

# External object files for target blink.elf
blink_elf_EXTERNAL_OBJECTS =

blink.elf: CMakeFiles/blink.elf.dir/blink.c.o
blink.elf: CMakeFiles/blink.elf.dir/build.make
blink.elf: CMakeFiles/blink.elf.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/apachetest/Documents/mtrain/tests/build-dir/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking C executable blink.elf"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/blink.elf.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/blink.elf.dir/build: blink.elf

.PHONY : CMakeFiles/blink.elf.dir/build

CMakeFiles/blink.elf.dir/requires: CMakeFiles/blink.elf.dir/blink.c.o.requires

.PHONY : CMakeFiles/blink.elf.dir/requires

CMakeFiles/blink.elf.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/blink.elf.dir/cmake_clean.cmake
.PHONY : CMakeFiles/blink.elf.dir/clean

CMakeFiles/blink.elf.dir/depend:
	cd /home/apachetest/Documents/mtrain/tests/build-dir && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/apachetest/Documents/mtrain/tests /home/apachetest/Documents/mtrain/tests /home/apachetest/Documents/mtrain/tests/build-dir /home/apachetest/Documents/mtrain/tests/build-dir /home/apachetest/Documents/mtrain/tests/build-dir/CMakeFiles/blink.elf.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/blink.elf.dir/depend

