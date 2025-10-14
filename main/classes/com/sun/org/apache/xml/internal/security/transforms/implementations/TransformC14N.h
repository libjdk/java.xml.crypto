#ifndef _com_sun_org_apache_xml_internal_security_transforms_implementations_TransformC14N_h_
#define _com_sun_org_apache_xml_internal_security_transforms_implementations_TransformC14N_h_
//$ class com.sun.org.apache.xml.internal.security.transforms.implementations.TransformC14N
//$ extends com.sun.org.apache.xml.internal.security.transforms.TransformSpi

#include <com/sun/org/apache/xml/internal/security/transforms/TransformSpi.h>

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xml {
					namespace internal {
						namespace security {
							namespace c14n {
								namespace implementations {
									class Canonicalizer20010315;
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

class TransformC14N : public ::com::sun::org::apache::xml::internal::security::transforms::TransformSpi {
	$class(TransformC14N, $NO_CLASS_INIT, ::com::sun::org::apache::xml::internal::security::transforms::TransformSpi)
public:
	TransformC14N();
	void init$();
	virtual $String* engineGetURI() override;
	virtual ::com::sun::org::apache::xml::internal::security::signature::XMLSignatureInput* enginePerformTransform(::com::sun::org::apache::xml::internal::security::signature::XMLSignatureInput* input, ::java::io::OutputStream* os, ::org::w3c::dom::Element* transformElement, $String* baseURI, bool secureValidation) override;
	virtual ::com::sun::org::apache::xml::internal::security::c14n::implementations::Canonicalizer20010315* getCanonicalizer();
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

#endif // _com_sun_org_apache_xml_internal_security_transforms_implementations_TransformC14N_h_