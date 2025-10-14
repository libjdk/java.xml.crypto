#ifndef _org_jcp_xml_dsig_internal_dom_DOMPGPData_h_
#define _org_jcp_xml_dsig_internal_dom_DOMPGPData_h_
//$ class org.jcp.xml.dsig.internal.dom.DOMPGPData
//$ extends org.jcp.xml.dsig.internal.dom.DOMStructure
//$ implements javax.xml.crypto.dsig.keyinfo.PGPData

#include <java/lang/Array.h>
#include <javax/xml/crypto/dsig/keyinfo/PGPData.h>
#include <org/jcp/xml/dsig/internal/dom/DOMStructure.h>

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

class DOMPGPData : public ::org::jcp::xml::dsig::internal::dom::DOMStructure, public ::javax::xml::crypto::dsig::keyinfo::PGPData {
	$class(DOMPGPData, $NO_CLASS_INIT, ::org::jcp::xml::dsig::internal::dom::DOMStructure, ::javax::xml::crypto::dsig::keyinfo::PGPData)
public:
	DOMPGPData();
	virtual ::java::lang::Object0* toObject0$() const override {return (::java::lang::Object0*)(void*)this;}
	virtual $Object* clone() override;
	virtual bool equals(Object$* arg0) override;
	virtual void finalize() override;
	virtual int32_t hashCode() override;
	void init$($bytes* keyPacket, ::java::util::List* other);
	void init$($bytes* keyId, $bytes* keyPacket, ::java::util::List* other);
	void init$(::org::w3c::dom::Element* pdElem);
	void checkKeyPacket($bytes* keyPacket);
	virtual ::java::util::List* getExternalElements() override;
	virtual $bytes* getKeyId() override;
	virtual $bytes* getKeyPacket() override;
	virtual bool isFeatureSupported($String* feature) override;
	virtual void marshal(::org::w3c::dom::Node* parent, $String* dsPrefix, ::javax::xml::crypto::dom::DOMCryptoContext* context) override;
	virtual $String* toString() override;
	$bytes* keyId = nullptr;
	$bytes* keyPacket = nullptr;
	::java::util::List* externalElements = nullptr;
};

					} // dom
				} // internal
			} // dsig
		} // xml
	} // jcp
} // org

#endif // _org_jcp_xml_dsig_internal_dom_DOMPGPData_h_