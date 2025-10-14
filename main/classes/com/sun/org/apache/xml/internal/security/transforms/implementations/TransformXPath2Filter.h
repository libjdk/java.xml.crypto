#ifndef _com_sun_org_apache_xml_internal_security_transforms_implementations_TransformXPath2Filter_h_
#define _com_sun_org_apache_xml_internal_security_transforms_implementations_TransformXPath2Filter_h_
//$ class com.sun.org.apache.xml.internal.security.transforms.implementations.TransformXPath2Filter
//$ extends com.sun.org.apache.xml.internal.security.transforms.TransformSpi

#include <com/sun/org/apache/xml/internal/security/transforms/TransformSpi.h>

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

class TransformXPath2Filter : public ::com::sun::org::apache::xml::internal::security::transforms::TransformSpi {
	$class(TransformXPath2Filter, $NO_CLASS_INIT, ::com::sun::org::apache::xml::internal::security::transforms::TransformSpi)
public:
	TransformXPath2Filter();
	void init$();
	virtual $String* engineGetURI() override;
	virtual ::com::sun::org::apache::xml::internal::security::signature::XMLSignatureInput* enginePerformTransform(::com::sun::org::apache::xml::internal::security::signature::XMLSignatureInput* input, ::java::io::OutputStream* os, ::org::w3c::dom::Element* transformElement, $String* baseURI, bool secureValidation) override;
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

#endif // _com_sun_org_apache_xml_internal_security_transforms_implementations_TransformXPath2Filter_h_