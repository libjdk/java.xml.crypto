#ifndef _com_sun_org_apache_xml_internal_security_transforms_TransformSpi_h_
#define _com_sun_org_apache_xml_internal_security_transforms_TransformSpi_h_
//$ class com.sun.org.apache.xml.internal.security.transforms.TransformSpi
//$ extends java.lang.Object

#include <java/lang/Object.h>

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

class TransformSpi : public ::java::lang::Object {
	$class(TransformSpi, $NO_CLASS_INIT, ::java::lang::Object)
public:
	TransformSpi();
	void init$();
	virtual $String* engineGetURI() {return nullptr;}
	virtual ::com::sun::org::apache::xml::internal::security::signature::XMLSignatureInput* enginePerformTransform(::com::sun::org::apache::xml::internal::security::signature::XMLSignatureInput* input, ::java::io::OutputStream* os, ::org::w3c::dom::Element* transformElement, $String* baseURI, bool secureValidation) {return nullptr;}
};

							} // transforms
						} // security
					} // internal
				} // xml
			} // apache
		} // org
	} // sun
} // com

#endif // _com_sun_org_apache_xml_internal_security_transforms_TransformSpi_h_