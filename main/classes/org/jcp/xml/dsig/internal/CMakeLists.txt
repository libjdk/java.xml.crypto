#machine generated

add_subdirectory("dom")

aux_source_directory("${CMAKE_CURRENT_SOURCE_DIR}" classes.org.jcp.xml.dsig.in_29_SRCS)
file(GLOB classes.org.jcp.xml.dsig.in_29_HEADERS *.h *.hpp)
source_group("Include" FILES ${classes.org.jcp.xml.dsig.in_29_HEADERS}) 
list(LENGTH classes.org.jcp.xml.dsig.in_29_SRCS classes.org.jcp.xml.dsig.in_29_SRCS_LENGTH)
if(classes.org.jcp.xml.dsig.in_29_SRCS_LENGTH)
	add_library(classes.org.jcp.xml.dsig.in_29 OBJECT "${classes.org.jcp.xml.dsig.in_29_SRCS}" "${classes.org.jcp.xml.dsig.in_29_HEADERS}")
	jcpp_enable_bigobj(classes.org.jcp.xml.dsig.in_29)
endif()