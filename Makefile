# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.11

# Default target executed when no arguments are given to make.
default_target: all

.PHONY : default_target

# Allow only one "make -f Makefile2" at a time, but pass parallelism.
.NOTPARALLEL:


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
CMAKE_COMMAND = /usr/local/Cellar/cmake/3.11.0/bin/cmake

# The command to remove a file.
RM = /usr/local/Cellar/cmake/3.11.0/bin/cmake -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /Users/borges_l/sandbox/CPP-SimpleBeginnerExamples

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /Users/borges_l/sandbox/CPP-SimpleBeginnerExamples

#=============================================================================
# Targets provided globally by CMake.

# Special rule for the target rebuild_cache
rebuild_cache:
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --cyan "Running CMake to regenerate build system..."
	/usr/local/Cellar/cmake/3.11.0/bin/cmake -H$(CMAKE_SOURCE_DIR) -B$(CMAKE_BINARY_DIR)
.PHONY : rebuild_cache

# Special rule for the target rebuild_cache
rebuild_cache/fast: rebuild_cache

.PHONY : rebuild_cache/fast

# Special rule for the target edit_cache
edit_cache:
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --cyan "Running CMake cache editor..."
	/usr/local/Cellar/cmake/3.11.0/bin/ccmake -H$(CMAKE_SOURCE_DIR) -B$(CMAKE_BINARY_DIR)
.PHONY : edit_cache

# Special rule for the target edit_cache
edit_cache/fast: edit_cache

.PHONY : edit_cache/fast

# The main all target
all: cmake_check_build_system
	$(CMAKE_COMMAND) -E cmake_progress_start /Users/borges_l/sandbox/CPP-SimpleBeginnerExamples/CMakeFiles /Users/borges_l/sandbox/CPP-SimpleBeginnerExamples/CMakeFiles/progress.marks
	$(MAKE) -f CMakeFiles/Makefile2 all
	$(CMAKE_COMMAND) -E cmake_progress_start /Users/borges_l/sandbox/CPP-SimpleBeginnerExamples/CMakeFiles 0
.PHONY : all

# The main clean target
clean:
	$(MAKE) -f CMakeFiles/Makefile2 clean
.PHONY : clean

# The main clean target
clean/fast: clean

.PHONY : clean/fast

# Prepare targets for installation.
preinstall: all
	$(MAKE) -f CMakeFiles/Makefile2 preinstall
.PHONY : preinstall

# Prepare targets for installation.
preinstall/fast:
	$(MAKE) -f CMakeFiles/Makefile2 preinstall
.PHONY : preinstall/fast

# clear depends
depend:
	$(CMAKE_COMMAND) -H$(CMAKE_SOURCE_DIR) -B$(CMAKE_BINARY_DIR) --check-build-system CMakeFiles/Makefile.cmake 1
.PHONY : depend

#=============================================================================
# Target rules for targets named CPP_Beginner

# Build rule for target.
CPP_Beginner: cmake_check_build_system
	$(MAKE) -f CMakeFiles/Makefile2 CPP_Beginner
.PHONY : CPP_Beginner

# fast build rule for target.
CPP_Beginner/fast:
	$(MAKE) -f CMakeFiles/CPP_Beginner.dir/build.make CMakeFiles/CPP_Beginner.dir/build
.PHONY : CPP_Beginner/fast

BasicDataTypes/BasicDataTypes.o: BasicDataTypes/BasicDataTypes.cpp.o

.PHONY : BasicDataTypes/BasicDataTypes.o

# target to build an object file
BasicDataTypes/BasicDataTypes.cpp.o:
	$(MAKE) -f CMakeFiles/CPP_Beginner.dir/build.make CMakeFiles/CPP_Beginner.dir/BasicDataTypes/BasicDataTypes.cpp.o
.PHONY : BasicDataTypes/BasicDataTypes.cpp.o

BasicDataTypes/BasicDataTypes.i: BasicDataTypes/BasicDataTypes.cpp.i

.PHONY : BasicDataTypes/BasicDataTypes.i

