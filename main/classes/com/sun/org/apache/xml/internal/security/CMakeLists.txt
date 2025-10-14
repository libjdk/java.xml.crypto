#machine generated

add_subdirectory("algorithms")
add_subdirectory("c14n")
add_subdirectory("exceptions")
add_subdirectory("keys")
add_subdirectory("parser")
add_subdirectory("signature")
add_subdirectory("transforms")
add_subdirectory("utils")

aux_source_directory("${CMAKE_CURRENT_SOURCE_DIR}" classes.com.sun.org.apache.x_1_SRCS)
file(GLOB classes.com.sun.org.apache.x_1_HEADERS *.h *.hpp)
source_group("Include" FILES ${classes.com.sun.org.apache.x_1_HEADERS}) 
list(LENGTH classes.com.sun.org.apache.x_1_SRCS classes.com.sun.org.apache.x_1_SRCS_LENGTH)
if(classes.com.sun.org.apache.x_1_SRCS_LENGTH)
	add_library(classes.com.sun.org.apache.x_1 OBJECT "${classes.com.sun.org.apache.x_1_SRCS}" "${classes.com.sun.org.apache.x_1_HEADERS}")
	jcpp_enable_bigobj(classes.com.sun.org.apache.x_1)
endif()