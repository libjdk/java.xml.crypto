#machine generated

aux_source_directory("${CMAKE_CURRENT_SOURCE_DIR}" classes.javax.xml.crypto.ds_28_SRCS)
file(GLOB classes.javax.xml.crypto.ds_28_HEADERS *.h *.hpp)
source_group("Include" FILES ${classes.javax.xml.crypto.ds_28_HEADERS}) 
list(LENGTH classes.javax.xml.crypto.ds_28_SRCS classes.javax.xml.crypto.ds_28_SRCS_LENGTH)
if(classes.javax.xml.crypto.ds_28_SRCS_LENGTH)
	add_library(classes.javax.xml.crypto.ds_28 OBJECT "${classes.javax.xml.crypto.ds_28_SRCS}" "${classes.javax.xml.crypto.ds_28_HEADERS}")
	jcpp_enable_bigobj(classes.javax.xml.crypto.ds_28)
endif()