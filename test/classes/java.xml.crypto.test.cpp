#include <java.xml.crypto.test.h>

#include <java.xml.crypto.h>
#include <java.logging.h>
#include <java.xml.h>
#include <java.base.h>
#include <java/lang/ClassEntry.h>
#include <java/lang/Library.h>
#include <java/lang/ModuleInfo.h>
#include <java/lang/ResourceEntry.h>
#include <jcpp.h>

void java$xml$crypto$test$PreloadClass(void* eventData) {
}

void java$xml$crypto$test$LibEventAction(int32_t eventType, void* eventData) {
	if (eventType == JCPP_LIB_EVENT_TYPE_PRELOAD_CLASS) {
		java$xml$crypto$test$PreloadClass(eventData);
	}
	if (eventType == JCPP_LIB_EVENT_TYPE_THREAD_START) {
		$onLibThreadStart(eventData);
	}
}

$StringArray* java$xml$crypto$test$GetPackages() {
	return nullptr;
}

::java::lang::ClassEntry* java$xml$crypto$test$GetClassEntry($String* name) {
	return nullptr;
}

$bytes* java$xml$crypto$test$GetResource($String* name) {
	return nullptr;
}

void java$xml$crypto$test::init() {
	::java$xml$crypto::init();
	::java$logging::init();
	::java$xml::init();
	::java$base::init();
	::java::lang::Library lib = {
		"java.xml.crypto.test", "17.35", "",
		nullptr,
		java$xml$crypto$test$LibEventAction,
		java$xml$crypto$test$GetPackages,
		java$xml$crypto$test$GetClassEntry,
		java$xml$crypto$test$GetResource
	};
	$System::addLibrary(&lib);
	$System::init();
}