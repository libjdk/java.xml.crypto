#ifndef _com_sun_org_apache_xml_internal_security_algorithms_JCEMapper$Algorithm_h_
#define _com_sun_org_apache_xml_internal_security_algorithms_JCEMapper$Algorithm_h_
//$ class com.sun.org.apache.xml.internal.security.algorithms.JCEMapper$Algorithm
//$ extends java.lang.Object

#include <java/lang/Object.h>

namespace org {
	namespace w3c {
		namespace dom {
			class Element;
		}
	}
}

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xml {
					namespace internal {
						namespace security {
							namespace algorithms {

class JCEMapper$Algorithm : public ::java::lang::Object {
	$class(JCEMapper$Algorithm, $NO_CLASS_INIT, ::java::lang::Object)
public:
	JCEMapper$Algorithm();
	void init$(::org::w3c::dom::Element* el);
	void init$($String* requiredKey, $String* jceName);
	void init$($String* requiredKey, $String* jceName, $String* algorithmClass);
	void init$($String* requiredKey, $String* jceName, int32_t keyLength);
	void init$($String* requiredKey, $String* jceName, $String* algorithmClass, int32_t keyLength, int32_t ivLength);
	void init$($String* requiredKey, $String* jceName, $String* algorithmClass, int32_t keyLength, int32_t ivLength, $String* jceProvider);
	$String* requiredKey = nullptr;
	$String* jceName = nullptr;
	$String* algorithmClass = nullptr;
	int32_t keyLength = 0;
	int32_t ivLength = 0;
	$String* jceProvider = nullptr;
};

							} // algorithms
						} // security
					} // internal
				} // xml
			} // apache
		} // org
	} // sun
} // com

#endif // _com_sun_org_apache_xml_internal_security_algorithms_JCEMapper$Algorithm_h_