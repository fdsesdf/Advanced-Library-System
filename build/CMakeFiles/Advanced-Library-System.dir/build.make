# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.28

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

# The shell in which to execute make rules.
SHELL = /bin/sh

# The CMake executable.
CMAKE_COMMAND = /usr/bin/cmake

# The command to remove a file.
RM = /usr/bin/cmake -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/lx/桌面/Advanced-Library-System

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/lx/桌面/Advanced-Library-System/build

# Include any dependencies generated for this target.
include CMakeFiles/Advanced-Library-System.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include CMakeFiles/Advanced-Library-System.dir/compiler_depend.make

# Include the progress variables for this target.
include CMakeFiles/Advanced-Library-System.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/Advanced-Library-System.dir/flags.make

CMakeFiles/Advanced-Library-System.dir/src/main.cpp.o: CMakeFiles/Advanced-Library-System.dir/flags.make
CMakeFiles/Advanced-Library-System.dir/src/main.cpp.o: /home/lx/桌面/Advanced-Library-System/src/main.cpp
CMakeFiles/Advanced-Library-System.dir/src/main.cpp.o: CMakeFiles/Advanced-Library-System.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir=/home/lx/桌面/Advanced-Library-System/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/Advanced-Library-System.dir/src/main.cpp.o"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/Advanced-Library-System.dir/src/main.cpp.o -MF CMakeFiles/Advanced-Library-System.dir/src/main.cpp.o.d -o CMakeFiles/Advanced-Library-System.dir/src/main.cpp.o -c /home/lx/桌面/Advanced-Library-System/src/main.cpp

CMakeFiles/Advanced-Library-System.dir/src/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing CXX source to CMakeFiles/Advanced-Library-System.dir/src/main.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/lx/桌面/Advanced-Library-System/src/main.cpp > CMakeFiles/Advanced-Library-System.dir/src/main.cpp.i

CMakeFiles/Advanced-Library-System.dir/src/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling CXX source to assembly CMakeFiles/Advanced-Library-System.dir/src/main.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/lx/桌面/Advanced-Library-System/src/main.cpp -o CMakeFiles/Advanced-Library-System.dir/src/main.cpp.s

CMakeFiles/Advanced-Library-System.dir/src/user_management.cpp.o: CMakeFiles/Advanced-Library-System.dir/flags.make
CMakeFiles/Advanced-Library-System.dir/src/user_management.cpp.o: /home/lx/桌面/Advanced-Library-System/src/user_management.cpp
CMakeFiles/Advanced-Library-System.dir/src/user_management.cpp.o: CMakeFiles/Advanced-Library-System.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir=/home/lx/桌面/Advanced-Library-System/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object CMakeFiles/Advanced-Library-System.dir/src/user_management.cpp.o"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/Advanced-Library-System.dir/src/user_management.cpp.o -MF CMakeFiles/Advanced-Library-System.dir/src/user_management.cpp.o.d -o CMakeFiles/Advanced-Library-System.dir/src/user_management.cpp.o -c /home/lx/桌面/Advanced-Library-System/src/user_management.cpp

CMakeFiles/Advanced-Library-System.dir/src/user_management.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing CXX source to CMakeFiles/Advanced-Library-System.dir/src/user_management.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/lx/桌面/Advanced-Library-System/src/user_management.cpp > CMakeFiles/Advanced-Library-System.dir/src/user_management.cpp.i

CMakeFiles/Advanced-Library-System.dir/src/user_management.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling CXX source to assembly CMakeFiles/Advanced-Library-System.dir/src/user_management.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/lx/桌面/Advanced-Library-System/src/user_management.cpp -o CMakeFiles/Advanced-Library-System.dir/src/user_management.cpp.s

