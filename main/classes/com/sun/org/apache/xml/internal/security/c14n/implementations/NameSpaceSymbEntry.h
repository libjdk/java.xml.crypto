#ifndef _com_sun_org_apache_xml_internal_security_c14n_implementations_NameSpaceSymbEntry_h_
#define _com_sun_org_apache_xml_internal_security_c14n_implementations_NameSpaceSymbEntry_h_
//$ class com.sun.org.apache.xml.internal.security.c14n.implementations.NameSpaceSymbEntry
//$ extends java.lang.Cloneable

#include <java/lang/Cloneable.h>

namespace org {
	namespace w3c {
		namespace dom {
			class Attr;
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
							namespace c14n {
								namespace implementations {

class NameSpaceSymbEntry : public ::java::lang::Cloneable {
	$class(NameSpaceSymbEntry, $NO_CLASS_INIT, ::java::lang::Cloneable)
public:
	NameSpaceSymbEntry();
	void init$($String* name, ::org::w3c::dom::Attr* n, bool rendered, $String* prefix);
	virtual ::com::sun::org::apache::xml::internal::security::c14n::implementations::NameSpaceSymbEntry* clone() override;
	$String* prefix = nullptr;
	$String* uri = nullptr;
	::org::w3c::dom::Attr* n = nullptr;
	$String* lastrendered = nullptr;
	bool rendered = false;
};

								} // implementations
							} // c14n
						} // security
					} // internal
				} // xml
			} // apache
		} // org
	} // sun
} // com

#endif // _com_sun_org_apache_xml_internal_security_c14n_implementations_NameSpaceSymbEntry_h_