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

# Utility rule file for test-usb_serial.

# Include the progress variables for this target.
include CMakeFiles/test-usb_serial.dir/progress.make

CMakeFiles/test-usb_serial: usb_serial.elf
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --blue --bold --progress-dir=/home/apachetest/Documents/mtrain/tests/build-dir/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "objcopying to make binary executable"
	arm-none-eabi-objcopy -Obinary usb_serial.elf usb_serial.bin

test-usb_serial: CMakeFiles/test-usb_serial
test-usb_serial: CMakeFiles/test-usb_serial.dir/build.make

.PHONY : test-usb_serial

# Rule to build all files generated by this target.
CMakeFiles/test-usb_serial.dir/build: test-usb_serial

.PHONY : CMakeFiles/test-usb_serial.dir/build

CMakeFiles/test-usb_serial.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/test-usb_serial.dir/cmake_clean.cmake
.PHONY : CMakeFiles/test-usb_serial.dir/clean

CMakeFiles/test-usb_serial.dir/depend:
	cd /home/apachetest/Documents/mtrain/tests/build-dir && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/apachetest/Documents/mtrain/tests /home/apachetest/Documents/mtrain/tests /home/apachetest/Documents/mtrain/tests/build-dir /home/apachetest/Documents/mtrain/tests/build-dir /home/apachetest/Documents/mtrain/tests/build-dir/CMakeFiles/test-usb_serial.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/test-usb_serial.dir/depend

