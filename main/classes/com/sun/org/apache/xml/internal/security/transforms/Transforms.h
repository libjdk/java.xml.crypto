#ifndef _com_sun_org_apache_xml_internal_security_transforms_Transforms_h_
#define _com_sun_org_apache_xml_internal_security_transforms_Transforms_h_
//$ class com.sun.org.apache.xml.internal.security.transforms.Transforms
//$ extends com.sun.org.apache.xml.internal.security.utils.SignatureElementProxy

#include <com/sun/org/apache/xml/internal/security/c14n/Canonicalizer.h>
#include <com/sun/org/apache/xml/internal/security/utils/Constants.h>
#include <com/sun/org/apache/xml/internal/security/utils/SignatureElementProxy.h>
#include <java/lang/Array.h>

#pragma push_macro("LOG")
#undef LOG
#pragma push_macro("TRANSFORM_BASE64_DECODE")
#undef TRANSFORM_BASE64_DECODE
#pragma push_macro("TRANSFORM_C14N_EXCL_OMIT_COMMENTS")
#undef TRANSFORM_C14N_EXCL_OMIT_COMMENTS
#pragma push_macro("TRANSFORM_C14N_EXCL_WITH_COMMENTS")
#undef TRANSFORM_C14N_EXCL_WITH_COMMENTS
#pragma push_macro("TRANSFORM_C14N_OMIT_COMMENTS")
#undef TRANSFORM_C14N_OMIT_COMMENTS
#pragma push_macro("TRANSFORM_C14N_WITH_COMMENTS")
#undef TRANSFORM_C14N_WITH_COMMENTS
#pragma push_macro("TRANSFORM_ENVELOPED_SIGNATURE")
#undef TRANSFORM_ENVELOPED_SIGNATURE
#pragma push_macro("TRANSFORM_XPATH")
#undef TRANSFORM_XPATH
#pragma push_macro("TRANSFORM_XPATH2FILTER")
#undef TRANSFORM_XPATH2FILTER
#pragma push_macro("TRANSFORM_XPOINTER")
#undef TRANSFORM_XPOINTER
#pragma push_macro("TRANSFORM_XSLT")
#undef TRANSFORM_XSLT

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
								class Transform;
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

class Transforms : public ::com::sun::org::apache::xml::internal::security::utils::SignatureElementProxy {
	$class(Transforms, 0, ::com::sun::org::apache::xml::internal::security::utils::SignatureElementProxy)
public:
	Transforms();
	void init$();
	void init$(::org::w3c::dom::Document* doc);
	void init$(::org::w3c::dom::Element* element, $String* baseURI);
	virtual void addTransform($String* transformURI);
	virtual void addTransform($String* transformURI, ::org::w3c::dom::Element* contextElement);
	virtual void addTransform($String* transformURI, ::org::w3c::dom::NodeList* contextNodes);
	void addTransform(::com::sun::org::apache::xml::internal::security::transforms::Transform* transform);
	void checkSecureValidation(::com::sun::org::apache::xml::internal::security::transforms::Transform* transform);
	virtual $String* getBaseLocalName() override;
	virtual int32_t getLength();
	void initTransforms();
	virtual ::com::sun::org::apache::xml::internal::security::transforms::Transform* item(int32_t i);
	virtual ::com::sun::org::apache::xml::internal::security::signature::XMLSignatureInput* performTransforms(::com::sun::org::apache::xml::internal::security::signature::XMLSignatureInput* xmlSignatureInput);
	virtual ::com::sun::org::apache::xml::internal::security::signature::XMLSignatureInput* performTransforms(::com::sun::org::apache::xml::internal::security::signature::XMLSignatureInput* xmlSignatureInput, ::java::io::OutputStream* os);
	virtual void setSecureValidation(bool secureValidation);
	static $String* TRANSFORM_C14N_OMIT_COMMENTS;
	static $String* TRANSFORM_C14N_WITH_COMMENTS;
	static $String* TRANSFORM_C14N11_OMIT_COMMENTS;
	static $String* TRANSFORM_C14N11_WITH_COMMENTS;
	static $String* TRANSFORM_C14N_EXCL_OMIT_COMMENTS;
	static $String* TRANSFORM_C14N_EXCL_WITH_COMMENTS;
	static $String* TRANSFORM_XSLT;
	static $String* TRANSFORM_BASE64_DECODE;
	static $String* TRANSFORM_XPATH;
	static $String* TRANSFORM_ENVELOPED_SIGNATURE;
	static $String* TRANSFORM_XPOINTER;
	static $String* TRANSFORM_XPATH2FILTER;
	static ::com::sun::org::slf4j::internal::Logger* LOG;
	$Array<::org::w3c::dom::Element>* transformsElement = nullptr;
	bool secureValidation = false;
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
#pragma pop_macro("TRANSFORM_BASE64_DECODE")
#pragma pop_macro("TRANSFORM_C14N_EXCL_OMIT_COMMENTS")
#pragma pop_macro("TRANSFORM_C14N_EXCL_WITH_COMMENTS")
#pragma pop_macro("TRANSFORM_C14N_OMIT_COMMENTS")
#pragma pop_macro("TRANSFORM_C14N_WITH_COMMENTS")
#pragma pop_macro("TRANSFORM_ENVELOPED_SIGNATURE")
#pragma pop_macro("TRANSFORM_XPATH")
#pragma pop_macro("TRANSFORM_XPATH2FILTER")
#pragma pop_macro("TRANSFORM_XPOINTER")
#pragma pop_macro("TRANSFORM_XSLT")

#endif // _com_sun_org_apache_xml_internal_security_transforms_Transforms_h_