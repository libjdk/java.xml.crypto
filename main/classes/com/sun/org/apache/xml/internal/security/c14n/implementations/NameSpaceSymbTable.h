#ifndef _com_sun_org_apache_xml_internal_security_c14n_implementations_NameSpaceSymbTable_h_
#define _com_sun_org_apache_xml_internal_security_c14n_implementations_NameSpaceSymbTable_h_
//$ class com.sun.org.apache.xml.internal.security.c14n.implementations.NameSpaceSymbTable
//$ extends java.lang.Object

#include <java/lang/Object.h>

#pragma push_macro("LOG")
#undef LOG
#pragma push_macro("XMLNS")
#undef XMLNS

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xml {
					namespace internal {
						namespace security {
							namespace c14n {
								namespace implementations {
									class SymbMap;
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
	namespace util {
		class Collection;
		class List;
	}
}
namespace org {
	namespace w3c {
		namespace dom {
			class Attr;
			class Node;
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

class NameSpaceSymbTable : public ::java::lang::Object {
	$class(NameSpaceSymbTable, 0, ::java::lang::Object)
public:
	NameSpaceSymbTable();
	void init$();
	virtual bool addMapping($String* prefix, $String* uri, ::org::w3c::dom::Attr* n);
	virtual ::org::w3c::dom::Node* addMappingAndRender($String* prefix, $String* uri, ::org::w3c::dom::Attr* n);
	virtual int32_t getLevel();
	virtual ::org::w3c::dom::Attr* getMapping($String* prefix);
	virtual ::org::w3c::dom::Attr* getMappingWithoutRendered($String* prefix);
	virtual void getUnrenderedNodes(::java::util::Collection* result);
	void needsClone();
	virtual void outputNodePop();
	virtual void outputNodePush();
	virtual void pop();
	virtual void push();
	virtual void removeMapping($String* prefix);
	virtual void removeMappingIfNotRender($String* prefix);
	virtual bool removeMappingIfRender($String* prefix);
	static ::com::sun::org::slf4j::internal::Logger* LOG;
	static $String* XMLNS;
	static ::com::sun::org::apache::xml::internal::security::c14n::implementations::SymbMap* initialMap;
	::com::sun::org::apache::xml::internal::security::c14n::implementations::SymbMap* symb = nullptr;
	::java::util::List* level = nullptr;
	bool cloned = false;
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

#pragma pop_macro("LOG")
#pragma pop_macro("XMLNS")

#endif // _com_sun_org_apache_xml_internal_security_c14n_implementations_NameSpaceSymbTable_h_