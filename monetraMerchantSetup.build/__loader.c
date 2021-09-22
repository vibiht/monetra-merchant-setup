
/* Code to register embedded modules for meta path based loading if any. */

#include <Python.h>

#include "nuitka/constants_blob.h"

#include "nuitka/unfreezing.h"

/* Type bool */
#ifndef __cplusplus
#include "stdbool.h"
#endif

#if 704 > 0
static unsigned char *bytecode_data[704];
#else
static unsigned char **bytecode_data = NULL;
#endif

/* Table for lookup to find compiled or bytecode modules included in this
 * binary or module, or put along this binary as extension modules. We do
 * our own loading for each of these.
 */
extern PyObject *modulecode_OpenSSL(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_OpenSSL$SSL(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_OpenSSL$_util(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_OpenSSL$crypto(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_OpenSSL$version(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode___main__(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode__distutils_hack(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode__distutils_hack$override(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_backports(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_brotli(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_brotli$brotli(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_certifi(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_certifi$core(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_charset_normalizer(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_charset_normalizer$api(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_charset_normalizer$assets(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_charset_normalizer$cd(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_charset_normalizer$constant(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_charset_normalizer$legacy(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_charset_normalizer$md(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_charset_normalizer$models(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_charset_normalizer$utils(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_charset_normalizer$version(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_cryptography(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_cryptography$__about__(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_cryptography$exceptions(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_cryptography$hazmat(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_cryptography$hazmat$_der(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_cryptography$hazmat$_oid(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_cryptography$hazmat$_types(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_cryptography$hazmat$backends(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_cryptography$hazmat$backends$interfaces(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_cryptography$hazmat$backends$openssl(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_cryptography$hazmat$backends$openssl$aead(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_cryptography$hazmat$backends$openssl$backend(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_cryptography$hazmat$backends$openssl$ciphers(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_cryptography$hazmat$backends$openssl$cmac(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_cryptography$hazmat$backends$openssl$decode_asn1(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_cryptography$hazmat$backends$openssl$dh(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_cryptography$hazmat$backends$openssl$dsa(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_cryptography$hazmat$backends$openssl$ec(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_cryptography$hazmat$backends$openssl$ed25519(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_cryptography$hazmat$backends$openssl$ed448(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_cryptography$hazmat$backends$openssl$encode_asn1(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_cryptography$hazmat$backends$openssl$hashes(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_cryptography$hazmat$backends$openssl$hmac(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_cryptography$hazmat$backends$openssl$ocsp(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_cryptography$hazmat$backends$openssl$poly1305(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_cryptography$hazmat$backends$openssl$rsa(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_cryptography$hazmat$backends$openssl$utils(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_cryptography$hazmat$backends$openssl$x25519(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_cryptography$hazmat$backends$openssl$x448(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_cryptography$hazmat$backends$openssl$x509(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_cryptography$hazmat$bindings(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_cryptography$hazmat$bindings$openssl(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_cryptography$hazmat$bindings$openssl$_conditional(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_cryptography$hazmat$bindings$openssl$binding(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_cryptography$hazmat$primitives(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_cryptography$hazmat$primitives$_asymmetric(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_cryptography$hazmat$primitives$_cipheralgorithm(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_cryptography$hazmat$primitives$_serialization(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_cryptography$hazmat$primitives$asymmetric(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_cryptography$hazmat$primitives$asymmetric$dh(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_cryptography$hazmat$primitives$asymmetric$dsa(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_cryptography$hazmat$primitives$asymmetric$ec(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_cryptography$hazmat$primitives$asymmetric$ed25519(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_cryptography$hazmat$primitives$asymmetric$ed448(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_cryptography$hazmat$primitives$asymmetric$padding(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_cryptography$hazmat$primitives$asymmetric$rsa(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_cryptography$hazmat$primitives$asymmetric$utils(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_cryptography$hazmat$primitives$asymmetric$x25519(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_cryptography$hazmat$primitives$asymmetric$x448(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_cryptography$hazmat$primitives$ciphers(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_cryptography$hazmat$primitives$ciphers$aead(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_cryptography$hazmat$primitives$ciphers$algorithms(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_cryptography$hazmat$primitives$ciphers$base(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_cryptography$hazmat$primitives$ciphers$modes(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_cryptography$hazmat$primitives$constant_time(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_cryptography$hazmat$primitives$hashes(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_cryptography$hazmat$primitives$kdf(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_cryptography$hazmat$primitives$kdf$scrypt(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_cryptography$hazmat$primitives$serialization(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_cryptography$hazmat$primitives$serialization$base(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_cryptography$hazmat$primitives$serialization$pkcs7(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_cryptography$hazmat$primitives$serialization$ssh(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_cryptography$utils(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_cryptography$x509(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_cryptography$x509$base(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_cryptography$x509$certificate_transparency(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_cryptography$x509$extensions(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_cryptography$x509$general_name(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_cryptography$x509$name(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_cryptography$x509$ocsp(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_cryptography$x509$oid(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_dateutil(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_dateutil$_common(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_dateutil$_version(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_dateutil$easter(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_dateutil$parser(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_dateutil$parser$_parser(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_dateutil$parser$isoparser(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_dateutil$relativedelta(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_dateutil$rrule(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_dateutil$tz(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_dateutil$tz$_common(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_dateutil$tz$_factories(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_dateutil$tz$tz(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_dateutil$tz$win(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_dateutil$zoneinfo(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_idna(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_idna$core(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_idna$idnadata(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_idna$intranges(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_idna$package_data(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_idna$uts46data(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_mkl(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_monetraFunctions(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_numexpr(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_numexpr$__config__(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_numexpr$cpuinfo(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_numexpr$expressions(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_numexpr$necompiler(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_numexpr$tests(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_numexpr$tests$test_numexpr(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_numexpr$utils(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_numexpr$version(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_numpy(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_numpy$__config__(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_numpy$_distributor_init(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_numpy$_globals(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_numpy$_pytesttester(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_numpy$compat(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_numpy$compat$_inspect(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_numpy$compat$py3k(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_numpy$core(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_numpy$core$_add_newdocs(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_numpy$core$_add_newdocs_scalars(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_numpy$core$_asarray(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_numpy$core$_dtype(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_numpy$core$_dtype_ctypes(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_numpy$core$_exceptions(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_numpy$core$_internal(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_numpy$core$_methods(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_numpy$core$_string_helpers(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_numpy$core$_type_aliases(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_numpy$core$_ufunc_config(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_numpy$core$arrayprint(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_numpy$core$defchararray(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_numpy$core$einsumfunc(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_numpy$core$fromnumeric(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_numpy$core$function_base(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_numpy$core$getlimits(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_numpy$core$machar(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_numpy$core$memmap(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_numpy$core$multiarray(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_numpy$core$numeric(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_numpy$core$numerictypes(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_numpy$core$overrides(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_numpy$core$records(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_numpy$core$shape_base(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_numpy$core$umath(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_numpy$ctypeslib(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_numpy$fft(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_numpy$fft$_pocketfft(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_numpy$fft$helper(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_numpy$lib(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_numpy$lib$_datasource(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_numpy$lib$_iotools(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_numpy$lib$_version(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_numpy$lib$arraypad(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_numpy$lib$arraysetops(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_numpy$lib$arrayterator(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_numpy$lib$format(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_numpy$lib$function_base(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_numpy$lib$histograms(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_numpy$lib$index_tricks(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_numpy$lib$mixins(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_numpy$lib$nanfunctions(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_numpy$lib$npyio(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_numpy$lib$polynomial(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_numpy$lib$scimath(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_numpy$lib$shape_base(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_numpy$lib$stride_tricks(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_numpy$lib$twodim_base(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_numpy$lib$type_check(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_numpy$lib$ufunclike(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_numpy$lib$utils(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_numpy$linalg(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_numpy$linalg$linalg(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_numpy$ma(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_numpy$ma$core(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_numpy$ma$extras(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_numpy$ma$mrecords(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_numpy$matrixlib(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_numpy$matrixlib$defmatrix(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_numpy$polynomial(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_numpy$polynomial$_polybase(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_numpy$polynomial$chebyshev(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_numpy$polynomial$hermite(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_numpy$polynomial$hermite_e(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_numpy$polynomial$laguerre(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_numpy$polynomial$legendre(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_numpy$polynomial$polynomial(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_numpy$polynomial$polyutils(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_numpy$random(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_numpy$random$_pickle(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_numpy$version(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pandas(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pandas$_config(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pandas$_config$config(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pandas$_config$dates(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pandas$_config$display(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pandas$_config$localization(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pandas$_libs(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pandas$_libs$tslibs(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pandas$_libs$window(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pandas$_testing(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pandas$_testing$_io(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pandas$_testing$_random(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pandas$_testing$_warnings(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pandas$_testing$asserters(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pandas$_testing$compat(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pandas$_testing$contexts(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pandas$_typing(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pandas$_version(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pandas$api(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pandas$api$extensions(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pandas$api$indexers(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pandas$api$types(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pandas$arrays(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pandas$compat(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pandas$compat$_optional(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pandas$compat$chainmap(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pandas$compat$numpy(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pandas$compat$numpy$function(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pandas$compat$pickle_compat(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pandas$compat$pyarrow(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pandas$core(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pandas$core$accessor(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pandas$core$aggregation(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pandas$core$algorithms(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pandas$core$api(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pandas$core$apply(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pandas$core$array_algos(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pandas$core$array_algos$masked_reductions(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pandas$core$array_algos$putmask(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pandas$core$array_algos$quantile(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pandas$core$array_algos$replace(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pandas$core$array_algos$take(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pandas$core$array_algos$transforms(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pandas$core$arraylike(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pandas$core$arrays(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pandas$core$arrays$_arrow_utils(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pandas$core$arrays$_mixins(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pandas$core$arrays$_ranges(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pandas$core$arrays$base(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pandas$core$arrays$boolean(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pandas$core$arrays$categorical(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pandas$core$arrays$datetimelike(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pandas$core$arrays$datetimes(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pandas$core$arrays$floating(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pandas$core$arrays$integer(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pandas$core$arrays$interval(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pandas$core$arrays$masked(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pandas$core$arrays$numeric(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pandas$core$arrays$numpy_(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pandas$core$arrays$period(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pandas$core$arrays$sparse(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pandas$core$arrays$sparse$accessor(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pandas$core$arrays$sparse$array(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pandas$core$arrays$sparse$dtype(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pandas$core$arrays$sparse$scipy_sparse(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pandas$core$arrays$string_(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pandas$core$arrays$string_arrow(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pandas$core$arrays$timedeltas(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pandas$core$base(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pandas$core$common(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pandas$core$computation(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pandas$core$computation$align(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pandas$core$computation$api(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pandas$core$computation$check(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pandas$core$computation$common(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pandas$core$computation$engines(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pandas$core$computation$eval(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pandas$core$computation$expr(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pandas$core$computation$expressions(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pandas$core$computation$ops(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pandas$core$computation$parsing(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pandas$core$computation$pytables(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pandas$core$computation$scope(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pandas$core$config_init(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pandas$core$construction(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pandas$core$describe(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pandas$core$dtypes(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pandas$core$dtypes$api(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pandas$core$dtypes$base(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pandas$core$dtypes$cast(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pandas$core$dtypes$common(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pandas$core$dtypes$concat(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pandas$core$dtypes$dtypes(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pandas$core$dtypes$generic(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pandas$core$dtypes$inference(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pandas$core$dtypes$missing(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pandas$core$flags(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pandas$core$frame(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pandas$core$generic(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pandas$core$groupby(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pandas$core$groupby$base(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pandas$core$groupby$categorical(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pandas$core$groupby$generic(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pandas$core$groupby$groupby(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pandas$core$groupby$grouper(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pandas$core$groupby$numba_(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pandas$core$groupby$ops(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pandas$core$indexers(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pandas$core$indexes(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pandas$core$indexes$accessors(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pandas$core$indexes$api(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pandas$core$indexes$base(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pandas$core$indexes$category(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pandas$core$indexes$datetimelike(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pandas$core$indexes$datetimes(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pandas$core$indexes$extension(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pandas$core$indexes$frozen(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pandas$core$indexes$interval(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pandas$core$indexes$multi(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pandas$core$indexes$numeric(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pandas$core$indexes$period(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pandas$core$indexes$range(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pandas$core$indexes$timedeltas(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pandas$core$indexing(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pandas$core$internals(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pandas$core$internals$api(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pandas$core$internals$array_manager(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pandas$core$internals$base(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pandas$core$internals$blocks(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pandas$core$internals$concat(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pandas$core$internals$construction(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pandas$core$internals$managers(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pandas$core$internals$ops(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pandas$core$missing(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pandas$core$nanops(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pandas$core$ops(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pandas$core$ops$array_ops(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pandas$core$ops$common(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pandas$core$ops$dispatch(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pandas$core$ops$docstrings(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pandas$core$ops$invalid(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pandas$core$ops$mask_ops(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pandas$core$ops$methods(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pandas$core$ops$missing(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pandas$core$resample(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pandas$core$reshape(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pandas$core$reshape$api(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pandas$core$reshape$concat(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pandas$core$reshape$melt(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pandas$core$reshape$merge(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pandas$core$reshape$pivot(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pandas$core$reshape$reshape(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pandas$core$reshape$tile(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pandas$core$reshape$util(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pandas$core$roperator(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pandas$core$series(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pandas$core$shared_docs(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pandas$core$sorting(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pandas$core$strings(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pandas$core$strings$accessor(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pandas$core$strings$base(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pandas$core$strings$object_array(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pandas$core$tools(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pandas$core$tools$datetimes(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pandas$core$tools$numeric(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pandas$core$tools$timedeltas(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pandas$core$tools$times(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pandas$core$util(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pandas$core$util$hashing(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pandas$core$util$numba_(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pandas$core$window(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pandas$core$window$common(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pandas$core$window$doc(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pandas$core$window$ewm(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pandas$core$window$expanding(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pandas$core$window$indexers(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pandas$core$window$numba_(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pandas$core$window$online(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pandas$core$window$rolling(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pandas$errors(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pandas$io(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pandas$io$api(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pandas$io$clipboard(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pandas$io$clipboards(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pandas$io$common(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pandas$io$date_converters(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pandas$io$excel(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pandas$io$excel$_base(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pandas$io$excel$_odfreader(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pandas$io$excel$_odswriter(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pandas$io$excel$_openpyxl(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pandas$io$excel$_pyxlsb(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pandas$io$excel$_util(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pandas$io$excel$_xlrd(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pandas$io$excel$_xlsxwriter(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pandas$io$excel$_xlwt(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pandas$io$feather_format(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pandas$io$formats(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pandas$io$formats$_color_data(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pandas$io$formats$console(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pandas$io$formats$css(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pandas$io$formats$csvs(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pandas$io$formats$excel(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pandas$io$formats$format(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pandas$io$formats$html(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pandas$io$formats$info(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pandas$io$formats$latex(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pandas$io$formats$printing(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pandas$io$formats$string(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pandas$io$formats$style(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pandas$io$formats$style_render(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pandas$io$formats$xml(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pandas$io$gbq(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pandas$io$html(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pandas$io$json(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pandas$io$json$_json(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pandas$io$json$_normalize(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pandas$io$json$_table_schema(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pandas$io$orc(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pandas$io$parquet(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pandas$io$parsers(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pandas$io$parsers$base_parser(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pandas$io$parsers$c_parser_wrapper(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pandas$io$parsers$python_parser(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pandas$io$parsers$readers(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pandas$io$pickle(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pandas$io$pytables(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pandas$io$sas(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pandas$io$sas$sas7bdat(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pandas$io$sas$sas_constants(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pandas$io$sas$sas_xport(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pandas$io$sas$sasreader(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pandas$io$spss(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pandas$io$sql(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pandas$io$stata(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pandas$io$xml(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pandas$plotting(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pandas$plotting$_core(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pandas$plotting$_misc(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pandas$testing(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pandas$tseries(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pandas$tseries$api(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pandas$tseries$frequencies(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pandas$tseries$offsets(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pandas$util(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pandas$util$_decorators(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pandas$util$_exceptions(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pandas$util$_print_versions(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pandas$util$_tester(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pandas$util$_validators(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pandas$util$testing(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pandas$util$version(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pytz(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pytz$exceptions(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pytz$lazy(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pytz$tzfile(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pytz$tzinfo(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_requests(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_requests$__version__(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_requests$_internal_utils(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_requests$adapters(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_requests$api(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_requests$auth(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_requests$certs(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_requests$compat(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_requests$cookies(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_requests$exceptions(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_requests$hooks(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_requests$models(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_requests$packages(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_requests$sessions(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_requests$status_codes(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_requests$structures(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_requests$utils(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_six(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_socks(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_urllib3(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_urllib3$_collections(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_urllib3$_version(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_urllib3$connection(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_urllib3$connectionpool(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_urllib3$contrib(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_urllib3$contrib$_appengine_environ(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_urllib3$contrib$appengine(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_urllib3$contrib$pyopenssl(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_urllib3$contrib$socks(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_urllib3$exceptions(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_urllib3$fields(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_urllib3$filepost(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_urllib3$packages(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_urllib3$packages$backports(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_urllib3$packages$backports$makefile(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_urllib3$packages$six(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_urllib3$packages$ssl_match_hostname(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_urllib3$packages$ssl_match_hostname$_implementation(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_urllib3$poolmanager(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_urllib3$request(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_urllib3$response(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_urllib3$util(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_urllib3$util$connection(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_urllib3$util$proxy(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_urllib3$util$queue(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_urllib3$util$request(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_urllib3$util$response(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_urllib3$util$retry(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_urllib3$util$ssl_(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_urllib3$util$ssltransport(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_urllib3$util$timeout(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_urllib3$util$url(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_urllib3$util$wait(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_win_inet_pton(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);

static struct Nuitka_MetaPathBasedLoaderEntry meta_path_loader_entries[] = {
    {"OpenSSL", modulecode_OpenSSL, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_PACKAGE_FLAG},
    {"OpenSSL.SSL", modulecode_OpenSSL$SSL, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"OpenSSL._util", modulecode_OpenSSL$_util, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"OpenSSL.crypto", modulecode_OpenSSL$crypto, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"OpenSSL.version", modulecode_OpenSSL$version, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"__future__", NULL, 0, 4123, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"__main__", modulecode___main__, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"_asyncio", NULL, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_SHLIB_FLAG},
    {"_bootlocale", NULL, 1, 1208, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"_bz2", NULL, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_SHLIB_FLAG},
    {"_cffi_backend", NULL, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_SHLIB_FLAG},
    {"_collections_abc", NULL, 2, 28706, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"_compat_pickle", NULL, 3, 5466, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"_compression", NULL, 4, 4111, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"_ctypes", NULL, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_SHLIB_FLAG},
    {"_decimal", NULL, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_SHLIB_FLAG},
    {"_distutils_hack", modulecode__distutils_hack, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_PACKAGE_FLAG},
    {"_distutils_hack.override", modulecode__distutils_hack$override, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"_dummy_thread", NULL, 5, 6002, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"_elementtree", NULL, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_SHLIB_FLAG},
    {"_hashlib", NULL, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_SHLIB_FLAG},
    {"_lzma", NULL, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_SHLIB_FLAG},
    {"_markupbase", NULL, 6, 7755, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"_msi", NULL, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_SHLIB_FLAG},
    {"_multiprocessing", NULL, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_SHLIB_FLAG},
    {"_osx_support", NULL, 7, 11558, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"_overlapped", NULL, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_SHLIB_FLAG},
    {"_py_abc", NULL, 8, 4635, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"_pyio", NULL, 9, 74044, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"_queue", NULL, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_SHLIB_FLAG},
    {"_sitebuiltins", NULL, 10, 3446, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"_socket", NULL, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_SHLIB_FLAG},
    {"_sqlite3", NULL, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_SHLIB_FLAG},
    {"_ssl", NULL, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_SHLIB_FLAG},
    {"_strptime", NULL, 11, 16009, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"_threading_local", NULL, 12, 6411, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"_tkinter", NULL, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_SHLIB_FLAG},
    {"_weakrefset", NULL, 13, 7565, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"abc", NULL, 14, 5299, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"aifc", NULL, 15, 25439, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"argparse", NULL, 16, 62242, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"ast", NULL, 17, 16728, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"asynchat", NULL, 18, 6816, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"asyncio", NULL, 19, 706, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG | NUITKA_PACKAGE_FLAG},
    {"asyncio.base_events", NULL, 20, 50985, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"asyncio.base_futures", NULL, 21, 1863, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"asyncio.base_subprocess", NULL, 22, 9381, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"asyncio.base_tasks", NULL, 23, 1909, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"asyncio.constants", NULL, 24, 546, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"asyncio.coroutines", NULL, 25, 6619, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"asyncio.events", NULL, 26, 28022, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"asyncio.exceptions", NULL, 27, 2514, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"asyncio.format_helpers", NULL, 28, 2297, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"asyncio.futures", NULL, 29, 11158, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"asyncio.locks", NULL, 30, 16333, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"asyncio.log", NULL, 31, 191, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"asyncio.proactor_events", NULL, 32, 24110, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"asyncio.protocols", NULL, 33, 8579, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"asyncio.queues", NULL, 34, 8346, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"asyncio.runners", NULL, 35, 1912, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"asyncio.selector_events", NULL, 36, 29650, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"asyncio.sslproto", NULL, 37, 21583, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"asyncio.staggered", NULL, 38, 4083, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"asyncio.streams", NULL, 39, 20605, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"asyncio.subprocess", NULL, 40, 7323, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"asyncio.tasks", NULL, 41, 24246, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"asyncio.transports", NULL, 42, 12227, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"asyncio.trsock", NULL, 43, 8448, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"asyncio.windows_events", NULL, 44, 24548, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"asyncio.windows_utils", NULL, 45, 4436, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"asyncore", NULL, 46, 15993, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"backports", modulecode_backports, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_PACKAGE_FLAG},
    {"base64", NULL, 47, 17036, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"bdb", NULL, 48, 24886, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"binhex", NULL, 49, 12099, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"bisect", NULL, 50, 2319, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"brotli", modulecode_brotli, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_PACKAGE_FLAG},
    {"brotli._brotli", NULL, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_SHLIB_FLAG},
    {"brotli.brotli", modulecode_brotli$brotli, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"bz2", NULL, 51, 11410, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"cProfile", NULL, 52, 5445, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"calendar", NULL, 53, 27029, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"certifi", modulecode_certifi, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_PACKAGE_FLAG},
    {"certifi.core", modulecode_certifi$core, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"cgi", NULL, 54, 26509, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"cgitb", NULL, 55, 10115, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"charset_normalizer", modulecode_charset_normalizer, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_PACKAGE_FLAG},
    {"charset_normalizer.api", modulecode_charset_normalizer$api, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"charset_normalizer.assets", modulecode_charset_normalizer$assets, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_PACKAGE_FLAG},
    {"charset_normalizer.cd", modulecode_charset_normalizer$cd, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"charset_normalizer.constant", modulecode_charset_normalizer$constant, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"charset_normalizer.legacy", modulecode_charset_normalizer$legacy, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"charset_normalizer.md", modulecode_charset_normalizer$md, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"charset_normalizer.models", modulecode_charset_normalizer$models, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"charset_normalizer.utils", modulecode_charset_normalizer$utils, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"charset_normalizer.version", modulecode_charset_normalizer$version, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"chunk", NULL, 56, 4804, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"cmd", NULL, 57, 12591, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"code", NULL, 58, 9878, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"codecs", NULL, 59, 33921, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"codeop", NULL, 60, 6382, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"collections", NULL, 61, 46392, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG | NUITKA_PACKAGE_FLAG},
    {"collections.abc", NULL, 62, 28705, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"colorsys", NULL, 63, 3205, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"compileall", NULL, 64, 9375, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"concurrent", NULL, 65, 88, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG | NUITKA_PACKAGE_FLAG},
    {"concurrent.futures", NULL, 66, 1064, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG | NUITKA_PACKAGE_FLAG},
    {"concurrent.futures._base", NULL, 67, 21905, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"concurrent.futures.process", NULL, 68, 20265, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"concurrent.futures.thread", NULL, 69, 5783, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"configparser", NULL, 70, 45683, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"contextlib", NULL, 71, 20194, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"contextvars", NULL, 72, 208, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"copy", NULL, 73, 6952, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"copyreg", NULL, 74, 4283, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"cryptography", modulecode_cryptography, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_PACKAGE_FLAG},
    {"cryptography.__about__", modulecode_cryptography$__about__, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"cryptography.exceptions", modulecode_cryptography$exceptions, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"cryptography.hazmat", modulecode_cryptography$hazmat, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_PACKAGE_FLAG},
    {"cryptography.hazmat._der", modulecode_cryptography$hazmat$_der, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"cryptography.hazmat._oid", modulecode_cryptography$hazmat$_oid, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"cryptography.hazmat._types", modulecode_cryptography$hazmat$_types, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"cryptography.hazmat.backends", modulecode_cryptography$hazmat$backends, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_PACKAGE_FLAG},
    {"cryptography.hazmat.backends.interfaces", modulecode_cryptography$hazmat$backends$interfaces, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"cryptography.hazmat.backends.openssl", modulecode_cryptography$hazmat$backends$openssl, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_PACKAGE_FLAG},
    {"cryptography.hazmat.backends.openssl.aead", modulecode_cryptography$hazmat$backends$openssl$aead, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"cryptography.hazmat.backends.openssl.backend", modulecode_cryptography$hazmat$backends$openssl$backend, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"cryptography.hazmat.backends.openssl.ciphers", modulecode_cryptography$hazmat$backends$openssl$ciphers, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"cryptography.hazmat.backends.openssl.cmac", modulecode_cryptography$hazmat$backends$openssl$cmac, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"cryptography.hazmat.backends.openssl.decode_asn1", modulecode_cryptography$hazmat$backends$openssl$decode_asn1, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"cryptography.hazmat.backends.openssl.dh", modulecode_cryptography$hazmat$backends$openssl$dh, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"cryptography.hazmat.backends.openssl.dsa", modulecode_cryptography$hazmat$backends$openssl$dsa, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"cryptography.hazmat.backends.openssl.ec", modulecode_cryptography$hazmat$backends$openssl$ec, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"cryptography.hazmat.backends.openssl.ed25519", modulecode_cryptography$hazmat$backends$openssl$ed25519, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"cryptography.hazmat.backends.openssl.ed448", modulecode_cryptography$hazmat$backends$openssl$ed448, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"cryptography.hazmat.backends.openssl.encode_asn1", modulecode_cryptography$hazmat$backends$openssl$encode_asn1, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"cryptography.hazmat.backends.openssl.hashes", modulecode_cryptography$hazmat$backends$openssl$hashes, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"cryptography.hazmat.backends.openssl.hmac", modulecode_cryptography$hazmat$backends$openssl$hmac, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"cryptography.hazmat.backends.openssl.ocsp", modulecode_cryptography$hazmat$backends$openssl$ocsp, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"cryptography.hazmat.backends.openssl.poly1305", modulecode_cryptography$hazmat$backends$openssl$poly1305, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"cryptography.hazmat.backends.openssl.rsa", modulecode_cryptography$hazmat$backends$openssl$rsa, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"cryptography.hazmat.backends.openssl.utils", modulecode_cryptography$hazmat$backends$openssl$utils, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"cryptography.hazmat.backends.openssl.x25519", modulecode_cryptography$hazmat$backends$openssl$x25519, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"cryptography.hazmat.backends.openssl.x448", modulecode_cryptography$hazmat$backends$openssl$x448, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"cryptography.hazmat.backends.openssl.x509", modulecode_cryptography$hazmat$backends$openssl$x509, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"cryptography.hazmat.bindings", modulecode_cryptography$hazmat$bindings, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_PACKAGE_FLAG},
    {"cryptography.hazmat.bindings._openssl", NULL, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_SHLIB_FLAG},
    {"cryptography.hazmat.bindings.openssl", modulecode_cryptography$hazmat$bindings$openssl, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_PACKAGE_FLAG},
    {"cryptography.hazmat.bindings.openssl._conditional", modulecode_cryptography$hazmat$bindings$openssl$_conditional, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"cryptography.hazmat.bindings.openssl.binding", modulecode_cryptography$hazmat$bindings$openssl$binding, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"cryptography.hazmat.primitives", modulecode_cryptography$hazmat$primitives, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_PACKAGE_FLAG},
    {"cryptography.hazmat.primitives._asymmetric", modulecode_cryptography$hazmat$primitives$_asymmetric, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"cryptography.hazmat.primitives._cipheralgorithm", modulecode_cryptography$hazmat$primitives$_cipheralgorithm, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"cryptography.hazmat.primitives._serialization", modulecode_cryptography$hazmat$primitives$_serialization, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"cryptography.hazmat.primitives.asymmetric", modulecode_cryptography$hazmat$primitives$asymmetric, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_PACKAGE_FLAG},
    {"cryptography.hazmat.primitives.asymmetric.dh", modulecode_cryptography$hazmat$primitives$asymmetric$dh, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"cryptography.hazmat.primitives.asymmetric.dsa", modulecode_cryptography$hazmat$primitives$asymmetric$dsa, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"cryptography.hazmat.primitives.asymmetric.ec", modulecode_cryptography$hazmat$primitives$asymmetric$ec, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"cryptography.hazmat.primitives.asymmetric.ed25519", modulecode_cryptography$hazmat$primitives$asymmetric$ed25519, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"cryptography.hazmat.primitives.asymmetric.ed448", modulecode_cryptography$hazmat$primitives$asymmetric$ed448, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"cryptography.hazmat.primitives.asymmetric.padding", modulecode_cryptography$hazmat$primitives$asymmetric$padding, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"cryptography.hazmat.primitives.asymmetric.rsa", modulecode_cryptography$hazmat$primitives$asymmetric$rsa, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"cryptography.hazmat.primitives.asymmetric.utils", modulecode_cryptography$hazmat$primitives$asymmetric$utils, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"cryptography.hazmat.primitives.asymmetric.x25519", modulecode_cryptography$hazmat$primitives$asymmetric$x25519, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"cryptography.hazmat.primitives.asymmetric.x448", modulecode_cryptography$hazmat$primitives$asymmetric$x448, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"cryptography.hazmat.primitives.ciphers", modulecode_cryptography$hazmat$primitives$ciphers, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_PACKAGE_FLAG},
    {"cryptography.hazmat.primitives.ciphers.aead", modulecode_cryptography$hazmat$primitives$ciphers$aead, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"cryptography.hazmat.primitives.ciphers.algorithms", modulecode_cryptography$hazmat$primitives$ciphers$algorithms, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"cryptography.hazmat.primitives.ciphers.base", modulecode_cryptography$hazmat$primitives$ciphers$base, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"cryptography.hazmat.primitives.ciphers.modes", modulecode_cryptography$hazmat$primitives$ciphers$modes, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"cryptography.hazmat.primitives.constant_time", modulecode_cryptography$hazmat$primitives$constant_time, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"cryptography.hazmat.primitives.hashes", modulecode_cryptography$hazmat$primitives$hashes, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"cryptography.hazmat.primitives.kdf", modulecode_cryptography$hazmat$primitives$kdf, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_PACKAGE_FLAG},
    {"cryptography.hazmat.primitives.kdf.scrypt", modulecode_cryptography$hazmat$primitives$kdf$scrypt, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"cryptography.hazmat.primitives.serialization", modulecode_cryptography$hazmat$primitives$serialization, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_PACKAGE_FLAG},
    {"cryptography.hazmat.primitives.serialization.base", modulecode_cryptography$hazmat$primitives$serialization$base, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"cryptography.hazmat.primitives.serialization.pkcs7", modulecode_cryptography$hazmat$primitives$serialization$pkcs7, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"cryptography.hazmat.primitives.serialization.ssh", modulecode_cryptography$hazmat$primitives$serialization$ssh, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"cryptography.utils", modulecode_cryptography$utils, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"cryptography.x509", modulecode_cryptography$x509, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_PACKAGE_FLAG},
    {"cryptography.x509.base", modulecode_cryptography$x509$base, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"cryptography.x509.certificate_transparency", modulecode_cryptography$x509$certificate_transparency, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"cryptography.x509.extensions", modulecode_cryptography$x509$extensions, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"cryptography.x509.general_name", modulecode_cryptography$x509$general_name, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"cryptography.x509.name", modulecode_cryptography$x509$name, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"cryptography.x509.ocsp", modulecode_cryptography$x509$ocsp, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"cryptography.x509.oid", modulecode_cryptography$x509$oid, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"csv", NULL, 75, 11875, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"ctypes", NULL, 76, 16328, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG | NUITKA_PACKAGE_FLAG},
    {"ctypes._aix", NULL, 77, 9809, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"ctypes._endian", NULL, 78, 1894, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"ctypes.macholib", NULL, 79, 255, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG | NUITKA_PACKAGE_FLAG},
    {"ctypes.macholib.dyld", NULL, 80, 4701, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"ctypes.macholib.dylib", NULL, 81, 1881, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"ctypes.macholib.framework", NULL, 82, 2161, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"ctypes.util", NULL, 83, 8419, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"ctypes.wintypes", NULL, 84, 5068, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"dataclasses", NULL, 85, 23618, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"datetime", NULL, 86, 57138, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"dateutil", modulecode_dateutil, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_PACKAGE_FLAG},
    {"dateutil._common", modulecode_dateutil$_common, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"dateutil._version", modulecode_dateutil$_version, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"dateutil.easter", modulecode_dateutil$easter, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"dateutil.parser", modulecode_dateutil$parser, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_PACKAGE_FLAG},
    {"dateutil.parser._parser", modulecode_dateutil$parser$_parser, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"dateutil.parser.isoparser", modulecode_dateutil$parser$isoparser, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"dateutil.relativedelta", modulecode_dateutil$relativedelta, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"dateutil.rrule", modulecode_dateutil$rrule, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"dateutil.tz", modulecode_dateutil$tz, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_PACKAGE_FLAG},
    {"dateutil.tz._common", modulecode_dateutil$tz$_common, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"dateutil.tz._factories", modulecode_dateutil$tz$_factories, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"dateutil.tz.tz", modulecode_dateutil$tz$tz, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"dateutil.tz.win", modulecode_dateutil$tz$win, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"dateutil.zoneinfo", modulecode_dateutil$zoneinfo, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_PACKAGE_FLAG},
    {"dbm", NULL, 87, 4148, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG | NUITKA_PACKAGE_FLAG},
    {"dbm.dumb", NULL, 88, 7738, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"decimal", NULL, 89, 160697, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"difflib", NULL, 90, 59403, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"dis", NULL, 91, 15773, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"distutils", NULL, 92, 340, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG | NUITKA_PACKAGE_FLAG},
    {"distutils._msvccompiler", NULL, 93, 12931, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"distutils.archive_util", NULL, 94, 6504, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"distutils.bcppcompiler", NULL, 95, 6488, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"distutils.ccompiler", NULL, 96, 33262, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"distutils.cmd", NULL, 97, 13913, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"distutils.command", NULL, 98, 499, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG | NUITKA_PACKAGE_FLAG},
    {"distutils.command.bdist", NULL, 99, 3631, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"distutils.command.bdist_dumb", NULL, 100, 3557, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"distutils.command.bdist_msi", NULL, 101, 19588, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"distutils.command.bdist_rpm", NULL, 102, 12393, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"distutils.command.bdist_wininst", NULL, 103, 8454, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"distutils.command.build", NULL, 104, 3846, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"distutils.command.build_clib", NULL, 105, 4779, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"distutils.command.build_ext", NULL, 106, 16102, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"distutils.command.build_py", NULL, 107, 10445, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"distutils.command.build_scripts", NULL, 108, 4289, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"distutils.command.check", NULL, 109, 4850, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"distutils.command.clean", NULL, 110, 2065, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"distutils.command.config", NULL, 111, 10192, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"distutils.command.install", NULL, 112, 13537, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"distutils.command.install_data", NULL, 113, 2254, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"distutils.command.install_egg_info", NULL, 114, 2961, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"distutils.command.install_headers", NULL, 115, 1673, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"distutils.command.install_lib", NULL, 116, 5078, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"distutils.command.install_scripts", NULL, 117, 2106, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"distutils.command.register", NULL, 118, 8420, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"distutils.command.sdist", NULL, 119, 14481, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"distutils.command.upload", NULL, 120, 4904, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"distutils.config", NULL, 121, 3474, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"distutils.core", NULL, 122, 6579, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"distutils.cygwinccompiler", NULL, 123, 8710, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"distutils.debug", NULL, 124, 159, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"distutils.dep_util", NULL, 125, 2679, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"distutils.dir_util", NULL, 126, 5788, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"distutils.dist", NULL, 127, 34457, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"distutils.errors", NULL, 128, 5215, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"distutils.extension", NULL, 129, 6888, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"distutils.fancy_getopt", NULL, 130, 10621, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"distutils.file_util", NULL, 131, 5898, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"distutils.filelist", NULL, 132, 9832, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"distutils.log", NULL, 133, 2280, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"distutils.msvc9compiler", NULL, 134, 17475, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"distutils.msvccompiler", NULL, 135, 14688, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"distutils.spawn", NULL, 136, 5071, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"distutils.sysconfig", NULL, 137, 12196, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"distutils.text_file", NULL, 138, 8404, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"distutils.unixccompiler", NULL, 139, 6765, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"distutils.util", NULL, 140, 15511, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"distutils.version", NULL, 141, 7276, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"distutils.versionpredicate", NULL, 142, 5100, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"doctest", NULL, 143, 75939, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"dummy_threading", NULL, 144, 1075, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"email", NULL, 145, 1647, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG | NUITKA_PACKAGE_FLAG},
    {"email._encoded_words", NULL, 146, 5651, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"email._header_value_parser", NULL, 147, 79898, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"email._parseaddr", NULL, 148, 12419, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"email._policybase", NULL, 149, 14775, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"email.base64mime", NULL, 150, 3200, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"email.charset", NULL, 151, 11424, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"email.contentmanager", NULL, 152, 7326, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"email.encoders", NULL, 153, 1577, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"email.errors", NULL, 154, 5870, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"email.feedparser", NULL, 155, 10607, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"email.generator", NULL, 156, 12489, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"email.header", NULL, 157, 16404, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"email.headerregistry", NULL, 158, 22009, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"email.iterators", NULL, 159, 1885, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"email.message", NULL, 160, 37843, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"email.mime", NULL, 161, 88, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG | NUITKA_PACKAGE_FLAG},
    {"email.mime.application", NULL, 162, 1424, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"email.mime.audio", NULL, 163, 2589, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"email.mime.base", NULL, 164, 1006, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"email.mime.image", NULL, 165, 1869, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"email.mime.message", NULL, 166, 1247, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"email.mime.multipart", NULL, 167, 1467, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"email.mime.nonmultipart", NULL, 168, 729, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"email.mime.text", NULL, 169, 1276, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"email.parser", NULL, 170, 5687, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"email.policy", NULL, 171, 9623, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"email.quoprimime", NULL, 172, 7643, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"email.utils", NULL, 173, 9507, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"encodings", NULL, 174, 3859, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG | NUITKA_PACKAGE_FLAG},
    {"encodings.aliases", NULL, 175, 6295, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"encodings.ascii", NULL, 176, 1846, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"encodings.base64_codec", NULL, 177, 2364, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"encodings.big5", NULL, 178, 1374, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"encodings.big5hkscs", NULL, 179, 1384, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"encodings.bz2_codec", NULL, 180, 3255, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"encodings.charmap", NULL, 181, 2856, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"encodings.cp037", NULL, 182, 2387, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"encodings.cp1006", NULL, 183, 2463, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"encodings.cp1026", NULL, 184, 2391, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"encodings.cp1125", NULL, 185, 8094, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"encodings.cp1140", NULL, 186, 2377, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"encodings.cp1250", NULL, 187, 2414, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"encodings.cp1251", NULL, 188, 2411, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"encodings.cp1252", NULL, 189, 2414, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"encodings.cp1253", NULL, 190, 2427, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"encodings.cp1254", NULL, 191, 2416, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"encodings.cp1255", NULL, 192, 2435, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"encodings.cp1256", NULL, 193, 2413, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"encodings.cp1257", NULL, 194, 2421, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"encodings.cp1258", NULL, 195, 2419, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"encodings.cp273", NULL, 196, 2373, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"encodings.cp424", NULL, 197, 2417, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"encodings.cp437", NULL, 198, 7811, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"encodings.cp500", NULL, 199, 2387, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"encodings.cp720", NULL, 200, 2484, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"encodings.cp737", NULL, 201, 8133, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"encodings.cp775", NULL, 202, 7841, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"encodings.cp850", NULL, 203, 7472, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"encodings.cp852", NULL, 204, 7849, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"encodings.cp855", NULL, 205, 8102, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"encodings.cp856", NULL, 206, 2449, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"encodings.cp857", NULL, 207, 7452, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"encodings.cp858", NULL, 208, 7442, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"encodings.cp860", NULL, 209, 7790, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"encodings.cp861", NULL, 210, 7805, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"encodings.cp862", NULL, 211, 7994, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"encodings.cp863", NULL, 212, 7805, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"encodings.cp864", NULL, 213, 7949, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"encodings.cp865", NULL, 214, 7805, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"encodings.cp866", NULL, 215, 8138, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"encodings.cp869", NULL, 216, 7829, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"encodings.cp874", NULL, 217, 2515, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"encodings.cp875", NULL, 218, 2384, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"encodings.cp932", NULL, 219, 1376, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"encodings.cp949", NULL, 220, 1376, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"encodings.cp950", NULL, 221, 1376, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"encodings.euc_jis_2004", NULL, 222, 1390, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"encodings.euc_jisx0213", NULL, 223, 1390, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"encodings.euc_jp", NULL, 224, 1378, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"encodings.euc_kr", NULL, 225, 1378, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"encodings.gb18030", NULL, 226, 1380, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"encodings.gb2312", NULL, 227, 1378, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"encodings.gbk", NULL, 228, 1372, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"encodings.hex_codec", NULL, 229, 2351, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"encodings.hp_roman8", NULL, 230, 2588, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"encodings.hz", NULL, 231, 1370, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"encodings.idna", NULL, 232, 5582, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"encodings.iso2022_jp", NULL, 233, 1391, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"encodings.iso2022_jp_1", NULL, 234, 1395, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"encodings.iso2022_jp_2", NULL, 235, 1395, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"encodings.iso2022_jp_2004", NULL, 236, 1401, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"encodings.iso2022_jp_3", NULL, 237, 1395, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"encodings.iso2022_jp_ext", NULL, 238, 1399, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"encodings.iso2022_kr", NULL, 239, 1391, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"encodings.iso8859_1", NULL, 240, 2386, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"encodings.iso8859_10", NULL, 241, 2391, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"encodings.iso8859_11", NULL, 242, 2485, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"encodings.iso8859_13", NULL, 243, 2394, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"encodings.iso8859_14", NULL, 244, 2412, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"encodings.iso8859_15", NULL, 245, 2391, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"encodings.iso8859_16", NULL, 246, 2393, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"encodings.iso8859_2", NULL, 247, 2386, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"encodings.iso8859_3", NULL, 248, 2393, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"encodings.iso8859_4", NULL, 249, 2386, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"encodings.iso8859_5", NULL, 250, 2387, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"encodings.iso8859_6", NULL, 251, 2431, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"encodings.iso8859_7", NULL, 252, 2394, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"encodings.iso8859_8", NULL, 253, 2425, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"encodings.iso8859_9", NULL, 254, 2386, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"encodings.johab", NULL, 255, 1376, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"encodings.koi8_r", NULL, 256, 2438, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"encodings.koi8_t", NULL, 257, 2349, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"encodings.koi8_u", NULL, 258, 2424, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"encodings.kz1048", NULL, 259, 2401, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"encodings.latin_1", NULL, 260, 1858, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"encodings.mac_arabic", NULL, 261, 7705, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"encodings.mac_centeuro", NULL, 262, 2425, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"encodings.mac_croatian", NULL, 263, 2433, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"encodings.mac_cyrillic", NULL, 264, 2423, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"encodings.mac_farsi", NULL, 265, 2367, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"encodings.mac_greek", NULL, 266, 2407, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"encodings.mac_iceland", NULL, 267, 2426, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"encodings.mac_latin2", NULL, 268, 2567, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"encodings.mac_roman", NULL, 269, 2424, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"encodings.mac_romanian", NULL, 270, 2434, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"encodings.mac_turkish", NULL, 271, 2427, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"encodings.mbcs", NULL, 272, 1676, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"encodings.oem", NULL, 273, 1489, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"encodings.palmos", NULL, 274, 2414, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"encodings.ptcp154", NULL, 275, 2508, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"encodings.punycode", NULL, 276, 6280, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"encodings.quopri_codec", NULL, 277, 2380, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"encodings.raw_unicode_escape", NULL, 278, 1727, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"encodings.rot_13", NULL, 279, 2966, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"encodings.shift_jis", NULL, 280, 1384, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"encodings.shift_jis_2004", NULL, 281, 1394, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"encodings.shift_jisx0213", NULL, 282, 1394, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"encodings.tis_620", NULL, 283, 2476, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"encodings.undefined", NULL, 284, 2060, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"encodings.unicode_escape", NULL, 285, 1707, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"encodings.utf_16", NULL, 286, 4837, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"encodings.utf_16_be", NULL, 287, 1615, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"encodings.utf_16_le", NULL, 288, 1615, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"encodings.utf_32", NULL, 289, 4730, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"encodings.utf_32_be", NULL, 290, 1508, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"encodings.utf_32_le", NULL, 291, 1508, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"encodings.utf_7", NULL, 292, 1536, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"encodings.utf_8", NULL, 293, 1595, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"encodings.utf_8_sig", NULL, 294, 4511, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"encodings.uu_codec", NULL, 295, 3214, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"encodings.zlib_codec", NULL, 296, 3074, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"enum", NULL, 297, 25927, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"filecmp", NULL, 298, 8392, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"fileinput", NULL, 299, 13338, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"fnmatch", NULL, 300, 3320, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"formatter", NULL, 301, 17510, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"fractions", NULL, 302, 18704, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"ftplib", NULL, 303, 27972, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"functools", NULL, 304, 27866, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"genericpath", NULL, 305, 3966, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"getopt", NULL, 306, 6236, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"getpass", NULL, 307, 4143, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"gettext", NULL, 308, 17848, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"glob", NULL, 309, 4308, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"gzip", NULL, 310, 18149, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"hashlib", NULL, 311, 6692, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"heapq", NULL, 312, 14035, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"hmac", NULL, 313, 6353, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"html", NULL, 314, 3574, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG | NUITKA_PACKAGE_FLAG},
    {"html.entities", NULL, 315, 50494, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"html.parser", NULL, 316, 11163, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"http", NULL, 317, 6020, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG | NUITKA_PACKAGE_FLAG},
    {"http.client", NULL, 318, 34872, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"http.cookiejar", NULL, 319, 53607, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"http.cookies", NULL, 320, 15233, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"http.server", NULL, 321, 34357, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"idna", modulecode_idna, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_PACKAGE_FLAG},
    {"idna.core", modulecode_idna$core, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"idna.idnadata", modulecode_idna$idnadata, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"idna.intranges", modulecode_idna$intranges, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"idna.package_data", modulecode_idna$package_data, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"idna.uts46data", modulecode_idna$uts46data, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"imaplib", NULL, 322, 41307, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"imghdr", NULL, 323, 4083, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"imp", NULL, 324, 9774, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"importlib", NULL, 325, 3714, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG | NUITKA_PACKAGE_FLAG},
    {"importlib._bootstrap", NULL, 326, 28570, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"importlib._bootstrap_external", NULL, 327, 45152, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"importlib.abc", NULL, 328, 13538, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"importlib.machinery", NULL, 329, 927, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"importlib.metadata", NULL, 330, 20841, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"importlib.resources", NULL, 331, 6475, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"importlib.util", NULL, 332, 9257, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"inspect", NULL, 333, 80558, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"io", NULL, 334, 3419, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"ipaddress", NULL, 335, 59851, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"json", NULL, 336, 12564, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG | NUITKA_PACKAGE_FLAG},
    {"json.decoder", NULL, 337, 9809, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"json.encoder", NULL, 338, 11136, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"json.scanner", NULL, 339, 1916, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"json.tool", NULL, 340, 1861, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"keyword", NULL, 341, 963, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"lib2to3", NULL, 342, 85, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG | NUITKA_PACKAGE_FLAG},
    {"lib2to3.btm_matcher", NULL, 343, 4842, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"lib2to3.btm_utils", NULL, 344, 6115, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"lib2to3.fixer_base", NULL, 345, 6218, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"lib2to3.fixer_util", NULL, 346, 12163, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"lib2to3.fixes", NULL, 347, 91, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG | NUITKA_PACKAGE_FLAG},
    {"lib2to3.fixes.fix_apply", NULL, 348, 1638, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"lib2to3.fixes.fix_asserts", NULL, 349, 1237, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"lib2to3.fixes.fix_basestring", NULL, 350, 621, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"lib2to3.fixes.fix_buffer", NULL, 351, 766, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"lib2to3.fixes.fix_dict", NULL, 352, 3293, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"lib2to3.fixes.fix_except", NULL, 353, 2776, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"lib2to3.fixes.fix_exec", NULL, 354, 1107, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"lib2to3.fixes.fix_execfile", NULL, 355, 1655, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"lib2to3.fixes.fix_exitfunc", NULL, 356, 2264, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"lib2to3.fixes.fix_filter", NULL, 357, 2402, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"lib2to3.fixes.fix_funcattrs", NULL, 358, 934, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"lib2to3.fixes.fix_future", NULL, 359, 742, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"lib2to3.fixes.fix_getcwdu", NULL, 360, 746, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"lib2to3.fixes.fix_has_key", NULL, 361, 2897, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"lib2to3.fixes.fix_idioms", NULL, 362, 3879, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"lib2to3.fixes.fix_import", NULL, 363, 2745, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"lib2to3.fixes.fix_imports", NULL, 364, 4353, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"lib2to3.fixes.fix_imports2", NULL, 365, 504, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"lib2to3.fixes.fix_input", NULL, 366, 908, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"lib2to3.fixes.fix_intern", NULL, 367, 1092, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"lib2to3.fixes.fix_isinstance", NULL, 368, 1509, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"lib2to3.fixes.fix_itertools", NULL, 369, 1508, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"lib2to3.fixes.fix_itertools_imports", NULL, 370, 1536, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"lib2to3.fixes.fix_long", NULL, 371, 663, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"lib2to3.fixes.fix_map", NULL, 372, 3055, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"lib2to3.fixes.fix_metaclass", NULL, 373, 5305, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"lib2to3.fixes.fix_methodattrs", NULL, 374, 896, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"lib2to3.fixes.fix_ne", NULL, 375, 769, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"lib2to3.fixes.fix_next", NULL, 376, 3041, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"lib2to3.fixes.fix_nonzero", NULL, 377, 881, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"lib2to3.fixes.fix_numliterals", NULL, 378, 981, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"lib2to3.fixes.fix_operator", NULL, 379, 4178, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"lib2to3.fixes.fix_paren", NULL, 380, 1348, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"lib2to3.fixes.fix_print", NULL, 381, 2301, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"lib2to3.fixes.fix_raise", NULL, 382, 2211, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"lib2to3.fixes.fix_raw_input", NULL, 383, 753, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"lib2to3.fixes.fix_reduce", NULL, 384, 1086, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"lib2to3.fixes.fix_reload", NULL, 385, 1104, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"lib2to3.fixes.fix_renames", NULL, 386, 1965, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"lib2to3.fixes.fix_repr", NULL, 387, 803, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"lib2to3.fixes.fix_set_literal", NULL, 388, 1641, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"lib2to3.fixes.fix_standarderror", NULL, 389, 678, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"lib2to3.fixes.fix_sys_exc", NULL, 390, 1369, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"lib2to3.fixes.fix_throw", NULL, 391, 1766, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"lib2to3.fixes.fix_tuple_params", NULL, 392, 4549, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"lib2to3.fixes.fix_types", NULL, 393, 1795, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"lib2to3.fixes.fix_unicode", NULL, 394, 1507, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"lib2to3.fixes.fix_urllib", NULL, 395, 5957, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"lib2to3.fixes.fix_ws_comma", NULL, 396, 1077, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"lib2to3.fixes.fix_xrange", NULL, 397, 2487, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"lib2to3.fixes.fix_xreadlines", NULL, 398, 1081, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"lib2to3.fixes.fix_zip", NULL, 399, 1541, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"lib2to3.main", NULL, 400, 8573, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"lib2to3.patcomp", NULL, 401, 5604, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"lib2to3.pgen2", NULL, 402, 121, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG | NUITKA_PACKAGE_FLAG},
    {"lib2to3.pgen2.driver", NULL, 403, 5106, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"lib2to3.pgen2.grammar", NULL, 404, 5630, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"lib2to3.pgen2.literals", NULL, 405, 1519, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"lib2to3.pgen2.parse", NULL, 406, 6463, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"lib2to3.pgen2.pgen", NULL, 407, 9741, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"lib2to3.pgen2.token", NULL, 408, 1852, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"lib2to3.pgen2.tokenize", NULL, 409, 15237, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"lib2to3.pygram", NULL, 410, 1225, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"lib2to3.pytree", NULL, 411, 24307, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"lib2to3.refactor", NULL, 412, 20405, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"linecache", NULL, 413, 3832, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"locale", NULL, 414, 34654, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"logging", NULL, 415, 65234, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG | NUITKA_PACKAGE_FLAG},
    {"logging.config", NULL, 416, 23189, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"logging.handlers", NULL, 417, 43163, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"lzma", NULL, 418, 11983, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"mailbox", NULL, 419, 60229, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"mailcap", NULL, 420, 6441, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"mimetypes", NULL, 421, 15996, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"mkl", modulecode_mkl, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_PACKAGE_FLAG},
    {"mkl._mklinit", NULL, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_SHLIB_FLAG},
    {"mkl._py_mkl_service", NULL, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_SHLIB_FLAG},
    {"modulefinder", NULL, 422, 16080, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"monetraFunctions", modulecode_monetraFunctions, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"msilib", NULL, 423, 15965, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG | NUITKA_PACKAGE_FLAG},
    {"msilib.schema", NULL, 424, 52135, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"msilib.sequence", NULL, 425, 2565, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"msilib.text", NULL, 426, 8427, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"multiprocessing", NULL, 427, 618, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG | NUITKA_PACKAGE_FLAG},
    {"multiprocessing.connection", NULL, 428, 25199, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"multiprocessing.context", NULL, 429, 12983, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"multiprocessing.dummy", NULL, 430, 3859, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG | NUITKA_PACKAGE_FLAG},
    {"multiprocessing.dummy.connection", NULL, 431, 2513, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"multiprocessing.forkserver", NULL, 432, 8324, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"multiprocessing.heap", NULL, 433, 7602, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"multiprocessing.managers", NULL, 434, 41511, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"multiprocessing.pool", NULL, 435, 24990, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"multiprocessing.popen_spawn_win32", NULL, 436, 3426, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"multiprocessing.process", NULL, 437, 10966, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"multiprocessing.queues", NULL, 438, 9519, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"multiprocessing.reduction", NULL, 439, 8168, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"multiprocessing.resource_sharer", NULL, 440, 5221, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"multiprocessing.resource_tracker", NULL, 441, 5150, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"multiprocessing.shared_memory", NULL, 442, 14355, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"multiprocessing.sharedctypes", NULL, 443, 7014, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"multiprocessing.spawn", NULL, 444, 6661, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"multiprocessing.synchronize", NULL, 445, 11256, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"multiprocessing.util", NULL, 446, 11451, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"netrc", NULL, 447, 3742, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"nntplib", NULL, 448, 33939, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"ntpath", NULL, 449, 14622, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"nturl2path", NULL, 450, 1709, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"numbers", NULL, 451, 12167, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"numexpr", modulecode_numexpr, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_PACKAGE_FLAG},
    {"numexpr.__config__", modulecode_numexpr$__config__, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"numexpr.cpuinfo", modulecode_numexpr$cpuinfo, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"numexpr.expressions", modulecode_numexpr$expressions, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"numexpr.interpreter", NULL, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_SHLIB_FLAG},
    {"numexpr.necompiler", modulecode_numexpr$necompiler, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"numexpr.tests", modulecode_numexpr$tests, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_PACKAGE_FLAG},
    {"numexpr.tests.test_numexpr", modulecode_numexpr$tests$test_numexpr, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"numexpr.utils", modulecode_numexpr$utils, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"numexpr.version", modulecode_numexpr$version, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"numpy", modulecode_numpy, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_PACKAGE_FLAG},
    {"numpy.__config__", modulecode_numpy$__config__, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"numpy._distributor_init", modulecode_numpy$_distributor_init, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"numpy._globals", modulecode_numpy$_globals, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"numpy._pytesttester", modulecode_numpy$_pytesttester, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"numpy.compat", modulecode_numpy$compat, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_PACKAGE_FLAG},
    {"numpy.compat._inspect", modulecode_numpy$compat$_inspect, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"numpy.compat.py3k", modulecode_numpy$compat$py3k, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"numpy.core", modulecode_numpy$core, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_PACKAGE_FLAG},
    {"numpy.core._add_newdocs", modulecode_numpy$core$_add_newdocs, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"numpy.core._add_newdocs_scalars", modulecode_numpy$core$_add_newdocs_scalars, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"numpy.core._asarray", modulecode_numpy$core$_asarray, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"numpy.core._dtype", modulecode_numpy$core$_dtype, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"numpy.core._dtype_ctypes", modulecode_numpy$core$_dtype_ctypes, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"numpy.core._exceptions", modulecode_numpy$core$_exceptions, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"numpy.core._internal", modulecode_numpy$core$_internal, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"numpy.core._methods", modulecode_numpy$core$_methods, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"numpy.core._multiarray_tests", NULL, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_SHLIB_FLAG},
    {"numpy.core._multiarray_umath", NULL, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_SHLIB_FLAG},
    {"numpy.core._string_helpers", modulecode_numpy$core$_string_helpers, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"numpy.core._type_aliases", modulecode_numpy$core$_type_aliases, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"numpy.core._ufunc_config", modulecode_numpy$core$_ufunc_config, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"numpy.core.arrayprint", modulecode_numpy$core$arrayprint, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"numpy.core.defchararray", modulecode_numpy$core$defchararray, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"numpy.core.einsumfunc", modulecode_numpy$core$einsumfunc, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"numpy.core.fromnumeric", modulecode_numpy$core$fromnumeric, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"numpy.core.function_base", modulecode_numpy$core$function_base, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"numpy.core.getlimits", modulecode_numpy$core$getlimits, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"numpy.core.machar", modulecode_numpy$core$machar, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"numpy.core.memmap", modulecode_numpy$core$memmap, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"numpy.core.multiarray", modulecode_numpy$core$multiarray, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"numpy.core.numeric", modulecode_numpy$core$numeric, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"numpy.core.numerictypes", modulecode_numpy$core$numerictypes, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"numpy.core.overrides", modulecode_numpy$core$overrides, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"numpy.core.records", modulecode_numpy$core$records, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"numpy.core.shape_base", modulecode_numpy$core$shape_base, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"numpy.core.umath", modulecode_numpy$core$umath, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"numpy.ctypeslib", modulecode_numpy$ctypeslib, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"numpy.distutils", NULL, 452, 1501, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG | NUITKA_PACKAGE_FLAG},
    {"numpy.distutils.__config__", NULL, 453, 2616, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"numpy.distutils._shell_utils", NULL, 454, 3190, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"numpy.distutils.ccompiler", NULL, 455, 19085, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"numpy.distutils.ccompiler_opt", NULL, 456, 70075, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"numpy.distutils.command", NULL, 457, 1036, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG | NUITKA_PACKAGE_FLAG},
    {"numpy.distutils.command.autodist", NULL, 458, 3723, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"numpy.distutils.command.bdist_rpm", NULL, 459, 844, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"numpy.distutils.command.build", NULL, 460, 2271, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"numpy.distutils.command.build_clib", NULL, 461, 9524, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"numpy.distutils.command.build_ext", NULL, 462, 14761, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"numpy.distutils.command.build_py", NULL, 463, 1375, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"numpy.distutils.command.build_scripts", NULL, 464, 1660, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"numpy.distutils.command.build_src", NULL, 465, 18370, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"numpy.distutils.command.config", NULL, 466, 13923, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"numpy.distutils.command.config_compiler", NULL, 467, 3923, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"numpy.distutils.command.develop", NULL, 468, 871, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"numpy.distutils.command.egg_info", NULL, 469, 1099, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"numpy.distutils.command.install", NULL, 470, 2091, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"numpy.distutils.command.install_clib", NULL, 471, 1637, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"numpy.distutils.command.install_data", NULL, 472, 899, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"numpy.distutils.command.install_headers", NULL, 473, 965, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"numpy.distutils.command.sdist", NULL, 474, 951, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"numpy.distutils.conv_template", NULL, 475, 8293, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"numpy.distutils.core", NULL, 476, 4728, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"numpy.distutils.cpuinfo", NULL, 477, 32680, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"numpy.distutils.exec_command", NULL, 478, 9167, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"numpy.distutils.extension", NULL, 479, 2507, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"numpy.distutils.fcompiler", NULL, 480, 28246, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG | NUITKA_PACKAGE_FLAG},
    {"numpy.distutils.fcompiler.environment", NULL, 481, 3066, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"numpy.distutils.from_template", NULL, 482, 7227, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"numpy.distutils.lib2def", NULL, 483, 3313, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"numpy.distutils.log", NULL, 484, 2479, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"numpy.distutils.mingw32ccompiler", NULL, 485, 14535, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"numpy.distutils.misc_util", NULL, 486, 70476, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"numpy.distutils.npy_pkg_config", NULL, 487, 12302, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"numpy.distutils.numpy_distribution", NULL, 488, 792, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"numpy.distutils.system_info", NULL, 489, 87024, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"numpy.distutils.unixccompiler", NULL, 490, 3389, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"numpy.f2py", NULL, 491, 3541, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG | NUITKA_PACKAGE_FLAG},
    {"numpy.f2py.__version__", NULL, 492, 209, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"numpy.f2py.auxfuncs", NULL, 493, 22183, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"numpy.f2py.capi_maps", NULL, 494, 17954, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"numpy.f2py.cb_rules", NULL, 495, 17156, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"numpy.f2py.cfuncs", NULL, 496, 39986, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"numpy.f2py.common_rules", NULL, 497, 4755, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"numpy.f2py.crackfortran", NULL, 498, 77813, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"numpy.f2py.diagnose", NULL, 499, 3735, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"numpy.f2py.f2py2e", NULL, 500, 20193, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"numpy.f2py.f2py_testing", NULL, 501, 1409, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"numpy.f2py.f90mod_rules", NULL, 502, 7320, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"numpy.f2py.func2subr", NULL, 503, 6600, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"numpy.f2py.rules", NULL, 504, 34655, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"numpy.f2py.use_rules", NULL, 505, 3059, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"numpy.fft", modulecode_numpy$fft, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_PACKAGE_FLAG},
    {"numpy.fft._pocketfft", modulecode_numpy$fft$_pocketfft, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"numpy.fft._pocketfft_internal", NULL, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_SHLIB_FLAG},
    {"numpy.fft.helper", modulecode_numpy$fft$helper, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"numpy.lib", modulecode_numpy$lib, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_PACKAGE_FLAG},
    {"numpy.lib._datasource", modulecode_numpy$lib$_datasource, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"numpy.lib._iotools", modulecode_numpy$lib$_iotools, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"numpy.lib._version", modulecode_numpy$lib$_version, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"numpy.lib.arraypad", modulecode_numpy$lib$arraypad, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"numpy.lib.arraysetops", modulecode_numpy$lib$arraysetops, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"numpy.lib.arrayterator", modulecode_numpy$lib$arrayterator, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"numpy.lib.format", modulecode_numpy$lib$format, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"numpy.lib.function_base", modulecode_numpy$lib$function_base, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"numpy.lib.histograms", modulecode_numpy$lib$histograms, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"numpy.lib.index_tricks", modulecode_numpy$lib$index_tricks, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"numpy.lib.mixins", modulecode_numpy$lib$mixins, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"numpy.lib.nanfunctions", modulecode_numpy$lib$nanfunctions, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"numpy.lib.npyio", modulecode_numpy$lib$npyio, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"numpy.lib.polynomial", modulecode_numpy$lib$polynomial, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"numpy.lib.scimath", modulecode_numpy$lib$scimath, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"numpy.lib.shape_base", modulecode_numpy$lib$shape_base, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"numpy.lib.stride_tricks", modulecode_numpy$lib$stride_tricks, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"numpy.lib.twodim_base", modulecode_numpy$lib$twodim_base, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"numpy.lib.type_check", modulecode_numpy$lib$type_check, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"numpy.lib.ufunclike", modulecode_numpy$lib$ufunclike, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"numpy.lib.utils", modulecode_numpy$lib$utils, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"numpy.linalg", modulecode_numpy$linalg, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_PACKAGE_FLAG},
    {"numpy.linalg._umath_linalg", NULL, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_SHLIB_FLAG},
    {"numpy.linalg.lapack_lite", NULL, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_SHLIB_FLAG},
    {"numpy.linalg.linalg", modulecode_numpy$linalg$linalg, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"numpy.ma", modulecode_numpy$ma, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_PACKAGE_FLAG},
    {"numpy.ma.core", modulecode_numpy$ma$core, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"numpy.ma.extras", modulecode_numpy$ma$extras, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"numpy.ma.mrecords", modulecode_numpy$ma$mrecords, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"numpy.matrixlib", modulecode_numpy$matrixlib, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_PACKAGE_FLAG},
    {"numpy.matrixlib.defmatrix", modulecode_numpy$matrixlib$defmatrix, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"numpy.polynomial", modulecode_numpy$polynomial, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_PACKAGE_FLAG},
    {"numpy.polynomial._polybase", modulecode_numpy$polynomial$_polybase, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"numpy.polynomial.chebyshev", modulecode_numpy$polynomial$chebyshev, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"numpy.polynomial.hermite", modulecode_numpy$polynomial$hermite, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"numpy.polynomial.hermite_e", modulecode_numpy$polynomial$hermite_e, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"numpy.polynomial.laguerre", modulecode_numpy$polynomial$laguerre, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"numpy.polynomial.legendre", modulecode_numpy$polynomial$legendre, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"numpy.polynomial.polynomial", modulecode_numpy$polynomial$polynomial, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"numpy.polynomial.polyutils", modulecode_numpy$polynomial$polyutils, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"numpy.random", modulecode_numpy$random, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_PACKAGE_FLAG},
    {"numpy.random._bounded_integers", NULL, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_SHLIB_FLAG},
    {"numpy.random._common", NULL, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_SHLIB_FLAG},
    {"numpy.random._generator", NULL, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_SHLIB_FLAG},
    {"numpy.random._mt19937", NULL, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_SHLIB_FLAG},
    {"numpy.random._pcg64", NULL, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_SHLIB_FLAG},
    {"numpy.random._philox", NULL, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_SHLIB_FLAG},
    {"numpy.random._pickle", modulecode_numpy$random$_pickle, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"numpy.random._sfc64", NULL, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_SHLIB_FLAG},
    {"numpy.random.bit_generator", NULL, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_SHLIB_FLAG},
    {"numpy.random.mtrand", NULL, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_SHLIB_FLAG},
    {"numpy.testing", NULL, 506, 737, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG | NUITKA_PACKAGE_FLAG},
    {"numpy.testing._private", NULL, 507, 173, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG | NUITKA_PACKAGE_FLAG},
    {"numpy.testing._private.decorators", NULL, 508, 9026, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"numpy.testing._private.noseclasses", NULL, 509, 9931, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"numpy.testing._private.nosetester", NULL, 510, 14893, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"numpy.testing._private.parameterized", NULL, 511, 15674, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"numpy.testing._private.utils", NULL, 512, 70422, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"numpy.version", modulecode_numpy$version, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"opcode", NULL, 513, 5385, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"operator", NULL, 514, 13656, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"optparse", NULL, 515, 48022, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"os", NULL, 516, 31362, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"pandas", modulecode_pandas, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_PACKAGE_FLAG},
    {"pandas._config", modulecode_pandas$_config, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_PACKAGE_FLAG},
    {"pandas._config.config", modulecode_pandas$_config$config, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"pandas._config.dates", modulecode_pandas$_config$dates, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"pandas._config.display", modulecode_pandas$_config$display, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"pandas._config.localization", modulecode_pandas$_config$localization, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"pandas._libs", modulecode_pandas$_libs, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_PACKAGE_FLAG},
    {"pandas._libs.algos", NULL, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_SHLIB_FLAG},
    {"pandas._libs.arrays", NULL, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_SHLIB_FLAG},
    {"pandas._libs.groupby", NULL, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_SHLIB_FLAG},
    {"pandas._libs.hashing", NULL, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_SHLIB_FLAG},
    {"pandas._libs.hashtable", NULL, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_SHLIB_FLAG},
    {"pandas._libs.index", NULL, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_SHLIB_FLAG},
    {"pandas._libs.indexing", NULL, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_SHLIB_FLAG},
    {"pandas._libs.internals", NULL, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_SHLIB_FLAG},
    {"pandas._libs.interval", NULL, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_SHLIB_FLAG},
    {"pandas._libs.join", NULL, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_SHLIB_FLAG},
    {"pandas._libs.json", NULL, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_SHLIB_FLAG},
    {"pandas._libs.lib", NULL, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_SHLIB_FLAG},
    {"pandas._libs.missing", NULL, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_SHLIB_FLAG},
    {"pandas._libs.ops", NULL, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_SHLIB_FLAG},
    {"pandas._libs.ops_dispatch", NULL, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_SHLIB_FLAG},
    {"pandas._libs.parsers", NULL, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_SHLIB_FLAG},
    {"pandas._libs.properties", NULL, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_SHLIB_FLAG},
    {"pandas._libs.reduction", NULL, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_SHLIB_FLAG},
    {"pandas._libs.reshape", NULL, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_SHLIB_FLAG},
    {"pandas._libs.sparse", NULL, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_SHLIB_FLAG},
    {"pandas._libs.testing", NULL, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_SHLIB_FLAG},
    {"pandas._libs.tslib", NULL, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_SHLIB_FLAG},
    {"pandas._libs.tslibs", modulecode_pandas$_libs$tslibs, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_PACKAGE_FLAG},
    {"pandas._libs.tslibs.base", NULL, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_SHLIB_FLAG},
    {"pandas._libs.tslibs.ccalendar", NULL, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_SHLIB_FLAG},
    {"pandas._libs.tslibs.conversion", NULL, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_SHLIB_FLAG},
    {"pandas._libs.tslibs.dtypes", NULL, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_SHLIB_FLAG},
    {"pandas._libs.tslibs.fields", NULL, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_SHLIB_FLAG},
    {"pandas._libs.tslibs.nattype", NULL, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_SHLIB_FLAG},
    {"pandas._libs.tslibs.np_datetime", NULL, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_SHLIB_FLAG},
    {"pandas._libs.tslibs.offsets", NULL, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_SHLIB_FLAG},
    {"pandas._libs.tslibs.parsing", NULL, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_SHLIB_FLAG},
    {"pandas._libs.tslibs.period", NULL, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_SHLIB_FLAG},
    {"pandas._libs.tslibs.strptime", NULL, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_SHLIB_FLAG},
    {"pandas._libs.tslibs.timedeltas", NULL, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_SHLIB_FLAG},
    {"pandas._libs.tslibs.timestamps", NULL, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_SHLIB_FLAG},
    {"pandas._libs.tslibs.timezones", NULL, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_SHLIB_FLAG},
    {"pandas._libs.tslibs.tzconversion", NULL, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_SHLIB_FLAG},
    {"pandas._libs.tslibs.vectorized", NULL, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_SHLIB_FLAG},
    {"pandas._libs.window", modulecode_pandas$_libs$window, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_PACKAGE_FLAG},
    {"pandas._libs.window.aggregations", NULL, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_SHLIB_FLAG},
    {"pandas._libs.window.indexers", NULL, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_SHLIB_FLAG},
    {"pandas._libs.writers", NULL, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_SHLIB_FLAG},
    {"pandas._testing", modulecode_pandas$_testing, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_PACKAGE_FLAG},
    {"pandas._testing._io", modulecode_pandas$_testing$_io, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"pandas._testing._random", modulecode_pandas$_testing$_random, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"pandas._testing._warnings", modulecode_pandas$_testing$_warnings, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"pandas._testing.asserters", modulecode_pandas$_testing$asserters, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"pandas._testing.compat", modulecode_pandas$_testing$compat, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"pandas._testing.contexts", modulecode_pandas$_testing$contexts, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"pandas._typing", modulecode_pandas$_typing, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"pandas._version", modulecode_pandas$_version, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"pandas.api", modulecode_pandas$api, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_PACKAGE_FLAG},
    {"pandas.api.extensions", modulecode_pandas$api$extensions, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_PACKAGE_FLAG},
    {"pandas.api.indexers", modulecode_pandas$api$indexers, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_PACKAGE_FLAG},
    {"pandas.api.types", modulecode_pandas$api$types, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_PACKAGE_FLAG},
    {"pandas.arrays", modulecode_pandas$arrays, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_PACKAGE_FLAG},
    {"pandas.compat", modulecode_pandas$compat, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_PACKAGE_FLAG},
    {"pandas.compat._optional", modulecode_pandas$compat$_optional, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"pandas.compat.chainmap", modulecode_pandas$compat$chainmap, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"pandas.compat.numpy", modulecode_pandas$compat$numpy, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_PACKAGE_FLAG},
    {"pandas.compat.numpy.function", modulecode_pandas$compat$numpy$function, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"pandas.compat.pickle_compat", modulecode_pandas$compat$pickle_compat, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"pandas.compat.pyarrow", modulecode_pandas$compat$pyarrow, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"pandas.core", modulecode_pandas$core, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_PACKAGE_FLAG},
    {"pandas.core.accessor", modulecode_pandas$core$accessor, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"pandas.core.aggregation", modulecode_pandas$core$aggregation, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"pandas.core.algorithms", modulecode_pandas$core$algorithms, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"pandas.core.api", modulecode_pandas$core$api, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"pandas.core.apply", modulecode_pandas$core$apply, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"pandas.core.array_algos", modulecode_pandas$core$array_algos, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_PACKAGE_FLAG},
    {"pandas.core.array_algos.masked_reductions", modulecode_pandas$core$array_algos$masked_reductions, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"pandas.core.array_algos.putmask", modulecode_pandas$core$array_algos$putmask, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"pandas.core.array_algos.quantile", modulecode_pandas$core$array_algos$quantile, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"pandas.core.array_algos.replace", modulecode_pandas$core$array_algos$replace, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"pandas.core.array_algos.take", modulecode_pandas$core$array_algos$take, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"pandas.core.array_algos.transforms", modulecode_pandas$core$array_algos$transforms, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"pandas.core.arraylike", modulecode_pandas$core$arraylike, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"pandas.core.arrays", modulecode_pandas$core$arrays, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_PACKAGE_FLAG},
    {"pandas.core.arrays._arrow_utils", modulecode_pandas$core$arrays$_arrow_utils, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"pandas.core.arrays._mixins", modulecode_pandas$core$arrays$_mixins, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"pandas.core.arrays._ranges", modulecode_pandas$core$arrays$_ranges, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"pandas.core.arrays.base", modulecode_pandas$core$arrays$base, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"pandas.core.arrays.boolean", modulecode_pandas$core$arrays$boolean, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"pandas.core.arrays.categorical", modulecode_pandas$core$arrays$categorical, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"pandas.core.arrays.datetimelike", modulecode_pandas$core$arrays$datetimelike, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"pandas.core.arrays.datetimes", modulecode_pandas$core$arrays$datetimes, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"pandas.core.arrays.floating", modulecode_pandas$core$arrays$floating, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"pandas.core.arrays.integer", modulecode_pandas$core$arrays$integer, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"pandas.core.arrays.interval", modulecode_pandas$core$arrays$interval, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"pandas.core.arrays.masked", modulecode_pandas$core$arrays$masked, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"pandas.core.arrays.numeric", modulecode_pandas$core$arrays$numeric, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"pandas.core.arrays.numpy_", modulecode_pandas$core$arrays$numpy_, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"pandas.core.arrays.period", modulecode_pandas$core$arrays$period, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"pandas.core.arrays.sparse", modulecode_pandas$core$arrays$sparse, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_PACKAGE_FLAG},
    {"pandas.core.arrays.sparse.accessor", modulecode_pandas$core$arrays$sparse$accessor, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"pandas.core.arrays.sparse.array", modulecode_pandas$core$arrays$sparse$array, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"pandas.core.arrays.sparse.dtype", modulecode_pandas$core$arrays$sparse$dtype, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"pandas.core.arrays.sparse.scipy_sparse", modulecode_pandas$core$arrays$sparse$scipy_sparse, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"pandas.core.arrays.string_", modulecode_pandas$core$arrays$string_, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"pandas.core.arrays.string_arrow", modulecode_pandas$core$arrays$string_arrow, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"pandas.core.arrays.timedeltas", modulecode_pandas$core$arrays$timedeltas, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"pandas.core.base", modulecode_pandas$core$base, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"pandas.core.common", modulecode_pandas$core$common, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"pandas.core.computation", modulecode_pandas$core$computation, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_PACKAGE_FLAG},
    {"pandas.core.computation.align", modulecode_pandas$core$computation$align, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"pandas.core.computation.api", modulecode_pandas$core$computation$api, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"pandas.core.computation.check", modulecode_pandas$core$computation$check, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"pandas.core.computation.common", modulecode_pandas$core$computation$common, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"pandas.core.computation.engines", modulecode_pandas$core$computation$engines, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"pandas.core.computation.eval", modulecode_pandas$core$computation$eval, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"pandas.core.computation.expr", modulecode_pandas$core$computation$expr, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"pandas.core.computation.expressions", modulecode_pandas$core$computation$expressions, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"pandas.core.computation.ops", modulecode_pandas$core$computation$ops, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"pandas.core.computation.parsing", modulecode_pandas$core$computation$parsing, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"pandas.core.computation.pytables", modulecode_pandas$core$computation$pytables, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"pandas.core.computation.scope", modulecode_pandas$core$computation$scope, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"pandas.core.config_init", modulecode_pandas$core$config_init, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"pandas.core.construction", modulecode_pandas$core$construction, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"pandas.core.describe", modulecode_pandas$core$describe, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"pandas.core.dtypes", modulecode_pandas$core$dtypes, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_PACKAGE_FLAG},
    {"pandas.core.dtypes.api", modulecode_pandas$core$dtypes$api, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"pandas.core.dtypes.base", modulecode_pandas$core$dtypes$base, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"pandas.core.dtypes.cast", modulecode_pandas$core$dtypes$cast, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"pandas.core.dtypes.common", modulecode_pandas$core$dtypes$common, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"pandas.core.dtypes.concat", modulecode_pandas$core$dtypes$concat, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"pandas.core.dtypes.dtypes", modulecode_pandas$core$dtypes$dtypes, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"pandas.core.dtypes.generic", modulecode_pandas$core$dtypes$generic, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"pandas.core.dtypes.inference", modulecode_pandas$core$dtypes$inference, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"pandas.core.dtypes.missing", modulecode_pandas$core$dtypes$missing, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"pandas.core.flags", modulecode_pandas$core$flags, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"pandas.core.frame", modulecode_pandas$core$frame, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"pandas.core.generic", modulecode_pandas$core$generic, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"pandas.core.groupby", modulecode_pandas$core$groupby, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_PACKAGE_FLAG},
    {"pandas.core.groupby.base", modulecode_pandas$core$groupby$base, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"pandas.core.groupby.categorical", modulecode_pandas$core$groupby$categorical, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"pandas.core.groupby.generic", modulecode_pandas$core$groupby$generic, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"pandas.core.groupby.groupby", modulecode_pandas$core$groupby$groupby, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"pandas.core.groupby.grouper", modulecode_pandas$core$groupby$grouper, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"pandas.core.groupby.numba_", modulecode_pandas$core$groupby$numba_, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"pandas.core.groupby.ops", modulecode_pandas$core$groupby$ops, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"pandas.core.indexers", modulecode_pandas$core$indexers, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"pandas.core.indexes", modulecode_pandas$core$indexes, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_PACKAGE_FLAG},
    {"pandas.core.indexes.accessors", modulecode_pandas$core$indexes$accessors, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"pandas.core.indexes.api", modulecode_pandas$core$indexes$api, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"pandas.core.indexes.base", modulecode_pandas$core$indexes$base, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"pandas.core.indexes.category", modulecode_pandas$core$indexes$category, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"pandas.core.indexes.datetimelike", modulecode_pandas$core$indexes$datetimelike, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"pandas.core.indexes.datetimes", modulecode_pandas$core$indexes$datetimes, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"pandas.core.indexes.extension", modulecode_pandas$core$indexes$extension, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"pandas.core.indexes.frozen", modulecode_pandas$core$indexes$frozen, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"pandas.core.indexes.interval", modulecode_pandas$core$indexes$interval, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"pandas.core.indexes.multi", modulecode_pandas$core$indexes$multi, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"pandas.core.indexes.numeric", modulecode_pandas$core$indexes$numeric, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"pandas.core.indexes.period", modulecode_pandas$core$indexes$period, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"pandas.core.indexes.range", modulecode_pandas$core$indexes$range, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"pandas.core.indexes.timedeltas", modulecode_pandas$core$indexes$timedeltas, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"pandas.core.indexing", modulecode_pandas$core$indexing, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"pandas.core.internals", modulecode_pandas$core$internals, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_PACKAGE_FLAG},
    {"pandas.core.internals.api", modulecode_pandas$core$internals$api, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"pandas.core.internals.array_manager", modulecode_pandas$core$internals$array_manager, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"pandas.core.internals.base", modulecode_pandas$core$internals$base, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"pandas.core.internals.blocks", modulecode_pandas$core$internals$blocks, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"pandas.core.internals.concat", modulecode_pandas$core$internals$concat, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"pandas.core.internals.construction", modulecode_pandas$core$internals$construction, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"pandas.core.internals.managers", modulecode_pandas$core$internals$managers, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"pandas.core.internals.ops", modulecode_pandas$core$internals$ops, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"pandas.core.missing", modulecode_pandas$core$missing, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"pandas.core.nanops", modulecode_pandas$core$nanops, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"pandas.core.ops", modulecode_pandas$core$ops, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_PACKAGE_FLAG},
    {"pandas.core.ops.array_ops", modulecode_pandas$core$ops$array_ops, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"pandas.core.ops.common", modulecode_pandas$core$ops$common, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"pandas.core.ops.dispatch", modulecode_pandas$core$ops$dispatch, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"pandas.core.ops.docstrings", modulecode_pandas$core$ops$docstrings, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"pandas.core.ops.invalid", modulecode_pandas$core$ops$invalid, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"pandas.core.ops.mask_ops", modulecode_pandas$core$ops$mask_ops, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"pandas.core.ops.methods", modulecode_pandas$core$ops$methods, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"pandas.core.ops.missing", modulecode_pandas$core$ops$missing, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"pandas.core.resample", modulecode_pandas$core$resample, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"pandas.core.reshape", modulecode_pandas$core$reshape, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_PACKAGE_FLAG},
    {"pandas.core.reshape.api", modulecode_pandas$core$reshape$api, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"pandas.core.reshape.concat", modulecode_pandas$core$reshape$concat, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"pandas.core.reshape.melt", modulecode_pandas$core$reshape$melt, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"pandas.core.reshape.merge", modulecode_pandas$core$reshape$merge, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"pandas.core.reshape.pivot", modulecode_pandas$core$reshape$pivot, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"pandas.core.reshape.reshape", modulecode_pandas$core$reshape$reshape, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"pandas.core.reshape.tile", modulecode_pandas$core$reshape$tile, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"pandas.core.reshape.util", modulecode_pandas$core$reshape$util, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"pandas.core.roperator", modulecode_pandas$core$roperator, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"pandas.core.series", modulecode_pandas$core$series, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"pandas.core.shared_docs", modulecode_pandas$core$shared_docs, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"pandas.core.sorting", modulecode_pandas$core$sorting, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"pandas.core.strings", modulecode_pandas$core$strings, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_PACKAGE_FLAG},
    {"pandas.core.strings.accessor", modulecode_pandas$core$strings$accessor, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"pandas.core.strings.base", modulecode_pandas$core$strings$base, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"pandas.core.strings.object_array", modulecode_pandas$core$strings$object_array, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"pandas.core.tools", modulecode_pandas$core$tools, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_PACKAGE_FLAG},
    {"pandas.core.tools.datetimes", modulecode_pandas$core$tools$datetimes, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"pandas.core.tools.numeric", modulecode_pandas$core$tools$numeric, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"pandas.core.tools.timedeltas", modulecode_pandas$core$tools$timedeltas, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"pandas.core.tools.times", modulecode_pandas$core$tools$times, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"pandas.core.util", modulecode_pandas$core$util, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_PACKAGE_FLAG},
    {"pandas.core.util.hashing", modulecode_pandas$core$util$hashing, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"pandas.core.util.numba_", modulecode_pandas$core$util$numba_, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"pandas.core.window", modulecode_pandas$core$window, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_PACKAGE_FLAG},
    {"pandas.core.window.common", modulecode_pandas$core$window$common, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"pandas.core.window.doc", modulecode_pandas$core$window$doc, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"pandas.core.window.ewm", modulecode_pandas$core$window$ewm, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"pandas.core.window.expanding", modulecode_pandas$core$window$expanding, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"pandas.core.window.indexers", modulecode_pandas$core$window$indexers, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"pandas.core.window.numba_", modulecode_pandas$core$window$numba_, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"pandas.core.window.online", modulecode_pandas$core$window$online, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"pandas.core.window.rolling", modulecode_pandas$core$window$rolling, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"pandas.errors", modulecode_pandas$errors, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_PACKAGE_FLAG},
    {"pandas.io", modulecode_pandas$io, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_PACKAGE_FLAG},
    {"pandas.io.api", modulecode_pandas$io$api, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"pandas.io.clipboard", modulecode_pandas$io$clipboard, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_PACKAGE_FLAG},
    {"pandas.io.clipboards", modulecode_pandas$io$clipboards, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"pandas.io.common", modulecode_pandas$io$common, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"pandas.io.date_converters", modulecode_pandas$io$date_converters, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"pandas.io.excel", modulecode_pandas$io$excel, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_PACKAGE_FLAG},
    {"pandas.io.excel._base", modulecode_pandas$io$excel$_base, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"pandas.io.excel._odfreader", modulecode_pandas$io$excel$_odfreader, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"pandas.io.excel._odswriter", modulecode_pandas$io$excel$_odswriter, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"pandas.io.excel._openpyxl", modulecode_pandas$io$excel$_openpyxl, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"pandas.io.excel._pyxlsb", modulecode_pandas$io$excel$_pyxlsb, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"pandas.io.excel._util", modulecode_pandas$io$excel$_util, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"pandas.io.excel._xlrd", modulecode_pandas$io$excel$_xlrd, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"pandas.io.excel._xlsxwriter", modulecode_pandas$io$excel$_xlsxwriter, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"pandas.io.excel._xlwt", modulecode_pandas$io$excel$_xlwt, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"pandas.io.feather_format", modulecode_pandas$io$feather_format, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"pandas.io.formats", modulecode_pandas$io$formats, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_PACKAGE_FLAG},
    {"pandas.io.formats._color_data", modulecode_pandas$io$formats$_color_data, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"pandas.io.formats.console", modulecode_pandas$io$formats$console, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"pandas.io.formats.css", modulecode_pandas$io$formats$css, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"pandas.io.formats.csvs", modulecode_pandas$io$formats$csvs, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"pandas.io.formats.excel", modulecode_pandas$io$formats$excel, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"pandas.io.formats.format", modulecode_pandas$io$formats$format, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"pandas.io.formats.html", modulecode_pandas$io$formats$html, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"pandas.io.formats.info", modulecode_pandas$io$formats$info, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"pandas.io.formats.latex", modulecode_pandas$io$formats$latex, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"pandas.io.formats.printing", modulecode_pandas$io$formats$printing, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"pandas.io.formats.string", modulecode_pandas$io$formats$string, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"pandas.io.formats.style", modulecode_pandas$io$formats$style, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"pandas.io.formats.style_render", modulecode_pandas$io$formats$style_render, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"pandas.io.formats.xml", modulecode_pandas$io$formats$xml, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"pandas.io.gbq", modulecode_pandas$io$gbq, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"pandas.io.html", modulecode_pandas$io$html, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"pandas.io.json", modulecode_pandas$io$json, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_PACKAGE_FLAG},
    {"pandas.io.json._json", modulecode_pandas$io$json$_json, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"pandas.io.json._normalize", modulecode_pandas$io$json$_normalize, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"pandas.io.json._table_schema", modulecode_pandas$io$json$_table_schema, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"pandas.io.orc", modulecode_pandas$io$orc, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"pandas.io.parquet", modulecode_pandas$io$parquet, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"pandas.io.parsers", modulecode_pandas$io$parsers, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_PACKAGE_FLAG},
    {"pandas.io.parsers.base_parser", modulecode_pandas$io$parsers$base_parser, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"pandas.io.parsers.c_parser_wrapper", modulecode_pandas$io$parsers$c_parser_wrapper, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"pandas.io.parsers.python_parser", modulecode_pandas$io$parsers$python_parser, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"pandas.io.parsers.readers", modulecode_pandas$io$parsers$readers, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"pandas.io.pickle", modulecode_pandas$io$pickle, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"pandas.io.pytables", modulecode_pandas$io$pytables, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"pandas.io.sas", modulecode_pandas$io$sas, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_PACKAGE_FLAG},
    {"pandas.io.sas._sas", NULL, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_SHLIB_FLAG},
    {"pandas.io.sas.sas7bdat", modulecode_pandas$io$sas$sas7bdat, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"pandas.io.sas.sas_constants", modulecode_pandas$io$sas$sas_constants, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"pandas.io.sas.sas_xport", modulecode_pandas$io$sas$sas_xport, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"pandas.io.sas.sasreader", modulecode_pandas$io$sas$sasreader, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"pandas.io.spss", modulecode_pandas$io$spss, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"pandas.io.sql", modulecode_pandas$io$sql, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"pandas.io.stata", modulecode_pandas$io$stata, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"pandas.io.xml", modulecode_pandas$io$xml, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"pandas.plotting", modulecode_pandas$plotting, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_PACKAGE_FLAG},
    {"pandas.plotting._core", modulecode_pandas$plotting$_core, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"pandas.plotting._misc", modulecode_pandas$plotting$_misc, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"pandas.testing", modulecode_pandas$testing, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"pandas.tseries", modulecode_pandas$tseries, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_PACKAGE_FLAG},
    {"pandas.tseries.api", modulecode_pandas$tseries$api, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"pandas.tseries.frequencies", modulecode_pandas$tseries$frequencies, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"pandas.tseries.offsets", modulecode_pandas$tseries$offsets, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"pandas.util", modulecode_pandas$util, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_PACKAGE_FLAG},
    {"pandas.util._decorators", modulecode_pandas$util$_decorators, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"pandas.util._exceptions", modulecode_pandas$util$_exceptions, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"pandas.util._print_versions", modulecode_pandas$util$_print_versions, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"pandas.util._tester", modulecode_pandas$util$_tester, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"pandas.util._validators", modulecode_pandas$util$_validators, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"pandas.util.testing", modulecode_pandas$util$testing, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"pandas.util.version", modulecode_pandas$util$version, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_PACKAGE_FLAG},
    {"pathlib", NULL, 517, 44174, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"pdb", NULL, 518, 47191, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"pickle", NULL, 519, 46873, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"pickletools", NULL, 520, 67169, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"pipes", NULL, 521, 7760, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"pkg_resources", NULL, 522, 100405, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG | NUITKA_PACKAGE_FLAG},
    {"pkg_resources._vendor", NULL, 523, 172, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG | NUITKA_PACKAGE_FLAG},
    {"pkg_resources._vendor.appdirs", NULL, 524, 20525, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"pkg_resources._vendor.packaging", NULL, 525, 560, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG | NUITKA_PACKAGE_FLAG},
    {"pkg_resources._vendor.packaging.__about__", NULL, 526, 714, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"pkg_resources._vendor.packaging._compat", NULL, 527, 1132, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"pkg_resources._vendor.packaging._structures", NULL, 528, 2886, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"pkg_resources._vendor.packaging._typing", NULL, 529, 1477, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"pkg_resources._vendor.packaging.markers", NULL, 530, 9321, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"pkg_resources._vendor.packaging.requirements", NULL, 531, 4074, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"pkg_resources._vendor.packaging.specifiers", NULL, 532, 20595, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"pkg_resources._vendor.packaging.utils", NULL, 533, 1649, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"pkg_resources._vendor.packaging.version", NULL, 534, 13324, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"pkg_resources._vendor.pyparsing", NULL, 535, 201650, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"pkg_resources.extern", NULL, 536, 2859, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG | NUITKA_PACKAGE_FLAG},
    {"pkgutil", NULL, 537, 16301, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"platform", NULL, 538, 24372, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"plistlib", NULL, 539, 27130, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"poplib", NULL, 540, 13424, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"posixpath", NULL, 541, 10393, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"pprint", NULL, 542, 16246, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"profile", NULL, 543, 14723, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"pstats", NULL, 544, 22031, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"py_compile", NULL, 545, 7317, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"pyclbr", NULL, 546, 10416, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"pydoc", NULL, 547, 83336, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"pydoc_data", NULL, 548, 88, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG | NUITKA_PACKAGE_FLAG},
    {"pydoc_data.topics", NULL, 549, 426197, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"pyexpat", NULL, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_SHLIB_FLAG},
    {"pytz", modulecode_pytz, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_PACKAGE_FLAG},
    {"pytz.exceptions", modulecode_pytz$exceptions, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"pytz.lazy", modulecode_pytz$lazy, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"pytz.tzfile", modulecode_pytz$tzfile, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"pytz.tzinfo", modulecode_pytz$tzinfo, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"queue", NULL, 550, 10591, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"quopri", NULL, 551, 5713, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"random", NULL, 552, 20073, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"re", NULL, 553, 14387, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"reprlib", NULL, 554, 5268, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"requests", modulecode_requests, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_PACKAGE_FLAG},
    {"requests.__version__", modulecode_requests$__version__, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"requests._internal_utils", modulecode_requests$_internal_utils, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"requests.adapters", modulecode_requests$adapters, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"requests.api", modulecode_requests$api, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"requests.auth", modulecode_requests$auth, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"requests.certs", modulecode_requests$certs, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"requests.compat", modulecode_requests$compat, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"requests.cookies", modulecode_requests$cookies, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"requests.exceptions", modulecode_requests$exceptions, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"requests.hooks", modulecode_requests$hooks, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"requests.models", modulecode_requests$models, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"requests.packages", modulecode_requests$packages, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"requests.sessions", modulecode_requests$sessions, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"requests.status_codes", modulecode_requests$status_codes, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"requests.structures", modulecode_requests$structures, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"requests.utils", modulecode_requests$utils, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"rlcompleter", NULL, 555, 5720, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"runpy", NULL, 556, 8146, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"sched", NULL, 557, 6497, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"secrets", NULL, 558, 2155, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"select", NULL, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_SHLIB_FLAG},
    {"selectors", NULL, 559, 16900, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"setuptools", NULL, 560, 8555, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG | NUITKA_PACKAGE_FLAG},
    {"setuptools._deprecation_warning", NULL, 561, 531, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"setuptools._imp", NULL, 562, 2070, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"setuptools.archive_util", NULL, 563, 5731, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"setuptools.command", NULL, 564, 358, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG | NUITKA_PACKAGE_FLAG},
    {"setuptools.command.bdist_egg", NULL, 565, 13018, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"setuptools.command.bdist_rpm", NULL, 566, 1338, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"setuptools.command.develop", NULL, 567, 6082, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"setuptools.command.easy_install", NULL, 568, 63269, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"setuptools.command.egg_info", NULL, 569, 21942, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"setuptools.command.install", NULL, 570, 4031, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"setuptools.command.py36compat", NULL, 571, 4570, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"setuptools.command.sdist", NULL, 572, 6401, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"setuptools.command.setopt", NULL, 573, 4651, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"setuptools.config", NULL, 574, 20759, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"setuptools.depends", NULL, 575, 5209, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"setuptools.dist", NULL, 576, 36438, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"setuptools.extension", NULL, 577, 1921, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"setuptools.extern", NULL, 578, 2898, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG | NUITKA_PACKAGE_FLAG},
    {"setuptools.glob", NULL, 579, 3685, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"setuptools.installer", NULL, 580, 2766, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"setuptools.monkey", NULL, 581, 4600, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"setuptools.namespaces", NULL, 582, 3561, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"setuptools.package_index", NULL, 583, 32694, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"setuptools.py34compat", NULL, 584, 465, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"setuptools.sandbox", NULL, 585, 15408, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"setuptools.unicode_utils", NULL, 586, 1101, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"setuptools.version", NULL, 587, 268, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"setuptools.wheel", NULL, 588, 7213, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"setuptools.windows_support", NULL, 589, 1004, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"shelve", NULL, 590, 9455, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"shlex", NULL, 591, 7501, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"shutil", NULL, 592, 37184, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"signal", NULL, 593, 2808, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"site", NULL, 594, 13237, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"six", modulecode_six, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"smtpd", NULL, 595, 26428, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"smtplib", NULL, 596, 35497, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"sndhdr", NULL, 597, 6954, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"socket", NULL, 598, 27752, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"socketserver", NULL, 599, 25326, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"socks", modulecode_socks, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"sqlite3", NULL, 600, 116, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG | NUITKA_PACKAGE_FLAG},
    {"sqlite3.dbapi2", NULL, 601, 2469, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"sqlite3.dump", NULL, 602, 1894, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"sre_compile", NULL, 603, 15107, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"sre_constants", NULL, 604, 6324, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"sre_parse", NULL, 605, 21612, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"ssl", NULL, 606, 44561, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"stat", NULL, 607, 4337, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"statistics", NULL, 608, 33618, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"string", NULL, 609, 7265, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"stringprep", NULL, 610, 10982, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"struct", NULL, 611, 295, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"subprocess", NULL, 612, 41932, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"sunau", NULL, 613, 17045, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"symbol", NULL, 614, 2369, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"symtable", NULL, 615, 11287, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"sysconfig", NULL, 616, 15961, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"tabnanny", NULL, 617, 6995, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"tarfile", NULL, 618, 62626, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"telnetlib", NULL, 619, 18202, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"tempfile", NULL, 620, 23362, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"textwrap", NULL, 621, 13484, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"this", NULL, 622, 1226, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"threading", NULL, 623, 39941, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"timeit", NULL, 624, 11742, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"tkinter", NULL, 625, 176163, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG | NUITKA_PACKAGE_FLAG},
    {"tkinter.colorchooser", NULL, 626, 2217, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"tkinter.commondialog", NULL, 627, 1077, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"tkinter.constants", NULL, 628, 1619, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"tkinter.dialog", NULL, 629, 1437, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"tkinter.dnd", NULL, 630, 11227, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"tkinter.filedialog", NULL, 631, 12268, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"tkinter.font", NULL, 632, 6268, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"tkinter.messagebox", NULL, 633, 2956, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"tkinter.scrolledtext", NULL, 634, 2142, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"tkinter.simpledialog", NULL, 635, 10963, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"tkinter.tix", NULL, 636, 79372, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"tkinter.ttk", NULL, 637, 56663, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"token", NULL, 638, 2450, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"tokenize", NULL, 639, 17125, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"trace", NULL, 640, 19991, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"traceback", NULL, 641, 19903, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"tracemalloc", NULL, 642, 17328, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"turtle", NULL, 643, 129987, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"types", NULL, 644, 9142, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"typing", NULL, 645, 62385, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"unicodedata", NULL, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_SHLIB_FLAG},
    {"unittest", NULL, 646, 3082, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG | NUITKA_PACKAGE_FLAG},
    {"unittest.async_case", NULL, 647, 4148, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"unittest.case", NULL, 648, 50449, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"unittest.loader", NULL, 649, 14501, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"unittest.main", NULL, 650, 7499, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"unittest.mock", NULL, 651, 77331, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"unittest.result", NULL, 652, 7256, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"unittest.runner", NULL, 653, 6981, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"unittest.signals", NULL, 654, 2185, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"unittest.suite", NULL, 655, 9900, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"unittest.util", NULL, 656, 4396, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"urllib", NULL, 657, 84, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG | NUITKA_PACKAGE_FLAG},
    {"urllib.error", NULL, 658, 2774, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"urllib.parse", NULL, 659, 34519, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"urllib.request", NULL, 660, 72578, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"urllib.response", NULL, 661, 3254, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"urllib.robotparser", NULL, 662, 7292, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"urllib3", modulecode_urllib3, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_PACKAGE_FLAG},
    {"urllib3._collections", modulecode_urllib3$_collections, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"urllib3._version", modulecode_urllib3$_version, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"urllib3.connection", modulecode_urllib3$connection, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"urllib3.connectionpool", modulecode_urllib3$connectionpool, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"urllib3.contrib", modulecode_urllib3$contrib, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_PACKAGE_FLAG},
    {"urllib3.contrib._appengine_environ", modulecode_urllib3$contrib$_appengine_environ, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"urllib3.contrib.appengine", modulecode_urllib3$contrib$appengine, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"urllib3.contrib.pyopenssl", modulecode_urllib3$contrib$pyopenssl, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"urllib3.contrib.socks", modulecode_urllib3$contrib$socks, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"urllib3.exceptions", modulecode_urllib3$exceptions, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"urllib3.fields", modulecode_urllib3$fields, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"urllib3.filepost", modulecode_urllib3$filepost, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"urllib3.packages", modulecode_urllib3$packages, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_PACKAGE_FLAG},
    {"urllib3.packages.backports", modulecode_urllib3$packages$backports, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_PACKAGE_FLAG},
    {"urllib3.packages.backports.makefile", modulecode_urllib3$packages$backports$makefile, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"urllib3.packages.six", modulecode_urllib3$packages$six, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"urllib3.packages.ssl_match_hostname", modulecode_urllib3$packages$ssl_match_hostname, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_PACKAGE_FLAG},
    {"urllib3.packages.ssl_match_hostname._implementation", modulecode_urllib3$packages$ssl_match_hostname$_implementation, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"urllib3.poolmanager", modulecode_urllib3$poolmanager, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"urllib3.request", modulecode_urllib3$request, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"urllib3.response", modulecode_urllib3$response, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"urllib3.util", modulecode_urllib3$util, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_PACKAGE_FLAG},
    {"urllib3.util.connection", modulecode_urllib3$util$connection, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"urllib3.util.proxy", modulecode_urllib3$util$proxy, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"urllib3.util.queue", modulecode_urllib3$util$queue, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"urllib3.util.request", modulecode_urllib3$util$request, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"urllib3.util.response", modulecode_urllib3$util$response, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"urllib3.util.retry", modulecode_urllib3$util$retry, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"urllib3.util.ssl_", modulecode_urllib3$util$ssl_, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"urllib3.util.ssltransport", modulecode_urllib3$util$ssltransport, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"urllib3.util.timeout", modulecode_urllib3$util$timeout, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"urllib3.util.url", modulecode_urllib3$util$url, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"urllib3.util.wait", modulecode_urllib3$util$wait, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"uu", NULL, 663, 3570, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"uuid", NULL, 664, 23648, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"venv", NULL, 665, 14474, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG | NUITKA_PACKAGE_FLAG},
    {"warnings", NULL, 666, 13617, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"wave", NULL, 667, 18114, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"weakref", NULL, 668, 19483, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"webbrowser", NULL, 669, 17085, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"win_inet_pton", modulecode_win_inet_pton, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"wsgiref", NULL, 670, 680, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG | NUITKA_PACKAGE_FLAG},
    {"wsgiref.handlers", NULL, 671, 16411, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"wsgiref.headers", NULL, 672, 7721, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"wsgiref.simple_server", NULL, 673, 5226, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"wsgiref.util", NULL, 674, 5377, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"wsgiref.validate", NULL, 675, 14720, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"xdrlib", NULL, 676, 8186, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"xml", NULL, 677, 648, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG | NUITKA_PACKAGE_FLAG},
    {"xml.dom", NULL, 678, 5486, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG | NUITKA_PACKAGE_FLAG},
    {"xml.dom.NodeFilter", NULL, 679, 932, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"xml.dom.domreg", NULL, 680, 2815, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"xml.dom.expatbuilder", NULL, 681, 27306, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"xml.dom.minicompat", NULL, 682, 2707, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"xml.dom.minidom", NULL, 683, 55339, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"xml.dom.pulldom", NULL, 684, 10656, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"xml.dom.xmlbuilder", NULL, 685, 12459, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"xml.etree", NULL, 686, 87, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG | NUITKA_PACKAGE_FLAG},
    {"xml.etree.ElementInclude", NULL, 687, 1544, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"xml.etree.ElementPath", NULL, 688, 8399, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"xml.etree.ElementTree", NULL, 689, 55587, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"xml.etree.cElementTree", NULL, 690, 138, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"xml.parsers", NULL, 691, 261, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG | NUITKA_PACKAGE_FLAG},
    {"xml.parsers.expat", NULL, 692, 299, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"xml.sax", NULL, 693, 3175, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG | NUITKA_PACKAGE_FLAG},
    {"xml.sax._exceptions", NULL, 694, 5409, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"xml.sax.expatreader", NULL, 695, 12460, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"xml.sax.handler", NULL, 696, 12387, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"xml.sax.saxutils", NULL, 697, 12884, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"xml.sax.xmlreader", NULL, 698, 16809, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"xmlrpc", NULL, 699, 84, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG | NUITKA_PACKAGE_FLAG},
    {"xmlrpc.client", NULL, 700, 34504, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"xmlrpc.server", NULL, 701, 29373, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"zipapp", NULL, 702, 5819, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"zipfile", NULL, 703, 58479, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"__future__", NULL, 0, 4123, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"_bootlocale", NULL, 1, 1208, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"_collections_abc", NULL, 2, 28706, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"_compat_pickle", NULL, 3, 5466, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"_compression", NULL, 4, 4111, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"_dummy_thread", NULL, 5, 6002, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"_markupbase", NULL, 6, 7755, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"_osx_support", NULL, 7, 11558, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"_py_abc", NULL, 8, 4635, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"_pyio", NULL, 9, 74044, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"_sitebuiltins", NULL, 10, 3446, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"_strptime", NULL, 11, 16009, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"_threading_local", NULL, 12, 6411, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"_weakrefset", NULL, 13, 7565, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"abc", NULL, 14, 5299, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"aifc", NULL, 15, 25439, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"argparse", NULL, 16, 62242, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"ast", NULL, 17, 16728, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"asynchat", NULL, 18, 6816, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"asyncio", NULL, 19, 706, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG | NUITKA_PACKAGE_FLAG},
    {"asyncio.base_events", NULL, 20, 50985, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"asyncio.base_futures", NULL, 21, 1863, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"asyncio.base_subprocess", NULL, 22, 9381, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"asyncio.base_tasks", NULL, 23, 1909, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"asyncio.constants", NULL, 24, 546, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"asyncio.coroutines", NULL, 25, 6619, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"asyncio.events", NULL, 26, 28022, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"asyncio.exceptions", NULL, 27, 2514, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"asyncio.format_helpers", NULL, 28, 2297, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"asyncio.futures", NULL, 29, 11158, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"asyncio.locks", NULL, 30, 16333, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"asyncio.log", NULL, 31, 191, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"asyncio.proactor_events", NULL, 32, 24110, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"asyncio.protocols", NULL, 33, 8579, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"asyncio.queues", NULL, 34, 8346, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"asyncio.runners", NULL, 35, 1912, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"asyncio.selector_events", NULL, 36, 29650, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"asyncio.sslproto", NULL, 37, 21583, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"asyncio.staggered", NULL, 38, 4083, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"asyncio.streams", NULL, 39, 20605, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"asyncio.subprocess", NULL, 40, 7323, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"asyncio.tasks", NULL, 41, 24246, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"asyncio.transports", NULL, 42, 12227, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"asyncio.trsock", NULL, 43, 8448, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"asyncio.windows_events", NULL, 44, 24548, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"asyncio.windows_utils", NULL, 45, 4436, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"asyncore", NULL, 46, 15993, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"base64", NULL, 47, 17036, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"bdb", NULL, 48, 24886, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"binhex", NULL, 49, 12099, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"bisect", NULL, 50, 2319, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"bz2", NULL, 51, 11410, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"cProfile", NULL, 52, 5445, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"calendar", NULL, 53, 27029, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"cgi", NULL, 54, 26509, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"cgitb", NULL, 55, 10115, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"chunk", NULL, 56, 4804, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"cmd", NULL, 57, 12591, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"code", NULL, 58, 9878, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"codecs", NULL, 59, 33921, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"codeop", NULL, 60, 6382, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"collections", NULL, 61, 46392, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG | NUITKA_PACKAGE_FLAG},
    {"collections.abc", NULL, 62, 28705, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"colorsys", NULL, 63, 3205, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"compileall", NULL, 64, 9375, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"concurrent", NULL, 65, 88, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG | NUITKA_PACKAGE_FLAG},
    {"concurrent.futures", NULL, 66, 1064, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG | NUITKA_PACKAGE_FLAG},
    {"concurrent.futures._base", NULL, 67, 21905, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"concurrent.futures.process", NULL, 68, 20265, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"concurrent.futures.thread", NULL, 69, 5783, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"configparser", NULL, 70, 45683, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"contextlib", NULL, 71, 20194, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"contextvars", NULL, 72, 208, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"copy", NULL, 73, 6952, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"copyreg", NULL, 74, 4283, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"csv", NULL, 75, 11875, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"ctypes", NULL, 76, 16328, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG | NUITKA_PACKAGE_FLAG},
    {"ctypes._aix", NULL, 77, 9809, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"ctypes._endian", NULL, 78, 1894, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"ctypes.macholib", NULL, 79, 255, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG | NUITKA_PACKAGE_FLAG},
    {"ctypes.macholib.dyld", NULL, 80, 4701, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"ctypes.macholib.dylib", NULL, 81, 1881, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"ctypes.macholib.framework", NULL, 82, 2161, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"ctypes.util", NULL, 83, 8419, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"ctypes.wintypes", NULL, 84, 5068, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"dataclasses", NULL, 85, 23618, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"datetime", NULL, 86, 57138, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"dbm", NULL, 87, 4148, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG | NUITKA_PACKAGE_FLAG},
    {"dbm.dumb", NULL, 88, 7738, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"decimal", NULL, 89, 160697, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"difflib", NULL, 90, 59403, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"dis", NULL, 91, 15773, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"distutils", NULL, 92, 340, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG | NUITKA_PACKAGE_FLAG},
    {"distutils._msvccompiler", NULL, 93, 12931, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"distutils.archive_util", NULL, 94, 6504, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"distutils.bcppcompiler", NULL, 95, 6488, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"distutils.ccompiler", NULL, 96, 33262, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"distutils.cmd", NULL, 97, 13913, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"distutils.command", NULL, 98, 499, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG | NUITKA_PACKAGE_FLAG},
    {"distutils.command.bdist", NULL, 99, 3631, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"distutils.command.bdist_dumb", NULL, 100, 3557, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"distutils.command.bdist_msi", NULL, 101, 19588, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"distutils.command.bdist_rpm", NULL, 102, 12393, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"distutils.command.bdist_wininst", NULL, 103, 8454, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"distutils.command.build", NULL, 104, 3846, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"distutils.command.build_clib", NULL, 105, 4779, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"distutils.command.build_ext", NULL, 106, 16102, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"distutils.command.build_py", NULL, 107, 10445, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"distutils.command.build_scripts", NULL, 108, 4289, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"distutils.command.check", NULL, 109, 4850, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"distutils.command.clean", NULL, 110, 2065, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"distutils.command.config", NULL, 111, 10192, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"distutils.command.install", NULL, 112, 13537, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"distutils.command.install_data", NULL, 113, 2254, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"distutils.command.install_egg_info", NULL, 114, 2961, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"distutils.command.install_headers", NULL, 115, 1673, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"distutils.command.install_lib", NULL, 116, 5078, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"distutils.command.install_scripts", NULL, 117, 2106, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"distutils.command.register", NULL, 118, 8420, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"distutils.command.sdist", NULL, 119, 14481, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"distutils.command.upload", NULL, 120, 4904, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"distutils.config", NULL, 121, 3474, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"distutils.core", NULL, 122, 6579, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"distutils.cygwinccompiler", NULL, 123, 8710, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"distutils.debug", NULL, 124, 159, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"distutils.dep_util", NULL, 125, 2679, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"distutils.dir_util", NULL, 126, 5788, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"distutils.dist", NULL, 127, 34457, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"distutils.errors", NULL, 128, 5215, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"distutils.extension", NULL, 129, 6888, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"distutils.fancy_getopt", NULL, 130, 10621, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"distutils.file_util", NULL, 131, 5898, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"distutils.filelist", NULL, 132, 9832, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"distutils.log", NULL, 133, 2280, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"distutils.msvc9compiler", NULL, 134, 17475, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"distutils.msvccompiler", NULL, 135, 14688, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"distutils.spawn", NULL, 136, 5071, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"distutils.sysconfig", NULL, 137, 12196, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"distutils.text_file", NULL, 138, 8404, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"distutils.unixccompiler", NULL, 139, 6765, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"distutils.util", NULL, 140, 15511, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"distutils.version", NULL, 141, 7276, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"distutils.versionpredicate", NULL, 142, 5100, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"doctest", NULL, 143, 75939, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"dummy_threading", NULL, 144, 1075, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"email", NULL, 145, 1647, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG | NUITKA_PACKAGE_FLAG},
    {"email._encoded_words", NULL, 146, 5651, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"email._header_value_parser", NULL, 147, 79898, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"email._parseaddr", NULL, 148, 12419, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"email._policybase", NULL, 149, 14775, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"email.base64mime", NULL, 150, 3200, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"email.charset", NULL, 151, 11424, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"email.contentmanager", NULL, 152, 7326, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"email.encoders", NULL, 153, 1577, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"email.errors", NULL, 154, 5870, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"email.feedparser", NULL, 155, 10607, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"email.generator", NULL, 156, 12489, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"email.header", NULL, 157, 16404, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"email.headerregistry", NULL, 158, 22009, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"email.iterators", NULL, 159, 1885, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"email.message", NULL, 160, 37843, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"email.mime", NULL, 161, 88, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG | NUITKA_PACKAGE_FLAG},
    {"email.mime.application", NULL, 162, 1424, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"email.mime.audio", NULL, 163, 2589, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"email.mime.base", NULL, 164, 1006, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"email.mime.image", NULL, 165, 1869, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"email.mime.message", NULL, 166, 1247, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"email.mime.multipart", NULL, 167, 1467, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"email.mime.nonmultipart", NULL, 168, 729, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"email.mime.text", NULL, 169, 1276, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"email.parser", NULL, 170, 5687, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"email.policy", NULL, 171, 9623, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"email.quoprimime", NULL, 172, 7643, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"email.utils", NULL, 173, 9507, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"encodings", NULL, 174, 3859, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG | NUITKA_PACKAGE_FLAG},
    {"encodings.aliases", NULL, 175, 6295, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"encodings.ascii", NULL, 176, 1846, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"encodings.base64_codec", NULL, 177, 2364, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"encodings.big5", NULL, 178, 1374, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"encodings.big5hkscs", NULL, 179, 1384, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"encodings.bz2_codec", NULL, 180, 3255, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"encodings.charmap", NULL, 181, 2856, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"encodings.cp037", NULL, 182, 2387, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"encodings.cp1006", NULL, 183, 2463, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"encodings.cp1026", NULL, 184, 2391, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"encodings.cp1125", NULL, 185, 8094, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"encodings.cp1140", NULL, 186, 2377, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"encodings.cp1250", NULL, 187, 2414, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"encodings.cp1251", NULL, 188, 2411, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"encodings.cp1252", NULL, 189, 2414, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"encodings.cp1253", NULL, 190, 2427, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"encodings.cp1254", NULL, 191, 2416, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"encodings.cp1255", NULL, 192, 2435, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"encodings.cp1256", NULL, 193, 2413, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"encodings.cp1257", NULL, 194, 2421, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"encodings.cp1258", NULL, 195, 2419, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"encodings.cp273", NULL, 196, 2373, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"encodings.cp424", NULL, 197, 2417, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"encodings.cp437", NULL, 198, 7811, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"encodings.cp500", NULL, 199, 2387, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"encodings.cp720", NULL, 200, 2484, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"encodings.cp737", NULL, 201, 8133, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"encodings.cp775", NULL, 202, 7841, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"encodings.cp850", NULL, 203, 7472, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"encodings.cp852", NULL, 204, 7849, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"encodings.cp855", NULL, 205, 8102, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"encodings.cp856", NULL, 206, 2449, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"encodings.cp857", NULL, 207, 7452, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"encodings.cp858", NULL, 208, 7442, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"encodings.cp860", NULL, 209, 7790, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"encodings.cp861", NULL, 210, 7805, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"encodings.cp862", NULL, 211, 7994, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"encodings.cp863", NULL, 212, 7805, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"encodings.cp864", NULL, 213, 7949, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"encodings.cp865", NULL, 214, 7805, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"encodings.cp866", NULL, 215, 8138, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"encodings.cp869", NULL, 216, 7829, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"encodings.cp874", NULL, 217, 2515, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"encodings.cp875", NULL, 218, 2384, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"encodings.cp932", NULL, 219, 1376, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"encodings.cp949", NULL, 220, 1376, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"encodings.cp950", NULL, 221, 1376, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"encodings.euc_jis_2004", NULL, 222, 1390, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"encodings.euc_jisx0213", NULL, 223, 1390, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"encodings.euc_jp", NULL, 224, 1378, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"encodings.euc_kr", NULL, 225, 1378, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"encodings.gb18030", NULL, 226, 1380, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"encodings.gb2312", NULL, 227, 1378, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"encodings.gbk", NULL, 228, 1372, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"encodings.hex_codec", NULL, 229, 2351, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"encodings.hp_roman8", NULL, 230, 2588, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"encodings.hz", NULL, 231, 1370, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"encodings.idna", NULL, 232, 5582, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"encodings.iso2022_jp", NULL, 233, 1391, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"encodings.iso2022_jp_1", NULL, 234, 1395, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"encodings.iso2022_jp_2", NULL, 235, 1395, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"encodings.iso2022_jp_2004", NULL, 236, 1401, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"encodings.iso2022_jp_3", NULL, 237, 1395, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"encodings.iso2022_jp_ext", NULL, 238, 1399, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"encodings.iso2022_kr", NULL, 239, 1391, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"encodings.iso8859_1", NULL, 240, 2386, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"encodings.iso8859_10", NULL, 241, 2391, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"encodings.iso8859_11", NULL, 242, 2485, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"encodings.iso8859_13", NULL, 243, 2394, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"encodings.iso8859_14", NULL, 244, 2412, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"encodings.iso8859_15", NULL, 245, 2391, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"encodings.iso8859_16", NULL, 246, 2393, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"encodings.iso8859_2", NULL, 247, 2386, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"encodings.iso8859_3", NULL, 248, 2393, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"encodings.iso8859_4", NULL, 249, 2386, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"encodings.iso8859_5", NULL, 250, 2387, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"encodings.iso8859_6", NULL, 251, 2431, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"encodings.iso8859_7", NULL, 252, 2394, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"encodings.iso8859_8", NULL, 253, 2425, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"encodings.iso8859_9", NULL, 254, 2386, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"encodings.johab", NULL, 255, 1376, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"encodings.koi8_r", NULL, 256, 2438, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"encodings.koi8_t", NULL, 257, 2349, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"encodings.koi8_u", NULL, 258, 2424, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"encodings.kz1048", NULL, 259, 2401, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"encodings.latin_1", NULL, 260, 1858, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"encodings.mac_arabic", NULL, 261, 7705, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"encodings.mac_centeuro", NULL, 262, 2425, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"encodings.mac_croatian", NULL, 263, 2433, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"encodings.mac_cyrillic", NULL, 264, 2423, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"encodings.mac_farsi", NULL, 265, 2367, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"encodings.mac_greek", NULL, 266, 2407, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"encodings.mac_iceland", NULL, 267, 2426, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"encodings.mac_latin2", NULL, 268, 2567, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"encodings.mac_roman", NULL, 269, 2424, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"encodings.mac_romanian", NULL, 270, 2434, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"encodings.mac_turkish", NULL, 271, 2427, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"encodings.mbcs", NULL, 272, 1676, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"encodings.oem", NULL, 273, 1489, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"encodings.palmos", NULL, 274, 2414, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"encodings.ptcp154", NULL, 275, 2508, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"encodings.punycode", NULL, 276, 6280, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"encodings.quopri_codec", NULL, 277, 2380, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"encodings.raw_unicode_escape", NULL, 278, 1727, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"encodings.rot_13", NULL, 279, 2966, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"encodings.shift_jis", NULL, 280, 1384, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"encodings.shift_jis_2004", NULL, 281, 1394, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"encodings.shift_jisx0213", NULL, 282, 1394, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"encodings.tis_620", NULL, 283, 2476, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"encodings.undefined", NULL, 284, 2060, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"encodings.unicode_escape", NULL, 285, 1707, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"encodings.utf_16", NULL, 286, 4837, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"encodings.utf_16_be", NULL, 287, 1615, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"encodings.utf_16_le", NULL, 288, 1615, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"encodings.utf_32", NULL, 289, 4730, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"encodings.utf_32_be", NULL, 290, 1508, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"encodings.utf_32_le", NULL, 291, 1508, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"encodings.utf_7", NULL, 292, 1536, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"encodings.utf_8", NULL, 293, 1595, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"encodings.utf_8_sig", NULL, 294, 4511, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"encodings.uu_codec", NULL, 295, 3214, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"encodings.zlib_codec", NULL, 296, 3074, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"enum", NULL, 297, 25927, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"filecmp", NULL, 298, 8392, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"fileinput", NULL, 299, 13338, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"fnmatch", NULL, 300, 3320, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"formatter", NULL, 301, 17510, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"fractions", NULL, 302, 18704, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"ftplib", NULL, 303, 27972, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"functools", NULL, 304, 27866, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"genericpath", NULL, 305, 3966, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"getopt", NULL, 306, 6236, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"getpass", NULL, 307, 4143, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"gettext", NULL, 308, 17848, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"glob", NULL, 309, 4308, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"gzip", NULL, 310, 18149, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"hashlib", NULL, 311, 6692, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"heapq", NULL, 312, 14035, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"hmac", NULL, 313, 6353, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"html", NULL, 314, 3574, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG | NUITKA_PACKAGE_FLAG},
    {"html.entities", NULL, 315, 50494, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"html.parser", NULL, 316, 11163, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"http", NULL, 317, 6020, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG | NUITKA_PACKAGE_FLAG},
    {"http.client", NULL, 318, 34872, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"http.cookiejar", NULL, 319, 53607, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"http.cookies", NULL, 320, 15233, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"http.server", NULL, 321, 34357, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"imaplib", NULL, 322, 41307, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"imghdr", NULL, 323, 4083, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"imp", NULL, 324, 9774, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"importlib", NULL, 325, 3714, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG | NUITKA_PACKAGE_FLAG},
    {"importlib._bootstrap", NULL, 326, 28570, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"importlib._bootstrap_external", NULL, 327, 45152, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"importlib.abc", NULL, 328, 13538, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"importlib.machinery", NULL, 329, 927, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"importlib.metadata", NULL, 330, 20841, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"importlib.resources", NULL, 331, 6475, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"importlib.util", NULL, 332, 9257, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"inspect", NULL, 333, 80558, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"io", NULL, 334, 3419, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"ipaddress", NULL, 335, 59851, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"json", NULL, 336, 12564, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG | NUITKA_PACKAGE_FLAG},
    {"json.decoder", NULL, 337, 9809, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"json.encoder", NULL, 338, 11136, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"json.scanner", NULL, 339, 1916, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"json.tool", NULL, 340, 1861, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"keyword", NULL, 341, 963, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"lib2to3", NULL, 342, 85, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG | NUITKA_PACKAGE_FLAG},
    {"lib2to3.btm_matcher", NULL, 343, 4842, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"lib2to3.btm_utils", NULL, 344, 6115, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"lib2to3.fixer_base", NULL, 345, 6218, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"lib2to3.fixer_util", NULL, 346, 12163, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"lib2to3.fixes", NULL, 347, 91, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG | NUITKA_PACKAGE_FLAG},
    {"lib2to3.fixes.fix_apply", NULL, 348, 1638, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"lib2to3.fixes.fix_asserts", NULL, 349, 1237, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"lib2to3.fixes.fix_basestring", NULL, 350, 621, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"lib2to3.fixes.fix_buffer", NULL, 351, 766, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"lib2to3.fixes.fix_dict", NULL, 352, 3293, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"lib2to3.fixes.fix_except", NULL, 353, 2776, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"lib2to3.fixes.fix_exec", NULL, 354, 1107, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"lib2to3.fixes.fix_execfile", NULL, 355, 1655, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"lib2to3.fixes.fix_exitfunc", NULL, 356, 2264, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"lib2to3.fixes.fix_filter", NULL, 357, 2402, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"lib2to3.fixes.fix_funcattrs", NULL, 358, 934, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"lib2to3.fixes.fix_future", NULL, 359, 742, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"lib2to3.fixes.fix_getcwdu", NULL, 360, 746, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"lib2to3.fixes.fix_has_key", NULL, 361, 2897, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"lib2to3.fixes.fix_idioms", NULL, 362, 3879, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"lib2to3.fixes.fix_import", NULL, 363, 2745, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"lib2to3.fixes.fix_imports", NULL, 364, 4353, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"lib2to3.fixes.fix_imports2", NULL, 365, 504, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"lib2to3.fixes.fix_input", NULL, 366, 908, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"lib2to3.fixes.fix_intern", NULL, 367, 1092, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"lib2to3.fixes.fix_isinstance", NULL, 368, 1509, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"lib2to3.fixes.fix_itertools", NULL, 369, 1508, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"lib2to3.fixes.fix_itertools_imports", NULL, 370, 1536, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"lib2to3.fixes.fix_long", NULL, 371, 663, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"lib2to3.fixes.fix_map", NULL, 372, 3055, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"lib2to3.fixes.fix_metaclass", NULL, 373, 5305, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"lib2to3.fixes.fix_methodattrs", NULL, 374, 896, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"lib2to3.fixes.fix_ne", NULL, 375, 769, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"lib2to3.fixes.fix_next", NULL, 376, 3041, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"lib2to3.fixes.fix_nonzero", NULL, 377, 881, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"lib2to3.fixes.fix_numliterals", NULL, 378, 981, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"lib2to3.fixes.fix_operator", NULL, 379, 4178, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"lib2to3.fixes.fix_paren", NULL, 380, 1348, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"lib2to3.fixes.fix_print", NULL, 381, 2301, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"lib2to3.fixes.fix_raise", NULL, 382, 2211, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"lib2to3.fixes.fix_raw_input", NULL, 383, 753, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"lib2to3.fixes.fix_reduce", NULL, 384, 1086, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"lib2to3.fixes.fix_reload", NULL, 385, 1104, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"lib2to3.fixes.fix_renames", NULL, 386, 1965, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"lib2to3.fixes.fix_repr", NULL, 387, 803, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"lib2to3.fixes.fix_set_literal", NULL, 388, 1641, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"lib2to3.fixes.fix_standarderror", NULL, 389, 678, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"lib2to3.fixes.fix_sys_exc", NULL, 390, 1369, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"lib2to3.fixes.fix_throw", NULL, 391, 1766, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"lib2to3.fixes.fix_tuple_params", NULL, 392, 4549, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"lib2to3.fixes.fix_types", NULL, 393, 1795, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"lib2to3.fixes.fix_unicode", NULL, 394, 1507, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"lib2to3.fixes.fix_urllib", NULL, 395, 5957, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"lib2to3.fixes.fix_ws_comma", NULL, 396, 1077, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"lib2to3.fixes.fix_xrange", NULL, 397, 2487, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"lib2to3.fixes.fix_xreadlines", NULL, 398, 1081, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"lib2to3.fixes.fix_zip", NULL, 399, 1541, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"lib2to3.main", NULL, 400, 8573, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"lib2to3.patcomp", NULL, 401, 5604, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"lib2to3.pgen2", NULL, 402, 121, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG | NUITKA_PACKAGE_FLAG},
    {"lib2to3.pgen2.driver", NULL, 403, 5106, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"lib2to3.pgen2.grammar", NULL, 404, 5630, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"lib2to3.pgen2.literals", NULL, 405, 1519, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"lib2to3.pgen2.parse", NULL, 406, 6463, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"lib2to3.pgen2.pgen", NULL, 407, 9741, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"lib2to3.pgen2.token", NULL, 408, 1852, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"lib2to3.pgen2.tokenize", NULL, 409, 15237, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"lib2to3.pygram", NULL, 410, 1225, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"lib2to3.pytree", NULL, 411, 24307, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"lib2to3.refactor", NULL, 412, 20405, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"linecache", NULL, 413, 3832, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"locale", NULL, 414, 34654, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"logging", NULL, 415, 65234, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG | NUITKA_PACKAGE_FLAG},
    {"logging.config", NULL, 416, 23189, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"logging.handlers", NULL, 417, 43163, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"lzma", NULL, 418, 11983, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"mailbox", NULL, 419, 60229, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"mailcap", NULL, 420, 6441, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"mimetypes", NULL, 421, 15996, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"modulefinder", NULL, 422, 16080, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"msilib", NULL, 423, 15965, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG | NUITKA_PACKAGE_FLAG},
    {"msilib.schema", NULL, 424, 52135, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"msilib.sequence", NULL, 425, 2565, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"msilib.text", NULL, 426, 8427, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"multiprocessing", NULL, 427, 618, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG | NUITKA_PACKAGE_FLAG},
    {"multiprocessing.connection", NULL, 428, 25199, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"multiprocessing.context", NULL, 429, 12983, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"multiprocessing.dummy", NULL, 430, 3859, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG | NUITKA_PACKAGE_FLAG},
    {"multiprocessing.dummy.connection", NULL, 431, 2513, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"multiprocessing.forkserver", NULL, 432, 8324, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"multiprocessing.heap", NULL, 433, 7602, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"multiprocessing.managers", NULL, 434, 41511, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"multiprocessing.pool", NULL, 435, 24990, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"multiprocessing.popen_spawn_win32", NULL, 436, 3426, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"multiprocessing.process", NULL, 437, 10966, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"multiprocessing.queues", NULL, 438, 9519, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"multiprocessing.reduction", NULL, 439, 8168, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"multiprocessing.resource_sharer", NULL, 440, 5221, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"multiprocessing.resource_tracker", NULL, 441, 5150, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"multiprocessing.shared_memory", NULL, 442, 14355, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"multiprocessing.sharedctypes", NULL, 443, 7014, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"multiprocessing.spawn", NULL, 444, 6661, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"multiprocessing.synchronize", NULL, 445, 11256, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"multiprocessing.util", NULL, 446, 11451, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"netrc", NULL, 447, 3742, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"nntplib", NULL, 448, 33939, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"ntpath", NULL, 449, 14622, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"nturl2path", NULL, 450, 1709, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"numbers", NULL, 451, 12167, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"opcode", NULL, 513, 5385, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"operator", NULL, 514, 13656, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"optparse", NULL, 515, 48022, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"os", NULL, 516, 31362, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"pathlib", NULL, 517, 44174, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"pdb", NULL, 518, 47191, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"pickle", NULL, 519, 46873, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"pickletools", NULL, 520, 67169, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"pipes", NULL, 521, 7760, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"pkgutil", NULL, 537, 16301, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"platform", NULL, 538, 24372, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"plistlib", NULL, 539, 27130, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"poplib", NULL, 540, 13424, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"posixpath", NULL, 541, 10393, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"pprint", NULL, 542, 16246, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"profile", NULL, 543, 14723, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"pstats", NULL, 544, 22031, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"py_compile", NULL, 545, 7317, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"pyclbr", NULL, 546, 10416, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"pydoc", NULL, 547, 83336, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"pydoc_data", NULL, 548, 88, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG | NUITKA_PACKAGE_FLAG},
    {"pydoc_data.topics", NULL, 549, 426197, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"queue", NULL, 550, 10591, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"quopri", NULL, 551, 5713, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"random", NULL, 552, 20073, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"re", NULL, 553, 14387, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"reprlib", NULL, 554, 5268, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"rlcompleter", NULL, 555, 5720, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"runpy", NULL, 556, 8146, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"sched", NULL, 557, 6497, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"secrets", NULL, 558, 2155, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"selectors", NULL, 559, 16900, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"shelve", NULL, 590, 9455, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"shlex", NULL, 591, 7501, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"shutil", NULL, 592, 37184, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"signal", NULL, 593, 2808, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"site", NULL, 594, 13237, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"smtpd", NULL, 595, 26428, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"smtplib", NULL, 596, 35497, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"sndhdr", NULL, 597, 6954, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"socket", NULL, 598, 27752, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"socketserver", NULL, 599, 25326, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"sqlite3", NULL, 600, 116, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG | NUITKA_PACKAGE_FLAG},
    {"sqlite3.dbapi2", NULL, 601, 2469, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"sqlite3.dump", NULL, 602, 1894, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"sre_compile", NULL, 603, 15107, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"sre_constants", NULL, 604, 6324, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"sre_parse", NULL, 605, 21612, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"ssl", NULL, 606, 44561, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"stat", NULL, 607, 4337, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"statistics", NULL, 608, 33618, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"string", NULL, 609, 7265, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"stringprep", NULL, 610, 10982, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"struct", NULL, 611, 295, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"subprocess", NULL, 612, 41932, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"sunau", NULL, 613, 17045, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"symbol", NULL, 614, 2369, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"symtable", NULL, 615, 11287, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"sysconfig", NULL, 616, 15961, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"tabnanny", NULL, 617, 6995, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"tarfile", NULL, 618, 62626, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"telnetlib", NULL, 619, 18202, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"tempfile", NULL, 620, 23362, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"textwrap", NULL, 621, 13484, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"this", NULL, 622, 1226, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"threading", NULL, 623, 39941, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"timeit", NULL, 624, 11742, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"tkinter", NULL, 625, 176163, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG | NUITKA_PACKAGE_FLAG},
    {"tkinter.colorchooser", NULL, 626, 2217, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"tkinter.commondialog", NULL, 627, 1077, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"tkinter.constants", NULL, 628, 1619, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"tkinter.dialog", NULL, 629, 1437, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"tkinter.dnd", NULL, 630, 11227, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"tkinter.filedialog", NULL, 631, 12268, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"tkinter.font", NULL, 632, 6268, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"tkinter.messagebox", NULL, 633, 2956, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"tkinter.scrolledtext", NULL, 634, 2142, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"tkinter.simpledialog", NULL, 635, 10963, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"tkinter.tix", NULL, 636, 79372, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"tkinter.ttk", NULL, 637, 56663, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"token", NULL, 638, 2450, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"tokenize", NULL, 639, 17125, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"trace", NULL, 640, 19991, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"traceback", NULL, 641, 19903, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"tracemalloc", NULL, 642, 17328, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"turtle", NULL, 643, 129987, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"types", NULL, 644, 9142, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"typing", NULL, 645, 62385, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"unittest", NULL, 646, 3082, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG | NUITKA_PACKAGE_FLAG},
    {"unittest.async_case", NULL, 647, 4148, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"unittest.case", NULL, 648, 50449, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"unittest.loader", NULL, 649, 14501, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"unittest.main", NULL, 650, 7499, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"unittest.mock", NULL, 651, 77331, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"unittest.result", NULL, 652, 7256, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"unittest.runner", NULL, 653, 6981, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"unittest.signals", NULL, 654, 2185, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"unittest.suite", NULL, 655, 9900, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"unittest.util", NULL, 656, 4396, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"urllib", NULL, 657, 84, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG | NUITKA_PACKAGE_FLAG},
    {"urllib.error", NULL, 658, 2774, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"urllib.parse", NULL, 659, 34519, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"urllib.request", NULL, 660, 72578, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"urllib.response", NULL, 661, 3254, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"urllib.robotparser", NULL, 662, 7292, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"uu", NULL, 663, 3570, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"uuid", NULL, 664, 23648, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"venv", NULL, 665, 14474, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG | NUITKA_PACKAGE_FLAG},
    {"warnings", NULL, 666, 13617, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"wave", NULL, 667, 18114, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"weakref", NULL, 668, 19483, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"webbrowser", NULL, 669, 17085, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"wsgiref", NULL, 670, 680, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG | NUITKA_PACKAGE_FLAG},
    {"wsgiref.handlers", NULL, 671, 16411, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"wsgiref.headers", NULL, 672, 7721, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"wsgiref.simple_server", NULL, 673, 5226, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"wsgiref.util", NULL, 674, 5377, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"wsgiref.validate", NULL, 675, 14720, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"xdrlib", NULL, 676, 8186, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"xml", NULL, 677, 648, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG | NUITKA_PACKAGE_FLAG},
    {"xml.dom", NULL, 678, 5486, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG | NUITKA_PACKAGE_FLAG},
    {"xml.dom.NodeFilter", NULL, 679, 932, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"xml.dom.domreg", NULL, 680, 2815, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"xml.dom.expatbuilder", NULL, 681, 27306, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"xml.dom.minicompat", NULL, 682, 2707, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"xml.dom.minidom", NULL, 683, 55339, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"xml.dom.pulldom", NULL, 684, 10656, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"xml.dom.xmlbuilder", NULL, 685, 12459, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"xml.etree", NULL, 686, 87, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG | NUITKA_PACKAGE_FLAG},
    {"xml.etree.ElementInclude", NULL, 687, 1544, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"xml.etree.ElementPath", NULL, 688, 8399, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"xml.etree.ElementTree", NULL, 689, 55587, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"xml.etree.cElementTree", NULL, 690, 138, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"xml.parsers", NULL, 691, 261, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG | NUITKA_PACKAGE_FLAG},
    {"xml.parsers.expat", NULL, 692, 299, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"xml.sax", NULL, 693, 3175, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG | NUITKA_PACKAGE_FLAG},
    {"xml.sax._exceptions", NULL, 694, 5409, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"xml.sax.expatreader", NULL, 695, 12460, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"xml.sax.handler", NULL, 696, 12387, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"xml.sax.saxutils", NULL, 697, 12884, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"xml.sax.xmlreader", NULL, 698, 16809, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"xmlrpc", NULL, 699, 84, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG | NUITKA_PACKAGE_FLAG},
    {"xmlrpc.client", NULL, 700, 34504, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"xmlrpc.server", NULL, 701, 29373, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"zipapp", NULL, 702, 5819, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"zipfile", NULL, 703, 58479, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {NULL, NULL, 0, 0, 0}
};

static void _loadBytesCodesBlob()
{
    static bool init_done = false;

    if (init_done == false) {
        loadConstantsBlob((PyObject **)bytecode_data, ".bytecode");

        init_done = true;
    }
}


void setupMetaPathBasedLoader(void) {
    static bool init_done = false;
    if (init_done == false) {
        _loadBytesCodesBlob();
        registerMetaPathBasedUnfreezer(meta_path_loader_entries, bytecode_data);

        init_done = true;
    }


}

// This provides the frozen (compiled bytecode) files that are included if
// any.

// These modules should be loaded as bytecode. They may e.g. have to be loadable
// during "Py_Initialize" already, or for irrelevance, they are only included
// in this un-optimized form. These are not compiled by Nuitka, and therefore
// are not accelerated at all, merely bundled with the binary or module, so
// that CPython library can start out finding them.

struct frozen_desc {
    char const *name;
    int index;
    int size;
};

static struct frozen_desc _frozen_modules[] = {
    {"_collections_abc", 2, 28706},
    {"_compression", 4, 4111},
    {"_weakrefset", 13, 7565},
    {"abc", 14, 5299},
    {"base64", 47, 17036},
    {"bz2", 51, 11410},
    {"codecs", 59, 33921},
    {"collections", 61, -46392},
    {"collections.abc", 62, 28705},
    {"copyreg", 74, 4283},
    {"dis", 91, 15773},
    {"encodings", 174, -3859},
    {"encodings.aliases", 175, 6295},
    {"encodings.ascii", 176, 1846},
    {"encodings.base64_codec", 177, 2364},
    {"encodings.big5", 178, 1374},
    {"encodings.big5hkscs", 179, 1384},
    {"encodings.bz2_codec", 180, 3255},
    {"encodings.charmap", 181, 2856},
    {"encodings.cp037", 182, 2387},
    {"encodings.cp1006", 183, 2463},
    {"encodings.cp1026", 184, 2391},
    {"encodings.cp1125", 185, 8094},
    {"encodings.cp1140", 186, 2377},
    {"encodings.cp1250", 187, 2414},
    {"encodings.cp1251", 188, 2411},
    {"encodings.cp1252", 189, 2414},
    {"encodings.cp1253", 190, 2427},
    {"encodings.cp1254", 191, 2416},
    {"encodings.cp1255", 192, 2435},
    {"encodings.cp1256", 193, 2413},
    {"encodings.cp1257", 194, 2421},
    {"encodings.cp1258", 195, 2419},
    {"encodings.cp273", 196, 2373},
    {"encodings.cp424", 197, 2417},
    {"encodings.cp437", 198, 7811},
    {"encodings.cp500", 199, 2387},
    {"encodings.cp720", 200, 2484},
    {"encodings.cp737", 201, 8133},
    {"encodings.cp775", 202, 7841},
    {"encodings.cp850", 203, 7472},
    {"encodings.cp852", 204, 7849},
    {"encodings.cp855", 205, 8102},
    {"encodings.cp856", 206, 2449},
    {"encodings.cp857", 207, 7452},
    {"encodings.cp858", 208, 7442},
    {"encodings.cp860", 209, 7790},
    {"encodings.cp861", 210, 7805},
    {"encodings.cp862", 211, 7994},
    {"encodings.cp863", 212, 7805},
    {"encodings.cp864", 213, 7949},
    {"encodings.cp865", 214, 7805},
    {"encodings.cp866", 215, 8138},
    {"encodings.cp869", 216, 7829},
    {"encodings.cp874", 217, 2515},
    {"encodings.cp875", 218, 2384},
    {"encodings.cp932", 219, 1376},
    {"encodings.cp949", 220, 1376},
    {"encodings.cp950", 221, 1376},
    {"encodings.euc_jis_2004", 222, 1390},
    {"encodings.euc_jisx0213", 223, 1390},
    {"encodings.euc_jp", 224, 1378},
    {"encodings.euc_kr", 225, 1378},
    {"encodings.gb18030", 226, 1380},
    {"encodings.gb2312", 227, 1378},
    {"encodings.gbk", 228, 1372},
    {"encodings.hex_codec", 229, 2351},
    {"encodings.hp_roman8", 230, 2588},
    {"encodings.hz", 231, 1370},
    {"encodings.idna", 232, 5582},
    {"encodings.iso2022_jp", 233, 1391},
    {"encodings.iso2022_jp_1", 234, 1395},
    {"encodings.iso2022_jp_2", 235, 1395},
    {"encodings.iso2022_jp_2004", 236, 1401},
    {"encodings.iso2022_jp_3", 237, 1395},
    {"encodings.iso2022_jp_ext", 238, 1399},
    {"encodings.iso2022_kr", 239, 1391},
    {"encodings.iso8859_1", 240, 2386},
    {"encodings.iso8859_10", 241, 2391},
    {"encodings.iso8859_11", 242, 2485},
    {"encodings.iso8859_13", 243, 2394},
    {"encodings.iso8859_14", 244, 2412},
    {"encodings.iso8859_15", 245, 2391},
    {"encodings.iso8859_16", 246, 2393},
    {"encodings.iso8859_2", 247, 2386},
    {"encodings.iso8859_3", 248, 2393},
    {"encodings.iso8859_4", 249, 2386},
    {"encodings.iso8859_5", 250, 2387},
    {"encodings.iso8859_6", 251, 2431},
    {"encodings.iso8859_7", 252, 2394},
    {"encodings.iso8859_8", 253, 2425},
    {"encodings.iso8859_9", 254, 2386},
    {"encodings.johab", 255, 1376},
    {"encodings.koi8_r", 256, 2438},
    {"encodings.koi8_t", 257, 2349},
    {"encodings.koi8_u", 258, 2424},
    {"encodings.kz1048", 259, 2401},
    {"encodings.latin_1", 260, 1858},
    {"encodings.mac_arabic", 261, 7705},
    {"encodings.mac_centeuro", 262, 2425},
    {"encodings.mac_croatian", 263, 2433},
    {"encodings.mac_cyrillic", 264, 2423},
    {"encodings.mac_farsi", 265, 2367},
    {"encodings.mac_greek", 266, 2407},
    {"encodings.mac_iceland", 267, 2426},
    {"encodings.mac_latin2", 268, 2567},
    {"encodings.mac_roman", 269, 2424},
    {"encodings.mac_romanian", 270, 2434},
    {"encodings.mac_turkish", 271, 2427},
    {"encodings.mbcs", 272, 1676},
    {"encodings.oem", 273, 1489},
    {"encodings.palmos", 274, 2414},
    {"encodings.ptcp154", 275, 2508},
    {"encodings.punycode", 276, 6280},
    {"encodings.quopri_codec", 277, 2380},
    {"encodings.raw_unicode_escape", 278, 1727},
    {"encodings.rot_13", 279, 2966},
    {"encodings.shift_jis", 280, 1384},
    {"encodings.shift_jis_2004", 281, 1394},
    {"encodings.shift_jisx0213", 282, 1394},
    {"encodings.tis_620", 283, 2476},
    {"encodings.undefined", 284, 2060},
    {"encodings.unicode_escape", 285, 1707},
    {"encodings.utf_16", 286, 4837},
    {"encodings.utf_16_be", 287, 1615},
    {"encodings.utf_16_le", 288, 1615},
    {"encodings.utf_32", 289, 4730},
    {"encodings.utf_32_be", 290, 1508},
    {"encodings.utf_32_le", 291, 1508},
    {"encodings.utf_7", 292, 1536},
    {"encodings.utf_8", 293, 1595},
    {"encodings.utf_8_sig", 294, 4511},
    {"encodings.uu_codec", 295, 3214},
    {"encodings.zlib_codec", 296, 3074},
    {"enum", 297, 25927},
    {"functools", 304, 27866},
    {"genericpath", 305, 3966},
    {"heapq", 312, 14035},
    {"importlib", 325, -3714},
    {"importlib._bootstrap", 326, 28570},
    {"importlib._bootstrap_external", 327, 45152},
    {"importlib.machinery", 329, 927},
    {"inspect", 333, 80558},
    {"io", 334, 3419},
    {"keyword", 341, 963},
    {"linecache", 413, 3832},
    {"locale", 414, 34654},
    {"ntpath", 449, 14622},
    {"opcode", 513, 5385},
    {"operator", 514, 13656},
    {"os", 516, 31362},
    {"quopri", 551, 5713},
    {"re", 553, 14387},
    {"reprlib", 554, 5268},
    {"sre_compile", 603, 15107},
    {"sre_constants", 604, 6324},
    {"sre_parse", 605, 21612},
    {"stat", 607, 4337},
    {"stringprep", 610, 10982},
    {"struct", 611, 295},
    {"threading", 623, 39941},
    {"token", 638, 2450},
    {"tokenize", 639, 17125},
    {"types", 644, 9142},
    {"warnings", 666, 13617},
    {NULL, 0, 0}
};


void copyFrozenModulesTo(struct _frozen *destination) {
    _loadBytesCodesBlob();

    struct frozen_desc *current = _frozen_modules;

    for (;;) {
        destination->name = (char *)current->name;
        destination->code = bytecode_data[current->index];
        destination->size = current->size;

        if (destination->name == NULL) break;

        current += 1;
        destination += 1;
    };
}


