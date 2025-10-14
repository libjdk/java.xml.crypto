#ifndef _org_jcp_xml_dsig_internal_dom_Policy_h_
#define _org_jcp_xml_dsig_internal_dom_Policy_h_
//$ class org.jcp.xml.dsig.internal.dom.Policy
//$ extends java.lang.Object

#include <java/lang/Object.h>

namespace java {
	namespace util {
		class Map;
		class Set;
	}
}

namespace org {
	namespace jcp {
		namespace xml {
			namespace dsig {
				namespace internal {
					namespace dom {

class Policy : public ::java::lang::Object {
	$class(Policy, 0, ::java::lang::Object)
public:
	Policy();
	void init$();
	static ::java::util::Set* disabledAlgs();
	static ::java::util::Set* disabledReferenceUriSchemes();
	static void error($String* entry);
	static void initialize();
	static $String* lambda$initialize$0();
	static int32_t maxReferences();
	static int32_t maxTransforms();
	static int32_t minKeySize($String* type);
	static bool restrictAlg($String* alg);
	static bool restrictDuplicateIds();
	static bool restrictKey($String* type, int32_t size);
	static bool restrictNumReferences(int32_t numRefs);
	static bool restrictNumTransforms(int32_t numTrans);
	static bool restrictReferenceUriScheme($String* uri);
	static bool restrictRetrievalMethodLoops();
	static ::java::util::Set* disallowedAlgs;
	static int32_t maxTrans;
	static int32_t maxRefs;
	static ::java::util::Set* disallowedRefUriSchemes;
	static ::java::util::Map* minKeyMap;
	static bool noDuplicateIds;
	static bool noRMLoops;
};

					} // dom
				} // internal
			} // dsig
		} // xml
	} // jcp
} // org

#endif // _org_jcp_xml_dsig_internal_dom_Policy_h_