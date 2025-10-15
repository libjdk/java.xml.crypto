#machine generated

jcpp_add_dependencies(
	"java.logging:17.35"
	"java.xml:17.35"
	"java.base:17.35"
)

include_directories("classes")

add_subdirectory("classes")

set(local_object ${local_object}
	"$<TARGET_OBJECTS:classes>"
	"$<TARGET_OBJECTS:classes.com.sun.org.apache.x_1>"
	"$<TARGET_OBJECTS:classes.com.sun.org.apache.x_2>"
	"$<TARGET_OBJECTS:classes.com.sun.org.apache.x_3>"
	"$<TARGET_OBJECTS:classes.com.sun.org.apache.x_4>"
	"$<TARGET_OBJECTS:classes.com.sun.org.apache.x_5>"
	"$<TARGET_OBJECTS:classes.com.sun.org.apache.x_6>"
	"$<TARGET_OBJECTS:classes.com.sun.org.apache.x_7>"
	"$<TARGET_OBJECTS:classes.com.sun.org.apache.x_8>"
	"$<TARGET_OBJECTS:classes.com.sun.org.apache.x_9>"
	"$<TARGET_OBJECTS:classes.com.sun.org.apache._10>"
	"$<TARGET_OBJECTS:classes.com.sun.org.apache._11>"
	"$<TARGET_OBJECTS:classes.com.sun.org.apache._12>"
	"$<TARGET_OBJECTS:classes.com.sun.org.apache._13>"
	"$<TARGET_OBJECTS:classes.com.sun.org.apache._14>"
	"$<TARGET_OBJECTS:classes.com.sun.org.apache._15>"
	"$<TARGET_OBJECTS:classes.com.sun.org.apache._16>"
	"$<TARGET_OBJECTS:classes.com.sun.org.apache._17>"
	"$<TARGET_OBJECTS:classes.com.sun.org.apache._18>"
	"$<TARGET_OBJECTS:classes.com.sun.org.apache._19>"
	"$<TARGET_OBJECTS:classes.com.sun.org.apache._20>"
	"$<TARGET_OBJECTS:classes.com.sun.org.apache._21>"
	"$<TARGET_OBJECTS:classes.com.sun.org.apache._22>"
	"$<TARGET_OBJECTS:classes.com.sun.org.apache._23>"
	"$<TARGET_OBJECTS:classes.com.sun.org.apache._24>"
	"$<TARGET_OBJECTS:classes.com.sun.org.slf4j.i_25>"
	"$<TARGET_OBJECTS:classes.javax.xml.crypto>"
	"$<TARGET_OBJECTS:classes.javax.xml.crypto.dom>"
	"$<TARGET_OBJECTS:classes.javax.xml.crypto.dsig>"
	"$<TARGET_OBJECTS:classes.javax.xml.crypto.ds_26>"
	"$<TARGET_OBJECTS:classes.javax.xml.crypto.ds_27>"
	"$<TARGET_OBJECTS:classes.javax.xml.crypto.ds_28>"
	"$<TARGET_OBJECTS:classes.org.jcp.xml.dsig.in_29>"
	"$<TARGET_OBJECTS:classes.org.jcp.xml.dsig.in_30>"
)

if(BUILD_STATIC_LIB)
	add_library(${JCPP_PROJECT_NAME}_static STATIC "${local_object}" "${source_SRCS}")

	SET_TARGET_PROPERTIES(${JCPP_PROJECT_NAME}_static PROPERTIES OUTPUT_NAME "${JCPP_PROJECT_FULL_NAME}")
	SET_TARGET_PROPERTIES(${JCPP_PROJECT_NAME}_static PROPERTIES CLEAN_DIRECT_OUTPUT 1)
	SET_TARGET_PROPERTIES(${JCPP_PROJECT_NAME}_static PROPERTIES VERSION ${JCPP_PROJECT_VERSION} SOVERSION 1)

	jcpp_enable_bigobj(${JCPP_PROJECT_NAME}_static)

	install(TARGETS ${JCPP_PROJECT_NAME}_static
		LIBRARY DESTINATION "${JCPP_LIB_INSTALL_PATH}"
		ARCHIVE DESTINATION "${JCPP_LIB_INSTALL_PATH}"
		RUNTIME DESTINATION "${JCPP_BIN_INSTALL_PATH}"
	)
endif()

if(BUILD_SHARED_LIB)
	add_library(${JCPP_PROJECT_NAME}_shared SHARED "${local_object}" "${source_SRCS}")

	SET_TARGET_PROPERTIES(${JCPP_PROJECT_NAME}_shared PROPERTIES OUTPUT_NAME "${JCPP_PROJECT_FULL_NAME}")
	SET_TARGET_PROPERTIES(${JCPP_PROJECT_NAME}_shared PROPERTIES CLEAN_DIRECT_OUTPUT 1)
	SET_TARGET_PROPERTIES(${JCPP_PROJECT_NAME}_shared PROPERTIES VERSION ${JCPP_PROJECT_VERSION} SOVERSION 1)
if(JCPP_OS MATCHES "linux")
	SET_TARGET_PROPERTIES(${JCPP_PROJECT_NAME}_shared PROPERTIES INSTALL_RPATH "\\\$ORIGIN;\\\$ORIGIN/../lib")
elseif(JCPP_OS MATCHES "macosx")
	SET_TARGET_PROPERTIES(${JCPP_PROJECT_NAME}_shared PROPERTIES INSTALL_RPATH ".;../lib")
endif()

	target_link_libraries(${JCPP_PROJECT_NAME}_shared
		PUBLIC ${JCPP_DEPENDENCY_LIBS}
		PRIVATE ${JCPP_EXT_LIBS}
	)

	jcpp_enable_bigobj(${JCPP_PROJECT_NAME}_shared)

	jcpp_enable_debug_info(${JCPP_PROJECT_NAME}_shared)

	install(TARGETS ${JCPP_PROJECT_NAME}_shared
		LIBRARY DESTINATION "${JCPP_LIB_INSTALL_PATH}"
		ARCHIVE DESTINATION "${JCPP_LIB_INSTALL_PATH}"
		RUNTIME DESTINATION "${JCPP_BIN_INSTALL_PATH}"
	)
endif()

install(
	DIRECTORY "include"
	DESTINATION "${JCPP_INSTALL_PATH}"
)

if(INSTALL_TO_REPO)
	install(
		FILES "dependencies.txt"
		DESTINATION "${JCPP_INSTALL_PATH}"
	)
endif()
