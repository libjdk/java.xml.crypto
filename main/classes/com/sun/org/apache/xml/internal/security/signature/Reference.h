#ifndef _com_sun_org_apache_xml_internal_security_signature_Reference_h_
#define _com_sun_org_apache_xml_internal_security_signature_Reference_h_
//$ class com.sun.org.apache.xml.internal.security.signature.Reference
//$ extends com.sun.org.apache.xml.internal.security.utils.SignatureElementProxy

#include <com/sun/org/apache/xml/internal/security/utils/Constants.h>
#include <com/sun/org/apache/xml/internal/security/utils/SignatureElementProxy.h>
#include <java/lang/Array.h>

#pragma push_macro("LOG")
#undef LOG
#pragma push_macro("MANIFEST_URI")
#undef MANIFEST_URI
#pragma push_macro("MAXIMUM_TRANSFORM_COUNT")
#undef MAXIMUM_TRANSFORM_COUNT
#pragma push_macro("OBJECT_URI")
#undef OBJECT_URI
#pragma push_macro("TRANSFORM_ALGORITHMS")
#undef TRANSFORM_ALGORITHMS

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xml {
					namespace internal {
						namespace security {
							namespace algorithms {
								class MessageDigestAlgorithm;
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
								class Manifest;
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
							namespace signature {
								namespace reference {
									class ReferenceData;
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
							namespace transforms {
								class Transforms;
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
	namespace lang {
		class Boolean;
	}
}
namespace java {
	namespace util {
		class Set;
	}
}
namespace org {
	namespace w3c {
		namespace dom {
			class Document;
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
							namespace signature {

class Reference : public ::com::sun::org::apache::xml::internal::security::utils::SignatureElementProxy {
	$class(Reference, 0, ::com::sun::org::apache::xml::internal::security::utils::SignatureElementProxy)
public:
	Reference();
	void init$(::org::w3c::dom::Document* doc, $String* baseURI, $String* referenceURI, ::com::sun::org::apache::xml::internal::security::signature::Manifest* manifest, ::com::sun::org::apache::xml::internal::security::transforms::Transforms* transforms, $String* messageDigestAlgorithm);
	void init$(::org::w3c::dom::Element* element, $String* baseURI, ::com::sun::org::apache::xml::internal::security::signature::Manifest* manifest);
	void init$(::org::w3c::dom::Element* element, $String* baseURI, ::com::sun::org::apache::xml::internal::security::signature::Manifest* manifest, bool secureValidation);
	void cacheDereferencedElement(::com::sun::org::apache::xml::internal::security::signature::XMLSignatureInput* input);
	$bytes* calculateDigest(bool validating);
	virtual ::com::sun::org::apache::xml::internal::security::signature::XMLSignatureInput* dereferenceURIandPerformTransforms(::java::io::OutputStream* os);
	virtual void generateDigestValue();
	virtual $String* getBaseLocalName() override;
	::com::sun::org::apache::xml::internal::security::signature::XMLSignatureInput* getContentsAfterTransformation(::com::sun::org::apache::xml::internal::security::signature::XMLSignatureInput* input, ::java::io::OutputStream* os);
	virtual ::com::sun::org::apache::xml::internal::security::signature::XMLSignatureInput* getContentsAfterTransformation();
	virtual ::com::sun::org::apache::xml::internal::security::signature::XMLSignatureInput* getContentsBeforeTransformation();
	virtual $bytes* getDigestValue();
	virtual $String* getHTMLRepresentation();
	virtual $String* getId();
	virtual ::com::sun::org::apache::xml::internal::security::algorithms::MessageDigestAlgorithm* getMessageDigestAlgorithm();
	virtual ::com::sun::org::apache::xml::internal::security::signature::XMLSignatureInput* getNodesetBeforeFirstCanonicalization();
	$bytes* getPreCalculatedDigest(::com::sun::org::apache::xml::internal::security::signature::XMLSignatureInput* input);
	virtual ::com::sun::org::apache::xml::internal::security::signature::reference::ReferenceData* getReferenceData();
	virtual $bytes* getReferencedBytes();
	virtual ::com::sun::org::apache::xml::internal::security::transforms::Transforms* getTransforms();
	virtual ::com::sun::org::apache::xml::internal::security::signature::XMLSignatureInput* getTransformsOutput();
	virtual $String* getType();
	virtual $String* getURI();
	static ::java::lang::Boolean* lambda$static$0();
	void setDigestValueElement($bytes* digestValue);
	virtual void setId($String* id);
	virtual void setType($String* type);
	virtual void setURI($String* uri);
	virtual bool typeIsReferenceToManifest();
	virtual bool typeIsReferenceToObject();
	virtual bool verify();
	static $String* OBJECT_URI;
	static $String* MANIFEST_URI;
	static const int32_t MAXIMUM_TRANSFORM_COUNT = 5;
	bool secureValidation = false;
	static bool useC14N11;
	static ::com::sun::org::slf4j::internal::Logger* LOG;
	::com::sun::org::apache::xml::internal::security::signature::Manifest* manifest = nullptr;
	::com::sun::org::apache::xml::internal::security::signature::XMLSignatureInput* transformsOutput = nullptr;
	::com::sun::org::apache::xml::internal::security::transforms::Transforms* transforms = nullptr;
	::org::w3c::dom::Element* digestMethodElem = nullptr;
	::org::w3c::dom::Element* digestValueElement = nullptr;
	::com::sun::org::apache::xml::internal::security::signature::reference::ReferenceData* referenceData = nullptr;
	static ::java::util::Set* TRANSFORM_ALGORITHMS;
};

							} // signature
						} // security
					} // internal
				} // xml
			} // apache
		} // org
	} // sun
} // com

#pragma pop_macro("LOG")
#pragma pop_macro("MANIFEST_URI")
#pragma pop_macro("MAXIMUM_TRANSFORM_COUNT")
#pragma pop_macro("OBJECT_URI")
#pragma pop_macro("TRANSFORM_ALGORITHMS")

#endif // _com_sun_org_apache_xml_internal_security_signature_Reference_h_