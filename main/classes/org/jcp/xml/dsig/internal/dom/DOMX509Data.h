#ifndef _org_jcp_xml_dsig_internal_dom_DOMX509Data_h_
#define _org_jcp_xml_dsig_internal_dom_DOMX509Data_h_
//$ class org.jcp.xml.dsig.internal.dom.DOMX509Data
//$ extends org.jcp.xml.dsig.internal.dom.DOMStructure
//$ implements javax.xml.crypto.dsig.keyinfo.X509Data

#include <java/lang/Array.h>
#include <javax/xml/crypto/dsig/keyinfo/X509Data.h>
#include <org/jcp/xml/dsig/internal/dom/DOMStructure.h>

namespace java {
	namespace io {
		class ByteArrayInputStream;
	}
}
namespace java {
	namespace security {
		namespace cert {
			class CertificateFactory;
			class X509CRL;
			class X509Certificate;
		}
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
			namespace dom {
				class DOMCryptoContext;
			}
		}
	}
}
namespace org {
	namespace w3c {
		namespace dom {
			class Document;
			class Element;
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

class DOMX509Data : public ::org::jcp::xml::dsig::internal::dom::DOMStructure, public ::javax::xml::crypto::dsig::keyinfo::X509Data {
	$class(DOMX509Data, $NO_CLASS_INIT, ::org::jcp::xml::dsig::internal::dom::DOMStructure, ::javax::xml::crypto::dsig::keyinfo::X509Data)
public:
	DOMX509Data();
	virtual ::java::lang::Object0* toObject0$() const override {return (::java::lang::Object0*)(void*)this;}
	virtual $Object* clone() override;
	virtual void finalize() override;
	void init$(::java::util::List* content);
	void init$(::org::w3c::dom::Element* xdElem);
	virtual bool equals(Object$* o) override;
	virtual ::java::util::List* getContent() override;
	virtual int32_t hashCode() override;
	virtual bool isFeatureSupported($String* feature) override;
	virtual void marshal(::org::w3c::dom::Node* parent, $String* dsPrefix, ::javax::xml::crypto::dom::DOMCryptoContext* context) override;
	void marshalCRL(::java::security::cert::X509CRL* crl, ::org::w3c::dom::Node* parent, ::org::w3c::dom::Document* doc, $String* dsPrefix);
	void marshalCert(::java::security::cert::X509Certificate* cert, ::org::w3c::dom::Node* parent, ::org::w3c::dom::Document* doc, $String* dsPrefix);
	void marshalSKI($bytes* skid, ::org::w3c::dom::Node* parent, ::org::w3c::dom::Document* doc, $String* dsPrefix);
	void marshalSubjectName($String* name, ::org::w3c::dom::Node* parent, ::org::w3c::dom::Document* doc, $String* dsPrefix);
	virtual $String* toString() override;
	::java::io::ByteArrayInputStream* unmarshalBase64Binary(::org::w3c::dom::Element* elem);
	::java::security::cert::X509CRL* unmarshalX509CRL(::org::w3c::dom::Element* elem);
	::java::security::cert::X509Certificate* unmarshalX509Certificate(::org::w3c::dom::Element* elem);
	::java::util::List* content = nullptr;
	::java::security::cert::CertificateFactory* cf = nullptr;
};

					} // dom
				} // internal
			} // dsig
		} // xml
	} // jcp
} // org

#endif // _org_jcp_xml_dsig_internal_dom_DOMX509Data_h_