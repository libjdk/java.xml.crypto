#ifndef _com_sun_org_apache_xml_internal_security_transforms_Transform_h_
#define _com_sun_org_apache_xml_internal_security_transforms_Transform_h_
//$ class com.sun.org.apache.xml.internal.security.transforms.Transform
//$ extends com.sun.org.apache.xml.internal.security.utils.SignatureElementProxy

#include <com/sun/org/apache/xml/internal/security/utils/SignatureElementProxy.h>

#pragma push_macro("LOG")
#undef LOG

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
			namespace apache {
				namespace xml {
					namespace internal {
						namespace security {
							namespace transforms {
								class TransformSpi;
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
namespace java {
	namespace util {
		class Map;
	}
}
namespace org {
	namespace w3c {
		namespace dom {
			class Document;
			class Element;
			class NodeList;
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

class Transform : public ::com::sun::org::apache::xml::internal::security::utils::SignatureElementProxy {
	$class(Transform, 0, ::com::sun::org::apache::xml::internal::security::utils::SignatureElementProxy)
public:
	Transform();
	void init$(::org::w3c::dom::Document* doc, $String* algorithmURI);
	void init$(::org::w3c::dom::Document* doc, $String* algorithmURI, ::org::w3c::dom::Element* contextChild);
	void init$(::org::w3c::dom::Document* doc, $String* algorithmURI, ::org::w3c::dom::NodeList* contextNodes);
	void init$(::org::w3c::dom::Element* element, $String* baseURI);
	virtual $String* getBaseLocalName() override;
	$String* getURI();
	::com::sun::org::apache::xml::internal::security::transforms::TransformSpi* initializeTransform($String* algorithmURI);
	::com::sun::org::apache::xml::internal::security::signature::XMLSignatureInput* performTransform(::com::sun::org::apache::xml::internal::security::signature::XMLSignatureInput* input, bool secureValidation);
	::com::sun::org::apache::xml::internal::security::signature::XMLSignatureInput* performTransform(::com::sun::org::apache::xml::internal::security::signature::XMLSignatureInput* input, ::java::io::OutputStream* os, bool secureValidation);
	static void register$($String* algorithmURI, $String* implementingClass);
	static void register$($String* algorithmURI, $Class* implementingClass);
	static void registerDefaultAlgorithms();
	static ::com::sun::org::slf4j::internal::Logger* LOG;
	static ::java::util::Map* transformSpiHash;
	::com::sun::org::apache::xml::internal::security::transforms::TransformSpi* transformSpi = nullptr;
};

							} // transforms
						} // security
					} // internal
				} // xml
			} // apache
		} // org
	} // sun
} // com

#pragma pop_macro("LOG")

#endif // _com_sun_org_apache_xml_internal_security_transforms_Transform_h_