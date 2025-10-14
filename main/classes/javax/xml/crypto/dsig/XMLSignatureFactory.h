#ifndef _javax_xml_crypto_dsig_XMLSignatureFactory_h_
#define _javax_xml_crypto_dsig_XMLSignatureFactory_h_
//$ class javax.xml.crypto.dsig.XMLSignatureFactory
//$ extends java.lang.Object

#include <java/lang/Array.h>

namespace java {
	namespace security {
		class Provider;
	}
}
namespace java {
	namespace util {
		class List;
	}
}
namespace javax {
	namespace xml {
		namespace crypto {
			class Data;
			class URIDereferencer;
			class XMLStructure;
		}
	}
}
namespace javax {
	namespace xml {
		namespace crypto {
			namespace dsig {
				class CanonicalizationMethod;
				class DigestMethod;
				class Manifest;
				class Reference;
				class SignatureMethod;
				class SignatureProperties;
				class SignatureProperty;
				class SignedInfo;
				class Transform;
				class XMLObject;
				class XMLSignature;
				class XMLValidateContext;
			}
		}
	}
}
namespace javax {
	namespace xml {
		namespace crypto {
			namespace dsig {
				namespace keyinfo {
					class KeyInfo;
					class KeyInfoFactory;
				}
			}
		}
	}
}
namespace javax {
	namespace xml {
		namespace crypto {
			namespace dsig {
				namespace spec {
					class C14NMethodParameterSpec;
					class DigestMethodParameterSpec;
					class SignatureMethodParameterSpec;
					class TransformParameterSpec;
				}
			}
		}
	}
}

namespace javax {
	namespace xml {
		namespace crypto {
			namespace dsig {

class $export XMLSignatureFactory : public ::java::lang::Object {
	$class(XMLSignatureFactory, $NO_CLASS_INIT, ::java::lang::Object)
public:
	XMLSignatureFactory();
	void init$();
	static ::javax::xml::crypto::dsig::XMLSignatureFactory* getInstance($String* mechanismType);
	static ::javax::xml::crypto::dsig::XMLSignatureFactory* getInstance($String* mechanismType, ::java::security::Provider* provider);
	static ::javax::xml::crypto::dsig::XMLSignatureFactory* getInstance($String* mechanismType, $String* provider);
	static ::javax::xml::crypto::dsig::XMLSignatureFactory* getInstance();
	::javax::xml::crypto::dsig::keyinfo::KeyInfoFactory* getKeyInfoFactory();
	$String* getMechanismType();
	::java::security::Provider* getProvider();
	virtual ::javax::xml::crypto::URIDereferencer* getURIDereferencer() {return nullptr;}
	virtual bool isFeatureSupported($String* feature) {return false;}
	virtual ::javax::xml::crypto::dsig::CanonicalizationMethod* newCanonicalizationMethod($String* algorithm, ::javax::xml::crypto::dsig::spec::C14NMethodParameterSpec* params) {return nullptr;}
	virtual ::javax::xml::crypto::dsig::CanonicalizationMethod* newCanonicalizationMethod($String* algorithm, ::javax::xml::crypto::XMLStructure* params) {return nullptr;}
	virtual ::javax::xml::crypto::dsig::DigestMethod* newDigestMethod($String* algorithm, ::javax::xml::crypto::dsig::spec::DigestMethodParameterSpec* params) {return nullptr;}
	virtual ::javax::xml::crypto::dsig::Manifest* newManifest(::java::util::List* references) {return nullptr;}
	virtual ::javax::xml::crypto::dsig::Manifest* newManifest(::java::util::List* references, $String* id) {return nullptr;}
	virtual ::javax::xml::crypto::dsig::Reference* newReference($String* uri, ::javax::xml::crypto::dsig::DigestMethod* dm) {return nullptr;}
	virtual ::javax::xml::crypto::dsig::Reference* newReference($String* uri, ::javax::xml::crypto::dsig::DigestMethod* dm, ::java::util::List* transforms, $String* type, $String* id) {return nullptr;}
	virtual ::javax::xml::crypto::dsig::Reference* newReference($String* uri, ::javax::xml::crypto::dsig::DigestMethod* dm, ::java::util::List* transforms, $String* type, $String* id, $bytes* digestValue) {return nullptr;}
	virtual ::javax::xml::crypto::dsig::Reference* newReference($String* uri, ::javax::xml::crypto::dsig::DigestMethod* dm, ::java::util::List* appliedTransforms, ::javax::xml::crypto::Data* result, ::java::util::List* transforms, $String* type, $String* id) {return nullptr;}
	virtual ::javax::xml::crypto::dsig::SignatureMethod* newSignatureMethod($String* algorithm, ::javax::xml::crypto::dsig::spec::SignatureMethodParameterSpec* params) {return nullptr;}
	virtual ::javax::xml::crypto::dsig::SignatureProperties* newSignatureProperties(::java::util::List* properties, $String* id) {return nullptr;}
	virtual ::javax::xml::crypto::dsig::SignatureProperty* newSignatureProperty(::java::util::List* content, $String* target, $String* id) {return nullptr;}
	virtual ::javax::xml::crypto::dsig::SignedInfo* newSignedInfo(::javax::xml::crypto::dsig::CanonicalizationMethod* cm, ::javax::xml::crypto::dsig::SignatureMethod* sm, ::java::util::List* references) {return nullptr;}
	virtual ::javax::xml::crypto::dsig::SignedInfo* newSignedInfo(::javax::xml::crypto::dsig::CanonicalizationMethod* cm, ::javax::xml::crypto::dsig::SignatureMethod* sm, ::java::util::List* references, $String* id) {return nullptr;}
	virtual ::javax::xml::crypto::dsig::Transform* newTransform($String* algorithm, ::javax::xml::crypto::dsig::spec::TransformParameterSpec* params) {return nullptr;}
	virtual ::javax::xml::crypto::dsig::Transform* newTransform($String* algorithm, ::javax::xml::crypto::XMLStructure* params) {return nullptr;}
	virtual ::javax::xml::crypto::dsig::XMLObject* newXMLObject(::java::util::List* content, $String* id, $String* mimeType, $String* encoding) {return nullptr;}
	virtual ::javax::xml::crypto::dsig::XMLSignature* newXMLSignature(::javax::xml::crypto::dsig::SignedInfo* si, ::javax::xml::crypto::dsig::keyinfo::KeyInfo* ki) {return nullptr;}
	virtual ::javax::xml::crypto::dsig::XMLSignature* newXMLSignature(::javax::xml::crypto::dsig::SignedInfo* si, ::javax::xml::crypto::dsig::keyinfo::KeyInfo* ki, ::java::util::List* objects, $String* id, $String* signatureValueId) {return nullptr;}
	virtual ::javax::xml::crypto::dsig::XMLSignature* unmarshalXMLSignature(::javax::xml::crypto::dsig::XMLValidateContext* context) {return nullptr;}
	virtual ::javax::xml::crypto::dsig::XMLSignature* unmarshalXMLSignature(::javax::xml::crypto::XMLStructure* xmlStructure) {return nullptr;}
	$String* mechanismType = nullptr;
	::java::security::Provider* provider = nullptr;
};

			} // dsig
		} // crypto
	} // xml
} // javax

#endif // _javax_xml_crypto_dsig_XMLSignatureFactory_h_