CMakeFiles/Advanced-Library-System.dir/src/book_management.cpp.o: CMakeFiles/Advanced-Library-System.dir/flags.make
CMakeFiles/Advanced-Library-System.dir/src/book_management.cpp.o: /home/lx/桌面/Advanced-Library-System/src/book_management.cpp
CMakeFiles/Advanced-Library-System.dir/src/book_management.cpp.o: CMakeFiles/Advanced-Library-System.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir=/home/lx/桌面/Advanced-Library-System/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Building CXX object CMakeFiles/Advanced-Library-System.dir/src/book_management.cpp.o"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/Advanced-Library-System.dir/src/book_management.cpp.o -MF CMakeFiles/Advanced-Library-System.dir/src/book_management.cpp.o.d -o CMakeFiles/Advanced-Library-System.dir/src/book_management.cpp.o -c /home/lx/桌面/Advanced-Library-System/src/book_management.cpp

CMakeFiles/Advanced-Library-System.dir/src/book_management.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing CXX source to CMakeFiles/Advanced-Library-System.dir/src/book_management.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/lx/桌面/Advanced-Library-System/src/book_management.cpp > CMakeFiles/Advanced-Library-System.dir/src/book_management.cpp.i

CMakeFiles/Advanced-Library-System.dir/src/book_management.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling CXX source to assembly CMakeFiles/Advanced-Library-System.dir/src/book_management.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/lx/桌面/Advanced-Library-System/src/book_management.cpp -o CMakeFiles/Advanced-Library-System.dir/src/book_management.cpp.s

CMakeFiles/Advanced-Library-System.dir/src/database.cpp.o: CMakeFiles/Advanced-Library-System.dir/flags.make
CMakeFiles/Advanced-Library-System.dir/src/database.cpp.o: /home/lx/桌面/Advanced-Library-System/src/database.cpp
CMakeFiles/Advanced-Library-System.dir/src/database.cpp.o: CMakeFiles/Advanced-Library-System.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir=/home/lx/桌面/Advanced-Library-System/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_4) "Building CXX object CMakeFiles/Advanced-Library-System.dir/src/database.cpp.o"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/Advanced-Library-System.dir/src/database.cpp.o -MF CMakeFiles/Advanced-Library-System.dir/src/database.cpp.o.d -o CMakeFiles/Advanced-Library-System.dir/src/database.cpp.o -c /home/lx/桌面/Advanced-Library-System/src/database.cpp

CMakeFiles/Advanced-Library-System.dir/src/database.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing CXX source to CMakeFiles/Advanced-Library-System.dir/src/database.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/lx/桌面/Advanced-Library-System/src/database.cpp > CMakeFiles/Advanced-Library-System.dir/src/database.cpp.i

CMakeFiles/Advanced-Library-System.dir/src/database.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling CXX source to assembly CMakeFiles/Advanced-Library-System.dir/src/database.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/lx/桌面/Advanced-Library-System/src/database.cpp -o CMakeFiles/Advanced-Library-System.dir/src/database.cpp.s

CMakeFiles/Advanced-Library-System.dir/src/logger.cpp.o: CMakeFiles/Advanced-Library-System.dir/flags.make
CMakeFiles/Advanced-Library-System.dir/src/logger.cpp.o: /home/lx/桌面/Advanced-Library-System/src/logger.cpp
CMakeFiles/Advanced-Library-System.dir/src/logger.cpp.o: CMakeFiles/Advanced-Library-System.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir=/home/lx/桌面/Advanced-Library-System/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_5) "Building CXX object CMakeFiles/Advanced-Library-System.dir/src/logger.cpp.o"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/Advanced-Library-System.dir/src/logger.cpp.o -MF CMakeFiles/Advanced-Library-System.dir/src/logger.cpp.o.d -o CMakeFiles/Advanced-Library-System.dir/src/logger.cpp.o -c /home/lx/桌面/Advanced-Library-System/src/logger.cpp

CMakeFiles/Advanced-Library-System.dir/src/logger.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing CXX source to CMakeFiles/Advanced-Library-System.dir/src/logger.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/lx/桌面/Advanced-Library-System/src/logger.cpp > CMakeFiles/Advanced-Library-System.dir/src/logger.cpp.i

