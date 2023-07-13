cmake_minimum_required(VERSION 3.16)

get_filename_component(CURRENT_DIR_NAME ${CMAKE_CURRENT_SOURCE_DIR} NAME)
project(${CURRENT_DIR_NAME})

# Set project sources
set(PROJECT_SOURCES
    "src/main.c"
)

add_executable(${PROJECT_NAME} ${PROJECT_SOURCES})

target_compile_options(${PROJECT_NAME} PRIVATE 
    -std=c99                # Target the C99 standard (without gcc extensions)
    -pedantic               # Issue all the warnings demanded by strict ISO C
    -Wall                   # Warn about most questionable operations
    # -Wstrict-prototypes     # Warn about missing prototypes
    # -Wwrite-strings         # Warn if not treating string literals as "const"
    # -Wpointer-arith         # Warn about suspicious pointer operations
    # -Wcast-align            # Warn about casts that increase alignment requirements
    # -Werror                 # Treat warnings as errors (code should be clean)
)

target_include_directories(${PROJECT_NAME} PUBLIC "inc")
