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
CMAKE_SOURCE_DIR = /home/devneal/Security/REFE/tools/edb-debugger-0.9.21

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/devneal/Security/REFE/tools/edb-debugger-0.9.21/build

# Include any dependencies generated for this target.
include plugins/Backtrace/CMakeFiles/Backtrace.dir/depend.make

# Include the progress variables for this target.
include plugins/Backtrace/CMakeFiles/Backtrace.dir/progress.make

# Include the compile flags for this target's objects.
include plugins/Backtrace/CMakeFiles/Backtrace.dir/flags.make

plugins/Backtrace/ui_DialogBacktrace.h: ../plugins/Backtrace/DialogBacktrace.ui
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --blue --bold --progress-dir=/home/devneal/Security/REFE/tools/edb-debugger-0.9.21/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Generating ui_DialogBacktrace.h"
	cd /home/devneal/Security/REFE/tools/edb-debugger-0.9.21/build/plugins/Backtrace && /home/devneal/Security/REFE/tools/qt-unified-linux-x64-2.0.4/5.7/gcc_64/bin/uic -o /home/devneal/Security/REFE/tools/edb-debugger-0.9.21/build/plugins/Backtrace/ui_DialogBacktrace.h /home/devneal/Security/REFE/tools/edb-debugger-0.9.21/plugins/Backtrace/DialogBacktrace.ui

plugins/Backtrace/CMakeFiles/Backtrace.dir/Backtrace.cpp.o: plugins/Backtrace/CMakeFiles/Backtrace.dir/flags.make
plugins/Backtrace/CMakeFiles/Backtrace.dir/Backtrace.cpp.o: ../plugins/Backtrace/Backtrace.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/devneal/Security/REFE/tools/edb-debugger-0.9.21/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object plugins/Backtrace/CMakeFiles/Backtrace.dir/Backtrace.cpp.o"
	cd /home/devneal/Security/REFE/tools/edb-debugger-0.9.21/build/plugins/Backtrace && /usr/bin/c++   $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/Backtrace.dir/Backtrace.cpp.o -c /home/devneal/Security/REFE/tools/edb-debugger-0.9.21/plugins/Backtrace/Backtrace.cpp

plugins/Backtrace/CMakeFiles/Backtrace.dir/Backtrace.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Backtrace.dir/Backtrace.cpp.i"
	cd /home/devneal/Security/REFE/tools/edb-debugger-0.9.21/build/plugins/Backtrace && /usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/devneal/Security/REFE/tools/edb-debugger-0.9.21/plugins/Backtrace/Backtrace.cpp > CMakeFiles/Backtrace.dir/Backtrace.cpp.i

plugins/Backtrace/CMakeFiles/Backtrace.dir/Backtrace.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Backtrace.dir/Backtrace.cpp.s"
	cd /home/devneal/Security/REFE/tools/edb-debugger-0.9.21/build/plugins/Backtrace && /usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/devneal/Security/REFE/tools/edb-debugger-0.9.21/plugins/Backtrace/Backtrace.cpp -o CMakeFiles/Backtrace.dir/Backtrace.cpp.s

plugins/Backtrace/CMakeFiles/Backtrace.dir/Backtrace.cpp.o.requires:

.PHONY : plugins/Backtrace/CMakeFiles/Backtrace.dir/Backtrace.cpp.o.requires

plugins/Backtrace/CMakeFiles/Backtrace.dir/Backtrace.cpp.o.provides: plugins/Backtrace/CMakeFiles/Backtrace.dir/Backtrace.cpp.o.requires
	$(MAKE) -f plugins/Backtrace/CMakeFiles/Backtrace.dir/build.make plugins/Backtrace/CMakeFiles/Backtrace.dir/Backtrace.cpp.o.provides.build
.PHONY : plugins/Backtrace/CMakeFiles/Backtrace.dir/Backtrace.cpp.o.provides

plugins/Backtrace/CMakeFiles/Backtrace.dir/Backtrace.cpp.o.provides.build: plugins/Backtrace/CMakeFiles/Backtrace.dir/Backtrace.cpp.o


plugins/Backtrace/CMakeFiles/Backtrace.dir/DialogBacktrace.cpp.o: plugins/Backtrace/CMakeFiles/Backtrace.dir/flags.make
plugins/Backtrace/CMakeFiles/Backtrace.dir/DialogBacktrace.cpp.o: ../plugins/Backtrace/DialogBacktrace.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/devneal/Security/REFE/tools/edb-debugger-0.9.21/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Building CXX object plugins/Backtrace/CMakeFiles/Backtrace.dir/DialogBacktrace.cpp.o"
	cd /home/devneal/Security/REFE/tools/edb-debugger-0.9.21/build/plugins/Backtrace && /usr/bin/c++   $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/Backtrace.dir/DialogBacktrace.cpp.o -c /home/devneal/Security/REFE/tools/edb-debugger-0.9.21/plugins/Backtrace/DialogBacktrace.cpp