CMakeFiles/Advanced-Library-System.dir/src/logger.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling CXX source to assembly CMakeFiles/Advanced-Library-System.dir/src/logger.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/lx/桌面/Advanced-Library-System/src/logger.cpp -o CMakeFiles/Advanced-Library-System.dir/src/logger.cpp.s

CMakeFiles/Advanced-Library-System.dir/src/DBClient.cpp.o: CMakeFiles/Advanced-Library-System.dir/flags.make
CMakeFiles/Advanced-Library-System.dir/src/DBClient.cpp.o: /home/lx/桌面/Advanced-Library-System/src/DBClient.cpp
CMakeFiles/Advanced-Library-System.dir/src/DBClient.cpp.o: CMakeFiles/Advanced-Library-System.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir=/home/lx/桌面/Advanced-Library-System/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_6) "Building CXX object CMakeFiles/Advanced-Library-System.dir/src/DBClient.cpp.o"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/Advanced-Library-System.dir/src/DBClient.cpp.o -MF CMakeFiles/Advanced-Library-System.dir/src/DBClient.cpp.o.d -o CMakeFiles/Advanced-Library-System.dir/src/DBClient.cpp.o -c /home/lx/桌面/Advanced-Library-System/src/DBClient.cpp

CMakeFiles/Advanced-Library-System.dir/src/DBClient.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing CXX source to CMakeFiles/Advanced-Library-System.dir/src/DBClient.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/lx/桌面/Advanced-Library-System/src/DBClient.cpp > CMakeFiles/Advanced-Library-System.dir/src/DBClient.cpp.i

CMakeFiles/Advanced-Library-System.dir/src/DBClient.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling CXX source to assembly CMakeFiles/Advanced-Library-System.dir/src/DBClient.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/lx/桌面/Advanced-Library-System/src/DBClient.cpp -o CMakeFiles/Advanced-Library-System.dir/src/DBClient.cpp.s

CMakeFiles/Advanced-Library-System.dir/src/usercontroller.cpp.o: CMakeFiles/Advanced-Library-System.dir/flags.make
CMakeFiles/Advanced-Library-System.dir/src/usercontroller.cpp.o: /home/lx/桌面/Advanced-Library-System/src/usercontroller.cpp
CMakeFiles/Advanced-Library-System.dir/src/usercontroller.cpp.o: CMakeFiles/Advanced-Library-System.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir=/home/lx/桌面/Advanced-Library-System/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_7) "Building CXX object CMakeFiles/Advanced-Library-System.dir/src/usercontroller.cpp.o"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/Advanced-Library-System.dir/src/usercontroller.cpp.o -MF CMakeFiles/Advanced-Library-System.dir/src/usercontroller.cpp.o.d -o CMakeFiles/Advanced-Library-System.dir/src/usercontroller.cpp.o -c /home/lx/桌面/Advanced-Library-System/src/usercontroller.cpp

CMakeFiles/Advanced-Library-System.dir/src/usercontroller.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing CXX source to CMakeFiles/Advanced-Library-System.dir/src/usercontroller.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/lx/桌面/Advanced-Library-System/src/usercontroller.cpp > CMakeFiles/Advanced-Library-System.dir/src/usercontroller.cpp.i

CMakeFiles/Advanced-Library-System.dir/src/usercontroller.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling CXX source to assembly CMakeFiles/Advanced-Library-System.dir/src/usercontroller.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/lx/桌面/Advanced-Library-System/src/usercontroller.cpp -o CMakeFiles/Advanced-Library-System.dir/src/usercontroller.cpp.s

CMakeFiles/Advanced-Library-System.dir/src/Book.cpp.o: CMakeFiles/Advanced-Library-System.dir/flags.make
CMakeFiles/Advanced-Library-System.dir/src/Book.cpp.o: /home/lx/桌面/Advanced-Library-System/src/Book.cpp
CMakeFiles/Advanced-Library-System.dir/src/Book.cpp.o: CMakeFiles/Advanced-Library-System.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir=/home/lx/桌面/Advanced-Library-System/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_8) "Building CXX object CMakeFiles/Advanced-Library-System.dir/src/Book.cpp.o"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/Advanced-Library-System.dir/src/Book.cpp.o -MF CMakeFiles/Advanced-Library-System.dir/src/Book.cpp.o.d -o CMakeFiles/Advanced-Library-System.dir/src/Book.cpp.o -c /home/lx/桌面/Advanced-Library-System/src/Book.cpp

