cmake_minimum_required(VERSION 3.14)

set(CMAKE_C_COMPILER "G:/Progect Gui/msys/mingw64/bin/gcc.exe")
set(CMAKE_CXX_COMPILER "G:/Progect Gui/msys/mingw64/bin/g++.exe")

# Укажите минимальную версию CMake
project(Test_v1 VERSION 0.1 LANGUAGES CXX)

set(CMAKE_AUTOUIC ON)
set(CMAKE_AUTOMOC ON)
set(CMAKE_AUTORCC ON)

# Укажите минимальную версию C++
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

# Найти Qt6
find_package(QT NAMES Qt6 Qt5 REQUIRED COMPONENTS Widgets Network)
find_package(Qt${QT_VERSION_MAJOR} REQUIRED COMPONENTS Widgets Network)

# Укажите путь к установленному Qt
set(CMAKE_PREFIX_PATH "G:/Progect Gui/msys/mingw64/lib/cmake/")

#set(TS_FILES Main_ru_RU.ts)

include_directories(${CMAKE_SOURCE_DIR}/include)

include_directories(${CMAKE_SOURCE_DIR}/include)

set(CMAKE_MAKE_PROGRAM "G:/Progect Gui/msys/mingw64/bin/mingw32-make.exe")
# Автоматически добавьте все исходные файлы из директории src
file( GLOB_RECURSE SOURCES 
    "../src/*.cpp"
    "../src/*.hpp"
    
    
)

# Добавьте исполняемый файл
add_executable(Test_v1 ${SOURCES})

# Привяжите Qt6 к вашему проекту
target_link_libraries(Test_v1 PRIVATE Qt6::Core Qt6::Widgets Qt6::Gui)
