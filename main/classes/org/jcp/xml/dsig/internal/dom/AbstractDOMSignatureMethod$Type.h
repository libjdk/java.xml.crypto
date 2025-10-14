#ifndef _org_jcp_xml_dsig_internal_dom_AbstractDOMSignatureMethod$Type_h_
#define _org_jcp_xml_dsig_internal_dom_AbstractDOMSignatureMethod$Type_h_
//$ class org.jcp.xml.dsig.internal.dom.AbstractDOMSignatureMethod$Type
//$ extends java.lang.Enum

#include <java/lang/Array.h>
#include <java/lang/Enum.h>

#pragma push_macro("DSA")
#undef DSA
#pragma push_macro("ECDSA")
#undef ECDSA
#pragma push_macro("HMAC")
#undef HMAC
#pragma push_macro("RSA")
#undef RSA

namespace org {
	namespace jcp {
		namespace xml {
			namespace dsig {
				namespace internal {
					namespace dom {

class AbstractDOMSignatureMethod$Type : public ::java::lang::Enum {
	$class(AbstractDOMSignatureMethod$Type, 0, ::java::lang::Enum)
public:
	AbstractDOMSignatureMethod$Type();
	static $Array<::org::jcp::xml::dsig::internal::dom::AbstractDOMSignatureMethod$Type>* $values();
	void init$($String* $enum$name, int32_t $enum$ordinal);
	static ::org::jcp::xml::dsig::internal::dom::AbstractDOMSignatureMethod$Type* valueOf($String* name);
	static $Array<::org::jcp::xml::dsig::internal::dom::AbstractDOMSignatureMethod$Type>* values();
	static ::org::jcp::xml::dsig::internal::dom::AbstractDOMSignatureMethod$Type* DSA;
	static ::org::jcp::xml::dsig::internal::dom::AbstractDOMSignatureMethod$Type* RSA;
	static ::org::jcp::xml::dsig::internal::dom::AbstractDOMSignatureMethod$Type* ECDSA;
	static ::org::jcp::xml::dsig::internal::dom::AbstractDOMSignatureMethod$Type* HMAC;
	static $Array<::org::jcp::xml::dsig::internal::dom::AbstractDOMSignatureMethod$Type>* $VALUES;
};

					} // dom
				} // internal
			} // dsig
		} // xml
	} // jcp
} // org

#pragma pop_macro("DSA")
#pragma pop_macro("ECDSA")
#pragma pop_macro("HMAC")
#pragma pop_macro("RSA")

#endif // _org_jcp_xml_dsig_internal_dom_AbstractDOMSignatureMethod$Type_h_