configure_file(config.h.cppm ${CMAKE_CURRENT_SOURCE_DIR}/config.cppm @ONLY)


add_library(exercises_core STATIC)
add_library(exercises::base ALIAS exercises_core)

target_sources(exercises_core
    PUBLIC FILE_SET CXX_MODULES
    FILES
        ${CMAKE_CURRENT_SOURCE_DIR}/config.cppm
)

target_link_libraries(exercises_core
    PUBLIC
        Microsoft.GSL::GSL
        fmt::fmt
    PRIVATE
        spdlog::spdlog
        doctest::doctest
)

target_compile_features(exercises_core 
    PUBLIC cxx_std_20
    PRIVATE cxx_std_23
)

target_compile_definitions(exercises_core 
    INTERFACE
        $<$<CONFIG:Debug>:EXERCISES_DEBUG>
        $<$<CONFIG:Release>:DOCTEST_CONFIG_DISABLE>
)