plugins/Backtrace/CMakeFiles/Backtrace.dir/DialogBacktrace.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Backtrace.dir/DialogBacktrace.cpp.i"
	cd /home/devneal/Security/REFE/tools/edb-debugger-0.9.21/build/plugins/Backtrace && /usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/devneal/Security/REFE/tools/edb-debugger-0.9.21/plugins/Backtrace/DialogBacktrace.cpp > CMakeFiles/Backtrace.dir/DialogBacktrace.cpp.i

plugins/Backtrace/CMakeFiles/Backtrace.dir/DialogBacktrace.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Backtrace.dir/DialogBacktrace.cpp.s"
	cd /home/devneal/Security/REFE/tools/edb-debugger-0.9.21/build/plugins/Backtrace && /usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/devneal/Security/REFE/tools/edb-debugger-0.9.21/plugins/Backtrace/DialogBacktrace.cpp -o CMakeFiles/Backtrace.dir/DialogBacktrace.cpp.s

plugins/Backtrace/CMakeFiles/Backtrace.dir/DialogBacktrace.cpp.o.requires:

.PHONY : plugins/Backtrace/CMakeFiles/Backtrace.dir/DialogBacktrace.cpp.o.requires

plugins/Backtrace/CMakeFiles/Backtrace.dir/DialogBacktrace.cpp.o.provides: plugins/Backtrace/CMakeFiles/Backtrace.dir/DialogBacktrace.cpp.o.requires
	$(MAKE) -f plugins/Backtrace/CMakeFiles/Backtrace.dir/build.make plugins/Backtrace/CMakeFiles/Backtrace.dir/DialogBacktrace.cpp.o.provides.build
.PHONY : plugins/Backtrace/CMakeFiles/Backtrace.dir/DialogBacktrace.cpp.o.provides

plugins/Backtrace/CMakeFiles/Backtrace.dir/DialogBacktrace.cpp.o.provides.build: plugins/Backtrace/CMakeFiles/Backtrace.dir/DialogBacktrace.cpp.o


plugins/Backtrace/CMakeFiles/Backtrace.dir/Backtrace_automoc.cpp.o: plugins/Backtrace/CMakeFiles/Backtrace.dir/flags.make
plugins/Backtrace/CMakeFiles/Backtrace.dir/Backtrace_automoc.cpp.o: plugins/Backtrace/Backtrace_automoc.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/devneal/Security/REFE/tools/edb-debugger-0.9.21/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_4) "Building CXX object plugins/Backtrace/CMakeFiles/Backtrace.dir/Backtrace_automoc.cpp.o"
	cd /home/devneal/Security/REFE/tools/edb-debugger-0.9.21/build/plugins/Backtrace && /usr/bin/c++   $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/Backtrace.dir/Backtrace_automoc.cpp.o -c /home/devneal/Security/REFE/tools/edb-debugger-0.9.21/build/plugins/Backtrace/Backtrace_automoc.cpp

plugins/Backtrace/CMakeFiles/Backtrace.dir/Backtrace_automoc.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Backtrace.dir/Backtrace_automoc.cpp.i"
	cd /home/devneal/Security/REFE/tools/edb-debugger-0.9.21/build/plugins/Backtrace && /usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/devneal/Security/REFE/tools/edb-debugger-0.9.21/build/plugins/Backtrace/Backtrace_automoc.cpp > CMakeFiles/Backtrace.dir/Backtrace_automoc.cpp.i

plugins/Backtrace/CMakeFiles/Backtrace.dir/Backtrace_automoc.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Backtrace.dir/Backtrace_automoc.cpp.s"
	cd /home/devneal/Security/REFE/tools/edb-debugger-0.9.21/build/plugins/Backtrace && /usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/devneal/Security/REFE/tools/edb-debugger-0.9.21/build/plugins/Backtrace/Backtrace_automoc.cpp -o CMakeFiles/Backtrace.dir/Backtrace_automoc.cpp.s

plugins/Backtrace/CMakeFiles/Backtrace.dir/Backtrace_automoc.cpp.o.requires:

.PHONY : plugins/Backtrace/CMakeFiles/Backtrace.dir/Backtrace_automoc.cpp.o.requires

