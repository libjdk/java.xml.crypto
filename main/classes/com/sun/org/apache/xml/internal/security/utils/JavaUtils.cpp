#include <com/sun/org/apache/xml/internal/security/utils/JavaUtils.h>

#include <com/sun/org/apache/xml/internal/security/utils/UnsyncByteArrayOutputStream.h>
#include <com/sun/org/slf4j/internal/Logger.h>
#include <com/sun/org/slf4j/internal/LoggerFactory.h>
#include <java/io/IOException.h>
#include <java/io/InputStream.h>
#include <java/io/OutputStream.h>
#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/Exception.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InstantiationException.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/NoSuchMethodException.h>
#include <java/lang/NullPointerException.h>
#include <java/lang/ReflectiveOperationException.h>
#include <java/lang/SecurityManager.h>
#include <java/lang/String.h>
#include <java/lang/System.h>
#include <java/lang/Throwable.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/nio/file/Files.h>
#include <java/nio/file/OpenOption.h>
#include <java/nio/file/Path.h>
#include <java/nio/file/Paths.h>
#include <java/security/BasicPermission.h>
#include <java/security/Permission.h>
#include <java/security/SecurityPermission.h>
#include <jcpp.h>

#undef LOG
#undef REGISTER_PERMISSION

using $OpenOptionArray = $Array<::java::nio::file::OpenOption>;
using $UnsyncByteArrayOutputStream = ::com::sun::org::apache::xml::internal::security::utils::UnsyncByteArrayOutputStream;
using $Logger = ::com::sun::org::slf4j::internal::Logger;
using $LoggerFactory = ::com::sun::org::slf4j::internal::LoggerFactory;
using $IOException = ::java::io::IOException;
using $InputStream = ::java::io::InputStream;
using $OutputStream = ::java::io::OutputStream;
using $ClassInfo = ::java::lang::ClassInfo;
using $Exception = ::java::lang::Exception;
using $FieldInfo = ::java::lang::FieldInfo;
using $InstantiationException = ::java::lang::InstantiationException;
using $MethodInfo = ::java::lang::MethodInfo;
using $NoSuchMethodException = ::java::lang::NoSuchMethodException;
using $NullPointerException = ::java::lang::NullPointerException;
using $ReflectiveOperationException = ::java::lang::ReflectiveOperationException;
using $SecurityManager = ::java::lang::SecurityManager;
using $Constructor = ::java::lang::reflect::Constructor;
using $Files = ::java::nio::file::Files;
using $OpenOption = ::java::nio::file::OpenOption;
using $Path = ::java::nio::file::Path;
using $Paths = ::java::nio::file::Paths;
using $BasicPermission = ::java::security::BasicPermission;
using $Permission = ::java::security::Permission;
using $SecurityPermission = ::java::security::SecurityPermission;

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xml {
					namespace internal {
						namespace security {
							namespace utils {

$FieldInfo _JavaUtils_FieldInfo_[] = {
	{"LOG", "Lcom/sun/org/slf4j/internal/Logger;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(JavaUtils, LOG)},
	{"REGISTER_PERMISSION", "Ljava/security/SecurityPermission;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(JavaUtils, REGISTER_PERMISSION)},
	{}
};

$MethodInfo _JavaUtils_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PRIVATE, $method(static_cast<void(JavaUtils::*)()>(&JavaUtils::init$))},
	{"checkRegisterPermission", "()V", nullptr, $PUBLIC | $STATIC, $method(static_cast<void(*)()>(&JavaUtils::checkRegisterPermission))},
	{"convertDsaASN1toXMLDSIG", "([BI)[B", nullptr, $PUBLIC | $STATIC, $method(static_cast<$bytes*(*)($bytes*,int32_t)>(&JavaUtils::convertDsaASN1toXMLDSIG)), "java.io.IOException"},
	{"convertDsaXMLDSIGtoASN1", "([BI)[B", nullptr, $PUBLIC | $STATIC, $method(static_cast<$bytes*(*)($bytes*,int32_t)>(&JavaUtils::convertDsaXMLDSIGtoASN1)), "java.io.IOException"},
	{"getBytesFromFile", "(Ljava/lang/String;)[B", nullptr, $PUBLIC | $STATIC, $method(static_cast<$bytes*(*)($String*)>(&JavaUtils::getBytesFromFile)), "java.io.FileNotFoundException,java.io.IOException"},
	{"getBytesFromStream", "(Ljava/io/InputStream;)[B", nullptr, $PUBLIC | $STATIC, $method(static_cast<$bytes*(*)($InputStream*)>(&JavaUtils::getBytesFromStream)), "java.io.IOException"},
	{"newInstanceWithEmptyConstructor", "(Ljava/lang/Class;)Ljava/lang/Object;", "<T:Ljava/lang/Object;>(Ljava/lang/Class<TT;>;)TT;", $PUBLIC | $STATIC, $method(static_cast<$Object*(*)($Class*)>(&JavaUtils::newInstanceWithEmptyConstructor)), "java.lang.InstantiationException,java.lang.IllegalAccessException,java.lang.reflect.InvocationTargetException"},
	{"writeBytesToFilename", "(Ljava/lang/String;[B)V", nullptr, $PUBLIC | $STATIC, $method(static_cast<void(*)($String*,$bytes*)>(&JavaUtils::writeBytesToFilename))},
	{}
};

$ClassInfo _JavaUtils_ClassInfo_ = {
	$PUBLIC | $FINAL | $ACC_SUPER,
	"com.sun.org.apache.xml.internal.security.utils.JavaUtils",
	"java.lang.Object",
	nullptr,
	_JavaUtils_FieldInfo_,
	_JavaUtils_MethodInfo_
};

$Object* allocate$JavaUtils($Class* clazz) {
	return $of($alloc(JavaUtils));
}

$Logger* JavaUtils::LOG = nullptr;
$SecurityPermission* JavaUtils::REGISTER_PERMISSION = nullptr;

void JavaUtils::init$() {
}

$bytes* JavaUtils::getBytesFromFile($String* fileName) {
	$init(JavaUtils);
	$useLocalCurrentObjectStackCache();
	$var($bytes, refBytes, nullptr);
	{
		$var($InputStream, inputStream, $Files::newInputStream($($Paths::get(fileName, $$new($StringArray, 0))), $$new($OpenOptionArray, 0)));
		{
			$var($Throwable, var$0, nullptr);
			try {
				try {
					$var($UnsyncByteArrayOutputStream, baos, $new($UnsyncByteArrayOutputStream));
					{
						$var($Throwable, var$1, nullptr);
						try {
							try {
								$var($bytes, buf, $new($bytes, 1024));
								int32_t len = 0;
								while ((len = $nc(inputStream)->read(buf)) > 0) {
									baos->write(buf, 0, len);
								}
								$assign(refBytes, baos->toByteArray());
							} catch ($Throwable&) {
								$var($Throwable, t$, $catch());
								try {
									baos->close();
								} catch ($Throwable&) {
									$var($Throwable, x2, $catch());
									t$->addSuppressed(x2);
								}
								$throw(t$);
							}
						} catch ($Throwable&) {
							$assign(var$1, $catch());
						} /*finally*/ {
							baos->close();
						}
						if (var$1 != nullptr) {
							$throw(var$1);
						}
					}
				} catch ($Throwable&) {
					$var($Throwable, t$, $catch());
					if (inputStream != nullptr) {
						try {
							inputStream->close();
						} catch ($Throwable&) {
							$var($Throwable, x2, $catch());
							t$->addSuppressed(x2);
						}
					}
					$throw(t$);
				}
			} catch ($Throwable&) {
				$assign(var$0, $catch());
			} /*finally*/ {
				if (inputStream != nullptr) {
					inputStream->close();
				}
			}
			if (var$0 != nullptr) {
				$throw(var$0);
			}
		}
	}
	return refBytes;
}

void JavaUtils::writeBytesToFilename($String* filename, $bytes* bytes) {
	$init(JavaUtils);
	$useLocalCurrentObjectStackCache();
	if (filename != nullptr && bytes != nullptr) {
		try {
			$var($OutputStream, outputStream, $Files::newOutputStream($($Paths::get(filename, $$new($StringArray, 0))), $$new($OpenOptionArray, 0)));
			{
				$var($Throwable, var$0, nullptr);
				try {
					try {
						$nc(outputStream)->write(bytes);
					} catch ($Throwable&) {
						$var($Throwable, t$, $catch());
						if (outputStream != nullptr) {
							try {
								outputStream->close();
							} catch ($Throwable&) {
								$var($Throwable, x2, $catch());
								t$->addSuppressed(x2);
							}
						}
						$throw(t$);
					}
				} catch ($Throwable&) {
					$assign(var$0, $catch());
				} /*finally*/ {
					if (outputStream != nullptr) {
						outputStream->close();
					}
				}
				if (var$0 != nullptr) {
					$throw(var$0);
				}
			}
		} catch ($IOException&) {
			$var($IOException, ex, $catch());
			$nc(JavaUtils::LOG)->debug($(ex->getMessage()), static_cast<$Throwable*>(ex));
		}
	} else {
		$nc(JavaUtils::LOG)->debug("writeBytesToFilename got null byte[] pointed"_s);
	}
}

$bytes* JavaUtils::getBytesFromStream($InputStream* inputStream) {
	$init(JavaUtils);
	$useLocalCurrentObjectStackCache();
	{
		$var($UnsyncByteArrayOutputStream, baos, $new($UnsyncByteArrayOutputStream));
		{
			$var($Throwable, var$0, nullptr);
			$var($bytes, var$2, nullptr);
			bool return$1 = false;
			try {
				try {
					$var($bytes, buf, $new($bytes, 4 * 1024));
					int32_t len = 0;
					while ((len = $nc(inputStream)->read(buf)) > 0) {
						baos->write(buf, 0, len);
					}
					$assign(var$2, baos->toByteArray());
					return$1 = true;
					goto $finally;
				} catch ($Throwable&) {
					$var($Throwable, t$, $catch());
					try {
						baos->close();
					} catch ($Throwable&) {
						$var($Throwable, x2, $catch());
						t$->addSuppressed(x2);
					}
					$throw(t$);
				}
			} catch ($Throwable&) {
				$assign(var$0, $catch());
			} $finally: {
				baos->close();
			}
			if (var$0 != nullptr) {
				$throw(var$0);
			}
			if (return$1) {
				return var$2;
			}
		}
	}
	$shouldNotReachHere();
}

$bytes* JavaUtils::convertDsaASN1toXMLDSIG($bytes* asn1Bytes, int32_t size) {
	$init(JavaUtils);
	if ($nc(asn1Bytes)->get(0) != 48 || $nc(asn1Bytes)->get(1) != asn1Bytes->length - 2 || $nc(asn1Bytes)->get(2) != 2) {
		$throwNew($IOException, "Invalid ASN.1 format of DSA signature"_s);
	}
	int8_t rLength = $nc(asn1Bytes)->get(3);
	int32_t i = 0;
	for (i = rLength; i > 0 && asn1Bytes->get(4 + rLength - i) == 0; --i) {
	}
	int8_t sLength = asn1Bytes->get(5 + rLength);
	int32_t j = 0;
	for (j = sLength; j > 0 && asn1Bytes->get(6 + rLength + sLength - j) == 0; --j) {
	}
	if (i > size || asn1Bytes->get(4 + rLength) != 2 || j > size) {
		$throwNew($IOException, "Invalid ASN.1 format of DSA signature"_s);
	} else {
		$var($bytes, xmldsigBytes, $new($bytes, size * 2));
		$System::arraycopy(asn1Bytes, 4 + rLength - i, xmldsigBytes, size - i, i);
		$System::arraycopy(asn1Bytes, 6 + rLength + sLength - j, xmldsigBytes, size * 2 - j, j);
		return xmldsigBytes;
	}
}

$bytes* JavaUtils::convertDsaXMLDSIGtoASN1($bytes* xmldsigBytes, int32_t size) {
	$init(JavaUtils);
	int32_t totalSize = size * 2;
	if ($nc(xmldsigBytes)->length != totalSize) {
		$throwNew($IOException, "Invalid XMLDSIG format of DSA signature"_s);
	}
	int32_t i = 0;
	for (i = size; i > 0 && $nc(xmldsigBytes)->get(size - i) == 0; --i) {
	}
	int32_t j = i;
	if ($nc(xmldsigBytes)->get(size - i) < 0) {
		++j;
	}
	int32_t k = 0;
	for (k = size; k > 0 && $nc(xmldsigBytes)->get(totalSize - k) == 0; --k) {
	}
	int32_t l = k;
	if ($nc(xmldsigBytes)->get(totalSize - k) < 0) {
		++l;
	}
	$var($bytes, asn1Bytes, $new($bytes, 6 + j + l));
	asn1Bytes->set(0, (int8_t)48);
	asn1Bytes->set(1, (int8_t)(4 + j + l));
	asn1Bytes->set(2, (int8_t)2);
	asn1Bytes->set(3, (int8_t)j);
	$System::arraycopy(xmldsigBytes, size - i, asn1Bytes, 4 + j - i, i);
	asn1Bytes->set(4 + j, (int8_t)2);
	asn1Bytes->set(5 + j, (int8_t)l);
	$System::arraycopy(xmldsigBytes, totalSize - k, asn1Bytes, 6 + j + l - k, k);
	return asn1Bytes;
}

void JavaUtils::checkRegisterPermission() {
	$init(JavaUtils);
	$var($SecurityManager, sm, $System::getSecurityManager());
	if (sm != nullptr) {
		sm->checkPermission(JavaUtils::REGISTER_PERMISSION);
	}
}

$Object* JavaUtils::newInstanceWithEmptyConstructor($Class* clazz) {
	$init(JavaUtils);
	$useLocalCurrentObjectStackCache();
	$beforeCallerSensitive();
	try {
		return $of($nc($($nc(clazz)->getDeclaredConstructor($$new($ClassArray, 0))))->newInstance($$new($ObjectArray, 0)));
	} catch ($NoSuchMethodException&) {
		$var($NoSuchMethodException, e, $catch());
		$throw($cast($InstantiationException, $($$new($InstantiationException, $($nc(clazz)->getName()))->initCause(e))));
	}
	$shouldNotReachHere();
}

void clinit$JavaUtils($Class* class$) {
	$assignStatic(JavaUtils::LOG, $LoggerFactory::getLogger(JavaUtils::class$));
	$assignStatic(JavaUtils::REGISTER_PERMISSION, $new($SecurityPermission, "com.sun.org.apache.xml.internal.security.register"_s));
}

JavaUtils::JavaUtils() {
}

$Class* JavaUtils::load$($String* name, bool initialize) {
	$loadClass(JavaUtils, name, initialize, &_JavaUtils_ClassInfo_, clinit$JavaUtils, allocate$JavaUtils);
	return class$;
}

$Class* JavaUtils::class$ = nullptr;

							} // utils
						} // security
					} // internal
				} // xml
			} // apache
		} // org
	} // sun
} // com