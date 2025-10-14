#ifndef _com_sun_org_apache_xml_internal_security_transforms_implementations_TransformEnvelopedSignature_h_
#define _com_sun_org_apache_xml_internal_security_transforms_implementations_TransformEnvelopedSignature_h_
//$ class com.sun.org.apache.xml.internal.security.transforms.implementations.TransformEnvelopedSignature
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
			class Node;
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

class TransformEnvelopedSignature : public ::com::sun::org::apache::xml::internal::security::transforms::TransformSpi {
	$class(TransformEnvelopedSignature, $NO_CLASS_INIT, ::com::sun::org::apache::xml::internal::security::transforms::TransformSpi)
public:
	TransformEnvelopedSignature();
	void init$();
	virtual $String* engineGetURI() override;
	virtual ::com::sun::org::apache::xml::internal::security::signature::XMLSignatureInput* enginePerformTransform(::com::sun::org::apache::xml::internal::security::signature::XMLSignatureInput* input, ::java::io::OutputStream* os, ::org::w3c::dom::Element* transformElement, $String* baseURI, bool secureValidation) override;
	static ::org::w3c::dom::Node* searchSignatureElement(::org::w3c::dom::Node* signatureElement);
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

#endif // _com_sun_org_apache_xml_internal_security_transforms_implementations_TransformEnvelopedSignature_h_