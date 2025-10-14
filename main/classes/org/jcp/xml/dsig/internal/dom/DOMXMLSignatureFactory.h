#ifndef _org_jcp_xml_dsig_internal_dom_DOMXMLSignatureFactory_h_
#define _org_jcp_xml_dsig_internal_dom_DOMXMLSignatureFactory_h_
//$ class org.jcp.xml.dsig.internal.dom.DOMXMLSignatureFactory
//$ extends javax.xml.crypto.dsig.XMLSignatureFactory

#include <java/lang/Array.h>
#include <javax/xml/crypto/dsig/XMLSignatureFactory.h>

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
			class XMLCryptoContext;
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
namespace org {
	namespace w3c {
		namespace dom {
			class Node;
		}
	}
}

namespace org {
	namespace jcp {
		namespace xml {
			namespace dsig {
				namespace internal {
					namespace dom {

class DOMXMLSignatureFactory : public ::javax::xml::crypto::dsig::XMLSignatureFactory {
	$class(DOMXMLSignatureFactory, $NO_CLASS_INIT, ::javax::xml::crypto::dsig::XMLSignatureFactory)
public:
	DOMXMLSignatureFactory();
	void init$();
	virtual ::javax::xml::crypto::URIDereferencer* getURIDereferencer() override;
	virtual bool isFeatureSupported($String* feature) override;
	virtual ::javax::xml::crypto::dsig::CanonicalizationMethod* newCanonicalizationMethod($String* algorithm, ::javax::xml::crypto::dsig::spec::C14NMethodParameterSpec* params) override;
	virtual ::javax::xml::crypto::dsig::CanonicalizationMethod* newCanonicalizationMethod($String* algorithm, ::javax::xml::crypto::XMLStructure* params) override;
	virtual ::javax::xml::crypto::dsig::DigestMethod* newDigestMethod($String* algorithm, ::javax::xml::crypto::dsig::spec::DigestMethodParameterSpec* params) override;
	virtual ::javax::xml::crypto::dsig::Manifest* newManifest(::java::util::List* references) override;
	virtual ::javax::xml::crypto::dsig::Manifest* newManifest(::java::util::List* references, $String* id) override;
	virtual ::javax::xml::crypto::dsig::Reference* newReference($String* uri, ::javax::xml::crypto::dsig::DigestMethod* dm) override;
	virtual ::javax::xml::crypto::dsig::Reference* newReference($String* uri, ::javax::xml::crypto::dsig::DigestMethod* dm, ::java::util::List* transforms, $String* type, $String* id) override;
	virtual ::javax::xml::crypto::dsig::Reference* newReference($String* uri, ::javax::xml::crypto::dsig::DigestMethod* dm, ::java::util::List* appliedTransforms, ::javax::xml::crypto::Data* result, ::java::util::List* transforms, $String* type, $String* id) override;
	virtual ::javax::xml::crypto::dsig::Reference* newReference($String* uri, ::javax::xml::crypto::dsig::DigestMethod* dm, ::java::util::List* transforms, $String* type, $String* id, $bytes* digestValue) override;
	virtual ::javax::xml::crypto::dsig::SignatureMethod* newSignatureMethod($String* algorithm, ::javax::xml::crypto::dsig::spec::SignatureMethodParameterSpec* params) override;
	virtual ::javax::xml::crypto::dsig::SignatureProperties* newSignatureProperties(::java::util::List* props, $String* id) override;
	virtual ::javax::xml::crypto::dsig::SignatureProperty* newSignatureProperty(::java::util::List* info, $String* target, $String* id) override;
	virtual ::javax::xml::crypto::dsig::SignedInfo* newSignedInfo(::javax::xml::crypto::dsig::CanonicalizationMethod* cm, ::javax::xml::crypto::dsig::SignatureMethod* sm, ::java::util::List* references) override;
	virtual ::javax::xml::crypto::dsig::SignedInfo* newSignedInfo(::javax::xml::crypto::dsig::CanonicalizationMethod* cm, ::javax::xml::crypto::dsig::SignatureMethod* sm, ::java::util::List* references, $String* id) override;
	virtual ::javax::xml::crypto::dsig::Transform* newTransform($String* algorithm, ::javax::xml::crypto::dsig::spec::TransformParameterSpec* params) override;
	virtual ::javax::xml::crypto::dsig::Transform* newTransform($String* algorithm, ::javax::xml::crypto::XMLStructure* params) override;
	virtual ::javax::xml::crypto::dsig::XMLObject* newXMLObject(::java::util::List* content, $String* id, $String* mimeType, $String* encoding) override;
	virtual ::javax::xml::crypto::dsig::XMLSignature* newXMLSignature(::javax::xml::crypto::dsig::SignedInfo* si, ::javax::xml::crypto::dsig::keyinfo::KeyInfo* ki) override;
	virtual ::javax::xml::crypto::dsig::XMLSignature* newXMLSignature(::javax::xml::crypto::dsig::SignedInfo* si, ::javax::xml::crypto::dsig::keyinfo::KeyInfo* ki, ::java::util::List* objects, $String* id, $String* signatureValueId) override;
	::javax::xml::crypto::dsig::XMLSignature* unmarshal(::org::w3c::dom::Node* node, ::javax::xml::crypto::XMLCryptoContext* context);
	virtual ::javax::xml::crypto::dsig::XMLSignature* unmarshalXMLSignature(::javax::xml::crypto::dsig::XMLValidateContext* context) override;
	virtual ::javax::xml::crypto::dsig::XMLSignature* unmarshalXMLSignature(::javax::xml::crypto::XMLStructure* xmlStructure) override;
};

					} // dom
				} // internal
			} // dsig
		} // xml
	} // jcp
} // org

#endif // _org_jcp_xml_dsig_internal_dom_DOMXMLSignatureFactory_h_