#ifndef _com_sun_org_apache_xml_internal_security_transforms_implementations_TransformXSLT_h_
#define _com_sun_org_apache_xml_internal_security_transforms_implementations_TransformXSLT_h_
//$ class com.sun.org.apache.xml.internal.security.transforms.implementations.TransformXSLT
//$ extends com.sun.org.apache.xml.internal.security.transforms.TransformSpi

#include <com/sun/org/apache/xml/internal/security/transforms/TransformSpi.h>

#pragma push_macro("LOG")
#undef LOG
#pragma push_macro("XSLTSTYLESHEET")
#undef XSLTSTYLESHEET

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xml {
					namespace internal {
						namespace security {
							namespace signature {
								class XMLSignatureInput;
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
	namespace io {
		class OutputStream;
	}
}
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
							namespace transforms {
								namespace implementations {

class TransformXSLT : public ::com::sun::org::apache::xml::internal::security::transforms::TransformSpi {
	$class(TransformXSLT, 0, ::com::sun::org::apache::xml::internal::security::transforms::TransformSpi)
public:
	TransformXSLT();
	void init$();
	virtual $String* engineGetURI() override;
	virtual ::com::sun::org::apache::xml::internal::security::signature::XMLSignatureInput* enginePerformTransform(::com::sun::org::apache::xml::internal::security::signature::XMLSignatureInput* input, ::java::io::OutputStream* baos, ::org::w3c::dom::Element* transformElement, $String* baseURI, bool secureValidation) override;
	static $String* XSLTSpecNS;
	static $String* defaultXSLTSpecNSprefix;
	static $String* XSLTSTYLESHEET;
	static ::com::sun::org::slf4j::internal::Logger* LOG;
};

								} // implementations
							} // transforms
						} // security
					} // internal
				} // xml
			} // apache
		} // org
	} // sun
} // com

#pragma pop_macro("LOG")
#pragma pop_macro("XSLTSTYLESHEET")

#endif // _com_sun_org_apache_xml_internal_security_transforms_implementations_TransformXSLT_h_