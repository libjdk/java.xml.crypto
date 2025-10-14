#ifndef _com_sun_org_apache_xml_internal_security_keys_content_keyvalues_KeyValueContent_h_
#define _com_sun_org_apache_xml_internal_security_keys_content_keyvalues_KeyValueContent_h_
//$ interface com.sun.org.apache.xml.internal.security.keys.content.keyvalues.KeyValueContent
//$ extends java.lang.Object

#include <java/lang/Object.h>

namespace java {
	namespace security {
		class PublicKey;
	}
}

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xml {
					namespace internal {
						namespace security {
							namespace keys {
								namespace content {
									namespace keyvalues {

class KeyValueContent : public ::java::lang::Object {
	$interface(KeyValueContent, $NO_CLASS_INIT, ::java::lang::Object)
public:
	virtual ::java::security::PublicKey* getPublicKey() {return nullptr;}
};

									} // keyvalues
								} // content
							} // keys
						} // security
					} // internal
				} // xml
			} // apache
		} // org
	} // sun
} // com

#endif // _com_sun_org_apache_xml_internal_security_keys_content_keyvalues_KeyValueContent_h_