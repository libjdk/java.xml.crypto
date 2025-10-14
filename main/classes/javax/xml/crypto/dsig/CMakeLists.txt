#machine generated

add_subdirectory("dom")
add_subdirectory("keyinfo")
add_subdirectory("spec")

aux_source_directory("${CMAKE_CURRENT_SOURCE_DIR}" classes.javax.xml.crypto.dsig_SRCS)
file(GLOB classes.javax.xml.crypto.dsig_HEADERS *.h *.hpp)
source_group("Include" FILES ${classes.javax.xml.crypto.dsig_HEADERS}) 
list(LENGTH classes.javax.xml.crypto.dsig_SRCS classes.javax.xml.crypto.dsig_SRCS_LENGTH)
if(classes.javax.xml.crypto.dsig_SRCS_LENGTH)
	add_library(classes.javax.xml.crypto.dsig OBJECT "${classes.javax.xml.crypto.dsig_SRCS}" "${classes.javax.xml.crypto.dsig_HEADERS}")
	jcpp_enable_bigobj(classes.javax.xml.crypto.dsig)
endif()