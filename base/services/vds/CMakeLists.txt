
if(NOT MSVC AND CMAKE_CXX_COMPILER_VERSION VERSION_GREATER 7.0)
    add_compile_flags("-Wno-format-overflow")
endif()

add_executable(vds vds.cpp)
set_module_type(vds win32cui)
add_importlibs(vds advapi32 ws2_32 iphlpapi msvcrt kernel32)
add_cd_file(TARGET vds DESTINATION reactos/system32 FOR all)