CMakeFiles/Advanced-Library-System.dir/src/Book.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing CXX source to CMakeFiles/Advanced-Library-System.dir/src/Book.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/lx/桌面/Advanced-Library-System/src/Book.cpp > CMakeFiles/Advanced-Library-System.dir/src/Book.cpp.i

CMakeFiles/Advanced-Library-System.dir/src/Book.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling CXX source to assembly CMakeFiles/Advanced-Library-System.dir/src/Book.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/lx/桌面/Advanced-Library-System/src/Book.cpp -o CMakeFiles/Advanced-Library-System.dir/src/Book.cpp.s

CMakeFiles/Advanced-Library-System.dir/src/User.cpp.o: CMakeFiles/Advanced-Library-System.dir/flags.make
CMakeFiles/Advanced-Library-System.dir/src/User.cpp.o: /home/lx/桌面/Advanced-Library-System/src/User.cpp
CMakeFiles/Advanced-Library-System.dir/src/User.cpp.o: CMakeFiles/Advanced-Library-System.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir=/home/lx/桌面/Advanced-Library-System/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_9) "Building CXX object CMakeFiles/Advanced-Library-System.dir/src/User.cpp.o"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/Advanced-Library-System.dir/src/User.cpp.o -MF CMakeFiles/Advanced-Library-System.dir/src/User.cpp.o.d -o CMakeFiles/Advanced-Library-System.dir/src/User.cpp.o -c /home/lx/桌面/Advanced-Library-System/src/User.cpp

CMakeFiles/Advanced-Library-System.dir/src/User.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing CXX source to CMakeFiles/Advanced-Library-System.dir/src/User.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/lx/桌面/Advanced-Library-System/src/User.cpp > CMakeFiles/Advanced-Library-System.dir/src/User.cpp.i

CMakeFiles/Advanced-Library-System.dir/src/User.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling CXX source to assembly CMakeFiles/Advanced-Library-System.dir/src/User.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/lx/桌面/Advanced-Library-System/src/User.cpp -o CMakeFiles/Advanced-Library-System.dir/src/User.cpp.s

CMakeFiles/Advanced-Library-System.dir/src/RedisCache.cpp.o: CMakeFiles/Advanced-Library-System.dir/flags.make
CMakeFiles/Advanced-Library-System.dir/src/RedisCache.cpp.o: /home/lx/桌面/Advanced-Library-System/src/RedisCache.cpp
CMakeFiles/Advanced-Library-System.dir/src/RedisCache.cpp.o: CMakeFiles/Advanced-Library-System.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir=/home/lx/桌面/Advanced-Library-System/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_10) "Building CXX object CMakeFiles/Advanced-Library-System.dir/src/RedisCache.cpp.o"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/Advanced-Library-System.dir/src/RedisCache.cpp.o -MF CMakeFiles/Advanced-Library-System.dir/src/RedisCache.cpp.o.d -o CMakeFiles/Advanced-Library-System.dir/src/RedisCache.cpp.o -c /home/lx/桌面/Advanced-Library-System/src/RedisCache.cpp

CMakeFiles/Advanced-Library-System.dir/src/RedisCache.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing CXX source to CMakeFiles/Advanced-Library-System.dir/src/RedisCache.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/lx/桌面/Advanced-Library-System/src/RedisCache.cpp > CMakeFiles/Advanced-Library-System.dir/src/RedisCache.cpp.i

