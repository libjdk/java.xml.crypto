#ifndef _com_sun_org_apache_xml_internal_security_signature_Manifest_h_
#define _com_sun_org_apache_xml_internal_security_signature_Manifest_h_
//$ class com.sun.org.apache.xml.internal.security.signature.Manifest
//$ extends com.sun.org.apache.xml.internal.security.utils.SignatureElementProxy

#include <com/sun/org/apache/xml/internal/security/utils/SignatureElementProxy.h>
#include <java/lang/Array.h>

#pragma push_macro("LOG")
#undef LOG
#pragma push_macro("MAXIMUM_REFERENCE_COUNT")
#undef MAXIMUM_REFERENCE_COUNT

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xml {
					namespace internal {
						namespace security {
							namespace signature {
								class Reference;
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
			namespace apache {
				namespace xml {
					namespace internal {
						namespace security {
							namespace utils {
								namespace resolver {
									class ResourceResolverSpi;
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
	namespace lang {
		class Integer;
	}
}
namespace java {
	namespace util {
		class List;
		class Map;
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

class Manifest : public ::com::sun::org::apache::xml::internal::security::utils::SignatureElementProxy {
	$class(Manifest, 0, ::com::sun::org::apache::xml::internal::security::utils::SignatureElementProxy)
public:
	Manifest();
	void init$(::org::w3c::dom::Document* doc);
	void init$(::org::w3c::dom::Element* element, $String* baseURI);
	void init$(::org::w3c::dom::Element* element, $String* baseURI, bool secureValidation);
	virtual void addDocument($String* baseURI, $String* referenceURI, ::com::sun::org::apache::xml::internal::security::transforms::Transforms* transforms, $String* digestURI, $String* referenceId, $String* referenceType);
	virtual void addResourceResolver(::com::sun::org::apache::xml::internal::security::utils::resolver::ResourceResolverSpi* resolver);
	virtual void generateDigestValues();
	virtual $String* getBaseLocalName() override;
	virtual $String* getId();
	virtual int32_t getLength();
	virtual ::java::util::List* getPerManifestResolvers();
	virtual ::com::sun::org::apache::xml::internal::security::signature::XMLSignatureInput* getReferencedContentAfterTransformsItem(int32_t i);
	virtual ::com::sun::org::apache::xml::internal::security::signature::XMLSignatureInput* getReferencedContentBeforeTransformsItem(int32_t i);
	virtual ::java::util::Map* getResolverProperties();
	virtual $String* getResolverProperty($String* key);
	virtual $bytes* getSignedContentItem(int32_t i);
	virtual int32_t getSignedContentLength();
	virtual bool getVerificationResult(int32_t index);
	virtual ::java::util::List* getVerificationResults();
	virtual bool isSecureValidation();
	virtual ::com::sun::org::apache::xml::internal::security::signature::Reference* item(int32_t i);
	static ::java::lang::Integer* lambda$static$0();
	virtual void setId($String* Id);
	virtual void setResolverProperty($String* key, $String* value);
	virtual bool verifyReferences();
	virtual bool verifyReferences(bool followManifests);
	static const int32_t MAXIMUM_REFERENCE_COUNT = 30;
	static ::com::sun::org::slf4j::internal::Logger* LOG;
	static ::java::lang::Integer* referenceCount;
	::java::util::List* references = nullptr;
	$Array<::org::w3c::dom::Element>* referencesEl = nullptr;
	::java::util::List* verificationResults = nullptr;
	::java::util::Map* resolverProperties = nullptr;
	::java::util::List* perManifestResolvers = nullptr;
	bool secureValidation = false;
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
#pragma pop_macro("MAXIMUM_REFERENCE_COUNT")

#endif // _com_sun_org_apache_xml_internal_security_signature_Manifest_h_