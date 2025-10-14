#ifndef _org_jcp_xml_dsig_internal_dom_ApacheTransform_h_
#define _org_jcp_xml_dsig_internal_dom_ApacheTransform_h_
//$ class org.jcp.xml.dsig.internal.dom.ApacheTransform
//$ extends javax.xml.crypto.dsig.TransformService

#include <javax/xml/crypto/dsig/TransformService.h>

#pragma push_macro("LOG")
#undef LOG

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
namespace java {
	namespace security {
		namespace spec {
			class AlgorithmParameterSpec;
		}
	}
}
namespace javax {
	namespace xml {
		namespace crypto {
			class Data;
			class XMLCryptoContext;
			class XMLStructure;
		}
	}
}
namespace javax {
	namespace xml {
		namespace crypto {
			namespace dsig {
				namespace spec {
					class TransformParameterSpec;
				}
			}
		}
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

namespace org {
	namespace jcp {
		namespace xml {
			namespace dsig {
				namespace internal {
					namespace dom {

class ApacheTransform : public ::javax::xml::crypto::dsig::TransformService {
	$class(ApacheTransform, 0, ::javax::xml::crypto::dsig::TransformService)
public:
	ApacheTransform();
	using ::javax::xml::crypto::dsig::TransformService::init;
	void init$();
	virtual ::java::security::spec::AlgorithmParameterSpec* getParameterSpec() override;
	virtual void init(::javax::xml::crypto::XMLStructure* parent, ::javax::xml::crypto::XMLCryptoContext* context) override;
	virtual bool isFeatureSupported($String* feature) override;
	virtual void marshalParams(::javax::xml::crypto::XMLStructure* parent, ::javax::xml::crypto::XMLCryptoContext* context) override;
	virtual ::javax::xml::crypto::Data* transform(::javax::xml::crypto::Data* data, ::javax::xml::crypto::XMLCryptoContext* xc) override;
	virtual ::javax::xml::crypto::Data* transform(::javax::xml::crypto::Data* data, ::javax::xml::crypto::XMLCryptoContext* xc, ::java::io::OutputStream* os) override;
	::javax::xml::crypto::Data* transformIt(::javax::xml::crypto::Data* data, ::javax::xml::crypto::XMLCryptoContext* xc, ::java::io::OutputStream* os);
	static ::com::sun::org::slf4j::internal::Logger* LOG;
	::com::sun::org::apache::xml::internal::security::transforms::Transform* transform$ = nullptr;
	::org::w3c::dom::Document* ownerDoc = nullptr;
	::org::w3c::dom::Element* transformElem = nullptr;
	::javax::xml::crypto::dsig::spec::TransformParameterSpec* params = nullptr;
};

					} // dom
				} // internal
			} // dsig
		} // xml
	} // jcp
} // org

#pragma pop_macro("LOG")

#endif // _org_jcp_xml_dsig_internal_dom_ApacheTransform_h_