# target to preprocess a source file
BasicDataTypes/BasicDataTypes.cpp.i:
	$(MAKE) -f CMakeFiles/CPP_Beginner.dir/build.make CMakeFiles/CPP_Beginner.dir/BasicDataTypes/BasicDataTypes.cpp.i
.PHONY : BasicDataTypes/BasicDataTypes.cpp.i

BasicDataTypes/BasicDataTypes.s: BasicDataTypes/BasicDataTypes.cpp.s

.PHONY : BasicDataTypes/BasicDataTypes.s

# target to generate assembly for a file
BasicDataTypes/BasicDataTypes.cpp.s:
	$(MAKE) -f CMakeFiles/CPP_Beginner.dir/build.make CMakeFiles/CPP_Beginner.dir/BasicDataTypes/BasicDataTypes.cpp.s
.PHONY : BasicDataTypes/BasicDataTypes.cpp.s

Example.o: Example.cpp.o

.PHONY : Example.o

# target to build an object file
Example.cpp.o:
	$(MAKE) -f CMakeFiles/CPP_Beginner.dir/build.make CMakeFiles/CPP_Beginner.dir/Example.cpp.o
.PHONY : Example.cpp.o

Example.i: Example.cpp.i

.PHONY : Example.i

# target to preprocess a source file
Example.cpp.i:
	$(MAKE) -f CMakeFiles/CPP_Beginner.dir/build.make CMakeFiles/CPP_Beginner.dir/Example.cpp.i
.PHONY : Example.cpp.i

Example.s: Example.cpp.s

.PHONY : Example.s

# target to generate assembly for a file
Example.cpp.s:
	$(MAKE) -f CMakeFiles/CPP_Beginner.dir/build.make CMakeFiles/CPP_Beginner.dir/Example.cpp.s
.PHONY : Example.cpp.s

MemoryManagement/MemoryManagement.o: MemoryManagement/MemoryManagement.cpp.o

.PHONY : MemoryManagement/MemoryManagement.o

# target to build an object file
MemoryManagement/MemoryManagement.cpp.o:
	$(MAKE) -f CMakeFiles/CPP_Beginner.dir/build.make CMakeFiles/CPP_Beginner.dir/MemoryManagement/MemoryManagement.cpp.o
.PHONY : MemoryManagement/MemoryManagement.cpp.o

MemoryManagement/MemoryManagement.i: MemoryManagement/MemoryManagement.cpp.i

.PHONY : MemoryManagement/MemoryManagement.i

# target to preprocess a source file
MemoryManagement/MemoryManagement.cpp.i:
	$(MAKE) -f CMakeFiles/CPP_Beginner.dir/build.make CMakeFiles/CPP_Beginner.dir/MemoryManagement/MemoryManagement.cpp.i
.PHONY : MemoryManagement/MemoryManagement.cpp.i

MemoryManagement/MemoryManagement.s: MemoryManagement/MemoryManagement.cpp.s

.PHONY : MemoryManagement/MemoryManagement.s

# target to generate assembly for a file
MemoryManagement/MemoryManagement.cpp.s:
	$(MAKE) -f CMakeFiles/CPP_Beginner.dir/build.make CMakeFiles/CPP_Beginner.dir/MemoryManagement/MemoryManagement.cpp.s
.PHONY : MemoryManagement/MemoryManagement.cpp.s

MemoryManagement/Person.o: MemoryManagement/Person.cpp.o

.PHONY : MemoryManagement/Person.o

# target to build an object file
MemoryManagement/Person.cpp.o:
	$(MAKE) -f CMakeFiles/CPP_Beginner.dir/build.make CMakeFiles/CPP_Beginner.dir/MemoryManagement/Person.cpp.o
.PHONY : MemoryManagement/Person.cpp.o

MemoryManagement/Person.i: MemoryManagement/Person.cpp.i

.PHONY : MemoryManagement/Person.i

# target to preprocess a source file
MemoryManagement/Person.cpp.i:
	$(MAKE) -f CMakeFiles/CPP_Beginner.dir/build.make CMakeFiles/CPP_Beginner.dir/MemoryManagement/Person.cpp.i
