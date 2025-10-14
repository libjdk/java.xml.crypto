#ifndef _com_sun_org_apache_xml_internal_security_c14n_implementations_XmlAttrStack_h_
#define _com_sun_org_apache_xml_internal_security_c14n_implementations_XmlAttrStack_h_
//$ class com.sun.org.apache.xml.internal.security.c14n.implementations.XmlAttrStack
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
							namespace c14n {
								namespace implementations {
									class XmlAttrStack$XmlsStackElement;
								}
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
		class Collection;
		class List;
	}
}
namespace org {
	namespace w3c {
		namespace dom {
			class Attr;
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
							namespace c14n {
								namespace implementations {

class XmlAttrStack : public ::java::lang::Object {
	$class(XmlAttrStack, 0, ::java::lang::Object)
public:
	XmlAttrStack();
	void init$(bool c14n11);
	virtual void addXmlnsAttr(::org::w3c::dom::Attr* n);
	virtual void getXmlnsAttr(::java::util::Collection* col);
	static $String* joinURI($String* baseURI, $String* relativeURI);
	static void printStep($String* step, $String* output, $String* input);
	virtual void push(int32_t level);
	static $String* removeDotSegments($String* path);
	static ::com::sun::org::slf4j::internal::Logger* LOG;
	int32_t currentLevel = 0;
	int32_t lastlevel = 0;
	::com::sun::org::apache::xml::internal::security::c14n::implementations::XmlAttrStack$XmlsStackElement* cur = nullptr;
	::java::util::List* levels = nullptr;
	bool c14n11 = false;
};

								} // implementations
							} // c14n
						} // security
					} // internal
				} // xml
			} // apache
		} // org
	} // sun
} // com

#pragma pop_macro("LOG")

#endif // _com_sun_org_apache_xml_internal_security_c14n_implementations_XmlAttrStack_h_