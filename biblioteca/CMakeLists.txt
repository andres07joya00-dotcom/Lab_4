# Versión mínima de CMake
cmake_minimum_required(VERSION 3.10)

# Nombre del proyecto
project(Biblioteca)

# Estándar de C++
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED True)

# Incluir carpeta de encabezados
include_directories(include)

# Archivos fuente
set(SOURCES
    src/Libro.cpp
    src/Biblioteca.cpp
    src/main.cpp
)

# Crear el ejecutable
add_executable(Biblioteca ${SOURCES})