.PHONY : MemoryManagement/Person.cpp.i

MemoryManagement/Person.s: MemoryManagement/Person.cpp.s

.PHONY : MemoryManagement/Person.s

# target to generate assembly for a file
MemoryManagement/Person.cpp.s:
	$(MAKE) -f CMakeFiles/CPP_Beginner.dir/build.make CMakeFiles/CPP_Beginner.dir/MemoryManagement/Person.cpp.s
.PHONY : MemoryManagement/Person.cpp.s

ProcessingFiles/ProcessingFiles.o: ProcessingFiles/ProcessingFiles.cpp.o

.PHONY : ProcessingFiles/ProcessingFiles.o

# target to build an object file
ProcessingFiles/ProcessingFiles.cpp.o:
	$(MAKE) -f CMakeFiles/CPP_Beginner.dir/build.make CMakeFiles/CPP_Beginner.dir/ProcessingFiles/ProcessingFiles.cpp.o
.PHONY : ProcessingFiles/ProcessingFiles.cpp.o

ProcessingFiles/ProcessingFiles.i: ProcessingFiles/ProcessingFiles.cpp.i

.PHONY : ProcessingFiles/ProcessingFiles.i

# target to preprocess a source file
ProcessingFiles/ProcessingFiles.cpp.i:
	$(MAKE) -f CMakeFiles/CPP_Beginner.dir/build.make CMakeFiles/CPP_Beginner.dir/ProcessingFiles/ProcessingFiles.cpp.i
.PHONY : ProcessingFiles/ProcessingFiles.cpp.i

ProcessingFiles/ProcessingFiles.s: ProcessingFiles/ProcessingFiles.cpp.s

.PHONY : ProcessingFiles/ProcessingFiles.s

# target to generate assembly for a file
ProcessingFiles/ProcessingFiles.cpp.s:
	$(MAKE) -f CMakeFiles/CPP_Beginner.dir/build.make CMakeFiles/CPP_Beginner.dir/ProcessingFiles/ProcessingFiles.cpp.s
.PHONY : ProcessingFiles/ProcessingFiles.cpp.s

ReferenceTypes/ReferenceTypes.o: ReferenceTypes/ReferenceTypes.cpp.o

.PHONY : ReferenceTypes/ReferenceTypes.o

# target to build an object file
ReferenceTypes/ReferenceTypes.cpp.o:
	$(MAKE) -f CMakeFiles/CPP_Beginner.dir/build.make CMakeFiles/CPP_Beginner.dir/ReferenceTypes/ReferenceTypes.cpp.o
.PHONY : ReferenceTypes/ReferenceTypes.cpp.o

ReferenceTypes/ReferenceTypes.i: ReferenceTypes/ReferenceTypes.cpp.i

.PHONY : ReferenceTypes/ReferenceTypes.i

# target to preprocess a source file
ReferenceTypes/ReferenceTypes.cpp.i:
	$(MAKE) -f CMakeFiles/CPP_Beginner.dir/build.make CMakeFiles/CPP_Beginner.dir/ReferenceTypes/ReferenceTypes.cpp.i
.PHONY : ReferenceTypes/ReferenceTypes.cpp.i

ReferenceTypes/ReferenceTypes.s: ReferenceTypes/ReferenceTypes.cpp.s

.PHONY : ReferenceTypes/ReferenceTypes.s

# target to generate assembly for a file
ReferenceTypes/ReferenceTypes.cpp.s:
	$(MAKE) -f CMakeFiles/CPP_Beginner.dir/build.make CMakeFiles/CPP_Beginner.dir/ReferenceTypes/ReferenceTypes.cpp.s
.PHONY : ReferenceTypes/ReferenceTypes.cpp.s

StreamsIO/StreamIO.o: StreamsIO/StreamIO.cpp.o

.PHONY : StreamsIO/StreamIO.o

# target to build an object file
StreamsIO/StreamIO.cpp.o:
	$(MAKE) -f CMakeFiles/CPP_Beginner.dir/build.make CMakeFiles/CPP_Beginner.dir/StreamsIO/StreamIO.cpp.o
