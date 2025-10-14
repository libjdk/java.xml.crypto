#machine generated

add_subdirectory("implementations")

aux_source_directory("${CMAKE_CURRENT_SOURCE_DIR}" classes.com.sun.org.apache._14_SRCS)
file(GLOB classes.com.sun.org.apache._14_HEADERS *.h *.hpp)
source_group("Include" FILES ${classes.com.sun.org.apache._14_HEADERS}) 
list(LENGTH classes.com.sun.org.apache._14_SRCS classes.com.sun.org.apache._14_SRCS_LENGTH)
if(classes.com.sun.org.apache._14_SRCS_LENGTH)
	add_library(classes.com.sun.org.apache._14 OBJECT "${classes.com.sun.org.apache._14_SRCS}" "${classes.com.sun.org.apache._14_HEADERS}")
	jcpp_enable_bigobj(classes.com.sun.org.apache._14)
endif()