CMakeFiles/Advanced-Library-System.dir/src/RedisCache.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling CXX source to assembly CMakeFiles/Advanced-Library-System.dir/src/RedisCache.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/lx/桌面/Advanced-Library-System/src/RedisCache.cpp -o CMakeFiles/Advanced-Library-System.dir/src/RedisCache.cpp.s

CMakeFiles/Advanced-Library-System.dir/src/RedisClient.cpp.o: CMakeFiles/Advanced-Library-System.dir/flags.make
CMakeFiles/Advanced-Library-System.dir/src/RedisClient.cpp.o: /home/lx/桌面/Advanced-Library-System/src/RedisClient.cpp
CMakeFiles/Advanced-Library-System.dir/src/RedisClient.cpp.o: CMakeFiles/Advanced-Library-System.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir=/home/lx/桌面/Advanced-Library-System/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_11) "Building CXX object CMakeFiles/Advanced-Library-System.dir/src/RedisClient.cpp.o"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/Advanced-Library-System.dir/src/RedisClient.cpp.o -MF CMakeFiles/Advanced-Library-System.dir/src/RedisClient.cpp.o.d -o CMakeFiles/Advanced-Library-System.dir/src/RedisClient.cpp.o -c /home/lx/桌面/Advanced-Library-System/src/RedisClient.cpp

CMakeFiles/Advanced-Library-System.dir/src/RedisClient.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing CXX source to CMakeFiles/Advanced-Library-System.dir/src/RedisClient.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/lx/桌面/Advanced-Library-System/src/RedisClient.cpp > CMakeFiles/Advanced-Library-System.dir/src/RedisClient.cpp.i

CMakeFiles/Advanced-Library-System.dir/src/RedisClient.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling CXX source to assembly CMakeFiles/Advanced-Library-System.dir/src/RedisClient.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/lx/桌面/Advanced-Library-System/src/RedisClient.cpp -o CMakeFiles/Advanced-Library-System.dir/src/RedisClient.cpp.s

CMakeFiles/Advanced-Library-System.dir/src/borrow_manager.cpp.o: CMakeFiles/Advanced-Library-System.dir/flags.make
CMakeFiles/Advanced-Library-System.dir/src/borrow_manager.cpp.o: /home/lx/桌面/Advanced-Library-System/src/borrow_manager.cpp
CMakeFiles/Advanced-Library-System.dir/src/borrow_manager.cpp.o: CMakeFiles/Advanced-Library-System.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir=/home/lx/桌面/Advanced-Library-System/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_12) "Building CXX object CMakeFiles/Advanced-Library-System.dir/src/borrow_manager.cpp.o"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/Advanced-Library-System.dir/src/borrow_manager.cpp.o -MF CMakeFiles/Advanced-Library-System.dir/src/borrow_manager.cpp.o.d -o CMakeFiles/Advanced-Library-System.dir/src/borrow_manager.cpp.o -c /home/lx/桌面/Advanced-Library-System/src/borrow_manager.cpp

CMakeFiles/Advanced-Library-System.dir/src/borrow_manager.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing CXX source to CMakeFiles/Advanced-Library-System.dir/src/borrow_manager.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/lx/桌面/Advanced-Library-System/src/borrow_manager.cpp > CMakeFiles/Advanced-Library-System.dir/src/borrow_manager.cpp.i

CMakeFiles/Advanced-Library-System.dir/src/borrow_manager.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling CXX source to assembly CMakeFiles/Advanced-Library-System.dir/src/borrow_manager.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/lx/桌面/Advanced-Library-System/src/borrow_manager.cpp -o CMakeFiles/Advanced-Library-System.dir/src/borrow_manager.cpp.s

