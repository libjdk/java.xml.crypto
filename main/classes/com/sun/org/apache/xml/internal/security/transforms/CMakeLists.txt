#machine generated

add_subdirectory("implementations")
add_subdirectory("params")

aux_source_directory("${CMAKE_CURRENT_SOURCE_DIR}" classes.com.sun.org.apache._19_SRCS)
file(GLOB classes.com.sun.org.apache._19_HEADERS *.h *.hpp)
source_group("Include" FILES ${classes.com.sun.org.apache._19_HEADERS}) 
list(LENGTH classes.com.sun.org.apache._19_SRCS classes.com.sun.org.apache._19_SRCS_LENGTH)
if(classes.com.sun.org.apache._19_SRCS_LENGTH)
	add_library(classes.com.sun.org.apache._19 OBJECT "${classes.com.sun.org.apache._19_SRCS}" "${classes.com.sun.org.apache._19_HEADERS}")
	jcpp_enable_bigobj(classes.com.sun.org.apache._19)
endif()