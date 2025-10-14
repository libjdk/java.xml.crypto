#machine generated

add_subdirectory("apache")
add_subdirectory("slf4j")

aux_source_directory("${CMAKE_CURRENT_SOURCE_DIR}" classes.com.sun.org_SRCS)
file(GLOB classes.com.sun.org_HEADERS *.h *.hpp)
source_group("Include" FILES ${classes.com.sun.org_HEADERS}) 
list(LENGTH classes.com.sun.org_SRCS classes.com.sun.org_SRCS_LENGTH)
if(classes.com.sun.org_SRCS_LENGTH)
	add_library(classes.com.sun.org OBJECT "${classes.com.sun.org_SRCS}" "${classes.com.sun.org_HEADERS}")
	jcpp_enable_bigobj(classes.com.sun.org)
endif()