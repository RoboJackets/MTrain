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
include CMakeFiles/usb_serial.elf.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/usb_serial.elf.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/usb_serial.elf.dir/flags.make

CMakeFiles/usb_serial.elf.dir/usb_serial.c.o: CMakeFiles/usb_serial.elf.dir/flags.make
CMakeFiles/usb_serial.elf.dir/usb_serial.c.o: ../usb_serial.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/apachetest/Documents/mtrain/tests/build-dir/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building C object CMakeFiles/usb_serial.elf.dir/usb_serial.c.o"
	/usr/bin/cc  $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/usb_serial.elf.dir/usb_serial.c.o   -c /home/apachetest/Documents/mtrain/tests/usb_serial.c

CMakeFiles/usb_serial.elf.dir/usb_serial.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/usb_serial.elf.dir/usb_serial.c.i"
	/usr/bin/cc  $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /home/apachetest/Documents/mtrain/tests/usb_serial.c > CMakeFiles/usb_serial.elf.dir/usb_serial.c.i

CMakeFiles/usb_serial.elf.dir/usb_serial.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/usb_serial.elf.dir/usb_serial.c.s"
	/usr/bin/cc  $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /home/apachetest/Documents/mtrain/tests/usb_serial.c -o CMakeFiles/usb_serial.elf.dir/usb_serial.c.s

CMakeFiles/usb_serial.elf.dir/usb_serial.c.o.requires:

.PHONY : CMakeFiles/usb_serial.elf.dir/usb_serial.c.o.requires

CMakeFiles/usb_serial.elf.dir/usb_serial.c.o.provides: CMakeFiles/usb_serial.elf.dir/usb_serial.c.o.requires
	$(MAKE) -f CMakeFiles/usb_serial.elf.dir/build.make CMakeFiles/usb_serial.elf.dir/usb_serial.c.o.provides.build
.PHONY : CMakeFiles/usb_serial.elf.dir/usb_serial.c.o.provides

CMakeFiles/usb_serial.elf.dir/usb_serial.c.o.provides.build: CMakeFiles/usb_serial.elf.dir/usb_serial.c.o


# Object files for target usb_serial.elf
usb_serial_elf_OBJECTS = \
"CMakeFiles/usb_serial.elf.dir/usb_serial.c.o"

# External object files for target usb_serial.elf
usb_serial_elf_EXTERNAL_OBJECTS =

usb_serial.elf: CMakeFiles/usb_serial.elf.dir/usb_serial.c.o
usb_serial.elf: CMakeFiles/usb_serial.elf.dir/build.make
usb_serial.elf: CMakeFiles/usb_serial.elf.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/apachetest/Documents/mtrain/tests/build-dir/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking C executable usb_serial.elf"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/usb_serial.elf.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/usb_serial.elf.dir/build: usb_serial.elf

.PHONY : CMakeFiles/usb_serial.elf.dir/build

CMakeFiles/usb_serial.elf.dir/requires: CMakeFiles/usb_serial.elf.dir/usb_serial.c.o.requires

.PHONY : CMakeFiles/usb_serial.elf.dir/requires

CMakeFiles/usb_serial.elf.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/usb_serial.elf.dir/cmake_clean.cmake
.PHONY : CMakeFiles/usb_serial.elf.dir/clean

CMakeFiles/usb_serial.elf.dir/depend:
	cd /home/apachetest/Documents/mtrain/tests/build-dir && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/apachetest/Documents/mtrain/tests /home/apachetest/Documents/mtrain/tests /home/apachetest/Documents/mtrain/tests/build-dir /home/apachetest/Documents/mtrain/tests/build-dir /home/apachetest/Documents/mtrain/tests/build-dir/CMakeFiles/usb_serial.elf.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/usb_serial.elf.dir/depend

