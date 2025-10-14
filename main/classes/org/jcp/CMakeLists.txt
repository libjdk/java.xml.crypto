#machine generated

add_subdirectory("xml")

aux_source_directory("${CMAKE_CURRENT_SOURCE_DIR}" classes.org.jcp_SRCS)
file(GLOB classes.org.jcp_HEADERS *.h *.hpp)
source_group("Include" FILES ${classes.org.jcp_HEADERS}) 
list(LENGTH classes.org.jcp_SRCS classes.org.jcp_SRCS_LENGTH)
if(classes.org.jcp_SRCS_LENGTH)
	add_library(classes.org.jcp OBJECT "${classes.org.jcp_SRCS}" "${classes.org.jcp_HEADERS}")
	jcpp_enable_bigobj(classes.org.jcp)
endif()