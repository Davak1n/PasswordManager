# CMAKE generated file: DO NOT EDIT!
# Generated by "MinGW Makefiles" Generator, CMake Version 3.31

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

#Suppress display of executed commands.
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
CMAKE_SOURCE_DIR = "G:\Progect Gui\PasswordManager\Build"

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = "G:\Progect Gui\PasswordManager\Build"

# Utility rule file for reword_v1.0.0_autogen.

# Include any custom commands dependencies for this target.
include CMakeFiles/reword_v1.0.0_autogen.dir/compiler_depend.make

# Include the progress variables for this target.
include CMakeFiles/reword_v1.0.0_autogen.dir/progress.make

CMakeFiles/reword_v1.0.0_autogen: reword_v1.0.0_autogen/timestamp

reword_v1.0.0_autogen/timestamp: G:/Progect\ Gui/msys/mingw64/share/qt6/bin/moc.exe
reword_v1.0.0_autogen/timestamp: G:/Progect\ Gui/msys/mingw64/share/qt6/bin/uic.exe
reword_v1.0.0_autogen/timestamp: CMakeFiles/reword_v1.0.0_autogen.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --blue --bold --progress-dir="G:\Progect Gui\PasswordManager\Build\CMakeFiles" --progress-num=$(CMAKE_PROGRESS_1) "Automatic MOC and UIC for target reword_v1.0.0"
	"C:\Program Files\CMake\bin\cmake.exe" -E cmake_autogen "G:/Progect Gui/PasswordManager/Build/CMakeFiles/reword_v1.0.0_autogen.dir/AutogenInfo.json" ""
	"C:\Program Files\CMake\bin\cmake.exe" -E touch "G:/Progect Gui/PasswordManager/Build/reword_v1.0.0_autogen/timestamp"

CMakeFiles/reword_v1.0.0_autogen.dir/codegen:
.PHONY : CMakeFiles/reword_v1.0.0_autogen.dir/codegen

reword_v1.0.0_autogen: CMakeFiles/reword_v1.0.0_autogen
reword_v1.0.0_autogen: reword_v1.0.0_autogen/timestamp
reword_v1.0.0_autogen: CMakeFiles/reword_v1.0.0_autogen.dir/build.make
.PHONY : reword_v1.0.0_autogen

# Rule to build all files generated by this target.
CMakeFiles/reword_v1.0.0_autogen.dir/build: reword_v1.0.0_autogen
.PHONY : CMakeFiles/reword_v1.0.0_autogen.dir/build

CMakeFiles/reword_v1.0.0_autogen.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\reword_v1.0.0_autogen.dir\cmake_clean.cmake
.PHONY : CMakeFiles/reword_v1.0.0_autogen.dir/clean

CMakeFiles/reword_v1.0.0_autogen.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" "G:\Progect Gui\PasswordManager\Build" "G:\Progect Gui\PasswordManager\Build" "G:\Progect Gui\PasswordManager\Build" "G:\Progect Gui\PasswordManager\Build" "G:\Progect Gui\PasswordManager\Build\CMakeFiles\reword_v1.0.0_autogen.dir\DependInfo.cmake" "--color=$(COLOR)"
.PHONY : CMakeFiles/reword_v1.0.0_autogen.dir/depend

