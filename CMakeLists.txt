cmake_minimum_required (VERSION 3.6)

set_property (GLOBAL PROPERTY USE_FOLDERS ON)

set (CMAKE_SUPPRESS_REGENERATION 1)
set (CMAKE_CONFIGURATION_TYPES Debug;Release;RelWithDebInfo)

add_definitions (-DUNICODE -D_UNICODE)

project (TinyCppTest)

enable_testing ()

function (SetCompilerOptions module)
	target_compile_options (${module} PUBLIC "$<$<CONFIG:Debug>:-DDEBUG>")
	if (WIN32)
		set (AdditionalWarnings /w44061 /w44062 /w44265 /w44266 /w44355 /w44596 /w44800)
		target_compile_options (${module} PUBLIC /W4 /WX ${AdditionalWarnings} ${VSE_CUSTOM_BUILD_OPTIONS})
	else ()
		target_compile_options (${module} PUBLIC -std=c++11 -Wall -Wextra -Werror ${VSE_CUSTOM_BUILD_OPTIONS})
	endif ()
endfunction ()

# TinyCppTest

set (TinyCppTestSourcesFolder Sources)
file (GLOB TinyCppTestSourceFiles
	${TinyCppTestSourcesFolder}/*.hpp
)
add_custom_target (
	TinyCppTest ALL
	SOURCES ${TinyCppTestSourceFiles}
)
source_group ("Sources" FILES ${TinyCppTestSourceFiles})

# Example

set (ExampleSourcesFolder Example)
file (GLOB
	ExampleSourceFiles
	${ExampleSourcesFolder}/*.hpp
	${ExampleSourcesFolder}/*.cpp
)
add_executable (
	Example
	${ExampleSourceFiles}
)
target_include_directories (Example PUBLIC
	${TinyCppTestSourcesFolder}
)
SetCompilerOptions (Example)
source_group ("Sources" FILES ${ExampleSourceFiles})
add_test (Example Example)