# Object files for target Advanced-Library-System
Advanced__Library__System_OBJECTS = \
"CMakeFiles/Advanced-Library-System.dir/src/main.cpp.o" \
"CMakeFiles/Advanced-Library-System.dir/src/user_management.cpp.o" \
"CMakeFiles/Advanced-Library-System.dir/src/book_management.cpp.o" \
"CMakeFiles/Advanced-Library-System.dir/src/database.cpp.o" \
"CMakeFiles/Advanced-Library-System.dir/src/logger.cpp.o" \
"CMakeFiles/Advanced-Library-System.dir/src/DBClient.cpp.o" \
"CMakeFiles/Advanced-Library-System.dir/src/usercontroller.cpp.o" \
"CMakeFiles/Advanced-Library-System.dir/src/Book.cpp.o" \
"CMakeFiles/Advanced-Library-System.dir/src/User.cpp.o" \
"CMakeFiles/Advanced-Library-System.dir/src/RedisCache.cpp.o" \
"CMakeFiles/Advanced-Library-System.dir/src/RedisClient.cpp.o" \
"CMakeFiles/Advanced-Library-System.dir/src/borrow_manager.cpp.o"

# External object files for target Advanced-Library-System
Advanced__Library__System_EXTERNAL_OBJECTS =

Advanced-Library-System: CMakeFiles/Advanced-Library-System.dir/src/main.cpp.o
Advanced-Library-System: CMakeFiles/Advanced-Library-System.dir/src/user_management.cpp.o
Advanced-Library-System: CMakeFiles/Advanced-Library-System.dir/src/book_management.cpp.o
Advanced-Library-System: CMakeFiles/Advanced-Library-System.dir/src/database.cpp.o
Advanced-Library-System: CMakeFiles/Advanced-Library-System.dir/src/logger.cpp.o
Advanced-Library-System: CMakeFiles/Advanced-Library-System.dir/src/DBClient.cpp.o
Advanced-Library-System: CMakeFiles/Advanced-Library-System.dir/src/usercontroller.cpp.o
Advanced-Library-System: CMakeFiles/Advanced-Library-System.dir/src/Book.cpp.o
Advanced-Library-System: CMakeFiles/Advanced-Library-System.dir/src/User.cpp.o
Advanced-Library-System: CMakeFiles/Advanced-Library-System.dir/src/RedisCache.cpp.o
Advanced-Library-System: CMakeFiles/Advanced-Library-System.dir/src/RedisClient.cpp.o
Advanced-Library-System: CMakeFiles/Advanced-Library-System.dir/src/borrow_manager.cpp.o
Advanced-Library-System: CMakeFiles/Advanced-Library-System.dir/build.make
Advanced-Library-System: /usr/lib/x86_64-linux-gnu/libQt5Widgets.so.5.15.13
Advanced-Library-System: /usr/lib/x86_64-linux-gnu/libssl.so
Advanced-Library-System: /usr/lib/x86_64-linux-gnu/libcrypto.so
Advanced-Library-System: /usr/lib/x86_64-linux-gnu/libhiredis.so
Advanced-Library-System: /usr/local/lib/libredis++.so
Advanced-Library-System: /usr/lib/x86_64-linux-gnu/libQt5Gui.so.5.15.13
Advanced-Library-System: /usr/lib/x86_64-linux-gnu/libQt5Core.so.5.15.13
Advanced-Library-System: CMakeFiles/Advanced-Library-System.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --bold --progress-dir=/home/lx/桌面/Advanced-Library-System/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_13) "Linking CXX executable Advanced-Library-System"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/Advanced-Library-System.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/Advanced-Library-System.dir/build: Advanced-Library-System
.PHONY : CMakeFiles/Advanced-Library-System.dir/build

CMakeFiles/Advanced-Library-System.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/Advanced-Library-System.dir/cmake_clean.cmake
.PHONY : CMakeFiles/Advanced-Library-System.dir/clean

CMakeFiles/Advanced-Library-System.dir/depend:
	cd /home/lx/桌面/Advanced-Library-System/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/lx/桌面/Advanced-Library-System /home/lx/桌面/Advanced-Library-System /home/lx/桌面/Advanced-Library-System/build /home/lx/桌面/Advanced-Library-System/build /home/lx/桌面/Advanced-Library-System/build/CMakeFiles/Advanced-Library-System.dir/DependInfo.cmake "--color=$(COLOR)"
.PHONY : CMakeFiles/Advanced-Library-System.dir/depend