.PHONY : StreamsIO/StreamIO.cpp.o

StreamsIO/StreamIO.i: StreamsIO/StreamIO.cpp.i

.PHONY : StreamsIO/StreamIO.i

# target to preprocess a source file
StreamsIO/StreamIO.cpp.i:
	$(MAKE) -f CMakeFiles/CPP_Beginner.dir/build.make CMakeFiles/CPP_Beginner.dir/StreamsIO/StreamIO.cpp.i
.PHONY : StreamsIO/StreamIO.cpp.i

StreamsIO/StreamIO.s: StreamsIO/StreamIO.cpp.s

.PHONY : StreamsIO/StreamIO.s

# target to generate assembly for a file
StreamsIO/StreamIO.cpp.s:
	$(MAKE) -f CMakeFiles/CPP_Beginner.dir/build.make CMakeFiles/CPP_Beginner.dir/StreamsIO/StreamIO.cpp.s
.PHONY : StreamsIO/StreamIO.cpp.s

main.o: main.cpp.o

.PHONY : main.o

# target to build an object file
main.cpp.o:
	$(MAKE) -f CMakeFiles/CPP_Beginner.dir/build.make CMakeFiles/CPP_Beginner.dir/main.cpp.o
.PHONY : main.cpp.o

main.i: main.cpp.i

.PHONY : main.i

# target to preprocess a source file
main.cpp.i:
	$(MAKE) -f CMakeFiles/CPP_Beginner.dir/build.make CMakeFiles/CPP_Beginner.dir/main.cpp.i
.PHONY : main.cpp.i

main.s: main.cpp.s

.PHONY : main.s

# target to generate assembly for a file
main.cpp.s:
	$(MAKE) -f CMakeFiles/CPP_Beginner.dir/build.make CMakeFiles/CPP_Beginner.dir/main.cpp.s
.PHONY : main.cpp.s

# Help Target
help:
	@echo "The following are some of the valid targets for this Makefile:"
	@echo "... all (the default if no target is provided)"
	@echo "... clean"
	@echo "... depend"
	@echo "... rebuild_cache"
	@echo "... edit_cache"
	@echo "... CPP_Beginner"
	@echo "... BasicDataTypes/BasicDataTypes.o"
	@echo "... BasicDataTypes/BasicDataTypes.i"
	@echo "... BasicDataTypes/BasicDataTypes.s"
	@echo "... Example.o"
	@echo "... Example.i"
	@echo "... Example.s"
	@echo "... MemoryManagement/MemoryManagement.o"
	@echo "... MemoryManagement/MemoryManagement.i"
	@echo "... MemoryManagement/MemoryManagement.s"
	@echo "... MemoryManagement/Person.o"
	@echo "... MemoryManagement/Person.i"
	@echo "... MemoryManagement/Person.s"
	@echo "... ProcessingFiles/ProcessingFiles.o"
	@echo "... ProcessingFiles/ProcessingFiles.i"
	@echo "... ProcessingFiles/ProcessingFiles.s"
	@echo "... ReferenceTypes/ReferenceTypes.o"
	@echo "... ReferenceTypes/ReferenceTypes.i"
	@echo "... ReferenceTypes/ReferenceTypes.s"
	@echo "... StreamsIO/StreamIO.o"
	@echo "... StreamsIO/StreamIO.i"
	@echo "... StreamsIO/StreamIO.s"
	@echo "... main.o"
	@echo "... main.i"
	@echo "... main.s"
.PHONY : help



#=============================================================================
# Special targets to cleanup operation of make.

# Special rule to run CMake to check the build system integrity.
# No rule that depends on this can have commands that come from listfiles
# because they might be regenerated.
cmake_check_build_system:
	$(CMAKE_COMMAND) -H$(CMAKE_SOURCE_DIR) -B$(CMAKE_BINARY_DIR) --check-build-system CMakeFiles/Makefile.cmake 0
.PHONY : cmake_check_build_system

