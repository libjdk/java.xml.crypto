#ifndef _org_jcp_xml_dsig_internal_dom_ApacheCanonicalizer_h_
#define _org_jcp_xml_dsig_internal_dom_ApacheCanonicalizer_h_
//$ class org.jcp.xml.dsig.internal.dom.ApacheCanonicalizer
//$ extends javax.xml.crypto.dsig.TransformService

#include <java/lang/Array.h>
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
							namespace c14n {
								class Canonicalizer;
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
					class C14NMethodParameterSpec;
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

class ApacheCanonicalizer : public ::javax::xml::crypto::dsig::TransformService {
	$class(ApacheCanonicalizer, 0, ::javax::xml::crypto::dsig::TransformService)
public:
	ApacheCanonicalizer();
	using ::javax::xml::crypto::dsig::TransformService::init;
	void init$();
	virtual ::javax::xml::crypto::Data* canonicalize(::javax::xml::crypto::Data* data, ::javax::xml::crypto::XMLCryptoContext* xc);
	virtual ::javax::xml::crypto::Data* canonicalize(::javax::xml::crypto::Data* data, ::javax::xml::crypto::XMLCryptoContext* xc, ::java::io::OutputStream* os);
	$bytes* getC14nBytes(::java::io::OutputStream* outputStream, bool isByteArrayOutputStream);
	virtual ::java::security::spec::AlgorithmParameterSpec* getParameterSpec() override;
	virtual void init(::javax::xml::crypto::XMLStructure* parent, ::javax::xml::crypto::XMLCryptoContext* context) override;
	virtual bool isFeatureSupported($String* feature) override;
	virtual void marshalParams(::javax::xml::crypto::XMLStructure* parent, ::javax::xml::crypto::XMLCryptoContext* context) override;
	using ::javax::xml::crypto::dsig::TransformService::transform;
	virtual ::javax::xml::crypto::Data* transform(::javax::xml::crypto::Data* data, ::javax::xml::crypto::XMLCryptoContext* xc, ::java::io::OutputStream* os) override;
	static ::com::sun::org::slf4j::internal::Logger* LOG;
	::com::sun::org::apache::xml::internal::security::c14n::Canonicalizer* canonicalizer = nullptr;
	::com::sun::org::apache::xml::internal::security::transforms::Transform* apacheTransform = nullptr;
	$String* inclusiveNamespaces = nullptr;
	::javax::xml::crypto::dsig::spec::C14NMethodParameterSpec* params = nullptr;
	::org::w3c::dom::Document* ownerDoc = nullptr;
	::org::w3c::dom::Element* transformElem = nullptr;
};

					} // dom
				} // internal
			} // dsig
		} // xml
	} // jcp
} // org

#pragma pop_macro("LOG")

#endif // _org_jcp_xml_dsig_internal_dom_ApacheCanonicalizer_h_