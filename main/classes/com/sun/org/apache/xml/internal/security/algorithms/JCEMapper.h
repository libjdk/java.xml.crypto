#ifndef _com_sun_org_apache_xml_internal_security_algorithms_JCEMapper_h_
#define _com_sun_org_apache_xml_internal_security_algorithms_JCEMapper_h_
//$ class com.sun.org.apache.xml.internal.security.algorithms.JCEMapper
//$ extends java.lang.Object

#include <java/lang/Object.h>

#pragma push_macro("LOG")
#undef LOG

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xml {
					namespace internal {
						namespace security {
							namespace algorithms {
								class JCEMapper$Algorithm;
							}
						}
					}
				}
			}
		}
	}
}
namespace com {
	namespace sun {
		namespace org {
			namespace slf4j {
				namespace internal {
					class Logger;
				}
			}
		}
	}
}
namespace java {
	namespace util {
		class Map;
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

class JCEMapper : public ::java::lang::Object {
	$class(JCEMapper, 0, ::java::lang::Object)
public:
	JCEMapper();
	void init$();
	static ::com::sun::org::apache::xml::internal::security::algorithms::JCEMapper$Algorithm* getAlgorithm($String* algorithmURI);
	static $String* getAlgorithmClassFromURI($String* algorithmURI);
	static int32_t getIVLengthFromURI($String* algorithmURI);
	static $String* getJCEKeyAlgorithmFromURI($String* algorithmURI);
	static $String* getJCEProviderFromURI($String* algorithmURI);
	static int32_t getKeyLengthFromURI($String* algorithmURI);
	static $String* getProviderId();
	static void register$($String* id, ::com::sun::org::apache::xml::internal::security::algorithms::JCEMapper$Algorithm* algorithm);
	static void registerDefaultAlgorithms();
	static void setProviderId($String* provider);
	static $String* translateURItoJCEID($String* algorithmURI);
	static ::com::sun::org::slf4j::internal::Logger* LOG;
	static ::java::util::Map* algorithmsMap;
	static $String* providerName;
};

							} // algorithms
						} // security
					} // internal
				} // xml
			} // apache
		} // org
	} // sun
} // com

#pragma pop_macro("LOG")

#endif // _com_sun_org_apache_xml_internal_security_algorithms_JCEMapper_h_