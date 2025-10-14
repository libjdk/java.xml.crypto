#ifndef _org_jcp_xml_dsig_internal_dom_Utils_h_
#define _org_jcp_xml_dsig_internal_dom_Utils_h_
//$ class org.jcp.xml.dsig.internal.dom.Utils
//$ extends java.lang.Object

#include <java/lang/Array.h>

namespace java {
	namespace io {
		class InputStream;
	}
}
namespace java {
	namespace util {
		class Iterator;
		class Set;
	}
}
namespace javax {
	namespace xml {
		namespace crypto {
			class XMLCryptoContext;
		}
	}
}

namespace org {
	namespace jcp {
		namespace xml {
			namespace dsig {
				namespace internal {
					namespace dom {

class Utils : public ::java::lang::Object {
	$class(Utils, $NO_CLASS_INIT, ::java::lang::Object)
public:
	Utils();
	void init$();
	static bool getBoolean(::javax::xml::crypto::XMLCryptoContext* xc, $String* name);
	static $String* parseIdFromSameDocumentURI($String* uri);
	static $bytes* readBytesFromStream(::java::io::InputStream* is);
	static bool sameDocumentURI($String* uri);
	static bool secureValidation(::javax::xml::crypto::XMLCryptoContext* xc);
	static ::java::util::Set* toNodeSet(::java::util::Iterator* i);
};

					} // dom
				} // internal
			} // dsig
		} // xml
	} // jcp
} // org

#endif // _org_jcp_xml_dsig_internal_dom_Utils_h_