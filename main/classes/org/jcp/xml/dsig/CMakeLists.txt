#machine generated

add_subdirectory("internal")

aux_source_directory("${CMAKE_CURRENT_SOURCE_DIR}" classes.org.jcp.xml.dsig_SRCS)
file(GLOB classes.org.jcp.xml.dsig_HEADERS *.h *.hpp)
source_group("Include" FILES ${classes.org.jcp.xml.dsig_HEADERS}) 
list(LENGTH classes.org.jcp.xml.dsig_SRCS classes.org.jcp.xml.dsig_SRCS_LENGTH)
if(classes.org.jcp.xml.dsig_SRCS_LENGTH)
	add_library(classes.org.jcp.xml.dsig OBJECT "${classes.org.jcp.xml.dsig_SRCS}" "${classes.org.jcp.xml.dsig_HEADERS}")
	jcpp_enable_bigobj(classes.org.jcp.xml.dsig)
endif()