plugins/Backtrace/CMakeFiles/Backtrace.dir/Backtrace_automoc.cpp.o.provides: plugins/Backtrace/CMakeFiles/Backtrace.dir/Backtrace_automoc.cpp.o.requires
	$(MAKE) -f plugins/Backtrace/CMakeFiles/Backtrace.dir/build.make plugins/Backtrace/CMakeFiles/Backtrace.dir/Backtrace_automoc.cpp.o.provides.build
.PHONY : plugins/Backtrace/CMakeFiles/Backtrace.dir/Backtrace_automoc.cpp.o.provides

plugins/Backtrace/CMakeFiles/Backtrace.dir/Backtrace_automoc.cpp.o.provides.build: plugins/Backtrace/CMakeFiles/Backtrace.dir/Backtrace_automoc.cpp.o


# Object files for target Backtrace
Backtrace_OBJECTS = \
"CMakeFiles/Backtrace.dir/Backtrace.cpp.o" \
"CMakeFiles/Backtrace.dir/DialogBacktrace.cpp.o" \
"CMakeFiles/Backtrace.dir/Backtrace_automoc.cpp.o"

# External object files for target Backtrace
Backtrace_EXTERNAL_OBJECTS =

libBacktrace.so: plugins/Backtrace/CMakeFiles/Backtrace.dir/Backtrace.cpp.o
libBacktrace.so: plugins/Backtrace/CMakeFiles/Backtrace.dir/DialogBacktrace.cpp.o
libBacktrace.so: plugins/Backtrace/CMakeFiles/Backtrace.dir/Backtrace_automoc.cpp.o
libBacktrace.so: plugins/Backtrace/CMakeFiles/Backtrace.dir/build.make
libBacktrace.so: /home/devneal/Security/REFE/tools/qt-unified-linux-x64-2.0.4/5.7/gcc_64/lib/libQt5Widgets.so.5.7.0
libBacktrace.so: /home/devneal/Security/REFE/tools/qt-unified-linux-x64-2.0.4/5.7/gcc_64/lib/libQt5Gui.so.5.7.0
libBacktrace.so: /home/devneal/Security/REFE/tools/qt-unified-linux-x64-2.0.4/5.7/gcc_64/lib/libQt5Core.so.5.7.0
libBacktrace.so: plugins/Backtrace/CMakeFiles/Backtrace.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/devneal/Security/REFE/tools/edb-debugger-0.9.21/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_5) "Linking CXX shared library ../../libBacktrace.so"
	cd /home/devneal/Security/REFE/tools/edb-debugger-0.9.21/build/plugins/Backtrace && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/Backtrace.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
plugins/Backtrace/CMakeFiles/Backtrace.dir/build: libBacktrace.so

.PHONY : plugins/Backtrace/CMakeFiles/Backtrace.dir/build

plugins/Backtrace/CMakeFiles/Backtrace.dir/requires: plugins/Backtrace/CMakeFiles/Backtrace.dir/Backtrace.cpp.o.requires
plugins/Backtrace/CMakeFiles/Backtrace.dir/requires: plugins/Backtrace/CMakeFiles/Backtrace.dir/DialogBacktrace.cpp.o.requires
plugins/Backtrace/CMakeFiles/Backtrace.dir/requires: plugins/Backtrace/CMakeFiles/Backtrace.dir/Backtrace_automoc.cpp.o.requires

.PHONY : plugins/Backtrace/CMakeFiles/Backtrace.dir/requires

plugins/Backtrace/CMakeFiles/Backtrace.dir/clean:
	cd /home/devneal/Security/REFE/tools/edb-debugger-0.9.21/build/plugins/Backtrace && $(CMAKE_COMMAND) -P CMakeFiles/Backtrace.dir/cmake_clean.cmake
.PHONY : plugins/Backtrace/CMakeFiles/Backtrace.dir/clean

plugins/Backtrace/CMakeFiles/Backtrace.dir/depend: plugins/Backtrace/ui_DialogBacktrace.h
	cd /home/devneal/Security/REFE/tools/edb-debugger-0.9.21/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/devneal/Security/REFE/tools/edb-debugger-0.9.21 /home/devneal/Security/REFE/tools/edb-debugger-0.9.21/plugins/Backtrace /home/devneal/Security/REFE/tools/edb-debugger-0.9.21/build /home/devneal/Security/REFE/tools/edb-debugger-0.9.21/build/plugins/Backtrace /home/devneal/Security/REFE/tools/edb-debugger-0.9.21/build/plugins/Backtrace/CMakeFiles/Backtrace.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : plugins/Backtrace/CMakeFiles/Backtrace.dir/depend
