
/* Code to register embedded modules for meta path based loading if any. */

#include <Python.h>

/* Use a hex version of our own to compare for versions. We do not care about pre-releases */
#if PY_MICRO_VERSION < 16
#define PYTHON_VERSION (PY_MAJOR_VERSION * 256 + PY_MINOR_VERSION * 16 + PY_MICRO_VERSION)
#else
#define PYTHON_VERSION (PY_MAJOR_VERSION * 256 + PY_MINOR_VERSION * 16 + 15)
#endif

#include "nuitka/constants_blob.h"

#include "nuitka/unfreezing.h"

/* Type bool */
#ifndef __cplusplus
#include "stdbool.h"
#endif

#if 200 > 0
static unsigned char *bytecode_data[200];
#else
static unsigned char **bytecode_data = NULL;
#endif

/* Table for lookup to find compiled or bytecode modules included in this
 * binary or module, or put along this binary as extension modules. We do
 * our own loading for each of these.
 */
extern PyObject *modulecode_PIL(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_PIL$BlpImagePlugin(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_PIL$BmpImagePlugin(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_PIL$BufrStubImagePlugin(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_PIL$CurImagePlugin(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_PIL$DcxImagePlugin(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_PIL$DdsImagePlugin(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_PIL$EpsImagePlugin(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_PIL$ExifTags(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_PIL$FitsImagePlugin(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_PIL$FitsStubImagePlugin(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_PIL$FliImagePlugin(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_PIL$FpxImagePlugin(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_PIL$FtexImagePlugin(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_PIL$GbrImagePlugin(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_PIL$GifImagePlugin(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_PIL$GimpGradientFile(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_PIL$GimpPaletteFile(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_PIL$GribStubImagePlugin(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_PIL$Hdf5StubImagePlugin(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_PIL$IcnsImagePlugin(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_PIL$IcoImagePlugin(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_PIL$ImImagePlugin(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_PIL$Image(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_PIL$ImageChops(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_PIL$ImageCms(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_PIL$ImageColor(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_PIL$ImageFile(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_PIL$ImageFilter(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_PIL$ImageMode(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_PIL$ImageOps(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_PIL$ImagePalette(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_PIL$ImageQt(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_PIL$ImageSequence(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_PIL$ImageShow(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_PIL$ImageTk(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_PIL$ImageWin(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_PIL$ImtImagePlugin(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_PIL$IptcImagePlugin(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_PIL$Jpeg2KImagePlugin(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_PIL$JpegImagePlugin(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_PIL$JpegPresets(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_PIL$McIdasImagePlugin(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_PIL$MicImagePlugin(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_PIL$MpegImagePlugin(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_PIL$MpoImagePlugin(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_PIL$MspImagePlugin(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_PIL$PaletteFile(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_PIL$PalmImagePlugin(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_PIL$PcdImagePlugin(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_PIL$PcxImagePlugin(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_PIL$PdfImagePlugin(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_PIL$PdfParser(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_PIL$PixarImagePlugin(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_PIL$PngImagePlugin(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_PIL$PpmImagePlugin(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_PIL$PsdImagePlugin(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_PIL$PyAccess(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_PIL$SgiImagePlugin(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_PIL$SpiderImagePlugin(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_PIL$SunImagePlugin(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_PIL$TgaImagePlugin(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_PIL$TiffImagePlugin(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_PIL$TiffTags(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_PIL$WebPImagePlugin(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_PIL$WmfImagePlugin(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_PIL$XVThumbImagePlugin(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_PIL$XbmImagePlugin(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_PIL$XpmImagePlugin(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_PIL$_binary(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_PIL$_deprecate(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_PIL$_util(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_PIL$_version(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_PIL$features(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_PyQt5(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_PyQt6(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode___main__(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode___parents_main__(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_bs4(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_bs4$builder(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_bs4$builder$_html5lib(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_bs4$builder$_htmlparser(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_bs4$builder$_lxml(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_bs4$css(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_bs4$dammit(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_bs4$element(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_bs4$formatter(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_certifi(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_certifi$core(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_cffi(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_cffi$api(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_cffi$commontypes(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_cffi$cparser(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_cffi$error(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_cffi$ffiplatform(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_cffi$lock(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_cffi$model(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_cffi$pkgconfig(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_cffi$vengine_cpy(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_cffi$vengine_gen(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_cffi$verifier(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_chardet(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_chardet$big5freq(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_chardet$big5prober(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_chardet$chardistribution(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_chardet$charsetgroupprober(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_chardet$charsetprober(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_chardet$codingstatemachine(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_chardet$codingstatemachinedict(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_chardet$cp949prober(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_chardet$enums(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_chardet$escprober(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_chardet$escsm(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_chardet$eucjpprober(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_chardet$euckrfreq(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_chardet$euckrprober(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_chardet$euctwfreq(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_chardet$euctwprober(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_chardet$gb2312freq(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_chardet$gb2312prober(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_chardet$hebrewprober(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_chardet$jisfreq(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_chardet$johabfreq(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_chardet$johabprober(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_chardet$jpcntx(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_chardet$langbulgarianmodel(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_chardet$langgreekmodel(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_chardet$langhebrewmodel(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_chardet$langrussianmodel(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_chardet$langthaimodel(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_chardet$langturkishmodel(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_chardet$latin1prober(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_chardet$macromanprober(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_chardet$mbcharsetprober(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_chardet$mbcsgroupprober(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_chardet$mbcssm(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_chardet$resultdict(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_chardet$sbcharsetprober(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_chardet$sbcsgroupprober(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_chardet$sjisprober(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_chardet$universaldetector(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_chardet$utf1632prober(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_chardet$utf8prober(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_chardet$version(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_charset_normalizer(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_charset_normalizer$api(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_charset_normalizer$assets(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_charset_normalizer$cd(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_charset_normalizer$constant(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_charset_normalizer$legacy(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_charset_normalizer$models(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_charset_normalizer$utils(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_charset_normalizer$version(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_contourpy(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_contourpy$_version(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_contourpy$chunk(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_contourpy$enum_util(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_cycler(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
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
extern PyObject *modulecode_defusedxml(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_defusedxml$ElementTree(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_defusedxml$cElementTree(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_defusedxml$common(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_defusedxml$expatbuilder(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_defusedxml$expatreader(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_defusedxml$minidom(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_defusedxml$pulldom(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_defusedxml$sax(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_defusedxml$xmlrpc(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_et_xmlfile(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_et_xmlfile$xmlfile(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_html5lib(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_html5lib$_ihatexml(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_html5lib$_inputstream(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_html5lib$_tokenizer(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_html5lib$_trie(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_html5lib$_trie$_base(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_html5lib$_trie$py(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_html5lib$_utils(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_html5lib$constants(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_html5lib$filters(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_html5lib$filters$alphabeticalattributes(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_html5lib$filters$base(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_html5lib$filters$inject_meta_charset(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_html5lib$filters$optionaltags(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_html5lib$filters$sanitizer(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_html5lib$filters$whitespace(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_html5lib$html5parser(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_html5lib$serializer(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_html5lib$treebuilders(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_html5lib$treebuilders$base(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_html5lib$treebuilders$dom(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_html5lib$treebuilders$etree(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_html5lib$treebuilders$etree_lxml(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_html5lib$treewalkers(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_html5lib$treewalkers$base(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_html5lib$treewalkers$dom(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_html5lib$treewalkers$etree(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_html5lib$treewalkers$etree_lxml(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_html5lib$treewalkers$genshi(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_jinja2(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_jinja2$_identifier(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_jinja2$async_utils(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_jinja2$bccache(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_jinja2$compiler(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_jinja2$constants(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_jinja2$debug(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_jinja2$defaults(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_jinja2$environment(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_jinja2$exceptions(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_jinja2$filters(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_jinja2$idtracking(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_jinja2$lexer(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_jinja2$loaders(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_jinja2$nodes(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_jinja2$optimizer(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_jinja2$parser(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_jinja2$runtime(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_jinja2$tests(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_jinja2$utils(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_jinja2$visitor(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_kiwisolver(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_lxml(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_lxml$cssselect(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_lxml$html(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_lxml$html$_setmixin(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_lxml$html$defs(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_markupsafe(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_markupsafe$_native(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_matplotlib(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_matplotlib$_afm(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_matplotlib$_api(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_matplotlib$_api$deprecation(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_matplotlib$_blocking_input(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_matplotlib$_cm(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_matplotlib$_cm_listed(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_matplotlib$_color_data(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_matplotlib$_constrained_layout(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_matplotlib$_docstring(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_matplotlib$_enums(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_matplotlib$_fontconfig_pattern(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_matplotlib$_layoutgrid(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_matplotlib$_mathtext(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_matplotlib$_mathtext_data(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_matplotlib$_pylab_helpers(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_matplotlib$_text_helpers(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_matplotlib$_tight_bbox(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_matplotlib$_tight_layout(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_matplotlib$_version(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_matplotlib$artist(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_matplotlib$axes(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_matplotlib$axes$_axes(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_matplotlib$axes$_base(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_matplotlib$axes$_secondary_axes(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_matplotlib$axis(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_matplotlib$backend_bases(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_matplotlib$backend_managers(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_matplotlib$backend_tools(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_matplotlib$backends(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_matplotlib$backends$_backend_tk(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_matplotlib$backends$backend_agg(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_matplotlib$backends$backend_tkagg(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_matplotlib$bezier(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_matplotlib$category(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_matplotlib$cbook(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_matplotlib$cm(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_matplotlib$collections(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_matplotlib$colorbar(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_matplotlib$colors(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_matplotlib$container(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_matplotlib$contour(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_matplotlib$dates(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_matplotlib$dviread(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_matplotlib$figure(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_matplotlib$font_manager(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_matplotlib$gridspec(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_matplotlib$hatch(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_matplotlib$image(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_matplotlib$layout_engine(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_matplotlib$legend(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_matplotlib$legend_handler(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_matplotlib$lines(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_matplotlib$markers(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_matplotlib$mathtext(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_matplotlib$mlab(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_matplotlib$offsetbox(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_matplotlib$patches(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_matplotlib$path(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_matplotlib$patheffects(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_matplotlib$projections(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_matplotlib$projections$geo(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_matplotlib$projections$polar(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_matplotlib$pylab(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_matplotlib$pyplot(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_matplotlib$quiver(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_matplotlib$rcsetup(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_matplotlib$scale(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_matplotlib$spines(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_matplotlib$stackplot(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_matplotlib$streamplot(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_matplotlib$style(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_matplotlib$style$core(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_matplotlib$table(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_matplotlib$texmanager(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_matplotlib$text(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_matplotlib$textpath(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_matplotlib$ticker(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_matplotlib$transforms(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_matplotlib$tri(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_matplotlib$tri$_triangulation(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_matplotlib$tri$_tricontour(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_matplotlib$tri$_trifinder(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_matplotlib$tri$_triinterpolate(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_matplotlib$tri$_tripcolor(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_matplotlib$tri$_triplot(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_matplotlib$tri$_trirefine(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_matplotlib$tri$_tritools(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_matplotlib$units(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_matplotlib$widgets(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_mpl_toolkits(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_mpl_toolkits$mplot3d(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_mpl_toolkits$mplot3d$art3d(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_mpl_toolkits$mplot3d$axes3d(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_mpl_toolkits$mplot3d$axis3d(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_mpl_toolkits$mplot3d$proj3d(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_multiprocessing$$45$postLoad(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_multiprocessing$$45$preLoad(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_numpy(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_numpy$__config__(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_numpy$_distributor_init(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_numpy$_globals(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_numpy$_pytesttester(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_numpy$_version(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
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
extern PyObject *modulecode_numpy$core$_machar(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
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
extern PyObject *modulecode_openpyxl(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_openpyxl$_constants(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_openpyxl$cell(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_openpyxl$cell$_writer(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_openpyxl$cell$cell(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_openpyxl$cell$read_only(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_openpyxl$cell$rich_text(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_openpyxl$cell$text(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_openpyxl$chart(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_openpyxl$chart$_3d(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_openpyxl$chart$_chart(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_openpyxl$chart$area_chart(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_openpyxl$chart$axis(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_openpyxl$chart$bar_chart(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_openpyxl$chart$bubble_chart(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_openpyxl$chart$chartspace(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_openpyxl$chart$data_source(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_openpyxl$chart$descriptors(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_openpyxl$chart$error_bar(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_openpyxl$chart$label(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_openpyxl$chart$layout(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_openpyxl$chart$legend(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_openpyxl$chart$line_chart(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_openpyxl$chart$marker(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_openpyxl$chart$picture(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_openpyxl$chart$pie_chart(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_openpyxl$chart$pivot(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_openpyxl$chart$plotarea(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_openpyxl$chart$print_settings(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_openpyxl$chart$radar_chart(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_openpyxl$chart$reader(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_openpyxl$chart$reference(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_openpyxl$chart$scatter_chart(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_openpyxl$chart$series(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_openpyxl$chart$series_factory(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_openpyxl$chart$shapes(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_openpyxl$chart$stock_chart(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_openpyxl$chart$surface_chart(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_openpyxl$chart$text(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_openpyxl$chart$title(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_openpyxl$chart$trendline(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_openpyxl$chart$updown_bars(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_openpyxl$chartsheet(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_openpyxl$chartsheet$chartsheet(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_openpyxl$chartsheet$custom(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_openpyxl$chartsheet$properties(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_openpyxl$chartsheet$protection(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_openpyxl$chartsheet$publish(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_openpyxl$chartsheet$relation(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_openpyxl$chartsheet$views(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_openpyxl$comments(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_openpyxl$comments$author(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_openpyxl$comments$comment_sheet(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_openpyxl$comments$comments(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_openpyxl$comments$shape_writer(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_openpyxl$compat(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_openpyxl$compat$numbers(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_openpyxl$compat$strings(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_openpyxl$descriptors(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_openpyxl$descriptors$base(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_openpyxl$descriptors$excel(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_openpyxl$descriptors$namespace(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_openpyxl$descriptors$nested(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_openpyxl$descriptors$sequence(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_openpyxl$descriptors$serialisable(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_openpyxl$drawing(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_openpyxl$drawing$colors(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_openpyxl$drawing$connector(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_openpyxl$drawing$drawing(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_openpyxl$drawing$effect(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_openpyxl$drawing$fill(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_openpyxl$drawing$geometry(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_openpyxl$drawing$graphic(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_openpyxl$drawing$image(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_openpyxl$drawing$line(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_openpyxl$drawing$picture(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_openpyxl$drawing$properties(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_openpyxl$drawing$relation(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_openpyxl$drawing$spreadsheet_drawing(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_openpyxl$drawing$text(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_openpyxl$drawing$xdr(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_openpyxl$formatting(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_openpyxl$formatting$formatting(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_openpyxl$formatting$rule(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_openpyxl$formula(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_openpyxl$formula$tokenizer(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_openpyxl$formula$translate(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_openpyxl$packaging(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_openpyxl$packaging$core(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_openpyxl$packaging$custom(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_openpyxl$packaging$extended(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_openpyxl$packaging$manifest(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_openpyxl$packaging$relationship(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_openpyxl$packaging$workbook(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_openpyxl$pivot(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_openpyxl$pivot$cache(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_openpyxl$pivot$fields(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_openpyxl$pivot$record(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_openpyxl$pivot$table(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_openpyxl$reader(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_openpyxl$reader$drawings(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_openpyxl$reader$excel(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_openpyxl$reader$strings(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_openpyxl$reader$workbook(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_openpyxl$styles(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_openpyxl$styles$alignment(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_openpyxl$styles$borders(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_openpyxl$styles$builtins(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_openpyxl$styles$cell_style(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_openpyxl$styles$colors(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_openpyxl$styles$differential(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_openpyxl$styles$fills(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_openpyxl$styles$fonts(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_openpyxl$styles$named_styles(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_openpyxl$styles$numbers(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_openpyxl$styles$protection(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_openpyxl$styles$proxy(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_openpyxl$styles$styleable(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_openpyxl$styles$stylesheet(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_openpyxl$styles$table(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_openpyxl$utils(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_openpyxl$utils$bound_dictionary(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_openpyxl$utils$cell(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_openpyxl$utils$datetime(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_openpyxl$utils$escape(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_openpyxl$utils$exceptions(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_openpyxl$utils$formulas(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_openpyxl$utils$indexed_list(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_openpyxl$utils$protection(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_openpyxl$utils$units(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_openpyxl$workbook(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_openpyxl$workbook$_writer(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_openpyxl$workbook$child(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_openpyxl$workbook$defined_name(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_openpyxl$workbook$external_link(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_openpyxl$workbook$external_link$external(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_openpyxl$workbook$external_reference(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_openpyxl$workbook$function_group(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_openpyxl$workbook$properties(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_openpyxl$workbook$protection(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_openpyxl$workbook$smart_tags(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_openpyxl$workbook$views(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_openpyxl$workbook$web(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_openpyxl$workbook$workbook(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_openpyxl$worksheet(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_openpyxl$worksheet$_read_only(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_openpyxl$worksheet$_reader(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_openpyxl$worksheet$_write_only(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_openpyxl$worksheet$_writer(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_openpyxl$worksheet$cell_range(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_openpyxl$worksheet$copier(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_openpyxl$worksheet$datavalidation(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_openpyxl$worksheet$dimensions(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_openpyxl$worksheet$drawing(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_openpyxl$worksheet$filters(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_openpyxl$worksheet$formula(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_openpyxl$worksheet$header_footer(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_openpyxl$worksheet$hyperlink(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_openpyxl$worksheet$merge(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_openpyxl$worksheet$page(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_openpyxl$worksheet$pagebreak(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_openpyxl$worksheet$print_settings(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_openpyxl$worksheet$properties(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_openpyxl$worksheet$protection(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_openpyxl$worksheet$related(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_openpyxl$worksheet$scenario(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_openpyxl$worksheet$table(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_openpyxl$worksheet$views(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_openpyxl$worksheet$worksheet(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_openpyxl$writer(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_openpyxl$writer$excel(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_openpyxl$writer$theme(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_openpyxl$xml(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_openpyxl$xml$constants(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_openpyxl$xml$functions(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pandas(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pandas$_config(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pandas$_config$config(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pandas$_config$dates(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pandas$_config$display(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pandas$_libs(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pandas$_libs$tslibs(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pandas$_libs$window(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pandas$_typing(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pandas$_version(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pandas$api(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pandas$api$extensions(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pandas$api$indexers(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pandas$api$interchange(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pandas$api$types(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pandas$arrays(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pandas$compat(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pandas$compat$_constants(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pandas$compat$_optional(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pandas$compat$compressors(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pandas$compat$numpy(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pandas$compat$numpy$function(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pandas$compat$pickle_compat(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pandas$compat$pyarrow(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pandas$core(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pandas$core$_numba(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pandas$core$_numba$executor(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pandas$core$_numba$kernels(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pandas$core$_numba$kernels$mean_(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pandas$core$_numba$kernels$min_max_(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pandas$core$_numba$kernels$shared(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pandas$core$_numba$kernels$sum_(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pandas$core$_numba$kernels$var_(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pandas$core$accessor(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pandas$core$algorithms(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pandas$core$api(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pandas$core$apply(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pandas$core$array_algos(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pandas$core$array_algos$datetimelike_accumulations(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pandas$core$array_algos$masked_accumulations(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pandas$core$array_algos$masked_reductions(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pandas$core$array_algos$putmask(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pandas$core$array_algos$quantile(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pandas$core$array_algos$replace(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pandas$core$array_algos$take(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pandas$core$array_algos$transforms(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pandas$core$arraylike(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pandas$core$arrays(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pandas$core$arrays$_mixins(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pandas$core$arrays$_ranges(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pandas$core$arrays$arrow(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pandas$core$arrays$arrow$_arrow_utils(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pandas$core$arrays$arrow$array(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pandas$core$arrays$arrow$dtype(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pandas$core$arrays$arrow$extension_types(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
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
extern PyObject *modulecode_pandas$core$dtypes(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pandas$core$dtypes$api(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pandas$core$dtypes$astype(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
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
extern PyObject *modulecode_pandas$core$groupby$indexing(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pandas$core$groupby$numba_(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pandas$core$groupby$ops(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pandas$core$indexers(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pandas$core$indexers$objects(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pandas$core$indexers$utils(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
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
extern PyObject *modulecode_pandas$core$indexes$period(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pandas$core$indexes$range(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pandas$core$indexes$timedeltas(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pandas$core$indexing(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pandas$core$interchange(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pandas$core$interchange$buffer(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pandas$core$interchange$column(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pandas$core$interchange$dataframe(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pandas$core$interchange$dataframe_protocol(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pandas$core$interchange$from_dataframe(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pandas$core$interchange$utils(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pandas$core$internals(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pandas$core$internals$api(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pandas$core$internals$array_manager(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pandas$core$internals$base(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pandas$core$internals$blocks(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pandas$core$internals$concat(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pandas$core$internals$construction(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pandas$core$internals$managers(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pandas$core$internals$ops(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pandas$core$methods(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pandas$core$methods$describe(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pandas$core$methods$selectn(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pandas$core$methods$to_dict(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
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
extern PyObject *modulecode_pandas$core$reshape$encoding(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pandas$core$reshape$melt(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pandas$core$reshape$merge(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pandas$core$reshape$pivot(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pandas$core$reshape$reshape(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pandas$core$reshape$tile(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pandas$core$reshape$util(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pandas$core$roperator(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pandas$core$sample(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
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
extern PyObject *modulecode_pandas$core$window$numba_(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pandas$core$window$online(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pandas$core$window$rolling(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pandas$errors(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pandas$io(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pandas$io$_util(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pandas$io$api(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pandas$io$clipboard(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pandas$io$clipboards(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pandas$io$common(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pandas$io$excel(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pandas$io$excel$_base(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pandas$io$excel$_odfreader(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pandas$io$excel$_odswriter(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pandas$io$excel$_openpyxl(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pandas$io$excel$_pyxlsb(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pandas$io$excel$_util(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pandas$io$excel$_xlrd(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pandas$io$excel$_xlsxwriter(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
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
extern PyObject *modulecode_pandas$io$parsers$arrow_parser_wrapper(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
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
extern PyObject *modulecode_pandas$plotting$_matplotlib(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pandas$plotting$_matplotlib$boxplot(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pandas$plotting$_matplotlib$converter(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pandas$plotting$_matplotlib$core(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pandas$plotting$_matplotlib$groupby(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pandas$plotting$_matplotlib$hist(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pandas$plotting$_matplotlib$misc(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pandas$plotting$_matplotlib$style(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pandas$plotting$_matplotlib$timeseries(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pandas$plotting$_matplotlib$tools(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pandas$plotting$_misc(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pandas$tseries(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pandas$tseries$api(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pandas$tseries$frequencies(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pandas$tseries$offsets(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pandas$util(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pandas$util$_decorators(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pandas$util$_exceptions(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pandas$util$_print_versions(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pandas$util$_str_methods(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pandas$util$_validators(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pandas$util$version(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pkg_resources$$45$postLoad(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pyparsing(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pyparsing$actions(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pyparsing$common(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pyparsing$core(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pyparsing$diagram(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pyparsing$exceptions(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pyparsing$helpers(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pyparsing$results(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pyparsing$testing(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pyparsing$unicode(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pyparsing$util(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pytz(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pytz$exceptions(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pytz$lazy(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pytz$tzfile(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pytz$tzinfo(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pywin32_bootstrap(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pywin32_system32(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_qtpy(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_qtpy$QtDataVisualization(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_qtpy$QtWidgets(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_qtpy$enums_compat(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_qtpy$sip(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_scipy(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_scipy$__config__(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_scipy$_distributor_init(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_scipy$_lib(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_scipy$_lib$_bunch(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_scipy$_lib$_ccallback(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_scipy$_lib$_docscrape(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_scipy$_lib$_finite_differences(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_scipy$_lib$_pep440(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_scipy$_lib$_testutils(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_scipy$_lib$_threadsafety(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_scipy$_lib$_uarray(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_scipy$_lib$_uarray$_backend(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_scipy$_lib$_util(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_scipy$_lib$decorator(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_scipy$_lib$deprecation(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_scipy$_lib$doccer(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_scipy$_lib$uarray(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_scipy$constants(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_scipy$constants$_codata(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_scipy$constants$_constants(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_scipy$constants$codata(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_scipy$constants$constants(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_scipy$fft(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_scipy$fft$_backend(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_scipy$fft$_basic(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_scipy$fft$_fftlog(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_scipy$fft$_fftlog_multimethods(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_scipy$fft$_helper(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_scipy$fft$_pocketfft(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_scipy$fft$_pocketfft$basic(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_scipy$fft$_pocketfft$helper(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_scipy$fft$_pocketfft$realtransforms(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_scipy$fft$_realtransforms(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_scipy$integrate(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_scipy$integrate$_bvp(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_scipy$integrate$_ivp(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_scipy$integrate$_ivp$base(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_scipy$integrate$_ivp$bdf(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_scipy$integrate$_ivp$common(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_scipy$integrate$_ivp$dop853_coefficients(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_scipy$integrate$_ivp$ivp(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_scipy$integrate$_ivp$lsoda(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_scipy$integrate$_ivp$radau(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_scipy$integrate$_ivp$rk(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_scipy$integrate$_ode(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_scipy$integrate$_odepack_py(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_scipy$integrate$_quad_vec(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_scipy$integrate$_quadpack_py(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_scipy$integrate$_quadrature(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_scipy$integrate$dop(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_scipy$integrate$lsoda(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_scipy$integrate$odepack(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_scipy$integrate$quadpack(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_scipy$integrate$vode(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_scipy$interpolate(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_scipy$interpolate$_bsplines(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_scipy$interpolate$_cubic(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_scipy$interpolate$_fitpack2(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_scipy$interpolate$_fitpack_impl(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_scipy$interpolate$_fitpack_py(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_scipy$interpolate$_interpolate(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_scipy$interpolate$_ndgriddata(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_scipy$interpolate$_pade(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_scipy$interpolate$_polyint(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_scipy$interpolate$_rbf(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_scipy$interpolate$_rbfinterp(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_scipy$interpolate$_rgi(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_scipy$interpolate$fitpack(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_scipy$interpolate$fitpack2(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_scipy$interpolate$interpolate(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_scipy$interpolate$ndgriddata(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_scipy$interpolate$polyint(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_scipy$interpolate$rbf(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_scipy$linalg(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_scipy$linalg$_basic(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_scipy$linalg$_decomp(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_scipy$linalg$_decomp_cholesky(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_scipy$linalg$_decomp_cossin(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_scipy$linalg$_decomp_ldl(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_scipy$linalg$_decomp_lu(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_scipy$linalg$_decomp_polar(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_scipy$linalg$_decomp_qr(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_scipy$linalg$_decomp_qz(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_scipy$linalg$_decomp_schur(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_scipy$linalg$_decomp_svd(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_scipy$linalg$_expm_frechet(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_scipy$linalg$_flinalg_py(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_scipy$linalg$_interpolative_backend(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_scipy$linalg$_matfuncs(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_scipy$linalg$_matfuncs_inv_ssq(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_scipy$linalg$_matfuncs_sqrtm(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_scipy$linalg$_misc(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_scipy$linalg$_procrustes(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_scipy$linalg$_sketches(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_scipy$linalg$_solvers(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_scipy$linalg$_special_matrices(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_scipy$linalg$basic(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_scipy$linalg$blas(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_scipy$linalg$decomp(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_scipy$linalg$decomp_cholesky(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_scipy$linalg$decomp_lu(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_scipy$linalg$decomp_qr(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_scipy$linalg$decomp_schur(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_scipy$linalg$decomp_svd(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_scipy$linalg$flinalg(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_scipy$linalg$interpolative(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_scipy$linalg$lapack(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_scipy$linalg$matfuncs(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_scipy$linalg$misc(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_scipy$linalg$special_matrices(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_scipy$ndimage(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_scipy$ndimage$_filters(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_scipy$ndimage$_fourier(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_scipy$ndimage$_interpolation(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_scipy$ndimage$_measurements(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_scipy$ndimage$_morphology(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_scipy$ndimage$_ni_docstrings(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_scipy$ndimage$_ni_support(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_scipy$ndimage$filters(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_scipy$ndimage$fourier(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_scipy$ndimage$interpolation(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_scipy$ndimage$measurements(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_scipy$ndimage$morphology(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_scipy$optimize(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_scipy$optimize$_basinhopping(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_scipy$optimize$_cobyla_py(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_scipy$optimize$_constraints(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_scipy$optimize$_differentiable_functions(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_scipy$optimize$_differentialevolution(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_scipy$optimize$_direct_py(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_scipy$optimize$_dual_annealing(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_scipy$optimize$_hessian_update_strategy(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_scipy$optimize$_lbfgsb_py(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_scipy$optimize$_linesearch(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_scipy$optimize$_linprog(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_scipy$optimize$_linprog_doc(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_scipy$optimize$_linprog_highs(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_scipy$optimize$_linprog_ip(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_scipy$optimize$_linprog_rs(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_scipy$optimize$_linprog_simplex(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_scipy$optimize$_linprog_util(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_scipy$optimize$_lsq(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_scipy$optimize$_lsq$bvls(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_scipy$optimize$_lsq$common(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_scipy$optimize$_lsq$dogbox(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_scipy$optimize$_lsq$least_squares(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_scipy$optimize$_lsq$lsq_linear(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_scipy$optimize$_lsq$trf(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_scipy$optimize$_lsq$trf_linear(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_scipy$optimize$_milp(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_scipy$optimize$_minimize(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_scipy$optimize$_minpack_py(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_scipy$optimize$_nnls(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_scipy$optimize$_nonlin(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_scipy$optimize$_numdiff(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_scipy$optimize$_optimize(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_scipy$optimize$_qap(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_scipy$optimize$_remove_redundancy(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_scipy$optimize$_root(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_scipy$optimize$_root_scalar(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_scipy$optimize$_shgo(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_scipy$optimize$_shgo_lib(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_scipy$optimize$_shgo_lib$triangulation(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_scipy$optimize$_slsqp_py(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_scipy$optimize$_spectral(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_scipy$optimize$_tnc(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_scipy$optimize$_trlib(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_scipy$optimize$_trustregion(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_scipy$optimize$_trustregion_constr(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_scipy$optimize$_trustregion_constr$canonical_constraint(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_scipy$optimize$_trustregion_constr$equality_constrained_sqp(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_scipy$optimize$_trustregion_constr$minimize_trustregion_constr(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_scipy$optimize$_trustregion_constr$projections(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_scipy$optimize$_trustregion_constr$qp_subproblem(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_scipy$optimize$_trustregion_constr$report(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_scipy$optimize$_trustregion_constr$tr_interior_point(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_scipy$optimize$_trustregion_dogleg(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_scipy$optimize$_trustregion_exact(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_scipy$optimize$_trustregion_krylov(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_scipy$optimize$_trustregion_ncg(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_scipy$optimize$_zeros_py(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_scipy$optimize$cobyla(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_scipy$optimize$lbfgsb(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_scipy$optimize$linesearch(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_scipy$optimize$minpack(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_scipy$optimize$minpack2(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_scipy$optimize$moduleTNC(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_scipy$optimize$nonlin(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_scipy$optimize$optimize(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_scipy$optimize$slsqp(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_scipy$optimize$tnc(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_scipy$optimize$zeros(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_scipy$sparse(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_scipy$sparse$_arrays(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_scipy$sparse$_base(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_scipy$sparse$_bsr(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_scipy$sparse$_compressed(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_scipy$sparse$_construct(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_scipy$sparse$_coo(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_scipy$sparse$_csc(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_scipy$sparse$_csr(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_scipy$sparse$_data(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_scipy$sparse$_dia(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_scipy$sparse$_dok(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_scipy$sparse$_extract(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_scipy$sparse$_index(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_scipy$sparse$_lil(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_scipy$sparse$_matrix_io(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_scipy$sparse$_spfuncs(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_scipy$sparse$_sputils(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_scipy$sparse$base(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_scipy$sparse$bsr(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_scipy$sparse$compressed(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_scipy$sparse$construct(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_scipy$sparse$coo(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_scipy$sparse$csc(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_scipy$sparse$csgraph(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_scipy$sparse$csgraph$_laplacian(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_scipy$sparse$csgraph$_validation(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_scipy$sparse$csr(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_scipy$sparse$data(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_scipy$sparse$dia(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_scipy$sparse$dok(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_scipy$sparse$extract(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_scipy$sparse$lil(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_scipy$sparse$linalg(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_scipy$sparse$linalg$_dsolve(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_scipy$sparse$linalg$_dsolve$_add_newdocs(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_scipy$sparse$linalg$_dsolve$linsolve(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_scipy$sparse$linalg$_eigen(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_scipy$sparse$linalg$_eigen$_svds(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_scipy$sparse$linalg$_eigen$arpack(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_scipy$sparse$linalg$_eigen$arpack$arpack(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_scipy$sparse$linalg$_eigen$lobpcg(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_scipy$sparse$linalg$_eigen$lobpcg$lobpcg(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_scipy$sparse$linalg$_expm_multiply(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_scipy$sparse$linalg$_interface(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_scipy$sparse$linalg$_isolve(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_scipy$sparse$linalg$_isolve$_gcrotmk(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_scipy$sparse$linalg$_isolve$iterative(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_scipy$sparse$linalg$_isolve$lgmres(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_scipy$sparse$linalg$_isolve$lsmr(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_scipy$sparse$linalg$_isolve$lsqr(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_scipy$sparse$linalg$_isolve$minres(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_scipy$sparse$linalg$_isolve$tfqmr(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_scipy$sparse$linalg$_isolve$utils(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_scipy$sparse$linalg$_matfuncs(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_scipy$sparse$linalg$_norm(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_scipy$sparse$linalg$_onenormest(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_scipy$sparse$linalg$_propack(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_scipy$sparse$linalg$_svdp(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_scipy$sparse$linalg$dsolve(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_scipy$sparse$linalg$eigen(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_scipy$sparse$linalg$interface(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_scipy$sparse$linalg$isolve(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_scipy$sparse$linalg$matfuncs(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_scipy$sparse$sparsetools(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_scipy$sparse$sputils(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_scipy$spatial(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_scipy$spatial$_geometric_slerp(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_scipy$spatial$_kdtree(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_scipy$spatial$_plotutils(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_scipy$spatial$_procrustes(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_scipy$spatial$_spherical_voronoi(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_scipy$spatial$ckdtree(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_scipy$spatial$distance(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_scipy$spatial$kdtree(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_scipy$spatial$qhull(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_scipy$spatial$transform(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_scipy$spatial$transform$_rotation_groups(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_scipy$spatial$transform$_rotation_spline(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_scipy$spatial$transform$rotation(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_scipy$special(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_scipy$special$_add_newdocs(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_scipy$special$_basic(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_scipy$special$_ellip_harm(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_scipy$special$_lambertw(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_scipy$special$_logsumexp(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_scipy$special$_orthogonal(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_scipy$special$_sf_error(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_scipy$special$_spfun_stats(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_scipy$special$_spherical_bessel(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_scipy$special$add_newdocs(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_scipy$special$basic(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_scipy$special$orthogonal(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_scipy$special$sf_error(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_scipy$special$specfun(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_scipy$special$spfun_stats(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_scipy$stats(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_scipy$stats$_axis_nan_policy(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_scipy$stats$_binned_statistic(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_scipy$stats$_binomtest(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_scipy$stats$_boost(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_scipy$stats$_common(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_scipy$stats$_constants(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_scipy$stats$_continuous_distns(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_scipy$stats$_covariance(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_scipy$stats$_crosstab(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_scipy$stats$_discrete_distns(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_scipy$stats$_distn_infrastructure(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_scipy$stats$_distr_params(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_scipy$stats$_entropy(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_scipy$stats$_fit(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_scipy$stats$_hypotests(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_scipy$stats$_kde(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_scipy$stats$_ksstats(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_scipy$stats$_levy_stable(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_scipy$stats$_mannwhitneyu(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_scipy$stats$_morestats(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_scipy$stats$_mstats_basic(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_scipy$stats$_mstats_extras(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_scipy$stats$_multivariate(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_scipy$stats$_odds_ratio(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_scipy$stats$_page_trend_test(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_scipy$stats$_qmc(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_scipy$stats$_rcont(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_scipy$stats$_relative_risk(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_scipy$stats$_resampling(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_scipy$stats$_rvs_sampling(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_scipy$stats$_stats_mstats_common(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_scipy$stats$_stats_py(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_scipy$stats$_tukeylambda_stats(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_scipy$stats$_variation(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_scipy$stats$_warnings_errors(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_scipy$stats$biasedurn(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_scipy$stats$contingency(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_scipy$stats$distributions(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_scipy$stats$kde(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_scipy$stats$morestats(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_scipy$stats$mstats(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_scipy$stats$mstats_basic(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_scipy$stats$mstats_extras(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_scipy$stats$mvn(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_scipy$stats$qmc(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_scipy$stats$statlib(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_scipy$stats$stats(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_scipy$version(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_six(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_soupsieve(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_soupsieve$__meta__(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_soupsieve$css_match(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_soupsieve$css_parser(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_soupsieve$css_types(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_soupsieve$pretty(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_soupsieve$util(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_threadpoolctl(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_webencodings(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_webencodings$labels(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_webencodings$x_user_defined(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_xlrd(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_xlrd$biffh(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_xlrd$book(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_xlrd$compdoc(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_xlrd$formatting(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_xlrd$formula(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_xlrd$info(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_xlrd$sheet(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_xlrd$timemachine(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_xlrd$xldate(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_yaml(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_yaml$composer(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_yaml$constructor(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_yaml$cyaml(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_yaml$dumper(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_yaml$emitter(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_yaml$error(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_yaml$events(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_yaml$loader(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_yaml$nodes(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_yaml$parser(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_yaml$reader(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_yaml$representer(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_yaml$resolver(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_yaml$scanner(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_yaml$serializer(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_yaml$tokens(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);

static struct Nuitka_MetaPathBasedLoaderEntry meta_path_loader_entries[] = {
    {"PIL", modulecode_PIL, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_PACKAGE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\165\163\145\162\163\134\161\167\167\71\63\134\141\160\160\144\141\164\141\134\154\157\143\141\154\134\160\162\157\147\162\141\155\163\134\160\171\164\150\157\156\134\160\171\164\150\157\156\63\61\61\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\120\111\114\134\137\137\151\156\151\164\137\137\56\160\171"
#endif
},
    {"PIL.BlpImagePlugin", modulecode_PIL$BlpImagePlugin, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\165\163\145\162\163\134\161\167\167\71\63\134\141\160\160\144\141\164\141\134\154\157\143\141\154\134\160\162\157\147\162\141\155\163\134\160\171\164\150\157\156\134\160\171\164\150\157\156\63\61\61\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\120\111\114\134\102\154\160\111\155\141\147\145\120\154\165\147\151\156\56\160\171"
#endif
},
    {"PIL.BmpImagePlugin", modulecode_PIL$BmpImagePlugin, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\165\163\145\162\163\134\161\167\167\71\63\134\141\160\160\144\141\164\141\134\154\157\143\141\154\134\160\162\157\147\162\141\155\163\134\160\171\164\150\157\156\134\160\171\164\150\157\156\63\61\61\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\120\111\114\134\102\155\160\111\155\141\147\145\120\154\165\147\151\156\56\160\171"
#endif
},
    {"PIL.BufrStubImagePlugin", modulecode_PIL$BufrStubImagePlugin, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\165\163\145\162\163\134\161\167\167\71\63\134\141\160\160\144\141\164\141\134\154\157\143\141\154\134\160\162\157\147\162\141\155\163\134\160\171\164\150\157\156\134\160\171\164\150\157\156\63\61\61\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\120\111\114\134\102\165\146\162\123\164\165\142\111\155\141\147\145\120\154\165\147\151\156\56\160\171"
#endif
},
    {"PIL.CurImagePlugin", modulecode_PIL$CurImagePlugin, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\165\163\145\162\163\134\161\167\167\71\63\134\141\160\160\144\141\164\141\134\154\157\143\141\154\134\160\162\157\147\162\141\155\163\134\160\171\164\150\157\156\134\160\171\164\150\157\156\63\61\61\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\120\111\114\134\103\165\162\111\155\141\147\145\120\154\165\147\151\156\56\160\171"
#endif
},
    {"PIL.DcxImagePlugin", modulecode_PIL$DcxImagePlugin, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\165\163\145\162\163\134\161\167\167\71\63\134\141\160\160\144\141\164\141\134\154\157\143\141\154\134\160\162\157\147\162\141\155\163\134\160\171\164\150\157\156\134\160\171\164\150\157\156\63\61\61\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\120\111\114\134\104\143\170\111\155\141\147\145\120\154\165\147\151\156\56\160\171"
#endif
},
    {"PIL.DdsImagePlugin", modulecode_PIL$DdsImagePlugin, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\165\163\145\162\163\134\161\167\167\71\63\134\141\160\160\144\141\164\141\134\154\157\143\141\154\134\160\162\157\147\162\141\155\163\134\160\171\164\150\157\156\134\160\171\164\150\157\156\63\61\61\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\120\111\114\134\104\144\163\111\155\141\147\145\120\154\165\147\151\156\56\160\171"
#endif
},
    {"PIL.EpsImagePlugin", modulecode_PIL$EpsImagePlugin, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\165\163\145\162\163\134\161\167\167\71\63\134\141\160\160\144\141\164\141\134\154\157\143\141\154\134\160\162\157\147\162\141\155\163\134\160\171\164\150\157\156\134\160\171\164\150\157\156\63\61\61\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\120\111\114\134\105\160\163\111\155\141\147\145\120\154\165\147\151\156\56\160\171"
#endif
},
    {"PIL.ExifTags", modulecode_PIL$ExifTags, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\165\163\145\162\163\134\161\167\167\71\63\134\141\160\160\144\141\164\141\134\154\157\143\141\154\134\160\162\157\147\162\141\155\163\134\160\171\164\150\157\156\134\160\171\164\150\157\156\63\61\61\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\120\111\114\134\105\170\151\146\124\141\147\163\56\160\171"
#endif
},
    {"PIL.FitsImagePlugin", modulecode_PIL$FitsImagePlugin, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\165\163\145\162\163\134\161\167\167\71\63\134\141\160\160\144\141\164\141\134\154\157\143\141\154\134\160\162\157\147\162\141\155\163\134\160\171\164\150\157\156\134\160\171\164\150\157\156\63\61\61\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\120\111\114\134\106\151\164\163\111\155\141\147\145\120\154\165\147\151\156\56\160\171"
#endif
},
    {"PIL.FitsStubImagePlugin", modulecode_PIL$FitsStubImagePlugin, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\165\163\145\162\163\134\161\167\167\71\63\134\141\160\160\144\141\164\141\134\154\157\143\141\154\134\160\162\157\147\162\141\155\163\134\160\171\164\150\157\156\134\160\171\164\150\157\156\63\61\61\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\120\111\114\134\106\151\164\163\123\164\165\142\111\155\141\147\145\120\154\165\147\151\156\56\160\171"
#endif
},
    {"PIL.FliImagePlugin", modulecode_PIL$FliImagePlugin, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\165\163\145\162\163\134\161\167\167\71\63\134\141\160\160\144\141\164\141\134\154\157\143\141\154\134\160\162\157\147\162\141\155\163\134\160\171\164\150\157\156\134\160\171\164\150\157\156\63\61\61\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\120\111\114\134\106\154\151\111\155\141\147\145\120\154\165\147\151\156\56\160\171"
#endif
},
    {"PIL.FpxImagePlugin", modulecode_PIL$FpxImagePlugin, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\165\163\145\162\163\134\161\167\167\71\63\134\141\160\160\144\141\164\141\134\154\157\143\141\154\134\160\162\157\147\162\141\155\163\134\160\171\164\150\157\156\134\160\171\164\150\157\156\63\61\61\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\120\111\114\134\106\160\170\111\155\141\147\145\120\154\165\147\151\156\56\160\171"
#endif
},
    {"PIL.FtexImagePlugin", modulecode_PIL$FtexImagePlugin, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\165\163\145\162\163\134\161\167\167\71\63\134\141\160\160\144\141\164\141\134\154\157\143\141\154\134\160\162\157\147\162\141\155\163\134\160\171\164\150\157\156\134\160\171\164\150\157\156\63\61\61\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\120\111\114\134\106\164\145\170\111\155\141\147\145\120\154\165\147\151\156\56\160\171"
#endif
},
    {"PIL.GbrImagePlugin", modulecode_PIL$GbrImagePlugin, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\165\163\145\162\163\134\161\167\167\71\63\134\141\160\160\144\141\164\141\134\154\157\143\141\154\134\160\162\157\147\162\141\155\163\134\160\171\164\150\157\156\134\160\171\164\150\157\156\63\61\61\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\120\111\114\134\107\142\162\111\155\141\147\145\120\154\165\147\151\156\56\160\171"
#endif
},
    {"PIL.GifImagePlugin", modulecode_PIL$GifImagePlugin, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\165\163\145\162\163\134\161\167\167\71\63\134\141\160\160\144\141\164\141\134\154\157\143\141\154\134\160\162\157\147\162\141\155\163\134\160\171\164\150\157\156\134\160\171\164\150\157\156\63\61\61\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\120\111\114\134\107\151\146\111\155\141\147\145\120\154\165\147\151\156\56\160\171"
#endif
},
    {"PIL.GimpGradientFile", modulecode_PIL$GimpGradientFile, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\165\163\145\162\163\134\161\167\167\71\63\134\141\160\160\144\141\164\141\134\154\157\143\141\154\134\160\162\157\147\162\141\155\163\134\160\171\164\150\157\156\134\160\171\164\150\157\156\63\61\61\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\120\111\114\134\107\151\155\160\107\162\141\144\151\145\156\164\106\151\154\145\56\160\171"
#endif
},
    {"PIL.GimpPaletteFile", modulecode_PIL$GimpPaletteFile, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\165\163\145\162\163\134\161\167\167\71\63\134\141\160\160\144\141\164\141\134\154\157\143\141\154\134\160\162\157\147\162\141\155\163\134\160\171\164\150\157\156\134\160\171\164\150\157\156\63\61\61\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\120\111\114\134\107\151\155\160\120\141\154\145\164\164\145\106\151\154\145\56\160\171"
#endif
},
    {"PIL.GribStubImagePlugin", modulecode_PIL$GribStubImagePlugin, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\165\163\145\162\163\134\161\167\167\71\63\134\141\160\160\144\141\164\141\134\154\157\143\141\154\134\160\162\157\147\162\141\155\163\134\160\171\164\150\157\156\134\160\171\164\150\157\156\63\61\61\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\120\111\114\134\107\162\151\142\123\164\165\142\111\155\141\147\145\120\154\165\147\151\156\56\160\171"
#endif
},
    {"PIL.Hdf5StubImagePlugin", modulecode_PIL$Hdf5StubImagePlugin, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\165\163\145\162\163\134\161\167\167\71\63\134\141\160\160\144\141\164\141\134\154\157\143\141\154\134\160\162\157\147\162\141\155\163\134\160\171\164\150\157\156\134\160\171\164\150\157\156\63\61\61\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\120\111\114\134\110\144\146\65\123\164\165\142\111\155\141\147\145\120\154\165\147\151\156\56\160\171"
#endif
},
    {"PIL.IcnsImagePlugin", modulecode_PIL$IcnsImagePlugin, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\165\163\145\162\163\134\161\167\167\71\63\134\141\160\160\144\141\164\141\134\154\157\143\141\154\134\160\162\157\147\162\141\155\163\134\160\171\164\150\157\156\134\160\171\164\150\157\156\63\61\61\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\120\111\114\134\111\143\156\163\111\155\141\147\145\120\154\165\147\151\156\56\160\171"
#endif
},
    {"PIL.IcoImagePlugin", modulecode_PIL$IcoImagePlugin, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\165\163\145\162\163\134\161\167\167\71\63\134\141\160\160\144\141\164\141\134\154\157\143\141\154\134\160\162\157\147\162\141\155\163\134\160\171\164\150\157\156\134\160\171\164\150\157\156\63\61\61\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\120\111\114\134\111\143\157\111\155\141\147\145\120\154\165\147\151\156\56\160\171"
#endif
},
    {"PIL.ImImagePlugin", modulecode_PIL$ImImagePlugin, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\165\163\145\162\163\134\161\167\167\71\63\134\141\160\160\144\141\164\141\134\154\157\143\141\154\134\160\162\157\147\162\141\155\163\134\160\171\164\150\157\156\134\160\171\164\150\157\156\63\61\61\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\120\111\114\134\111\155\111\155\141\147\145\120\154\165\147\151\156\56\160\171"
#endif
},
    {"PIL.Image", modulecode_PIL$Image, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\165\163\145\162\163\134\161\167\167\71\63\134\141\160\160\144\141\164\141\134\154\157\143\141\154\134\160\162\157\147\162\141\155\163\134\160\171\164\150\157\156\134\160\171\164\150\157\156\63\61\61\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\120\111\114\134\111\155\141\147\145\56\160\171"
#endif
},
    {"PIL.ImageChops", modulecode_PIL$ImageChops, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\165\163\145\162\163\134\161\167\167\71\63\134\141\160\160\144\141\164\141\134\154\157\143\141\154\134\160\162\157\147\162\141\155\163\134\160\171\164\150\157\156\134\160\171\164\150\157\156\63\61\61\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\120\111\114\134\111\155\141\147\145\103\150\157\160\163\56\160\171"
#endif
},
    {"PIL.ImageCms", modulecode_PIL$ImageCms, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\165\163\145\162\163\134\161\167\167\71\63\134\141\160\160\144\141\164\141\134\154\157\143\141\154\134\160\162\157\147\162\141\155\163\134\160\171\164\150\157\156\134\160\171\164\150\157\156\63\61\61\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\120\111\114\134\111\155\141\147\145\103\155\163\56\160\171"
#endif
},
    {"PIL.ImageColor", modulecode_PIL$ImageColor, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\165\163\145\162\163\134\161\167\167\71\63\134\141\160\160\144\141\164\141\134\154\157\143\141\154\134\160\162\157\147\162\141\155\163\134\160\171\164\150\157\156\134\160\171\164\150\157\156\63\61\61\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\120\111\114\134\111\155\141\147\145\103\157\154\157\162\56\160\171"
#endif
},
    {"PIL.ImageFile", modulecode_PIL$ImageFile, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\165\163\145\162\163\134\161\167\167\71\63\134\141\160\160\144\141\164\141\134\154\157\143\141\154\134\160\162\157\147\162\141\155\163\134\160\171\164\150\157\156\134\160\171\164\150\157\156\63\61\61\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\120\111\114\134\111\155\141\147\145\106\151\154\145\56\160\171"
#endif
},
    {"PIL.ImageFilter", modulecode_PIL$ImageFilter, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\165\163\145\162\163\134\161\167\167\71\63\134\141\160\160\144\141\164\141\134\154\157\143\141\154\134\160\162\157\147\162\141\155\163\134\160\171\164\150\157\156\134\160\171\164\150\157\156\63\61\61\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\120\111\114\134\111\155\141\147\145\106\151\154\164\145\162\56\160\171"
#endif
},
    {"PIL.ImageMode", modulecode_PIL$ImageMode, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\165\163\145\162\163\134\161\167\167\71\63\134\141\160\160\144\141\164\141\134\154\157\143\141\154\134\160\162\157\147\162\141\155\163\134\160\171\164\150\157\156\134\160\171\164\150\157\156\63\61\61\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\120\111\114\134\111\155\141\147\145\115\157\144\145\56\160\171"
#endif
},
    {"PIL.ImageOps", modulecode_PIL$ImageOps, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\165\163\145\162\163\134\161\167\167\71\63\134\141\160\160\144\141\164\141\134\154\157\143\141\154\134\160\162\157\147\162\141\155\163\134\160\171\164\150\157\156\134\160\171\164\150\157\156\63\61\61\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\120\111\114\134\111\155\141\147\145\117\160\163\56\160\171"
#endif
},
    {"PIL.ImagePalette", modulecode_PIL$ImagePalette, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\165\163\145\162\163\134\161\167\167\71\63\134\141\160\160\144\141\164\141\134\154\157\143\141\154\134\160\162\157\147\162\141\155\163\134\160\171\164\150\157\156\134\160\171\164\150\157\156\63\61\61\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\120\111\114\134\111\155\141\147\145\120\141\154\145\164\164\145\56\160\171"
#endif
},
    {"PIL.ImageQt", modulecode_PIL$ImageQt, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\165\163\145\162\163\134\161\167\167\71\63\134\141\160\160\144\141\164\141\134\154\157\143\141\154\134\160\162\157\147\162\141\155\163\134\160\171\164\150\157\156\134\160\171\164\150\157\156\63\61\61\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\120\111\114\134\111\155\141\147\145\121\164\56\160\171"
#endif
},
    {"PIL.ImageSequence", modulecode_PIL$ImageSequence, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\165\163\145\162\163\134\161\167\167\71\63\134\141\160\160\144\141\164\141\134\154\157\143\141\154\134\160\162\157\147\162\141\155\163\134\160\171\164\150\157\156\134\160\171\164\150\157\156\63\61\61\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\120\111\114\134\111\155\141\147\145\123\145\161\165\145\156\143\145\56\160\171"
#endif
},
    {"PIL.ImageShow", modulecode_PIL$ImageShow, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\165\163\145\162\163\134\161\167\167\71\63\134\141\160\160\144\141\164\141\134\154\157\143\141\154\134\160\162\157\147\162\141\155\163\134\160\171\164\150\157\156\134\160\171\164\150\157\156\63\61\61\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\120\111\114\134\111\155\141\147\145\123\150\157\167\56\160\171"
#endif
},
    {"PIL.ImageTk", modulecode_PIL$ImageTk, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\165\163\145\162\163\134\161\167\167\71\63\134\141\160\160\144\141\164\141\134\154\157\143\141\154\134\160\162\157\147\162\141\155\163\134\160\171\164\150\157\156\134\160\171\164\150\157\156\63\61\61\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\120\111\114\134\111\155\141\147\145\124\153\56\160\171"
#endif
},
    {"PIL.ImageWin", modulecode_PIL$ImageWin, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\165\163\145\162\163\134\161\167\167\71\63\134\141\160\160\144\141\164\141\134\154\157\143\141\154\134\160\162\157\147\162\141\155\163\134\160\171\164\150\157\156\134\160\171\164\150\157\156\63\61\61\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\120\111\114\134\111\155\141\147\145\127\151\156\56\160\171"
#endif
},
    {"PIL.ImtImagePlugin", modulecode_PIL$ImtImagePlugin, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\165\163\145\162\163\134\161\167\167\71\63\134\141\160\160\144\141\164\141\134\154\157\143\141\154\134\160\162\157\147\162\141\155\163\134\160\171\164\150\157\156\134\160\171\164\150\157\156\63\61\61\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\120\111\114\134\111\155\164\111\155\141\147\145\120\154\165\147\151\156\56\160\171"
#endif
},
    {"PIL.IptcImagePlugin", modulecode_PIL$IptcImagePlugin, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\165\163\145\162\163\134\161\167\167\71\63\134\141\160\160\144\141\164\141\134\154\157\143\141\154\134\160\162\157\147\162\141\155\163\134\160\171\164\150\157\156\134\160\171\164\150\157\156\63\61\61\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\120\111\114\134\111\160\164\143\111\155\141\147\145\120\154\165\147\151\156\56\160\171"
#endif
},
    {"PIL.Jpeg2KImagePlugin", modulecode_PIL$Jpeg2KImagePlugin, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\165\163\145\162\163\134\161\167\167\71\63\134\141\160\160\144\141\164\141\134\154\157\143\141\154\134\160\162\157\147\162\141\155\163\134\160\171\164\150\157\156\134\160\171\164\150\157\156\63\61\61\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\120\111\114\134\112\160\145\147\62\113\111\155\141\147\145\120\154\165\147\151\156\56\160\171"
#endif
},
    {"PIL.JpegImagePlugin", modulecode_PIL$JpegImagePlugin, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\165\163\145\162\163\134\161\167\167\71\63\134\141\160\160\144\141\164\141\134\154\157\143\141\154\134\160\162\157\147\162\141\155\163\134\160\171\164\150\157\156\134\160\171\164\150\157\156\63\61\61\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\120\111\114\134\112\160\145\147\111\155\141\147\145\120\154\165\147\151\156\56\160\171"
#endif
},
    {"PIL.JpegPresets", modulecode_PIL$JpegPresets, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\165\163\145\162\163\134\161\167\167\71\63\134\141\160\160\144\141\164\141\134\154\157\143\141\154\134\160\162\157\147\162\141\155\163\134\160\171\164\150\157\156\134\160\171\164\150\157\156\63\61\61\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\120\111\114\134\112\160\145\147\120\162\145\163\145\164\163\56\160\171"
#endif
},
    {"PIL.McIdasImagePlugin", modulecode_PIL$McIdasImagePlugin, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\165\163\145\162\163\134\161\167\167\71\63\134\141\160\160\144\141\164\141\134\154\157\143\141\154\134\160\162\157\147\162\141\155\163\134\160\171\164\150\157\156\134\160\171\164\150\157\156\63\61\61\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\120\111\114\134\115\143\111\144\141\163\111\155\141\147\145\120\154\165\147\151\156\56\160\171"
#endif
},
    {"PIL.MicImagePlugin", modulecode_PIL$MicImagePlugin, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\165\163\145\162\163\134\161\167\167\71\63\134\141\160\160\144\141\164\141\134\154\157\143\141\154\134\160\162\157\147\162\141\155\163\134\160\171\164\150\157\156\134\160\171\164\150\157\156\63\61\61\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\120\111\114\134\115\151\143\111\155\141\147\145\120\154\165\147\151\156\56\160\171"
#endif
},
    {"PIL.MpegImagePlugin", modulecode_PIL$MpegImagePlugin, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\165\163\145\162\163\134\161\167\167\71\63\134\141\160\160\144\141\164\141\134\154\157\143\141\154\134\160\162\157\147\162\141\155\163\134\160\171\164\150\157\156\134\160\171\164\150\157\156\63\61\61\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\120\111\114\134\115\160\145\147\111\155\141\147\145\120\154\165\147\151\156\56\160\171"
#endif
},
    {"PIL.MpoImagePlugin", modulecode_PIL$MpoImagePlugin, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\165\163\145\162\163\134\161\167\167\71\63\134\141\160\160\144\141\164\141\134\154\157\143\141\154\134\160\162\157\147\162\141\155\163\134\160\171\164\150\157\156\134\160\171\164\150\157\156\63\61\61\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\120\111\114\134\115\160\157\111\155\141\147\145\120\154\165\147\151\156\56\160\171"
#endif
},
    {"PIL.MspImagePlugin", modulecode_PIL$MspImagePlugin, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\165\163\145\162\163\134\161\167\167\71\63\134\141\160\160\144\141\164\141\134\154\157\143\141\154\134\160\162\157\147\162\141\155\163\134\160\171\164\150\157\156\134\160\171\164\150\157\156\63\61\61\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\120\111\114\134\115\163\160\111\155\141\147\145\120\154\165\147\151\156\56\160\171"
#endif
},
    {"PIL.PaletteFile", modulecode_PIL$PaletteFile, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\165\163\145\162\163\134\161\167\167\71\63\134\141\160\160\144\141\164\141\134\154\157\143\141\154\134\160\162\157\147\162\141\155\163\134\160\171\164\150\157\156\134\160\171\164\150\157\156\63\61\61\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\120\111\114\134\120\141\154\145\164\164\145\106\151\154\145\56\160\171"
#endif
},
    {"PIL.PalmImagePlugin", modulecode_PIL$PalmImagePlugin, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\165\163\145\162\163\134\161\167\167\71\63\134\141\160\160\144\141\164\141\134\154\157\143\141\154\134\160\162\157\147\162\141\155\163\134\160\171\164\150\157\156\134\160\171\164\150\157\156\63\61\61\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\120\111\114\134\120\141\154\155\111\155\141\147\145\120\154\165\147\151\156\56\160\171"
#endif
},
    {"PIL.PcdImagePlugin", modulecode_PIL$PcdImagePlugin, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\165\163\145\162\163\134\161\167\167\71\63\134\141\160\160\144\141\164\141\134\154\157\143\141\154\134\160\162\157\147\162\141\155\163\134\160\171\164\150\157\156\134\160\171\164\150\157\156\63\61\61\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\120\111\114\134\120\143\144\111\155\141\147\145\120\154\165\147\151\156\56\160\171"
#endif
},
    {"PIL.PcxImagePlugin", modulecode_PIL$PcxImagePlugin, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\165\163\145\162\163\134\161\167\167\71\63\134\141\160\160\144\141\164\141\134\154\157\143\141\154\134\160\162\157\147\162\141\155\163\134\160\171\164\150\157\156\134\160\171\164\150\157\156\63\61\61\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\120\111\114\134\120\143\170\111\155\141\147\145\120\154\165\147\151\156\56\160\171"
#endif
},
    {"PIL.PdfImagePlugin", modulecode_PIL$PdfImagePlugin, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\165\163\145\162\163\134\161\167\167\71\63\134\141\160\160\144\141\164\141\134\154\157\143\141\154\134\160\162\157\147\162\141\155\163\134\160\171\164\150\157\156\134\160\171\164\150\157\156\63\61\61\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\120\111\114\134\120\144\146\111\155\141\147\145\120\154\165\147\151\156\56\160\171"
#endif
},
    {"PIL.PdfParser", modulecode_PIL$PdfParser, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\165\163\145\162\163\134\161\167\167\71\63\134\141\160\160\144\141\164\141\134\154\157\143\141\154\134\160\162\157\147\162\141\155\163\134\160\171\164\150\157\156\134\160\171\164\150\157\156\63\61\61\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\120\111\114\134\120\144\146\120\141\162\163\145\162\56\160\171"
#endif
},
    {"PIL.PixarImagePlugin", modulecode_PIL$PixarImagePlugin, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\165\163\145\162\163\134\161\167\167\71\63\134\141\160\160\144\141\164\141\134\154\157\143\141\154\134\160\162\157\147\162\141\155\163\134\160\171\164\150\157\156\134\160\171\164\150\157\156\63\61\61\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\120\111\114\134\120\151\170\141\162\111\155\141\147\145\120\154\165\147\151\156\56\160\171"
#endif
},
    {"PIL.PngImagePlugin", modulecode_PIL$PngImagePlugin, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\165\163\145\162\163\134\161\167\167\71\63\134\141\160\160\144\141\164\141\134\154\157\143\141\154\134\160\162\157\147\162\141\155\163\134\160\171\164\150\157\156\134\160\171\164\150\157\156\63\61\61\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\120\111\114\134\120\156\147\111\155\141\147\145\120\154\165\147\151\156\56\160\171"
#endif
},
    {"PIL.PpmImagePlugin", modulecode_PIL$PpmImagePlugin, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\165\163\145\162\163\134\161\167\167\71\63\134\141\160\160\144\141\164\141\134\154\157\143\141\154\134\160\162\157\147\162\141\155\163\134\160\171\164\150\157\156\134\160\171\164\150\157\156\63\61\61\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\120\111\114\134\120\160\155\111\155\141\147\145\120\154\165\147\151\156\56\160\171"
#endif
},
    {"PIL.PsdImagePlugin", modulecode_PIL$PsdImagePlugin, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\165\163\145\162\163\134\161\167\167\71\63\134\141\160\160\144\141\164\141\134\154\157\143\141\154\134\160\162\157\147\162\141\155\163\134\160\171\164\150\157\156\134\160\171\164\150\157\156\63\61\61\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\120\111\114\134\120\163\144\111\155\141\147\145\120\154\165\147\151\156\56\160\171"
#endif
},
    {"PIL.PyAccess", modulecode_PIL$PyAccess, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\165\163\145\162\163\134\161\167\167\71\63\134\141\160\160\144\141\164\141\134\154\157\143\141\154\134\160\162\157\147\162\141\155\163\134\160\171\164\150\157\156\134\160\171\164\150\157\156\63\61\61\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\120\111\114\134\120\171\101\143\143\145\163\163\56\160\171"
#endif
},
    {"PIL.SgiImagePlugin", modulecode_PIL$SgiImagePlugin, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\165\163\145\162\163\134\161\167\167\71\63\134\141\160\160\144\141\164\141\134\154\157\143\141\154\134\160\162\157\147\162\141\155\163\134\160\171\164\150\157\156\134\160\171\164\150\157\156\63\61\61\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\120\111\114\134\123\147\151\111\155\141\147\145\120\154\165\147\151\156\56\160\171"
#endif
},
    {"PIL.SpiderImagePlugin", modulecode_PIL$SpiderImagePlugin, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\165\163\145\162\163\134\161\167\167\71\63\134\141\160\160\144\141\164\141\134\154\157\143\141\154\134\160\162\157\147\162\141\155\163\134\160\171\164\150\157\156\134\160\171\164\150\157\156\63\61\61\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\120\111\114\134\123\160\151\144\145\162\111\155\141\147\145\120\154\165\147\151\156\56\160\171"
#endif
},
    {"PIL.SunImagePlugin", modulecode_PIL$SunImagePlugin, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\165\163\145\162\163\134\161\167\167\71\63\134\141\160\160\144\141\164\141\134\154\157\143\141\154\134\160\162\157\147\162\141\155\163\134\160\171\164\150\157\156\134\160\171\164\150\157\156\63\61\61\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\120\111\114\134\123\165\156\111\155\141\147\145\120\154\165\147\151\156\56\160\171"
#endif
},
    {"PIL.TgaImagePlugin", modulecode_PIL$TgaImagePlugin, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\165\163\145\162\163\134\161\167\167\71\63\134\141\160\160\144\141\164\141\134\154\157\143\141\154\134\160\162\157\147\162\141\155\163\134\160\171\164\150\157\156\134\160\171\164\150\157\156\63\61\61\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\120\111\114\134\124\147\141\111\155\141\147\145\120\154\165\147\151\156\56\160\171"
#endif
},
    {"PIL.TiffImagePlugin", modulecode_PIL$TiffImagePlugin, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\165\163\145\162\163\134\161\167\167\71\63\134\141\160\160\144\141\164\141\134\154\157\143\141\154\134\160\162\157\147\162\141\155\163\134\160\171\164\150\157\156\134\160\171\164\150\157\156\63\61\61\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\120\111\114\134\124\151\146\146\111\155\141\147\145\120\154\165\147\151\156\56\160\171"
#endif
},
    {"PIL.TiffTags", modulecode_PIL$TiffTags, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\165\163\145\162\163\134\161\167\167\71\63\134\141\160\160\144\141\164\141\134\154\157\143\141\154\134\160\162\157\147\162\141\155\163\134\160\171\164\150\157\156\134\160\171\164\150\157\156\63\61\61\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\120\111\114\134\124\151\146\146\124\141\147\163\56\160\171"
#endif
},
    {"PIL.WebPImagePlugin", modulecode_PIL$WebPImagePlugin, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\165\163\145\162\163\134\161\167\167\71\63\134\141\160\160\144\141\164\141\134\154\157\143\141\154\134\160\162\157\147\162\141\155\163\134\160\171\164\150\157\156\134\160\171\164\150\157\156\63\61\61\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\120\111\114\134\127\145\142\120\111\155\141\147\145\120\154\165\147\151\156\56\160\171"
#endif
},
    {"PIL.WmfImagePlugin", modulecode_PIL$WmfImagePlugin, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\165\163\145\162\163\134\161\167\167\71\63\134\141\160\160\144\141\164\141\134\154\157\143\141\154\134\160\162\157\147\162\141\155\163\134\160\171\164\150\157\156\134\160\171\164\150\157\156\63\61\61\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\120\111\114\134\127\155\146\111\155\141\147\145\120\154\165\147\151\156\56\160\171"
#endif
},
    {"PIL.XVThumbImagePlugin", modulecode_PIL$XVThumbImagePlugin, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\165\163\145\162\163\134\161\167\167\71\63\134\141\160\160\144\141\164\141\134\154\157\143\141\154\134\160\162\157\147\162\141\155\163\134\160\171\164\150\157\156\134\160\171\164\150\157\156\63\61\61\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\120\111\114\134\130\126\124\150\165\155\142\111\155\141\147\145\120\154\165\147\151\156\56\160\171"
#endif
},
    {"PIL.XbmImagePlugin", modulecode_PIL$XbmImagePlugin, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\165\163\145\162\163\134\161\167\167\71\63\134\141\160\160\144\141\164\141\134\154\157\143\141\154\134\160\162\157\147\162\141\155\163\134\160\171\164\150\157\156\134\160\171\164\150\157\156\63\61\61\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\120\111\114\134\130\142\155\111\155\141\147\145\120\154\165\147\151\156\56\160\171"
#endif
},
    {"PIL.XpmImagePlugin", modulecode_PIL$XpmImagePlugin, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\165\163\145\162\163\134\161\167\167\71\63\134\141\160\160\144\141\164\141\134\154\157\143\141\154\134\160\162\157\147\162\141\155\163\134\160\171\164\150\157\156\134\160\171\164\150\157\156\63\61\61\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\120\111\114\134\130\160\155\111\155\141\147\145\120\154\165\147\151\156\56\160\171"
#endif
},
    {"PIL._binary", modulecode_PIL$_binary, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\165\163\145\162\163\134\161\167\167\71\63\134\141\160\160\144\141\164\141\134\154\157\143\141\154\134\160\162\157\147\162\141\155\163\134\160\171\164\150\157\156\134\160\171\164\150\157\156\63\61\61\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\120\111\114\134\137\142\151\156\141\162\171\56\160\171"
#endif
},
    {"PIL._deprecate", modulecode_PIL$_deprecate, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\165\163\145\162\163\134\161\167\167\71\63\134\141\160\160\144\141\164\141\134\154\157\143\141\154\134\160\162\157\147\162\141\155\163\134\160\171\164\150\157\156\134\160\171\164\150\157\156\63\61\61\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\120\111\114\134\137\144\145\160\162\145\143\141\164\145\56\160\171"
#endif
},
    {"PIL._util", modulecode_PIL$_util, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\165\163\145\162\163\134\161\167\167\71\63\134\141\160\160\144\141\164\141\134\154\157\143\141\154\134\160\162\157\147\162\141\155\163\134\160\171\164\150\157\156\134\160\171\164\150\157\156\63\61\61\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\120\111\114\134\137\165\164\151\154\56\160\171"
#endif
},
    {"PIL._version", modulecode_PIL$_version, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\165\163\145\162\163\134\161\167\167\71\63\134\141\160\160\144\141\164\141\134\154\157\143\141\154\134\160\162\157\147\162\141\155\163\134\160\171\164\150\157\156\134\160\171\164\150\157\156\63\61\61\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\120\111\114\134\137\166\145\162\163\151\157\156\56\160\171"
#endif
},
    {"PIL.features", modulecode_PIL$features, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\165\163\145\162\163\134\161\167\167\71\63\134\141\160\160\144\141\164\141\134\154\157\143\141\154\134\160\162\157\147\162\141\155\163\134\160\171\164\150\157\156\134\160\171\164\150\157\156\63\61\61\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\120\111\114\134\146\145\141\164\165\162\145\163\56\160\171"
#endif
},
    {"PyQt5", modulecode_PyQt5, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_PACKAGE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\165\163\145\162\163\134\161\167\167\71\63\134\141\160\160\144\141\164\141\134\154\157\143\141\154\134\160\162\157\147\162\141\155\163\134\160\171\164\150\157\156\134\160\171\164\150\157\156\63\61\61\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\120\171\121\164\65\134\137\137\151\156\151\164\137\137\56\160\171"
#endif
},
    {"PyQt6", modulecode_PyQt6, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_PACKAGE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\165\163\145\162\163\134\161\167\167\71\63\134\141\160\160\144\141\164\141\134\154\157\143\141\154\134\160\162\157\147\162\141\155\163\134\160\171\164\150\157\156\134\160\171\164\150\157\156\63\61\61\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\120\171\121\164\66\134\137\137\151\156\151\164\137\137\56\160\171"
#endif
},
    {"__main__", modulecode___main__, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\161\167\167\71\63\134\104\145\163\153\164\157\160\134\101\156\156\165\141\154\40\101\155\157\165\156\164\40\103\141\154\134\101\156\156\165\141\154\115\157\156\145\171\103\141\154\56\160\171"
#endif
},
    {"__parents_main__", modulecode___parents_main__, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\161\167\167\71\63\134\104\145\163\153\164\157\160\134\101\156\156\165\141\154\40\101\155\157\165\156\164\40\103\141\154\134\101\156\156\165\141\154\115\157\156\145\171\103\141\154\56\160\171"
#endif
},
    {"_pydecimal", NULL, 0, 244281, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\161\167\167\71\63\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\61\134\114\151\142\134\137\160\171\144\145\143\151\155\141\154\56\160\171"
#endif
},
    {"argparse", NULL, 1, 113324, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\161\167\167\71\63\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\61\134\114\151\142\134\141\162\147\160\141\162\163\145\56\160\171"
#endif
},
    {"asyncio", NULL, 2, 1365, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG | NUITKA_PACKAGE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\161\167\167\71\63\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\61\134\114\151\142\134\141\163\171\156\143\151\157\134\137\137\151\156\151\164\137\137\56\160\171"
#endif
},
    {"asyncio.base_events", NULL, 3, 90533, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\161\167\167\71\63\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\61\134\114\151\142\134\141\163\171\156\143\151\157\134\142\141\163\145\137\145\166\145\156\164\163\56\160\171"
#endif
},
    {"asyncio.base_futures", NULL, 4, 3409, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\161\167\167\71\63\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\61\134\114\151\142\134\141\163\171\156\143\151\157\134\142\141\163\145\137\146\165\164\165\162\145\163\56\160\171"
#endif
},
    {"asyncio.base_subprocess", NULL, 5, 16724, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\161\167\167\71\63\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\61\134\114\151\142\134\141\163\171\156\143\151\157\134\142\141\163\145\137\163\165\142\160\162\157\143\145\163\163\56\160\171"
#endif
},
    {"asyncio.base_tasks", NULL, 6, 4197, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\161\167\167\71\63\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\61\134\114\151\142\134\141\163\171\156\143\151\157\134\142\141\163\145\137\164\141\163\153\163\56\160\171"
#endif
},
    {"asyncio.constants", NULL, 7, 982, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\161\167\167\71\63\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\61\134\114\151\142\134\141\163\171\156\143\151\157\134\143\157\156\163\164\141\156\164\163\56\160\171"
#endif
},
    {"asyncio.coroutines", NULL, 8, 4018, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\161\167\167\71\63\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\61\134\114\151\142\134\141\163\171\156\143\151\157\134\143\157\162\157\165\164\151\156\145\163\56\160\171"
#endif
},
    {"asyncio.events", NULL, 9, 37808, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\161\167\167\71\63\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\61\134\114\151\142\134\141\163\171\156\143\151\157\134\145\166\145\156\164\163\56\160\171"
#endif
},
    {"asyncio.exceptions", NULL, 10, 3664, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\161\167\167\71\63\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\61\134\114\151\142\134\141\163\171\156\143\151\157\134\145\170\143\145\160\164\151\157\156\163\56\160\171"
#endif
},
    {"asyncio.format_helpers", NULL, 11, 4152, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\161\167\167\71\63\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\61\134\114\151\142\134\141\163\171\156\143\151\157\134\146\157\162\155\141\164\137\150\145\154\160\145\162\163\56\160\171"
#endif
},
    {"asyncio.futures", NULL, 12, 18531, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\161\167\167\71\63\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\61\134\114\151\142\134\141\163\171\156\143\151\157\134\146\165\164\165\162\145\163\56\160\171"
#endif
},
    {"asyncio.locks", NULL, 13, 29228, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\161\167\167\71\63\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\61\134\114\151\142\134\141\163\171\156\143\151\157\134\154\157\143\153\163\56\160\171"
#endif
},
    {"asyncio.log", NULL, 14, 315, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\161\167\167\71\63\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\61\134\114\151\142\134\141\163\171\156\143\151\157\134\154\157\147\56\160\171"
#endif
},
    {"asyncio.mixins", NULL, 15, 1217, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\161\167\167\71\63\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\61\134\114\151\142\134\141\163\171\156\143\151\157\134\155\151\170\151\156\163\56\160\171"
#endif
},
    {"asyncio.proactor_events", NULL, 16, 47757, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\161\167\167\71\63\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\61\134\114\151\142\134\141\163\171\156\143\151\157\134\160\162\157\141\143\164\157\162\137\145\166\145\156\164\163\56\160\171"
#endif
},
    {"asyncio.protocols", NULL, 17, 9466, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\161\167\167\71\63\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\61\134\114\151\142\134\141\163\171\156\143\151\157\134\160\162\157\164\157\143\157\154\163\56\160\171"
#endif
},
    {"asyncio.queues", NULL, 18, 12847, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\161\167\167\71\63\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\61\134\114\151\142\134\141\163\171\156\143\151\157\134\161\165\145\165\145\163\56\160\171"
#endif
},
    {"asyncio.runners", NULL, 19, 10254, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\161\167\167\71\63\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\61\134\114\151\142\134\141\163\171\156\143\151\157\134\162\165\156\156\145\162\163\56\160\171"
#endif
},
    {"asyncio.selector_events", NULL, 20, 64142, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\161\167\167\71\63\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\61\134\114\151\142\134\141\163\171\156\143\151\157\134\163\145\154\145\143\164\157\162\137\145\166\145\156\164\163\56\160\171"
#endif
},
    {"asyncio.sslproto", NULL, 21, 43502, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\161\167\167\71\63\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\61\134\114\151\142\134\141\163\171\156\143\151\157\134\163\163\154\160\162\157\164\157\56\160\171"
#endif
},
    {"asyncio.staggered", NULL, 22, 6657, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\161\167\167\71\63\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\61\134\114\151\142\134\141\163\171\156\143\151\157\134\163\164\141\147\147\145\162\145\144\56\160\171"
#endif
},
    {"asyncio.streams", NULL, 23, 33698, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\161\167\167\71\63\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\61\134\114\151\142\134\141\163\171\156\143\151\157\134\163\164\162\145\141\155\163\56\160\171"
#endif
},
    {"asyncio.subprocess", NULL, 24, 12625, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\161\167\167\71\63\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\61\134\114\151\142\134\141\163\171\156\143\151\157\134\163\165\142\160\162\157\143\145\163\163\56\160\171"
#endif
},
    {"asyncio.taskgroups", NULL, 25, 8115, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\161\167\167\71\63\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\61\134\114\151\142\134\141\163\171\156\143\151\157\134\164\141\163\153\147\162\157\165\160\163\56\160\171"
#endif
},
    {"asyncio.tasks", NULL, 26, 41027, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\161\167\167\71\63\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\61\134\114\151\142\134\141\163\171\156\143\151\157\134\164\141\163\153\163\56\160\171"
#endif
},
    {"asyncio.threads", NULL, 27, 1314, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\161\167\167\71\63\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\61\134\114\151\142\134\141\163\171\156\143\151\157\134\164\150\162\145\141\144\163\56\160\171"
#endif
},
    {"asyncio.timeouts", NULL, 28, 7804, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\161\167\167\71\63\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\61\134\114\151\142\134\141\163\171\156\143\151\157\134\164\151\155\145\157\165\164\163\56\160\171"
#endif
},
    {"asyncio.transports", NULL, 29, 15190, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\161\167\167\71\63\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\61\134\114\151\142\134\141\163\171\156\143\151\157\134\164\162\141\156\163\160\157\162\164\163\56\160\171"
#endif
},
    {"asyncio.trsock", NULL, 30, 5405, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\161\167\167\71\63\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\61\134\114\151\142\134\141\163\171\156\143\151\157\134\164\162\163\157\143\153\56\160\171"
#endif
},
    {"asyncio.windows_events", NULL, 31, 46533, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\161\167\167\71\63\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\61\134\114\151\142\134\141\163\171\156\143\151\157\134\167\151\156\144\157\167\163\137\145\166\145\156\164\163\56\160\171"
#endif
},
    {"asyncio.windows_utils", NULL, 32, 7777, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\161\167\167\71\63\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\61\134\114\151\142\134\141\163\171\156\143\151\157\134\167\151\156\144\157\167\163\137\165\164\151\154\163\56\160\171"
#endif
},
    {"bdb", NULL, 33, 38631, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\161\167\167\71\63\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\61\134\114\151\142\134\142\144\142\56\160\171"
#endif
},
    {"bs4", modulecode_bs4, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_PACKAGE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\165\163\145\162\163\134\161\167\167\71\63\134\141\160\160\144\141\164\141\134\154\157\143\141\154\134\160\162\157\147\162\141\155\163\134\160\171\164\150\157\156\134\160\171\164\150\157\156\63\61\61\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\142\163\64\134\137\137\151\156\151\164\137\137\56\160\171"
#endif
},
    {"bs4.builder", modulecode_bs4$builder, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_PACKAGE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\165\163\145\162\163\134\161\167\167\71\63\134\141\160\160\144\141\164\141\134\154\157\143\141\154\134\160\162\157\147\162\141\155\163\134\160\171\164\150\157\156\134\160\171\164\150\157\156\63\61\61\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\142\163\64\134\142\165\151\154\144\145\162\134\137\137\151\156\151\164\137\137\56\160\171"
#endif
},
    {"bs4.builder._html5lib", modulecode_bs4$builder$_html5lib, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\165\163\145\162\163\134\161\167\167\71\63\134\141\160\160\144\141\164\141\134\154\157\143\141\154\134\160\162\157\147\162\141\155\163\134\160\171\164\150\157\156\134\160\171\164\150\157\156\63\61\61\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\142\163\64\134\142\165\151\154\144\145\162\134\137\150\164\155\154\65\154\151\142\56\160\171"
#endif
},
    {"bs4.builder._htmlparser", modulecode_bs4$builder$_htmlparser, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\165\163\145\162\163\134\161\167\167\71\63\134\141\160\160\144\141\164\141\134\154\157\143\141\154\134\160\162\157\147\162\141\155\163\134\160\171\164\150\157\156\134\160\171\164\150\157\156\63\61\61\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\142\163\64\134\142\165\151\154\144\145\162\134\137\150\164\155\154\160\141\162\163\145\162\56\160\171"
#endif
},
    {"bs4.builder._lxml", modulecode_bs4$builder$_lxml, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\165\163\145\162\163\134\161\167\167\71\63\134\141\160\160\144\141\164\141\134\154\157\143\141\154\134\160\162\157\147\162\141\155\163\134\160\171\164\150\157\156\134\160\171\164\150\157\156\63\61\61\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\142\163\64\134\142\165\151\154\144\145\162\134\137\154\170\155\154\56\160\171"
#endif
},
    {"bs4.css", modulecode_bs4$css, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\165\163\145\162\163\134\161\167\167\71\63\134\141\160\160\144\141\164\141\134\154\157\143\141\154\134\160\162\157\147\162\141\155\163\134\160\171\164\150\157\156\134\160\171\164\150\157\156\63\61\61\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\142\163\64\134\143\163\163\56\160\171"
#endif
},
    {"bs4.dammit", modulecode_bs4$dammit, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\165\163\145\162\163\134\161\167\167\71\63\134\141\160\160\144\141\164\141\134\154\157\143\141\154\134\160\162\157\147\162\141\155\163\134\160\171\164\150\157\156\134\160\171\164\150\157\156\63\61\61\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\142\163\64\134\144\141\155\155\151\164\56\160\171"
#endif
},
    {"bs4.element", modulecode_bs4$element, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\165\163\145\162\163\134\161\167\167\71\63\134\141\160\160\144\141\164\141\134\154\157\143\141\154\134\160\162\157\147\162\141\155\163\134\160\171\164\150\157\156\134\160\171\164\150\157\156\63\61\61\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\142\163\64\134\145\154\145\155\145\156\164\56\160\171"
#endif
},
    {"bs4.formatter", modulecode_bs4$formatter, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\165\163\145\162\163\134\161\167\167\71\63\134\141\160\160\144\141\164\141\134\154\157\143\141\154\134\160\162\157\147\162\141\155\163\134\160\171\164\150\157\156\134\160\171\164\150\157\156\63\61\61\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\142\163\64\134\146\157\162\155\141\164\164\145\162\56\160\171"
#endif
},
    {"bz2", NULL, 34, 16183, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\161\167\167\71\63\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\61\134\114\151\142\134\142\172\62\56\160\171"
#endif
},
    {"certifi", modulecode_certifi, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_PACKAGE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\165\163\145\162\163\134\161\167\167\71\63\134\141\160\160\144\141\164\141\134\154\157\143\141\154\134\160\162\157\147\162\141\155\163\134\160\171\164\150\157\156\134\160\171\164\150\157\156\63\61\61\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\143\145\162\164\151\146\151\134\137\137\151\156\151\164\137\137\56\160\171"
#endif
},
    {"certifi.core", modulecode_certifi$core, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\165\163\145\162\163\134\161\167\167\71\63\134\141\160\160\144\141\164\141\134\154\157\143\141\154\134\160\162\157\147\162\141\155\163\134\160\171\164\150\157\156\134\160\171\164\150\157\156\63\61\61\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\143\145\162\164\151\146\151\134\143\157\162\145\56\160\171"
#endif
},
    {"cffi", modulecode_cffi, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_PACKAGE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\165\163\145\162\163\134\161\167\167\71\63\134\141\160\160\144\141\164\141\134\154\157\143\141\154\134\160\162\157\147\162\141\155\163\134\160\171\164\150\157\156\134\160\171\164\150\157\156\63\61\61\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\143\146\146\151\134\137\137\151\156\151\164\137\137\56\160\171"
#endif
},
    {"cffi.api", modulecode_cffi$api, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\165\163\145\162\163\134\161\167\167\71\63\134\141\160\160\144\141\164\141\134\154\157\143\141\154\134\160\162\157\147\162\141\155\163\134\160\171\164\150\157\156\134\160\171\164\150\157\156\63\61\61\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\143\146\146\151\134\141\160\151\56\160\171"
#endif
},
    {"cffi.commontypes", modulecode_cffi$commontypes, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\165\163\145\162\163\134\161\167\167\71\63\134\141\160\160\144\141\164\141\134\154\157\143\141\154\134\160\162\157\147\162\141\155\163\134\160\171\164\150\157\156\134\160\171\164\150\157\156\63\61\61\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\143\146\146\151\134\143\157\155\155\157\156\164\171\160\145\163\56\160\171"
#endif
},
    {"cffi.cparser", modulecode_cffi$cparser, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\165\163\145\162\163\134\161\167\167\71\63\134\141\160\160\144\141\164\141\134\154\157\143\141\154\134\160\162\157\147\162\141\155\163\134\160\171\164\150\157\156\134\160\171\164\150\157\156\63\61\61\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\143\146\146\151\134\143\160\141\162\163\145\162\56\160\171"
#endif
},
    {"cffi.error", modulecode_cffi$error, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\165\163\145\162\163\134\161\167\167\71\63\134\141\160\160\144\141\164\141\134\154\157\143\141\154\134\160\162\157\147\162\141\155\163\134\160\171\164\150\157\156\134\160\171\164\150\157\156\63\61\61\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\143\146\146\151\134\145\162\162\157\162\56\160\171"
#endif
},
    {"cffi.ffiplatform", modulecode_cffi$ffiplatform, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\165\163\145\162\163\134\161\167\167\71\63\134\141\160\160\144\141\164\141\134\154\157\143\141\154\134\160\162\157\147\162\141\155\163\134\160\171\164\150\157\156\134\160\171\164\150\157\156\63\61\61\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\143\146\146\151\134\146\146\151\160\154\141\164\146\157\162\155\56\160\171"
#endif
},
    {"cffi.lock", modulecode_cffi$lock, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\165\163\145\162\163\134\161\167\167\71\63\134\141\160\160\144\141\164\141\134\154\157\143\141\154\134\160\162\157\147\162\141\155\163\134\160\171\164\150\157\156\134\160\171\164\150\157\156\63\61\61\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\143\146\146\151\134\154\157\143\153\56\160\171"
#endif
},
    {"cffi.model", modulecode_cffi$model, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\165\163\145\162\163\134\161\167\167\71\63\134\141\160\160\144\141\164\141\134\154\157\143\141\154\134\160\162\157\147\162\141\155\163\134\160\171\164\150\157\156\134\160\171\164\150\157\156\63\61\61\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\143\146\146\151\134\155\157\144\145\154\56\160\171"
#endif
},
    {"cffi.pkgconfig", modulecode_cffi$pkgconfig, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\165\163\145\162\163\134\161\167\167\71\63\134\141\160\160\144\141\164\141\134\154\157\143\141\154\134\160\162\157\147\162\141\155\163\134\160\171\164\150\157\156\134\160\171\164\150\157\156\63\61\61\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\143\146\146\151\134\160\153\147\143\157\156\146\151\147\56\160\171"
#endif
},
    {"cffi.vengine_cpy", modulecode_cffi$vengine_cpy, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\165\163\145\162\163\134\161\167\167\71\63\134\141\160\160\144\141\164\141\134\154\157\143\141\154\134\160\162\157\147\162\141\155\163\134\160\171\164\150\157\156\134\160\171\164\150\157\156\63\61\61\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\143\146\146\151\134\166\145\156\147\151\156\145\137\143\160\171\56\160\171"
#endif
},
    {"cffi.vengine_gen", modulecode_cffi$vengine_gen, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\165\163\145\162\163\134\161\167\167\71\63\134\141\160\160\144\141\164\141\134\154\157\143\141\154\134\160\162\157\147\162\141\155\163\134\160\171\164\150\157\156\134\160\171\164\150\157\156\63\61\61\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\143\146\146\151\134\166\145\156\147\151\156\145\137\147\145\156\56\160\171"
#endif
},
    {"cffi.verifier", modulecode_cffi$verifier, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\165\163\145\162\163\134\161\167\167\71\63\134\141\160\160\144\141\164\141\134\154\157\143\141\154\134\160\162\157\147\162\141\155\163\134\160\171\164\150\157\156\134\160\171\164\150\157\156\63\61\61\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\143\146\146\151\134\166\145\162\151\146\151\145\162\56\160\171"
#endif
},
    {"chardet", modulecode_chardet, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_PACKAGE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\165\163\145\162\163\134\161\167\167\71\63\134\141\160\160\144\141\164\141\134\154\157\143\141\154\134\160\162\157\147\162\141\155\163\134\160\171\164\150\157\156\134\160\171\164\150\157\156\63\61\61\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\143\150\141\162\144\145\164\134\137\137\151\156\151\164\137\137\56\160\171"
#endif
},
    {"chardet.big5freq", modulecode_chardet$big5freq, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\165\163\145\162\163\134\161\167\167\71\63\134\141\160\160\144\141\164\141\134\154\157\143\141\154\134\160\162\157\147\162\141\155\163\134\160\171\164\150\157\156\134\160\171\164\150\157\156\63\61\61\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\143\150\141\162\144\145\164\134\142\151\147\65\146\162\145\161\56\160\171"
#endif
},
    {"chardet.big5prober", modulecode_chardet$big5prober, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\165\163\145\162\163\134\161\167\167\71\63\134\141\160\160\144\141\164\141\134\154\157\143\141\154\134\160\162\157\147\162\141\155\163\134\160\171\164\150\157\156\134\160\171\164\150\157\156\63\61\61\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\143\150\141\162\144\145\164\134\142\151\147\65\160\162\157\142\145\162\56\160\171"
#endif
},
    {"chardet.chardistribution", modulecode_chardet$chardistribution, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\165\163\145\162\163\134\161\167\167\71\63\134\141\160\160\144\141\164\141\134\154\157\143\141\154\134\160\162\157\147\162\141\155\163\134\160\171\164\150\157\156\134\160\171\164\150\157\156\63\61\61\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\143\150\141\162\144\145\164\134\143\150\141\162\144\151\163\164\162\151\142\165\164\151\157\156\56\160\171"
#endif
},
    {"chardet.charsetgroupprober", modulecode_chardet$charsetgroupprober, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\165\163\145\162\163\134\161\167\167\71\63\134\141\160\160\144\141\164\141\134\154\157\143\141\154\134\160\162\157\147\162\141\155\163\134\160\171\164\150\157\156\134\160\171\164\150\157\156\63\61\61\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\143\150\141\162\144\145\164\134\143\150\141\162\163\145\164\147\162\157\165\160\160\162\157\142\145\162\56\160\171"
#endif
},
    {"chardet.charsetprober", modulecode_chardet$charsetprober, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\165\163\145\162\163\134\161\167\167\71\63\134\141\160\160\144\141\164\141\134\154\157\143\141\154\134\160\162\157\147\162\141\155\163\134\160\171\164\150\157\156\134\160\171\164\150\157\156\63\61\61\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\143\150\141\162\144\145\164\134\143\150\141\162\163\145\164\160\162\157\142\145\162\56\160\171"
#endif
},
    {"chardet.codingstatemachine", modulecode_chardet$codingstatemachine, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\165\163\145\162\163\134\161\167\167\71\63\134\141\160\160\144\141\164\141\134\154\157\143\141\154\134\160\162\157\147\162\141\155\163\134\160\171\164\150\157\156\134\160\171\164\150\157\156\63\61\61\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\143\150\141\162\144\145\164\134\143\157\144\151\156\147\163\164\141\164\145\155\141\143\150\151\156\145\56\160\171"
#endif
},
    {"chardet.codingstatemachinedict", modulecode_chardet$codingstatemachinedict, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\165\163\145\162\163\134\161\167\167\71\63\134\141\160\160\144\141\164\141\134\154\157\143\141\154\134\160\162\157\147\162\141\155\163\134\160\171\164\150\157\156\134\160\171\164\150\157\156\63\61\61\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\143\150\141\162\144\145\164\134\143\157\144\151\156\147\163\164\141\164\145\155\141\143\150\151\156\145\144\151\143\164\56\160\171"
#endif
},
    {"chardet.cp949prober", modulecode_chardet$cp949prober, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\165\163\145\162\163\134\161\167\167\71\63\134\141\160\160\144\141\164\141\134\154\157\143\141\154\134\160\162\157\147\162\141\155\163\134\160\171\164\150\157\156\134\160\171\164\150\157\156\63\61\61\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\143\150\141\162\144\145\164\134\143\160\71\64\71\160\162\157\142\145\162\56\160\171"
#endif
},
    {"chardet.enums", modulecode_chardet$enums, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\165\163\145\162\163\134\161\167\167\71\63\134\141\160\160\144\141\164\141\134\154\157\143\141\154\134\160\162\157\147\162\141\155\163\134\160\171\164\150\157\156\134\160\171\164\150\157\156\63\61\61\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\143\150\141\162\144\145\164\134\145\156\165\155\163\56\160\171"
#endif
},
    {"chardet.escprober", modulecode_chardet$escprober, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\165\163\145\162\163\134\161\167\167\71\63\134\141\160\160\144\141\164\141\134\154\157\143\141\154\134\160\162\157\147\162\141\155\163\134\160\171\164\150\157\156\134\160\171\164\150\157\156\63\61\61\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\143\150\141\162\144\145\164\134\145\163\143\160\162\157\142\145\162\56\160\171"
#endif
},
    {"chardet.escsm", modulecode_chardet$escsm, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\165\163\145\162\163\134\161\167\167\71\63\134\141\160\160\144\141\164\141\134\154\157\143\141\154\134\160\162\157\147\162\141\155\163\134\160\171\164\150\157\156\134\160\171\164\150\157\156\63\61\61\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\143\150\141\162\144\145\164\134\145\163\143\163\155\56\160\171"
#endif
},
    {"chardet.eucjpprober", modulecode_chardet$eucjpprober, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\165\163\145\162\163\134\161\167\167\71\63\134\141\160\160\144\141\164\141\134\154\157\143\141\154\134\160\162\157\147\162\141\155\163\134\160\171\164\150\157\156\134\160\171\164\150\157\156\63\61\61\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\143\150\141\162\144\145\164\134\145\165\143\152\160\160\162\157\142\145\162\56\160\171"
#endif
},
    {"chardet.euckrfreq", modulecode_chardet$euckrfreq, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\165\163\145\162\163\134\161\167\167\71\63\134\141\160\160\144\141\164\141\134\154\157\143\141\154\134\160\162\157\147\162\141\155\163\134\160\171\164\150\157\156\134\160\171\164\150\157\156\63\61\61\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\143\150\141\162\144\145\164\134\145\165\143\153\162\146\162\145\161\56\160\171"
#endif
},
    {"chardet.euckrprober", modulecode_chardet$euckrprober, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\165\163\145\162\163\134\161\167\167\71\63\134\141\160\160\144\141\164\141\134\154\157\143\141\154\134\160\162\157\147\162\141\155\163\134\160\171\164\150\157\156\134\160\171\164\150\157\156\63\61\61\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\143\150\141\162\144\145\164\134\145\165\143\153\162\160\162\157\142\145\162\56\160\171"
#endif
},
    {"chardet.euctwfreq", modulecode_chardet$euctwfreq, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\165\163\145\162\163\134\161\167\167\71\63\134\141\160\160\144\141\164\141\134\154\157\143\141\154\134\160\162\157\147\162\141\155\163\134\160\171\164\150\157\156\134\160\171\164\150\157\156\63\61\61\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\143\150\141\162\144\145\164\134\145\165\143\164\167\146\162\145\161\56\160\171"
#endif
},
    {"chardet.euctwprober", modulecode_chardet$euctwprober, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\165\163\145\162\163\134\161\167\167\71\63\134\141\160\160\144\141\164\141\134\154\157\143\141\154\134\160\162\157\147\162\141\155\163\134\160\171\164\150\157\156\134\160\171\164\150\157\156\63\61\61\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\143\150\141\162\144\145\164\134\145\165\143\164\167\160\162\157\142\145\162\56\160\171"
#endif
},
    {"chardet.gb2312freq", modulecode_chardet$gb2312freq, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\165\163\145\162\163\134\161\167\167\71\63\134\141\160\160\144\141\164\141\134\154\157\143\141\154\134\160\162\157\147\162\141\155\163\134\160\171\164\150\157\156\134\160\171\164\150\157\156\63\61\61\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\143\150\141\162\144\145\164\134\147\142\62\63\61\62\146\162\145\161\56\160\171"
#endif
},
    {"chardet.gb2312prober", modulecode_chardet$gb2312prober, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\165\163\145\162\163\134\161\167\167\71\63\134\141\160\160\144\141\164\141\134\154\157\143\141\154\134\160\162\157\147\162\141\155\163\134\160\171\164\150\157\156\134\160\171\164\150\157\156\63\61\61\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\143\150\141\162\144\145\164\134\147\142\62\63\61\62\160\162\157\142\145\162\56\160\171"
#endif
},
    {"chardet.hebrewprober", modulecode_chardet$hebrewprober, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\165\163\145\162\163\134\161\167\167\71\63\134\141\160\160\144\141\164\141\134\154\157\143\141\154\134\160\162\157\147\162\141\155\163\134\160\171\164\150\157\156\134\160\171\164\150\157\156\63\61\61\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\143\150\141\162\144\145\164\134\150\145\142\162\145\167\160\162\157\142\145\162\56\160\171"
#endif
},
    {"chardet.jisfreq", modulecode_chardet$jisfreq, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\165\163\145\162\163\134\161\167\167\71\63\134\141\160\160\144\141\164\141\134\154\157\143\141\154\134\160\162\157\147\162\141\155\163\134\160\171\164\150\157\156\134\160\171\164\150\157\156\63\61\61\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\143\150\141\162\144\145\164\134\152\151\163\146\162\145\161\56\160\171"
#endif
},
    {"chardet.johabfreq", modulecode_chardet$johabfreq, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\165\163\145\162\163\134\161\167\167\71\63\134\141\160\160\144\141\164\141\134\154\157\143\141\154\134\160\162\157\147\162\141\155\163\134\160\171\164\150\157\156\134\160\171\164\150\157\156\63\61\61\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\143\150\141\162\144\145\164\134\152\157\150\141\142\146\162\145\161\56\160\171"
#endif
},
    {"chardet.johabprober", modulecode_chardet$johabprober, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\165\163\145\162\163\134\161\167\167\71\63\134\141\160\160\144\141\164\141\134\154\157\143\141\154\134\160\162\157\147\162\141\155\163\134\160\171\164\150\157\156\134\160\171\164\150\157\156\63\61\61\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\143\150\141\162\144\145\164\134\152\157\150\141\142\160\162\157\142\145\162\56\160\171"
#endif
},
    {"chardet.jpcntx", modulecode_chardet$jpcntx, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\165\163\145\162\163\134\161\167\167\71\63\134\141\160\160\144\141\164\141\134\154\157\143\141\154\134\160\162\157\147\162\141\155\163\134\160\171\164\150\157\156\134\160\171\164\150\157\156\63\61\61\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\143\150\141\162\144\145\164\134\152\160\143\156\164\170\56\160\171"
#endif
},
    {"chardet.langbulgarianmodel", modulecode_chardet$langbulgarianmodel, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\165\163\145\162\163\134\161\167\167\71\63\134\141\160\160\144\141\164\141\134\154\157\143\141\154\134\160\162\157\147\162\141\155\163\134\160\171\164\150\157\156\134\160\171\164\150\157\156\63\61\61\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\143\150\141\162\144\145\164\134\154\141\156\147\142\165\154\147\141\162\151\141\156\155\157\144\145\154\56\160\171"
#endif
},
    {"chardet.langgreekmodel", modulecode_chardet$langgreekmodel, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\165\163\145\162\163\134\161\167\167\71\63\134\141\160\160\144\141\164\141\134\154\157\143\141\154\134\160\162\157\147\162\141\155\163\134\160\171\164\150\157\156\134\160\171\164\150\157\156\63\61\61\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\143\150\141\162\144\145\164\134\154\141\156\147\147\162\145\145\153\155\157\144\145\154\56\160\171"
#endif
},
    {"chardet.langhebrewmodel", modulecode_chardet$langhebrewmodel, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\165\163\145\162\163\134\161\167\167\71\63\134\141\160\160\144\141\164\141\134\154\157\143\141\154\134\160\162\157\147\162\141\155\163\134\160\171\164\150\157\156\134\160\171\164\150\157\156\63\61\61\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\143\150\141\162\144\145\164\134\154\141\156\147\150\145\142\162\145\167\155\157\144\145\154\56\160\171"
#endif
},
    {"chardet.langrussianmodel", modulecode_chardet$langrussianmodel, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\165\163\145\162\163\134\161\167\167\71\63\134\141\160\160\144\141\164\141\134\154\157\143\141\154\134\160\162\157\147\162\141\155\163\134\160\171\164\150\157\156\134\160\171\164\150\157\156\63\61\61\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\143\150\141\162\144\145\164\134\154\141\156\147\162\165\163\163\151\141\156\155\157\144\145\154\56\160\171"
#endif
},
    {"chardet.langthaimodel", modulecode_chardet$langthaimodel, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\165\163\145\162\163\134\161\167\167\71\63\134\141\160\160\144\141\164\141\134\154\157\143\141\154\134\160\162\157\147\162\141\155\163\134\160\171\164\150\157\156\134\160\171\164\150\157\156\63\61\61\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\143\150\141\162\144\145\164\134\154\141\156\147\164\150\141\151\155\157\144\145\154\56\160\171"
#endif
},
    {"chardet.langturkishmodel", modulecode_chardet$langturkishmodel, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\165\163\145\162\163\134\161\167\167\71\63\134\141\160\160\144\141\164\141\134\154\157\143\141\154\134\160\162\157\147\162\141\155\163\134\160\171\164\150\157\156\134\160\171\164\150\157\156\63\61\61\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\143\150\141\162\144\145\164\134\154\141\156\147\164\165\162\153\151\163\150\155\157\144\145\154\56\160\171"
#endif
},
    {"chardet.latin1prober", modulecode_chardet$latin1prober, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\165\163\145\162\163\134\161\167\167\71\63\134\141\160\160\144\141\164\141\134\154\157\143\141\154\134\160\162\157\147\162\141\155\163\134\160\171\164\150\157\156\134\160\171\164\150\157\156\63\61\61\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\143\150\141\162\144\145\164\134\154\141\164\151\156\61\160\162\157\142\145\162\56\160\171"
#endif
},
    {"chardet.macromanprober", modulecode_chardet$macromanprober, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\165\163\145\162\163\134\161\167\167\71\63\134\141\160\160\144\141\164\141\134\154\157\143\141\154\134\160\162\157\147\162\141\155\163\134\160\171\164\150\157\156\134\160\171\164\150\157\156\63\61\61\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\143\150\141\162\144\145\164\134\155\141\143\162\157\155\141\156\160\162\157\142\145\162\56\160\171"
#endif
},
    {"chardet.mbcharsetprober", modulecode_chardet$mbcharsetprober, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\165\163\145\162\163\134\161\167\167\71\63\134\141\160\160\144\141\164\141\134\154\157\143\141\154\134\160\162\157\147\162\141\155\163\134\160\171\164\150\157\156\134\160\171\164\150\157\156\63\61\61\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\143\150\141\162\144\145\164\134\155\142\143\150\141\162\163\145\164\160\162\157\142\145\162\56\160\171"
#endif
},
    {"chardet.mbcsgroupprober", modulecode_chardet$mbcsgroupprober, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\165\163\145\162\163\134\161\167\167\71\63\134\141\160\160\144\141\164\141\134\154\157\143\141\154\134\160\162\157\147\162\141\155\163\134\160\171\164\150\157\156\134\160\171\164\150\157\156\63\61\61\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\143\150\141\162\144\145\164\134\155\142\143\163\147\162\157\165\160\160\162\157\142\145\162\56\160\171"
#endif
},
    {"chardet.mbcssm", modulecode_chardet$mbcssm, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\165\163\145\162\163\134\161\167\167\71\63\134\141\160\160\144\141\164\141\134\154\157\143\141\154\134\160\162\157\147\162\141\155\163\134\160\171\164\150\157\156\134\160\171\164\150\157\156\63\61\61\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\143\150\141\162\144\145\164\134\155\142\143\163\163\155\56\160\171"
#endif
},
    {"chardet.resultdict", modulecode_chardet$resultdict, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\165\163\145\162\163\134\161\167\167\71\63\134\141\160\160\144\141\164\141\134\154\157\143\141\154\134\160\162\157\147\162\141\155\163\134\160\171\164\150\157\156\134\160\171\164\150\157\156\63\61\61\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\143\150\141\162\144\145\164\134\162\145\163\165\154\164\144\151\143\164\56\160\171"
#endif
},
    {"chardet.sbcharsetprober", modulecode_chardet$sbcharsetprober, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\165\163\145\162\163\134\161\167\167\71\63\134\141\160\160\144\141\164\141\134\154\157\143\141\154\134\160\162\157\147\162\141\155\163\134\160\171\164\150\157\156\134\160\171\164\150\157\156\63\61\61\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\143\150\141\162\144\145\164\134\163\142\143\150\141\162\163\145\164\160\162\157\142\145\162\56\160\171"
#endif
},
    {"chardet.sbcsgroupprober", modulecode_chardet$sbcsgroupprober, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\165\163\145\162\163\134\161\167\167\71\63\134\141\160\160\144\141\164\141\134\154\157\143\141\154\134\160\162\157\147\162\141\155\163\134\160\171\164\150\157\156\134\160\171\164\150\157\156\63\61\61\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\143\150\141\162\144\145\164\134\163\142\143\163\147\162\157\165\160\160\162\157\142\145\162\56\160\171"
#endif
},
    {"chardet.sjisprober", modulecode_chardet$sjisprober, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\165\163\145\162\163\134\161\167\167\71\63\134\141\160\160\144\141\164\141\134\154\157\143\141\154\134\160\162\157\147\162\141\155\163\134\160\171\164\150\157\156\134\160\171\164\150\157\156\63\61\61\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\143\150\141\162\144\145\164\134\163\152\151\163\160\162\157\142\145\162\56\160\171"
#endif
},
    {"chardet.universaldetector", modulecode_chardet$universaldetector, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\165\163\145\162\163\134\161\167\167\71\63\134\141\160\160\144\141\164\141\134\154\157\143\141\154\134\160\162\157\147\162\141\155\163\134\160\171\164\150\157\156\134\160\171\164\150\157\156\63\61\61\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\143\150\141\162\144\145\164\134\165\156\151\166\145\162\163\141\154\144\145\164\145\143\164\157\162\56\160\171"
#endif
},
    {"chardet.utf1632prober", modulecode_chardet$utf1632prober, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\165\163\145\162\163\134\161\167\167\71\63\134\141\160\160\144\141\164\141\134\154\157\143\141\154\134\160\162\157\147\162\141\155\163\134\160\171\164\150\157\156\134\160\171\164\150\157\156\63\61\61\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\143\150\141\162\144\145\164\134\165\164\146\61\66\63\62\160\162\157\142\145\162\56\160\171"
#endif
},
    {"chardet.utf8prober", modulecode_chardet$utf8prober, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\165\163\145\162\163\134\161\167\167\71\63\134\141\160\160\144\141\164\141\134\154\157\143\141\154\134\160\162\157\147\162\141\155\163\134\160\171\164\150\157\156\134\160\171\164\150\157\156\63\61\61\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\143\150\141\162\144\145\164\134\165\164\146\70\160\162\157\142\145\162\56\160\171"
#endif
},
    {"chardet.version", modulecode_chardet$version, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\165\163\145\162\163\134\161\167\167\71\63\134\141\160\160\144\141\164\141\134\154\157\143\141\154\134\160\162\157\147\162\141\155\163\134\160\171\164\150\157\156\134\160\171\164\150\157\156\63\61\61\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\143\150\141\162\144\145\164\134\166\145\162\163\151\157\156\56\160\171"
#endif
},
    {"charset_normalizer", modulecode_charset_normalizer, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_PACKAGE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\165\163\145\162\163\134\161\167\167\71\63\134\141\160\160\144\141\164\141\134\154\157\143\141\154\134\160\162\157\147\162\141\155\163\134\160\171\164\150\157\156\134\160\171\164\150\157\156\63\61\61\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\143\150\141\162\163\145\164\137\156\157\162\155\141\154\151\172\145\162\134\137\137\151\156\151\164\137\137\56\160\171"
#endif
},
    {"charset_normalizer.api", modulecode_charset_normalizer$api, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\165\163\145\162\163\134\161\167\167\71\63\134\141\160\160\144\141\164\141\134\154\157\143\141\154\134\160\162\157\147\162\141\155\163\134\160\171\164\150\157\156\134\160\171\164\150\157\156\63\61\61\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\143\150\141\162\163\145\164\137\156\157\162\155\141\154\151\172\145\162\134\141\160\151\56\160\171"
#endif
},
    {"charset_normalizer.assets", modulecode_charset_normalizer$assets, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_PACKAGE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\165\163\145\162\163\134\161\167\167\71\63\134\141\160\160\144\141\164\141\134\154\157\143\141\154\134\160\162\157\147\162\141\155\163\134\160\171\164\150\157\156\134\160\171\164\150\157\156\63\61\61\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\143\150\141\162\163\145\164\137\156\157\162\155\141\154\151\172\145\162\134\141\163\163\145\164\163\134\137\137\151\156\151\164\137\137\56\160\171"
#endif
},
    {"charset_normalizer.cd", modulecode_charset_normalizer$cd, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\165\163\145\162\163\134\161\167\167\71\63\134\141\160\160\144\141\164\141\134\154\157\143\141\154\134\160\162\157\147\162\141\155\163\134\160\171\164\150\157\156\134\160\171\164\150\157\156\63\61\61\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\143\150\141\162\163\145\164\137\156\157\162\155\141\154\151\172\145\162\134\143\144\56\160\171"
#endif
},
    {"charset_normalizer.constant", modulecode_charset_normalizer$constant, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\165\163\145\162\163\134\161\167\167\71\63\134\141\160\160\144\141\164\141\134\154\157\143\141\154\134\160\162\157\147\162\141\155\163\134\160\171\164\150\157\156\134\160\171\164\150\157\156\63\61\61\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\143\150\141\162\163\145\164\137\156\157\162\155\141\154\151\172\145\162\134\143\157\156\163\164\141\156\164\56\160\171"
#endif
},
    {"charset_normalizer.legacy", modulecode_charset_normalizer$legacy, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\165\163\145\162\163\134\161\167\167\71\63\134\141\160\160\144\141\164\141\134\154\157\143\141\154\134\160\162\157\147\162\141\155\163\134\160\171\164\150\157\156\134\160\171\164\150\157\156\63\61\61\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\143\150\141\162\163\145\164\137\156\157\162\155\141\154\151\172\145\162\134\154\145\147\141\143\171\56\160\171"
#endif
},
    {"charset_normalizer.models", modulecode_charset_normalizer$models, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\165\163\145\162\163\134\161\167\167\71\63\134\141\160\160\144\141\164\141\134\154\157\143\141\154\134\160\162\157\147\162\141\155\163\134\160\171\164\150\157\156\134\160\171\164\150\157\156\63\61\61\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\143\150\141\162\163\145\164\137\156\157\162\155\141\154\151\172\145\162\134\155\157\144\145\154\163\56\160\171"
#endif
},
    {"charset_normalizer.utils", modulecode_charset_normalizer$utils, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\165\163\145\162\163\134\161\167\167\71\63\134\141\160\160\144\141\164\141\134\154\157\143\141\154\134\160\162\157\147\162\141\155\163\134\160\171\164\150\157\156\134\160\171\164\150\157\156\63\61\61\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\143\150\141\162\163\145\164\137\156\157\162\155\141\154\151\172\145\162\134\165\164\151\154\163\56\160\171"
#endif
},
    {"charset_normalizer.version", modulecode_charset_normalizer$version, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\165\163\145\162\163\134\161\167\167\71\63\134\141\160\160\144\141\164\141\134\154\157\143\141\154\134\160\162\157\147\162\141\155\163\134\160\171\164\150\157\156\134\160\171\164\150\157\156\63\61\61\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\143\150\141\162\163\145\164\137\156\157\162\155\141\154\151\172\145\162\134\166\145\162\163\151\157\156\56\160\171"
#endif
},
    {"concurrent", NULL, 35, 174, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG | NUITKA_PACKAGE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\161\167\167\71\63\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\61\134\114\151\142\134\143\157\156\143\165\162\162\145\156\164\134\137\137\151\156\151\164\137\137\56\160\171"
#endif
},
    {"concurrent.futures", NULL, 36, 1480, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG | NUITKA_PACKAGE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\161\167\167\71\63\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\61\134\114\151\142\134\143\157\156\143\165\162\162\145\156\164\134\146\165\164\165\162\145\163\134\137\137\151\156\151\164\137\137\56\160\171"
#endif
},
    {"concurrent.futures._base", NULL, 37, 37273, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\161\167\167\71\63\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\61\134\114\151\142\134\143\157\156\143\165\162\162\145\156\164\134\146\165\164\165\162\145\163\134\137\142\141\163\145\56\160\171"
#endif
},
    {"concurrent.futures.process", NULL, 38, 38043, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\161\167\167\71\63\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\61\134\114\151\142\134\143\157\156\143\165\162\162\145\156\164\134\146\165\164\165\162\145\163\134\160\162\157\143\145\163\163\56\160\171"
#endif
},
    {"concurrent.futures.thread", NULL, 39, 11093, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\161\167\167\71\63\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\61\134\114\151\142\134\143\157\156\143\165\162\162\145\156\164\134\146\165\164\165\162\145\163\134\164\150\162\145\141\144\56\160\171"
#endif
},
    {"contourpy", modulecode_contourpy, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_PACKAGE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\165\163\145\162\163\134\161\167\167\71\63\134\141\160\160\144\141\164\141\134\154\157\143\141\154\134\160\162\157\147\162\141\155\163\134\160\171\164\150\157\156\134\160\171\164\150\157\156\63\61\61\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\143\157\156\164\157\165\162\160\171\134\137\137\151\156\151\164\137\137\56\160\171"
#endif
},
    {"contourpy._version", modulecode_contourpy$_version, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\165\163\145\162\163\134\161\167\167\71\63\134\141\160\160\144\141\164\141\134\154\157\143\141\154\134\160\162\157\147\162\141\155\163\134\160\171\164\150\157\156\134\160\171\164\150\157\156\63\61\61\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\143\157\156\164\157\165\162\160\171\134\137\166\145\162\163\151\157\156\56\160\171"
#endif
},
    {"contourpy.chunk", modulecode_contourpy$chunk, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\165\163\145\162\163\134\161\167\167\71\63\134\141\160\160\144\141\164\141\134\154\157\143\141\154\134\160\162\157\147\162\141\155\163\134\160\171\164\150\157\156\134\160\171\164\150\157\156\63\61\61\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\143\157\156\164\157\165\162\160\171\134\143\150\165\156\153\56\160\171"
#endif
},
    {"contourpy.enum_util", modulecode_contourpy$enum_util, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\165\163\145\162\163\134\161\167\167\71\63\134\141\160\160\144\141\164\141\134\154\157\143\141\154\134\160\162\157\147\162\141\155\163\134\160\171\164\150\157\156\134\160\171\164\150\157\156\63\61\61\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\143\157\156\164\157\165\162\160\171\134\145\156\165\155\137\165\164\151\154\56\160\171"
#endif
},
    {"ctypes", NULL, 40, 26822, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG | NUITKA_PACKAGE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\161\167\167\71\63\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\61\134\114\151\142\134\143\164\171\160\145\163\134\137\137\151\156\151\164\137\137\56\160\171"
#endif
},
    {"ctypes._endian", NULL, 41, 4003, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\161\167\167\71\63\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\61\134\114\151\142\134\143\164\171\160\145\163\134\137\145\156\144\151\141\156\56\160\171"
#endif
},
    {"ctypes.util", NULL, 42, 18573, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\161\167\167\71\63\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\61\134\114\151\142\134\143\164\171\160\145\163\134\165\164\151\154\56\160\171"
#endif
},
    {"ctypes.wintypes", NULL, 43, 8454, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\161\167\167\71\63\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\61\134\114\151\142\134\143\164\171\160\145\163\134\167\151\156\164\171\160\145\163\56\160\171"
#endif
},
    {"cycler", modulecode_cycler, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\165\163\145\162\163\134\161\167\167\71\63\134\141\160\160\144\141\164\141\134\154\157\143\141\154\134\160\162\157\147\162\141\155\163\134\160\171\164\150\157\156\134\160\171\164\150\157\156\63\61\61\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\143\171\143\154\145\162\56\160\171"
#endif
},
    {"dateutil", modulecode_dateutil, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_PACKAGE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\165\163\145\162\163\134\161\167\167\71\63\134\141\160\160\144\141\164\141\134\154\157\143\141\154\134\160\162\157\147\162\141\155\163\134\160\171\164\150\157\156\134\160\171\164\150\157\156\63\61\61\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\144\141\164\145\165\164\151\154\134\137\137\151\156\151\164\137\137\56\160\171"
#endif
},
    {"dateutil._common", modulecode_dateutil$_common, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\165\163\145\162\163\134\161\167\167\71\63\134\141\160\160\144\141\164\141\134\154\157\143\141\154\134\160\162\157\147\162\141\155\163\134\160\171\164\150\157\156\134\160\171\164\150\157\156\63\61\61\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\144\141\164\145\165\164\151\154\134\137\143\157\155\155\157\156\56\160\171"
#endif
},
    {"dateutil._version", modulecode_dateutil$_version, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\165\163\145\162\163\134\161\167\167\71\63\134\141\160\160\144\141\164\141\134\154\157\143\141\154\134\160\162\157\147\162\141\155\163\134\160\171\164\150\157\156\134\160\171\164\150\157\156\63\61\61\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\144\141\164\145\165\164\151\154\134\137\166\145\162\163\151\157\156\56\160\171"
#endif
},
    {"dateutil.easter", modulecode_dateutil$easter, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\165\163\145\162\163\134\161\167\167\71\63\134\141\160\160\144\141\164\141\134\154\157\143\141\154\134\160\162\157\147\162\141\155\163\134\160\171\164\150\157\156\134\160\171\164\150\157\156\63\61\61\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\144\141\164\145\165\164\151\154\134\145\141\163\164\145\162\56\160\171"
#endif
},
    {"dateutil.parser", modulecode_dateutil$parser, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_PACKAGE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\165\163\145\162\163\134\161\167\167\71\63\134\141\160\160\144\141\164\141\134\154\157\143\141\154\134\160\162\157\147\162\141\155\163\134\160\171\164\150\157\156\134\160\171\164\150\157\156\63\61\61\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\144\141\164\145\165\164\151\154\134\160\141\162\163\145\162\134\137\137\151\156\151\164\137\137\56\160\171"
#endif
},
    {"dateutil.parser._parser", modulecode_dateutil$parser$_parser, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\165\163\145\162\163\134\161\167\167\71\63\134\141\160\160\144\141\164\141\134\154\157\143\141\154\134\160\162\157\147\162\141\155\163\134\160\171\164\150\157\156\134\160\171\164\150\157\156\63\61\61\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\144\141\164\145\165\164\151\154\134\160\141\162\163\145\162\134\137\160\141\162\163\145\162\56\160\171"
#endif
},
    {"dateutil.parser.isoparser", modulecode_dateutil$parser$isoparser, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\165\163\145\162\163\134\161\167\167\71\63\134\141\160\160\144\141\164\141\134\154\157\143\141\154\134\160\162\157\147\162\141\155\163\134\160\171\164\150\157\156\134\160\171\164\150\157\156\63\61\61\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\144\141\164\145\165\164\151\154\134\160\141\162\163\145\162\134\151\163\157\160\141\162\163\145\162\56\160\171"
#endif
},
    {"dateutil.relativedelta", modulecode_dateutil$relativedelta, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\165\163\145\162\163\134\161\167\167\71\63\134\141\160\160\144\141\164\141\134\154\157\143\141\154\134\160\162\157\147\162\141\155\163\134\160\171\164\150\157\156\134\160\171\164\150\157\156\63\61\61\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\144\141\164\145\165\164\151\154\134\162\145\154\141\164\151\166\145\144\145\154\164\141\56\160\171"
#endif
},
    {"dateutil.rrule", modulecode_dateutil$rrule, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\165\163\145\162\163\134\161\167\167\71\63\134\141\160\160\144\141\164\141\134\154\157\143\141\154\134\160\162\157\147\162\141\155\163\134\160\171\164\150\157\156\134\160\171\164\150\157\156\63\61\61\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\144\141\164\145\165\164\151\154\134\162\162\165\154\145\56\160\171"
#endif
},
    {"dateutil.tz", modulecode_dateutil$tz, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_PACKAGE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\165\163\145\162\163\134\161\167\167\71\63\134\141\160\160\144\141\164\141\134\154\157\143\141\154\134\160\162\157\147\162\141\155\163\134\160\171\164\150\157\156\134\160\171\164\150\157\156\63\61\61\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\144\141\164\145\165\164\151\154\134\164\172\134\137\137\151\156\151\164\137\137\56\160\171"
#endif
},
    {"dateutil.tz._common", modulecode_dateutil$tz$_common, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\165\163\145\162\163\134\161\167\167\71\63\134\141\160\160\144\141\164\141\134\154\157\143\141\154\134\160\162\157\147\162\141\155\163\134\160\171\164\150\157\156\134\160\171\164\150\157\156\63\61\61\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\144\141\164\145\165\164\151\154\134\164\172\134\137\143\157\155\155\157\156\56\160\171"
#endif
},
    {"dateutil.tz._factories", modulecode_dateutil$tz$_factories, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\165\163\145\162\163\134\161\167\167\71\63\134\141\160\160\144\141\164\141\134\154\157\143\141\154\134\160\162\157\147\162\141\155\163\134\160\171\164\150\157\156\134\160\171\164\150\157\156\63\61\61\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\144\141\164\145\165\164\151\154\134\164\172\134\137\146\141\143\164\157\162\151\145\163\56\160\171"
#endif
},
    {"dateutil.tz.tz", modulecode_dateutil$tz$tz, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\165\163\145\162\163\134\161\167\167\71\63\134\141\160\160\144\141\164\141\134\154\157\143\141\154\134\160\162\157\147\162\141\155\163\134\160\171\164\150\157\156\134\160\171\164\150\157\156\63\61\61\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\144\141\164\145\165\164\151\154\134\164\172\134\164\172\56\160\171"
#endif
},
    {"dateutil.tz.win", modulecode_dateutil$tz$win, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\165\163\145\162\163\134\161\167\167\71\63\134\141\160\160\144\141\164\141\134\154\157\143\141\154\134\160\162\157\147\162\141\155\163\134\160\171\164\150\157\156\134\160\171\164\150\157\156\63\61\61\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\144\141\164\145\165\164\151\154\134\164\172\134\167\151\156\56\160\171"
#endif
},
    {"dateutil.zoneinfo", modulecode_dateutil$zoneinfo, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_PACKAGE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\165\163\145\162\163\134\161\167\167\71\63\134\141\160\160\144\141\164\141\134\154\157\143\141\154\134\160\162\157\147\162\141\155\163\134\160\171\164\150\157\156\134\160\171\164\150\157\156\63\61\61\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\144\141\164\145\165\164\151\154\134\172\157\156\145\151\156\146\157\134\137\137\151\156\151\164\137\137\56\160\171"
#endif
},
    {"decimal", NULL, 44, 564, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\161\167\167\71\63\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\61\134\114\151\142\134\144\145\143\151\155\141\154\56\160\171"
#endif
},
    {"defusedxml", modulecode_defusedxml, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_PACKAGE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\165\163\145\162\163\134\161\167\167\71\63\134\141\160\160\144\141\164\141\134\154\157\143\141\154\134\160\162\157\147\162\141\155\163\134\160\171\164\150\157\156\134\160\171\164\150\157\156\63\61\61\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\144\145\146\165\163\145\144\170\155\154\134\137\137\151\156\151\164\137\137\56\160\171"
#endif
},
    {"defusedxml.ElementTree", modulecode_defusedxml$ElementTree, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\165\163\145\162\163\134\161\167\167\71\63\134\141\160\160\144\141\164\141\134\154\157\143\141\154\134\160\162\157\147\162\141\155\163\134\160\171\164\150\157\156\134\160\171\164\150\157\156\63\61\61\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\144\145\146\165\163\145\144\170\155\154\134\105\154\145\155\145\156\164\124\162\145\145\56\160\171"
#endif
},
    {"defusedxml.cElementTree", modulecode_defusedxml$cElementTree, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\165\163\145\162\163\134\161\167\167\71\63\134\141\160\160\144\141\164\141\134\154\157\143\141\154\134\160\162\157\147\162\141\155\163\134\160\171\164\150\157\156\134\160\171\164\150\157\156\63\61\61\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\144\145\146\165\163\145\144\170\155\154\134\143\105\154\145\155\145\156\164\124\162\145\145\56\160\171"
#endif
},
    {"defusedxml.common", modulecode_defusedxml$common, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\165\163\145\162\163\134\161\167\167\71\63\134\141\160\160\144\141\164\141\134\154\157\143\141\154\134\160\162\157\147\162\141\155\163\134\160\171\164\150\157\156\134\160\171\164\150\157\156\63\61\61\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\144\145\146\165\163\145\144\170\155\154\134\143\157\155\155\157\156\56\160\171"
#endif
},
    {"defusedxml.expatbuilder", modulecode_defusedxml$expatbuilder, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\165\163\145\162\163\134\161\167\167\71\63\134\141\160\160\144\141\164\141\134\154\157\143\141\154\134\160\162\157\147\162\141\155\163\134\160\171\164\150\157\156\134\160\171\164\150\157\156\63\61\61\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\144\145\146\165\163\145\144\170\155\154\134\145\170\160\141\164\142\165\151\154\144\145\162\56\160\171"
#endif
},
    {"defusedxml.expatreader", modulecode_defusedxml$expatreader, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\165\163\145\162\163\134\161\167\167\71\63\134\141\160\160\144\141\164\141\134\154\157\143\141\154\134\160\162\157\147\162\141\155\163\134\160\171\164\150\157\156\134\160\171\164\150\157\156\63\61\61\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\144\145\146\165\163\145\144\170\155\154\134\145\170\160\141\164\162\145\141\144\145\162\56\160\171"
#endif
},
    {"defusedxml.minidom", modulecode_defusedxml$minidom, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\165\163\145\162\163\134\161\167\167\71\63\134\141\160\160\144\141\164\141\134\154\157\143\141\154\134\160\162\157\147\162\141\155\163\134\160\171\164\150\157\156\134\160\171\164\150\157\156\63\61\61\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\144\145\146\165\163\145\144\170\155\154\134\155\151\156\151\144\157\155\56\160\171"
#endif
},
    {"defusedxml.pulldom", modulecode_defusedxml$pulldom, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\165\163\145\162\163\134\161\167\167\71\63\134\141\160\160\144\141\164\141\134\154\157\143\141\154\134\160\162\157\147\162\141\155\163\134\160\171\164\150\157\156\134\160\171\164\150\157\156\63\61\61\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\144\145\146\165\163\145\144\170\155\154\134\160\165\154\154\144\157\155\56\160\171"
#endif
},
    {"defusedxml.sax", modulecode_defusedxml$sax, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\165\163\145\162\163\134\161\167\167\71\63\134\141\160\160\144\141\164\141\134\154\157\143\141\154\134\160\162\157\147\162\141\155\163\134\160\171\164\150\157\156\134\160\171\164\150\157\156\63\61\61\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\144\145\146\165\163\145\144\170\155\154\134\163\141\170\56\160\171"
#endif
},
    {"defusedxml.xmlrpc", modulecode_defusedxml$xmlrpc, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\165\163\145\162\163\134\161\167\167\71\63\134\141\160\160\144\141\164\141\134\154\157\143\141\154\134\160\162\157\147\162\141\155\163\134\160\171\164\150\157\156\134\160\171\164\150\157\156\63\61\61\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\144\145\146\165\163\145\144\170\155\154\134\170\155\154\162\160\143\56\160\171"
#endif
},
    {"email", NULL, 45, 2131, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG | NUITKA_PACKAGE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\161\167\167\71\63\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\61\134\114\151\142\134\145\155\141\151\154\134\137\137\151\156\151\164\137\137\56\160\171"
#endif
},
    {"email._encoded_words", NULL, 46, 9138, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\161\167\167\71\63\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\61\134\114\151\142\134\145\155\141\151\154\134\137\145\156\143\157\144\145\144\137\167\157\162\144\163\56\160\171"
#endif
},
    {"email._header_value_parser", NULL, 47, 149488, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\161\167\167\71\63\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\61\134\114\151\142\134\145\155\141\151\154\134\137\150\145\141\144\145\162\137\166\141\154\165\145\137\160\141\162\163\145\162\56\160\171"
#endif
},
    {"email._parseaddr", NULL, 48, 24321, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\161\167\167\71\63\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\61\134\114\151\142\134\145\155\141\151\154\134\137\160\141\162\163\145\141\144\144\162\56\160\171"
#endif
},
    {"email._policybase", NULL, 49, 19260, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\161\167\167\71\63\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\61\134\114\151\142\134\145\155\141\151\154\134\137\160\157\154\151\143\171\142\141\163\145\56\160\171"
#endif
},
    {"email.base64mime", NULL, 50, 4372, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\161\167\167\71\63\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\61\134\114\151\142\134\145\155\141\151\154\134\142\141\163\145\66\64\155\151\155\145\56\160\171"
#endif
},
    {"email.charset", NULL, 51, 16042, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\161\167\167\71\63\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\61\134\114\151\142\134\145\155\141\151\154\134\143\150\141\162\163\145\164\56\160\171"
#endif
},
    {"email.contentmanager", NULL, 52, 13851, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\161\167\167\71\63\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\61\134\114\151\142\134\145\155\141\151\154\134\143\157\156\164\145\156\164\155\141\156\141\147\145\162\56\160\171"
#endif
},
    {"email.encoders", NULL, 53, 2407, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\161\167\167\71\63\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\61\134\114\151\142\134\145\155\141\151\154\134\145\156\143\157\144\145\162\163\56\160\171"
#endif
},
    {"email.errors", NULL, 54, 8466, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\161\167\167\71\63\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\61\134\114\151\142\134\145\155\141\151\154\134\145\162\162\157\162\163\56\160\171"
#endif
},
    {"email.feedparser", NULL, 55, 21484, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\161\167\167\71\63\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\61\134\114\151\142\134\145\155\141\151\154\134\146\145\145\144\160\141\162\163\145\162\56\160\171"
#endif
},
    {"email.generator", NULL, 56, 21620, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\161\167\167\71\63\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\61\134\114\151\142\134\145\155\141\151\154\134\147\145\156\145\162\141\164\157\162\56\160\171"
#endif
},
    {"email.header", NULL, 57, 26997, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\161\167\167\71\63\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\61\134\114\151\142\134\145\155\141\151\154\134\150\145\141\144\145\162\56\160\171"
#endif
},
    {"email.headerregistry", NULL, 58, 33774, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\161\167\167\71\63\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\61\134\114\151\142\134\145\155\141\151\154\134\150\145\141\144\145\162\162\145\147\151\163\164\162\171\56\160\171"
#endif
},
    {"email.iterators", NULL, 59, 3184, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\161\167\167\71\63\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\61\134\114\151\142\134\145\155\141\151\154\134\151\164\145\162\141\164\157\162\163\56\160\171"
#endif
},
    {"email.message", NULL, 60, 58916, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\161\167\167\71\63\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\61\134\114\151\142\134\145\155\141\151\154\134\155\145\163\163\141\147\145\56\160\171"
#endif
},
    {"email.parser", NULL, 61, 7405, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\161\167\167\71\63\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\61\134\114\151\142\134\145\155\141\151\154\134\160\141\162\163\145\162\56\160\171"
#endif
},
    {"email.policy", NULL, 62, 12454, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\161\167\167\71\63\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\61\134\114\151\142\134\145\155\141\151\154\134\160\157\154\151\143\171\56\160\171"
#endif
},
    {"email.quoprimime", NULL, 63, 11258, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\161\167\167\71\63\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\61\134\114\151\142\134\145\155\141\151\154\134\161\165\157\160\162\151\155\151\155\145\56\160\171"
#endif
},
    {"email.utils", NULL, 64, 15459, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\161\167\167\71\63\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\61\134\114\151\142\134\145\155\141\151\154\134\165\164\151\154\163\56\160\171"
#endif
},
    {"et_xmlfile", modulecode_et_xmlfile, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_PACKAGE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\165\163\145\162\163\134\161\167\167\71\63\134\141\160\160\144\141\164\141\134\154\157\143\141\154\134\160\162\157\147\162\141\155\163\134\160\171\164\150\157\156\134\160\171\164\150\157\156\63\61\61\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\145\164\137\170\155\154\146\151\154\145\134\137\137\151\156\151\164\137\137\56\160\171"
#endif
},
    {"et_xmlfile.xmlfile", modulecode_et_xmlfile$xmlfile, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\165\163\145\162\163\134\161\167\167\71\63\134\141\160\160\144\141\164\141\134\154\157\143\141\154\134\160\162\157\147\162\141\155\163\134\160\171\164\150\157\156\134\160\171\164\150\157\156\63\61\61\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\145\164\137\170\155\154\146\151\154\145\134\170\155\154\146\151\154\145\56\160\171"
#endif
},
    {"fractions", NULL, 65, 29254, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\161\167\167\71\63\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\61\134\114\151\142\134\146\162\141\143\164\151\157\156\163\56\160\171"
#endif
},
    {"hashlib", NULL, 66, 12359, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\161\167\167\71\63\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\61\134\114\151\142\134\150\141\163\150\154\151\142\56\160\171"
#endif
},
    {"hmac", NULL, 67, 11493, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\161\167\167\71\63\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\61\134\114\151\142\134\150\155\141\143\56\160\171"
#endif
},
    {"html5lib", modulecode_html5lib, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_PACKAGE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\165\163\145\162\163\134\161\167\167\71\63\134\141\160\160\144\141\164\141\134\154\157\143\141\154\134\160\162\157\147\162\141\155\163\134\160\171\164\150\157\156\134\160\171\164\150\157\156\63\61\61\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\150\164\155\154\65\154\151\142\134\137\137\151\156\151\164\137\137\56\160\171"
#endif
},
    {"html5lib._ihatexml", modulecode_html5lib$_ihatexml, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\165\163\145\162\163\134\161\167\167\71\63\134\141\160\160\144\141\164\141\134\154\157\143\141\154\134\160\162\157\147\162\141\155\163\134\160\171\164\150\157\156\134\160\171\164\150\157\156\63\61\61\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\150\164\155\154\65\154\151\142\134\137\151\150\141\164\145\170\155\154\56\160\171"
#endif
},
    {"html5lib._inputstream", modulecode_html5lib$_inputstream, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\165\163\145\162\163\134\161\167\167\71\63\134\141\160\160\144\141\164\141\134\154\157\143\141\154\134\160\162\157\147\162\141\155\163\134\160\171\164\150\157\156\134\160\171\164\150\157\156\63\61\61\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\150\164\155\154\65\154\151\142\134\137\151\156\160\165\164\163\164\162\145\141\155\56\160\171"
#endif
},
    {"html5lib._tokenizer", modulecode_html5lib$_tokenizer, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\165\163\145\162\163\134\161\167\167\71\63\134\141\160\160\144\141\164\141\134\154\157\143\141\154\134\160\162\157\147\162\141\155\163\134\160\171\164\150\157\156\134\160\171\164\150\157\156\63\61\61\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\150\164\155\154\65\154\151\142\134\137\164\157\153\145\156\151\172\145\162\56\160\171"
#endif
},
    {"html5lib._trie", modulecode_html5lib$_trie, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_PACKAGE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\165\163\145\162\163\134\161\167\167\71\63\134\141\160\160\144\141\164\141\134\154\157\143\141\154\134\160\162\157\147\162\141\155\163\134\160\171\164\150\157\156\134\160\171\164\150\157\156\63\61\61\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\150\164\155\154\65\154\151\142\134\137\164\162\151\145\134\137\137\151\156\151\164\137\137\56\160\171"
#endif
},
    {"html5lib._trie._base", modulecode_html5lib$_trie$_base, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\165\163\145\162\163\134\161\167\167\71\63\134\141\160\160\144\141\164\141\134\154\157\143\141\154\134\160\162\157\147\162\141\155\163\134\160\171\164\150\157\156\134\160\171\164\150\157\156\63\61\61\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\150\164\155\154\65\154\151\142\134\137\164\162\151\145\134\137\142\141\163\145\56\160\171"
#endif
},
    {"html5lib._trie.py", modulecode_html5lib$_trie$py, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\165\163\145\162\163\134\161\167\167\71\63\134\141\160\160\144\141\164\141\134\154\157\143\141\154\134\160\162\157\147\162\141\155\163\134\160\171\164\150\157\156\134\160\171\164\150\157\156\63\61\61\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\150\164\155\154\65\154\151\142\134\137\164\162\151\145\134\160\171\56\160\171"
#endif
},
    {"html5lib._utils", modulecode_html5lib$_utils, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\165\163\145\162\163\134\161\167\167\71\63\134\141\160\160\144\141\164\141\134\154\157\143\141\154\134\160\162\157\147\162\141\155\163\134\160\171\164\150\157\156\134\160\171\164\150\157\156\63\61\61\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\150\164\155\154\65\154\151\142\134\137\165\164\151\154\163\56\160\171"
#endif
},
    {"html5lib.constants", modulecode_html5lib$constants, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\165\163\145\162\163\134\161\167\167\71\63\134\141\160\160\144\141\164\141\134\154\157\143\141\154\134\160\162\157\147\162\141\155\163\134\160\171\164\150\157\156\134\160\171\164\150\157\156\63\61\61\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\150\164\155\154\65\154\151\142\134\143\157\156\163\164\141\156\164\163\56\160\171"
#endif
},
    {"html5lib.filters", modulecode_html5lib$filters, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_PACKAGE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\165\163\145\162\163\134\161\167\167\71\63\134\141\160\160\144\141\164\141\134\154\157\143\141\154\134\160\162\157\147\162\141\155\163\134\160\171\164\150\157\156\134\160\171\164\150\157\156\63\61\61\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\150\164\155\154\65\154\151\142\134\146\151\154\164\145\162\163\134\137\137\151\156\151\164\137\137\56\160\171"
#endif
},
    {"html5lib.filters.alphabeticalattributes", modulecode_html5lib$filters$alphabeticalattributes, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\165\163\145\162\163\134\161\167\167\71\63\134\141\160\160\144\141\164\141\134\154\157\143\141\154\134\160\162\157\147\162\141\155\163\134\160\171\164\150\157\156\134\160\171\164\150\157\156\63\61\61\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\150\164\155\154\65\154\151\142\134\146\151\154\164\145\162\163\134\141\154\160\150\141\142\145\164\151\143\141\154\141\164\164\162\151\142\165\164\145\163\56\160\171"
#endif
},
    {"html5lib.filters.base", modulecode_html5lib$filters$base, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\165\163\145\162\163\134\161\167\167\71\63\134\141\160\160\144\141\164\141\134\154\157\143\141\154\134\160\162\157\147\162\141\155\163\134\160\171\164\150\157\156\134\160\171\164\150\157\156\63\61\61\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\150\164\155\154\65\154\151\142\134\146\151\154\164\145\162\163\134\142\141\163\145\56\160\171"
#endif
},
    {"html5lib.filters.inject_meta_charset", modulecode_html5lib$filters$inject_meta_charset, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\165\163\145\162\163\134\161\167\167\71\63\134\141\160\160\144\141\164\141\134\154\157\143\141\154\134\160\162\157\147\162\141\155\163\134\160\171\164\150\157\156\134\160\171\164\150\157\156\63\61\61\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\150\164\155\154\65\154\151\142\134\146\151\154\164\145\162\163\134\151\156\152\145\143\164\137\155\145\164\141\137\143\150\141\162\163\145\164\56\160\171"
#endif
},
    {"html5lib.filters.optionaltags", modulecode_html5lib$filters$optionaltags, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\165\163\145\162\163\134\161\167\167\71\63\134\141\160\160\144\141\164\141\134\154\157\143\141\154\134\160\162\157\147\162\141\155\163\134\160\171\164\150\157\156\134\160\171\164\150\157\156\63\61\61\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\150\164\155\154\65\154\151\142\134\146\151\154\164\145\162\163\134\157\160\164\151\157\156\141\154\164\141\147\163\56\160\171"
#endif
},
    {"html5lib.filters.sanitizer", modulecode_html5lib$filters$sanitizer, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\165\163\145\162\163\134\161\167\167\71\63\134\141\160\160\144\141\164\141\134\154\157\143\141\154\134\160\162\157\147\162\141\155\163\134\160\171\164\150\157\156\134\160\171\164\150\157\156\63\61\61\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\150\164\155\154\65\154\151\142\134\146\151\154\164\145\162\163\134\163\141\156\151\164\151\172\145\162\56\160\171"
#endif
},
    {"html5lib.filters.whitespace", modulecode_html5lib$filters$whitespace, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\165\163\145\162\163\134\161\167\167\71\63\134\141\160\160\144\141\164\141\134\154\157\143\141\154\134\160\162\157\147\162\141\155\163\134\160\171\164\150\157\156\134\160\171\164\150\157\156\63\61\61\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\150\164\155\154\65\154\151\142\134\146\151\154\164\145\162\163\134\167\150\151\164\145\163\160\141\143\145\56\160\171"
#endif
},
    {"html5lib.html5parser", modulecode_html5lib$html5parser, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\165\163\145\162\163\134\161\167\167\71\63\134\141\160\160\144\141\164\141\134\154\157\143\141\154\134\160\162\157\147\162\141\155\163\134\160\171\164\150\157\156\134\160\171\164\150\157\156\63\61\61\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\150\164\155\154\65\154\151\142\134\150\164\155\154\65\160\141\162\163\145\162\56\160\171"
#endif
},
    {"html5lib.serializer", modulecode_html5lib$serializer, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\165\163\145\162\163\134\161\167\167\71\63\134\141\160\160\144\141\164\141\134\154\157\143\141\154\134\160\162\157\147\162\141\155\163\134\160\171\164\150\157\156\134\160\171\164\150\157\156\63\61\61\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\150\164\155\154\65\154\151\142\134\163\145\162\151\141\154\151\172\145\162\56\160\171"
#endif
},
    {"html5lib.treebuilders", modulecode_html5lib$treebuilders, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_PACKAGE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\165\163\145\162\163\134\161\167\167\71\63\134\141\160\160\144\141\164\141\134\154\157\143\141\154\134\160\162\157\147\162\141\155\163\134\160\171\164\150\157\156\134\160\171\164\150\157\156\63\61\61\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\150\164\155\154\65\154\151\142\134\164\162\145\145\142\165\151\154\144\145\162\163\134\137\137\151\156\151\164\137\137\56\160\171"
#endif
},
    {"html5lib.treebuilders.base", modulecode_html5lib$treebuilders$base, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\165\163\145\162\163\134\161\167\167\71\63\134\141\160\160\144\141\164\141\134\154\157\143\141\154\134\160\162\157\147\162\141\155\163\134\160\171\164\150\157\156\134\160\171\164\150\157\156\63\61\61\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\150\164\155\154\65\154\151\142\134\164\162\145\145\142\165\151\154\144\145\162\163\134\142\141\163\145\56\160\171"
#endif
},
    {"html5lib.treebuilders.dom", modulecode_html5lib$treebuilders$dom, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\165\163\145\162\163\134\161\167\167\71\63\134\141\160\160\144\141\164\141\134\154\157\143\141\154\134\160\162\157\147\162\141\155\163\134\160\171\164\150\157\156\134\160\171\164\150\157\156\63\61\61\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\150\164\155\154\65\154\151\142\134\164\162\145\145\142\165\151\154\144\145\162\163\134\144\157\155\56\160\171"
#endif
},
    {"html5lib.treebuilders.etree", modulecode_html5lib$treebuilders$etree, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\165\163\145\162\163\134\161\167\167\71\63\134\141\160\160\144\141\164\141\134\154\157\143\141\154\134\160\162\157\147\162\141\155\163\134\160\171\164\150\157\156\134\160\171\164\150\157\156\63\61\61\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\150\164\155\154\65\154\151\142\134\164\162\145\145\142\165\151\154\144\145\162\163\134\145\164\162\145\145\56\160\171"
#endif
},
    {"html5lib.treebuilders.etree_lxml", modulecode_html5lib$treebuilders$etree_lxml, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\165\163\145\162\163\134\161\167\167\71\63\134\141\160\160\144\141\164\141\134\154\157\143\141\154\134\160\162\157\147\162\141\155\163\134\160\171\164\150\157\156\134\160\171\164\150\157\156\63\61\61\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\150\164\155\154\65\154\151\142\134\164\162\145\145\142\165\151\154\144\145\162\163\134\145\164\162\145\145\137\154\170\155\154\56\160\171"
#endif
},
    {"html5lib.treewalkers", modulecode_html5lib$treewalkers, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_PACKAGE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\165\163\145\162\163\134\161\167\167\71\63\134\141\160\160\144\141\164\141\134\154\157\143\141\154\134\160\162\157\147\162\141\155\163\134\160\171\164\150\157\156\134\160\171\164\150\157\156\63\61\61\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\150\164\155\154\65\154\151\142\134\164\162\145\145\167\141\154\153\145\162\163\134\137\137\151\156\151\164\137\137\56\160\171"
#endif
},
    {"html5lib.treewalkers.base", modulecode_html5lib$treewalkers$base, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\165\163\145\162\163\134\161\167\167\71\63\134\141\160\160\144\141\164\141\134\154\157\143\141\154\134\160\162\157\147\162\141\155\163\134\160\171\164\150\157\156\134\160\171\164\150\157\156\63\61\61\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\150\164\155\154\65\154\151\142\134\164\162\145\145\167\141\154\153\145\162\163\134\142\141\163\145\56\160\171"
#endif
},
    {"html5lib.treewalkers.dom", modulecode_html5lib$treewalkers$dom, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\165\163\145\162\163\134\161\167\167\71\63\134\141\160\160\144\141\164\141\134\154\157\143\141\154\134\160\162\157\147\162\141\155\163\134\160\171\164\150\157\156\134\160\171\164\150\157\156\63\61\61\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\150\164\155\154\65\154\151\142\134\164\162\145\145\167\141\154\153\145\162\163\134\144\157\155\56\160\171"
#endif
},
    {"html5lib.treewalkers.etree", modulecode_html5lib$treewalkers$etree, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\165\163\145\162\163\134\161\167\167\71\63\134\141\160\160\144\141\164\141\134\154\157\143\141\154\134\160\162\157\147\162\141\155\163\134\160\171\164\150\157\156\134\160\171\164\150\157\156\63\61\61\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\150\164\155\154\65\154\151\142\134\164\162\145\145\167\141\154\153\145\162\163\134\145\164\162\145\145\56\160\171"
#endif
},
    {"html5lib.treewalkers.etree_lxml", modulecode_html5lib$treewalkers$etree_lxml, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\165\163\145\162\163\134\161\167\167\71\63\134\141\160\160\144\141\164\141\134\154\157\143\141\154\134\160\162\157\147\162\141\155\163\134\160\171\164\150\157\156\134\160\171\164\150\157\156\63\61\61\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\150\164\155\154\65\154\151\142\134\164\162\145\145\167\141\154\153\145\162\163\134\145\164\162\145\145\137\154\170\155\154\56\160\171"
#endif
},
    {"html5lib.treewalkers.genshi", modulecode_html5lib$treewalkers$genshi, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\165\163\145\162\163\134\161\167\167\71\63\134\141\160\160\144\141\164\141\134\154\157\143\141\154\134\160\162\157\147\162\141\155\163\134\160\171\164\150\157\156\134\160\171\164\150\157\156\63\61\61\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\150\164\155\154\65\154\151\142\134\164\162\145\145\167\141\154\153\145\162\163\134\147\145\156\163\150\151\56\160\171"
#endif
},
    {"http", NULL, 68, 8754, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG | NUITKA_PACKAGE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\161\167\167\71\63\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\61\134\114\151\142\134\150\164\164\160\134\137\137\151\156\151\164\137\137\56\160\171"
#endif
},
    {"http.client", NULL, 69, 60074, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\161\167\167\71\63\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\61\134\114\151\142\134\150\164\164\160\134\143\154\151\145\156\164\56\160\171"
#endif
},
    {"http.cookiejar", NULL, 70, 88164, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\161\167\167\71\63\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\61\134\114\151\142\134\150\164\164\160\134\143\157\157\153\151\145\152\141\162\56\160\171"
#endif
},
    {"http.server", NULL, 71, 59330, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\161\167\167\71\63\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\61\134\114\151\142\134\150\164\164\160\134\163\145\162\166\145\162\56\160\171"
#endif
},
    {"jinja2", modulecode_jinja2, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_PACKAGE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\165\163\145\162\163\134\161\167\167\71\63\134\141\160\160\144\141\164\141\134\154\157\143\141\154\134\160\162\157\147\162\141\155\163\134\160\171\164\150\157\156\134\160\171\164\150\157\156\63\61\61\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\152\151\156\152\141\62\134\137\137\151\156\151\164\137\137\56\160\171"
#endif
},
    {"jinja2._identifier", modulecode_jinja2$_identifier, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\165\163\145\162\163\134\161\167\167\71\63\134\141\160\160\144\141\164\141\134\154\157\143\141\154\134\160\162\157\147\162\141\155\163\134\160\171\164\150\157\156\134\160\171\164\150\157\156\63\61\61\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\152\151\156\152\141\62\134\137\151\144\145\156\164\151\146\151\145\162\56\160\171"
#endif
},
    {"jinja2.async_utils", modulecode_jinja2$async_utils, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\165\163\145\162\163\134\161\167\167\71\63\134\141\160\160\144\141\164\141\134\154\157\143\141\154\134\160\162\157\147\162\141\155\163\134\160\171\164\150\157\156\134\160\171\164\150\157\156\63\61\61\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\152\151\156\152\141\62\134\141\163\171\156\143\137\165\164\151\154\163\56\160\171"
#endif
},
    {"jinja2.bccache", modulecode_jinja2$bccache, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\165\163\145\162\163\134\161\167\167\71\63\134\141\160\160\144\141\164\141\134\154\157\143\141\154\134\160\162\157\147\162\141\155\163\134\160\171\164\150\157\156\134\160\171\164\150\157\156\63\61\61\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\152\151\156\152\141\62\134\142\143\143\141\143\150\145\56\160\171"
#endif
},
    {"jinja2.compiler", modulecode_jinja2$compiler, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\165\163\145\162\163\134\161\167\167\71\63\134\141\160\160\144\141\164\141\134\154\157\143\141\154\134\160\162\157\147\162\141\155\163\134\160\171\164\150\157\156\134\160\171\164\150\157\156\63\61\61\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\152\151\156\152\141\62\134\143\157\155\160\151\154\145\162\56\160\171"
#endif
},
    {"jinja2.constants", modulecode_jinja2$constants, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\165\163\145\162\163\134\161\167\167\71\63\134\141\160\160\144\141\164\141\134\154\157\143\141\154\134\160\162\157\147\162\141\155\163\134\160\171\164\150\157\156\134\160\171\164\150\157\156\63\61\61\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\152\151\156\152\141\62\134\143\157\156\163\164\141\156\164\163\56\160\171"
#endif
},
    {"jinja2.debug", modulecode_jinja2$debug, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\165\163\145\162\163\134\161\167\167\71\63\134\141\160\160\144\141\164\141\134\154\157\143\141\154\134\160\162\157\147\162\141\155\163\134\160\171\164\150\157\156\134\160\171\164\150\157\156\63\61\61\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\152\151\156\152\141\62\134\144\145\142\165\147\56\160\171"
#endif
},
    {"jinja2.defaults", modulecode_jinja2$defaults, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\165\163\145\162\163\134\161\167\167\71\63\134\141\160\160\144\141\164\141\134\154\157\143\141\154\134\160\162\157\147\162\141\155\163\134\160\171\164\150\157\156\134\160\171\164\150\157\156\63\61\61\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\152\151\156\152\141\62\134\144\145\146\141\165\154\164\163\56\160\171"
#endif
},
    {"jinja2.environment", modulecode_jinja2$environment, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\165\163\145\162\163\134\161\167\167\71\63\134\141\160\160\144\141\164\141\134\154\157\143\141\154\134\160\162\157\147\162\141\155\163\134\160\171\164\150\157\156\134\160\171\164\150\157\156\63\61\61\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\152\151\156\152\141\62\134\145\156\166\151\162\157\156\155\145\156\164\56\160\171"
#endif
},
    {"jinja2.exceptions", modulecode_jinja2$exceptions, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\165\163\145\162\163\134\161\167\167\71\63\134\141\160\160\144\141\164\141\134\154\157\143\141\154\134\160\162\157\147\162\141\155\163\134\160\171\164\150\157\156\134\160\171\164\150\157\156\63\61\61\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\152\151\156\152\141\62\134\145\170\143\145\160\164\151\157\156\163\56\160\171"
#endif
},
    {"jinja2.filters", modulecode_jinja2$filters, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\165\163\145\162\163\134\161\167\167\71\63\134\141\160\160\144\141\164\141\134\154\157\143\141\154\134\160\162\157\147\162\141\155\163\134\160\171\164\150\157\156\134\160\171\164\150\157\156\63\61\61\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\152\151\156\152\141\62\134\146\151\154\164\145\162\163\56\160\171"
#endif
},
    {"jinja2.idtracking", modulecode_jinja2$idtracking, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\165\163\145\162\163\134\161\167\167\71\63\134\141\160\160\144\141\164\141\134\154\157\143\141\154\134\160\162\157\147\162\141\155\163\134\160\171\164\150\157\156\134\160\171\164\150\157\156\63\61\61\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\152\151\156\152\141\62\134\151\144\164\162\141\143\153\151\156\147\56\160\171"
#endif
},
    {"jinja2.lexer", modulecode_jinja2$lexer, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\165\163\145\162\163\134\161\167\167\71\63\134\141\160\160\144\141\164\141\134\154\157\143\141\154\134\160\162\157\147\162\141\155\163\134\160\171\164\150\157\156\134\160\171\164\150\157\156\63\61\61\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\152\151\156\152\141\62\134\154\145\170\145\162\56\160\171"
#endif
},
    {"jinja2.loaders", modulecode_jinja2$loaders, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\165\163\145\162\163\134\161\167\167\71\63\134\141\160\160\144\141\164\141\134\154\157\143\141\154\134\160\162\157\147\162\141\155\163\134\160\171\164\150\157\156\134\160\171\164\150\157\156\63\61\61\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\152\151\156\152\141\62\134\154\157\141\144\145\162\163\56\160\171"
#endif
},
    {"jinja2.nodes", modulecode_jinja2$nodes, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\165\163\145\162\163\134\161\167\167\71\63\134\141\160\160\144\141\164\141\134\154\157\143\141\154\134\160\162\157\147\162\141\155\163\134\160\171\164\150\157\156\134\160\171\164\150\157\156\63\61\61\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\152\151\156\152\141\62\134\156\157\144\145\163\56\160\171"
#endif
},
    {"jinja2.optimizer", modulecode_jinja2$optimizer, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\165\163\145\162\163\134\161\167\167\71\63\134\141\160\160\144\141\164\141\134\154\157\143\141\154\134\160\162\157\147\162\141\155\163\134\160\171\164\150\157\156\134\160\171\164\150\157\156\63\61\61\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\152\151\156\152\141\62\134\157\160\164\151\155\151\172\145\162\56\160\171"
#endif
},
    {"jinja2.parser", modulecode_jinja2$parser, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\165\163\145\162\163\134\161\167\167\71\63\134\141\160\160\144\141\164\141\134\154\157\143\141\154\134\160\162\157\147\162\141\155\163\134\160\171\164\150\157\156\134\160\171\164\150\157\156\63\61\61\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\152\151\156\152\141\62\134\160\141\162\163\145\162\56\160\171"
#endif
},
    {"jinja2.runtime", modulecode_jinja2$runtime, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\165\163\145\162\163\134\161\167\167\71\63\134\141\160\160\144\141\164\141\134\154\157\143\141\154\134\160\162\157\147\162\141\155\163\134\160\171\164\150\157\156\134\160\171\164\150\157\156\63\61\61\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\152\151\156\152\141\62\134\162\165\156\164\151\155\145\56\160\171"
#endif
},
    {"jinja2.tests", modulecode_jinja2$tests, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\165\163\145\162\163\134\161\167\167\71\63\134\141\160\160\144\141\164\141\134\154\157\143\141\154\134\160\162\157\147\162\141\155\163\134\160\171\164\150\157\156\134\160\171\164\150\157\156\63\61\61\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\152\151\156\152\141\62\134\164\145\163\164\163\56\160\171"
#endif
},
    {"jinja2.utils", modulecode_jinja2$utils, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\165\163\145\162\163\134\161\167\167\71\63\134\141\160\160\144\141\164\141\134\154\157\143\141\154\134\160\162\157\147\162\141\155\163\134\160\171\164\150\157\156\134\160\171\164\150\157\156\63\61\61\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\152\151\156\152\141\62\134\165\164\151\154\163\56\160\171"
#endif
},
    {"jinja2.visitor", modulecode_jinja2$visitor, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\165\163\145\162\163\134\161\167\167\71\63\134\141\160\160\144\141\164\141\134\154\157\143\141\154\134\160\162\157\147\162\141\155\163\134\160\171\164\150\157\156\134\160\171\164\150\157\156\63\61\61\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\152\151\156\152\141\62\134\166\151\163\151\164\157\162\56\160\171"
#endif
},
    {"kiwisolver", modulecode_kiwisolver, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_PACKAGE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\165\163\145\162\163\134\161\167\167\71\63\134\141\160\160\144\141\164\141\134\154\157\143\141\154\134\160\162\157\147\162\141\155\163\134\160\171\164\150\157\156\134\160\171\164\150\157\156\63\61\61\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\153\151\167\151\163\157\154\166\145\162\134\137\137\151\156\151\164\137\137\56\160\171"
#endif
},
    {"logging", NULL, 72, 98897, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG | NUITKA_PACKAGE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\161\167\167\71\63\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\61\134\114\151\142\134\154\157\147\147\151\156\147\134\137\137\151\156\151\164\137\137\56\160\171"
#endif
},
    {"lxml", modulecode_lxml, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_PACKAGE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\165\163\145\162\163\134\161\167\167\71\63\134\141\160\160\144\141\164\141\134\154\157\143\141\154\134\160\162\157\147\162\141\155\163\134\160\171\164\150\157\156\134\160\171\164\150\157\156\63\61\61\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\154\170\155\154\134\137\137\151\156\151\164\137\137\56\160\171"
#endif
},
    {"lxml.cssselect", modulecode_lxml$cssselect, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\165\163\145\162\163\134\161\167\167\71\63\134\141\160\160\144\141\164\141\134\154\157\143\141\154\134\160\162\157\147\162\141\155\163\134\160\171\164\150\157\156\134\160\171\164\150\157\156\63\61\61\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\154\170\155\154\134\143\163\163\163\145\154\145\143\164\56\160\171"
#endif
},
    {"lxml.html", modulecode_lxml$html, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_PACKAGE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\165\163\145\162\163\134\161\167\167\71\63\134\141\160\160\144\141\164\141\134\154\157\143\141\154\134\160\162\157\147\162\141\155\163\134\160\171\164\150\157\156\134\160\171\164\150\157\156\63\61\61\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\154\170\155\154\134\150\164\155\154\134\137\137\151\156\151\164\137\137\56\160\171"
#endif
},
    {"lxml.html._setmixin", modulecode_lxml$html$_setmixin, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\165\163\145\162\163\134\161\167\167\71\63\134\141\160\160\144\141\164\141\134\154\157\143\141\154\134\160\162\157\147\162\141\155\163\134\160\171\164\150\157\156\134\160\171\164\150\157\156\63\61\61\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\154\170\155\154\134\150\164\155\154\134\137\163\145\164\155\151\170\151\156\56\160\171"
#endif
},
    {"lxml.html.defs", modulecode_lxml$html$defs, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\165\163\145\162\163\134\161\167\167\71\63\134\141\160\160\144\141\164\141\134\154\157\143\141\154\134\160\162\157\147\162\141\155\163\134\160\171\164\150\157\156\134\160\171\164\150\157\156\63\61\61\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\154\170\155\154\134\150\164\155\154\134\144\145\146\163\56\160\171"
#endif
},
    {"lzma", NULL, 73, 16740, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\161\167\167\71\63\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\61\134\114\151\142\134\154\172\155\141\56\160\171"
#endif
},
    {"markupsafe", modulecode_markupsafe, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_PACKAGE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\165\163\145\162\163\134\161\167\167\71\63\134\141\160\160\144\141\164\141\134\154\157\143\141\154\134\160\162\157\147\162\141\155\163\134\160\171\164\150\157\156\134\160\171\164\150\157\156\63\61\61\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\155\141\162\153\165\160\163\141\146\145\134\137\137\151\156\151\164\137\137\56\160\171"
#endif
},
    {"markupsafe._native", modulecode_markupsafe$_native, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\165\163\145\162\163\134\161\167\167\71\63\134\141\160\160\144\141\164\141\134\154\157\143\141\154\134\160\162\157\147\162\141\155\163\134\160\171\164\150\157\156\134\160\171\164\150\157\156\63\61\61\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\155\141\162\153\165\160\163\141\146\145\134\137\156\141\164\151\166\145\56\160\171"
#endif
},
    {"matplotlib", modulecode_matplotlib, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_PACKAGE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\165\163\145\162\163\134\161\167\167\71\63\134\141\160\160\144\141\164\141\134\154\157\143\141\154\134\160\162\157\147\162\141\155\163\134\160\171\164\150\157\156\134\160\171\164\150\157\156\63\61\61\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\155\141\164\160\154\157\164\154\151\142\134\137\137\151\156\151\164\137\137\56\160\171"
#endif
},
    {"matplotlib._afm", modulecode_matplotlib$_afm, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\165\163\145\162\163\134\161\167\167\71\63\134\141\160\160\144\141\164\141\134\154\157\143\141\154\134\160\162\157\147\162\141\155\163\134\160\171\164\150\157\156\134\160\171\164\150\157\156\63\61\61\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\155\141\164\160\154\157\164\154\151\142\134\137\141\146\155\56\160\171"
#endif
},
    {"matplotlib._api", modulecode_matplotlib$_api, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_PACKAGE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\165\163\145\162\163\134\161\167\167\71\63\134\141\160\160\144\141\164\141\134\154\157\143\141\154\134\160\162\157\147\162\141\155\163\134\160\171\164\150\157\156\134\160\171\164\150\157\156\63\61\61\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\155\141\164\160\154\157\164\154\151\142\134\137\141\160\151\134\137\137\151\156\151\164\137\137\56\160\171"
#endif
},
    {"matplotlib._api.deprecation", modulecode_matplotlib$_api$deprecation, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\165\163\145\162\163\134\161\167\167\71\63\134\141\160\160\144\141\164\141\134\154\157\143\141\154\134\160\162\157\147\162\141\155\163\134\160\171\164\150\157\156\134\160\171\164\150\157\156\63\61\61\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\155\141\164\160\154\157\164\154\151\142\134\137\141\160\151\134\144\145\160\162\145\143\141\164\151\157\156\56\160\171"
#endif
},
    {"matplotlib._blocking_input", modulecode_matplotlib$_blocking_input, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\165\163\145\162\163\134\161\167\167\71\63\134\141\160\160\144\141\164\141\134\154\157\143\141\154\134\160\162\157\147\162\141\155\163\134\160\171\164\150\157\156\134\160\171\164\150\157\156\63\61\61\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\155\141\164\160\154\157\164\154\151\142\134\137\142\154\157\143\153\151\156\147\137\151\156\160\165\164\56\160\171"
#endif
},
    {"matplotlib._cm", modulecode_matplotlib$_cm, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\165\163\145\162\163\134\161\167\167\71\63\134\141\160\160\144\141\164\141\134\154\157\143\141\154\134\160\162\157\147\162\141\155\163\134\160\171\164\150\157\156\134\160\171\164\150\157\156\63\61\61\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\155\141\164\160\154\157\164\154\151\142\134\137\143\155\56\160\171"
#endif
},
    {"matplotlib._cm_listed", modulecode_matplotlib$_cm_listed, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\165\163\145\162\163\134\161\167\167\71\63\134\141\160\160\144\141\164\141\134\154\157\143\141\154\134\160\162\157\147\162\141\155\163\134\160\171\164\150\157\156\134\160\171\164\150\157\156\63\61\61\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\155\141\164\160\154\157\164\154\151\142\134\137\143\155\137\154\151\163\164\145\144\56\160\171"
#endif
},
    {"matplotlib._color_data", modulecode_matplotlib$_color_data, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\165\163\145\162\163\134\161\167\167\71\63\134\141\160\160\144\141\164\141\134\154\157\143\141\154\134\160\162\157\147\162\141\155\163\134\160\171\164\150\157\156\134\160\171\164\150\157\156\63\61\61\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\155\141\164\160\154\157\164\154\151\142\134\137\143\157\154\157\162\137\144\141\164\141\56\160\171"
#endif
},
    {"matplotlib._constrained_layout", modulecode_matplotlib$_constrained_layout, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\165\163\145\162\163\134\161\167\167\71\63\134\141\160\160\144\141\164\141\134\154\157\143\141\154\134\160\162\157\147\162\141\155\163\134\160\171\164\150\157\156\134\160\171\164\150\157\156\63\61\61\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\155\141\164\160\154\157\164\154\151\142\134\137\143\157\156\163\164\162\141\151\156\145\144\137\154\141\171\157\165\164\56\160\171"
#endif
},
    {"matplotlib._docstring", modulecode_matplotlib$_docstring, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\165\163\145\162\163\134\161\167\167\71\63\134\141\160\160\144\141\164\141\134\154\157\143\141\154\134\160\162\157\147\162\141\155\163\134\160\171\164\150\157\156\134\160\171\164\150\157\156\63\61\61\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\155\141\164\160\154\157\164\154\151\142\134\137\144\157\143\163\164\162\151\156\147\56\160\171"
#endif
},
    {"matplotlib._enums", modulecode_matplotlib$_enums, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\165\163\145\162\163\134\161\167\167\71\63\134\141\160\160\144\141\164\141\134\154\157\143\141\154\134\160\162\157\147\162\141\155\163\134\160\171\164\150\157\156\134\160\171\164\150\157\156\63\61\61\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\155\141\164\160\154\157\164\154\151\142\134\137\145\156\165\155\163\56\160\171"
#endif
},
    {"matplotlib._fontconfig_pattern", modulecode_matplotlib$_fontconfig_pattern, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\165\163\145\162\163\134\161\167\167\71\63\134\141\160\160\144\141\164\141\134\154\157\143\141\154\134\160\162\157\147\162\141\155\163\134\160\171\164\150\157\156\134\160\171\164\150\157\156\63\61\61\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\155\141\164\160\154\157\164\154\151\142\134\137\146\157\156\164\143\157\156\146\151\147\137\160\141\164\164\145\162\156\56\160\171"
#endif
},
    {"matplotlib._layoutgrid", modulecode_matplotlib$_layoutgrid, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\165\163\145\162\163\134\161\167\167\71\63\134\141\160\160\144\141\164\141\134\154\157\143\141\154\134\160\162\157\147\162\141\155\163\134\160\171\164\150\157\156\134\160\171\164\150\157\156\63\61\61\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\155\141\164\160\154\157\164\154\151\142\134\137\154\141\171\157\165\164\147\162\151\144\56\160\171"
#endif
},
    {"matplotlib._mathtext", modulecode_matplotlib$_mathtext, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\165\163\145\162\163\134\161\167\167\71\63\134\141\160\160\144\141\164\141\134\154\157\143\141\154\134\160\162\157\147\162\141\155\163\134\160\171\164\150\157\156\134\160\171\164\150\157\156\63\61\61\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\155\141\164\160\154\157\164\154\151\142\134\137\155\141\164\150\164\145\170\164\56\160\171"
#endif
},
    {"matplotlib._mathtext_data", modulecode_matplotlib$_mathtext_data, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\165\163\145\162\163\134\161\167\167\71\63\134\141\160\160\144\141\164\141\134\154\157\143\141\154\134\160\162\157\147\162\141\155\163\134\160\171\164\150\157\156\134\160\171\164\150\157\156\63\61\61\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\155\141\164\160\154\157\164\154\151\142\134\137\155\141\164\150\164\145\170\164\137\144\141\164\141\56\160\171"
#endif
},
    {"matplotlib._pylab_helpers", modulecode_matplotlib$_pylab_helpers, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\165\163\145\162\163\134\161\167\167\71\63\134\141\160\160\144\141\164\141\134\154\157\143\141\154\134\160\162\157\147\162\141\155\163\134\160\171\164\150\157\156\134\160\171\164\150\157\156\63\61\61\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\155\141\164\160\154\157\164\154\151\142\134\137\160\171\154\141\142\137\150\145\154\160\145\162\163\56\160\171"
#endif
},
    {"matplotlib._text_helpers", modulecode_matplotlib$_text_helpers, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\165\163\145\162\163\134\161\167\167\71\63\134\141\160\160\144\141\164\141\134\154\157\143\141\154\134\160\162\157\147\162\141\155\163\134\160\171\164\150\157\156\134\160\171\164\150\157\156\63\61\61\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\155\141\164\160\154\157\164\154\151\142\134\137\164\145\170\164\137\150\145\154\160\145\162\163\56\160\171"
#endif
},
    {"matplotlib._tight_bbox", modulecode_matplotlib$_tight_bbox, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\165\163\145\162\163\134\161\167\167\71\63\134\141\160\160\144\141\164\141\134\154\157\143\141\154\134\160\162\157\147\162\141\155\163\134\160\171\164\150\157\156\134\160\171\164\150\157\156\63\61\61\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\155\141\164\160\154\157\164\154\151\142\134\137\164\151\147\150\164\137\142\142\157\170\56\160\171"
#endif
},
    {"matplotlib._tight_layout", modulecode_matplotlib$_tight_layout, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\165\163\145\162\163\134\161\167\167\71\63\134\141\160\160\144\141\164\141\134\154\157\143\141\154\134\160\162\157\147\162\141\155\163\134\160\171\164\150\157\156\134\160\171\164\150\157\156\63\61\61\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\155\141\164\160\154\157\164\154\151\142\134\137\164\151\147\150\164\137\154\141\171\157\165\164\56\160\171"
#endif
},
    {"matplotlib._version", modulecode_matplotlib$_version, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\165\163\145\162\163\134\161\167\167\71\63\134\141\160\160\144\141\164\141\134\154\157\143\141\154\134\160\162\157\147\162\141\155\163\134\160\171\164\150\157\156\134\160\171\164\150\157\156\63\61\61\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\155\141\164\160\154\157\164\154\151\142\134\137\166\145\162\163\151\157\156\56\160\171"
#endif
},
    {"matplotlib.artist", modulecode_matplotlib$artist, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\165\163\145\162\163\134\161\167\167\71\63\134\141\160\160\144\141\164\141\134\154\157\143\141\154\134\160\162\157\147\162\141\155\163\134\160\171\164\150\157\156\134\160\171\164\150\157\156\63\61\61\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\155\141\164\160\154\157\164\154\151\142\134\141\162\164\151\163\164\56\160\171"
#endif
},
    {"matplotlib.axes", modulecode_matplotlib$axes, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_PACKAGE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\165\163\145\162\163\134\161\167\167\71\63\134\141\160\160\144\141\164\141\134\154\157\143\141\154\134\160\162\157\147\162\141\155\163\134\160\171\164\150\157\156\134\160\171\164\150\157\156\63\61\61\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\155\141\164\160\154\157\164\154\151\142\134\141\170\145\163\134\137\137\151\156\151\164\137\137\56\160\171"
#endif
},
    {"matplotlib.axes._axes", modulecode_matplotlib$axes$_axes, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\165\163\145\162\163\134\161\167\167\71\63\134\141\160\160\144\141\164\141\134\154\157\143\141\154\134\160\162\157\147\162\141\155\163\134\160\171\164\150\157\156\134\160\171\164\150\157\156\63\61\61\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\155\141\164\160\154\157\164\154\151\142\134\141\170\145\163\134\137\141\170\145\163\56\160\171"
#endif
},
    {"matplotlib.axes._base", modulecode_matplotlib$axes$_base, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\165\163\145\162\163\134\161\167\167\71\63\134\141\160\160\144\141\164\141\134\154\157\143\141\154\134\160\162\157\147\162\141\155\163\134\160\171\164\150\157\156\134\160\171\164\150\157\156\63\61\61\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\155\141\164\160\154\157\164\154\151\142\134\141\170\145\163\134\137\142\141\163\145\56\160\171"
#endif
},
    {"matplotlib.axes._secondary_axes", modulecode_matplotlib$axes$_secondary_axes, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\165\163\145\162\163\134\161\167\167\71\63\134\141\160\160\144\141\164\141\134\154\157\143\141\154\134\160\162\157\147\162\141\155\163\134\160\171\164\150\157\156\134\160\171\164\150\157\156\63\61\61\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\155\141\164\160\154\157\164\154\151\142\134\141\170\145\163\134\137\163\145\143\157\156\144\141\162\171\137\141\170\145\163\56\160\171"
#endif
},
    {"matplotlib.axis", modulecode_matplotlib$axis, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\165\163\145\162\163\134\161\167\167\71\63\134\141\160\160\144\141\164\141\134\154\157\143\141\154\134\160\162\157\147\162\141\155\163\134\160\171\164\150\157\156\134\160\171\164\150\157\156\63\61\61\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\155\141\164\160\154\157\164\154\151\142\134\141\170\151\163\56\160\171"
#endif
},
    {"matplotlib.backend_bases", modulecode_matplotlib$backend_bases, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\165\163\145\162\163\134\161\167\167\71\63\134\141\160\160\144\141\164\141\134\154\157\143\141\154\134\160\162\157\147\162\141\155\163\134\160\171\164\150\157\156\134\160\171\164\150\157\156\63\61\61\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\155\141\164\160\154\157\164\154\151\142\134\142\141\143\153\145\156\144\137\142\141\163\145\163\56\160\171"
#endif
},
    {"matplotlib.backend_managers", modulecode_matplotlib$backend_managers, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\165\163\145\162\163\134\161\167\167\71\63\134\141\160\160\144\141\164\141\134\154\157\143\141\154\134\160\162\157\147\162\141\155\163\134\160\171\164\150\157\156\134\160\171\164\150\157\156\63\61\61\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\155\141\164\160\154\157\164\154\151\142\134\142\141\143\153\145\156\144\137\155\141\156\141\147\145\162\163\56\160\171"
#endif
},
    {"matplotlib.backend_tools", modulecode_matplotlib$backend_tools, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\165\163\145\162\163\134\161\167\167\71\63\134\141\160\160\144\141\164\141\134\154\157\143\141\154\134\160\162\157\147\162\141\155\163\134\160\171\164\150\157\156\134\160\171\164\150\157\156\63\61\61\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\155\141\164\160\154\157\164\154\151\142\134\142\141\143\153\145\156\144\137\164\157\157\154\163\56\160\171"
#endif
},
    {"matplotlib.backends", modulecode_matplotlib$backends, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_PACKAGE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\165\163\145\162\163\134\161\167\167\71\63\134\141\160\160\144\141\164\141\134\154\157\143\141\154\134\160\162\157\147\162\141\155\163\134\160\171\164\150\157\156\134\160\171\164\150\157\156\63\61\61\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\155\141\164\160\154\157\164\154\151\142\134\142\141\143\153\145\156\144\163\134\137\137\151\156\151\164\137\137\56\160\171"
#endif
},
    {"matplotlib.backends._backend_tk", modulecode_matplotlib$backends$_backend_tk, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\165\163\145\162\163\134\161\167\167\71\63\134\141\160\160\144\141\164\141\134\154\157\143\141\154\134\160\162\157\147\162\141\155\163\134\160\171\164\150\157\156\134\160\171\164\150\157\156\63\61\61\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\155\141\164\160\154\157\164\154\151\142\134\142\141\143\153\145\156\144\163\134\137\142\141\143\153\145\156\144\137\164\153\56\160\171"
#endif
},
    {"matplotlib.backends.backend_agg", modulecode_matplotlib$backends$backend_agg, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\165\163\145\162\163\134\161\167\167\71\63\134\141\160\160\144\141\164\141\134\154\157\143\141\154\134\160\162\157\147\162\141\155\163\134\160\171\164\150\157\156\134\160\171\164\150\157\156\63\61\61\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\155\141\164\160\154\157\164\154\151\142\134\142\141\143\153\145\156\144\163\134\142\141\143\153\145\156\144\137\141\147\147\56\160\171"
#endif
},
    {"matplotlib.backends.backend_tkagg", modulecode_matplotlib$backends$backend_tkagg, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\165\163\145\162\163\134\161\167\167\71\63\134\141\160\160\144\141\164\141\134\154\157\143\141\154\134\160\162\157\147\162\141\155\163\134\160\171\164\150\157\156\134\160\171\164\150\157\156\63\61\61\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\155\141\164\160\154\157\164\154\151\142\134\142\141\143\153\145\156\144\163\134\142\141\143\153\145\156\144\137\164\153\141\147\147\56\160\171"
#endif
},
    {"matplotlib.bezier", modulecode_matplotlib$bezier, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\165\163\145\162\163\134\161\167\167\71\63\134\141\160\160\144\141\164\141\134\154\157\143\141\154\134\160\162\157\147\162\141\155\163\134\160\171\164\150\157\156\134\160\171\164\150\157\156\63\61\61\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\155\141\164\160\154\157\164\154\151\142\134\142\145\172\151\145\162\56\160\171"
#endif
},
    {"matplotlib.category", modulecode_matplotlib$category, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\165\163\145\162\163\134\161\167\167\71\63\134\141\160\160\144\141\164\141\134\154\157\143\141\154\134\160\162\157\147\162\141\155\163\134\160\171\164\150\157\156\134\160\171\164\150\157\156\63\61\61\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\155\141\164\160\154\157\164\154\151\142\134\143\141\164\145\147\157\162\171\56\160\171"
#endif
},
    {"matplotlib.cbook", modulecode_matplotlib$cbook, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_PACKAGE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\165\163\145\162\163\134\161\167\167\71\63\134\141\160\160\144\141\164\141\134\154\157\143\141\154\134\160\162\157\147\162\141\155\163\134\160\171\164\150\157\156\134\160\171\164\150\157\156\63\61\61\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\155\141\164\160\154\157\164\154\151\142\134\143\142\157\157\153\134\137\137\151\156\151\164\137\137\56\160\171"
#endif
},
    {"matplotlib.cm", modulecode_matplotlib$cm, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\165\163\145\162\163\134\161\167\167\71\63\134\141\160\160\144\141\164\141\134\154\157\143\141\154\134\160\162\157\147\162\141\155\163\134\160\171\164\150\157\156\134\160\171\164\150\157\156\63\61\61\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\155\141\164\160\154\157\164\154\151\142\134\143\155\56\160\171"
#endif
},
    {"matplotlib.collections", modulecode_matplotlib$collections, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\165\163\145\162\163\134\161\167\167\71\63\134\141\160\160\144\141\164\141\134\154\157\143\141\154\134\160\162\157\147\162\141\155\163\134\160\171\164\150\157\156\134\160\171\164\150\157\156\63\61\61\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\155\141\164\160\154\157\164\154\151\142\134\143\157\154\154\145\143\164\151\157\156\163\56\160\171"
#endif
},
    {"matplotlib.colorbar", modulecode_matplotlib$colorbar, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\165\163\145\162\163\134\161\167\167\71\63\134\141\160\160\144\141\164\141\134\154\157\143\141\154\134\160\162\157\147\162\141\155\163\134\160\171\164\150\157\156\134\160\171\164\150\157\156\63\61\61\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\155\141\164\160\154\157\164\154\151\142\134\143\157\154\157\162\142\141\162\56\160\171"
#endif
},
    {"matplotlib.colors", modulecode_matplotlib$colors, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\165\163\145\162\163\134\161\167\167\71\63\134\141\160\160\144\141\164\141\134\154\157\143\141\154\134\160\162\157\147\162\141\155\163\134\160\171\164\150\157\156\134\160\171\164\150\157\156\63\61\61\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\155\141\164\160\154\157\164\154\151\142\134\143\157\154\157\162\163\56\160\171"
#endif
},
    {"matplotlib.container", modulecode_matplotlib$container, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\165\163\145\162\163\134\161\167\167\71\63\134\141\160\160\144\141\164\141\134\154\157\143\141\154\134\160\162\157\147\162\141\155\163\134\160\171\164\150\157\156\134\160\171\164\150\157\156\63\61\61\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\155\141\164\160\154\157\164\154\151\142\134\143\157\156\164\141\151\156\145\162\56\160\171"
#endif
},
    {"matplotlib.contour", modulecode_matplotlib$contour, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\165\163\145\162\163\134\161\167\167\71\63\134\141\160\160\144\141\164\141\134\154\157\143\141\154\134\160\162\157\147\162\141\155\163\134\160\171\164\150\157\156\134\160\171\164\150\157\156\63\61\61\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\155\141\164\160\154\157\164\154\151\142\134\143\157\156\164\157\165\162\56\160\171"
#endif
},
    {"matplotlib.dates", modulecode_matplotlib$dates, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\165\163\145\162\163\134\161\167\167\71\63\134\141\160\160\144\141\164\141\134\154\157\143\141\154\134\160\162\157\147\162\141\155\163\134\160\171\164\150\157\156\134\160\171\164\150\157\156\63\61\61\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\155\141\164\160\154\157\164\154\151\142\134\144\141\164\145\163\56\160\171"
#endif
},
    {"matplotlib.dviread", modulecode_matplotlib$dviread, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\165\163\145\162\163\134\161\167\167\71\63\134\141\160\160\144\141\164\141\134\154\157\143\141\154\134\160\162\157\147\162\141\155\163\134\160\171\164\150\157\156\134\160\171\164\150\157\156\63\61\61\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\155\141\164\160\154\157\164\154\151\142\134\144\166\151\162\145\141\144\56\160\171"
#endif
},
    {"matplotlib.figure", modulecode_matplotlib$figure, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\165\163\145\162\163\134\161\167\167\71\63\134\141\160\160\144\141\164\141\134\154\157\143\141\154\134\160\162\157\147\162\141\155\163\134\160\171\164\150\157\156\134\160\171\164\150\157\156\63\61\61\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\155\141\164\160\154\157\164\154\151\142\134\146\151\147\165\162\145\56\160\171"
#endif
},
    {"matplotlib.font_manager", modulecode_matplotlib$font_manager, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\165\163\145\162\163\134\161\167\167\71\63\134\141\160\160\144\141\164\141\134\154\157\143\141\154\134\160\162\157\147\162\141\155\163\134\160\171\164\150\157\156\134\160\171\164\150\157\156\63\61\61\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\155\141\164\160\154\157\164\154\151\142\134\146\157\156\164\137\155\141\156\141\147\145\162\56\160\171"
#endif
},
    {"matplotlib.gridspec", modulecode_matplotlib$gridspec, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\165\163\145\162\163\134\161\167\167\71\63\134\141\160\160\144\141\164\141\134\154\157\143\141\154\134\160\162\157\147\162\141\155\163\134\160\171\164\150\157\156\134\160\171\164\150\157\156\63\61\61\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\155\141\164\160\154\157\164\154\151\142\134\147\162\151\144\163\160\145\143\56\160\171"
#endif
},
    {"matplotlib.hatch", modulecode_matplotlib$hatch, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\165\163\145\162\163\134\161\167\167\71\63\134\141\160\160\144\141\164\141\134\154\157\143\141\154\134\160\162\157\147\162\141\155\163\134\160\171\164\150\157\156\134\160\171\164\150\157\156\63\61\61\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\155\141\164\160\154\157\164\154\151\142\134\150\141\164\143\150\56\160\171"
#endif
},
    {"matplotlib.image", modulecode_matplotlib$image, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\165\163\145\162\163\134\161\167\167\71\63\134\141\160\160\144\141\164\141\134\154\157\143\141\154\134\160\162\157\147\162\141\155\163\134\160\171\164\150\157\156\134\160\171\164\150\157\156\63\61\61\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\155\141\164\160\154\157\164\154\151\142\134\151\155\141\147\145\56\160\171"
#endif
},
    {"matplotlib.layout_engine", modulecode_matplotlib$layout_engine, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\165\163\145\162\163\134\161\167\167\71\63\134\141\160\160\144\141\164\141\134\154\157\143\141\154\134\160\162\157\147\162\141\155\163\134\160\171\164\150\157\156\134\160\171\164\150\157\156\63\61\61\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\155\141\164\160\154\157\164\154\151\142\134\154\141\171\157\165\164\137\145\156\147\151\156\145\56\160\171"
#endif
},
    {"matplotlib.legend", modulecode_matplotlib$legend, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\165\163\145\162\163\134\161\167\167\71\63\134\141\160\160\144\141\164\141\134\154\157\143\141\154\134\160\162\157\147\162\141\155\163\134\160\171\164\150\157\156\134\160\171\164\150\157\156\63\61\61\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\155\141\164\160\154\157\164\154\151\142\134\154\145\147\145\156\144\56\160\171"
#endif
},
    {"matplotlib.legend_handler", modulecode_matplotlib$legend_handler, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\165\163\145\162\163\134\161\167\167\71\63\134\141\160\160\144\141\164\141\134\154\157\143\141\154\134\160\162\157\147\162\141\155\163\134\160\171\164\150\157\156\134\160\171\164\150\157\156\63\61\61\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\155\141\164\160\154\157\164\154\151\142\134\154\145\147\145\156\144\137\150\141\156\144\154\145\162\56\160\171"
#endif
},
    {"matplotlib.lines", modulecode_matplotlib$lines, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\165\163\145\162\163\134\161\167\167\71\63\134\141\160\160\144\141\164\141\134\154\157\143\141\154\134\160\162\157\147\162\141\155\163\134\160\171\164\150\157\156\134\160\171\164\150\157\156\63\61\61\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\155\141\164\160\154\157\164\154\151\142\134\154\151\156\145\163\56\160\171"
#endif
},
    {"matplotlib.markers", modulecode_matplotlib$markers, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\165\163\145\162\163\134\161\167\167\71\63\134\141\160\160\144\141\164\141\134\154\157\143\141\154\134\160\162\157\147\162\141\155\163\134\160\171\164\150\157\156\134\160\171\164\150\157\156\63\61\61\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\155\141\164\160\154\157\164\154\151\142\134\155\141\162\153\145\162\163\56\160\171"
#endif
},
    {"matplotlib.mathtext", modulecode_matplotlib$mathtext, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\165\163\145\162\163\134\161\167\167\71\63\134\141\160\160\144\141\164\141\134\154\157\143\141\154\134\160\162\157\147\162\141\155\163\134\160\171\164\150\157\156\134\160\171\164\150\157\156\63\61\61\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\155\141\164\160\154\157\164\154\151\142\134\155\141\164\150\164\145\170\164\56\160\171"
#endif
},
    {"matplotlib.mlab", modulecode_matplotlib$mlab, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\165\163\145\162\163\134\161\167\167\71\63\134\141\160\160\144\141\164\141\134\154\157\143\141\154\134\160\162\157\147\162\141\155\163\134\160\171\164\150\157\156\134\160\171\164\150\157\156\63\61\61\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\155\141\164\160\154\157\164\154\151\142\134\155\154\141\142\56\160\171"
#endif
},
    {"matplotlib.offsetbox", modulecode_matplotlib$offsetbox, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\165\163\145\162\163\134\161\167\167\71\63\134\141\160\160\144\141\164\141\134\154\157\143\141\154\134\160\162\157\147\162\141\155\163\134\160\171\164\150\157\156\134\160\171\164\150\157\156\63\61\61\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\155\141\164\160\154\157\164\154\151\142\134\157\146\146\163\145\164\142\157\170\56\160\171"
#endif
},
    {"matplotlib.patches", modulecode_matplotlib$patches, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\165\163\145\162\163\134\161\167\167\71\63\134\141\160\160\144\141\164\141\134\154\157\143\141\154\134\160\162\157\147\162\141\155\163\134\160\171\164\150\157\156\134\160\171\164\150\157\156\63\61\61\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\155\141\164\160\154\157\164\154\151\142\134\160\141\164\143\150\145\163\56\160\171"
#endif
},
    {"matplotlib.path", modulecode_matplotlib$path, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\165\163\145\162\163\134\161\167\167\71\63\134\141\160\160\144\141\164\141\134\154\157\143\141\154\134\160\162\157\147\162\141\155\163\134\160\171\164\150\157\156\134\160\171\164\150\157\156\63\61\61\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\155\141\164\160\154\157\164\154\151\142\134\160\141\164\150\56\160\171"
#endif
},
    {"matplotlib.patheffects", modulecode_matplotlib$patheffects, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\165\163\145\162\163\134\161\167\167\71\63\134\141\160\160\144\141\164\141\134\154\157\143\141\154\134\160\162\157\147\162\141\155\163\134\160\171\164\150\157\156\134\160\171\164\150\157\156\63\61\61\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\155\141\164\160\154\157\164\154\151\142\134\160\141\164\150\145\146\146\145\143\164\163\56\160\171"
#endif
},
    {"matplotlib.projections", modulecode_matplotlib$projections, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_PACKAGE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\165\163\145\162\163\134\161\167\167\71\63\134\141\160\160\144\141\164\141\134\154\157\143\141\154\134\160\162\157\147\162\141\155\163\134\160\171\164\150\157\156\134\160\171\164\150\157\156\63\61\61\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\155\141\164\160\154\157\164\154\151\142\134\160\162\157\152\145\143\164\151\157\156\163\134\137\137\151\156\151\164\137\137\56\160\171"
#endif
},
    {"matplotlib.projections.geo", modulecode_matplotlib$projections$geo, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\165\163\145\162\163\134\161\167\167\71\63\134\141\160\160\144\141\164\141\134\154\157\143\141\154\134\160\162\157\147\162\141\155\163\134\160\171\164\150\157\156\134\160\171\164\150\157\156\63\61\61\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\155\141\164\160\154\157\164\154\151\142\134\160\162\157\152\145\143\164\151\157\156\163\134\147\145\157\56\160\171"
#endif
},
    {"matplotlib.projections.polar", modulecode_matplotlib$projections$polar, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\165\163\145\162\163\134\161\167\167\71\63\134\141\160\160\144\141\164\141\134\154\157\143\141\154\134\160\162\157\147\162\141\155\163\134\160\171\164\150\157\156\134\160\171\164\150\157\156\63\61\61\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\155\141\164\160\154\157\164\154\151\142\134\160\162\157\152\145\143\164\151\157\156\163\134\160\157\154\141\162\56\160\171"
#endif
},
    {"matplotlib.pylab", modulecode_matplotlib$pylab, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\165\163\145\162\163\134\161\167\167\71\63\134\141\160\160\144\141\164\141\134\154\157\143\141\154\134\160\162\157\147\162\141\155\163\134\160\171\164\150\157\156\134\160\171\164\150\157\156\63\61\61\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\155\141\164\160\154\157\164\154\151\142\134\160\171\154\141\142\56\160\171"
#endif
},
    {"matplotlib.pyplot", modulecode_matplotlib$pyplot, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\165\163\145\162\163\134\161\167\167\71\63\134\141\160\160\144\141\164\141\134\154\157\143\141\154\134\160\162\157\147\162\141\155\163\134\160\171\164\150\157\156\134\160\171\164\150\157\156\63\61\61\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\155\141\164\160\154\157\164\154\151\142\134\160\171\160\154\157\164\56\160\171"
#endif
},
    {"matplotlib.quiver", modulecode_matplotlib$quiver, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\165\163\145\162\163\134\161\167\167\71\63\134\141\160\160\144\141\164\141\134\154\157\143\141\154\134\160\162\157\147\162\141\155\163\134\160\171\164\150\157\156\134\160\171\164\150\157\156\63\61\61\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\155\141\164\160\154\157\164\154\151\142\134\161\165\151\166\145\162\56\160\171"
#endif
},
    {"matplotlib.rcsetup", modulecode_matplotlib$rcsetup, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\165\163\145\162\163\134\161\167\167\71\63\134\141\160\160\144\141\164\141\134\154\157\143\141\154\134\160\162\157\147\162\141\155\163\134\160\171\164\150\157\156\134\160\171\164\150\157\156\63\61\61\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\155\141\164\160\154\157\164\154\151\142\134\162\143\163\145\164\165\160\56\160\171"
#endif
},
    {"matplotlib.scale", modulecode_matplotlib$scale, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\165\163\145\162\163\134\161\167\167\71\63\134\141\160\160\144\141\164\141\134\154\157\143\141\154\134\160\162\157\147\162\141\155\163\134\160\171\164\150\157\156\134\160\171\164\150\157\156\63\61\61\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\155\141\164\160\154\157\164\154\151\142\134\163\143\141\154\145\56\160\171"
#endif
},
    {"matplotlib.spines", modulecode_matplotlib$spines, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\165\163\145\162\163\134\161\167\167\71\63\134\141\160\160\144\141\164\141\134\154\157\143\141\154\134\160\162\157\147\162\141\155\163\134\160\171\164\150\157\156\134\160\171\164\150\157\156\63\61\61\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\155\141\164\160\154\157\164\154\151\142\134\163\160\151\156\145\163\56\160\171"
#endif
},
    {"matplotlib.stackplot", modulecode_matplotlib$stackplot, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\165\163\145\162\163\134\161\167\167\71\63\134\141\160\160\144\141\164\141\134\154\157\143\141\154\134\160\162\157\147\162\141\155\163\134\160\171\164\150\157\156\134\160\171\164\150\157\156\63\61\61\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\155\141\164\160\154\157\164\154\151\142\134\163\164\141\143\153\160\154\157\164\56\160\171"
#endif
},
    {"matplotlib.streamplot", modulecode_matplotlib$streamplot, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\165\163\145\162\163\134\161\167\167\71\63\134\141\160\160\144\141\164\141\134\154\157\143\141\154\134\160\162\157\147\162\141\155\163\134\160\171\164\150\157\156\134\160\171\164\150\157\156\63\61\61\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\155\141\164\160\154\157\164\154\151\142\134\163\164\162\145\141\155\160\154\157\164\56\160\171"
#endif
},
    {"matplotlib.style", modulecode_matplotlib$style, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_PACKAGE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\165\163\145\162\163\134\161\167\167\71\63\134\141\160\160\144\141\164\141\134\154\157\143\141\154\134\160\162\157\147\162\141\155\163\134\160\171\164\150\157\156\134\160\171\164\150\157\156\63\61\61\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\155\141\164\160\154\157\164\154\151\142\134\163\164\171\154\145\134\137\137\151\156\151\164\137\137\56\160\171"
#endif
},
    {"matplotlib.style.core", modulecode_matplotlib$style$core, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\165\163\145\162\163\134\161\167\167\71\63\134\141\160\160\144\141\164\141\134\154\157\143\141\154\134\160\162\157\147\162\141\155\163\134\160\171\164\150\157\156\134\160\171\164\150\157\156\63\61\61\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\155\141\164\160\154\157\164\154\151\142\134\163\164\171\154\145\134\143\157\162\145\56\160\171"
#endif
},
    {"matplotlib.table", modulecode_matplotlib$table, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\165\163\145\162\163\134\161\167\167\71\63\134\141\160\160\144\141\164\141\134\154\157\143\141\154\134\160\162\157\147\162\141\155\163\134\160\171\164\150\157\156\134\160\171\164\150\157\156\63\61\61\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\155\141\164\160\154\157\164\154\151\142\134\164\141\142\154\145\56\160\171"
#endif
},
    {"matplotlib.texmanager", modulecode_matplotlib$texmanager, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\165\163\145\162\163\134\161\167\167\71\63\134\141\160\160\144\141\164\141\134\154\157\143\141\154\134\160\162\157\147\162\141\155\163\134\160\171\164\150\157\156\134\160\171\164\150\157\156\63\61\61\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\155\141\164\160\154\157\164\154\151\142\134\164\145\170\155\141\156\141\147\145\162\56\160\171"
#endif
},
    {"matplotlib.text", modulecode_matplotlib$text, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\165\163\145\162\163\134\161\167\167\71\63\134\141\160\160\144\141\164\141\134\154\157\143\141\154\134\160\162\157\147\162\141\155\163\134\160\171\164\150\157\156\134\160\171\164\150\157\156\63\61\61\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\155\141\164\160\154\157\164\154\151\142\134\164\145\170\164\56\160\171"
#endif
},
    {"matplotlib.textpath", modulecode_matplotlib$textpath, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\165\163\145\162\163\134\161\167\167\71\63\134\141\160\160\144\141\164\141\134\154\157\143\141\154\134\160\162\157\147\162\141\155\163\134\160\171\164\150\157\156\134\160\171\164\150\157\156\63\61\61\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\155\141\164\160\154\157\164\154\151\142\134\164\145\170\164\160\141\164\150\56\160\171"
#endif
},
    {"matplotlib.ticker", modulecode_matplotlib$ticker, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\165\163\145\162\163\134\161\167\167\71\63\134\141\160\160\144\141\164\141\134\154\157\143\141\154\134\160\162\157\147\162\141\155\163\134\160\171\164\150\157\156\134\160\171\164\150\157\156\63\61\61\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\155\141\164\160\154\157\164\154\151\142\134\164\151\143\153\145\162\56\160\171"
#endif
},
    {"matplotlib.transforms", modulecode_matplotlib$transforms, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\165\163\145\162\163\134\161\167\167\71\63\134\141\160\160\144\141\164\141\134\154\157\143\141\154\134\160\162\157\147\162\141\155\163\134\160\171\164\150\157\156\134\160\171\164\150\157\156\63\61\61\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\155\141\164\160\154\157\164\154\151\142\134\164\162\141\156\163\146\157\162\155\163\56\160\171"
#endif
},
    {"matplotlib.tri", modulecode_matplotlib$tri, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_PACKAGE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\165\163\145\162\163\134\161\167\167\71\63\134\141\160\160\144\141\164\141\134\154\157\143\141\154\134\160\162\157\147\162\141\155\163\134\160\171\164\150\157\156\134\160\171\164\150\157\156\63\61\61\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\155\141\164\160\154\157\164\154\151\142\134\164\162\151\134\137\137\151\156\151\164\137\137\56\160\171"
#endif
},
    {"matplotlib.tri._triangulation", modulecode_matplotlib$tri$_triangulation, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\165\163\145\162\163\134\161\167\167\71\63\134\141\160\160\144\141\164\141\134\154\157\143\141\154\134\160\162\157\147\162\141\155\163\134\160\171\164\150\157\156\134\160\171\164\150\157\156\63\61\61\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\155\141\164\160\154\157\164\154\151\142\134\164\162\151\134\137\164\162\151\141\156\147\165\154\141\164\151\157\156\56\160\171"
#endif
},
    {"matplotlib.tri._tricontour", modulecode_matplotlib$tri$_tricontour, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\165\163\145\162\163\134\161\167\167\71\63\134\141\160\160\144\141\164\141\134\154\157\143\141\154\134\160\162\157\147\162\141\155\163\134\160\171\164\150\157\156\134\160\171\164\150\157\156\63\61\61\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\155\141\164\160\154\157\164\154\151\142\134\164\162\151\134\137\164\162\151\143\157\156\164\157\165\162\56\160\171"
#endif
},
    {"matplotlib.tri._trifinder", modulecode_matplotlib$tri$_trifinder, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\165\163\145\162\163\134\161\167\167\71\63\134\141\160\160\144\141\164\141\134\154\157\143\141\154\134\160\162\157\147\162\141\155\163\134\160\171\164\150\157\156\134\160\171\164\150\157\156\63\61\61\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\155\141\164\160\154\157\164\154\151\142\134\164\162\151\134\137\164\162\151\146\151\156\144\145\162\56\160\171"
#endif
},
    {"matplotlib.tri._triinterpolate", modulecode_matplotlib$tri$_triinterpolate, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\165\163\145\162\163\134\161\167\167\71\63\134\141\160\160\144\141\164\141\134\154\157\143\141\154\134\160\162\157\147\162\141\155\163\134\160\171\164\150\157\156\134\160\171\164\150\157\156\63\61\61\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\155\141\164\160\154\157\164\154\151\142\134\164\162\151\134\137\164\162\151\151\156\164\145\162\160\157\154\141\164\145\56\160\171"
#endif
},
    {"matplotlib.tri._tripcolor", modulecode_matplotlib$tri$_tripcolor, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\165\163\145\162\163\134\161\167\167\71\63\134\141\160\160\144\141\164\141\134\154\157\143\141\154\134\160\162\157\147\162\141\155\163\134\160\171\164\150\157\156\134\160\171\164\150\157\156\63\61\61\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\155\141\164\160\154\157\164\154\151\142\134\164\162\151\134\137\164\162\151\160\143\157\154\157\162\56\160\171"
#endif
},
    {"matplotlib.tri._triplot", modulecode_matplotlib$tri$_triplot, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\165\163\145\162\163\134\161\167\167\71\63\134\141\160\160\144\141\164\141\134\154\157\143\141\154\134\160\162\157\147\162\141\155\163\134\160\171\164\150\157\156\134\160\171\164\150\157\156\63\61\61\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\155\141\164\160\154\157\164\154\151\142\134\164\162\151\134\137\164\162\151\160\154\157\164\56\160\171"
#endif
},
    {"matplotlib.tri._trirefine", modulecode_matplotlib$tri$_trirefine, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\165\163\145\162\163\134\161\167\167\71\63\134\141\160\160\144\141\164\141\134\154\157\143\141\154\134\160\162\157\147\162\141\155\163\134\160\171\164\150\157\156\134\160\171\164\150\157\156\63\61\61\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\155\141\164\160\154\157\164\154\151\142\134\164\162\151\134\137\164\162\151\162\145\146\151\156\145\56\160\171"
#endif
},
    {"matplotlib.tri._tritools", modulecode_matplotlib$tri$_tritools, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\165\163\145\162\163\134\161\167\167\71\63\134\141\160\160\144\141\164\141\134\154\157\143\141\154\134\160\162\157\147\162\141\155\163\134\160\171\164\150\157\156\134\160\171\164\150\157\156\63\61\61\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\155\141\164\160\154\157\164\154\151\142\134\164\162\151\134\137\164\162\151\164\157\157\154\163\56\160\171"
#endif
},
    {"matplotlib.units", modulecode_matplotlib$units, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\165\163\145\162\163\134\161\167\167\71\63\134\141\160\160\144\141\164\141\134\154\157\143\141\154\134\160\162\157\147\162\141\155\163\134\160\171\164\150\157\156\134\160\171\164\150\157\156\63\61\61\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\155\141\164\160\154\157\164\154\151\142\134\165\156\151\164\163\56\160\171"
#endif
},
    {"matplotlib.widgets", modulecode_matplotlib$widgets, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\165\163\145\162\163\134\161\167\167\71\63\134\141\160\160\144\141\164\141\134\154\157\143\141\154\134\160\162\157\147\162\141\155\163\134\160\171\164\150\157\156\134\160\171\164\150\157\156\63\61\61\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\155\141\164\160\154\157\164\154\151\142\134\167\151\144\147\145\164\163\56\160\171"
#endif
},
    {"mpl_toolkits", modulecode_mpl_toolkits, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_PACKAGE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\165\163\145\162\163\134\161\167\167\71\63\134\141\160\160\144\141\164\141\134\154\157\143\141\154\134\160\162\157\147\162\141\155\163\134\160\171\164\150\157\156\134\160\171\164\150\157\156\63\61\61\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\155\160\154\137\164\157\157\154\153\151\164\163\134\137\137\151\156\151\164\137\137\56\160\171"
#endif
},
    {"mpl_toolkits.mplot3d", modulecode_mpl_toolkits$mplot3d, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_PACKAGE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\165\163\145\162\163\134\161\167\167\71\63\134\141\160\160\144\141\164\141\134\154\157\143\141\154\134\160\162\157\147\162\141\155\163\134\160\171\164\150\157\156\134\160\171\164\150\157\156\63\61\61\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\155\160\154\137\164\157\157\154\153\151\164\163\134\155\160\154\157\164\63\144\134\137\137\151\156\151\164\137\137\56\160\171"
#endif
},
    {"mpl_toolkits.mplot3d.art3d", modulecode_mpl_toolkits$mplot3d$art3d, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\165\163\145\162\163\134\161\167\167\71\63\134\141\160\160\144\141\164\141\134\154\157\143\141\154\134\160\162\157\147\162\141\155\163\134\160\171\164\150\157\156\134\160\171\164\150\157\156\63\61\61\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\155\160\154\137\164\157\157\154\153\151\164\163\134\155\160\154\157\164\63\144\134\141\162\164\63\144\56\160\171"
#endif
},
    {"mpl_toolkits.mplot3d.axes3d", modulecode_mpl_toolkits$mplot3d$axes3d, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\165\163\145\162\163\134\161\167\167\71\63\134\141\160\160\144\141\164\141\134\154\157\143\141\154\134\160\162\157\147\162\141\155\163\134\160\171\164\150\157\156\134\160\171\164\150\157\156\63\61\61\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\155\160\154\137\164\157\157\154\153\151\164\163\134\155\160\154\157\164\63\144\134\141\170\145\163\63\144\56\160\171"
#endif
},
    {"mpl_toolkits.mplot3d.axis3d", modulecode_mpl_toolkits$mplot3d$axis3d, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\165\163\145\162\163\134\161\167\167\71\63\134\141\160\160\144\141\164\141\134\154\157\143\141\154\134\160\162\157\147\162\141\155\163\134\160\171\164\150\157\156\134\160\171\164\150\157\156\63\61\61\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\155\160\154\137\164\157\157\154\153\151\164\163\134\155\160\154\157\164\63\144\134\141\170\151\163\63\144\56\160\171"
#endif
},
    {"mpl_toolkits.mplot3d.proj3d", modulecode_mpl_toolkits$mplot3d$proj3d, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\165\163\145\162\163\134\161\167\167\71\63\134\141\160\160\144\141\164\141\134\154\157\143\141\154\134\160\162\157\147\162\141\155\163\134\160\171\164\150\157\156\134\160\171\164\150\157\156\63\61\61\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\155\160\154\137\164\157\157\154\153\151\164\163\134\155\160\154\157\164\63\144\134\160\162\157\152\63\144\56\160\171"
#endif
},
    {"multiprocessing", NULL, 74, 1132, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG | NUITKA_PACKAGE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\161\167\167\71\63\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\61\134\114\151\142\134\155\165\154\164\151\160\162\157\143\145\163\163\151\156\147\134\137\137\151\156\151\164\137\137\56\160\171"
#endif
},
    {"multiprocessing-postLoad", modulecode_multiprocessing$$45$postLoad, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\161\167\167\71\63\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\61\134\114\151\142\134\155\165\154\164\151\160\162\157\143\145\163\163\151\156\147\134\155\165\154\164\151\160\162\157\143\145\163\163\151\156\147\55\160\157\163\164\114\157\141\144\56\160\171"
#endif
},
    {"multiprocessing-preLoad", modulecode_multiprocessing$$45$preLoad, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\161\167\167\71\63\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\61\134\114\151\142\134\155\165\154\164\151\160\162\157\143\145\163\163\151\156\147\134\155\165\154\164\151\160\162\157\143\145\163\163\151\156\147\55\160\162\145\114\157\141\144\56\160\171"
#endif
},
    {"multiprocessing.connection", NULL, 75, 48530, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\161\167\167\71\63\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\61\134\114\151\142\134\155\165\154\164\151\160\162\157\143\145\163\163\151\156\147\134\143\157\156\156\145\143\164\151\157\156\56\160\171"
#endif
},
    {"multiprocessing.context", NULL, 76, 19576, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\161\167\167\71\63\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\61\134\114\151\142\134\155\165\154\164\151\160\162\157\143\145\163\163\151\156\147\134\143\157\156\164\145\170\164\56\160\171"
#endif
},
    {"multiprocessing.dummy", NULL, 77, 6261, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG | NUITKA_PACKAGE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\161\167\167\71\63\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\61\134\114\151\142\134\155\165\154\164\151\160\162\157\143\145\163\163\151\156\147\134\144\165\155\155\171\134\137\137\151\156\151\164\137\137\56\160\171"
#endif
},
    {"multiprocessing.dummy.connection", NULL, 78, 3996, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\161\167\167\71\63\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\61\134\114\151\142\134\155\165\154\164\151\160\162\157\143\145\163\163\151\156\147\134\144\165\155\155\171\134\143\157\156\156\145\143\164\151\157\156\56\160\171"
#endif
},
    {"multiprocessing.forkserver", NULL, 79, 17052, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\161\167\167\71\63\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\61\134\114\151\142\134\155\165\154\164\151\160\162\157\143\145\163\163\151\156\147\134\146\157\162\153\163\145\162\166\145\162\56\160\171"
#endif
},
    {"multiprocessing.heap", NULL, 80, 14705, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\161\167\167\71\63\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\61\134\114\151\142\134\155\165\154\164\151\160\162\157\143\145\163\163\151\156\147\134\150\145\141\160\56\160\171"
#endif
},
    {"multiprocessing.managers", NULL, 81, 73552, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\161\167\167\71\63\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\61\134\114\151\142\134\155\165\154\164\151\160\162\157\143\145\163\163\151\156\147\134\155\141\156\141\147\145\162\163\56\160\171"
#endif
},
    {"multiprocessing.pool", NULL, 82, 47389, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\161\167\167\71\63\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\61\134\114\151\142\134\155\165\154\164\151\160\162\157\143\145\163\163\151\156\147\134\160\157\157\154\56\160\171"
#endif
},
    {"multiprocessing.popen_spawn_win32", NULL, 83, 6519, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\161\167\167\71\63\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\61\134\114\151\142\134\155\165\154\164\151\160\162\157\143\145\163\163\151\156\147\134\160\157\160\145\156\137\163\160\141\167\156\137\167\151\156\63\62\56\160\171"
#endif
},
    {"multiprocessing.process", NULL, 84, 19153, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\161\167\167\71\63\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\61\134\114\151\142\134\155\165\154\164\151\160\162\157\143\145\163\163\151\156\147\134\160\162\157\143\145\163\163\56\160\171"
#endif
},
    {"multiprocessing.queues", NULL, 85, 20023, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\161\167\167\71\63\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\61\134\114\151\142\134\155\165\154\164\151\160\162\157\143\145\163\163\151\156\147\134\161\165\145\165\145\163\56\160\171"
#endif
},
    {"multiprocessing.reduction", NULL, 86, 15004, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\161\167\167\71\63\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\61\134\114\151\142\134\155\165\154\164\151\160\162\157\143\145\163\163\151\156\147\134\162\145\144\165\143\164\151\157\156\56\160\171"
#endif
},
    {"multiprocessing.resource_sharer", NULL, 87, 10002, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\161\167\167\71\63\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\61\134\114\151\142\134\155\165\154\164\151\160\162\157\143\145\163\163\151\156\147\134\162\145\163\157\165\162\143\145\137\163\150\141\162\145\162\56\160\171"
#endif
},
    {"multiprocessing.resource_tracker", NULL, 88, 11432, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\161\167\167\71\63\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\61\134\114\151\142\134\155\165\154\164\151\160\162\157\143\145\163\163\151\156\147\134\162\145\163\157\165\162\143\145\137\164\162\141\143\153\145\162\56\160\171"
#endif
},
    {"multiprocessing.shared_memory", NULL, 89, 24563, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\161\167\167\71\63\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\61\134\114\151\142\134\155\165\154\164\151\160\162\157\143\145\163\163\151\156\147\134\163\150\141\162\145\144\137\155\145\155\157\162\171\56\160\171"
#endif
},
    {"multiprocessing.sharedctypes", NULL, 90, 12087, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\161\167\167\71\63\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\61\134\114\151\142\134\155\165\154\164\151\160\162\157\143\145\163\163\151\156\147\134\163\150\141\162\145\144\143\164\171\160\145\163\56\160\171"
#endif
},
    {"multiprocessing.spawn", NULL, 91, 12546, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\161\167\167\71\63\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\61\134\114\151\142\134\155\165\154\164\151\160\162\157\143\145\163\163\151\156\147\134\163\160\141\167\156\56\160\171"
#endif
},
    {"multiprocessing.synchronize", NULL, 92, 22195, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\161\167\167\71\63\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\61\134\114\151\142\134\155\165\154\164\151\160\162\157\143\145\163\163\151\156\147\134\163\171\156\143\150\162\157\156\151\172\145\56\160\171"
#endif
},
    {"multiprocessing.util", NULL, 93, 20404, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\161\167\167\71\63\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\61\134\114\151\142\134\155\165\154\164\151\160\162\157\143\145\163\163\151\156\147\134\165\164\151\154\56\160\171"
#endif
},
    {"numpy", modulecode_numpy, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_PACKAGE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\165\163\145\162\163\134\161\167\167\71\63\134\141\160\160\144\141\164\141\134\154\157\143\141\154\134\160\162\157\147\162\141\155\163\134\160\171\164\150\157\156\134\160\171\164\150\157\156\63\61\61\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\156\165\155\160\171\134\137\137\151\156\151\164\137\137\56\160\171"
#endif
},
    {"numpy.__config__", modulecode_numpy$__config__, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\165\163\145\162\163\134\161\167\167\71\63\134\141\160\160\144\141\164\141\134\154\157\143\141\154\134\160\162\157\147\162\141\155\163\134\160\171\164\150\157\156\134\160\171\164\150\157\156\63\61\61\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\156\165\155\160\171\134\137\137\143\157\156\146\151\147\137\137\56\160\171"
#endif
},
    {"numpy._distributor_init", modulecode_numpy$_distributor_init, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\165\163\145\162\163\134\161\167\167\71\63\134\141\160\160\144\141\164\141\134\154\157\143\141\154\134\160\162\157\147\162\141\155\163\134\160\171\164\150\157\156\134\160\171\164\150\157\156\63\61\61\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\156\165\155\160\171\134\137\144\151\163\164\162\151\142\165\164\157\162\137\151\156\151\164\56\160\171"
#endif
},
    {"numpy._globals", modulecode_numpy$_globals, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\165\163\145\162\163\134\161\167\167\71\63\134\141\160\160\144\141\164\141\134\154\157\143\141\154\134\160\162\157\147\162\141\155\163\134\160\171\164\150\157\156\134\160\171\164\150\157\156\63\61\61\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\156\165\155\160\171\134\137\147\154\157\142\141\154\163\56\160\171"
#endif
},
    {"numpy._pytesttester", modulecode_numpy$_pytesttester, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\165\163\145\162\163\134\161\167\167\71\63\134\141\160\160\144\141\164\141\134\154\157\143\141\154\134\160\162\157\147\162\141\155\163\134\160\171\164\150\157\156\134\160\171\164\150\157\156\63\61\61\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\156\165\155\160\171\134\137\160\171\164\145\163\164\164\145\163\164\145\162\56\160\171"
#endif
},
    {"numpy._version", modulecode_numpy$_version, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\165\163\145\162\163\134\161\167\167\71\63\134\141\160\160\144\141\164\141\134\154\157\143\141\154\134\160\162\157\147\162\141\155\163\134\160\171\164\150\157\156\134\160\171\164\150\157\156\63\61\61\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\156\165\155\160\171\134\137\166\145\162\163\151\157\156\56\160\171"
#endif
},
    {"numpy.compat", modulecode_numpy$compat, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_PACKAGE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\165\163\145\162\163\134\161\167\167\71\63\134\141\160\160\144\141\164\141\134\154\157\143\141\154\134\160\162\157\147\162\141\155\163\134\160\171\164\150\157\156\134\160\171\164\150\157\156\63\61\61\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\156\165\155\160\171\134\143\157\155\160\141\164\134\137\137\151\156\151\164\137\137\56\160\171"
#endif
},
    {"numpy.compat._inspect", modulecode_numpy$compat$_inspect, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\165\163\145\162\163\134\161\167\167\71\63\134\141\160\160\144\141\164\141\134\154\157\143\141\154\134\160\162\157\147\162\141\155\163\134\160\171\164\150\157\156\134\160\171\164\150\157\156\63\61\61\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\156\165\155\160\171\134\143\157\155\160\141\164\134\137\151\156\163\160\145\143\164\56\160\171"
#endif
},
    {"numpy.compat.py3k", modulecode_numpy$compat$py3k, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\165\163\145\162\163\134\161\167\167\71\63\134\141\160\160\144\141\164\141\134\154\157\143\141\154\134\160\162\157\147\162\141\155\163\134\160\171\164\150\157\156\134\160\171\164\150\157\156\63\61\61\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\156\165\155\160\171\134\143\157\155\160\141\164\134\160\171\63\153\56\160\171"
#endif
},
    {"numpy.core", modulecode_numpy$core, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_PACKAGE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\165\163\145\162\163\134\161\167\167\71\63\134\141\160\160\144\141\164\141\134\154\157\143\141\154\134\160\162\157\147\162\141\155\163\134\160\171\164\150\157\156\134\160\171\164\150\157\156\63\61\61\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\156\165\155\160\171\134\143\157\162\145\134\137\137\151\156\151\164\137\137\56\160\171"
#endif
},
    {"numpy.core._add_newdocs", modulecode_numpy$core$_add_newdocs, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\165\163\145\162\163\134\161\167\167\71\63\134\141\160\160\144\141\164\141\134\154\157\143\141\154\134\160\162\157\147\162\141\155\163\134\160\171\164\150\157\156\134\160\171\164\150\157\156\63\61\61\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\156\165\155\160\171\134\143\157\162\145\134\137\141\144\144\137\156\145\167\144\157\143\163\56\160\171"
#endif
},
    {"numpy.core._add_newdocs_scalars", modulecode_numpy$core$_add_newdocs_scalars, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\165\163\145\162\163\134\161\167\167\71\63\134\141\160\160\144\141\164\141\134\154\157\143\141\154\134\160\162\157\147\162\141\155\163\134\160\171\164\150\157\156\134\160\171\164\150\157\156\63\61\61\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\156\165\155\160\171\134\143\157\162\145\134\137\141\144\144\137\156\145\167\144\157\143\163\137\163\143\141\154\141\162\163\56\160\171"
#endif
},
    {"numpy.core._asarray", modulecode_numpy$core$_asarray, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\165\163\145\162\163\134\161\167\167\71\63\134\141\160\160\144\141\164\141\134\154\157\143\141\154\134\160\162\157\147\162\141\155\163\134\160\171\164\150\157\156\134\160\171\164\150\157\156\63\61\61\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\156\165\155\160\171\134\143\157\162\145\134\137\141\163\141\162\162\141\171\56\160\171"
#endif
},
    {"numpy.core._dtype", modulecode_numpy$core$_dtype, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\165\163\145\162\163\134\161\167\167\71\63\134\141\160\160\144\141\164\141\134\154\157\143\141\154\134\160\162\157\147\162\141\155\163\134\160\171\164\150\157\156\134\160\171\164\150\157\156\63\61\61\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\156\165\155\160\171\134\143\157\162\145\134\137\144\164\171\160\145\56\160\171"
#endif
},
    {"numpy.core._dtype_ctypes", modulecode_numpy$core$_dtype_ctypes, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\165\163\145\162\163\134\161\167\167\71\63\134\141\160\160\144\141\164\141\134\154\157\143\141\154\134\160\162\157\147\162\141\155\163\134\160\171\164\150\157\156\134\160\171\164\150\157\156\63\61\61\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\156\165\155\160\171\134\143\157\162\145\134\137\144\164\171\160\145\137\143\164\171\160\145\163\56\160\171"
#endif
},
    {"numpy.core._exceptions", modulecode_numpy$core$_exceptions, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\165\163\145\162\163\134\161\167\167\71\63\134\141\160\160\144\141\164\141\134\154\157\143\141\154\134\160\162\157\147\162\141\155\163\134\160\171\164\150\157\156\134\160\171\164\150\157\156\63\61\61\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\156\165\155\160\171\134\143\157\162\145\134\137\145\170\143\145\160\164\151\157\156\163\56\160\171"
#endif
},
    {"numpy.core._internal", modulecode_numpy$core$_internal, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\165\163\145\162\163\134\161\167\167\71\63\134\141\160\160\144\141\164\141\134\154\157\143\141\154\134\160\162\157\147\162\141\155\163\134\160\171\164\150\157\156\134\160\171\164\150\157\156\63\61\61\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\156\165\155\160\171\134\143\157\162\145\134\137\151\156\164\145\162\156\141\154\56\160\171"
#endif
},
    {"numpy.core._machar", modulecode_numpy$core$_machar, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\165\163\145\162\163\134\161\167\167\71\63\134\141\160\160\144\141\164\141\134\154\157\143\141\154\134\160\162\157\147\162\141\155\163\134\160\171\164\150\157\156\134\160\171\164\150\157\156\63\61\61\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\156\165\155\160\171\134\143\157\162\145\134\137\155\141\143\150\141\162\56\160\171"
#endif
},
    {"numpy.core._methods", modulecode_numpy$core$_methods, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\165\163\145\162\163\134\161\167\167\71\63\134\141\160\160\144\141\164\141\134\154\157\143\141\154\134\160\162\157\147\162\141\155\163\134\160\171\164\150\157\156\134\160\171\164\150\157\156\63\61\61\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\156\165\155\160\171\134\143\157\162\145\134\137\155\145\164\150\157\144\163\56\160\171"
#endif
},
    {"numpy.core._string_helpers", modulecode_numpy$core$_string_helpers, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\165\163\145\162\163\134\161\167\167\71\63\134\141\160\160\144\141\164\141\134\154\157\143\141\154\134\160\162\157\147\162\141\155\163\134\160\171\164\150\157\156\134\160\171\164\150\157\156\63\61\61\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\156\165\155\160\171\134\143\157\162\145\134\137\163\164\162\151\156\147\137\150\145\154\160\145\162\163\56\160\171"
#endif
},
    {"numpy.core._type_aliases", modulecode_numpy$core$_type_aliases, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\165\163\145\162\163\134\161\167\167\71\63\134\141\160\160\144\141\164\141\134\154\157\143\141\154\134\160\162\157\147\162\141\155\163\134\160\171\164\150\157\156\134\160\171\164\150\157\156\63\61\61\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\156\165\155\160\171\134\143\157\162\145\134\137\164\171\160\145\137\141\154\151\141\163\145\163\56\160\171"
#endif
},
    {"numpy.core._ufunc_config", modulecode_numpy$core$_ufunc_config, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\165\163\145\162\163\134\161\167\167\71\63\134\141\160\160\144\141\164\141\134\154\157\143\141\154\134\160\162\157\147\162\141\155\163\134\160\171\164\150\157\156\134\160\171\164\150\157\156\63\61\61\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\156\165\155\160\171\134\143\157\162\145\134\137\165\146\165\156\143\137\143\157\156\146\151\147\56\160\171"
#endif
},
    {"numpy.core.arrayprint", modulecode_numpy$core$arrayprint, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\165\163\145\162\163\134\161\167\167\71\63\134\141\160\160\144\141\164\141\134\154\157\143\141\154\134\160\162\157\147\162\141\155\163\134\160\171\164\150\157\156\134\160\171\164\150\157\156\63\61\61\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\156\165\155\160\171\134\143\157\162\145\134\141\162\162\141\171\160\162\151\156\164\56\160\171"
#endif
},
    {"numpy.core.defchararray", modulecode_numpy$core$defchararray, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\165\163\145\162\163\134\161\167\167\71\63\134\141\160\160\144\141\164\141\134\154\157\143\141\154\134\160\162\157\147\162\141\155\163\134\160\171\164\150\157\156\134\160\171\164\150\157\156\63\61\61\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\156\165\155\160\171\134\143\157\162\145\134\144\145\146\143\150\141\162\141\162\162\141\171\56\160\171"
#endif
},
    {"numpy.core.einsumfunc", modulecode_numpy$core$einsumfunc, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\165\163\145\162\163\134\161\167\167\71\63\134\141\160\160\144\141\164\141\134\154\157\143\141\154\134\160\162\157\147\162\141\155\163\134\160\171\164\150\157\156\134\160\171\164\150\157\156\63\61\61\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\156\165\155\160\171\134\143\157\162\145\134\145\151\156\163\165\155\146\165\156\143\56\160\171"
#endif
},
    {"numpy.core.fromnumeric", modulecode_numpy$core$fromnumeric, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\165\163\145\162\163\134\161\167\167\71\63\134\141\160\160\144\141\164\141\134\154\157\143\141\154\134\160\162\157\147\162\141\155\163\134\160\171\164\150\157\156\134\160\171\164\150\157\156\63\61\61\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\156\165\155\160\171\134\143\157\162\145\134\146\162\157\155\156\165\155\145\162\151\143\56\160\171"
#endif
},
    {"numpy.core.function_base", modulecode_numpy$core$function_base, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\165\163\145\162\163\134\161\167\167\71\63\134\141\160\160\144\141\164\141\134\154\157\143\141\154\134\160\162\157\147\162\141\155\163\134\160\171\164\150\157\156\134\160\171\164\150\157\156\63\61\61\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\156\165\155\160\171\134\143\157\162\145\134\146\165\156\143\164\151\157\156\137\142\141\163\145\56\160\171"
#endif
},
    {"numpy.core.getlimits", modulecode_numpy$core$getlimits, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\165\163\145\162\163\134\161\167\167\71\63\134\141\160\160\144\141\164\141\134\154\157\143\141\154\134\160\162\157\147\162\141\155\163\134\160\171\164\150\157\156\134\160\171\164\150\157\156\63\61\61\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\156\165\155\160\171\134\143\157\162\145\134\147\145\164\154\151\155\151\164\163\56\160\171"
#endif
},
    {"numpy.core.memmap", modulecode_numpy$core$memmap, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\165\163\145\162\163\134\161\167\167\71\63\134\141\160\160\144\141\164\141\134\154\157\143\141\154\134\160\162\157\147\162\141\155\163\134\160\171\164\150\157\156\134\160\171\164\150\157\156\63\61\61\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\156\165\155\160\171\134\143\157\162\145\134\155\145\155\155\141\160\56\160\171"
#endif
},
    {"numpy.core.multiarray", modulecode_numpy$core$multiarray, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\165\163\145\162\163\134\161\167\167\71\63\134\141\160\160\144\141\164\141\134\154\157\143\141\154\134\160\162\157\147\162\141\155\163\134\160\171\164\150\157\156\134\160\171\164\150\157\156\63\61\61\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\156\165\155\160\171\134\143\157\162\145\134\155\165\154\164\151\141\162\162\141\171\56\160\171"
#endif
},
    {"numpy.core.numeric", modulecode_numpy$core$numeric, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\165\163\145\162\163\134\161\167\167\71\63\134\141\160\160\144\141\164\141\134\154\157\143\141\154\134\160\162\157\147\162\141\155\163\134\160\171\164\150\157\156\134\160\171\164\150\157\156\63\61\61\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\156\165\155\160\171\134\143\157\162\145\134\156\165\155\145\162\151\143\56\160\171"
#endif
},
    {"numpy.core.numerictypes", modulecode_numpy$core$numerictypes, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\165\163\145\162\163\134\161\167\167\71\63\134\141\160\160\144\141\164\141\134\154\157\143\141\154\134\160\162\157\147\162\141\155\163\134\160\171\164\150\157\156\134\160\171\164\150\157\156\63\61\61\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\156\165\155\160\171\134\143\157\162\145\134\156\165\155\145\162\151\143\164\171\160\145\163\56\160\171"
#endif
},
    {"numpy.core.overrides", modulecode_numpy$core$overrides, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\165\163\145\162\163\134\161\167\167\71\63\134\141\160\160\144\141\164\141\134\154\157\143\141\154\134\160\162\157\147\162\141\155\163\134\160\171\164\150\157\156\134\160\171\164\150\157\156\63\61\61\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\156\165\155\160\171\134\143\157\162\145\134\157\166\145\162\162\151\144\145\163\56\160\171"
#endif
},
    {"numpy.core.records", modulecode_numpy$core$records, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\165\163\145\162\163\134\161\167\167\71\63\134\141\160\160\144\141\164\141\134\154\157\143\141\154\134\160\162\157\147\162\141\155\163\134\160\171\164\150\157\156\134\160\171\164\150\157\156\63\61\61\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\156\165\155\160\171\134\143\157\162\145\134\162\145\143\157\162\144\163\56\160\171"
#endif
},
    {"numpy.core.shape_base", modulecode_numpy$core$shape_base, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\165\163\145\162\163\134\161\167\167\71\63\134\141\160\160\144\141\164\141\134\154\157\143\141\154\134\160\162\157\147\162\141\155\163\134\160\171\164\150\157\156\134\160\171\164\150\157\156\63\61\61\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\156\165\155\160\171\134\143\157\162\145\134\163\150\141\160\145\137\142\141\163\145\56\160\171"
#endif
},
    {"numpy.core.umath", modulecode_numpy$core$umath, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\165\163\145\162\163\134\161\167\167\71\63\134\141\160\160\144\141\164\141\134\154\157\143\141\154\134\160\162\157\147\162\141\155\163\134\160\171\164\150\157\156\134\160\171\164\150\157\156\63\61\61\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\156\165\155\160\171\134\143\157\162\145\134\165\155\141\164\150\56\160\171"
#endif
},
    {"numpy.ctypeslib", modulecode_numpy$ctypeslib, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\165\163\145\162\163\134\161\167\167\71\63\134\141\160\160\144\141\164\141\134\154\157\143\141\154\134\160\162\157\147\162\141\155\163\134\160\171\164\150\157\156\134\160\171\164\150\157\156\63\61\61\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\156\165\155\160\171\134\143\164\171\160\145\163\154\151\142\56\160\171"
#endif
},
    {"numpy.fft", modulecode_numpy$fft, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_PACKAGE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\165\163\145\162\163\134\161\167\167\71\63\134\141\160\160\144\141\164\141\134\154\157\143\141\154\134\160\162\157\147\162\141\155\163\134\160\171\164\150\157\156\134\160\171\164\150\157\156\63\61\61\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\156\165\155\160\171\134\146\146\164\134\137\137\151\156\151\164\137\137\56\160\171"
#endif
},
    {"numpy.fft._pocketfft", modulecode_numpy$fft$_pocketfft, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\165\163\145\162\163\134\161\167\167\71\63\134\141\160\160\144\141\164\141\134\154\157\143\141\154\134\160\162\157\147\162\141\155\163\134\160\171\164\150\157\156\134\160\171\164\150\157\156\63\61\61\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\156\165\155\160\171\134\146\146\164\134\137\160\157\143\153\145\164\146\146\164\56\160\171"
#endif
},
    {"numpy.fft.helper", modulecode_numpy$fft$helper, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\165\163\145\162\163\134\161\167\167\71\63\134\141\160\160\144\141\164\141\134\154\157\143\141\154\134\160\162\157\147\162\141\155\163\134\160\171\164\150\157\156\134\160\171\164\150\157\156\63\61\61\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\156\165\155\160\171\134\146\146\164\134\150\145\154\160\145\162\56\160\171"
#endif
},
    {"numpy.lib", modulecode_numpy$lib, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_PACKAGE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\165\163\145\162\163\134\161\167\167\71\63\134\141\160\160\144\141\164\141\134\154\157\143\141\154\134\160\162\157\147\162\141\155\163\134\160\171\164\150\157\156\134\160\171\164\150\157\156\63\61\61\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\156\165\155\160\171\134\154\151\142\134\137\137\151\156\151\164\137\137\56\160\171"
#endif
},
    {"numpy.lib._datasource", modulecode_numpy$lib$_datasource, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\165\163\145\162\163\134\161\167\167\71\63\134\141\160\160\144\141\164\141\134\154\157\143\141\154\134\160\162\157\147\162\141\155\163\134\160\171\164\150\157\156\134\160\171\164\150\157\156\63\61\61\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\156\165\155\160\171\134\154\151\142\134\137\144\141\164\141\163\157\165\162\143\145\56\160\171"
#endif
},
    {"numpy.lib._iotools", modulecode_numpy$lib$_iotools, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\165\163\145\162\163\134\161\167\167\71\63\134\141\160\160\144\141\164\141\134\154\157\143\141\154\134\160\162\157\147\162\141\155\163\134\160\171\164\150\157\156\134\160\171\164\150\157\156\63\61\61\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\156\165\155\160\171\134\154\151\142\134\137\151\157\164\157\157\154\163\56\160\171"
#endif
},
    {"numpy.lib._version", modulecode_numpy$lib$_version, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\165\163\145\162\163\134\161\167\167\71\63\134\141\160\160\144\141\164\141\134\154\157\143\141\154\134\160\162\157\147\162\141\155\163\134\160\171\164\150\157\156\134\160\171\164\150\157\156\63\61\61\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\156\165\155\160\171\134\154\151\142\134\137\166\145\162\163\151\157\156\56\160\171"
#endif
},
    {"numpy.lib.arraypad", modulecode_numpy$lib$arraypad, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\165\163\145\162\163\134\161\167\167\71\63\134\141\160\160\144\141\164\141\134\154\157\143\141\154\134\160\162\157\147\162\141\155\163\134\160\171\164\150\157\156\134\160\171\164\150\157\156\63\61\61\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\156\165\155\160\171\134\154\151\142\134\141\162\162\141\171\160\141\144\56\160\171"
#endif
},
    {"numpy.lib.arraysetops", modulecode_numpy$lib$arraysetops, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\165\163\145\162\163\134\161\167\167\71\63\134\141\160\160\144\141\164\141\134\154\157\143\141\154\134\160\162\157\147\162\141\155\163\134\160\171\164\150\157\156\134\160\171\164\150\157\156\63\61\61\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\156\165\155\160\171\134\154\151\142\134\141\162\162\141\171\163\145\164\157\160\163\56\160\171"
#endif
},
    {"numpy.lib.arrayterator", modulecode_numpy$lib$arrayterator, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\165\163\145\162\163\134\161\167\167\71\63\134\141\160\160\144\141\164\141\134\154\157\143\141\154\134\160\162\157\147\162\141\155\163\134\160\171\164\150\157\156\134\160\171\164\150\157\156\63\61\61\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\156\165\155\160\171\134\154\151\142\134\141\162\162\141\171\164\145\162\141\164\157\162\56\160\171"
#endif
},
    {"numpy.lib.format", modulecode_numpy$lib$format, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\165\163\145\162\163\134\161\167\167\71\63\134\141\160\160\144\141\164\141\134\154\157\143\141\154\134\160\162\157\147\162\141\155\163\134\160\171\164\150\157\156\134\160\171\164\150\157\156\63\61\61\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\156\165\155\160\171\134\154\151\142\134\146\157\162\155\141\164\56\160\171"
#endif
},
    {"numpy.lib.function_base", modulecode_numpy$lib$function_base, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\165\163\145\162\163\134\161\167\167\71\63\134\141\160\160\144\141\164\141\134\154\157\143\141\154\134\160\162\157\147\162\141\155\163\134\160\171\164\150\157\156\134\160\171\164\150\157\156\63\61\61\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\156\165\155\160\171\134\154\151\142\134\146\165\156\143\164\151\157\156\137\142\141\163\145\56\160\171"
#endif
},
    {"numpy.lib.histograms", modulecode_numpy$lib$histograms, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\165\163\145\162\163\134\161\167\167\71\63\134\141\160\160\144\141\164\141\134\154\157\143\141\154\134\160\162\157\147\162\141\155\163\134\160\171\164\150\157\156\134\160\171\164\150\157\156\63\61\61\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\156\165\155\160\171\134\154\151\142\134\150\151\163\164\157\147\162\141\155\163\56\160\171"
#endif
},
    {"numpy.lib.index_tricks", modulecode_numpy$lib$index_tricks, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\165\163\145\162\163\134\161\167\167\71\63\134\141\160\160\144\141\164\141\134\154\157\143\141\154\134\160\162\157\147\162\141\155\163\134\160\171\164\150\157\156\134\160\171\164\150\157\156\63\61\61\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\156\165\155\160\171\134\154\151\142\134\151\156\144\145\170\137\164\162\151\143\153\163\56\160\171"
#endif
},
    {"numpy.lib.mixins", modulecode_numpy$lib$mixins, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\165\163\145\162\163\134\161\167\167\71\63\134\141\160\160\144\141\164\141\134\154\157\143\141\154\134\160\162\157\147\162\141\155\163\134\160\171\164\150\157\156\134\160\171\164\150\157\156\63\61\61\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\156\165\155\160\171\134\154\151\142\134\155\151\170\151\156\163\56\160\171"
#endif
},
    {"numpy.lib.nanfunctions", modulecode_numpy$lib$nanfunctions, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\165\163\145\162\163\134\161\167\167\71\63\134\141\160\160\144\141\164\141\134\154\157\143\141\154\134\160\162\157\147\162\141\155\163\134\160\171\164\150\157\156\134\160\171\164\150\157\156\63\61\61\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\156\165\155\160\171\134\154\151\142\134\156\141\156\146\165\156\143\164\151\157\156\163\56\160\171"
#endif
},
    {"numpy.lib.npyio", modulecode_numpy$lib$npyio, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\165\163\145\162\163\134\161\167\167\71\63\134\141\160\160\144\141\164\141\134\154\157\143\141\154\134\160\162\157\147\162\141\155\163\134\160\171\164\150\157\156\134\160\171\164\150\157\156\63\61\61\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\156\165\155\160\171\134\154\151\142\134\156\160\171\151\157\56\160\171"
#endif
},
    {"numpy.lib.polynomial", modulecode_numpy$lib$polynomial, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\165\163\145\162\163\134\161\167\167\71\63\134\141\160\160\144\141\164\141\134\154\157\143\141\154\134\160\162\157\147\162\141\155\163\134\160\171\164\150\157\156\134\160\171\164\150\157\156\63\61\61\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\156\165\155\160\171\134\154\151\142\134\160\157\154\171\156\157\155\151\141\154\56\160\171"
#endif
},
    {"numpy.lib.scimath", modulecode_numpy$lib$scimath, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\165\163\145\162\163\134\161\167\167\71\63\134\141\160\160\144\141\164\141\134\154\157\143\141\154\134\160\162\157\147\162\141\155\163\134\160\171\164\150\157\156\134\160\171\164\150\157\156\63\61\61\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\156\165\155\160\171\134\154\151\142\134\163\143\151\155\141\164\150\56\160\171"
#endif
},
    {"numpy.lib.shape_base", modulecode_numpy$lib$shape_base, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\165\163\145\162\163\134\161\167\167\71\63\134\141\160\160\144\141\164\141\134\154\157\143\141\154\134\160\162\157\147\162\141\155\163\134\160\171\164\150\157\156\134\160\171\164\150\157\156\63\61\61\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\156\165\155\160\171\134\154\151\142\134\163\150\141\160\145\137\142\141\163\145\56\160\171"
#endif
},
    {"numpy.lib.stride_tricks", modulecode_numpy$lib$stride_tricks, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\165\163\145\162\163\134\161\167\167\71\63\134\141\160\160\144\141\164\141\134\154\157\143\141\154\134\160\162\157\147\162\141\155\163\134\160\171\164\150\157\156\134\160\171\164\150\157\156\63\61\61\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\156\165\155\160\171\134\154\151\142\134\163\164\162\151\144\145\137\164\162\151\143\153\163\56\160\171"
#endif
},
    {"numpy.lib.twodim_base", modulecode_numpy$lib$twodim_base, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\165\163\145\162\163\134\161\167\167\71\63\134\141\160\160\144\141\164\141\134\154\157\143\141\154\134\160\162\157\147\162\141\155\163\134\160\171\164\150\157\156\134\160\171\164\150\157\156\63\61\61\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\156\165\155\160\171\134\154\151\142\134\164\167\157\144\151\155\137\142\141\163\145\56\160\171"
#endif
},
    {"numpy.lib.type_check", modulecode_numpy$lib$type_check, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\165\163\145\162\163\134\161\167\167\71\63\134\141\160\160\144\141\164\141\134\154\157\143\141\154\134\160\162\157\147\162\141\155\163\134\160\171\164\150\157\156\134\160\171\164\150\157\156\63\61\61\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\156\165\155\160\171\134\154\151\142\134\164\171\160\145\137\143\150\145\143\153\56\160\171"
#endif
},
    {"numpy.lib.ufunclike", modulecode_numpy$lib$ufunclike, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\165\163\145\162\163\134\161\167\167\71\63\134\141\160\160\144\141\164\141\134\154\157\143\141\154\134\160\162\157\147\162\141\155\163\134\160\171\164\150\157\156\134\160\171\164\150\157\156\63\61\61\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\156\165\155\160\171\134\154\151\142\134\165\146\165\156\143\154\151\153\145\56\160\171"
#endif
},
    {"numpy.lib.utils", modulecode_numpy$lib$utils, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\165\163\145\162\163\134\161\167\167\71\63\134\141\160\160\144\141\164\141\134\154\157\143\141\154\134\160\162\157\147\162\141\155\163\134\160\171\164\150\157\156\134\160\171\164\150\157\156\63\61\61\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\156\165\155\160\171\134\154\151\142\134\165\164\151\154\163\56\160\171"
#endif
},
    {"numpy.linalg", modulecode_numpy$linalg, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_PACKAGE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\165\163\145\162\163\134\161\167\167\71\63\134\141\160\160\144\141\164\141\134\154\157\143\141\154\134\160\162\157\147\162\141\155\163\134\160\171\164\150\157\156\134\160\171\164\150\157\156\63\61\61\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\156\165\155\160\171\134\154\151\156\141\154\147\134\137\137\151\156\151\164\137\137\56\160\171"
#endif
},
    {"numpy.linalg.linalg", modulecode_numpy$linalg$linalg, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\165\163\145\162\163\134\161\167\167\71\63\134\141\160\160\144\141\164\141\134\154\157\143\141\154\134\160\162\157\147\162\141\155\163\134\160\171\164\150\157\156\134\160\171\164\150\157\156\63\61\61\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\156\165\155\160\171\134\154\151\156\141\154\147\134\154\151\156\141\154\147\56\160\171"
#endif
},
    {"numpy.ma", modulecode_numpy$ma, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_PACKAGE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\165\163\145\162\163\134\161\167\167\71\63\134\141\160\160\144\141\164\141\134\154\157\143\141\154\134\160\162\157\147\162\141\155\163\134\160\171\164\150\157\156\134\160\171\164\150\157\156\63\61\61\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\156\165\155\160\171\134\155\141\134\137\137\151\156\151\164\137\137\56\160\171"
#endif
},
    {"numpy.ma.core", modulecode_numpy$ma$core, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\165\163\145\162\163\134\161\167\167\71\63\134\141\160\160\144\141\164\141\134\154\157\143\141\154\134\160\162\157\147\162\141\155\163\134\160\171\164\150\157\156\134\160\171\164\150\157\156\63\61\61\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\156\165\155\160\171\134\155\141\134\143\157\162\145\56\160\171"
#endif
},
    {"numpy.ma.extras", modulecode_numpy$ma$extras, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\165\163\145\162\163\134\161\167\167\71\63\134\141\160\160\144\141\164\141\134\154\157\143\141\154\134\160\162\157\147\162\141\155\163\134\160\171\164\150\157\156\134\160\171\164\150\157\156\63\61\61\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\156\165\155\160\171\134\155\141\134\145\170\164\162\141\163\56\160\171"
#endif
},
    {"numpy.ma.mrecords", modulecode_numpy$ma$mrecords, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\165\163\145\162\163\134\161\167\167\71\63\134\141\160\160\144\141\164\141\134\154\157\143\141\154\134\160\162\157\147\162\141\155\163\134\160\171\164\150\157\156\134\160\171\164\150\157\156\63\61\61\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\156\165\155\160\171\134\155\141\134\155\162\145\143\157\162\144\163\56\160\171"
#endif
},
    {"numpy.matrixlib", modulecode_numpy$matrixlib, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_PACKAGE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\165\163\145\162\163\134\161\167\167\71\63\134\141\160\160\144\141\164\141\134\154\157\143\141\154\134\160\162\157\147\162\141\155\163\134\160\171\164\150\157\156\134\160\171\164\150\157\156\63\61\61\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\156\165\155\160\171\134\155\141\164\162\151\170\154\151\142\134\137\137\151\156\151\164\137\137\56\160\171"
#endif
},
    {"numpy.matrixlib.defmatrix", modulecode_numpy$matrixlib$defmatrix, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\165\163\145\162\163\134\161\167\167\71\63\134\141\160\160\144\141\164\141\134\154\157\143\141\154\134\160\162\157\147\162\141\155\163\134\160\171\164\150\157\156\134\160\171\164\150\157\156\63\61\61\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\156\165\155\160\171\134\155\141\164\162\151\170\154\151\142\134\144\145\146\155\141\164\162\151\170\56\160\171"
#endif
},
    {"numpy.polynomial", modulecode_numpy$polynomial, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_PACKAGE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\165\163\145\162\163\134\161\167\167\71\63\134\141\160\160\144\141\164\141\134\154\157\143\141\154\134\160\162\157\147\162\141\155\163\134\160\171\164\150\157\156\134\160\171\164\150\157\156\63\61\61\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\156\165\155\160\171\134\160\157\154\171\156\157\155\151\141\154\134\137\137\151\156\151\164\137\137\56\160\171"
#endif
},
    {"numpy.polynomial._polybase", modulecode_numpy$polynomial$_polybase, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\165\163\145\162\163\134\161\167\167\71\63\134\141\160\160\144\141\164\141\134\154\157\143\141\154\134\160\162\157\147\162\141\155\163\134\160\171\164\150\157\156\134\160\171\164\150\157\156\63\61\61\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\156\165\155\160\171\134\160\157\154\171\156\157\155\151\141\154\134\137\160\157\154\171\142\141\163\145\56\160\171"
#endif
},
    {"numpy.polynomial.chebyshev", modulecode_numpy$polynomial$chebyshev, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\165\163\145\162\163\134\161\167\167\71\63\134\141\160\160\144\141\164\141\134\154\157\143\141\154\134\160\162\157\147\162\141\155\163\134\160\171\164\150\157\156\134\160\171\164\150\157\156\63\61\61\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\156\165\155\160\171\134\160\157\154\171\156\157\155\151\141\154\134\143\150\145\142\171\163\150\145\166\56\160\171"
#endif
},
    {"numpy.polynomial.hermite", modulecode_numpy$polynomial$hermite, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\165\163\145\162\163\134\161\167\167\71\63\134\141\160\160\144\141\164\141\134\154\157\143\141\154\134\160\162\157\147\162\141\155\163\134\160\171\164\150\157\156\134\160\171\164\150\157\156\63\61\61\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\156\165\155\160\171\134\160\157\154\171\156\157\155\151\141\154\134\150\145\162\155\151\164\145\56\160\171"
#endif
},
    {"numpy.polynomial.hermite_e", modulecode_numpy$polynomial$hermite_e, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\165\163\145\162\163\134\161\167\167\71\63\134\141\160\160\144\141\164\141\134\154\157\143\141\154\134\160\162\157\147\162\141\155\163\134\160\171\164\150\157\156\134\160\171\164\150\157\156\63\61\61\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\156\165\155\160\171\134\160\157\154\171\156\157\155\151\141\154\134\150\145\162\155\151\164\145\137\145\56\160\171"
#endif
},
    {"numpy.polynomial.laguerre", modulecode_numpy$polynomial$laguerre, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\165\163\145\162\163\134\161\167\167\71\63\134\141\160\160\144\141\164\141\134\154\157\143\141\154\134\160\162\157\147\162\141\155\163\134\160\171\164\150\157\156\134\160\171\164\150\157\156\63\61\61\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\156\165\155\160\171\134\160\157\154\171\156\157\155\151\141\154\134\154\141\147\165\145\162\162\145\56\160\171"
#endif
},
    {"numpy.polynomial.legendre", modulecode_numpy$polynomial$legendre, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\165\163\145\162\163\134\161\167\167\71\63\134\141\160\160\144\141\164\141\134\154\157\143\141\154\134\160\162\157\147\162\141\155\163\134\160\171\164\150\157\156\134\160\171\164\150\157\156\63\61\61\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\156\165\155\160\171\134\160\157\154\171\156\157\155\151\141\154\134\154\145\147\145\156\144\162\145\56\160\171"
#endif
},
    {"numpy.polynomial.polynomial", modulecode_numpy$polynomial$polynomial, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\165\163\145\162\163\134\161\167\167\71\63\134\141\160\160\144\141\164\141\134\154\157\143\141\154\134\160\162\157\147\162\141\155\163\134\160\171\164\150\157\156\134\160\171\164\150\157\156\63\61\61\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\156\165\155\160\171\134\160\157\154\171\156\157\155\151\141\154\134\160\157\154\171\156\157\155\151\141\154\56\160\171"
#endif
},
    {"numpy.polynomial.polyutils", modulecode_numpy$polynomial$polyutils, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\165\163\145\162\163\134\161\167\167\71\63\134\141\160\160\144\141\164\141\134\154\157\143\141\154\134\160\162\157\147\162\141\155\163\134\160\171\164\150\157\156\134\160\171\164\150\157\156\63\61\61\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\156\165\155\160\171\134\160\157\154\171\156\157\155\151\141\154\134\160\157\154\171\165\164\151\154\163\56\160\171"
#endif
},
    {"numpy.random", modulecode_numpy$random, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_PACKAGE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\165\163\145\162\163\134\161\167\167\71\63\134\141\160\160\144\141\164\141\134\154\157\143\141\154\134\160\162\157\147\162\141\155\163\134\160\171\164\150\157\156\134\160\171\164\150\157\156\63\61\61\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\156\165\155\160\171\134\162\141\156\144\157\155\134\137\137\151\156\151\164\137\137\56\160\171"
#endif
},
    {"numpy.random._pickle", modulecode_numpy$random$_pickle, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\165\163\145\162\163\134\161\167\167\71\63\134\141\160\160\144\141\164\141\134\154\157\143\141\154\134\160\162\157\147\162\141\155\163\134\160\171\164\150\157\156\134\160\171\164\150\157\156\63\61\61\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\156\165\155\160\171\134\162\141\156\144\157\155\134\137\160\151\143\153\154\145\56\160\171"
#endif
},
    {"numpy.testing", NULL, 94, 3218, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG | NUITKA_PACKAGE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\165\163\145\162\163\134\161\167\167\71\63\134\141\160\160\144\141\164\141\134\154\157\143\141\154\134\160\162\157\147\162\141\155\163\134\160\171\164\150\157\156\134\160\171\164\150\157\156\63\61\61\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\156\165\155\160\171\134\164\145\163\164\151\156\147\134\137\137\151\156\151\164\137\137\56\160\171"
#endif
},
    {"numpy.version", modulecode_numpy$version, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\165\163\145\162\163\134\161\167\167\71\63\134\141\160\160\144\141\164\141\134\154\157\143\141\154\134\160\162\157\147\162\141\155\163\134\160\171\164\150\157\156\134\160\171\164\150\157\156\63\61\61\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\156\165\155\160\171\134\166\145\162\163\151\157\156\56\160\171"
#endif
},
    {"openpyxl", modulecode_openpyxl, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_PACKAGE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\165\163\145\162\163\134\161\167\167\71\63\134\141\160\160\144\141\164\141\134\154\157\143\141\154\134\160\162\157\147\162\141\155\163\134\160\171\164\150\157\156\134\160\171\164\150\157\156\63\61\61\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\157\160\145\156\160\171\170\154\134\137\137\151\156\151\164\137\137\56\160\171"
#endif
},
    {"openpyxl._constants", modulecode_openpyxl$_constants, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\165\163\145\162\163\134\161\167\167\71\63\134\141\160\160\144\141\164\141\134\154\157\143\141\154\134\160\162\157\147\162\141\155\163\134\160\171\164\150\157\156\134\160\171\164\150\157\156\63\61\61\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\157\160\145\156\160\171\170\154\134\137\143\157\156\163\164\141\156\164\163\56\160\171"
#endif
},
    {"openpyxl.cell", modulecode_openpyxl$cell, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_PACKAGE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\165\163\145\162\163\134\161\167\167\71\63\134\141\160\160\144\141\164\141\134\154\157\143\141\154\134\160\162\157\147\162\141\155\163\134\160\171\164\150\157\156\134\160\171\164\150\157\156\63\61\61\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\157\160\145\156\160\171\170\154\134\143\145\154\154\134\137\137\151\156\151\164\137\137\56\160\171"
#endif
},
    {"openpyxl.cell._writer", modulecode_openpyxl$cell$_writer, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\165\163\145\162\163\134\161\167\167\71\63\134\141\160\160\144\141\164\141\134\154\157\143\141\154\134\160\162\157\147\162\141\155\163\134\160\171\164\150\157\156\134\160\171\164\150\157\156\63\61\61\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\157\160\145\156\160\171\170\154\134\143\145\154\154\134\137\167\162\151\164\145\162\56\160\171"
#endif
},
    {"openpyxl.cell.cell", modulecode_openpyxl$cell$cell, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\165\163\145\162\163\134\161\167\167\71\63\134\141\160\160\144\141\164\141\134\154\157\143\141\154\134\160\162\157\147\162\141\155\163\134\160\171\164\150\157\156\134\160\171\164\150\157\156\63\61\61\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\157\160\145\156\160\171\170\154\134\143\145\154\154\134\143\145\154\154\56\160\171"
#endif
},
    {"openpyxl.cell.read_only", modulecode_openpyxl$cell$read_only, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\165\163\145\162\163\134\161\167\167\71\63\134\141\160\160\144\141\164\141\134\154\157\143\141\154\134\160\162\157\147\162\141\155\163\134\160\171\164\150\157\156\134\160\171\164\150\157\156\63\61\61\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\157\160\145\156\160\171\170\154\134\143\145\154\154\134\162\145\141\144\137\157\156\154\171\56\160\171"
#endif
},
    {"openpyxl.cell.rich_text", modulecode_openpyxl$cell$rich_text, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\165\163\145\162\163\134\161\167\167\71\63\134\141\160\160\144\141\164\141\134\154\157\143\141\154\134\160\162\157\147\162\141\155\163\134\160\171\164\150\157\156\134\160\171\164\150\157\156\63\61\61\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\157\160\145\156\160\171\170\154\134\143\145\154\154\134\162\151\143\150\137\164\145\170\164\56\160\171"
#endif
},
    {"openpyxl.cell.text", modulecode_openpyxl$cell$text, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\165\163\145\162\163\134\161\167\167\71\63\134\141\160\160\144\141\164\141\134\154\157\143\141\154\134\160\162\157\147\162\141\155\163\134\160\171\164\150\157\156\134\160\171\164\150\157\156\63\61\61\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\157\160\145\156\160\171\170\154\134\143\145\154\154\134\164\145\170\164\56\160\171"
#endif
},
    {"openpyxl.chart", modulecode_openpyxl$chart, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_PACKAGE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\165\163\145\162\163\134\161\167\167\71\63\134\141\160\160\144\141\164\141\134\154\157\143\141\154\134\160\162\157\147\162\141\155\163\134\160\171\164\150\157\156\134\160\171\164\150\157\156\63\61\61\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\157\160\145\156\160\171\170\154\134\143\150\141\162\164\134\137\137\151\156\151\164\137\137\56\160\171"
#endif
},
    {"openpyxl.chart._3d", modulecode_openpyxl$chart$_3d, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\165\163\145\162\163\134\161\167\167\71\63\134\141\160\160\144\141\164\141\134\154\157\143\141\154\134\160\162\157\147\162\141\155\163\134\160\171\164\150\157\156\134\160\171\164\150\157\156\63\61\61\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\157\160\145\156\160\171\170\154\134\143\150\141\162\164\134\137\63\144\56\160\171"
#endif
},
    {"openpyxl.chart._chart", modulecode_openpyxl$chart$_chart, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\165\163\145\162\163\134\161\167\167\71\63\134\141\160\160\144\141\164\141\134\154\157\143\141\154\134\160\162\157\147\162\141\155\163\134\160\171\164\150\157\156\134\160\171\164\150\157\156\63\61\61\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\157\160\145\156\160\171\170\154\134\143\150\141\162\164\134\137\143\150\141\162\164\56\160\171"
#endif
},
    {"openpyxl.chart.area_chart", modulecode_openpyxl$chart$area_chart, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\165\163\145\162\163\134\161\167\167\71\63\134\141\160\160\144\141\164\141\134\154\157\143\141\154\134\160\162\157\147\162\141\155\163\134\160\171\164\150\157\156\134\160\171\164\150\157\156\63\61\61\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\157\160\145\156\160\171\170\154\134\143\150\141\162\164\134\141\162\145\141\137\143\150\141\162\164\56\160\171"
#endif
},
    {"openpyxl.chart.axis", modulecode_openpyxl$chart$axis, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\165\163\145\162\163\134\161\167\167\71\63\134\141\160\160\144\141\164\141\134\154\157\143\141\154\134\160\162\157\147\162\141\155\163\134\160\171\164\150\157\156\134\160\171\164\150\157\156\63\61\61\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\157\160\145\156\160\171\170\154\134\143\150\141\162\164\134\141\170\151\163\56\160\171"
#endif
},
    {"openpyxl.chart.bar_chart", modulecode_openpyxl$chart$bar_chart, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\165\163\145\162\163\134\161\167\167\71\63\134\141\160\160\144\141\164\141\134\154\157\143\141\154\134\160\162\157\147\162\141\155\163\134\160\171\164\150\157\156\134\160\171\164\150\157\156\63\61\61\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\157\160\145\156\160\171\170\154\134\143\150\141\162\164\134\142\141\162\137\143\150\141\162\164\56\160\171"
#endif
},
    {"openpyxl.chart.bubble_chart", modulecode_openpyxl$chart$bubble_chart, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\165\163\145\162\163\134\161\167\167\71\63\134\141\160\160\144\141\164\141\134\154\157\143\141\154\134\160\162\157\147\162\141\155\163\134\160\171\164\150\157\156\134\160\171\164\150\157\156\63\61\61\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\157\160\145\156\160\171\170\154\134\143\150\141\162\164\134\142\165\142\142\154\145\137\143\150\141\162\164\56\160\171"
#endif
},
    {"openpyxl.chart.chartspace", modulecode_openpyxl$chart$chartspace, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\165\163\145\162\163\134\161\167\167\71\63\134\141\160\160\144\141\164\141\134\154\157\143\141\154\134\160\162\157\147\162\141\155\163\134\160\171\164\150\157\156\134\160\171\164\150\157\156\63\61\61\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\157\160\145\156\160\171\170\154\134\143\150\141\162\164\134\143\150\141\162\164\163\160\141\143\145\56\160\171"
#endif
},
    {"openpyxl.chart.data_source", modulecode_openpyxl$chart$data_source, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\165\163\145\162\163\134\161\167\167\71\63\134\141\160\160\144\141\164\141\134\154\157\143\141\154\134\160\162\157\147\162\141\155\163\134\160\171\164\150\157\156\134\160\171\164\150\157\156\63\61\61\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\157\160\145\156\160\171\170\154\134\143\150\141\162\164\134\144\141\164\141\137\163\157\165\162\143\145\56\160\171"
#endif
},
    {"openpyxl.chart.descriptors", modulecode_openpyxl$chart$descriptors, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\165\163\145\162\163\134\161\167\167\71\63\134\141\160\160\144\141\164\141\134\154\157\143\141\154\134\160\162\157\147\162\141\155\163\134\160\171\164\150\157\156\134\160\171\164\150\157\156\63\61\61\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\157\160\145\156\160\171\170\154\134\143\150\141\162\164\134\144\145\163\143\162\151\160\164\157\162\163\56\160\171"
#endif
},
    {"openpyxl.chart.error_bar", modulecode_openpyxl$chart$error_bar, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\165\163\145\162\163\134\161\167\167\71\63\134\141\160\160\144\141\164\141\134\154\157\143\141\154\134\160\162\157\147\162\141\155\163\134\160\171\164\150\157\156\134\160\171\164\150\157\156\63\61\61\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\157\160\145\156\160\171\170\154\134\143\150\141\162\164\134\145\162\162\157\162\137\142\141\162\56\160\171"
#endif
},
    {"openpyxl.chart.label", modulecode_openpyxl$chart$label, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\165\163\145\162\163\134\161\167\167\71\63\134\141\160\160\144\141\164\141\134\154\157\143\141\154\134\160\162\157\147\162\141\155\163\134\160\171\164\150\157\156\134\160\171\164\150\157\156\63\61\61\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\157\160\145\156\160\171\170\154\134\143\150\141\162\164\134\154\141\142\145\154\56\160\171"
#endif
},
    {"openpyxl.chart.layout", modulecode_openpyxl$chart$layout, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\165\163\145\162\163\134\161\167\167\71\63\134\141\160\160\144\141\164\141\134\154\157\143\141\154\134\160\162\157\147\162\141\155\163\134\160\171\164\150\157\156\134\160\171\164\150\157\156\63\61\61\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\157\160\145\156\160\171\170\154\134\143\150\141\162\164\134\154\141\171\157\165\164\56\160\171"
#endif
},
    {"openpyxl.chart.legend", modulecode_openpyxl$chart$legend, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\165\163\145\162\163\134\161\167\167\71\63\134\141\160\160\144\141\164\141\134\154\157\143\141\154\134\160\162\157\147\162\141\155\163\134\160\171\164\150\157\156\134\160\171\164\150\157\156\63\61\61\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\157\160\145\156\160\171\170\154\134\143\150\141\162\164\134\154\145\147\145\156\144\56\160\171"
#endif
},
    {"openpyxl.chart.line_chart", modulecode_openpyxl$chart$line_chart, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\165\163\145\162\163\134\161\167\167\71\63\134\141\160\160\144\141\164\141\134\154\157\143\141\154\134\160\162\157\147\162\141\155\163\134\160\171\164\150\157\156\134\160\171\164\150\157\156\63\61\61\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\157\160\145\156\160\171\170\154\134\143\150\141\162\164\134\154\151\156\145\137\143\150\141\162\164\56\160\171"
#endif
},
    {"openpyxl.chart.marker", modulecode_openpyxl$chart$marker, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\165\163\145\162\163\134\161\167\167\71\63\134\141\160\160\144\141\164\141\134\154\157\143\141\154\134\160\162\157\147\162\141\155\163\134\160\171\164\150\157\156\134\160\171\164\150\157\156\63\61\61\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\157\160\145\156\160\171\170\154\134\143\150\141\162\164\134\155\141\162\153\145\162\56\160\171"
#endif
},
    {"openpyxl.chart.picture", modulecode_openpyxl$chart$picture, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\165\163\145\162\163\134\161\167\167\71\63\134\141\160\160\144\141\164\141\134\154\157\143\141\154\134\160\162\157\147\162\141\155\163\134\160\171\164\150\157\156\134\160\171\164\150\157\156\63\61\61\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\157\160\145\156\160\171\170\154\134\143\150\141\162\164\134\160\151\143\164\165\162\145\56\160\171"
#endif
},
    {"openpyxl.chart.pie_chart", modulecode_openpyxl$chart$pie_chart, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\165\163\145\162\163\134\161\167\167\71\63\134\141\160\160\144\141\164\141\134\154\157\143\141\154\134\160\162\157\147\162\141\155\163\134\160\171\164\150\157\156\134\160\171\164\150\157\156\63\61\61\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\157\160\145\156\160\171\170\154\134\143\150\141\162\164\134\160\151\145\137\143\150\141\162\164\56\160\171"
#endif
},
    {"openpyxl.chart.pivot", modulecode_openpyxl$chart$pivot, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\165\163\145\162\163\134\161\167\167\71\63\134\141\160\160\144\141\164\141\134\154\157\143\141\154\134\160\162\157\147\162\141\155\163\134\160\171\164\150\157\156\134\160\171\164\150\157\156\63\61\61\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\157\160\145\156\160\171\170\154\134\143\150\141\162\164\134\160\151\166\157\164\56\160\171"
#endif
},
    {"openpyxl.chart.plotarea", modulecode_openpyxl$chart$plotarea, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\165\163\145\162\163\134\161\167\167\71\63\134\141\160\160\144\141\164\141\134\154\157\143\141\154\134\160\162\157\147\162\141\155\163\134\160\171\164\150\157\156\134\160\171\164\150\157\156\63\61\61\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\157\160\145\156\160\171\170\154\134\143\150\141\162\164\134\160\154\157\164\141\162\145\141\56\160\171"
#endif
},
    {"openpyxl.chart.print_settings", modulecode_openpyxl$chart$print_settings, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\165\163\145\162\163\134\161\167\167\71\63\134\141\160\160\144\141\164\141\134\154\157\143\141\154\134\160\162\157\147\162\141\155\163\134\160\171\164\150\157\156\134\160\171\164\150\157\156\63\61\61\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\157\160\145\156\160\171\170\154\134\143\150\141\162\164\134\160\162\151\156\164\137\163\145\164\164\151\156\147\163\56\160\171"
#endif
},
    {"openpyxl.chart.radar_chart", modulecode_openpyxl$chart$radar_chart, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\165\163\145\162\163\134\161\167\167\71\63\134\141\160\160\144\141\164\141\134\154\157\143\141\154\134\160\162\157\147\162\141\155\163\134\160\171\164\150\157\156\134\160\171\164\150\157\156\63\61\61\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\157\160\145\156\160\171\170\154\134\143\150\141\162\164\134\162\141\144\141\162\137\143\150\141\162\164\56\160\171"
#endif
},
    {"openpyxl.chart.reader", modulecode_openpyxl$chart$reader, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\165\163\145\162\163\134\161\167\167\71\63\134\141\160\160\144\141\164\141\134\154\157\143\141\154\134\160\162\157\147\162\141\155\163\134\160\171\164\150\157\156\134\160\171\164\150\157\156\63\61\61\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\157\160\145\156\160\171\170\154\134\143\150\141\162\164\134\162\145\141\144\145\162\56\160\171"
#endif
},
    {"openpyxl.chart.reference", modulecode_openpyxl$chart$reference, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\165\163\145\162\163\134\161\167\167\71\63\134\141\160\160\144\141\164\141\134\154\157\143\141\154\134\160\162\157\147\162\141\155\163\134\160\171\164\150\157\156\134\160\171\164\150\157\156\63\61\61\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\157\160\145\156\160\171\170\154\134\143\150\141\162\164\134\162\145\146\145\162\145\156\143\145\56\160\171"
#endif
},
    {"openpyxl.chart.scatter_chart", modulecode_openpyxl$chart$scatter_chart, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\165\163\145\162\163\134\161\167\167\71\63\134\141\160\160\144\141\164\141\134\154\157\143\141\154\134\160\162\157\147\162\141\155\163\134\160\171\164\150\157\156\134\160\171\164\150\157\156\63\61\61\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\157\160\145\156\160\171\170\154\134\143\150\141\162\164\134\163\143\141\164\164\145\162\137\143\150\141\162\164\56\160\171"
#endif
},
    {"openpyxl.chart.series", modulecode_openpyxl$chart$series, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\165\163\145\162\163\134\161\167\167\71\63\134\141\160\160\144\141\164\141\134\154\157\143\141\154\134\160\162\157\147\162\141\155\163\134\160\171\164\150\157\156\134\160\171\164\150\157\156\63\61\61\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\157\160\145\156\160\171\170\154\134\143\150\141\162\164\134\163\145\162\151\145\163\56\160\171"
#endif
},
    {"openpyxl.chart.series_factory", modulecode_openpyxl$chart$series_factory, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\165\163\145\162\163\134\161\167\167\71\63\134\141\160\160\144\141\164\141\134\154\157\143\141\154\134\160\162\157\147\162\141\155\163\134\160\171\164\150\157\156\134\160\171\164\150\157\156\63\61\61\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\157\160\145\156\160\171\170\154\134\143\150\141\162\164\134\163\145\162\151\145\163\137\146\141\143\164\157\162\171\56\160\171"
#endif
},
    {"openpyxl.chart.shapes", modulecode_openpyxl$chart$shapes, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\165\163\145\162\163\134\161\167\167\71\63\134\141\160\160\144\141\164\141\134\154\157\143\141\154\134\160\162\157\147\162\141\155\163\134\160\171\164\150\157\156\134\160\171\164\150\157\156\63\61\61\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\157\160\145\156\160\171\170\154\134\143\150\141\162\164\134\163\150\141\160\145\163\56\160\171"
#endif
},
    {"openpyxl.chart.stock_chart", modulecode_openpyxl$chart$stock_chart, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\165\163\145\162\163\134\161\167\167\71\63\134\141\160\160\144\141\164\141\134\154\157\143\141\154\134\160\162\157\147\162\141\155\163\134\160\171\164\150\157\156\134\160\171\164\150\157\156\63\61\61\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\157\160\145\156\160\171\170\154\134\143\150\141\162\164\134\163\164\157\143\153\137\143\150\141\162\164\56\160\171"
#endif
},
    {"openpyxl.chart.surface_chart", modulecode_openpyxl$chart$surface_chart, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\165\163\145\162\163\134\161\167\167\71\63\134\141\160\160\144\141\164\141\134\154\157\143\141\154\134\160\162\157\147\162\141\155\163\134\160\171\164\150\157\156\134\160\171\164\150\157\156\63\61\61\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\157\160\145\156\160\171\170\154\134\143\150\141\162\164\134\163\165\162\146\141\143\145\137\143\150\141\162\164\56\160\171"
#endif
},
    {"openpyxl.chart.text", modulecode_openpyxl$chart$text, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\165\163\145\162\163\134\161\167\167\71\63\134\141\160\160\144\141\164\141\134\154\157\143\141\154\134\160\162\157\147\162\141\155\163\134\160\171\164\150\157\156\134\160\171\164\150\157\156\63\61\61\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\157\160\145\156\160\171\170\154\134\143\150\141\162\164\134\164\145\170\164\56\160\171"
#endif
},
    {"openpyxl.chart.title", modulecode_openpyxl$chart$title, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\165\163\145\162\163\134\161\167\167\71\63\134\141\160\160\144\141\164\141\134\154\157\143\141\154\134\160\162\157\147\162\141\155\163\134\160\171\164\150\157\156\134\160\171\164\150\157\156\63\61\61\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\157\160\145\156\160\171\170\154\134\143\150\141\162\164\134\164\151\164\154\145\56\160\171"
#endif
},
    {"openpyxl.chart.trendline", modulecode_openpyxl$chart$trendline, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\165\163\145\162\163\134\161\167\167\71\63\134\141\160\160\144\141\164\141\134\154\157\143\141\154\134\160\162\157\147\162\141\155\163\134\160\171\164\150\157\156\134\160\171\164\150\157\156\63\61\61\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\157\160\145\156\160\171\170\154\134\143\150\141\162\164\134\164\162\145\156\144\154\151\156\145\56\160\171"
#endif
},
    {"openpyxl.chart.updown_bars", modulecode_openpyxl$chart$updown_bars, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\165\163\145\162\163\134\161\167\167\71\63\134\141\160\160\144\141\164\141\134\154\157\143\141\154\134\160\162\157\147\162\141\155\163\134\160\171\164\150\157\156\134\160\171\164\150\157\156\63\61\61\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\157\160\145\156\160\171\170\154\134\143\150\141\162\164\134\165\160\144\157\167\156\137\142\141\162\163\56\160\171"
#endif
},
    {"openpyxl.chartsheet", modulecode_openpyxl$chartsheet, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_PACKAGE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\165\163\145\162\163\134\161\167\167\71\63\134\141\160\160\144\141\164\141\134\154\157\143\141\154\134\160\162\157\147\162\141\155\163\134\160\171\164\150\157\156\134\160\171\164\150\157\156\63\61\61\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\157\160\145\156\160\171\170\154\134\143\150\141\162\164\163\150\145\145\164\134\137\137\151\156\151\164\137\137\56\160\171"
#endif
},
    {"openpyxl.chartsheet.chartsheet", modulecode_openpyxl$chartsheet$chartsheet, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\165\163\145\162\163\134\161\167\167\71\63\134\141\160\160\144\141\164\141\134\154\157\143\141\154\134\160\162\157\147\162\141\155\163\134\160\171\164\150\157\156\134\160\171\164\150\157\156\63\61\61\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\157\160\145\156\160\171\170\154\134\143\150\141\162\164\163\150\145\145\164\134\143\150\141\162\164\163\150\145\145\164\56\160\171"
#endif
},
    {"openpyxl.chartsheet.custom", modulecode_openpyxl$chartsheet$custom, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\165\163\145\162\163\134\161\167\167\71\63\134\141\160\160\144\141\164\141\134\154\157\143\141\154\134\160\162\157\147\162\141\155\163\134\160\171\164\150\157\156\134\160\171\164\150\157\156\63\61\61\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\157\160\145\156\160\171\170\154\134\143\150\141\162\164\163\150\145\145\164\134\143\165\163\164\157\155\56\160\171"
#endif
},
    {"openpyxl.chartsheet.properties", modulecode_openpyxl$chartsheet$properties, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\165\163\145\162\163\134\161\167\167\71\63\134\141\160\160\144\141\164\141\134\154\157\143\141\154\134\160\162\157\147\162\141\155\163\134\160\171\164\150\157\156\134\160\171\164\150\157\156\63\61\61\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\157\160\145\156\160\171\170\154\134\143\150\141\162\164\163\150\145\145\164\134\160\162\157\160\145\162\164\151\145\163\56\160\171"
#endif
},
    {"openpyxl.chartsheet.protection", modulecode_openpyxl$chartsheet$protection, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\165\163\145\162\163\134\161\167\167\71\63\134\141\160\160\144\141\164\141\134\154\157\143\141\154\134\160\162\157\147\162\141\155\163\134\160\171\164\150\157\156\134\160\171\164\150\157\156\63\61\61\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\157\160\145\156\160\171\170\154\134\143\150\141\162\164\163\150\145\145\164\134\160\162\157\164\145\143\164\151\157\156\56\160\171"
#endif
},
    {"openpyxl.chartsheet.publish", modulecode_openpyxl$chartsheet$publish, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\165\163\145\162\163\134\161\167\167\71\63\134\141\160\160\144\141\164\141\134\154\157\143\141\154\134\160\162\157\147\162\141\155\163\134\160\171\164\150\157\156\134\160\171\164\150\157\156\63\61\61\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\157\160\145\156\160\171\170\154\134\143\150\141\162\164\163\150\145\145\164\134\160\165\142\154\151\163\150\56\160\171"
#endif
},
    {"openpyxl.chartsheet.relation", modulecode_openpyxl$chartsheet$relation, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\165\163\145\162\163\134\161\167\167\71\63\134\141\160\160\144\141\164\141\134\154\157\143\141\154\134\160\162\157\147\162\141\155\163\134\160\171\164\150\157\156\134\160\171\164\150\157\156\63\61\61\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\157\160\145\156\160\171\170\154\134\143\150\141\162\164\163\150\145\145\164\134\162\145\154\141\164\151\157\156\56\160\171"
#endif
},
    {"openpyxl.chartsheet.views", modulecode_openpyxl$chartsheet$views, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\165\163\145\162\163\134\161\167\167\71\63\134\141\160\160\144\141\164\141\134\154\157\143\141\154\134\160\162\157\147\162\141\155\163\134\160\171\164\150\157\156\134\160\171\164\150\157\156\63\61\61\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\157\160\145\156\160\171\170\154\134\143\150\141\162\164\163\150\145\145\164\134\166\151\145\167\163\56\160\171"
#endif
},
    {"openpyxl.comments", modulecode_openpyxl$comments, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_PACKAGE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\165\163\145\162\163\134\161\167\167\71\63\134\141\160\160\144\141\164\141\134\154\157\143\141\154\134\160\162\157\147\162\141\155\163\134\160\171\164\150\157\156\134\160\171\164\150\157\156\63\61\61\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\157\160\145\156\160\171\170\154\134\143\157\155\155\145\156\164\163\134\137\137\151\156\151\164\137\137\56\160\171"
#endif
},
    {"openpyxl.comments.author", modulecode_openpyxl$comments$author, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\165\163\145\162\163\134\161\167\167\71\63\134\141\160\160\144\141\164\141\134\154\157\143\141\154\134\160\162\157\147\162\141\155\163\134\160\171\164\150\157\156\134\160\171\164\150\157\156\63\61\61\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\157\160\145\156\160\171\170\154\134\143\157\155\155\145\156\164\163\134\141\165\164\150\157\162\56\160\171"
#endif
},
    {"openpyxl.comments.comment_sheet", modulecode_openpyxl$comments$comment_sheet, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\165\163\145\162\163\134\161\167\167\71\63\134\141\160\160\144\141\164\141\134\154\157\143\141\154\134\160\162\157\147\162\141\155\163\134\160\171\164\150\157\156\134\160\171\164\150\157\156\63\61\61\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\157\160\145\156\160\171\170\154\134\143\157\155\155\145\156\164\163\134\143\157\155\155\145\156\164\137\163\150\145\145\164\56\160\171"
#endif
},
    {"openpyxl.comments.comments", modulecode_openpyxl$comments$comments, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\165\163\145\162\163\134\161\167\167\71\63\134\141\160\160\144\141\164\141\134\154\157\143\141\154\134\160\162\157\147\162\141\155\163\134\160\171\164\150\157\156\134\160\171\164\150\157\156\63\61\61\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\157\160\145\156\160\171\170\154\134\143\157\155\155\145\156\164\163\134\143\157\155\155\145\156\164\163\56\160\171"
#endif
},
    {"openpyxl.comments.shape_writer", modulecode_openpyxl$comments$shape_writer, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\165\163\145\162\163\134\161\167\167\71\63\134\141\160\160\144\141\164\141\134\154\157\143\141\154\134\160\162\157\147\162\141\155\163\134\160\171\164\150\157\156\134\160\171\164\150\157\156\63\61\61\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\157\160\145\156\160\171\170\154\134\143\157\155\155\145\156\164\163\134\163\150\141\160\145\137\167\162\151\164\145\162\56\160\171"
#endif
},
    {"openpyxl.compat", modulecode_openpyxl$compat, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_PACKAGE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\165\163\145\162\163\134\161\167\167\71\63\134\141\160\160\144\141\164\141\134\154\157\143\141\154\134\160\162\157\147\162\141\155\163\134\160\171\164\150\157\156\134\160\171\164\150\157\156\63\61\61\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\157\160\145\156\160\171\170\154\134\143\157\155\160\141\164\134\137\137\151\156\151\164\137\137\56\160\171"
#endif
},
    {"openpyxl.compat.numbers", modulecode_openpyxl$compat$numbers, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\165\163\145\162\163\134\161\167\167\71\63\134\141\160\160\144\141\164\141\134\154\157\143\141\154\134\160\162\157\147\162\141\155\163\134\160\171\164\150\157\156\134\160\171\164\150\157\156\63\61\61\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\157\160\145\156\160\171\170\154\134\143\157\155\160\141\164\134\156\165\155\142\145\162\163\56\160\171"
#endif
},
    {"openpyxl.compat.strings", modulecode_openpyxl$compat$strings, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\165\163\145\162\163\134\161\167\167\71\63\134\141\160\160\144\141\164\141\134\154\157\143\141\154\134\160\162\157\147\162\141\155\163\134\160\171\164\150\157\156\134\160\171\164\150\157\156\63\61\61\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\157\160\145\156\160\171\170\154\134\143\157\155\160\141\164\134\163\164\162\151\156\147\163\56\160\171"
#endif
},
    {"openpyxl.descriptors", modulecode_openpyxl$descriptors, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_PACKAGE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\165\163\145\162\163\134\161\167\167\71\63\134\141\160\160\144\141\164\141\134\154\157\143\141\154\134\160\162\157\147\162\141\155\163\134\160\171\164\150\157\156\134\160\171\164\150\157\156\63\61\61\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\157\160\145\156\160\171\170\154\134\144\145\163\143\162\151\160\164\157\162\163\134\137\137\151\156\151\164\137\137\56\160\171"
#endif
},
    {"openpyxl.descriptors.base", modulecode_openpyxl$descriptors$base, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\165\163\145\162\163\134\161\167\167\71\63\134\141\160\160\144\141\164\141\134\154\157\143\141\154\134\160\162\157\147\162\141\155\163\134\160\171\164\150\157\156\134\160\171\164\150\157\156\63\61\61\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\157\160\145\156\160\171\170\154\134\144\145\163\143\162\151\160\164\157\162\163\134\142\141\163\145\56\160\171"
#endif
},
    {"openpyxl.descriptors.excel", modulecode_openpyxl$descriptors$excel, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\165\163\145\162\163\134\161\167\167\71\63\134\141\160\160\144\141\164\141\134\154\157\143\141\154\134\160\162\157\147\162\141\155\163\134\160\171\164\150\157\156\134\160\171\164\150\157\156\63\61\61\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\157\160\145\156\160\171\170\154\134\144\145\163\143\162\151\160\164\157\162\163\134\145\170\143\145\154\56\160\171"
#endif
},
    {"openpyxl.descriptors.namespace", modulecode_openpyxl$descriptors$namespace, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\165\163\145\162\163\134\161\167\167\71\63\134\141\160\160\144\141\164\141\134\154\157\143\141\154\134\160\162\157\147\162\141\155\163\134\160\171\164\150\157\156\134\160\171\164\150\157\156\63\61\61\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\157\160\145\156\160\171\170\154\134\144\145\163\143\162\151\160\164\157\162\163\134\156\141\155\145\163\160\141\143\145\56\160\171"
#endif
},
    {"openpyxl.descriptors.nested", modulecode_openpyxl$descriptors$nested, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\165\163\145\162\163\134\161\167\167\71\63\134\141\160\160\144\141\164\141\134\154\157\143\141\154\134\160\162\157\147\162\141\155\163\134\160\171\164\150\157\156\134\160\171\164\150\157\156\63\61\61\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\157\160\145\156\160\171\170\154\134\144\145\163\143\162\151\160\164\157\162\163\134\156\145\163\164\145\144\56\160\171"
#endif
},
    {"openpyxl.descriptors.sequence", modulecode_openpyxl$descriptors$sequence, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\165\163\145\162\163\134\161\167\167\71\63\134\141\160\160\144\141\164\141\134\154\157\143\141\154\134\160\162\157\147\162\141\155\163\134\160\171\164\150\157\156\134\160\171\164\150\157\156\63\61\61\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\157\160\145\156\160\171\170\154\134\144\145\163\143\162\151\160\164\157\162\163\134\163\145\161\165\145\156\143\145\56\160\171"
#endif
},
    {"openpyxl.descriptors.serialisable", modulecode_openpyxl$descriptors$serialisable, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\165\163\145\162\163\134\161\167\167\71\63\134\141\160\160\144\141\164\141\134\154\157\143\141\154\134\160\162\157\147\162\141\155\163\134\160\171\164\150\157\156\134\160\171\164\150\157\156\63\61\61\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\157\160\145\156\160\171\170\154\134\144\145\163\143\162\151\160\164\157\162\163\134\163\145\162\151\141\154\151\163\141\142\154\145\56\160\171"
#endif
},
    {"openpyxl.drawing", modulecode_openpyxl$drawing, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_PACKAGE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\165\163\145\162\163\134\161\167\167\71\63\134\141\160\160\144\141\164\141\134\154\157\143\141\154\134\160\162\157\147\162\141\155\163\134\160\171\164\150\157\156\134\160\171\164\150\157\156\63\61\61\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\157\160\145\156\160\171\170\154\134\144\162\141\167\151\156\147\134\137\137\151\156\151\164\137\137\56\160\171"
#endif
},
    {"openpyxl.drawing.colors", modulecode_openpyxl$drawing$colors, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\165\163\145\162\163\134\161\167\167\71\63\134\141\160\160\144\141\164\141\134\154\157\143\141\154\134\160\162\157\147\162\141\155\163\134\160\171\164\150\157\156\134\160\171\164\150\157\156\63\61\61\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\157\160\145\156\160\171\170\154\134\144\162\141\167\151\156\147\134\143\157\154\157\162\163\56\160\171"
#endif
},
    {"openpyxl.drawing.connector", modulecode_openpyxl$drawing$connector, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\165\163\145\162\163\134\161\167\167\71\63\134\141\160\160\144\141\164\141\134\154\157\143\141\154\134\160\162\157\147\162\141\155\163\134\160\171\164\150\157\156\134\160\171\164\150\157\156\63\61\61\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\157\160\145\156\160\171\170\154\134\144\162\141\167\151\156\147\134\143\157\156\156\145\143\164\157\162\56\160\171"
#endif
},
    {"openpyxl.drawing.drawing", modulecode_openpyxl$drawing$drawing, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\165\163\145\162\163\134\161\167\167\71\63\134\141\160\160\144\141\164\141\134\154\157\143\141\154\134\160\162\157\147\162\141\155\163\134\160\171\164\150\157\156\134\160\171\164\150\157\156\63\61\61\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\157\160\145\156\160\171\170\154\134\144\162\141\167\151\156\147\134\144\162\141\167\151\156\147\56\160\171"
#endif
},
    {"openpyxl.drawing.effect", modulecode_openpyxl$drawing$effect, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\165\163\145\162\163\134\161\167\167\71\63\134\141\160\160\144\141\164\141\134\154\157\143\141\154\134\160\162\157\147\162\141\155\163\134\160\171\164\150\157\156\134\160\171\164\150\157\156\63\61\61\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\157\160\145\156\160\171\170\154\134\144\162\141\167\151\156\147\134\145\146\146\145\143\164\56\160\171"
#endif
},
    {"openpyxl.drawing.fill", modulecode_openpyxl$drawing$fill, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\165\163\145\162\163\134\161\167\167\71\63\134\141\160\160\144\141\164\141\134\154\157\143\141\154\134\160\162\157\147\162\141\155\163\134\160\171\164\150\157\156\134\160\171\164\150\157\156\63\61\61\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\157\160\145\156\160\171\170\154\134\144\162\141\167\151\156\147\134\146\151\154\154\56\160\171"
#endif
},
    {"openpyxl.drawing.geometry", modulecode_openpyxl$drawing$geometry, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\165\163\145\162\163\134\161\167\167\71\63\134\141\160\160\144\141\164\141\134\154\157\143\141\154\134\160\162\157\147\162\141\155\163\134\160\171\164\150\157\156\134\160\171\164\150\157\156\63\61\61\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\157\160\145\156\160\171\170\154\134\144\162\141\167\151\156\147\134\147\145\157\155\145\164\162\171\56\160\171"
#endif
},
    {"openpyxl.drawing.graphic", modulecode_openpyxl$drawing$graphic, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\165\163\145\162\163\134\161\167\167\71\63\134\141\160\160\144\141\164\141\134\154\157\143\141\154\134\160\162\157\147\162\141\155\163\134\160\171\164\150\157\156\134\160\171\164\150\157\156\63\61\61\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\157\160\145\156\160\171\170\154\134\144\162\141\167\151\156\147\134\147\162\141\160\150\151\143\56\160\171"
#endif
},
    {"openpyxl.drawing.image", modulecode_openpyxl$drawing$image, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\165\163\145\162\163\134\161\167\167\71\63\134\141\160\160\144\141\164\141\134\154\157\143\141\154\134\160\162\157\147\162\141\155\163\134\160\171\164\150\157\156\134\160\171\164\150\157\156\63\61\61\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\157\160\145\156\160\171\170\154\134\144\162\141\167\151\156\147\134\151\155\141\147\145\56\160\171"
#endif
},
    {"openpyxl.drawing.line", modulecode_openpyxl$drawing$line, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\165\163\145\162\163\134\161\167\167\71\63\134\141\160\160\144\141\164\141\134\154\157\143\141\154\134\160\162\157\147\162\141\155\163\134\160\171\164\150\157\156\134\160\171\164\150\157\156\63\61\61\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\157\160\145\156\160\171\170\154\134\144\162\141\167\151\156\147\134\154\151\156\145\56\160\171"
#endif
},
    {"openpyxl.drawing.picture", modulecode_openpyxl$drawing$picture, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\165\163\145\162\163\134\161\167\167\71\63\134\141\160\160\144\141\164\141\134\154\157\143\141\154\134\160\162\157\147\162\141\155\163\134\160\171\164\150\157\156\134\160\171\164\150\157\156\63\61\61\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\157\160\145\156\160\171\170\154\134\144\162\141\167\151\156\147\134\160\151\143\164\165\162\145\56\160\171"
#endif
},
    {"openpyxl.drawing.properties", modulecode_openpyxl$drawing$properties, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\165\163\145\162\163\134\161\167\167\71\63\134\141\160\160\144\141\164\141\134\154\157\143\141\154\134\160\162\157\147\162\141\155\163\134\160\171\164\150\157\156\134\160\171\164\150\157\156\63\61\61\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\157\160\145\156\160\171\170\154\134\144\162\141\167\151\156\147\134\160\162\157\160\145\162\164\151\145\163\56\160\171"
#endif
},
    {"openpyxl.drawing.relation", modulecode_openpyxl$drawing$relation, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\165\163\145\162\163\134\161\167\167\71\63\134\141\160\160\144\141\164\141\134\154\157\143\141\154\134\160\162\157\147\162\141\155\163\134\160\171\164\150\157\156\134\160\171\164\150\157\156\63\61\61\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\157\160\145\156\160\171\170\154\134\144\162\141\167\151\156\147\134\162\145\154\141\164\151\157\156\56\160\171"
#endif
},
    {"openpyxl.drawing.spreadsheet_drawing", modulecode_openpyxl$drawing$spreadsheet_drawing, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\165\163\145\162\163\134\161\167\167\71\63\134\141\160\160\144\141\164\141\134\154\157\143\141\154\134\160\162\157\147\162\141\155\163\134\160\171\164\150\157\156\134\160\171\164\150\157\156\63\61\61\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\157\160\145\156\160\171\170\154\134\144\162\141\167\151\156\147\134\163\160\162\145\141\144\163\150\145\145\164\137\144\162\141\167\151\156\147\56\160\171"
#endif
},
    {"openpyxl.drawing.text", modulecode_openpyxl$drawing$text, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\165\163\145\162\163\134\161\167\167\71\63\134\141\160\160\144\141\164\141\134\154\157\143\141\154\134\160\162\157\147\162\141\155\163\134\160\171\164\150\157\156\134\160\171\164\150\157\156\63\61\61\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\157\160\145\156\160\171\170\154\134\144\162\141\167\151\156\147\134\164\145\170\164\56\160\171"
#endif
},
    {"openpyxl.drawing.xdr", modulecode_openpyxl$drawing$xdr, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\165\163\145\162\163\134\161\167\167\71\63\134\141\160\160\144\141\164\141\134\154\157\143\141\154\134\160\162\157\147\162\141\155\163\134\160\171\164\150\157\156\134\160\171\164\150\157\156\63\61\61\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\157\160\145\156\160\171\170\154\134\144\162\141\167\151\156\147\134\170\144\162\56\160\171"
#endif
},
    {"openpyxl.formatting", modulecode_openpyxl$formatting, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_PACKAGE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\165\163\145\162\163\134\161\167\167\71\63\134\141\160\160\144\141\164\141\134\154\157\143\141\154\134\160\162\157\147\162\141\155\163\134\160\171\164\150\157\156\134\160\171\164\150\157\156\63\61\61\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\157\160\145\156\160\171\170\154\134\146\157\162\155\141\164\164\151\156\147\134\137\137\151\156\151\164\137\137\56\160\171"
#endif
},
    {"openpyxl.formatting.formatting", modulecode_openpyxl$formatting$formatting, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\165\163\145\162\163\134\161\167\167\71\63\134\141\160\160\144\141\164\141\134\154\157\143\141\154\134\160\162\157\147\162\141\155\163\134\160\171\164\150\157\156\134\160\171\164\150\157\156\63\61\61\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\157\160\145\156\160\171\170\154\134\146\157\162\155\141\164\164\151\156\147\134\146\157\162\155\141\164\164\151\156\147\56\160\171"
#endif
},
    {"openpyxl.formatting.rule", modulecode_openpyxl$formatting$rule, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\165\163\145\162\163\134\161\167\167\71\63\134\141\160\160\144\141\164\141\134\154\157\143\141\154\134\160\162\157\147\162\141\155\163\134\160\171\164\150\157\156\134\160\171\164\150\157\156\63\61\61\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\157\160\145\156\160\171\170\154\134\146\157\162\155\141\164\164\151\156\147\134\162\165\154\145\56\160\171"
#endif
},
    {"openpyxl.formula", modulecode_openpyxl$formula, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_PACKAGE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\165\163\145\162\163\134\161\167\167\71\63\134\141\160\160\144\141\164\141\134\154\157\143\141\154\134\160\162\157\147\162\141\155\163\134\160\171\164\150\157\156\134\160\171\164\150\157\156\63\61\61\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\157\160\145\156\160\171\170\154\134\146\157\162\155\165\154\141\134\137\137\151\156\151\164\137\137\56\160\171"
#endif
},
    {"openpyxl.formula.tokenizer", modulecode_openpyxl$formula$tokenizer, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\165\163\145\162\163\134\161\167\167\71\63\134\141\160\160\144\141\164\141\134\154\157\143\141\154\134\160\162\157\147\162\141\155\163\134\160\171\164\150\157\156\134\160\171\164\150\157\156\63\61\61\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\157\160\145\156\160\171\170\154\134\146\157\162\155\165\154\141\134\164\157\153\145\156\151\172\145\162\56\160\171"
#endif
},
    {"openpyxl.formula.translate", modulecode_openpyxl$formula$translate, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\165\163\145\162\163\134\161\167\167\71\63\134\141\160\160\144\141\164\141\134\154\157\143\141\154\134\160\162\157\147\162\141\155\163\134\160\171\164\150\157\156\134\160\171\164\150\157\156\63\61\61\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\157\160\145\156\160\171\170\154\134\146\157\162\155\165\154\141\134\164\162\141\156\163\154\141\164\145\56\160\171"
#endif
},
    {"openpyxl.packaging", modulecode_openpyxl$packaging, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_PACKAGE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\165\163\145\162\163\134\161\167\167\71\63\134\141\160\160\144\141\164\141\134\154\157\143\141\154\134\160\162\157\147\162\141\155\163\134\160\171\164\150\157\156\134\160\171\164\150\157\156\63\61\61\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\157\160\145\156\160\171\170\154\134\160\141\143\153\141\147\151\156\147\134\137\137\151\156\151\164\137\137\56\160\171"
#endif
},
    {"openpyxl.packaging.core", modulecode_openpyxl$packaging$core, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\165\163\145\162\163\134\161\167\167\71\63\134\141\160\160\144\141\164\141\134\154\157\143\141\154\134\160\162\157\147\162\141\155\163\134\160\171\164\150\157\156\134\160\171\164\150\157\156\63\61\61\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\157\160\145\156\160\171\170\154\134\160\141\143\153\141\147\151\156\147\134\143\157\162\145\56\160\171"
#endif
},
    {"openpyxl.packaging.custom", modulecode_openpyxl$packaging$custom, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\165\163\145\162\163\134\161\167\167\71\63\134\141\160\160\144\141\164\141\134\154\157\143\141\154\134\160\162\157\147\162\141\155\163\134\160\171\164\150\157\156\134\160\171\164\150\157\156\63\61\61\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\157\160\145\156\160\171\170\154\134\160\141\143\153\141\147\151\156\147\134\143\165\163\164\157\155\56\160\171"
#endif
},
    {"openpyxl.packaging.extended", modulecode_openpyxl$packaging$extended, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\165\163\145\162\163\134\161\167\167\71\63\134\141\160\160\144\141\164\141\134\154\157\143\141\154\134\160\162\157\147\162\141\155\163\134\160\171\164\150\157\156\134\160\171\164\150\157\156\63\61\61\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\157\160\145\156\160\171\170\154\134\160\141\143\153\141\147\151\156\147\134\145\170\164\145\156\144\145\144\56\160\171"
#endif
},
    {"openpyxl.packaging.manifest", modulecode_openpyxl$packaging$manifest, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\165\163\145\162\163\134\161\167\167\71\63\134\141\160\160\144\141\164\141\134\154\157\143\141\154\134\160\162\157\147\162\141\155\163\134\160\171\164\150\157\156\134\160\171\164\150\157\156\63\61\61\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\157\160\145\156\160\171\170\154\134\160\141\143\153\141\147\151\156\147\134\155\141\156\151\146\145\163\164\56\160\171"
#endif
},
    {"openpyxl.packaging.relationship", modulecode_openpyxl$packaging$relationship, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\165\163\145\162\163\134\161\167\167\71\63\134\141\160\160\144\141\164\141\134\154\157\143\141\154\134\160\162\157\147\162\141\155\163\134\160\171\164\150\157\156\134\160\171\164\150\157\156\63\61\61\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\157\160\145\156\160\171\170\154\134\160\141\143\153\141\147\151\156\147\134\162\145\154\141\164\151\157\156\163\150\151\160\56\160\171"
#endif
},
    {"openpyxl.packaging.workbook", modulecode_openpyxl$packaging$workbook, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\165\163\145\162\163\134\161\167\167\71\63\134\141\160\160\144\141\164\141\134\154\157\143\141\154\134\160\162\157\147\162\141\155\163\134\160\171\164\150\157\156\134\160\171\164\150\157\156\63\61\61\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\157\160\145\156\160\171\170\154\134\160\141\143\153\141\147\151\156\147\134\167\157\162\153\142\157\157\153\56\160\171"
#endif
},
    {"openpyxl.pivot", modulecode_openpyxl$pivot, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_PACKAGE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\165\163\145\162\163\134\161\167\167\71\63\134\141\160\160\144\141\164\141\134\154\157\143\141\154\134\160\162\157\147\162\141\155\163\134\160\171\164\150\157\156\134\160\171\164\150\157\156\63\61\61\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\157\160\145\156\160\171\170\154\134\160\151\166\157\164\134\137\137\151\156\151\164\137\137\56\160\171"
#endif
},
    {"openpyxl.pivot.cache", modulecode_openpyxl$pivot$cache, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\165\163\145\162\163\134\161\167\167\71\63\134\141\160\160\144\141\164\141\134\154\157\143\141\154\134\160\162\157\147\162\141\155\163\134\160\171\164\150\157\156\134\160\171\164\150\157\156\63\61\61\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\157\160\145\156\160\171\170\154\134\160\151\166\157\164\134\143\141\143\150\145\56\160\171"
#endif
},
    {"openpyxl.pivot.fields", modulecode_openpyxl$pivot$fields, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\165\163\145\162\163\134\161\167\167\71\63\134\141\160\160\144\141\164\141\134\154\157\143\141\154\134\160\162\157\147\162\141\155\163\134\160\171\164\150\157\156\134\160\171\164\150\157\156\63\61\61\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\157\160\145\156\160\171\170\154\134\160\151\166\157\164\134\146\151\145\154\144\163\56\160\171"
#endif
},
    {"openpyxl.pivot.record", modulecode_openpyxl$pivot$record, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\165\163\145\162\163\134\161\167\167\71\63\134\141\160\160\144\141\164\141\134\154\157\143\141\154\134\160\162\157\147\162\141\155\163\134\160\171\164\150\157\156\134\160\171\164\150\157\156\63\61\61\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\157\160\145\156\160\171\170\154\134\160\151\166\157\164\134\162\145\143\157\162\144\56\160\171"
#endif
},
    {"openpyxl.pivot.table", modulecode_openpyxl$pivot$table, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\165\163\145\162\163\134\161\167\167\71\63\134\141\160\160\144\141\164\141\134\154\157\143\141\154\134\160\162\157\147\162\141\155\163\134\160\171\164\150\157\156\134\160\171\164\150\157\156\63\61\61\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\157\160\145\156\160\171\170\154\134\160\151\166\157\164\134\164\141\142\154\145\56\160\171"
#endif
},
    {"openpyxl.reader", modulecode_openpyxl$reader, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_PACKAGE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\165\163\145\162\163\134\161\167\167\71\63\134\141\160\160\144\141\164\141\134\154\157\143\141\154\134\160\162\157\147\162\141\155\163\134\160\171\164\150\157\156\134\160\171\164\150\157\156\63\61\61\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\157\160\145\156\160\171\170\154\134\162\145\141\144\145\162\134\137\137\151\156\151\164\137\137\56\160\171"
#endif
},
    {"openpyxl.reader.drawings", modulecode_openpyxl$reader$drawings, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\165\163\145\162\163\134\161\167\167\71\63\134\141\160\160\144\141\164\141\134\154\157\143\141\154\134\160\162\157\147\162\141\155\163\134\160\171\164\150\157\156\134\160\171\164\150\157\156\63\61\61\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\157\160\145\156\160\171\170\154\134\162\145\141\144\145\162\134\144\162\141\167\151\156\147\163\56\160\171"
#endif
},
    {"openpyxl.reader.excel", modulecode_openpyxl$reader$excel, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\165\163\145\162\163\134\161\167\167\71\63\134\141\160\160\144\141\164\141\134\154\157\143\141\154\134\160\162\157\147\162\141\155\163\134\160\171\164\150\157\156\134\160\171\164\150\157\156\63\61\61\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\157\160\145\156\160\171\170\154\134\162\145\141\144\145\162\134\145\170\143\145\154\56\160\171"
#endif
},
    {"openpyxl.reader.strings", modulecode_openpyxl$reader$strings, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\165\163\145\162\163\134\161\167\167\71\63\134\141\160\160\144\141\164\141\134\154\157\143\141\154\134\160\162\157\147\162\141\155\163\134\160\171\164\150\157\156\134\160\171\164\150\157\156\63\61\61\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\157\160\145\156\160\171\170\154\134\162\145\141\144\145\162\134\163\164\162\151\156\147\163\56\160\171"
#endif
},
    {"openpyxl.reader.workbook", modulecode_openpyxl$reader$workbook, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\165\163\145\162\163\134\161\167\167\71\63\134\141\160\160\144\141\164\141\134\154\157\143\141\154\134\160\162\157\147\162\141\155\163\134\160\171\164\150\157\156\134\160\171\164\150\157\156\63\61\61\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\157\160\145\156\160\171\170\154\134\162\145\141\144\145\162\134\167\157\162\153\142\157\157\153\56\160\171"
#endif
},
    {"openpyxl.styles", modulecode_openpyxl$styles, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_PACKAGE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\165\163\145\162\163\134\161\167\167\71\63\134\141\160\160\144\141\164\141\134\154\157\143\141\154\134\160\162\157\147\162\141\155\163\134\160\171\164\150\157\156\134\160\171\164\150\157\156\63\61\61\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\157\160\145\156\160\171\170\154\134\163\164\171\154\145\163\134\137\137\151\156\151\164\137\137\56\160\171"
#endif
},
    {"openpyxl.styles.alignment", modulecode_openpyxl$styles$alignment, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\165\163\145\162\163\134\161\167\167\71\63\134\141\160\160\144\141\164\141\134\154\157\143\141\154\134\160\162\157\147\162\141\155\163\134\160\171\164\150\157\156\134\160\171\164\150\157\156\63\61\61\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\157\160\145\156\160\171\170\154\134\163\164\171\154\145\163\134\141\154\151\147\156\155\145\156\164\56\160\171"
#endif
},
    {"openpyxl.styles.borders", modulecode_openpyxl$styles$borders, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\165\163\145\162\163\134\161\167\167\71\63\134\141\160\160\144\141\164\141\134\154\157\143\141\154\134\160\162\157\147\162\141\155\163\134\160\171\164\150\157\156\134\160\171\164\150\157\156\63\61\61\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\157\160\145\156\160\171\170\154\134\163\164\171\154\145\163\134\142\157\162\144\145\162\163\56\160\171"
#endif
},
    {"openpyxl.styles.builtins", modulecode_openpyxl$styles$builtins, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\165\163\145\162\163\134\161\167\167\71\63\134\141\160\160\144\141\164\141\134\154\157\143\141\154\134\160\162\157\147\162\141\155\163\134\160\171\164\150\157\156\134\160\171\164\150\157\156\63\61\61\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\157\160\145\156\160\171\170\154\134\163\164\171\154\145\163\134\142\165\151\154\164\151\156\163\56\160\171"
#endif
},
    {"openpyxl.styles.cell_style", modulecode_openpyxl$styles$cell_style, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\165\163\145\162\163\134\161\167\167\71\63\134\141\160\160\144\141\164\141\134\154\157\143\141\154\134\160\162\157\147\162\141\155\163\134\160\171\164\150\157\156\134\160\171\164\150\157\156\63\61\61\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\157\160\145\156\160\171\170\154\134\163\164\171\154\145\163\134\143\145\154\154\137\163\164\171\154\145\56\160\171"
#endif
},
    {"openpyxl.styles.colors", modulecode_openpyxl$styles$colors, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\165\163\145\162\163\134\161\167\167\71\63\134\141\160\160\144\141\164\141\134\154\157\143\141\154\134\160\162\157\147\162\141\155\163\134\160\171\164\150\157\156\134\160\171\164\150\157\156\63\61\61\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\157\160\145\156\160\171\170\154\134\163\164\171\154\145\163\134\143\157\154\157\162\163\56\160\171"
#endif
},
    {"openpyxl.styles.differential", modulecode_openpyxl$styles$differential, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\165\163\145\162\163\134\161\167\167\71\63\134\141\160\160\144\141\164\141\134\154\157\143\141\154\134\160\162\157\147\162\141\155\163\134\160\171\164\150\157\156\134\160\171\164\150\157\156\63\61\61\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\157\160\145\156\160\171\170\154\134\163\164\171\154\145\163\134\144\151\146\146\145\162\145\156\164\151\141\154\56\160\171"
#endif
},
    {"openpyxl.styles.fills", modulecode_openpyxl$styles$fills, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\165\163\145\162\163\134\161\167\167\71\63\134\141\160\160\144\141\164\141\134\154\157\143\141\154\134\160\162\157\147\162\141\155\163\134\160\171\164\150\157\156\134\160\171\164\150\157\156\63\61\61\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\157\160\145\156\160\171\170\154\134\163\164\171\154\145\163\134\146\151\154\154\163\56\160\171"
#endif
},
    {"openpyxl.styles.fonts", modulecode_openpyxl$styles$fonts, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\165\163\145\162\163\134\161\167\167\71\63\134\141\160\160\144\141\164\141\134\154\157\143\141\154\134\160\162\157\147\162\141\155\163\134\160\171\164\150\157\156\134\160\171\164\150\157\156\63\61\61\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\157\160\145\156\160\171\170\154\134\163\164\171\154\145\163\134\146\157\156\164\163\56\160\171"
#endif
},
    {"openpyxl.styles.named_styles", modulecode_openpyxl$styles$named_styles, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\165\163\145\162\163\134\161\167\167\71\63\134\141\160\160\144\141\164\141\134\154\157\143\141\154\134\160\162\157\147\162\141\155\163\134\160\171\164\150\157\156\134\160\171\164\150\157\156\63\61\61\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\157\160\145\156\160\171\170\154\134\163\164\171\154\145\163\134\156\141\155\145\144\137\163\164\171\154\145\163\56\160\171"
#endif
},
    {"openpyxl.styles.numbers", modulecode_openpyxl$styles$numbers, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\165\163\145\162\163\134\161\167\167\71\63\134\141\160\160\144\141\164\141\134\154\157\143\141\154\134\160\162\157\147\162\141\155\163\134\160\171\164\150\157\156\134\160\171\164\150\157\156\63\61\61\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\157\160\145\156\160\171\170\154\134\163\164\171\154\145\163\134\156\165\155\142\145\162\163\56\160\171"
#endif
},
    {"openpyxl.styles.protection", modulecode_openpyxl$styles$protection, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\165\163\145\162\163\134\161\167\167\71\63\134\141\160\160\144\141\164\141\134\154\157\143\141\154\134\160\162\157\147\162\141\155\163\134\160\171\164\150\157\156\134\160\171\164\150\157\156\63\61\61\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\157\160\145\156\160\171\170\154\134\163\164\171\154\145\163\134\160\162\157\164\145\143\164\151\157\156\56\160\171"
#endif
},
    {"openpyxl.styles.proxy", modulecode_openpyxl$styles$proxy, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\165\163\145\162\163\134\161\167\167\71\63\134\141\160\160\144\141\164\141\134\154\157\143\141\154\134\160\162\157\147\162\141\155\163\134\160\171\164\150\157\156\134\160\171\164\150\157\156\63\61\61\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\157\160\145\156\160\171\170\154\134\163\164\171\154\145\163\134\160\162\157\170\171\56\160\171"
#endif
},
    {"openpyxl.styles.styleable", modulecode_openpyxl$styles$styleable, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\165\163\145\162\163\134\161\167\167\71\63\134\141\160\160\144\141\164\141\134\154\157\143\141\154\134\160\162\157\147\162\141\155\163\134\160\171\164\150\157\156\134\160\171\164\150\157\156\63\61\61\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\157\160\145\156\160\171\170\154\134\163\164\171\154\145\163\134\163\164\171\154\145\141\142\154\145\56\160\171"
#endif
},
    {"openpyxl.styles.stylesheet", modulecode_openpyxl$styles$stylesheet, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\165\163\145\162\163\134\161\167\167\71\63\134\141\160\160\144\141\164\141\134\154\157\143\141\154\134\160\162\157\147\162\141\155\163\134\160\171\164\150\157\156\134\160\171\164\150\157\156\63\61\61\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\157\160\145\156\160\171\170\154\134\163\164\171\154\145\163\134\163\164\171\154\145\163\150\145\145\164\56\160\171"
#endif
},
    {"openpyxl.styles.table", modulecode_openpyxl$styles$table, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\165\163\145\162\163\134\161\167\167\71\63\134\141\160\160\144\141\164\141\134\154\157\143\141\154\134\160\162\157\147\162\141\155\163\134\160\171\164\150\157\156\134\160\171\164\150\157\156\63\61\61\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\157\160\145\156\160\171\170\154\134\163\164\171\154\145\163\134\164\141\142\154\145\56\160\171"
#endif
},
    {"openpyxl.utils", modulecode_openpyxl$utils, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_PACKAGE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\165\163\145\162\163\134\161\167\167\71\63\134\141\160\160\144\141\164\141\134\154\157\143\141\154\134\160\162\157\147\162\141\155\163\134\160\171\164\150\157\156\134\160\171\164\150\157\156\63\61\61\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\157\160\145\156\160\171\170\154\134\165\164\151\154\163\134\137\137\151\156\151\164\137\137\56\160\171"
#endif
},
    {"openpyxl.utils.bound_dictionary", modulecode_openpyxl$utils$bound_dictionary, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\165\163\145\162\163\134\161\167\167\71\63\134\141\160\160\144\141\164\141\134\154\157\143\141\154\134\160\162\157\147\162\141\155\163\134\160\171\164\150\157\156\134\160\171\164\150\157\156\63\61\61\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\157\160\145\156\160\171\170\154\134\165\164\151\154\163\134\142\157\165\156\144\137\144\151\143\164\151\157\156\141\162\171\56\160\171"
#endif
},
    {"openpyxl.utils.cell", modulecode_openpyxl$utils$cell, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\165\163\145\162\163\134\161\167\167\71\63\134\141\160\160\144\141\164\141\134\154\157\143\141\154\134\160\162\157\147\162\141\155\163\134\160\171\164\150\157\156\134\160\171\164\150\157\156\63\61\61\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\157\160\145\156\160\171\170\154\134\165\164\151\154\163\134\143\145\154\154\56\160\171"
#endif
},
    {"openpyxl.utils.datetime", modulecode_openpyxl$utils$datetime, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\165\163\145\162\163\134\161\167\167\71\63\134\141\160\160\144\141\164\141\134\154\157\143\141\154\134\160\162\157\147\162\141\155\163\134\160\171\164\150\157\156\134\160\171\164\150\157\156\63\61\61\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\157\160\145\156\160\171\170\154\134\165\164\151\154\163\134\144\141\164\145\164\151\155\145\56\160\171"
#endif
},
    {"openpyxl.utils.escape", modulecode_openpyxl$utils$escape, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\165\163\145\162\163\134\161\167\167\71\63\134\141\160\160\144\141\164\141\134\154\157\143\141\154\134\160\162\157\147\162\141\155\163\134\160\171\164\150\157\156\134\160\171\164\150\157\156\63\61\61\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\157\160\145\156\160\171\170\154\134\165\164\151\154\163\134\145\163\143\141\160\145\56\160\171"
#endif
},
    {"openpyxl.utils.exceptions", modulecode_openpyxl$utils$exceptions, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\165\163\145\162\163\134\161\167\167\71\63\134\141\160\160\144\141\164\141\134\154\157\143\141\154\134\160\162\157\147\162\141\155\163\134\160\171\164\150\157\156\134\160\171\164\150\157\156\63\61\61\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\157\160\145\156\160\171\170\154\134\165\164\151\154\163\134\145\170\143\145\160\164\151\157\156\163\56\160\171"
#endif
},
    {"openpyxl.utils.formulas", modulecode_openpyxl$utils$formulas, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\165\163\145\162\163\134\161\167\167\71\63\134\141\160\160\144\141\164\141\134\154\157\143\141\154\134\160\162\157\147\162\141\155\163\134\160\171\164\150\157\156\134\160\171\164\150\157\156\63\61\61\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\157\160\145\156\160\171\170\154\134\165\164\151\154\163\134\146\157\162\155\165\154\141\163\56\160\171"
#endif
},
    {"openpyxl.utils.indexed_list", modulecode_openpyxl$utils$indexed_list, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\165\163\145\162\163\134\161\167\167\71\63\134\141\160\160\144\141\164\141\134\154\157\143\141\154\134\160\162\157\147\162\141\155\163\134\160\171\164\150\157\156\134\160\171\164\150\157\156\63\61\61\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\157\160\145\156\160\171\170\154\134\165\164\151\154\163\134\151\156\144\145\170\145\144\137\154\151\163\164\56\160\171"
#endif
},
    {"openpyxl.utils.protection", modulecode_openpyxl$utils$protection, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\165\163\145\162\163\134\161\167\167\71\63\134\141\160\160\144\141\164\141\134\154\157\143\141\154\134\160\162\157\147\162\141\155\163\134\160\171\164\150\157\156\134\160\171\164\150\157\156\63\61\61\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\157\160\145\156\160\171\170\154\134\165\164\151\154\163\134\160\162\157\164\145\143\164\151\157\156\56\160\171"
#endif
},
    {"openpyxl.utils.units", modulecode_openpyxl$utils$units, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\165\163\145\162\163\134\161\167\167\71\63\134\141\160\160\144\141\164\141\134\154\157\143\141\154\134\160\162\157\147\162\141\155\163\134\160\171\164\150\157\156\134\160\171\164\150\157\156\63\61\61\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\157\160\145\156\160\171\170\154\134\165\164\151\154\163\134\165\156\151\164\163\56\160\171"
#endif
},
    {"openpyxl.workbook", modulecode_openpyxl$workbook, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_PACKAGE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\165\163\145\162\163\134\161\167\167\71\63\134\141\160\160\144\141\164\141\134\154\157\143\141\154\134\160\162\157\147\162\141\155\163\134\160\171\164\150\157\156\134\160\171\164\150\157\156\63\61\61\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\157\160\145\156\160\171\170\154\134\167\157\162\153\142\157\157\153\134\137\137\151\156\151\164\137\137\56\160\171"
#endif
},
    {"openpyxl.workbook._writer", modulecode_openpyxl$workbook$_writer, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\165\163\145\162\163\134\161\167\167\71\63\134\141\160\160\144\141\164\141\134\154\157\143\141\154\134\160\162\157\147\162\141\155\163\134\160\171\164\150\157\156\134\160\171\164\150\157\156\63\61\61\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\157\160\145\156\160\171\170\154\134\167\157\162\153\142\157\157\153\134\137\167\162\151\164\145\162\56\160\171"
#endif
},
    {"openpyxl.workbook.child", modulecode_openpyxl$workbook$child, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\165\163\145\162\163\134\161\167\167\71\63\134\141\160\160\144\141\164\141\134\154\157\143\141\154\134\160\162\157\147\162\141\155\163\134\160\171\164\150\157\156\134\160\171\164\150\157\156\63\61\61\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\157\160\145\156\160\171\170\154\134\167\157\162\153\142\157\157\153\134\143\150\151\154\144\56\160\171"
#endif
},
    {"openpyxl.workbook.defined_name", modulecode_openpyxl$workbook$defined_name, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\165\163\145\162\163\134\161\167\167\71\63\134\141\160\160\144\141\164\141\134\154\157\143\141\154\134\160\162\157\147\162\141\155\163\134\160\171\164\150\157\156\134\160\171\164\150\157\156\63\61\61\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\157\160\145\156\160\171\170\154\134\167\157\162\153\142\157\157\153\134\144\145\146\151\156\145\144\137\156\141\155\145\56\160\171"
#endif
},
    {"openpyxl.workbook.external_link", modulecode_openpyxl$workbook$external_link, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_PACKAGE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\165\163\145\162\163\134\161\167\167\71\63\134\141\160\160\144\141\164\141\134\154\157\143\141\154\134\160\162\157\147\162\141\155\163\134\160\171\164\150\157\156\134\160\171\164\150\157\156\63\61\61\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\157\160\145\156\160\171\170\154\134\167\157\162\153\142\157\157\153\134\145\170\164\145\162\156\141\154\137\154\151\156\153\134\137\137\151\156\151\164\137\137\56\160\171"
#endif
},
    {"openpyxl.workbook.external_link.external", modulecode_openpyxl$workbook$external_link$external, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\165\163\145\162\163\134\161\167\167\71\63\134\141\160\160\144\141\164\141\134\154\157\143\141\154\134\160\162\157\147\162\141\155\163\134\160\171\164\150\157\156\134\160\171\164\150\157\156\63\61\61\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\157\160\145\156\160\171\170\154\134\167\157\162\153\142\157\157\153\134\145\170\164\145\162\156\141\154\137\154\151\156\153\134\145\170\164\145\162\156\141\154\56\160\171"
#endif
},
    {"openpyxl.workbook.external_reference", modulecode_openpyxl$workbook$external_reference, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\165\163\145\162\163\134\161\167\167\71\63\134\141\160\160\144\141\164\141\134\154\157\143\141\154\134\160\162\157\147\162\141\155\163\134\160\171\164\150\157\156\134\160\171\164\150\157\156\63\61\61\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\157\160\145\156\160\171\170\154\134\167\157\162\153\142\157\157\153\134\145\170\164\145\162\156\141\154\137\162\145\146\145\162\145\156\143\145\56\160\171"
#endif
},
    {"openpyxl.workbook.function_group", modulecode_openpyxl$workbook$function_group, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\165\163\145\162\163\134\161\167\167\71\63\134\141\160\160\144\141\164\141\134\154\157\143\141\154\134\160\162\157\147\162\141\155\163\134\160\171\164\150\157\156\134\160\171\164\150\157\156\63\61\61\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\157\160\145\156\160\171\170\154\134\167\157\162\153\142\157\157\153\134\146\165\156\143\164\151\157\156\137\147\162\157\165\160\56\160\171"
#endif
},
    {"openpyxl.workbook.properties", modulecode_openpyxl$workbook$properties, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\165\163\145\162\163\134\161\167\167\71\63\134\141\160\160\144\141\164\141\134\154\157\143\141\154\134\160\162\157\147\162\141\155\163\134\160\171\164\150\157\156\134\160\171\164\150\157\156\63\61\61\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\157\160\145\156\160\171\170\154\134\167\157\162\153\142\157\157\153\134\160\162\157\160\145\162\164\151\145\163\56\160\171"
#endif
},
    {"openpyxl.workbook.protection", modulecode_openpyxl$workbook$protection, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\165\163\145\162\163\134\161\167\167\71\63\134\141\160\160\144\141\164\141\134\154\157\143\141\154\134\160\162\157\147\162\141\155\163\134\160\171\164\150\157\156\134\160\171\164\150\157\156\63\61\61\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\157\160\145\156\160\171\170\154\134\167\157\162\153\142\157\157\153\134\160\162\157\164\145\143\164\151\157\156\56\160\171"
#endif
},
    {"openpyxl.workbook.smart_tags", modulecode_openpyxl$workbook$smart_tags, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\165\163\145\162\163\134\161\167\167\71\63\134\141\160\160\144\141\164\141\134\154\157\143\141\154\134\160\162\157\147\162\141\155\163\134\160\171\164\150\157\156\134\160\171\164\150\157\156\63\61\61\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\157\160\145\156\160\171\170\154\134\167\157\162\153\142\157\157\153\134\163\155\141\162\164\137\164\141\147\163\56\160\171"
#endif
},
    {"openpyxl.workbook.views", modulecode_openpyxl$workbook$views, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\165\163\145\162\163\134\161\167\167\71\63\134\141\160\160\144\141\164\141\134\154\157\143\141\154\134\160\162\157\147\162\141\155\163\134\160\171\164\150\157\156\134\160\171\164\150\157\156\63\61\61\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\157\160\145\156\160\171\170\154\134\167\157\162\153\142\157\157\153\134\166\151\145\167\163\56\160\171"
#endif
},
    {"openpyxl.workbook.web", modulecode_openpyxl$workbook$web, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\165\163\145\162\163\134\161\167\167\71\63\134\141\160\160\144\141\164\141\134\154\157\143\141\154\134\160\162\157\147\162\141\155\163\134\160\171\164\150\157\156\134\160\171\164\150\157\156\63\61\61\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\157\160\145\156\160\171\170\154\134\167\157\162\153\142\157\157\153\134\167\145\142\56\160\171"
#endif
},
    {"openpyxl.workbook.workbook", modulecode_openpyxl$workbook$workbook, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\165\163\145\162\163\134\161\167\167\71\63\134\141\160\160\144\141\164\141\134\154\157\143\141\154\134\160\162\157\147\162\141\155\163\134\160\171\164\150\157\156\134\160\171\164\150\157\156\63\61\61\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\157\160\145\156\160\171\170\154\134\167\157\162\153\142\157\157\153\134\167\157\162\153\142\157\157\153\56\160\171"
#endif
},
    {"openpyxl.worksheet", modulecode_openpyxl$worksheet, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_PACKAGE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\165\163\145\162\163\134\161\167\167\71\63\134\141\160\160\144\141\164\141\134\154\157\143\141\154\134\160\162\157\147\162\141\155\163\134\160\171\164\150\157\156\134\160\171\164\150\157\156\63\61\61\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\157\160\145\156\160\171\170\154\134\167\157\162\153\163\150\145\145\164\134\137\137\151\156\151\164\137\137\56\160\171"
#endif
},
    {"openpyxl.worksheet._read_only", modulecode_openpyxl$worksheet$_read_only, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\165\163\145\162\163\134\161\167\167\71\63\134\141\160\160\144\141\164\141\134\154\157\143\141\154\134\160\162\157\147\162\141\155\163\134\160\171\164\150\157\156\134\160\171\164\150\157\156\63\61\61\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\157\160\145\156\160\171\170\154\134\167\157\162\153\163\150\145\145\164\134\137\162\145\141\144\137\157\156\154\171\56\160\171"
#endif
},
    {"openpyxl.worksheet._reader", modulecode_openpyxl$worksheet$_reader, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\165\163\145\162\163\134\161\167\167\71\63\134\141\160\160\144\141\164\141\134\154\157\143\141\154\134\160\162\157\147\162\141\155\163\134\160\171\164\150\157\156\134\160\171\164\150\157\156\63\61\61\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\157\160\145\156\160\171\170\154\134\167\157\162\153\163\150\145\145\164\134\137\162\145\141\144\145\162\56\160\171"
#endif
},
    {"openpyxl.worksheet._write_only", modulecode_openpyxl$worksheet$_write_only, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\165\163\145\162\163\134\161\167\167\71\63\134\141\160\160\144\141\164\141\134\154\157\143\141\154\134\160\162\157\147\162\141\155\163\134\160\171\164\150\157\156\134\160\171\164\150\157\156\63\61\61\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\157\160\145\156\160\171\170\154\134\167\157\162\153\163\150\145\145\164\134\137\167\162\151\164\145\137\157\156\154\171\56\160\171"
#endif
},
    {"openpyxl.worksheet._writer", modulecode_openpyxl$worksheet$_writer, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\165\163\145\162\163\134\161\167\167\71\63\134\141\160\160\144\141\164\141\134\154\157\143\141\154\134\160\162\157\147\162\141\155\163\134\160\171\164\150\157\156\134\160\171\164\150\157\156\63\61\61\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\157\160\145\156\160\171\170\154\134\167\157\162\153\163\150\145\145\164\134\137\167\162\151\164\145\162\56\160\171"
#endif
},
    {"openpyxl.worksheet.cell_range", modulecode_openpyxl$worksheet$cell_range, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\165\163\145\162\163\134\161\167\167\71\63\134\141\160\160\144\141\164\141\134\154\157\143\141\154\134\160\162\157\147\162\141\155\163\134\160\171\164\150\157\156\134\160\171\164\150\157\156\63\61\61\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\157\160\145\156\160\171\170\154\134\167\157\162\153\163\150\145\145\164\134\143\145\154\154\137\162\141\156\147\145\56\160\171"
#endif
},
    {"openpyxl.worksheet.copier", modulecode_openpyxl$worksheet$copier, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\165\163\145\162\163\134\161\167\167\71\63\134\141\160\160\144\141\164\141\134\154\157\143\141\154\134\160\162\157\147\162\141\155\163\134\160\171\164\150\157\156\134\160\171\164\150\157\156\63\61\61\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\157\160\145\156\160\171\170\154\134\167\157\162\153\163\150\145\145\164\134\143\157\160\151\145\162\56\160\171"
#endif
},
    {"openpyxl.worksheet.datavalidation", modulecode_openpyxl$worksheet$datavalidation, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\165\163\145\162\163\134\161\167\167\71\63\134\141\160\160\144\141\164\141\134\154\157\143\141\154\134\160\162\157\147\162\141\155\163\134\160\171\164\150\157\156\134\160\171\164\150\157\156\63\61\61\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\157\160\145\156\160\171\170\154\134\167\157\162\153\163\150\145\145\164\134\144\141\164\141\166\141\154\151\144\141\164\151\157\156\56\160\171"
#endif
},
    {"openpyxl.worksheet.dimensions", modulecode_openpyxl$worksheet$dimensions, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\165\163\145\162\163\134\161\167\167\71\63\134\141\160\160\144\141\164\141\134\154\157\143\141\154\134\160\162\157\147\162\141\155\163\134\160\171\164\150\157\156\134\160\171\164\150\157\156\63\61\61\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\157\160\145\156\160\171\170\154\134\167\157\162\153\163\150\145\145\164\134\144\151\155\145\156\163\151\157\156\163\56\160\171"
#endif
},
    {"openpyxl.worksheet.drawing", modulecode_openpyxl$worksheet$drawing, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\165\163\145\162\163\134\161\167\167\71\63\134\141\160\160\144\141\164\141\134\154\157\143\141\154\134\160\162\157\147\162\141\155\163\134\160\171\164\150\157\156\134\160\171\164\150\157\156\63\61\61\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\157\160\145\156\160\171\170\154\134\167\157\162\153\163\150\145\145\164\134\144\162\141\167\151\156\147\56\160\171"
#endif
},
    {"openpyxl.worksheet.filters", modulecode_openpyxl$worksheet$filters, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\165\163\145\162\163\134\161\167\167\71\63\134\141\160\160\144\141\164\141\134\154\157\143\141\154\134\160\162\157\147\162\141\155\163\134\160\171\164\150\157\156\134\160\171\164\150\157\156\63\61\61\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\157\160\145\156\160\171\170\154\134\167\157\162\153\163\150\145\145\164\134\146\151\154\164\145\162\163\56\160\171"
#endif
},
    {"openpyxl.worksheet.formula", modulecode_openpyxl$worksheet$formula, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\165\163\145\162\163\134\161\167\167\71\63\134\141\160\160\144\141\164\141\134\154\157\143\141\154\134\160\162\157\147\162\141\155\163\134\160\171\164\150\157\156\134\160\171\164\150\157\156\63\61\61\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\157\160\145\156\160\171\170\154\134\167\157\162\153\163\150\145\145\164\134\146\157\162\155\165\154\141\56\160\171"
#endif
},
    {"openpyxl.worksheet.header_footer", modulecode_openpyxl$worksheet$header_footer, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\165\163\145\162\163\134\161\167\167\71\63\134\141\160\160\144\141\164\141\134\154\157\143\141\154\134\160\162\157\147\162\141\155\163\134\160\171\164\150\157\156\134\160\171\164\150\157\156\63\61\61\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\157\160\145\156\160\171\170\154\134\167\157\162\153\163\150\145\145\164\134\150\145\141\144\145\162\137\146\157\157\164\145\162\56\160\171"
#endif
},
    {"openpyxl.worksheet.hyperlink", modulecode_openpyxl$worksheet$hyperlink, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\165\163\145\162\163\134\161\167\167\71\63\134\141\160\160\144\141\164\141\134\154\157\143\141\154\134\160\162\157\147\162\141\155\163\134\160\171\164\150\157\156\134\160\171\164\150\157\156\63\61\61\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\157\160\145\156\160\171\170\154\134\167\157\162\153\163\150\145\145\164\134\150\171\160\145\162\154\151\156\153\56\160\171"
#endif
},
    {"openpyxl.worksheet.merge", modulecode_openpyxl$worksheet$merge, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\165\163\145\162\163\134\161\167\167\71\63\134\141\160\160\144\141\164\141\134\154\157\143\141\154\134\160\162\157\147\162\141\155\163\134\160\171\164\150\157\156\134\160\171\164\150\157\156\63\61\61\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\157\160\145\156\160\171\170\154\134\167\157\162\153\163\150\145\145\164\134\155\145\162\147\145\56\160\171"
#endif
},
    {"openpyxl.worksheet.page", modulecode_openpyxl$worksheet$page, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\165\163\145\162\163\134\161\167\167\71\63\134\141\160\160\144\141\164\141\134\154\157\143\141\154\134\160\162\157\147\162\141\155\163\134\160\171\164\150\157\156\134\160\171\164\150\157\156\63\61\61\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\157\160\145\156\160\171\170\154\134\167\157\162\153\163\150\145\145\164\134\160\141\147\145\56\160\171"
#endif
},
    {"openpyxl.worksheet.pagebreak", modulecode_openpyxl$worksheet$pagebreak, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\165\163\145\162\163\134\161\167\167\71\63\134\141\160\160\144\141\164\141\134\154\157\143\141\154\134\160\162\157\147\162\141\155\163\134\160\171\164\150\157\156\134\160\171\164\150\157\156\63\61\61\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\157\160\145\156\160\171\170\154\134\167\157\162\153\163\150\145\145\164\134\160\141\147\145\142\162\145\141\153\56\160\171"
#endif
},
    {"openpyxl.worksheet.print_settings", modulecode_openpyxl$worksheet$print_settings, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\165\163\145\162\163\134\161\167\167\71\63\134\141\160\160\144\141\164\141\134\154\157\143\141\154\134\160\162\157\147\162\141\155\163\134\160\171\164\150\157\156\134\160\171\164\150\157\156\63\61\61\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\157\160\145\156\160\171\170\154\134\167\157\162\153\163\150\145\145\164\134\160\162\151\156\164\137\163\145\164\164\151\156\147\163\56\160\171"
#endif
},
    {"openpyxl.worksheet.properties", modulecode_openpyxl$worksheet$properties, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\165\163\145\162\163\134\161\167\167\71\63\134\141\160\160\144\141\164\141\134\154\157\143\141\154\134\160\162\157\147\162\141\155\163\134\160\171\164\150\157\156\134\160\171\164\150\157\156\63\61\61\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\157\160\145\156\160\171\170\154\134\167\157\162\153\163\150\145\145\164\134\160\162\157\160\145\162\164\151\145\163\56\160\171"
#endif
},
    {"openpyxl.worksheet.protection", modulecode_openpyxl$worksheet$protection, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\165\163\145\162\163\134\161\167\167\71\63\134\141\160\160\144\141\164\141\134\154\157\143\141\154\134\160\162\157\147\162\141\155\163\134\160\171\164\150\157\156\134\160\171\164\150\157\156\63\61\61\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\157\160\145\156\160\171\170\154\134\167\157\162\153\163\150\145\145\164\134\160\162\157\164\145\143\164\151\157\156\56\160\171"
#endif
},
    {"openpyxl.worksheet.related", modulecode_openpyxl$worksheet$related, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\165\163\145\162\163\134\161\167\167\71\63\134\141\160\160\144\141\164\141\134\154\157\143\141\154\134\160\162\157\147\162\141\155\163\134\160\171\164\150\157\156\134\160\171\164\150\157\156\63\61\61\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\157\160\145\156\160\171\170\154\134\167\157\162\153\163\150\145\145\164\134\162\145\154\141\164\145\144\56\160\171"
#endif
},
    {"openpyxl.worksheet.scenario", modulecode_openpyxl$worksheet$scenario, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\165\163\145\162\163\134\161\167\167\71\63\134\141\160\160\144\141\164\141\134\154\157\143\141\154\134\160\162\157\147\162\141\155\163\134\160\171\164\150\157\156\134\160\171\164\150\157\156\63\61\61\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\157\160\145\156\160\171\170\154\134\167\157\162\153\163\150\145\145\164\134\163\143\145\156\141\162\151\157\56\160\171"
#endif
},
    {"openpyxl.worksheet.table", modulecode_openpyxl$worksheet$table, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\165\163\145\162\163\134\161\167\167\71\63\134\141\160\160\144\141\164\141\134\154\157\143\141\154\134\160\162\157\147\162\141\155\163\134\160\171\164\150\157\156\134\160\171\164\150\157\156\63\61\61\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\157\160\145\156\160\171\170\154\134\167\157\162\153\163\150\145\145\164\134\164\141\142\154\145\56\160\171"
#endif
},
    {"openpyxl.worksheet.views", modulecode_openpyxl$worksheet$views, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\165\163\145\162\163\134\161\167\167\71\63\134\141\160\160\144\141\164\141\134\154\157\143\141\154\134\160\162\157\147\162\141\155\163\134\160\171\164\150\157\156\134\160\171\164\150\157\156\63\61\61\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\157\160\145\156\160\171\170\154\134\167\157\162\153\163\150\145\145\164\134\166\151\145\167\163\56\160\171"
#endif
},
    {"openpyxl.worksheet.worksheet", modulecode_openpyxl$worksheet$worksheet, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\165\163\145\162\163\134\161\167\167\71\63\134\141\160\160\144\141\164\141\134\154\157\143\141\154\134\160\162\157\147\162\141\155\163\134\160\171\164\150\157\156\134\160\171\164\150\157\156\63\61\61\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\157\160\145\156\160\171\170\154\134\167\157\162\153\163\150\145\145\164\134\167\157\162\153\163\150\145\145\164\56\160\171"
#endif
},
    {"openpyxl.writer", modulecode_openpyxl$writer, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_PACKAGE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\165\163\145\162\163\134\161\167\167\71\63\134\141\160\160\144\141\164\141\134\154\157\143\141\154\134\160\162\157\147\162\141\155\163\134\160\171\164\150\157\156\134\160\171\164\150\157\156\63\61\61\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\157\160\145\156\160\171\170\154\134\167\162\151\164\145\162\134\137\137\151\156\151\164\137\137\56\160\171"
#endif
},
    {"openpyxl.writer.excel", modulecode_openpyxl$writer$excel, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\165\163\145\162\163\134\161\167\167\71\63\134\141\160\160\144\141\164\141\134\154\157\143\141\154\134\160\162\157\147\162\141\155\163\134\160\171\164\150\157\156\134\160\171\164\150\157\156\63\61\61\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\157\160\145\156\160\171\170\154\134\167\162\151\164\145\162\134\145\170\143\145\154\56\160\171"
#endif
},
    {"openpyxl.writer.theme", modulecode_openpyxl$writer$theme, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\165\163\145\162\163\134\161\167\167\71\63\134\141\160\160\144\141\164\141\134\154\157\143\141\154\134\160\162\157\147\162\141\155\163\134\160\171\164\150\157\156\134\160\171\164\150\157\156\63\61\61\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\157\160\145\156\160\171\170\154\134\167\162\151\164\145\162\134\164\150\145\155\145\56\160\171"
#endif
},
    {"openpyxl.xml", modulecode_openpyxl$xml, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_PACKAGE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\165\163\145\162\163\134\161\167\167\71\63\134\141\160\160\144\141\164\141\134\154\157\143\141\154\134\160\162\157\147\162\141\155\163\134\160\171\164\150\157\156\134\160\171\164\150\157\156\63\61\61\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\157\160\145\156\160\171\170\154\134\170\155\154\134\137\137\151\156\151\164\137\137\56\160\171"
#endif
},
    {"openpyxl.xml.constants", modulecode_openpyxl$xml$constants, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\165\163\145\162\163\134\161\167\167\71\63\134\141\160\160\144\141\164\141\134\154\157\143\141\154\134\160\162\157\147\162\141\155\163\134\160\171\164\150\157\156\134\160\171\164\150\157\156\63\61\61\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\157\160\145\156\160\171\170\154\134\170\155\154\134\143\157\156\163\164\141\156\164\163\56\160\171"
#endif
},
    {"openpyxl.xml.functions", modulecode_openpyxl$xml$functions, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\165\163\145\162\163\134\161\167\167\71\63\134\141\160\160\144\141\164\141\134\154\157\143\141\154\134\160\162\157\147\162\141\155\163\134\160\171\164\150\157\156\134\160\171\164\150\157\156\63\61\61\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\157\160\145\156\160\171\170\154\134\170\155\154\134\146\165\156\143\164\151\157\156\163\56\160\171"
#endif
},
    {"packaging", NULL, 95, 551, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG | NUITKA_PACKAGE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\165\163\145\162\163\134\161\167\167\71\63\134\141\160\160\144\141\164\141\134\154\157\143\141\154\134\160\162\157\147\162\141\155\163\134\160\171\164\150\157\156\134\160\171\164\150\157\156\63\61\61\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\160\141\143\153\141\147\151\156\147\134\137\137\151\156\151\164\137\137\56\160\171"
#endif
},
    {"packaging._structures", NULL, 96, 3671, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\165\163\145\162\163\134\161\167\167\71\63\134\141\160\160\144\141\164\141\134\154\157\143\141\154\134\160\162\157\147\162\141\155\163\134\160\171\164\150\157\156\134\160\171\164\150\157\156\63\61\61\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\160\141\143\153\141\147\151\156\147\134\137\163\164\162\165\143\164\165\162\145\163\56\160\171"
#endif
},
    {"packaging.version", NULL, 97, 20964, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\165\163\145\162\163\134\161\167\167\71\63\134\141\160\160\144\141\164\141\134\154\157\143\141\154\134\160\162\157\147\162\141\155\163\134\160\171\164\150\157\156\134\160\171\164\150\157\156\63\61\61\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\160\141\143\153\141\147\151\156\147\134\166\145\162\163\151\157\156\56\160\171"
#endif
},
    {"pandas", modulecode_pandas, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_PACKAGE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\165\163\145\162\163\134\161\167\167\71\63\134\141\160\160\144\141\164\141\134\154\157\143\141\154\134\160\162\157\147\162\141\155\163\134\160\171\164\150\157\156\134\160\171\164\150\157\156\63\61\61\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\160\141\156\144\141\163\134\137\137\151\156\151\164\137\137\56\160\171"
#endif
},
    {"pandas._config", modulecode_pandas$_config, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_PACKAGE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\165\163\145\162\163\134\161\167\167\71\63\134\141\160\160\144\141\164\141\134\154\157\143\141\154\134\160\162\157\147\162\141\155\163\134\160\171\164\150\157\156\134\160\171\164\150\157\156\63\61\61\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\160\141\156\144\141\163\134\137\143\157\156\146\151\147\134\137\137\151\156\151\164\137\137\56\160\171"
#endif
},
    {"pandas._config.config", modulecode_pandas$_config$config, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\165\163\145\162\163\134\161\167\167\71\63\134\141\160\160\144\141\164\141\134\154\157\143\141\154\134\160\162\157\147\162\141\155\163\134\160\171\164\150\157\156\134\160\171\164\150\157\156\63\61\61\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\160\141\156\144\141\163\134\137\143\157\156\146\151\147\134\143\157\156\146\151\147\56\160\171"
#endif
},
    {"pandas._config.dates", modulecode_pandas$_config$dates, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\165\163\145\162\163\134\161\167\167\71\63\134\141\160\160\144\141\164\141\134\154\157\143\141\154\134\160\162\157\147\162\141\155\163\134\160\171\164\150\157\156\134\160\171\164\150\157\156\63\61\61\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\160\141\156\144\141\163\134\137\143\157\156\146\151\147\134\144\141\164\145\163\56\160\171"
#endif
},
    {"pandas._config.display", modulecode_pandas$_config$display, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\165\163\145\162\163\134\161\167\167\71\63\134\141\160\160\144\141\164\141\134\154\157\143\141\154\134\160\162\157\147\162\141\155\163\134\160\171\164\150\157\156\134\160\171\164\150\157\156\63\61\61\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\160\141\156\144\141\163\134\137\143\157\156\146\151\147\134\144\151\163\160\154\141\171\56\160\171"
#endif
},
    {"pandas._libs", modulecode_pandas$_libs, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_PACKAGE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\165\163\145\162\163\134\161\167\167\71\63\134\141\160\160\144\141\164\141\134\154\157\143\141\154\134\160\162\157\147\162\141\155\163\134\160\171\164\150\157\156\134\160\171\164\150\157\156\63\61\61\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\160\141\156\144\141\163\134\137\154\151\142\163\134\137\137\151\156\151\164\137\137\56\160\171"
#endif
},
    {"pandas._libs.tslibs", modulecode_pandas$_libs$tslibs, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_PACKAGE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\165\163\145\162\163\134\161\167\167\71\63\134\141\160\160\144\141\164\141\134\154\157\143\141\154\134\160\162\157\147\162\141\155\163\134\160\171\164\150\157\156\134\160\171\164\150\157\156\63\61\61\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\160\141\156\144\141\163\134\137\154\151\142\163\134\164\163\154\151\142\163\134\137\137\151\156\151\164\137\137\56\160\171"
#endif
},
    {"pandas._libs.window", modulecode_pandas$_libs$window, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_PACKAGE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\165\163\145\162\163\134\161\167\167\71\63\134\141\160\160\144\141\164\141\134\154\157\143\141\154\134\160\162\157\147\162\141\155\163\134\160\171\164\150\157\156\134\160\171\164\150\157\156\63\61\61\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\160\141\156\144\141\163\134\137\154\151\142\163\134\167\151\156\144\157\167\134\137\137\151\156\151\164\137\137\56\160\171"
#endif
},
    {"pandas._typing", modulecode_pandas$_typing, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\165\163\145\162\163\134\161\167\167\71\63\134\141\160\160\144\141\164\141\134\154\157\143\141\154\134\160\162\157\147\162\141\155\163\134\160\171\164\150\157\156\134\160\171\164\150\157\156\63\61\61\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\160\141\156\144\141\163\134\137\164\171\160\151\156\147\56\160\171"
#endif
},
    {"pandas._version", modulecode_pandas$_version, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\165\163\145\162\163\134\161\167\167\71\63\134\141\160\160\144\141\164\141\134\154\157\143\141\154\134\160\162\157\147\162\141\155\163\134\160\171\164\150\157\156\134\160\171\164\150\157\156\63\61\61\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\160\141\156\144\141\163\134\137\166\145\162\163\151\157\156\56\160\171"
#endif
},
    {"pandas.api", modulecode_pandas$api, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_PACKAGE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\165\163\145\162\163\134\161\167\167\71\63\134\141\160\160\144\141\164\141\134\154\157\143\141\154\134\160\162\157\147\162\141\155\163\134\160\171\164\150\157\156\134\160\171\164\150\157\156\63\61\61\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\160\141\156\144\141\163\134\141\160\151\134\137\137\151\156\151\164\137\137\56\160\171"
#endif
},
    {"pandas.api.extensions", modulecode_pandas$api$extensions, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_PACKAGE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\165\163\145\162\163\134\161\167\167\71\63\134\141\160\160\144\141\164\141\134\154\157\143\141\154\134\160\162\157\147\162\141\155\163\134\160\171\164\150\157\156\134\160\171\164\150\157\156\63\61\61\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\160\141\156\144\141\163\134\141\160\151\134\145\170\164\145\156\163\151\157\156\163\134\137\137\151\156\151\164\137\137\56\160\171"
#endif
},
    {"pandas.api.indexers", modulecode_pandas$api$indexers, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_PACKAGE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\165\163\145\162\163\134\161\167\167\71\63\134\141\160\160\144\141\164\141\134\154\157\143\141\154\134\160\162\157\147\162\141\155\163\134\160\171\164\150\157\156\134\160\171\164\150\157\156\63\61\61\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\160\141\156\144\141\163\134\141\160\151\134\151\156\144\145\170\145\162\163\134\137\137\151\156\151\164\137\137\56\160\171"
#endif
},
    {"pandas.api.interchange", modulecode_pandas$api$interchange, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_PACKAGE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\165\163\145\162\163\134\161\167\167\71\63\134\141\160\160\144\141\164\141\134\154\157\143\141\154\134\160\162\157\147\162\141\155\163\134\160\171\164\150\157\156\134\160\171\164\150\157\156\63\61\61\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\160\141\156\144\141\163\134\141\160\151\134\151\156\164\145\162\143\150\141\156\147\145\134\137\137\151\156\151\164\137\137\56\160\171"
#endif
},
    {"pandas.api.types", modulecode_pandas$api$types, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_PACKAGE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\165\163\145\162\163\134\161\167\167\71\63\134\141\160\160\144\141\164\141\134\154\157\143\141\154\134\160\162\157\147\162\141\155\163\134\160\171\164\150\157\156\134\160\171\164\150\157\156\63\61\61\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\160\141\156\144\141\163\134\141\160\151\134\164\171\160\145\163\134\137\137\151\156\151\164\137\137\56\160\171"
#endif
},
    {"pandas.arrays", modulecode_pandas$arrays, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_PACKAGE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\165\163\145\162\163\134\161\167\167\71\63\134\141\160\160\144\141\164\141\134\154\157\143\141\154\134\160\162\157\147\162\141\155\163\134\160\171\164\150\157\156\134\160\171\164\150\157\156\63\61\61\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\160\141\156\144\141\163\134\141\162\162\141\171\163\134\137\137\151\156\151\164\137\137\56\160\171"
#endif
},
    {"pandas.compat", modulecode_pandas$compat, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_PACKAGE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\165\163\145\162\163\134\161\167\167\71\63\134\141\160\160\144\141\164\141\134\154\157\143\141\154\134\160\162\157\147\162\141\155\163\134\160\171\164\150\157\156\134\160\171\164\150\157\156\63\61\61\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\160\141\156\144\141\163\134\143\157\155\160\141\164\134\137\137\151\156\151\164\137\137\56\160\171"
#endif
},
    {"pandas.compat._constants", modulecode_pandas$compat$_constants, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\165\163\145\162\163\134\161\167\167\71\63\134\141\160\160\144\141\164\141\134\154\157\143\141\154\134\160\162\157\147\162\141\155\163\134\160\171\164\150\157\156\134\160\171\164\150\157\156\63\61\61\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\160\141\156\144\141\163\134\143\157\155\160\141\164\134\137\143\157\156\163\164\141\156\164\163\56\160\171"
#endif
},
    {"pandas.compat._optional", modulecode_pandas$compat$_optional, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\165\163\145\162\163\134\161\167\167\71\63\134\141\160\160\144\141\164\141\134\154\157\143\141\154\134\160\162\157\147\162\141\155\163\134\160\171\164\150\157\156\134\160\171\164\150\157\156\63\61\61\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\160\141\156\144\141\163\134\143\157\155\160\141\164\134\137\157\160\164\151\157\156\141\154\56\160\171"
#endif
},
    {"pandas.compat.compressors", modulecode_pandas$compat$compressors, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\165\163\145\162\163\134\161\167\167\71\63\134\141\160\160\144\141\164\141\134\154\157\143\141\154\134\160\162\157\147\162\141\155\163\134\160\171\164\150\157\156\134\160\171\164\150\157\156\63\61\61\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\160\141\156\144\141\163\134\143\157\155\160\141\164\134\143\157\155\160\162\145\163\163\157\162\163\56\160\171"
#endif
},
    {"pandas.compat.numpy", modulecode_pandas$compat$numpy, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_PACKAGE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\165\163\145\162\163\134\161\167\167\71\63\134\141\160\160\144\141\164\141\134\154\157\143\141\154\134\160\162\157\147\162\141\155\163\134\160\171\164\150\157\156\134\160\171\164\150\157\156\63\61\61\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\160\141\156\144\141\163\134\143\157\155\160\141\164\134\156\165\155\160\171\134\137\137\151\156\151\164\137\137\56\160\171"
#endif
},
    {"pandas.compat.numpy.function", modulecode_pandas$compat$numpy$function, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\165\163\145\162\163\134\161\167\167\71\63\134\141\160\160\144\141\164\141\134\154\157\143\141\154\134\160\162\157\147\162\141\155\163\134\160\171\164\150\157\156\134\160\171\164\150\157\156\63\61\61\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\160\141\156\144\141\163\134\143\157\155\160\141\164\134\156\165\155\160\171\134\146\165\156\143\164\151\157\156\56\160\171"
#endif
},
    {"pandas.compat.pickle_compat", modulecode_pandas$compat$pickle_compat, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\165\163\145\162\163\134\161\167\167\71\63\134\141\160\160\144\141\164\141\134\154\157\143\141\154\134\160\162\157\147\162\141\155\163\134\160\171\164\150\157\156\134\160\171\164\150\157\156\63\61\61\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\160\141\156\144\141\163\134\143\157\155\160\141\164\134\160\151\143\153\154\145\137\143\157\155\160\141\164\56\160\171"
#endif
},
    {"pandas.compat.pyarrow", modulecode_pandas$compat$pyarrow, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\165\163\145\162\163\134\161\167\167\71\63\134\141\160\160\144\141\164\141\134\154\157\143\141\154\134\160\162\157\147\162\141\155\163\134\160\171\164\150\157\156\134\160\171\164\150\157\156\63\61\61\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\160\141\156\144\141\163\134\143\157\155\160\141\164\134\160\171\141\162\162\157\167\56\160\171"
#endif
},
    {"pandas.core", modulecode_pandas$core, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_PACKAGE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\165\163\145\162\163\134\161\167\167\71\63\134\141\160\160\144\141\164\141\134\154\157\143\141\154\134\160\162\157\147\162\141\155\163\134\160\171\164\150\157\156\134\160\171\164\150\157\156\63\61\61\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\160\141\156\144\141\163\134\143\157\162\145\134\137\137\151\156\151\164\137\137\56\160\171"
#endif
},
    {"pandas.core._numba", modulecode_pandas$core$_numba, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_PACKAGE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\165\163\145\162\163\134\161\167\167\71\63\134\141\160\160\144\141\164\141\134\154\157\143\141\154\134\160\162\157\147\162\141\155\163\134\160\171\164\150\157\156\134\160\171\164\150\157\156\63\61\61\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\160\141\156\144\141\163\134\143\157\162\145\134\137\156\165\155\142\141\134\137\137\151\156\151\164\137\137\56\160\171"
#endif
},
    {"pandas.core._numba.executor", modulecode_pandas$core$_numba$executor, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\165\163\145\162\163\134\161\167\167\71\63\134\141\160\160\144\141\164\141\134\154\157\143\141\154\134\160\162\157\147\162\141\155\163\134\160\171\164\150\157\156\134\160\171\164\150\157\156\63\61\61\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\160\141\156\144\141\163\134\143\157\162\145\134\137\156\165\155\142\141\134\145\170\145\143\165\164\157\162\56\160\171"
#endif
},
    {"pandas.core._numba.kernels", modulecode_pandas$core$_numba$kernels, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_PACKAGE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\165\163\145\162\163\134\161\167\167\71\63\134\141\160\160\144\141\164\141\134\154\157\143\141\154\134\160\162\157\147\162\141\155\163\134\160\171\164\150\157\156\134\160\171\164\150\157\156\63\61\61\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\160\141\156\144\141\163\134\143\157\162\145\134\137\156\165\155\142\141\134\153\145\162\156\145\154\163\134\137\137\151\156\151\164\137\137\56\160\171"
#endif
},
    {"pandas.core._numba.kernels.mean_", modulecode_pandas$core$_numba$kernels$mean_, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\165\163\145\162\163\134\161\167\167\71\63\134\141\160\160\144\141\164\141\134\154\157\143\141\154\134\160\162\157\147\162\141\155\163\134\160\171\164\150\157\156\134\160\171\164\150\157\156\63\61\61\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\160\141\156\144\141\163\134\143\157\162\145\134\137\156\165\155\142\141\134\153\145\162\156\145\154\163\134\155\145\141\156\137\56\160\171"
#endif
},
    {"pandas.core._numba.kernels.min_max_", modulecode_pandas$core$_numba$kernels$min_max_, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\165\163\145\162\163\134\161\167\167\71\63\134\141\160\160\144\141\164\141\134\154\157\143\141\154\134\160\162\157\147\162\141\155\163\134\160\171\164\150\157\156\134\160\171\164\150\157\156\63\61\61\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\160\141\156\144\141\163\134\143\157\162\145\134\137\156\165\155\142\141\134\153\145\162\156\145\154\163\134\155\151\156\137\155\141\170\137\56\160\171"
#endif
},
    {"pandas.core._numba.kernels.shared", modulecode_pandas$core$_numba$kernels$shared, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\165\163\145\162\163\134\161\167\167\71\63\134\141\160\160\144\141\164\141\134\154\157\143\141\154\134\160\162\157\147\162\141\155\163\134\160\171\164\150\157\156\134\160\171\164\150\157\156\63\61\61\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\160\141\156\144\141\163\134\143\157\162\145\134\137\156\165\155\142\141\134\153\145\162\156\145\154\163\134\163\150\141\162\145\144\56\160\171"
#endif
},
    {"pandas.core._numba.kernels.sum_", modulecode_pandas$core$_numba$kernels$sum_, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\165\163\145\162\163\134\161\167\167\71\63\134\141\160\160\144\141\164\141\134\154\157\143\141\154\134\160\162\157\147\162\141\155\163\134\160\171\164\150\157\156\134\160\171\164\150\157\156\63\61\61\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\160\141\156\144\141\163\134\143\157\162\145\134\137\156\165\155\142\141\134\153\145\162\156\145\154\163\134\163\165\155\137\56\160\171"
#endif
},
    {"pandas.core._numba.kernels.var_", modulecode_pandas$core$_numba$kernels$var_, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\165\163\145\162\163\134\161\167\167\71\63\134\141\160\160\144\141\164\141\134\154\157\143\141\154\134\160\162\157\147\162\141\155\163\134\160\171\164\150\157\156\134\160\171\164\150\157\156\63\61\61\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\160\141\156\144\141\163\134\143\157\162\145\134\137\156\165\155\142\141\134\153\145\162\156\145\154\163\134\166\141\162\137\56\160\171"
#endif
},
    {"pandas.core.accessor", modulecode_pandas$core$accessor, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\165\163\145\162\163\134\161\167\167\71\63\134\141\160\160\144\141\164\141\134\154\157\143\141\154\134\160\162\157\147\162\141\155\163\134\160\171\164\150\157\156\134\160\171\164\150\157\156\63\61\61\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\160\141\156\144\141\163\134\143\157\162\145\134\141\143\143\145\163\163\157\162\56\160\171"
#endif
},
    {"pandas.core.algorithms", modulecode_pandas$core$algorithms, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\165\163\145\162\163\134\161\167\167\71\63\134\141\160\160\144\141\164\141\134\154\157\143\141\154\134\160\162\157\147\162\141\155\163\134\160\171\164\150\157\156\134\160\171\164\150\157\156\63\61\61\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\160\141\156\144\141\163\134\143\157\162\145\134\141\154\147\157\162\151\164\150\155\163\56\160\171"
#endif
},
    {"pandas.core.api", modulecode_pandas$core$api, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\165\163\145\162\163\134\161\167\167\71\63\134\141\160\160\144\141\164\141\134\154\157\143\141\154\134\160\162\157\147\162\141\155\163\134\160\171\164\150\157\156\134\160\171\164\150\157\156\63\61\61\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\160\141\156\144\141\163\134\143\157\162\145\134\141\160\151\56\160\171"
#endif
},
    {"pandas.core.apply", modulecode_pandas$core$apply, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\165\163\145\162\163\134\161\167\167\71\63\134\141\160\160\144\141\164\141\134\154\157\143\141\154\134\160\162\157\147\162\141\155\163\134\160\171\164\150\157\156\134\160\171\164\150\157\156\63\61\61\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\160\141\156\144\141\163\134\143\157\162\145\134\141\160\160\154\171\56\160\171"
#endif
},
    {"pandas.core.array_algos", modulecode_pandas$core$array_algos, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_PACKAGE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\165\163\145\162\163\134\161\167\167\71\63\134\141\160\160\144\141\164\141\134\154\157\143\141\154\134\160\162\157\147\162\141\155\163\134\160\171\164\150\157\156\134\160\171\164\150\157\156\63\61\61\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\160\141\156\144\141\163\134\143\157\162\145\134\141\162\162\141\171\137\141\154\147\157\163\134\137\137\151\156\151\164\137\137\56\160\171"
#endif
},
    {"pandas.core.array_algos.datetimelike_accumulations", modulecode_pandas$core$array_algos$datetimelike_accumulations, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\165\163\145\162\163\134\161\167\167\71\63\134\141\160\160\144\141\164\141\134\154\157\143\141\154\134\160\162\157\147\162\141\155\163\134\160\171\164\150\157\156\134\160\171\164\150\157\156\63\61\61\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\160\141\156\144\141\163\134\143\157\162\145\134\141\162\162\141\171\137\141\154\147\157\163\134\144\141\164\145\164\151\155\145\154\151\153\145\137\141\143\143\165\155\165\154\141\164\151\157\156\163\56\160\171"
#endif
},
    {"pandas.core.array_algos.masked_accumulations", modulecode_pandas$core$array_algos$masked_accumulations, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\165\163\145\162\163\134\161\167\167\71\63\134\141\160\160\144\141\164\141\134\154\157\143\141\154\134\160\162\157\147\162\141\155\163\134\160\171\164\150\157\156\134\160\171\164\150\157\156\63\61\61\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\160\141\156\144\141\163\134\143\157\162\145\134\141\162\162\141\171\137\141\154\147\157\163\134\155\141\163\153\145\144\137\141\143\143\165\155\165\154\141\164\151\157\156\163\56\160\171"
#endif
},
    {"pandas.core.array_algos.masked_reductions", modulecode_pandas$core$array_algos$masked_reductions, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\165\163\145\162\163\134\161\167\167\71\63\134\141\160\160\144\141\164\141\134\154\157\143\141\154\134\160\162\157\147\162\141\155\163\134\160\171\164\150\157\156\134\160\171\164\150\157\156\63\61\61\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\160\141\156\144\141\163\134\143\157\162\145\134\141\162\162\141\171\137\141\154\147\157\163\134\155\141\163\153\145\144\137\162\145\144\165\143\164\151\157\156\163\56\160\171"
#endif
},
    {"pandas.core.array_algos.putmask", modulecode_pandas$core$array_algos$putmask, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\165\163\145\162\163\134\161\167\167\71\63\134\141\160\160\144\141\164\141\134\154\157\143\141\154\134\160\162\157\147\162\141\155\163\134\160\171\164\150\157\156\134\160\171\164\150\157\156\63\61\61\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\160\141\156\144\141\163\134\143\157\162\145\134\141\162\162\141\171\137\141\154\147\157\163\134\160\165\164\155\141\163\153\56\160\171"
#endif
},
    {"pandas.core.array_algos.quantile", modulecode_pandas$core$array_algos$quantile, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\165\163\145\162\163\134\161\167\167\71\63\134\141\160\160\144\141\164\141\134\154\157\143\141\154\134\160\162\157\147\162\141\155\163\134\160\171\164\150\157\156\134\160\171\164\150\157\156\63\61\61\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\160\141\156\144\141\163\134\143\157\162\145\134\141\162\162\141\171\137\141\154\147\157\163\134\161\165\141\156\164\151\154\145\56\160\171"
#endif
},
    {"pandas.core.array_algos.replace", modulecode_pandas$core$array_algos$replace, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\165\163\145\162\163\134\161\167\167\71\63\134\141\160\160\144\141\164\141\134\154\157\143\141\154\134\160\162\157\147\162\141\155\163\134\160\171\164\150\157\156\134\160\171\164\150\157\156\63\61\61\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\160\141\156\144\141\163\134\143\157\162\145\134\141\162\162\141\171\137\141\154\147\157\163\134\162\145\160\154\141\143\145\56\160\171"
#endif
},
    {"pandas.core.array_algos.take", modulecode_pandas$core$array_algos$take, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\165\163\145\162\163\134\161\167\167\71\63\134\141\160\160\144\141\164\141\134\154\157\143\141\154\134\160\162\157\147\162\141\155\163\134\160\171\164\150\157\156\134\160\171\164\150\157\156\63\61\61\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\160\141\156\144\141\163\134\143\157\162\145\134\141\162\162\141\171\137\141\154\147\157\163\134\164\141\153\145\56\160\171"
#endif
},
    {"pandas.core.array_algos.transforms", modulecode_pandas$core$array_algos$transforms, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\165\163\145\162\163\134\161\167\167\71\63\134\141\160\160\144\141\164\141\134\154\157\143\141\154\134\160\162\157\147\162\141\155\163\134\160\171\164\150\157\156\134\160\171\164\150\157\156\63\61\61\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\160\141\156\144\141\163\134\143\157\162\145\134\141\162\162\141\171\137\141\154\147\157\163\134\164\162\141\156\163\146\157\162\155\163\56\160\171"
#endif
},
    {"pandas.core.arraylike", modulecode_pandas$core$arraylike, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\165\163\145\162\163\134\161\167\167\71\63\134\141\160\160\144\141\164\141\134\154\157\143\141\154\134\160\162\157\147\162\141\155\163\134\160\171\164\150\157\156\134\160\171\164\150\157\156\63\61\61\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\160\141\156\144\141\163\134\143\157\162\145\134\141\162\162\141\171\154\151\153\145\56\160\171"
#endif
},
    {"pandas.core.arrays", modulecode_pandas$core$arrays, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_PACKAGE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\165\163\145\162\163\134\161\167\167\71\63\134\141\160\160\144\141\164\141\134\154\157\143\141\154\134\160\162\157\147\162\141\155\163\134\160\171\164\150\157\156\134\160\171\164\150\157\156\63\61\61\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\160\141\156\144\141\163\134\143\157\162\145\134\141\162\162\141\171\163\134\137\137\151\156\151\164\137\137\56\160\171"
#endif
},
    {"pandas.core.arrays._mixins", modulecode_pandas$core$arrays$_mixins, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\165\163\145\162\163\134\161\167\167\71\63\134\141\160\160\144\141\164\141\134\154\157\143\141\154\134\160\162\157\147\162\141\155\163\134\160\171\164\150\157\156\134\160\171\164\150\157\156\63\61\61\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\160\141\156\144\141\163\134\143\157\162\145\134\141\162\162\141\171\163\134\137\155\151\170\151\156\163\56\160\171"
#endif
},
    {"pandas.core.arrays._ranges", modulecode_pandas$core$arrays$_ranges, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\165\163\145\162\163\134\161\167\167\71\63\134\141\160\160\144\141\164\141\134\154\157\143\141\154\134\160\162\157\147\162\141\155\163\134\160\171\164\150\157\156\134\160\171\164\150\157\156\63\61\61\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\160\141\156\144\141\163\134\143\157\162\145\134\141\162\162\141\171\163\134\137\162\141\156\147\145\163\56\160\171"
#endif
},
    {"pandas.core.arrays.arrow", modulecode_pandas$core$arrays$arrow, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_PACKAGE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\165\163\145\162\163\134\161\167\167\71\63\134\141\160\160\144\141\164\141\134\154\157\143\141\154\134\160\162\157\147\162\141\155\163\134\160\171\164\150\157\156\134\160\171\164\150\157\156\63\61\61\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\160\141\156\144\141\163\134\143\157\162\145\134\141\162\162\141\171\163\134\141\162\162\157\167\134\137\137\151\156\151\164\137\137\56\160\171"
#endif
},
    {"pandas.core.arrays.arrow._arrow_utils", modulecode_pandas$core$arrays$arrow$_arrow_utils, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\165\163\145\162\163\134\161\167\167\71\63\134\141\160\160\144\141\164\141\134\154\157\143\141\154\134\160\162\157\147\162\141\155\163\134\160\171\164\150\157\156\134\160\171\164\150\157\156\63\61\61\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\160\141\156\144\141\163\134\143\157\162\145\134\141\162\162\141\171\163\134\141\162\162\157\167\134\137\141\162\162\157\167\137\165\164\151\154\163\56\160\171"
#endif
},
    {"pandas.core.arrays.arrow.array", modulecode_pandas$core$arrays$arrow$array, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\165\163\145\162\163\134\161\167\167\71\63\134\141\160\160\144\141\164\141\134\154\157\143\141\154\134\160\162\157\147\162\141\155\163\134\160\171\164\150\157\156\134\160\171\164\150\157\156\63\61\61\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\160\141\156\144\141\163\134\143\157\162\145\134\141\162\162\141\171\163\134\141\162\162\157\167\134\141\162\162\141\171\56\160\171"
#endif
},
    {"pandas.core.arrays.arrow.dtype", modulecode_pandas$core$arrays$arrow$dtype, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\165\163\145\162\163\134\161\167\167\71\63\134\141\160\160\144\141\164\141\134\154\157\143\141\154\134\160\162\157\147\162\141\155\163\134\160\171\164\150\157\156\134\160\171\164\150\157\156\63\61\61\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\160\141\156\144\141\163\134\143\157\162\145\134\141\162\162\141\171\163\134\141\162\162\157\167\134\144\164\171\160\145\56\160\171"
#endif
},
    {"pandas.core.arrays.arrow.extension_types", modulecode_pandas$core$arrays$arrow$extension_types, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\165\163\145\162\163\134\161\167\167\71\63\134\141\160\160\144\141\164\141\134\154\157\143\141\154\134\160\162\157\147\162\141\155\163\134\160\171\164\150\157\156\134\160\171\164\150\157\156\63\61\61\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\160\141\156\144\141\163\134\143\157\162\145\134\141\162\162\141\171\163\134\141\162\162\157\167\134\145\170\164\145\156\163\151\157\156\137\164\171\160\145\163\56\160\171"
#endif
},
    {"pandas.core.arrays.base", modulecode_pandas$core$arrays$base, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\165\163\145\162\163\134\161\167\167\71\63\134\141\160\160\144\141\164\141\134\154\157\143\141\154\134\160\162\157\147\162\141\155\163\134\160\171\164\150\157\156\134\160\171\164\150\157\156\63\61\61\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\160\141\156\144\141\163\134\143\157\162\145\134\141\162\162\141\171\163\134\142\141\163\145\56\160\171"
#endif
},
    {"pandas.core.arrays.boolean", modulecode_pandas$core$arrays$boolean, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\165\163\145\162\163\134\161\167\167\71\63\134\141\160\160\144\141\164\141\134\154\157\143\141\154\134\160\162\157\147\162\141\155\163\134\160\171\164\150\157\156\134\160\171\164\150\157\156\63\61\61\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\160\141\156\144\141\163\134\143\157\162\145\134\141\162\162\141\171\163\134\142\157\157\154\145\141\156\56\160\171"
#endif
},
    {"pandas.core.arrays.categorical", modulecode_pandas$core$arrays$categorical, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\165\163\145\162\163\134\161\167\167\71\63\134\141\160\160\144\141\164\141\134\154\157\143\141\154\134\160\162\157\147\162\141\155\163\134\160\171\164\150\157\156\134\160\171\164\150\157\156\63\61\61\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\160\141\156\144\141\163\134\143\157\162\145\134\141\162\162\141\171\163\134\143\141\164\145\147\157\162\151\143\141\154\56\160\171"
#endif
},
    {"pandas.core.arrays.datetimelike", modulecode_pandas$core$arrays$datetimelike, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\165\163\145\162\163\134\161\167\167\71\63\134\141\160\160\144\141\164\141\134\154\157\143\141\154\134\160\162\157\147\162\141\155\163\134\160\171\164\150\157\156\134\160\171\164\150\157\156\63\61\61\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\160\141\156\144\141\163\134\143\157\162\145\134\141\162\162\141\171\163\134\144\141\164\145\164\151\155\145\154\151\153\145\56\160\171"
#endif
},
    {"pandas.core.arrays.datetimes", modulecode_pandas$core$arrays$datetimes, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\165\163\145\162\163\134\161\167\167\71\63\134\141\160\160\144\141\164\141\134\154\157\143\141\154\134\160\162\157\147\162\141\155\163\134\160\171\164\150\157\156\134\160\171\164\150\157\156\63\61\61\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\160\141\156\144\141\163\134\143\157\162\145\134\141\162\162\141\171\163\134\144\141\164\145\164\151\155\145\163\56\160\171"
#endif
},
    {"pandas.core.arrays.floating", modulecode_pandas$core$arrays$floating, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\165\163\145\162\163\134\161\167\167\71\63\134\141\160\160\144\141\164\141\134\154\157\143\141\154\134\160\162\157\147\162\141\155\163\134\160\171\164\150\157\156\134\160\171\164\150\157\156\63\61\61\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\160\141\156\144\141\163\134\143\157\162\145\134\141\162\162\141\171\163\134\146\154\157\141\164\151\156\147\56\160\171"
#endif
},
    {"pandas.core.arrays.integer", modulecode_pandas$core$arrays$integer, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\165\163\145\162\163\134\161\167\167\71\63\134\141\160\160\144\141\164\141\134\154\157\143\141\154\134\160\162\157\147\162\141\155\163\134\160\171\164\150\157\156\134\160\171\164\150\157\156\63\61\61\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\160\141\156\144\141\163\134\143\157\162\145\134\141\162\162\141\171\163\134\151\156\164\145\147\145\162\56\160\171"
#endif
},
    {"pandas.core.arrays.interval", modulecode_pandas$core$arrays$interval, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\165\163\145\162\163\134\161\167\167\71\63\134\141\160\160\144\141\164\141\134\154\157\143\141\154\134\160\162\157\147\162\141\155\163\134\160\171\164\150\157\156\134\160\171\164\150\157\156\63\61\61\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\160\141\156\144\141\163\134\143\157\162\145\134\141\162\162\141\171\163\134\151\156\164\145\162\166\141\154\56\160\171"
#endif
},
    {"pandas.core.arrays.masked", modulecode_pandas$core$arrays$masked, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\165\163\145\162\163\134\161\167\167\71\63\134\141\160\160\144\141\164\141\134\154\157\143\141\154\134\160\162\157\147\162\141\155\163\134\160\171\164\150\157\156\134\160\171\164\150\157\156\63\61\61\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\160\141\156\144\141\163\134\143\157\162\145\134\141\162\162\141\171\163\134\155\141\163\153\145\144\56\160\171"
#endif
},
    {"pandas.core.arrays.numeric", modulecode_pandas$core$arrays$numeric, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\165\163\145\162\163\134\161\167\167\71\63\134\141\160\160\144\141\164\141\134\154\157\143\141\154\134\160\162\157\147\162\141\155\163\134\160\171\164\150\157\156\134\160\171\164\150\157\156\63\61\61\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\160\141\156\144\141\163\134\143\157\162\145\134\141\162\162\141\171\163\134\156\165\155\145\162\151\143\56\160\171"
#endif
},
    {"pandas.core.arrays.numpy_", modulecode_pandas$core$arrays$numpy_, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\165\163\145\162\163\134\161\167\167\71\63\134\141\160\160\144\141\164\141\134\154\157\143\141\154\134\160\162\157\147\162\141\155\163\134\160\171\164\150\157\156\134\160\171\164\150\157\156\63\61\61\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\160\141\156\144\141\163\134\143\157\162\145\134\141\162\162\141\171\163\134\156\165\155\160\171\137\56\160\171"
#endif
},
    {"pandas.core.arrays.period", modulecode_pandas$core$arrays$period, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\165\163\145\162\163\134\161\167\167\71\63\134\141\160\160\144\141\164\141\134\154\157\143\141\154\134\160\162\157\147\162\141\155\163\134\160\171\164\150\157\156\134\160\171\164\150\157\156\63\61\61\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\160\141\156\144\141\163\134\143\157\162\145\134\141\162\162\141\171\163\134\160\145\162\151\157\144\56\160\171"
#endif
},
    {"pandas.core.arrays.sparse", modulecode_pandas$core$arrays$sparse, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_PACKAGE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\165\163\145\162\163\134\161\167\167\71\63\134\141\160\160\144\141\164\141\134\154\157\143\141\154\134\160\162\157\147\162\141\155\163\134\160\171\164\150\157\156\134\160\171\164\150\157\156\63\61\61\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\160\141\156\144\141\163\134\143\157\162\145\134\141\162\162\141\171\163\134\163\160\141\162\163\145\134\137\137\151\156\151\164\137\137\56\160\171"
#endif
},
    {"pandas.core.arrays.sparse.accessor", modulecode_pandas$core$arrays$sparse$accessor, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\165\163\145\162\163\134\161\167\167\71\63\134\141\160\160\144\141\164\141\134\154\157\143\141\154\134\160\162\157\147\162\141\155\163\134\160\171\164\150\157\156\134\160\171\164\150\157\156\63\61\61\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\160\141\156\144\141\163\134\143\157\162\145\134\141\162\162\141\171\163\134\163\160\141\162\163\145\134\141\143\143\145\163\163\157\162\56\160\171"
#endif
},
    {"pandas.core.arrays.sparse.array", modulecode_pandas$core$arrays$sparse$array, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\165\163\145\162\163\134\161\167\167\71\63\134\141\160\160\144\141\164\141\134\154\157\143\141\154\134\160\162\157\147\162\141\155\163\134\160\171\164\150\157\156\134\160\171\164\150\157\156\63\61\61\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\160\141\156\144\141\163\134\143\157\162\145\134\141\162\162\141\171\163\134\163\160\141\162\163\145\134\141\162\162\141\171\56\160\171"
#endif
},
    {"pandas.core.arrays.sparse.dtype", modulecode_pandas$core$arrays$sparse$dtype, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\165\163\145\162\163\134\161\167\167\71\63\134\141\160\160\144\141\164\141\134\154\157\143\141\154\134\160\162\157\147\162\141\155\163\134\160\171\164\150\157\156\134\160\171\164\150\157\156\63\61\61\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\160\141\156\144\141\163\134\143\157\162\145\134\141\162\162\141\171\163\134\163\160\141\162\163\145\134\144\164\171\160\145\56\160\171"
#endif
},
    {"pandas.core.arrays.sparse.scipy_sparse", modulecode_pandas$core$arrays$sparse$scipy_sparse, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\165\163\145\162\163\134\161\167\167\71\63\134\141\160\160\144\141\164\141\134\154\157\143\141\154\134\160\162\157\147\162\141\155\163\134\160\171\164\150\157\156\134\160\171\164\150\157\156\63\61\61\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\160\141\156\144\141\163\134\143\157\162\145\134\141\162\162\141\171\163\134\163\160\141\162\163\145\134\163\143\151\160\171\137\163\160\141\162\163\145\56\160\171"
#endif
},
    {"pandas.core.arrays.string_", modulecode_pandas$core$arrays$string_, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\165\163\145\162\163\134\161\167\167\71\63\134\141\160\160\144\141\164\141\134\154\157\143\141\154\134\160\162\157\147\162\141\155\163\134\160\171\164\150\157\156\134\160\171\164\150\157\156\63\61\61\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\160\141\156\144\141\163\134\143\157\162\145\134\141\162\162\141\171\163\134\163\164\162\151\156\147\137\56\160\171"
#endif
},
    {"pandas.core.arrays.string_arrow", modulecode_pandas$core$arrays$string_arrow, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\165\163\145\162\163\134\161\167\167\71\63\134\141\160\160\144\141\164\141\134\154\157\143\141\154\134\160\162\157\147\162\141\155\163\134\160\171\164\150\157\156\134\160\171\164\150\157\156\63\61\61\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\160\141\156\144\141\163\134\143\157\162\145\134\141\162\162\141\171\163\134\163\164\162\151\156\147\137\141\162\162\157\167\56\160\171"
#endif
},
    {"pandas.core.arrays.timedeltas", modulecode_pandas$core$arrays$timedeltas, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\165\163\145\162\163\134\161\167\167\71\63\134\141\160\160\144\141\164\141\134\154\157\143\141\154\134\160\162\157\147\162\141\155\163\134\160\171\164\150\157\156\134\160\171\164\150\157\156\63\61\61\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\160\141\156\144\141\163\134\143\157\162\145\134\141\162\162\141\171\163\134\164\151\155\145\144\145\154\164\141\163\56\160\171"
#endif
},
    {"pandas.core.base", modulecode_pandas$core$base, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\165\163\145\162\163\134\161\167\167\71\63\134\141\160\160\144\141\164\141\134\154\157\143\141\154\134\160\162\157\147\162\141\155\163\134\160\171\164\150\157\156\134\160\171\164\150\157\156\63\61\61\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\160\141\156\144\141\163\134\143\157\162\145\134\142\141\163\145\56\160\171"
#endif
},
    {"pandas.core.common", modulecode_pandas$core$common, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\165\163\145\162\163\134\161\167\167\71\63\134\141\160\160\144\141\164\141\134\154\157\143\141\154\134\160\162\157\147\162\141\155\163\134\160\171\164\150\157\156\134\160\171\164\150\157\156\63\61\61\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\160\141\156\144\141\163\134\143\157\162\145\134\143\157\155\155\157\156\56\160\171"
#endif
},
    {"pandas.core.computation", modulecode_pandas$core$computation, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_PACKAGE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\165\163\145\162\163\134\161\167\167\71\63\134\141\160\160\144\141\164\141\134\154\157\143\141\154\134\160\162\157\147\162\141\155\163\134\160\171\164\150\157\156\134\160\171\164\150\157\156\63\61\61\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\160\141\156\144\141\163\134\143\157\162\145\134\143\157\155\160\165\164\141\164\151\157\156\134\137\137\151\156\151\164\137\137\56\160\171"
#endif
},
    {"pandas.core.computation.align", modulecode_pandas$core$computation$align, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\165\163\145\162\163\134\161\167\167\71\63\134\141\160\160\144\141\164\141\134\154\157\143\141\154\134\160\162\157\147\162\141\155\163\134\160\171\164\150\157\156\134\160\171\164\150\157\156\63\61\61\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\160\141\156\144\141\163\134\143\157\162\145\134\143\157\155\160\165\164\141\164\151\157\156\134\141\154\151\147\156\56\160\171"
#endif
},
    {"pandas.core.computation.api", modulecode_pandas$core$computation$api, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\165\163\145\162\163\134\161\167\167\71\63\134\141\160\160\144\141\164\141\134\154\157\143\141\154\134\160\162\157\147\162\141\155\163\134\160\171\164\150\157\156\134\160\171\164\150\157\156\63\61\61\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\160\141\156\144\141\163\134\143\157\162\145\134\143\157\155\160\165\164\141\164\151\157\156\134\141\160\151\56\160\171"
#endif
},
    {"pandas.core.computation.check", modulecode_pandas$core$computation$check, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\165\163\145\162\163\134\161\167\167\71\63\134\141\160\160\144\141\164\141\134\154\157\143\141\154\134\160\162\157\147\162\141\155\163\134\160\171\164\150\157\156\134\160\171\164\150\157\156\63\61\61\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\160\141\156\144\141\163\134\143\157\162\145\134\143\157\155\160\165\164\141\164\151\157\156\134\143\150\145\143\153\56\160\171"
#endif
},
    {"pandas.core.computation.common", modulecode_pandas$core$computation$common, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\165\163\145\162\163\134\161\167\167\71\63\134\141\160\160\144\141\164\141\134\154\157\143\141\154\134\160\162\157\147\162\141\155\163\134\160\171\164\150\157\156\134\160\171\164\150\157\156\63\61\61\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\160\141\156\144\141\163\134\143\157\162\145\134\143\157\155\160\165\164\141\164\151\157\156\134\143\157\155\155\157\156\56\160\171"
#endif
},
    {"pandas.core.computation.engines", modulecode_pandas$core$computation$engines, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\165\163\145\162\163\134\161\167\167\71\63\134\141\160\160\144\141\164\141\134\154\157\143\141\154\134\160\162\157\147\162\141\155\163\134\160\171\164\150\157\156\134\160\171\164\150\157\156\63\61\61\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\160\141\156\144\141\163\134\143\157\162\145\134\143\157\155\160\165\164\141\164\151\157\156\134\145\156\147\151\156\145\163\56\160\171"
#endif
},
    {"pandas.core.computation.eval", modulecode_pandas$core$computation$eval, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\165\163\145\162\163\134\161\167\167\71\63\134\141\160\160\144\141\164\141\134\154\157\143\141\154\134\160\162\157\147\162\141\155\163\134\160\171\164\150\157\156\134\160\171\164\150\157\156\63\61\61\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\160\141\156\144\141\163\134\143\157\162\145\134\143\157\155\160\165\164\141\164\151\157\156\134\145\166\141\154\56\160\171"
#endif
},
    {"pandas.core.computation.expr", modulecode_pandas$core$computation$expr, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\165\163\145\162\163\134\161\167\167\71\63\134\141\160\160\144\141\164\141\134\154\157\143\141\154\134\160\162\157\147\162\141\155\163\134\160\171\164\150\157\156\134\160\171\164\150\157\156\63\61\61\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\160\141\156\144\141\163\134\143\157\162\145\134\143\157\155\160\165\164\141\164\151\157\156\134\145\170\160\162\56\160\171"
#endif
},
    {"pandas.core.computation.expressions", modulecode_pandas$core$computation$expressions, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\165\163\145\162\163\134\161\167\167\71\63\134\141\160\160\144\141\164\141\134\154\157\143\141\154\134\160\162\157\147\162\141\155\163\134\160\171\164\150\157\156\134\160\171\164\150\157\156\63\61\61\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\160\141\156\144\141\163\134\143\157\162\145\134\143\157\155\160\165\164\141\164\151\157\156\134\145\170\160\162\145\163\163\151\157\156\163\56\160\171"
#endif
},
    {"pandas.core.computation.ops", modulecode_pandas$core$computation$ops, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\165\163\145\162\163\134\161\167\167\71\63\134\141\160\160\144\141\164\141\134\154\157\143\141\154\134\160\162\157\147\162\141\155\163\134\160\171\164\150\157\156\134\160\171\164\150\157\156\63\61\61\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\160\141\156\144\141\163\134\143\157\162\145\134\143\157\155\160\165\164\141\164\151\157\156\134\157\160\163\56\160\171"
#endif
},
    {"pandas.core.computation.parsing", modulecode_pandas$core$computation$parsing, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\165\163\145\162\163\134\161\167\167\71\63\134\141\160\160\144\141\164\141\134\154\157\143\141\154\134\160\162\157\147\162\141\155\163\134\160\171\164\150\157\156\134\160\171\164\150\157\156\63\61\61\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\160\141\156\144\141\163\134\143\157\162\145\134\143\157\155\160\165\164\141\164\151\157\156\134\160\141\162\163\151\156\147\56\160\171"
#endif
},
    {"pandas.core.computation.pytables", modulecode_pandas$core$computation$pytables, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\165\163\145\162\163\134\161\167\167\71\63\134\141\160\160\144\141\164\141\134\154\157\143\141\154\134\160\162\157\147\162\141\155\163\134\160\171\164\150\157\156\134\160\171\164\150\157\156\63\61\61\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\160\141\156\144\141\163\134\143\157\162\145\134\143\157\155\160\165\164\141\164\151\157\156\134\160\171\164\141\142\154\145\163\56\160\171"
#endif
},
    {"pandas.core.computation.scope", modulecode_pandas$core$computation$scope, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\165\163\145\162\163\134\161\167\167\71\63\134\141\160\160\144\141\164\141\134\154\157\143\141\154\134\160\162\157\147\162\141\155\163\134\160\171\164\150\157\156\134\160\171\164\150\157\156\63\61\61\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\160\141\156\144\141\163\134\143\157\162\145\134\143\157\155\160\165\164\141\164\151\157\156\134\163\143\157\160\145\56\160\171"
#endif
},
    {"pandas.core.config_init", modulecode_pandas$core$config_init, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\165\163\145\162\163\134\161\167\167\71\63\134\141\160\160\144\141\164\141\134\154\157\143\141\154\134\160\162\157\147\162\141\155\163\134\160\171\164\150\157\156\134\160\171\164\150\157\156\63\61\61\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\160\141\156\144\141\163\134\143\157\162\145\134\143\157\156\146\151\147\137\151\156\151\164\56\160\171"
#endif
},
    {"pandas.core.construction", modulecode_pandas$core$construction, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\165\163\145\162\163\134\161\167\167\71\63\134\141\160\160\144\141\164\141\134\154\157\143\141\154\134\160\162\157\147\162\141\155\163\134\160\171\164\150\157\156\134\160\171\164\150\157\156\63\61\61\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\160\141\156\144\141\163\134\143\157\162\145\134\143\157\156\163\164\162\165\143\164\151\157\156\56\160\171"
#endif
},
    {"pandas.core.dtypes", modulecode_pandas$core$dtypes, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_PACKAGE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\165\163\145\162\163\134\161\167\167\71\63\134\141\160\160\144\141\164\141\134\154\157\143\141\154\134\160\162\157\147\162\141\155\163\134\160\171\164\150\157\156\134\160\171\164\150\157\156\63\61\61\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\160\141\156\144\141\163\134\143\157\162\145\134\144\164\171\160\145\163\134\137\137\151\156\151\164\137\137\56\160\171"
#endif
},
    {"pandas.core.dtypes.api", modulecode_pandas$core$dtypes$api, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\165\163\145\162\163\134\161\167\167\71\63\134\141\160\160\144\141\164\141\134\154\157\143\141\154\134\160\162\157\147\162\141\155\163\134\160\171\164\150\157\156\134\160\171\164\150\157\156\63\61\61\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\160\141\156\144\141\163\134\143\157\162\145\134\144\164\171\160\145\163\134\141\160\151\56\160\171"
#endif
},
    {"pandas.core.dtypes.astype", modulecode_pandas$core$dtypes$astype, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\165\163\145\162\163\134\161\167\167\71\63\134\141\160\160\144\141\164\141\134\154\157\143\141\154\134\160\162\157\147\162\141\155\163\134\160\171\164\150\157\156\134\160\171\164\150\157\156\63\61\61\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\160\141\156\144\141\163\134\143\157\162\145\134\144\164\171\160\145\163\134\141\163\164\171\160\145\56\160\171"
#endif
},
    {"pandas.core.dtypes.base", modulecode_pandas$core$dtypes$base, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\165\163\145\162\163\134\161\167\167\71\63\134\141\160\160\144\141\164\141\134\154\157\143\141\154\134\160\162\157\147\162\141\155\163\134\160\171\164\150\157\156\134\160\171\164\150\157\156\63\61\61\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\160\141\156\144\141\163\134\143\157\162\145\134\144\164\171\160\145\163\134\142\141\163\145\56\160\171"
#endif
},
    {"pandas.core.dtypes.cast", modulecode_pandas$core$dtypes$cast, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\165\163\145\162\163\134\161\167\167\71\63\134\141\160\160\144\141\164\141\134\154\157\143\141\154\134\160\162\157\147\162\141\155\163\134\160\171\164\150\157\156\134\160\171\164\150\157\156\63\61\61\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\160\141\156\144\141\163\134\143\157\162\145\134\144\164\171\160\145\163\134\143\141\163\164\56\160\171"
#endif
},
    {"pandas.core.dtypes.common", modulecode_pandas$core$dtypes$common, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\165\163\145\162\163\134\161\167\167\71\63\134\141\160\160\144\141\164\141\134\154\157\143\141\154\134\160\162\157\147\162\141\155\163\134\160\171\164\150\157\156\134\160\171\164\150\157\156\63\61\61\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\160\141\156\144\141\163\134\143\157\162\145\134\144\164\171\160\145\163\134\143\157\155\155\157\156\56\160\171"
#endif
},
    {"pandas.core.dtypes.concat", modulecode_pandas$core$dtypes$concat, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\165\163\145\162\163\134\161\167\167\71\63\134\141\160\160\144\141\164\141\134\154\157\143\141\154\134\160\162\157\147\162\141\155\163\134\160\171\164\150\157\156\134\160\171\164\150\157\156\63\61\61\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\160\141\156\144\141\163\134\143\157\162\145\134\144\164\171\160\145\163\134\143\157\156\143\141\164\56\160\171"
#endif
},
    {"pandas.core.dtypes.dtypes", modulecode_pandas$core$dtypes$dtypes, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\165\163\145\162\163\134\161\167\167\71\63\134\141\160\160\144\141\164\141\134\154\157\143\141\154\134\160\162\157\147\162\141\155\163\134\160\171\164\150\157\156\134\160\171\164\150\157\156\63\61\61\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\160\141\156\144\141\163\134\143\157\162\145\134\144\164\171\160\145\163\134\144\164\171\160\145\163\56\160\171"
#endif
},
    {"pandas.core.dtypes.generic", modulecode_pandas$core$dtypes$generic, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\165\163\145\162\163\134\161\167\167\71\63\134\141\160\160\144\141\164\141\134\154\157\143\141\154\134\160\162\157\147\162\141\155\163\134\160\171\164\150\157\156\134\160\171\164\150\157\156\63\61\61\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\160\141\156\144\141\163\134\143\157\162\145\134\144\164\171\160\145\163\134\147\145\156\145\162\151\143\56\160\171"
#endif
},
    {"pandas.core.dtypes.inference", modulecode_pandas$core$dtypes$inference, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\165\163\145\162\163\134\161\167\167\71\63\134\141\160\160\144\141\164\141\134\154\157\143\141\154\134\160\162\157\147\162\141\155\163\134\160\171\164\150\157\156\134\160\171\164\150\157\156\63\61\61\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\160\141\156\144\141\163\134\143\157\162\145\134\144\164\171\160\145\163\134\151\156\146\145\162\145\156\143\145\56\160\171"
#endif
},
    {"pandas.core.dtypes.missing", modulecode_pandas$core$dtypes$missing, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\165\163\145\162\163\134\161\167\167\71\63\134\141\160\160\144\141\164\141\134\154\157\143\141\154\134\160\162\157\147\162\141\155\163\134\160\171\164\150\157\156\134\160\171\164\150\157\156\63\61\61\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\160\141\156\144\141\163\134\143\157\162\145\134\144\164\171\160\145\163\134\155\151\163\163\151\156\147\56\160\171"
#endif
},
    {"pandas.core.flags", modulecode_pandas$core$flags, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\165\163\145\162\163\134\161\167\167\71\63\134\141\160\160\144\141\164\141\134\154\157\143\141\154\134\160\162\157\147\162\141\155\163\134\160\171\164\150\157\156\134\160\171\164\150\157\156\63\61\61\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\160\141\156\144\141\163\134\143\157\162\145\134\146\154\141\147\163\56\160\171"
#endif
},
    {"pandas.core.frame", modulecode_pandas$core$frame, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\165\163\145\162\163\134\161\167\167\71\63\134\141\160\160\144\141\164\141\134\154\157\143\141\154\134\160\162\157\147\162\141\155\163\134\160\171\164\150\157\156\134\160\171\164\150\157\156\63\61\61\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\160\141\156\144\141\163\134\143\157\162\145\134\146\162\141\155\145\56\160\171"
#endif
},
    {"pandas.core.generic", modulecode_pandas$core$generic, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\165\163\145\162\163\134\161\167\167\71\63\134\141\160\160\144\141\164\141\134\154\157\143\141\154\134\160\162\157\147\162\141\155\163\134\160\171\164\150\157\156\134\160\171\164\150\157\156\63\61\61\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\160\141\156\144\141\163\134\143\157\162\145\134\147\145\156\145\162\151\143\56\160\171"
#endif
},
    {"pandas.core.groupby", modulecode_pandas$core$groupby, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_PACKAGE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\165\163\145\162\163\134\161\167\167\71\63\134\141\160\160\144\141\164\141\134\154\157\143\141\154\134\160\162\157\147\162\141\155\163\134\160\171\164\150\157\156\134\160\171\164\150\157\156\63\61\61\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\160\141\156\144\141\163\134\143\157\162\145\134\147\162\157\165\160\142\171\134\137\137\151\156\151\164\137\137\56\160\171"
#endif
},
    {"pandas.core.groupby.base", modulecode_pandas$core$groupby$base, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\165\163\145\162\163\134\161\167\167\71\63\134\141\160\160\144\141\164\141\134\154\157\143\141\154\134\160\162\157\147\162\141\155\163\134\160\171\164\150\157\156\134\160\171\164\150\157\156\63\61\61\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\160\141\156\144\141\163\134\143\157\162\145\134\147\162\157\165\160\142\171\134\142\141\163\145\56\160\171"
#endif
},
    {"pandas.core.groupby.categorical", modulecode_pandas$core$groupby$categorical, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\165\163\145\162\163\134\161\167\167\71\63\134\141\160\160\144\141\164\141\134\154\157\143\141\154\134\160\162\157\147\162\141\155\163\134\160\171\164\150\157\156\134\160\171\164\150\157\156\63\61\61\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\160\141\156\144\141\163\134\143\157\162\145\134\147\162\157\165\160\142\171\134\143\141\164\145\147\157\162\151\143\141\154\56\160\171"
#endif
},
    {"pandas.core.groupby.generic", modulecode_pandas$core$groupby$generic, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\165\163\145\162\163\134\161\167\167\71\63\134\141\160\160\144\141\164\141\134\154\157\143\141\154\134\160\162\157\147\162\141\155\163\134\160\171\164\150\157\156\134\160\171\164\150\157\156\63\61\61\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\160\141\156\144\141\163\134\143\157\162\145\134\147\162\157\165\160\142\171\134\147\145\156\145\162\151\143\56\160\171"
#endif
},
    {"pandas.core.groupby.groupby", modulecode_pandas$core$groupby$groupby, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\165\163\145\162\163\134\161\167\167\71\63\134\141\160\160\144\141\164\141\134\154\157\143\141\154\134\160\162\157\147\162\141\155\163\134\160\171\164\150\157\156\134\160\171\164\150\157\156\63\61\61\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\160\141\156\144\141\163\134\143\157\162\145\134\147\162\157\165\160\142\171\134\147\162\157\165\160\142\171\56\160\171"
#endif
},
    {"pandas.core.groupby.grouper", modulecode_pandas$core$groupby$grouper, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\165\163\145\162\163\134\161\167\167\71\63\134\141\160\160\144\141\164\141\134\154\157\143\141\154\134\160\162\157\147\162\141\155\163\134\160\171\164\150\157\156\134\160\171\164\150\157\156\63\61\61\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\160\141\156\144\141\163\134\143\157\162\145\134\147\162\157\165\160\142\171\134\147\162\157\165\160\145\162\56\160\171"
#endif
},
    {"pandas.core.groupby.indexing", modulecode_pandas$core$groupby$indexing, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\165\163\145\162\163\134\161\167\167\71\63\134\141\160\160\144\141\164\141\134\154\157\143\141\154\134\160\162\157\147\162\141\155\163\134\160\171\164\150\157\156\134\160\171\164\150\157\156\63\61\61\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\160\141\156\144\141\163\134\143\157\162\145\134\147\162\157\165\160\142\171\134\151\156\144\145\170\151\156\147\56\160\171"
#endif
},
    {"pandas.core.groupby.numba_", modulecode_pandas$core$groupby$numba_, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\165\163\145\162\163\134\161\167\167\71\63\134\141\160\160\144\141\164\141\134\154\157\143\141\154\134\160\162\157\147\162\141\155\163\134\160\171\164\150\157\156\134\160\171\164\150\157\156\63\61\61\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\160\141\156\144\141\163\134\143\157\162\145\134\147\162\157\165\160\142\171\134\156\165\155\142\141\137\56\160\171"
#endif
},
    {"pandas.core.groupby.ops", modulecode_pandas$core$groupby$ops, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\165\163\145\162\163\134\161\167\167\71\63\134\141\160\160\144\141\164\141\134\154\157\143\141\154\134\160\162\157\147\162\141\155\163\134\160\171\164\150\157\156\134\160\171\164\150\157\156\63\61\61\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\160\141\156\144\141\163\134\143\157\162\145\134\147\162\157\165\160\142\171\134\157\160\163\56\160\171"
#endif
},
    {"pandas.core.indexers", modulecode_pandas$core$indexers, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_PACKAGE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\165\163\145\162\163\134\161\167\167\71\63\134\141\160\160\144\141\164\141\134\154\157\143\141\154\134\160\162\157\147\162\141\155\163\134\160\171\164\150\157\156\134\160\171\164\150\157\156\63\61\61\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\160\141\156\144\141\163\134\143\157\162\145\134\151\156\144\145\170\145\162\163\134\137\137\151\156\151\164\137\137\56\160\171"
#endif
},
    {"pandas.core.indexers.objects", modulecode_pandas$core$indexers$objects, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\165\163\145\162\163\134\161\167\167\71\63\134\141\160\160\144\141\164\141\134\154\157\143\141\154\134\160\162\157\147\162\141\155\163\134\160\171\164\150\157\156\134\160\171\164\150\157\156\63\61\61\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\160\141\156\144\141\163\134\143\157\162\145\134\151\156\144\145\170\145\162\163\134\157\142\152\145\143\164\163\56\160\171"
#endif
},
    {"pandas.core.indexers.utils", modulecode_pandas$core$indexers$utils, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\165\163\145\162\163\134\161\167\167\71\63\134\141\160\160\144\141\164\141\134\154\157\143\141\154\134\160\162\157\147\162\141\155\163\134\160\171\164\150\157\156\134\160\171\164\150\157\156\63\61\61\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\160\141\156\144\141\163\134\143\157\162\145\134\151\156\144\145\170\145\162\163\134\165\164\151\154\163\56\160\171"
#endif
},
    {"pandas.core.indexes", modulecode_pandas$core$indexes, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_PACKAGE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\165\163\145\162\163\134\161\167\167\71\63\134\141\160\160\144\141\164\141\134\154\157\143\141\154\134\160\162\157\147\162\141\155\163\134\160\171\164\150\157\156\134\160\171\164\150\157\156\63\61\61\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\160\141\156\144\141\163\134\143\157\162\145\134\151\156\144\145\170\145\163\134\137\137\151\156\151\164\137\137\56\160\171"
#endif
},
    {"pandas.core.indexes.accessors", modulecode_pandas$core$indexes$accessors, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\165\163\145\162\163\134\161\167\167\71\63\134\141\160\160\144\141\164\141\134\154\157\143\141\154\134\160\162\157\147\162\141\155\163\134\160\171\164\150\157\156\134\160\171\164\150\157\156\63\61\61\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\160\141\156\144\141\163\134\143\157\162\145\134\151\156\144\145\170\145\163\134\141\143\143\145\163\163\157\162\163\56\160\171"
#endif
},
    {"pandas.core.indexes.api", modulecode_pandas$core$indexes$api, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\165\163\145\162\163\134\161\167\167\71\63\134\141\160\160\144\141\164\141\134\154\157\143\141\154\134\160\162\157\147\162\141\155\163\134\160\171\164\150\157\156\134\160\171\164\150\157\156\63\61\61\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\160\141\156\144\141\163\134\143\157\162\145\134\151\156\144\145\170\145\163\134\141\160\151\56\160\171"
#endif
},
    {"pandas.core.indexes.base", modulecode_pandas$core$indexes$base, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\165\163\145\162\163\134\161\167\167\71\63\134\141\160\160\144\141\164\141\134\154\157\143\141\154\134\160\162\157\147\162\141\155\163\134\160\171\164\150\157\156\134\160\171\164\150\157\156\63\61\61\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\160\141\156\144\141\163\134\143\157\162\145\134\151\156\144\145\170\145\163\134\142\141\163\145\56\160\171"
#endif
},
    {"pandas.core.indexes.category", modulecode_pandas$core$indexes$category, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\165\163\145\162\163\134\161\167\167\71\63\134\141\160\160\144\141\164\141\134\154\157\143\141\154\134\160\162\157\147\162\141\155\163\134\160\171\164\150\157\156\134\160\171\164\150\157\156\63\61\61\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\160\141\156\144\141\163\134\143\157\162\145\134\151\156\144\145\170\145\163\134\143\141\164\145\147\157\162\171\56\160\171"
#endif
},
    {"pandas.core.indexes.datetimelike", modulecode_pandas$core$indexes$datetimelike, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\165\163\145\162\163\134\161\167\167\71\63\134\141\160\160\144\141\164\141\134\154\157\143\141\154\134\160\162\157\147\162\141\155\163\134\160\171\164\150\157\156\134\160\171\164\150\157\156\63\61\61\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\160\141\156\144\141\163\134\143\157\162\145\134\151\156\144\145\170\145\163\134\144\141\164\145\164\151\155\145\154\151\153\145\56\160\171"
#endif
},
    {"pandas.core.indexes.datetimes", modulecode_pandas$core$indexes$datetimes, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\165\163\145\162\163\134\161\167\167\71\63\134\141\160\160\144\141\164\141\134\154\157\143\141\154\134\160\162\157\147\162\141\155\163\134\160\171\164\150\157\156\134\160\171\164\150\157\156\63\61\61\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\160\141\156\144\141\163\134\143\157\162\145\134\151\156\144\145\170\145\163\134\144\141\164\145\164\151\155\145\163\56\160\171"
#endif
},
    {"pandas.core.indexes.extension", modulecode_pandas$core$indexes$extension, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\165\163\145\162\163\134\161\167\167\71\63\134\141\160\160\144\141\164\141\134\154\157\143\141\154\134\160\162\157\147\162\141\155\163\134\160\171\164\150\157\156\134\160\171\164\150\157\156\63\61\61\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\160\141\156\144\141\163\134\143\157\162\145\134\151\156\144\145\170\145\163\134\145\170\164\145\156\163\151\157\156\56\160\171"
#endif
},
    {"pandas.core.indexes.frozen", modulecode_pandas$core$indexes$frozen, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\165\163\145\162\163\134\161\167\167\71\63\134\141\160\160\144\141\164\141\134\154\157\143\141\154\134\160\162\157\147\162\141\155\163\134\160\171\164\150\157\156\134\160\171\164\150\157\156\63\61\61\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\160\141\156\144\141\163\134\143\157\162\145\134\151\156\144\145\170\145\163\134\146\162\157\172\145\156\56\160\171"
#endif
},
    {"pandas.core.indexes.interval", modulecode_pandas$core$indexes$interval, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\165\163\145\162\163\134\161\167\167\71\63\134\141\160\160\144\141\164\141\134\154\157\143\141\154\134\160\162\157\147\162\141\155\163\134\160\171\164\150\157\156\134\160\171\164\150\157\156\63\61\61\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\160\141\156\144\141\163\134\143\157\162\145\134\151\156\144\145\170\145\163\134\151\156\164\145\162\166\141\154\56\160\171"
#endif
},
    {"pandas.core.indexes.multi", modulecode_pandas$core$indexes$multi, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\165\163\145\162\163\134\161\167\167\71\63\134\141\160\160\144\141\164\141\134\154\157\143\141\154\134\160\162\157\147\162\141\155\163\134\160\171\164\150\157\156\134\160\171\164\150\157\156\63\61\61\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\160\141\156\144\141\163\134\143\157\162\145\134\151\156\144\145\170\145\163\134\155\165\154\164\151\56\160\171"
#endif
},
    {"pandas.core.indexes.period", modulecode_pandas$core$indexes$period, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\165\163\145\162\163\134\161\167\167\71\63\134\141\160\160\144\141\164\141\134\154\157\143\141\154\134\160\162\157\147\162\141\155\163\134\160\171\164\150\157\156\134\160\171\164\150\157\156\63\61\61\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\160\141\156\144\141\163\134\143\157\162\145\134\151\156\144\145\170\145\163\134\160\145\162\151\157\144\56\160\171"
#endif
},
    {"pandas.core.indexes.range", modulecode_pandas$core$indexes$range, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\165\163\145\162\163\134\161\167\167\71\63\134\141\160\160\144\141\164\141\134\154\157\143\141\154\134\160\162\157\147\162\141\155\163\134\160\171\164\150\157\156\134\160\171\164\150\157\156\63\61\61\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\160\141\156\144\141\163\134\143\157\162\145\134\151\156\144\145\170\145\163\134\162\141\156\147\145\56\160\171"
#endif
},
    {"pandas.core.indexes.timedeltas", modulecode_pandas$core$indexes$timedeltas, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\165\163\145\162\163\134\161\167\167\71\63\134\141\160\160\144\141\164\141\134\154\157\143\141\154\134\160\162\157\147\162\141\155\163\134\160\171\164\150\157\156\134\160\171\164\150\157\156\63\61\61\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\160\141\156\144\141\163\134\143\157\162\145\134\151\156\144\145\170\145\163\134\164\151\155\145\144\145\154\164\141\163\56\160\171"
#endif
},
    {"pandas.core.indexing", modulecode_pandas$core$indexing, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\165\163\145\162\163\134\161\167\167\71\63\134\141\160\160\144\141\164\141\134\154\157\143\141\154\134\160\162\157\147\162\141\155\163\134\160\171\164\150\157\156\134\160\171\164\150\157\156\63\61\61\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\160\141\156\144\141\163\134\143\157\162\145\134\151\156\144\145\170\151\156\147\56\160\171"
#endif
},
    {"pandas.core.interchange", modulecode_pandas$core$interchange, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_PACKAGE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\165\163\145\162\163\134\161\167\167\71\63\134\141\160\160\144\141\164\141\134\154\157\143\141\154\134\160\162\157\147\162\141\155\163\134\160\171\164\150\157\156\134\160\171\164\150\157\156\63\61\61\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\160\141\156\144\141\163\134\143\157\162\145\134\151\156\164\145\162\143\150\141\156\147\145\134\137\137\151\156\151\164\137\137\56\160\171"
#endif
},
    {"pandas.core.interchange.buffer", modulecode_pandas$core$interchange$buffer, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\165\163\145\162\163\134\161\167\167\71\63\134\141\160\160\144\141\164\141\134\154\157\143\141\154\134\160\162\157\147\162\141\155\163\134\160\171\164\150\157\156\134\160\171\164\150\157\156\63\61\61\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\160\141\156\144\141\163\134\143\157\162\145\134\151\156\164\145\162\143\150\141\156\147\145\134\142\165\146\146\145\162\56\160\171"
#endif
},
    {"pandas.core.interchange.column", modulecode_pandas$core$interchange$column, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\165\163\145\162\163\134\161\167\167\71\63\134\141\160\160\144\141\164\141\134\154\157\143\141\154\134\160\162\157\147\162\141\155\163\134\160\171\164\150\157\156\134\160\171\164\150\157\156\63\61\61\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\160\141\156\144\141\163\134\143\157\162\145\134\151\156\164\145\162\143\150\141\156\147\145\134\143\157\154\165\155\156\56\160\171"
#endif
},
    {"pandas.core.interchange.dataframe", modulecode_pandas$core$interchange$dataframe, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\165\163\145\162\163\134\161\167\167\71\63\134\141\160\160\144\141\164\141\134\154\157\143\141\154\134\160\162\157\147\162\141\155\163\134\160\171\164\150\157\156\134\160\171\164\150\157\156\63\61\61\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\160\141\156\144\141\163\134\143\157\162\145\134\151\156\164\145\162\143\150\141\156\147\145\134\144\141\164\141\146\162\141\155\145\56\160\171"
#endif
},
    {"pandas.core.interchange.dataframe_protocol", modulecode_pandas$core$interchange$dataframe_protocol, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\165\163\145\162\163\134\161\167\167\71\63\134\141\160\160\144\141\164\141\134\154\157\143\141\154\134\160\162\157\147\162\141\155\163\134\160\171\164\150\157\156\134\160\171\164\150\157\156\63\61\61\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\160\141\156\144\141\163\134\143\157\162\145\134\151\156\164\145\162\143\150\141\156\147\145\134\144\141\164\141\146\162\141\155\145\137\160\162\157\164\157\143\157\154\56\160\171"
#endif
},
    {"pandas.core.interchange.from_dataframe", modulecode_pandas$core$interchange$from_dataframe, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\165\163\145\162\163\134\161\167\167\71\63\134\141\160\160\144\141\164\141\134\154\157\143\141\154\134\160\162\157\147\162\141\155\163\134\160\171\164\150\157\156\134\160\171\164\150\157\156\63\61\61\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\160\141\156\144\141\163\134\143\157\162\145\134\151\156\164\145\162\143\150\141\156\147\145\134\146\162\157\155\137\144\141\164\141\146\162\141\155\145\56\160\171"
#endif
},
    {"pandas.core.interchange.utils", modulecode_pandas$core$interchange$utils, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\165\163\145\162\163\134\161\167\167\71\63\134\141\160\160\144\141\164\141\134\154\157\143\141\154\134\160\162\157\147\162\141\155\163\134\160\171\164\150\157\156\134\160\171\164\150\157\156\63\61\61\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\160\141\156\144\141\163\134\143\157\162\145\134\151\156\164\145\162\143\150\141\156\147\145\134\165\164\151\154\163\56\160\171"
#endif
},
    {"pandas.core.internals", modulecode_pandas$core$internals, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_PACKAGE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\165\163\145\162\163\134\161\167\167\71\63\134\141\160\160\144\141\164\141\134\154\157\143\141\154\134\160\162\157\147\162\141\155\163\134\160\171\164\150\157\156\134\160\171\164\150\157\156\63\61\61\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\160\141\156\144\141\163\134\143\157\162\145\134\151\156\164\145\162\156\141\154\163\134\137\137\151\156\151\164\137\137\56\160\171"
#endif
},
    {"pandas.core.internals.api", modulecode_pandas$core$internals$api, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\165\163\145\162\163\134\161\167\167\71\63\134\141\160\160\144\141\164\141\134\154\157\143\141\154\134\160\162\157\147\162\141\155\163\134\160\171\164\150\157\156\134\160\171\164\150\157\156\63\61\61\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\160\141\156\144\141\163\134\143\157\162\145\134\151\156\164\145\162\156\141\154\163\134\141\160\151\56\160\171"
#endif
},
    {"pandas.core.internals.array_manager", modulecode_pandas$core$internals$array_manager, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\165\163\145\162\163\134\161\167\167\71\63\134\141\160\160\144\141\164\141\134\154\157\143\141\154\134\160\162\157\147\162\141\155\163\134\160\171\164\150\157\156\134\160\171\164\150\157\156\63\61\61\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\160\141\156\144\141\163\134\143\157\162\145\134\151\156\164\145\162\156\141\154\163\134\141\162\162\141\171\137\155\141\156\141\147\145\162\56\160\171"
#endif
},
    {"pandas.core.internals.base", modulecode_pandas$core$internals$base, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\165\163\145\162\163\134\161\167\167\71\63\134\141\160\160\144\141\164\141\134\154\157\143\141\154\134\160\162\157\147\162\141\155\163\134\160\171\164\150\157\156\134\160\171\164\150\157\156\63\61\61\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\160\141\156\144\141\163\134\143\157\162\145\134\151\156\164\145\162\156\141\154\163\134\142\141\163\145\56\160\171"
#endif
},
    {"pandas.core.internals.blocks", modulecode_pandas$core$internals$blocks, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\165\163\145\162\163\134\161\167\167\71\63\134\141\160\160\144\141\164\141\134\154\157\143\141\154\134\160\162\157\147\162\141\155\163\134\160\171\164\150\157\156\134\160\171\164\150\157\156\63\61\61\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\160\141\156\144\141\163\134\143\157\162\145\134\151\156\164\145\162\156\141\154\163\134\142\154\157\143\153\163\56\160\171"
#endif
},
    {"pandas.core.internals.concat", modulecode_pandas$core$internals$concat, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\165\163\145\162\163\134\161\167\167\71\63\134\141\160\160\144\141\164\141\134\154\157\143\141\154\134\160\162\157\147\162\141\155\163\134\160\171\164\150\157\156\134\160\171\164\150\157\156\63\61\61\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\160\141\156\144\141\163\134\143\157\162\145\134\151\156\164\145\162\156\141\154\163\134\143\157\156\143\141\164\56\160\171"
#endif
},
    {"pandas.core.internals.construction", modulecode_pandas$core$internals$construction, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\165\163\145\162\163\134\161\167\167\71\63\134\141\160\160\144\141\164\141\134\154\157\143\141\154\134\160\162\157\147\162\141\155\163\134\160\171\164\150\157\156\134\160\171\164\150\157\156\63\61\61\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\160\141\156\144\141\163\134\143\157\162\145\134\151\156\164\145\162\156\141\154\163\134\143\157\156\163\164\162\165\143\164\151\157\156\56\160\171"
#endif
},
    {"pandas.core.internals.managers", modulecode_pandas$core$internals$managers, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\165\163\145\162\163\134\161\167\167\71\63\134\141\160\160\144\141\164\141\134\154\157\143\141\154\134\160\162\157\147\162\141\155\163\134\160\171\164\150\157\156\134\160\171\164\150\157\156\63\61\61\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\160\141\156\144\141\163\134\143\157\162\145\134\151\156\164\145\162\156\141\154\163\134\155\141\156\141\147\145\162\163\56\160\171"
#endif
},
    {"pandas.core.internals.ops", modulecode_pandas$core$internals$ops, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\165\163\145\162\163\134\161\167\167\71\63\134\141\160\160\144\141\164\141\134\154\157\143\141\154\134\160\162\157\147\162\141\155\163\134\160\171\164\150\157\156\134\160\171\164\150\157\156\63\61\61\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\160\141\156\144\141\163\134\143\157\162\145\134\151\156\164\145\162\156\141\154\163\134\157\160\163\56\160\171"
#endif
},
    {"pandas.core.methods", modulecode_pandas$core$methods, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_PACKAGE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\165\163\145\162\163\134\161\167\167\71\63\134\141\160\160\144\141\164\141\134\154\157\143\141\154\134\160\162\157\147\162\141\155\163\134\160\171\164\150\157\156\134\160\171\164\150\157\156\63\61\61\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\160\141\156\144\141\163\134\143\157\162\145\134\155\145\164\150\157\144\163\134\137\137\151\156\151\164\137\137\56\160\171"
#endif
},
    {"pandas.core.methods.describe", modulecode_pandas$core$methods$describe, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\165\163\145\162\163\134\161\167\167\71\63\134\141\160\160\144\141\164\141\134\154\157\143\141\154\134\160\162\157\147\162\141\155\163\134\160\171\164\150\157\156\134\160\171\164\150\157\156\63\61\61\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\160\141\156\144\141\163\134\143\157\162\145\134\155\145\164\150\157\144\163\134\144\145\163\143\162\151\142\145\56\160\171"
#endif
},
    {"pandas.core.methods.selectn", modulecode_pandas$core$methods$selectn, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\165\163\145\162\163\134\161\167\167\71\63\134\141\160\160\144\141\164\141\134\154\157\143\141\154\134\160\162\157\147\162\141\155\163\134\160\171\164\150\157\156\134\160\171\164\150\157\156\63\61\61\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\160\141\156\144\141\163\134\143\157\162\145\134\155\145\164\150\157\144\163\134\163\145\154\145\143\164\156\56\160\171"
#endif
},
    {"pandas.core.methods.to_dict", modulecode_pandas$core$methods$to_dict, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\165\163\145\162\163\134\161\167\167\71\63\134\141\160\160\144\141\164\141\134\154\157\143\141\154\134\160\162\157\147\162\141\155\163\134\160\171\164\150\157\156\134\160\171\164\150\157\156\63\61\61\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\160\141\156\144\141\163\134\143\157\162\145\134\155\145\164\150\157\144\163\134\164\157\137\144\151\143\164\56\160\171"
#endif
},
    {"pandas.core.missing", modulecode_pandas$core$missing, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\165\163\145\162\163\134\161\167\167\71\63\134\141\160\160\144\141\164\141\134\154\157\143\141\154\134\160\162\157\147\162\141\155\163\134\160\171\164\150\157\156\134\160\171\164\150\157\156\63\61\61\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\160\141\156\144\141\163\134\143\157\162\145\134\155\151\163\163\151\156\147\56\160\171"
#endif
},
    {"pandas.core.nanops", modulecode_pandas$core$nanops, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\165\163\145\162\163\134\161\167\167\71\63\134\141\160\160\144\141\164\141\134\154\157\143\141\154\134\160\162\157\147\162\141\155\163\134\160\171\164\150\157\156\134\160\171\164\150\157\156\63\61\61\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\160\141\156\144\141\163\134\143\157\162\145\134\156\141\156\157\160\163\56\160\171"
#endif
},
    {"pandas.core.ops", modulecode_pandas$core$ops, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_PACKAGE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\165\163\145\162\163\134\161\167\167\71\63\134\141\160\160\144\141\164\141\134\154\157\143\141\154\134\160\162\157\147\162\141\155\163\134\160\171\164\150\157\156\134\160\171\164\150\157\156\63\61\61\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\160\141\156\144\141\163\134\143\157\162\145\134\157\160\163\134\137\137\151\156\151\164\137\137\56\160\171"
#endif
},
    {"pandas.core.ops.array_ops", modulecode_pandas$core$ops$array_ops, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\165\163\145\162\163\134\161\167\167\71\63\134\141\160\160\144\141\164\141\134\154\157\143\141\154\134\160\162\157\147\162\141\155\163\134\160\171\164\150\157\156\134\160\171\164\150\157\156\63\61\61\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\160\141\156\144\141\163\134\143\157\162\145\134\157\160\163\134\141\162\162\141\171\137\157\160\163\56\160\171"
#endif
},
    {"pandas.core.ops.common", modulecode_pandas$core$ops$common, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\165\163\145\162\163\134\161\167\167\71\63\134\141\160\160\144\141\164\141\134\154\157\143\141\154\134\160\162\157\147\162\141\155\163\134\160\171\164\150\157\156\134\160\171\164\150\157\156\63\61\61\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\160\141\156\144\141\163\134\143\157\162\145\134\157\160\163\134\143\157\155\155\157\156\56\160\171"
#endif
},
    {"pandas.core.ops.dispatch", modulecode_pandas$core$ops$dispatch, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\165\163\145\162\163\134\161\167\167\71\63\134\141\160\160\144\141\164\141\134\154\157\143\141\154\134\160\162\157\147\162\141\155\163\134\160\171\164\150\157\156\134\160\171\164\150\157\156\63\61\61\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\160\141\156\144\141\163\134\143\157\162\145\134\157\160\163\134\144\151\163\160\141\164\143\150\56\160\171"
#endif
},
    {"pandas.core.ops.docstrings", modulecode_pandas$core$ops$docstrings, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\165\163\145\162\163\134\161\167\167\71\63\134\141\160\160\144\141\164\141\134\154\157\143\141\154\134\160\162\157\147\162\141\155\163\134\160\171\164\150\157\156\134\160\171\164\150\157\156\63\61\61\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\160\141\156\144\141\163\134\143\157\162\145\134\157\160\163\134\144\157\143\163\164\162\151\156\147\163\56\160\171"
#endif
},
    {"pandas.core.ops.invalid", modulecode_pandas$core$ops$invalid, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\165\163\145\162\163\134\161\167\167\71\63\134\141\160\160\144\141\164\141\134\154\157\143\141\154\134\160\162\157\147\162\141\155\163\134\160\171\164\150\157\156\134\160\171\164\150\157\156\63\61\61\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\160\141\156\144\141\163\134\143\157\162\145\134\157\160\163\134\151\156\166\141\154\151\144\56\160\171"
#endif
},
    {"pandas.core.ops.mask_ops", modulecode_pandas$core$ops$mask_ops, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\165\163\145\162\163\134\161\167\167\71\63\134\141\160\160\144\141\164\141\134\154\157\143\141\154\134\160\162\157\147\162\141\155\163\134\160\171\164\150\157\156\134\160\171\164\150\157\156\63\61\61\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\160\141\156\144\141\163\134\143\157\162\145\134\157\160\163\134\155\141\163\153\137\157\160\163\56\160\171"
#endif
},
    {"pandas.core.ops.methods", modulecode_pandas$core$ops$methods, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\165\163\145\162\163\134\161\167\167\71\63\134\141\160\160\144\141\164\141\134\154\157\143\141\154\134\160\162\157\147\162\141\155\163\134\160\171\164\150\157\156\134\160\171\164\150\157\156\63\61\61\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\160\141\156\144\141\163\134\143\157\162\145\134\157\160\163\134\155\145\164\150\157\144\163\56\160\171"
#endif
},
    {"pandas.core.ops.missing", modulecode_pandas$core$ops$missing, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\165\163\145\162\163\134\161\167\167\71\63\134\141\160\160\144\141\164\141\134\154\157\143\141\154\134\160\162\157\147\162\141\155\163\134\160\171\164\150\157\156\134\160\171\164\150\157\156\63\61\61\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\160\141\156\144\141\163\134\143\157\162\145\134\157\160\163\134\155\151\163\163\151\156\147\56\160\171"
#endif
},
    {"pandas.core.resample", modulecode_pandas$core$resample, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\165\163\145\162\163\134\161\167\167\71\63\134\141\160\160\144\141\164\141\134\154\157\143\141\154\134\160\162\157\147\162\141\155\163\134\160\171\164\150\157\156\134\160\171\164\150\157\156\63\61\61\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\160\141\156\144\141\163\134\143\157\162\145\134\162\145\163\141\155\160\154\145\56\160\171"
#endif
},
    {"pandas.core.reshape", modulecode_pandas$core$reshape, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_PACKAGE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\165\163\145\162\163\134\161\167\167\71\63\134\141\160\160\144\141\164\141\134\154\157\143\141\154\134\160\162\157\147\162\141\155\163\134\160\171\164\150\157\156\134\160\171\164\150\157\156\63\61\61\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\160\141\156\144\141\163\134\143\157\162\145\134\162\145\163\150\141\160\145\134\137\137\151\156\151\164\137\137\56\160\171"
#endif
},
    {"pandas.core.reshape.api", modulecode_pandas$core$reshape$api, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\165\163\145\162\163\134\161\167\167\71\63\134\141\160\160\144\141\164\141\134\154\157\143\141\154\134\160\162\157\147\162\141\155\163\134\160\171\164\150\157\156\134\160\171\164\150\157\156\63\61\61\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\160\141\156\144\141\163\134\143\157\162\145\134\162\145\163\150\141\160\145\134\141\160\151\56\160\171"
#endif
},
    {"pandas.core.reshape.concat", modulecode_pandas$core$reshape$concat, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\165\163\145\162\163\134\161\167\167\71\63\134\141\160\160\144\141\164\141\134\154\157\143\141\154\134\160\162\157\147\162\141\155\163\134\160\171\164\150\157\156\134\160\171\164\150\157\156\63\61\61\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\160\141\156\144\141\163\134\143\157\162\145\134\162\145\163\150\141\160\145\134\143\157\156\143\141\164\56\160\171"
#endif
},
    {"pandas.core.reshape.encoding", modulecode_pandas$core$reshape$encoding, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\165\163\145\162\163\134\161\167\167\71\63\134\141\160\160\144\141\164\141\134\154\157\143\141\154\134\160\162\157\147\162\141\155\163\134\160\171\164\150\157\156\134\160\171\164\150\157\156\63\61\61\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\160\141\156\144\141\163\134\143\157\162\145\134\162\145\163\150\141\160\145\134\145\156\143\157\144\151\156\147\56\160\171"
#endif
},
    {"pandas.core.reshape.melt", modulecode_pandas$core$reshape$melt, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\165\163\145\162\163\134\161\167\167\71\63\134\141\160\160\144\141\164\141\134\154\157\143\141\154\134\160\162\157\147\162\141\155\163\134\160\171\164\150\157\156\134\160\171\164\150\157\156\63\61\61\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\160\141\156\144\141\163\134\143\157\162\145\134\162\145\163\150\141\160\145\134\155\145\154\164\56\160\171"
#endif
},
    {"pandas.core.reshape.merge", modulecode_pandas$core$reshape$merge, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\165\163\145\162\163\134\161\167\167\71\63\134\141\160\160\144\141\164\141\134\154\157\143\141\154\134\160\162\157\147\162\141\155\163\134\160\171\164\150\157\156\134\160\171\164\150\157\156\63\61\61\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\160\141\156\144\141\163\134\143\157\162\145\134\162\145\163\150\141\160\145\134\155\145\162\147\145\56\160\171"
#endif
},
    {"pandas.core.reshape.pivot", modulecode_pandas$core$reshape$pivot, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\165\163\145\162\163\134\161\167\167\71\63\134\141\160\160\144\141\164\141\134\154\157\143\141\154\134\160\162\157\147\162\141\155\163\134\160\171\164\150\157\156\134\160\171\164\150\157\156\63\61\61\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\160\141\156\144\141\163\134\143\157\162\145\134\162\145\163\150\141\160\145\134\160\151\166\157\164\56\160\171"
#endif
},
    {"pandas.core.reshape.reshape", modulecode_pandas$core$reshape$reshape, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\165\163\145\162\163\134\161\167\167\71\63\134\141\160\160\144\141\164\141\134\154\157\143\141\154\134\160\162\157\147\162\141\155\163\134\160\171\164\150\157\156\134\160\171\164\150\157\156\63\61\61\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\160\141\156\144\141\163\134\143\157\162\145\134\162\145\163\150\141\160\145\134\162\145\163\150\141\160\145\56\160\171"
#endif
},
    {"pandas.core.reshape.tile", modulecode_pandas$core$reshape$tile, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\165\163\145\162\163\134\161\167\167\71\63\134\141\160\160\144\141\164\141\134\154\157\143\141\154\134\160\162\157\147\162\141\155\163\134\160\171\164\150\157\156\134\160\171\164\150\157\156\63\61\61\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\160\141\156\144\141\163\134\143\157\162\145\134\162\145\163\150\141\160\145\134\164\151\154\145\56\160\171"
#endif
},
    {"pandas.core.reshape.util", modulecode_pandas$core$reshape$util, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\165\163\145\162\163\134\161\167\167\71\63\134\141\160\160\144\141\164\141\134\154\157\143\141\154\134\160\162\157\147\162\141\155\163\134\160\171\164\150\157\156\134\160\171\164\150\157\156\63\61\61\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\160\141\156\144\141\163\134\143\157\162\145\134\162\145\163\150\141\160\145\134\165\164\151\154\56\160\171"
#endif
},
    {"pandas.core.roperator", modulecode_pandas$core$roperator, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\165\163\145\162\163\134\161\167\167\71\63\134\141\160\160\144\141\164\141\134\154\157\143\141\154\134\160\162\157\147\162\141\155\163\134\160\171\164\150\157\156\134\160\171\164\150\157\156\63\61\61\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\160\141\156\144\141\163\134\143\157\162\145\134\162\157\160\145\162\141\164\157\162\56\160\171"
#endif
},
    {"pandas.core.sample", modulecode_pandas$core$sample, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\165\163\145\162\163\134\161\167\167\71\63\134\141\160\160\144\141\164\141\134\154\157\143\141\154\134\160\162\157\147\162\141\155\163\134\160\171\164\150\157\156\134\160\171\164\150\157\156\63\61\61\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\160\141\156\144\141\163\134\143\157\162\145\134\163\141\155\160\154\145\56\160\171"
#endif
},
    {"pandas.core.series", modulecode_pandas$core$series, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\165\163\145\162\163\134\161\167\167\71\63\134\141\160\160\144\141\164\141\134\154\157\143\141\154\134\160\162\157\147\162\141\155\163\134\160\171\164\150\157\156\134\160\171\164\150\157\156\63\61\61\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\160\141\156\144\141\163\134\143\157\162\145\134\163\145\162\151\145\163\56\160\171"
#endif
},
    {"pandas.core.shared_docs", modulecode_pandas$core$shared_docs, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\165\163\145\162\163\134\161\167\167\71\63\134\141\160\160\144\141\164\141\134\154\157\143\141\154\134\160\162\157\147\162\141\155\163\134\160\171\164\150\157\156\134\160\171\164\150\157\156\63\61\61\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\160\141\156\144\141\163\134\143\157\162\145\134\163\150\141\162\145\144\137\144\157\143\163\56\160\171"
#endif
},
    {"pandas.core.sorting", modulecode_pandas$core$sorting, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\165\163\145\162\163\134\161\167\167\71\63\134\141\160\160\144\141\164\141\134\154\157\143\141\154\134\160\162\157\147\162\141\155\163\134\160\171\164\150\157\156\134\160\171\164\150\157\156\63\61\61\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\160\141\156\144\141\163\134\143\157\162\145\134\163\157\162\164\151\156\147\56\160\171"
#endif
},
    {"pandas.core.strings", modulecode_pandas$core$strings, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_PACKAGE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\165\163\145\162\163\134\161\167\167\71\63\134\141\160\160\144\141\164\141\134\154\157\143\141\154\134\160\162\157\147\162\141\155\163\134\160\171\164\150\157\156\134\160\171\164\150\157\156\63\61\61\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\160\141\156\144\141\163\134\143\157\162\145\134\163\164\162\151\156\147\163\134\137\137\151\156\151\164\137\137\56\160\171"
#endif
},
    {"pandas.core.strings.accessor", modulecode_pandas$core$strings$accessor, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\165\163\145\162\163\134\161\167\167\71\63\134\141\160\160\144\141\164\141\134\154\157\143\141\154\134\160\162\157\147\162\141\155\163\134\160\171\164\150\157\156\134\160\171\164\150\157\156\63\61\61\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\160\141\156\144\141\163\134\143\157\162\145\134\163\164\162\151\156\147\163\134\141\143\143\145\163\163\157\162\56\160\171"
#endif
},
    {"pandas.core.strings.base", modulecode_pandas$core$strings$base, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\165\163\145\162\163\134\161\167\167\71\63\134\141\160\160\144\141\164\141\134\154\157\143\141\154\134\160\162\157\147\162\141\155\163\134\160\171\164\150\157\156\134\160\171\164\150\157\156\63\61\61\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\160\141\156\144\141\163\134\143\157\162\145\134\163\164\162\151\156\147\163\134\142\141\163\145\56\160\171"
#endif
},
    {"pandas.core.strings.object_array", modulecode_pandas$core$strings$object_array, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\165\163\145\162\163\134\161\167\167\71\63\134\141\160\160\144\141\164\141\134\154\157\143\141\154\134\160\162\157\147\162\141\155\163\134\160\171\164\150\157\156\134\160\171\164\150\157\156\63\61\61\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\160\141\156\144\141\163\134\143\157\162\145\134\163\164\162\151\156\147\163\134\157\142\152\145\143\164\137\141\162\162\141\171\56\160\171"
#endif
},
    {"pandas.core.tools", modulecode_pandas$core$tools, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_PACKAGE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\165\163\145\162\163\134\161\167\167\71\63\134\141\160\160\144\141\164\141\134\154\157\143\141\154\134\160\162\157\147\162\141\155\163\134\160\171\164\150\157\156\134\160\171\164\150\157\156\63\61\61\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\160\141\156\144\141\163\134\143\157\162\145\134\164\157\157\154\163\134\137\137\151\156\151\164\137\137\56\160\171"
#endif
},
    {"pandas.core.tools.datetimes", modulecode_pandas$core$tools$datetimes, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\165\163\145\162\163\134\161\167\167\71\63\134\141\160\160\144\141\164\141\134\154\157\143\141\154\134\160\162\157\147\162\141\155\163\134\160\171\164\150\157\156\134\160\171\164\150\157\156\63\61\61\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\160\141\156\144\141\163\134\143\157\162\145\134\164\157\157\154\163\134\144\141\164\145\164\151\155\145\163\56\160\171"
#endif
},
    {"pandas.core.tools.numeric", modulecode_pandas$core$tools$numeric, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\165\163\145\162\163\134\161\167\167\71\63\134\141\160\160\144\141\164\141\134\154\157\143\141\154\134\160\162\157\147\162\141\155\163\134\160\171\164\150\157\156\134\160\171\164\150\157\156\63\61\61\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\160\141\156\144\141\163\134\143\157\162\145\134\164\157\157\154\163\134\156\165\155\145\162\151\143\56\160\171"
#endif
},
    {"pandas.core.tools.timedeltas", modulecode_pandas$core$tools$timedeltas, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\165\163\145\162\163\134\161\167\167\71\63\134\141\160\160\144\141\164\141\134\154\157\143\141\154\134\160\162\157\147\162\141\155\163\134\160\171\164\150\157\156\134\160\171\164\150\157\156\63\61\61\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\160\141\156\144\141\163\134\143\157\162\145\134\164\157\157\154\163\134\164\151\155\145\144\145\154\164\141\163\56\160\171"
#endif
},
    {"pandas.core.tools.times", modulecode_pandas$core$tools$times, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\165\163\145\162\163\134\161\167\167\71\63\134\141\160\160\144\141\164\141\134\154\157\143\141\154\134\160\162\157\147\162\141\155\163\134\160\171\164\150\157\156\134\160\171\164\150\157\156\63\61\61\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\160\141\156\144\141\163\134\143\157\162\145\134\164\157\157\154\163\134\164\151\155\145\163\56\160\171"
#endif
},
    {"pandas.core.util", modulecode_pandas$core$util, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_PACKAGE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\165\163\145\162\163\134\161\167\167\71\63\134\141\160\160\144\141\164\141\134\154\157\143\141\154\134\160\162\157\147\162\141\155\163\134\160\171\164\150\157\156\134\160\171\164\150\157\156\63\61\61\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\160\141\156\144\141\163\134\143\157\162\145\134\165\164\151\154\134\137\137\151\156\151\164\137\137\56\160\171"
#endif
},
    {"pandas.core.util.hashing", modulecode_pandas$core$util$hashing, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\165\163\145\162\163\134\161\167\167\71\63\134\141\160\160\144\141\164\141\134\154\157\143\141\154\134\160\162\157\147\162\141\155\163\134\160\171\164\150\157\156\134\160\171\164\150\157\156\63\61\61\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\160\141\156\144\141\163\134\143\157\162\145\134\165\164\151\154\134\150\141\163\150\151\156\147\56\160\171"
#endif
},
    {"pandas.core.util.numba_", modulecode_pandas$core$util$numba_, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\165\163\145\162\163\134\161\167\167\71\63\134\141\160\160\144\141\164\141\134\154\157\143\141\154\134\160\162\157\147\162\141\155\163\134\160\171\164\150\157\156\134\160\171\164\150\157\156\63\61\61\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\160\141\156\144\141\163\134\143\157\162\145\134\165\164\151\154\134\156\165\155\142\141\137\56\160\171"
#endif
},
    {"pandas.core.window", modulecode_pandas$core$window, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_PACKAGE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\165\163\145\162\163\134\161\167\167\71\63\134\141\160\160\144\141\164\141\134\154\157\143\141\154\134\160\162\157\147\162\141\155\163\134\160\171\164\150\157\156\134\160\171\164\150\157\156\63\61\61\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\160\141\156\144\141\163\134\143\157\162\145\134\167\151\156\144\157\167\134\137\137\151\156\151\164\137\137\56\160\171"
#endif
},
    {"pandas.core.window.common", modulecode_pandas$core$window$common, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\165\163\145\162\163\134\161\167\167\71\63\134\141\160\160\144\141\164\141\134\154\157\143\141\154\134\160\162\157\147\162\141\155\163\134\160\171\164\150\157\156\134\160\171\164\150\157\156\63\61\61\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\160\141\156\144\141\163\134\143\157\162\145\134\167\151\156\144\157\167\134\143\157\155\155\157\156\56\160\171"
#endif
},
    {"pandas.core.window.doc", modulecode_pandas$core$window$doc, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\165\163\145\162\163\134\161\167\167\71\63\134\141\160\160\144\141\164\141\134\154\157\143\141\154\134\160\162\157\147\162\141\155\163\134\160\171\164\150\157\156\134\160\171\164\150\157\156\63\61\61\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\160\141\156\144\141\163\134\143\157\162\145\134\167\151\156\144\157\167\134\144\157\143\56\160\171"
#endif
},
    {"pandas.core.window.ewm", modulecode_pandas$core$window$ewm, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\165\163\145\162\163\134\161\167\167\71\63\134\141\160\160\144\141\164\141\134\154\157\143\141\154\134\160\162\157\147\162\141\155\163\134\160\171\164\150\157\156\134\160\171\164\150\157\156\63\61\61\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\160\141\156\144\141\163\134\143\157\162\145\134\167\151\156\144\157\167\134\145\167\155\56\160\171"
#endif
},
    {"pandas.core.window.expanding", modulecode_pandas$core$window$expanding, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\165\163\145\162\163\134\161\167\167\71\63\134\141\160\160\144\141\164\141\134\154\157\143\141\154\134\160\162\157\147\162\141\155\163\134\160\171\164\150\157\156\134\160\171\164\150\157\156\63\61\61\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\160\141\156\144\141\163\134\143\157\162\145\134\167\151\156\144\157\167\134\145\170\160\141\156\144\151\156\147\56\160\171"
#endif
},
    {"pandas.core.window.numba_", modulecode_pandas$core$window$numba_, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\165\163\145\162\163\134\161\167\167\71\63\134\141\160\160\144\141\164\141\134\154\157\143\141\154\134\160\162\157\147\162\141\155\163\134\160\171\164\150\157\156\134\160\171\164\150\157\156\63\61\61\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\160\141\156\144\141\163\134\143\157\162\145\134\167\151\156\144\157\167\134\156\165\155\142\141\137\56\160\171"
#endif
},
    {"pandas.core.window.online", modulecode_pandas$core$window$online, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\165\163\145\162\163\134\161\167\167\71\63\134\141\160\160\144\141\164\141\134\154\157\143\141\154\134\160\162\157\147\162\141\155\163\134\160\171\164\150\157\156\134\160\171\164\150\157\156\63\61\61\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\160\141\156\144\141\163\134\143\157\162\145\134\167\151\156\144\157\167\134\157\156\154\151\156\145\56\160\171"
#endif
},
    {"pandas.core.window.rolling", modulecode_pandas$core$window$rolling, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\165\163\145\162\163\134\161\167\167\71\63\134\141\160\160\144\141\164\141\134\154\157\143\141\154\134\160\162\157\147\162\141\155\163\134\160\171\164\150\157\156\134\160\171\164\150\157\156\63\61\61\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\160\141\156\144\141\163\134\143\157\162\145\134\167\151\156\144\157\167\134\162\157\154\154\151\156\147\56\160\171"
#endif
},
    {"pandas.errors", modulecode_pandas$errors, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_PACKAGE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\165\163\145\162\163\134\161\167\167\71\63\134\141\160\160\144\141\164\141\134\154\157\143\141\154\134\160\162\157\147\162\141\155\163\134\160\171\164\150\157\156\134\160\171\164\150\157\156\63\61\61\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\160\141\156\144\141\163\134\145\162\162\157\162\163\134\137\137\151\156\151\164\137\137\56\160\171"
#endif
},
    {"pandas.io", modulecode_pandas$io, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_PACKAGE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\165\163\145\162\163\134\161\167\167\71\63\134\141\160\160\144\141\164\141\134\154\157\143\141\154\134\160\162\157\147\162\141\155\163\134\160\171\164\150\157\156\134\160\171\164\150\157\156\63\61\61\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\160\141\156\144\141\163\134\151\157\134\137\137\151\156\151\164\137\137\56\160\171"
#endif
},
    {"pandas.io._util", modulecode_pandas$io$_util, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\165\163\145\162\163\134\161\167\167\71\63\134\141\160\160\144\141\164\141\134\154\157\143\141\154\134\160\162\157\147\162\141\155\163\134\160\171\164\150\157\156\134\160\171\164\150\157\156\63\61\61\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\160\141\156\144\141\163\134\151\157\134\137\165\164\151\154\56\160\171"
#endif
},
    {"pandas.io.api", modulecode_pandas$io$api, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\165\163\145\162\163\134\161\167\167\71\63\134\141\160\160\144\141\164\141\134\154\157\143\141\154\134\160\162\157\147\162\141\155\163\134\160\171\164\150\157\156\134\160\171\164\150\157\156\63\61\61\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\160\141\156\144\141\163\134\151\157\134\141\160\151\56\160\171"
#endif
},
    {"pandas.io.clipboard", modulecode_pandas$io$clipboard, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_PACKAGE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\165\163\145\162\163\134\161\167\167\71\63\134\141\160\160\144\141\164\141\134\154\157\143\141\154\134\160\162\157\147\162\141\155\163\134\160\171\164\150\157\156\134\160\171\164\150\157\156\63\61\61\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\160\141\156\144\141\163\134\151\157\134\143\154\151\160\142\157\141\162\144\134\137\137\151\156\151\164\137\137\56\160\171"
#endif
},
    {"pandas.io.clipboards", modulecode_pandas$io$clipboards, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\165\163\145\162\163\134\161\167\167\71\63\134\141\160\160\144\141\164\141\134\154\157\143\141\154\134\160\162\157\147\162\141\155\163\134\160\171\164\150\157\156\134\160\171\164\150\157\156\63\61\61\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\160\141\156\144\141\163\134\151\157\134\143\154\151\160\142\157\141\162\144\163\56\160\171"
#endif
},
    {"pandas.io.common", modulecode_pandas$io$common, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\165\163\145\162\163\134\161\167\167\71\63\134\141\160\160\144\141\164\141\134\154\157\143\141\154\134\160\162\157\147\162\141\155\163\134\160\171\164\150\157\156\134\160\171\164\150\157\156\63\61\61\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\160\141\156\144\141\163\134\151\157\134\143\157\155\155\157\156\56\160\171"
#endif
},
    {"pandas.io.excel", modulecode_pandas$io$excel, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_PACKAGE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\165\163\145\162\163\134\161\167\167\71\63\134\141\160\160\144\141\164\141\134\154\157\143\141\154\134\160\162\157\147\162\141\155\163\134\160\171\164\150\157\156\134\160\171\164\150\157\156\63\61\61\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\160\141\156\144\141\163\134\151\157\134\145\170\143\145\154\134\137\137\151\156\151\164\137\137\56\160\171"
#endif
},
    {"pandas.io.excel._base", modulecode_pandas$io$excel$_base, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\165\163\145\162\163\134\161\167\167\71\63\134\141\160\160\144\141\164\141\134\154\157\143\141\154\134\160\162\157\147\162\141\155\163\134\160\171\164\150\157\156\134\160\171\164\150\157\156\63\61\61\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\160\141\156\144\141\163\134\151\157\134\145\170\143\145\154\134\137\142\141\163\145\56\160\171"
#endif
},
    {"pandas.io.excel._odfreader", modulecode_pandas$io$excel$_odfreader, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\165\163\145\162\163\134\161\167\167\71\63\134\141\160\160\144\141\164\141\134\154\157\143\141\154\134\160\162\157\147\162\141\155\163\134\160\171\164\150\157\156\134\160\171\164\150\157\156\63\61\61\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\160\141\156\144\141\163\134\151\157\134\145\170\143\145\154\134\137\157\144\146\162\145\141\144\145\162\56\160\171"
#endif
},
    {"pandas.io.excel._odswriter", modulecode_pandas$io$excel$_odswriter, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\165\163\145\162\163\134\161\167\167\71\63\134\141\160\160\144\141\164\141\134\154\157\143\141\154\134\160\162\157\147\162\141\155\163\134\160\171\164\150\157\156\134\160\171\164\150\157\156\63\61\61\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\160\141\156\144\141\163\134\151\157\134\145\170\143\145\154\134\137\157\144\163\167\162\151\164\145\162\56\160\171"
#endif
},
    {"pandas.io.excel._openpyxl", modulecode_pandas$io$excel$_openpyxl, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\165\163\145\162\163\134\161\167\167\71\63\134\141\160\160\144\141\164\141\134\154\157\143\141\154\134\160\162\157\147\162\141\155\163\134\160\171\164\150\157\156\134\160\171\164\150\157\156\63\61\61\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\160\141\156\144\141\163\134\151\157\134\145\170\143\145\154\134\137\157\160\145\156\160\171\170\154\56\160\171"
#endif
},
    {"pandas.io.excel._pyxlsb", modulecode_pandas$io$excel$_pyxlsb, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\165\163\145\162\163\134\161\167\167\71\63\134\141\160\160\144\141\164\141\134\154\157\143\141\154\134\160\162\157\147\162\141\155\163\134\160\171\164\150\157\156\134\160\171\164\150\157\156\63\61\61\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\160\141\156\144\141\163\134\151\157\134\145\170\143\145\154\134\137\160\171\170\154\163\142\56\160\171"
#endif
},
    {"pandas.io.excel._util", modulecode_pandas$io$excel$_util, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\165\163\145\162\163\134\161\167\167\71\63\134\141\160\160\144\141\164\141\134\154\157\143\141\154\134\160\162\157\147\162\141\155\163\134\160\171\164\150\157\156\134\160\171\164\150\157\156\63\61\61\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\160\141\156\144\141\163\134\151\157\134\145\170\143\145\154\134\137\165\164\151\154\56\160\171"
#endif
},
    {"pandas.io.excel._xlrd", modulecode_pandas$io$excel$_xlrd, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\165\163\145\162\163\134\161\167\167\71\63\134\141\160\160\144\141\164\141\134\154\157\143\141\154\134\160\162\157\147\162\141\155\163\134\160\171\164\150\157\156\134\160\171\164\150\157\156\63\61\61\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\160\141\156\144\141\163\134\151\157\134\145\170\143\145\154\134\137\170\154\162\144\56\160\171"
#endif
},
    {"pandas.io.excel._xlsxwriter", modulecode_pandas$io$excel$_xlsxwriter, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\165\163\145\162\163\134\161\167\167\71\63\134\141\160\160\144\141\164\141\134\154\157\143\141\154\134\160\162\157\147\162\141\155\163\134\160\171\164\150\157\156\134\160\171\164\150\157\156\63\61\61\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\160\141\156\144\141\163\134\151\157\134\145\170\143\145\154\134\137\170\154\163\170\167\162\151\164\145\162\56\160\171"
#endif
},
    {"pandas.io.feather_format", modulecode_pandas$io$feather_format, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\165\163\145\162\163\134\161\167\167\71\63\134\141\160\160\144\141\164\141\134\154\157\143\141\154\134\160\162\157\147\162\141\155\163\134\160\171\164\150\157\156\134\160\171\164\150\157\156\63\61\61\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\160\141\156\144\141\163\134\151\157\134\146\145\141\164\150\145\162\137\146\157\162\155\141\164\56\160\171"
#endif
},
    {"pandas.io.formats", modulecode_pandas$io$formats, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_PACKAGE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\165\163\145\162\163\134\161\167\167\71\63\134\141\160\160\144\141\164\141\134\154\157\143\141\154\134\160\162\157\147\162\141\155\163\134\160\171\164\150\157\156\134\160\171\164\150\157\156\63\61\61\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\160\141\156\144\141\163\134\151\157\134\146\157\162\155\141\164\163\134\137\137\151\156\151\164\137\137\56\160\171"
#endif
},
    {"pandas.io.formats._color_data", modulecode_pandas$io$formats$_color_data, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\165\163\145\162\163\134\161\167\167\71\63\134\141\160\160\144\141\164\141\134\154\157\143\141\154\134\160\162\157\147\162\141\155\163\134\160\171\164\150\157\156\134\160\171\164\150\157\156\63\61\61\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\160\141\156\144\141\163\134\151\157\134\146\157\162\155\141\164\163\134\137\143\157\154\157\162\137\144\141\164\141\56\160\171"
#endif
},
    {"pandas.io.formats.console", modulecode_pandas$io$formats$console, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\165\163\145\162\163\134\161\167\167\71\63\134\141\160\160\144\141\164\141\134\154\157\143\141\154\134\160\162\157\147\162\141\155\163\134\160\171\164\150\157\156\134\160\171\164\150\157\156\63\61\61\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\160\141\156\144\141\163\134\151\157\134\146\157\162\155\141\164\163\134\143\157\156\163\157\154\145\56\160\171"
#endif
},
    {"pandas.io.formats.css", modulecode_pandas$io$formats$css, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\165\163\145\162\163\134\161\167\167\71\63\134\141\160\160\144\141\164\141\134\154\157\143\141\154\134\160\162\157\147\162\141\155\163\134\160\171\164\150\157\156\134\160\171\164\150\157\156\63\61\61\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\160\141\156\144\141\163\134\151\157\134\146\157\162\155\141\164\163\134\143\163\163\56\160\171"
#endif
},
    {"pandas.io.formats.csvs", modulecode_pandas$io$formats$csvs, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\165\163\145\162\163\134\161\167\167\71\63\134\141\160\160\144\141\164\141\134\154\157\143\141\154\134\160\162\157\147\162\141\155\163\134\160\171\164\150\157\156\134\160\171\164\150\157\156\63\61\61\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\160\141\156\144\141\163\134\151\157\134\146\157\162\155\141\164\163\134\143\163\166\163\56\160\171"
#endif
},
    {"pandas.io.formats.excel", modulecode_pandas$io$formats$excel, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\165\163\145\162\163\134\161\167\167\71\63\134\141\160\160\144\141\164\141\134\154\157\143\141\154\134\160\162\157\147\162\141\155\163\134\160\171\164\150\157\156\134\160\171\164\150\157\156\63\61\61\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\160\141\156\144\141\163\134\151\157\134\146\157\162\155\141\164\163\134\145\170\143\145\154\56\160\171"
#endif
},
    {"pandas.io.formats.format", modulecode_pandas$io$formats$format, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\165\163\145\162\163\134\161\167\167\71\63\134\141\160\160\144\141\164\141\134\154\157\143\141\154\134\160\162\157\147\162\141\155\163\134\160\171\164\150\157\156\134\160\171\164\150\157\156\63\61\61\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\160\141\156\144\141\163\134\151\157\134\146\157\162\155\141\164\163\134\146\157\162\155\141\164\56\160\171"
#endif
},
    {"pandas.io.formats.html", modulecode_pandas$io$formats$html, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\165\163\145\162\163\134\161\167\167\71\63\134\141\160\160\144\141\164\141\134\154\157\143\141\154\134\160\162\157\147\162\141\155\163\134\160\171\164\150\157\156\134\160\171\164\150\157\156\63\61\61\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\160\141\156\144\141\163\134\151\157\134\146\157\162\155\141\164\163\134\150\164\155\154\56\160\171"
#endif
},
    {"pandas.io.formats.info", modulecode_pandas$io$formats$info, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\165\163\145\162\163\134\161\167\167\71\63\134\141\160\160\144\141\164\141\134\154\157\143\141\154\134\160\162\157\147\162\141\155\163\134\160\171\164\150\157\156\134\160\171\164\150\157\156\63\61\61\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\160\141\156\144\141\163\134\151\157\134\146\157\162\155\141\164\163\134\151\156\146\157\56\160\171"
#endif
},
    {"pandas.io.formats.latex", modulecode_pandas$io$formats$latex, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\165\163\145\162\163\134\161\167\167\71\63\134\141\160\160\144\141\164\141\134\154\157\143\141\154\134\160\162\157\147\162\141\155\163\134\160\171\164\150\157\156\134\160\171\164\150\157\156\63\61\61\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\160\141\156\144\141\163\134\151\157\134\146\157\162\155\141\164\163\134\154\141\164\145\170\56\160\171"
#endif
},
    {"pandas.io.formats.printing", modulecode_pandas$io$formats$printing, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\165\163\145\162\163\134\161\167\167\71\63\134\141\160\160\144\141\164\141\134\154\157\143\141\154\134\160\162\157\147\162\141\155\163\134\160\171\164\150\157\156\134\160\171\164\150\157\156\63\61\61\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\160\141\156\144\141\163\134\151\157\134\146\157\162\155\141\164\163\134\160\162\151\156\164\151\156\147\56\160\171"
#endif
},
    {"pandas.io.formats.string", modulecode_pandas$io$formats$string, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\165\163\145\162\163\134\161\167\167\71\63\134\141\160\160\144\141\164\141\134\154\157\143\141\154\134\160\162\157\147\162\141\155\163\134\160\171\164\150\157\156\134\160\171\164\150\157\156\63\61\61\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\160\141\156\144\141\163\134\151\157\134\146\157\162\155\141\164\163\134\163\164\162\151\156\147\56\160\171"
#endif
},
    {"pandas.io.formats.style", modulecode_pandas$io$formats$style, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\165\163\145\162\163\134\161\167\167\71\63\134\141\160\160\144\141\164\141\134\154\157\143\141\154\134\160\162\157\147\162\141\155\163\134\160\171\164\150\157\156\134\160\171\164\150\157\156\63\61\61\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\160\141\156\144\141\163\134\151\157\134\146\157\162\155\141\164\163\134\163\164\171\154\145\56\160\171"
#endif
},
    {"pandas.io.formats.style_render", modulecode_pandas$io$formats$style_render, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\165\163\145\162\163\134\161\167\167\71\63\134\141\160\160\144\141\164\141\134\154\157\143\141\154\134\160\162\157\147\162\141\155\163\134\160\171\164\150\157\156\134\160\171\164\150\157\156\63\61\61\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\160\141\156\144\141\163\134\151\157\134\146\157\162\155\141\164\163\134\163\164\171\154\145\137\162\145\156\144\145\162\56\160\171"
#endif
},
    {"pandas.io.formats.xml", modulecode_pandas$io$formats$xml, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\165\163\145\162\163\134\161\167\167\71\63\134\141\160\160\144\141\164\141\134\154\157\143\141\154\134\160\162\157\147\162\141\155\163\134\160\171\164\150\157\156\134\160\171\164\150\157\156\63\61\61\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\160\141\156\144\141\163\134\151\157\134\146\157\162\155\141\164\163\134\170\155\154\56\160\171"
#endif
},
    {"pandas.io.gbq", modulecode_pandas$io$gbq, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\165\163\145\162\163\134\161\167\167\71\63\134\141\160\160\144\141\164\141\134\154\157\143\141\154\134\160\162\157\147\162\141\155\163\134\160\171\164\150\157\156\134\160\171\164\150\157\156\63\61\61\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\160\141\156\144\141\163\134\151\157\134\147\142\161\56\160\171"
#endif
},
    {"pandas.io.html", modulecode_pandas$io$html, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\165\163\145\162\163\134\161\167\167\71\63\134\141\160\160\144\141\164\141\134\154\157\143\141\154\134\160\162\157\147\162\141\155\163\134\160\171\164\150\157\156\134\160\171\164\150\157\156\63\61\61\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\160\141\156\144\141\163\134\151\157\134\150\164\155\154\56\160\171"
#endif
},
    {"pandas.io.json", modulecode_pandas$io$json, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_PACKAGE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\165\163\145\162\163\134\161\167\167\71\63\134\141\160\160\144\141\164\141\134\154\157\143\141\154\134\160\162\157\147\162\141\155\163\134\160\171\164\150\157\156\134\160\171\164\150\157\156\63\61\61\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\160\141\156\144\141\163\134\151\157\134\152\163\157\156\134\137\137\151\156\151\164\137\137\56\160\171"
#endif
},
    {"pandas.io.json._json", modulecode_pandas$io$json$_json, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\165\163\145\162\163\134\161\167\167\71\63\134\141\160\160\144\141\164\141\134\154\157\143\141\154\134\160\162\157\147\162\141\155\163\134\160\171\164\150\157\156\134\160\171\164\150\157\156\63\61\61\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\160\141\156\144\141\163\134\151\157\134\152\163\157\156\134\137\152\163\157\156\56\160\171"
#endif
},
    {"pandas.io.json._normalize", modulecode_pandas$io$json$_normalize, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\165\163\145\162\163\134\161\167\167\71\63\134\141\160\160\144\141\164\141\134\154\157\143\141\154\134\160\162\157\147\162\141\155\163\134\160\171\164\150\157\156\134\160\171\164\150\157\156\63\61\61\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\160\141\156\144\141\163\134\151\157\134\152\163\157\156\134\137\156\157\162\155\141\154\151\172\145\56\160\171"
#endif
},
    {"pandas.io.json._table_schema", modulecode_pandas$io$json$_table_schema, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\165\163\145\162\163\134\161\167\167\71\63\134\141\160\160\144\141\164\141\134\154\157\143\141\154\134\160\162\157\147\162\141\155\163\134\160\171\164\150\157\156\134\160\171\164\150\157\156\63\61\61\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\160\141\156\144\141\163\134\151\157\134\152\163\157\156\134\137\164\141\142\154\145\137\163\143\150\145\155\141\56\160\171"
#endif
},
    {"pandas.io.orc", modulecode_pandas$io$orc, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\165\163\145\162\163\134\161\167\167\71\63\134\141\160\160\144\141\164\141\134\154\157\143\141\154\134\160\162\157\147\162\141\155\163\134\160\171\164\150\157\156\134\160\171\164\150\157\156\63\61\61\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\160\141\156\144\141\163\134\151\157\134\157\162\143\56\160\171"
#endif
},
    {"pandas.io.parquet", modulecode_pandas$io$parquet, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\165\163\145\162\163\134\161\167\167\71\63\134\141\160\160\144\141\164\141\134\154\157\143\141\154\134\160\162\157\147\162\141\155\163\134\160\171\164\150\157\156\134\160\171\164\150\157\156\63\61\61\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\160\141\156\144\141\163\134\151\157\134\160\141\162\161\165\145\164\56\160\171"
#endif
},
    {"pandas.io.parsers", modulecode_pandas$io$parsers, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_PACKAGE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\165\163\145\162\163\134\161\167\167\71\63\134\141\160\160\144\141\164\141\134\154\157\143\141\154\134\160\162\157\147\162\141\155\163\134\160\171\164\150\157\156\134\160\171\164\150\157\156\63\61\61\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\160\141\156\144\141\163\134\151\157\134\160\141\162\163\145\162\163\134\137\137\151\156\151\164\137\137\56\160\171"
#endif
},
    {"pandas.io.parsers.arrow_parser_wrapper", modulecode_pandas$io$parsers$arrow_parser_wrapper, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\165\163\145\162\163\134\161\167\167\71\63\134\141\160\160\144\141\164\141\134\154\157\143\141\154\134\160\162\157\147\162\141\155\163\134\160\171\164\150\157\156\134\160\171\164\150\157\156\63\61\61\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\160\141\156\144\141\163\134\151\157\134\160\141\162\163\145\162\163\134\141\162\162\157\167\137\160\141\162\163\145\162\137\167\162\141\160\160\145\162\56\160\171"
#endif
},
    {"pandas.io.parsers.base_parser", modulecode_pandas$io$parsers$base_parser, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\165\163\145\162\163\134\161\167\167\71\63\134\141\160\160\144\141\164\141\134\154\157\143\141\154\134\160\162\157\147\162\141\155\163\134\160\171\164\150\157\156\134\160\171\164\150\157\156\63\61\61\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\160\141\156\144\141\163\134\151\157\134\160\141\162\163\145\162\163\134\142\141\163\145\137\160\141\162\163\145\162\56\160\171"
#endif
},
    {"pandas.io.parsers.c_parser_wrapper", modulecode_pandas$io$parsers$c_parser_wrapper, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\165\163\145\162\163\134\161\167\167\71\63\134\141\160\160\144\141\164\141\134\154\157\143\141\154\134\160\162\157\147\162\141\155\163\134\160\171\164\150\157\156\134\160\171\164\150\157\156\63\61\61\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\160\141\156\144\141\163\134\151\157\134\160\141\162\163\145\162\163\134\143\137\160\141\162\163\145\162\137\167\162\141\160\160\145\162\56\160\171"
#endif
},
    {"pandas.io.parsers.python_parser", modulecode_pandas$io$parsers$python_parser, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\165\163\145\162\163\134\161\167\167\71\63\134\141\160\160\144\141\164\141\134\154\157\143\141\154\134\160\162\157\147\162\141\155\163\134\160\171\164\150\157\156\134\160\171\164\150\157\156\63\61\61\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\160\141\156\144\141\163\134\151\157\134\160\141\162\163\145\162\163\134\160\171\164\150\157\156\137\160\141\162\163\145\162\56\160\171"
#endif
},
    {"pandas.io.parsers.readers", modulecode_pandas$io$parsers$readers, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\165\163\145\162\163\134\161\167\167\71\63\134\141\160\160\144\141\164\141\134\154\157\143\141\154\134\160\162\157\147\162\141\155\163\134\160\171\164\150\157\156\134\160\171\164\150\157\156\63\61\61\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\160\141\156\144\141\163\134\151\157\134\160\141\162\163\145\162\163\134\162\145\141\144\145\162\163\56\160\171"
#endif
},
    {"pandas.io.pickle", modulecode_pandas$io$pickle, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\165\163\145\162\163\134\161\167\167\71\63\134\141\160\160\144\141\164\141\134\154\157\143\141\154\134\160\162\157\147\162\141\155\163\134\160\171\164\150\157\156\134\160\171\164\150\157\156\63\61\61\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\160\141\156\144\141\163\134\151\157\134\160\151\143\153\154\145\56\160\171"
#endif
},
    {"pandas.io.pytables", modulecode_pandas$io$pytables, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\165\163\145\162\163\134\161\167\167\71\63\134\141\160\160\144\141\164\141\134\154\157\143\141\154\134\160\162\157\147\162\141\155\163\134\160\171\164\150\157\156\134\160\171\164\150\157\156\63\61\61\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\160\141\156\144\141\163\134\151\157\134\160\171\164\141\142\154\145\163\56\160\171"
#endif
},
    {"pandas.io.sas", modulecode_pandas$io$sas, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_PACKAGE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\165\163\145\162\163\134\161\167\167\71\63\134\141\160\160\144\141\164\141\134\154\157\143\141\154\134\160\162\157\147\162\141\155\163\134\160\171\164\150\157\156\134\160\171\164\150\157\156\63\61\61\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\160\141\156\144\141\163\134\151\157\134\163\141\163\134\137\137\151\156\151\164\137\137\56\160\171"
#endif
},
    {"pandas.io.sas.sas7bdat", modulecode_pandas$io$sas$sas7bdat, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\165\163\145\162\163\134\161\167\167\71\63\134\141\160\160\144\141\164\141\134\154\157\143\141\154\134\160\162\157\147\162\141\155\163\134\160\171\164\150\157\156\134\160\171\164\150\157\156\63\61\61\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\160\141\156\144\141\163\134\151\157\134\163\141\163\134\163\141\163\67\142\144\141\164\56\160\171"
#endif
},
    {"pandas.io.sas.sas_constants", modulecode_pandas$io$sas$sas_constants, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\165\163\145\162\163\134\161\167\167\71\63\134\141\160\160\144\141\164\141\134\154\157\143\141\154\134\160\162\157\147\162\141\155\163\134\160\171\164\150\157\156\134\160\171\164\150\157\156\63\61\61\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\160\141\156\144\141\163\134\151\157\134\163\141\163\134\163\141\163\137\143\157\156\163\164\141\156\164\163\56\160\171"
#endif
},
    {"pandas.io.sas.sas_xport", modulecode_pandas$io$sas$sas_xport, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\165\163\145\162\163\134\161\167\167\71\63\134\141\160\160\144\141\164\141\134\154\157\143\141\154\134\160\162\157\147\162\141\155\163\134\160\171\164\150\157\156\134\160\171\164\150\157\156\63\61\61\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\160\141\156\144\141\163\134\151\157\134\163\141\163\134\163\141\163\137\170\160\157\162\164\56\160\171"
#endif
},
    {"pandas.io.sas.sasreader", modulecode_pandas$io$sas$sasreader, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\165\163\145\162\163\134\161\167\167\71\63\134\141\160\160\144\141\164\141\134\154\157\143\141\154\134\160\162\157\147\162\141\155\163\134\160\171\164\150\157\156\134\160\171\164\150\157\156\63\61\61\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\160\141\156\144\141\163\134\151\157\134\163\141\163\134\163\141\163\162\145\141\144\145\162\56\160\171"
#endif
},
    {"pandas.io.spss", modulecode_pandas$io$spss, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\165\163\145\162\163\134\161\167\167\71\63\134\141\160\160\144\141\164\141\134\154\157\143\141\154\134\160\162\157\147\162\141\155\163\134\160\171\164\150\157\156\134\160\171\164\150\157\156\63\61\61\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\160\141\156\144\141\163\134\151\157\134\163\160\163\163\56\160\171"
#endif
},
    {"pandas.io.sql", modulecode_pandas$io$sql, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\165\163\145\162\163\134\161\167\167\71\63\134\141\160\160\144\141\164\141\134\154\157\143\141\154\134\160\162\157\147\162\141\155\163\134\160\171\164\150\157\156\134\160\171\164\150\157\156\63\61\61\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\160\141\156\144\141\163\134\151\157\134\163\161\154\56\160\171"
#endif
},
    {"pandas.io.stata", modulecode_pandas$io$stata, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\165\163\145\162\163\134\161\167\167\71\63\134\141\160\160\144\141\164\141\134\154\157\143\141\154\134\160\162\157\147\162\141\155\163\134\160\171\164\150\157\156\134\160\171\164\150\157\156\63\61\61\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\160\141\156\144\141\163\134\151\157\134\163\164\141\164\141\56\160\171"
#endif
},
    {"pandas.io.xml", modulecode_pandas$io$xml, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\165\163\145\162\163\134\161\167\167\71\63\134\141\160\160\144\141\164\141\134\154\157\143\141\154\134\160\162\157\147\162\141\155\163\134\160\171\164\150\157\156\134\160\171\164\150\157\156\63\61\61\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\160\141\156\144\141\163\134\151\157\134\170\155\154\56\160\171"
#endif
},
    {"pandas.plotting", modulecode_pandas$plotting, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_PACKAGE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\165\163\145\162\163\134\161\167\167\71\63\134\141\160\160\144\141\164\141\134\154\157\143\141\154\134\160\162\157\147\162\141\155\163\134\160\171\164\150\157\156\134\160\171\164\150\157\156\63\61\61\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\160\141\156\144\141\163\134\160\154\157\164\164\151\156\147\134\137\137\151\156\151\164\137\137\56\160\171"
#endif
},
    {"pandas.plotting._core", modulecode_pandas$plotting$_core, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\165\163\145\162\163\134\161\167\167\71\63\134\141\160\160\144\141\164\141\134\154\157\143\141\154\134\160\162\157\147\162\141\155\163\134\160\171\164\150\157\156\134\160\171\164\150\157\156\63\61\61\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\160\141\156\144\141\163\134\160\154\157\164\164\151\156\147\134\137\143\157\162\145\56\160\171"
#endif
},
    {"pandas.plotting._matplotlib", modulecode_pandas$plotting$_matplotlib, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_PACKAGE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\165\163\145\162\163\134\161\167\167\71\63\134\141\160\160\144\141\164\141\134\154\157\143\141\154\134\160\162\157\147\162\141\155\163\134\160\171\164\150\157\156\134\160\171\164\150\157\156\63\61\61\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\160\141\156\144\141\163\134\160\154\157\164\164\151\156\147\134\137\155\141\164\160\154\157\164\154\151\142\134\137\137\151\156\151\164\137\137\56\160\171"
#endif
},
    {"pandas.plotting._matplotlib.boxplot", modulecode_pandas$plotting$_matplotlib$boxplot, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\165\163\145\162\163\134\161\167\167\71\63\134\141\160\160\144\141\164\141\134\154\157\143\141\154\134\160\162\157\147\162\141\155\163\134\160\171\164\150\157\156\134\160\171\164\150\157\156\63\61\61\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\160\141\156\144\141\163\134\160\154\157\164\164\151\156\147\134\137\155\141\164\160\154\157\164\154\151\142\134\142\157\170\160\154\157\164\56\160\171"
#endif
},
    {"pandas.plotting._matplotlib.converter", modulecode_pandas$plotting$_matplotlib$converter, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\165\163\145\162\163\134\161\167\167\71\63\134\141\160\160\144\141\164\141\134\154\157\143\141\154\134\160\162\157\147\162\141\155\163\134\160\171\164\150\157\156\134\160\171\164\150\157\156\63\61\61\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\160\141\156\144\141\163\134\160\154\157\164\164\151\156\147\134\137\155\141\164\160\154\157\164\154\151\142\134\143\157\156\166\145\162\164\145\162\56\160\171"
#endif
},
    {"pandas.plotting._matplotlib.core", modulecode_pandas$plotting$_matplotlib$core, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\165\163\145\162\163\134\161\167\167\71\63\134\141\160\160\144\141\164\141\134\154\157\143\141\154\134\160\162\157\147\162\141\155\163\134\160\171\164\150\157\156\134\160\171\164\150\157\156\63\61\61\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\160\141\156\144\141\163\134\160\154\157\164\164\151\156\147\134\137\155\141\164\160\154\157\164\154\151\142\134\143\157\162\145\56\160\171"
#endif
},
    {"pandas.plotting._matplotlib.groupby", modulecode_pandas$plotting$_matplotlib$groupby, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\165\163\145\162\163\134\161\167\167\71\63\134\141\160\160\144\141\164\141\134\154\157\143\141\154\134\160\162\157\147\162\141\155\163\134\160\171\164\150\157\156\134\160\171\164\150\157\156\63\61\61\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\160\141\156\144\141\163\134\160\154\157\164\164\151\156\147\134\137\155\141\164\160\154\157\164\154\151\142\134\147\162\157\165\160\142\171\56\160\171"
#endif
},
    {"pandas.plotting._matplotlib.hist", modulecode_pandas$plotting$_matplotlib$hist, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\165\163\145\162\163\134\161\167\167\71\63\134\141\160\160\144\141\164\141\134\154\157\143\141\154\134\160\162\157\147\162\141\155\163\134\160\171\164\150\157\156\134\160\171\164\150\157\156\63\61\61\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\160\141\156\144\141\163\134\160\154\157\164\164\151\156\147\134\137\155\141\164\160\154\157\164\154\151\142\134\150\151\163\164\56\160\171"
#endif
},
    {"pandas.plotting._matplotlib.misc", modulecode_pandas$plotting$_matplotlib$misc, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\165\163\145\162\163\134\161\167\167\71\63\134\141\160\160\144\141\164\141\134\154\157\143\141\154\134\160\162\157\147\162\141\155\163\134\160\171\164\150\157\156\134\160\171\164\150\157\156\63\61\61\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\160\141\156\144\141\163\134\160\154\157\164\164\151\156\147\134\137\155\141\164\160\154\157\164\154\151\142\134\155\151\163\143\56\160\171"
#endif
},
    {"pandas.plotting._matplotlib.style", modulecode_pandas$plotting$_matplotlib$style, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\165\163\145\162\163\134\161\167\167\71\63\134\141\160\160\144\141\164\141\134\154\157\143\141\154\134\160\162\157\147\162\141\155\163\134\160\171\164\150\157\156\134\160\171\164\150\157\156\63\61\61\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\160\141\156\144\141\163\134\160\154\157\164\164\151\156\147\134\137\155\141\164\160\154\157\164\154\151\142\134\163\164\171\154\145\56\160\171"
#endif
},
    {"pandas.plotting._matplotlib.timeseries", modulecode_pandas$plotting$_matplotlib$timeseries, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\165\163\145\162\163\134\161\167\167\71\63\134\141\160\160\144\141\164\141\134\154\157\143\141\154\134\160\162\157\147\162\141\155\163\134\160\171\164\150\157\156\134\160\171\164\150\157\156\63\61\61\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\160\141\156\144\141\163\134\160\154\157\164\164\151\156\147\134\137\155\141\164\160\154\157\164\154\151\142\134\164\151\155\145\163\145\162\151\145\163\56\160\171"
#endif
},
    {"pandas.plotting._matplotlib.tools", modulecode_pandas$plotting$_matplotlib$tools, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\165\163\145\162\163\134\161\167\167\71\63\134\141\160\160\144\141\164\141\134\154\157\143\141\154\134\160\162\157\147\162\141\155\163\134\160\171\164\150\157\156\134\160\171\164\150\157\156\63\61\61\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\160\141\156\144\141\163\134\160\154\157\164\164\151\156\147\134\137\155\141\164\160\154\157\164\154\151\142\134\164\157\157\154\163\56\160\171"
#endif
},
    {"pandas.plotting._misc", modulecode_pandas$plotting$_misc, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\165\163\145\162\163\134\161\167\167\71\63\134\141\160\160\144\141\164\141\134\154\157\143\141\154\134\160\162\157\147\162\141\155\163\134\160\171\164\150\157\156\134\160\171\164\150\157\156\63\61\61\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\160\141\156\144\141\163\134\160\154\157\164\164\151\156\147\134\137\155\151\163\143\56\160\171"
#endif
},
    {"pandas.tseries", modulecode_pandas$tseries, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_PACKAGE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\165\163\145\162\163\134\161\167\167\71\63\134\141\160\160\144\141\164\141\134\154\157\143\141\154\134\160\162\157\147\162\141\155\163\134\160\171\164\150\157\156\134\160\171\164\150\157\156\63\61\61\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\160\141\156\144\141\163\134\164\163\145\162\151\145\163\134\137\137\151\156\151\164\137\137\56\160\171"
#endif
},
    {"pandas.tseries.api", modulecode_pandas$tseries$api, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\165\163\145\162\163\134\161\167\167\71\63\134\141\160\160\144\141\164\141\134\154\157\143\141\154\134\160\162\157\147\162\141\155\163\134\160\171\164\150\157\156\134\160\171\164\150\157\156\63\61\61\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\160\141\156\144\141\163\134\164\163\145\162\151\145\163\134\141\160\151\56\160\171"
#endif
},
    {"pandas.tseries.frequencies", modulecode_pandas$tseries$frequencies, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\165\163\145\162\163\134\161\167\167\71\63\134\141\160\160\144\141\164\141\134\154\157\143\141\154\134\160\162\157\147\162\141\155\163\134\160\171\164\150\157\156\134\160\171\164\150\157\156\63\61\61\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\160\141\156\144\141\163\134\164\163\145\162\151\145\163\134\146\162\145\161\165\145\156\143\151\145\163\56\160\171"
#endif
},
    {"pandas.tseries.offsets", modulecode_pandas$tseries$offsets, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\165\163\145\162\163\134\161\167\167\71\63\134\141\160\160\144\141\164\141\134\154\157\143\141\154\134\160\162\157\147\162\141\155\163\134\160\171\164\150\157\156\134\160\171\164\150\157\156\63\61\61\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\160\141\156\144\141\163\134\164\163\145\162\151\145\163\134\157\146\146\163\145\164\163\56\160\171"
#endif
},
    {"pandas.util", modulecode_pandas$util, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_PACKAGE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\165\163\145\162\163\134\161\167\167\71\63\134\141\160\160\144\141\164\141\134\154\157\143\141\154\134\160\162\157\147\162\141\155\163\134\160\171\164\150\157\156\134\160\171\164\150\157\156\63\61\61\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\160\141\156\144\141\163\134\165\164\151\154\134\137\137\151\156\151\164\137\137\56\160\171"
#endif
},
    {"pandas.util._decorators", modulecode_pandas$util$_decorators, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\165\163\145\162\163\134\161\167\167\71\63\134\141\160\160\144\141\164\141\134\154\157\143\141\154\134\160\162\157\147\162\141\155\163\134\160\171\164\150\157\156\134\160\171\164\150\157\156\63\61\61\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\160\141\156\144\141\163\134\165\164\151\154\134\137\144\145\143\157\162\141\164\157\162\163\56\160\171"
#endif
},
    {"pandas.util._exceptions", modulecode_pandas$util$_exceptions, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\165\163\145\162\163\134\161\167\167\71\63\134\141\160\160\144\141\164\141\134\154\157\143\141\154\134\160\162\157\147\162\141\155\163\134\160\171\164\150\157\156\134\160\171\164\150\157\156\63\61\61\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\160\141\156\144\141\163\134\165\164\151\154\134\137\145\170\143\145\160\164\151\157\156\163\56\160\171"
#endif
},
    {"pandas.util._print_versions", modulecode_pandas$util$_print_versions, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\165\163\145\162\163\134\161\167\167\71\63\134\141\160\160\144\141\164\141\134\154\157\143\141\154\134\160\162\157\147\162\141\155\163\134\160\171\164\150\157\156\134\160\171\164\150\157\156\63\61\61\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\160\141\156\144\141\163\134\165\164\151\154\134\137\160\162\151\156\164\137\166\145\162\163\151\157\156\163\56\160\171"
#endif
},
    {"pandas.util._str_methods", modulecode_pandas$util$_str_methods, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\165\163\145\162\163\134\161\167\167\71\63\134\141\160\160\144\141\164\141\134\154\157\143\141\154\134\160\162\157\147\162\141\155\163\134\160\171\164\150\157\156\134\160\171\164\150\157\156\63\61\61\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\160\141\156\144\141\163\134\165\164\151\154\134\137\163\164\162\137\155\145\164\150\157\144\163\56\160\171"
#endif
},
    {"pandas.util._validators", modulecode_pandas$util$_validators, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\165\163\145\162\163\134\161\167\167\71\63\134\141\160\160\144\141\164\141\134\154\157\143\141\154\134\160\162\157\147\162\141\155\163\134\160\171\164\150\157\156\134\160\171\164\150\157\156\63\61\61\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\160\141\156\144\141\163\134\165\164\151\154\134\137\166\141\154\151\144\141\164\157\162\163\56\160\171"
#endif
},
    {"pandas.util.version", modulecode_pandas$util$version, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_PACKAGE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\165\163\145\162\163\134\161\167\167\71\63\134\141\160\160\144\141\164\141\134\154\157\143\141\154\134\160\162\157\147\162\141\155\163\134\160\171\164\150\157\156\134\160\171\164\150\157\156\63\61\61\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\160\141\156\144\141\163\134\165\164\151\154\134\166\145\162\163\151\157\156\134\137\137\151\156\151\164\137\137\56\160\171"
#endif
},
    {"pdb", NULL, 98, 85084, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\161\167\167\71\63\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\61\134\114\151\142\134\160\144\142\56\160\171"
#endif
},
    {"pkg_resources", NULL, 99, 159357, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG | NUITKA_PACKAGE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\165\163\145\162\163\134\161\167\167\71\63\134\141\160\160\144\141\164\141\134\154\157\143\141\154\134\160\162\157\147\162\141\155\163\134\160\171\164\150\157\156\134\160\171\164\150\157\156\63\61\61\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\160\153\147\137\162\145\163\157\165\162\143\145\163\134\137\137\151\156\151\164\137\137\56\160\171"
#endif
},
    {"pkg_resources-postLoad", modulecode_pkg_resources$$45$postLoad, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\165\163\145\162\163\134\161\167\167\71\63\134\141\160\160\144\141\164\141\134\154\157\143\141\154\134\160\162\157\147\162\141\155\163\134\160\171\164\150\157\156\134\160\171\164\150\157\156\63\61\61\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\160\153\147\137\162\145\163\157\165\162\143\145\163\134\160\153\147\137\162\145\163\157\165\162\143\145\163\55\160\157\163\164\114\157\141\144\56\160\171"
#endif
},
    {"pkg_resources._vendor", NULL, 100, 199, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG | NUITKA_PACKAGE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\165\163\145\162\163\134\161\167\167\71\63\134\141\160\160\144\141\164\141\134\154\157\143\141\154\134\160\162\157\147\162\141\155\163\134\160\171\164\150\157\156\134\160\171\164\150\157\156\63\61\61\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\160\153\147\137\162\145\163\157\165\162\143\145\163\134\137\166\145\156\144\157\162\134\137\137\151\156\151\164\137\137\56\160\171"
#endif
},
    {"pkg_resources._vendor.appdirs", NULL, 101, 29409, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\165\163\145\162\163\134\161\167\167\71\63\134\141\160\160\144\141\164\141\134\154\157\143\141\154\134\160\162\157\147\162\141\155\163\134\160\171\164\150\157\156\134\160\171\164\150\157\156\63\61\61\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\160\153\147\137\162\145\163\157\165\162\143\145\163\134\137\166\145\156\144\157\162\134\141\160\160\144\151\162\163\56\160\171"
#endif
},
    {"pkg_resources._vendor.importlib_resources", NULL, 102, 833, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG | NUITKA_PACKAGE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\165\163\145\162\163\134\161\167\167\71\63\134\141\160\160\144\141\164\141\134\154\157\143\141\154\134\160\162\157\147\162\141\155\163\134\160\171\164\150\157\156\134\160\171\164\150\157\156\63\61\61\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\160\153\147\137\162\145\163\157\165\162\143\145\163\134\137\166\145\156\144\157\162\134\151\155\160\157\162\164\154\151\142\137\162\145\163\157\165\162\143\145\163\134\137\137\151\156\151\164\137\137\56\160\171"
#endif
},
    {"pkg_resources._vendor.importlib_resources._adapters", NULL, 103, 10750, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\165\163\145\162\163\134\161\167\167\71\63\134\141\160\160\144\141\164\141\134\154\157\143\141\154\134\160\162\157\147\162\141\155\163\134\160\171\164\150\157\156\134\160\171\164\150\157\156\63\61\61\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\160\153\147\137\162\145\163\157\165\162\143\145\163\134\137\166\145\156\144\157\162\134\151\155\160\157\162\164\154\151\142\137\162\145\163\157\165\162\143\145\163\134\137\141\144\141\160\164\145\162\163\56\160\171"
#endif
},
    {"pkg_resources._vendor.importlib_resources._common", NULL, 104, 4277, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\165\163\145\162\163\134\161\167\167\71\63\134\141\160\160\144\141\164\141\134\154\157\143\141\154\134\160\162\157\147\162\141\155\163\134\160\171\164\150\157\156\134\160\171\164\150\157\156\63\61\61\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\160\153\147\137\162\145\163\157\165\162\143\145\163\134\137\166\145\156\144\157\162\134\151\155\160\157\162\164\154\151\142\137\162\145\163\157\165\162\143\145\163\134\137\143\157\155\155\157\156\56\160\171"
#endif
},
    {"pkg_resources._vendor.importlib_resources._compat", NULL, 105, 5562, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\165\163\145\162\163\134\161\167\167\71\63\134\141\160\160\144\141\164\141\134\154\157\143\141\154\134\160\162\157\147\162\141\155\163\134\160\171\164\150\157\156\134\160\171\164\150\157\156\63\61\61\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\160\153\147\137\162\145\163\157\165\162\143\145\163\134\137\166\145\156\144\157\162\134\151\155\160\157\162\164\154\151\142\137\162\145\163\157\165\162\143\145\163\134\137\143\157\155\160\141\164\56\160\171"
#endif
},
    {"pkg_resources._vendor.importlib_resources._itertools", NULL, 106, 1395, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\165\163\145\162\163\134\161\167\167\71\63\134\141\160\160\144\141\164\141\134\154\157\143\141\154\134\160\162\157\147\162\141\155\163\134\160\171\164\150\157\156\134\160\171\164\150\157\156\63\61\61\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\160\153\147\137\162\145\163\157\165\162\143\145\163\134\137\166\145\156\144\157\162\134\151\155\160\157\162\164\154\151\142\137\162\145\163\157\165\162\143\145\163\134\137\151\164\145\162\164\157\157\154\163\56\160\171"
#endif
},
    {"pkg_resources._vendor.importlib_resources._legacy", NULL, 107, 6493, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\165\163\145\162\163\134\161\167\167\71\63\134\141\160\160\144\141\164\141\134\154\157\143\141\154\134\160\162\157\147\162\141\155\163\134\160\171\164\150\157\156\134\160\171\164\150\157\156\63\61\61\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\160\153\147\137\162\145\163\157\165\162\143\145\163\134\137\166\145\156\144\157\162\134\151\155\160\157\162\164\154\151\142\137\162\145\163\157\165\162\143\145\163\134\137\154\145\147\141\143\171\56\160\171"
#endif
},
    {"pkg_resources._vendor.importlib_resources.abc", NULL, 108, 7494, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\165\163\145\162\163\134\161\167\167\71\63\134\141\160\160\144\141\164\141\134\154\157\143\141\154\134\160\162\157\147\162\141\155\163\134\160\171\164\150\157\156\134\160\171\164\150\157\156\63\61\61\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\160\153\147\137\162\145\163\157\165\162\143\145\163\134\137\166\145\156\144\157\162\134\151\155\160\157\162\164\154\151\142\137\162\145\163\157\165\162\143\145\163\134\141\142\143\56\160\171"
#endif
},
    {"pkg_resources._vendor.importlib_resources.readers", NULL, 109, 8368, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\165\163\145\162\163\134\161\167\167\71\63\134\141\160\160\144\141\164\141\134\154\157\143\141\154\134\160\162\157\147\162\141\155\163\134\160\171\164\150\157\156\134\160\171\164\150\157\156\63\61\61\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\160\153\147\137\162\145\163\157\165\162\143\145\163\134\137\166\145\156\144\157\162\134\151\155\160\157\162\164\154\151\142\137\162\145\163\157\165\162\143\145\163\134\162\145\141\144\145\162\163\56\160\171"
#endif
},
    {"pkg_resources._vendor.jaraco", NULL, 110, 206, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG | NUITKA_PACKAGE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\165\163\145\162\163\134\161\167\167\71\63\134\141\160\160\144\141\164\141\134\154\157\143\141\154\134\160\162\157\147\162\141\155\163\134\160\171\164\150\157\156\134\160\171\164\150\157\156\63\61\61\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\160\153\147\137\162\145\163\157\165\162\143\145\163\134\137\166\145\156\144\157\162\134\152\141\162\141\143\157\134\137\137\151\156\151\164\137\137\56\160\171"
#endif
},
    {"pkg_resources._vendor.jaraco.context", NULL, 111, 9429, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\165\163\145\162\163\134\161\167\167\71\63\134\141\160\160\144\141\164\141\134\154\157\143\141\154\134\160\162\157\147\162\141\155\163\134\160\171\164\150\157\156\134\160\171\164\150\157\156\63\61\61\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\160\153\147\137\162\145\163\157\165\162\143\145\163\134\137\166\145\156\144\157\162\134\152\141\162\141\143\157\134\143\157\156\164\145\170\164\56\160\171"
#endif
},
    {"pkg_resources._vendor.jaraco.functools", NULL, 112, 20292, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\165\163\145\162\163\134\161\167\167\71\63\134\141\160\160\144\141\164\141\134\154\157\143\141\154\134\160\162\157\147\162\141\155\163\134\160\171\164\150\157\156\134\160\171\164\150\157\156\63\61\61\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\160\153\147\137\162\145\163\157\165\162\143\145\163\134\137\166\145\156\144\157\162\134\152\141\162\141\143\157\134\146\165\156\143\164\157\157\154\163\56\160\171"
#endif
},
    {"pkg_resources._vendor.jaraco.text", NULL, 113, 26609, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG | NUITKA_PACKAGE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\165\163\145\162\163\134\161\167\167\71\63\134\141\160\160\144\141\164\141\134\154\157\143\141\154\134\160\162\157\147\162\141\155\163\134\160\171\164\150\157\156\134\160\171\164\150\157\156\63\61\61\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\160\153\147\137\162\145\163\157\165\162\143\145\163\134\137\166\145\156\144\157\162\134\152\141\162\141\143\157\134\164\145\170\164\134\137\137\151\156\151\164\137\137\56\160\171"
#endif
},
    {"pkg_resources._vendor.more_itertools", NULL, 114, 300, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG | NUITKA_PACKAGE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\165\163\145\162\163\134\161\167\167\71\63\134\141\160\160\144\141\164\141\134\154\157\143\141\154\134\160\162\157\147\162\141\155\163\134\160\171\164\150\157\156\134\160\171\164\150\157\156\63\61\61\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\160\153\147\137\162\145\163\157\165\162\143\145\163\134\137\166\145\156\144\157\162\134\155\157\162\145\137\151\164\145\162\164\157\157\154\163\134\137\137\151\156\151\164\137\137\56\160\171"
#endif
},
    {"pkg_resources._vendor.more_itertools.more", NULL, 115, 167961, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\165\163\145\162\163\134\161\167\167\71\63\134\141\160\160\144\141\164\141\134\154\157\143\141\154\134\160\162\157\147\162\141\155\163\134\160\171\164\150\157\156\134\160\171\164\150\157\156\63\61\61\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\160\153\147\137\162\145\163\157\165\162\143\145\163\134\137\166\145\156\144\157\162\134\155\157\162\145\137\151\164\145\162\164\157\157\154\163\134\155\157\162\145\56\160\171"
#endif
},
    {"pkg_resources._vendor.more_itertools.recipes", NULL, 116, 26952, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\165\163\145\162\163\134\161\167\167\71\63\134\141\160\160\144\141\164\141\134\154\157\143\141\154\134\160\162\157\147\162\141\155\163\134\160\171\164\150\157\156\134\160\171\164\150\157\156\63\61\61\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\160\153\147\137\162\145\163\157\165\162\143\145\163\134\137\166\145\156\144\157\162\134\155\157\162\145\137\151\164\145\162\164\157\157\154\163\134\162\145\143\151\160\145\163\56\160\171"
#endif
},
    {"pkg_resources._vendor.packaging", NULL, 117, 571, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG | NUITKA_PACKAGE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\165\163\145\162\163\134\161\167\167\71\63\134\141\160\160\144\141\164\141\134\154\157\143\141\154\134\160\162\157\147\162\141\155\163\134\160\171\164\150\157\156\134\160\171\164\150\157\156\63\61\61\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\160\153\147\137\162\145\163\157\165\162\143\145\163\134\137\166\145\156\144\157\162\134\160\141\143\153\141\147\151\156\147\134\137\137\151\156\151\164\137\137\56\160\171"
#endif
},
    {"pkg_resources._vendor.packaging.__about__", NULL, 118, 650, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\165\163\145\162\163\134\161\167\167\71\63\134\141\160\160\144\141\164\141\134\154\157\143\141\154\134\160\162\157\147\162\141\155\163\134\160\171\164\150\157\156\134\160\171\164\150\157\156\63\61\61\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\160\153\147\137\162\145\163\157\165\162\143\145\163\134\137\166\145\156\144\157\162\134\160\141\143\153\141\147\151\156\147\134\137\137\141\142\157\165\164\137\137\56\160\171"
#endif
},
    {"pkg_resources._vendor.packaging._manylinux", NULL, 119, 13237, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\165\163\145\162\163\134\161\167\167\71\63\134\141\160\160\144\141\164\141\134\154\157\143\141\154\134\160\162\157\147\162\141\155\163\134\160\171\164\150\157\156\134\160\171\164\150\157\156\63\61\61\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\160\153\147\137\162\145\163\157\165\162\143\145\163\134\137\166\145\156\144\157\162\134\160\141\143\153\141\147\151\156\147\134\137\155\141\156\171\154\151\156\165\170\56\160\171"
#endif
},
    {"pkg_resources._vendor.packaging._musllinux", NULL, 120, 8005, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\165\163\145\162\163\134\161\167\167\71\63\134\141\160\160\144\141\164\141\134\154\157\143\141\154\134\160\162\157\147\162\141\155\163\134\160\171\164\150\157\156\134\160\171\164\150\157\156\63\61\61\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\160\153\147\137\162\145\163\157\165\162\143\145\163\134\137\166\145\156\144\157\162\134\160\141\143\153\141\147\151\156\147\134\137\155\165\163\154\154\151\156\165\170\56\160\171"
#endif
},
    {"pkg_resources._vendor.packaging._structures", NULL, 121, 3693, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\165\163\145\162\163\134\161\167\167\71\63\134\141\160\160\144\141\164\141\134\154\157\143\141\154\134\160\162\157\147\162\141\155\163\134\160\171\164\150\157\156\134\160\171\164\150\157\156\63\61\61\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\160\153\147\137\162\145\163\157\165\162\143\145\163\134\137\166\145\156\144\157\162\134\160\141\143\153\141\147\151\156\147\134\137\163\164\162\165\143\164\165\162\145\163\56\160\171"
#endif
},
    {"pkg_resources._vendor.packaging.markers", NULL, 122, 16542, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\165\163\145\162\163\134\161\167\167\71\63\134\141\160\160\144\141\164\141\134\154\157\143\141\154\134\160\162\157\147\162\141\155\163\134\160\171\164\150\157\156\134\160\171\164\150\157\156\63\61\61\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\160\153\147\137\162\145\163\157\165\162\143\145\163\134\137\166\145\156\144\157\162\134\160\141\143\153\141\147\151\156\147\134\155\141\162\153\145\162\163\56\160\171"
#endif
},
    {"pkg_resources._vendor.packaging.requirements", NULL, 123, 7657, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\165\163\145\162\163\134\161\167\167\71\63\134\141\160\160\144\141\164\141\134\154\157\143\141\154\134\160\162\157\147\162\141\155\163\134\160\171\164\150\157\156\134\160\171\164\150\157\156\63\61\61\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\160\153\147\137\162\145\163\157\165\162\143\145\163\134\137\166\145\156\144\157\162\134\160\141\143\153\141\147\151\156\147\134\162\145\161\165\151\162\145\155\145\156\164\163\56\160\171"
#endif
},
    {"pkg_resources._vendor.packaging.specifiers", NULL, 124, 34371, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\165\163\145\162\163\134\161\167\167\71\63\134\141\160\160\144\141\164\141\134\154\157\143\141\154\134\160\162\157\147\162\141\155\163\134\160\171\164\150\157\156\134\160\171\164\150\157\156\63\61\61\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\160\153\147\137\162\145\163\157\165\162\143\145\163\134\137\166\145\156\144\157\162\134\160\141\143\153\141\147\151\156\147\134\163\160\145\143\151\146\151\145\162\163\56\160\171"
#endif
},
    {"pkg_resources._vendor.packaging.tags", NULL, 125, 21356, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\165\163\145\162\163\134\161\167\167\71\63\134\141\160\160\144\141\164\141\134\154\157\143\141\154\134\160\162\157\147\162\141\155\163\134\160\171\164\150\157\156\134\160\171\164\150\157\156\63\61\61\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\160\153\147\137\162\145\163\157\165\162\143\145\163\134\137\166\145\156\144\157\162\134\160\141\143\153\141\147\151\156\147\134\164\141\147\163\56\160\171"
#endif
},
    {"pkg_resources._vendor.packaging.utils", NULL, 126, 6691, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\165\163\145\162\163\134\161\167\167\71\63\134\141\160\160\144\141\164\141\134\154\157\143\141\154\134\160\162\157\147\162\141\155\163\134\160\171\164\150\157\156\134\160\171\164\150\157\156\63\61\61\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\160\153\147\137\162\145\163\157\165\162\143\145\163\134\137\166\145\156\144\157\162\134\160\141\143\153\141\147\151\156\147\134\165\164\151\154\163\56\160\171"
#endif
},
    {"pkg_resources._vendor.packaging.version", NULL, 127, 21883, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\165\163\145\162\163\134\161\167\167\71\63\134\141\160\160\144\141\164\141\134\154\157\143\141\154\134\160\162\157\147\162\141\155\163\134\160\171\164\150\157\156\134\160\171\164\150\157\156\63\61\61\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\160\153\147\137\162\145\163\157\165\162\143\145\163\134\137\166\145\156\144\157\162\134\160\141\143\153\141\147\151\156\147\134\166\145\162\163\151\157\156\56\160\171"
#endif
},
    {"pkg_resources._vendor.pyparsing", NULL, 128, 8344, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG | NUITKA_PACKAGE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\165\163\145\162\163\134\161\167\167\71\63\134\141\160\160\144\141\164\141\134\154\157\143\141\154\134\160\162\157\147\162\141\155\163\134\160\171\164\150\157\156\134\160\171\164\150\157\156\63\61\61\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\160\153\147\137\162\145\163\157\165\162\143\145\163\134\137\166\145\156\144\157\162\134\160\171\160\141\162\163\151\156\147\134\137\137\151\156\151\164\137\137\56\160\171"
#endif
},
    {"pkg_resources._vendor.pyparsing.actions", NULL, 129, 8470, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\165\163\145\162\163\134\161\167\167\71\63\134\141\160\160\144\141\164\141\134\154\157\143\141\154\134\160\162\157\147\162\141\155\163\134\160\171\164\150\157\156\134\160\171\164\150\157\156\63\61\61\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\160\153\147\137\162\145\163\157\165\162\143\145\163\134\137\166\145\156\144\157\162\134\160\171\160\141\162\163\151\156\147\134\141\143\164\151\157\156\163\56\160\171"
#endif
},
    {"pkg_resources._vendor.pyparsing.common", NULL, 130, 14792, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\165\163\145\162\163\134\161\167\167\71\63\134\141\160\160\144\141\164\141\134\154\157\143\141\154\134\160\162\157\147\162\141\155\163\134\160\171\164\150\157\156\134\160\171\164\150\157\156\63\61\61\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\160\153\147\137\162\145\163\157\165\162\143\145\163\134\137\166\145\156\144\157\162\134\160\171\160\141\162\163\151\156\147\134\143\157\155\155\157\156\56\160\171"
#endif
},
    {"pkg_resources._vendor.pyparsing.core", NULL, 131, 277644, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\165\163\145\162\163\134\161\167\167\71\63\134\141\160\160\144\141\164\141\134\154\157\143\141\154\134\160\162\157\147\162\141\155\163\134\160\171\164\150\157\156\134\160\171\164\150\157\156\63\61\61\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\160\153\147\137\162\145\163\157\165\162\143\145\163\134\137\166\145\156\144\157\162\134\160\171\160\141\162\163\151\156\147\134\143\157\162\145\56\160\171"
#endif
},
    {"pkg_resources._vendor.pyparsing.diagram", NULL, 132, 28007, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG | NUITKA_PACKAGE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\165\163\145\162\163\134\161\167\167\71\63\134\141\160\160\144\141\164\141\134\154\157\143\141\154\134\160\162\157\147\162\141\155\163\134\160\171\164\150\157\156\134\160\171\164\150\157\156\63\61\61\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\160\153\147\137\162\145\163\157\165\162\143\145\163\134\137\166\145\156\144\157\162\134\160\171\160\141\162\163\151\156\147\134\144\151\141\147\162\141\155\134\137\137\151\156\151\164\137\137\56\160\171"
#endif
},
    {"pkg_resources._vendor.pyparsing.exceptions", NULL, 133, 12934, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\165\163\145\162\163\134\161\167\167\71\63\134\141\160\160\144\141\164\141\134\154\157\143\141\154\134\160\162\157\147\162\141\155\163\134\160\171\164\150\157\156\134\160\171\164\150\157\156\63\61\61\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\160\153\147\137\162\145\163\157\165\162\143\145\163\134\137\166\145\156\144\157\162\134\160\171\160\141\162\163\151\156\147\134\145\170\143\145\160\164\151\157\156\163\56\160\171"
#endif
},
    {"pkg_resources._vendor.pyparsing.helpers", NULL, 134, 53635, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\165\163\145\162\163\134\161\167\167\71\63\134\141\160\160\144\141\164\141\134\154\157\143\141\154\134\160\162\157\147\162\141\155\163\134\160\171\164\150\157\156\134\160\171\164\150\157\156\63\61\61\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\160\153\147\137\162\145\163\157\165\162\143\145\163\134\137\166\145\156\144\157\162\134\160\171\160\141\162\163\151\156\147\134\150\145\154\160\145\162\163\56\160\171"
#endif
},
    {"pkg_resources._vendor.pyparsing.results", NULL, 135, 36318, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\165\163\145\162\163\134\161\167\167\71\63\134\141\160\160\144\141\164\141\134\154\157\143\141\154\134\160\162\157\147\162\141\155\163\134\160\171\164\150\157\156\134\160\171\164\150\157\156\63\61\61\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\160\153\147\137\162\145\163\157\165\162\143\145\163\134\137\166\145\156\144\157\162\134\160\171\160\141\162\163\151\156\147\134\162\145\163\165\154\164\163\56\160\171"
#endif
},
    {"pkg_resources._vendor.pyparsing.testing", NULL, 136, 19514, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\165\163\145\162\163\134\161\167\167\71\63\134\141\160\160\144\141\164\141\134\154\157\143\141\154\134\160\162\157\147\162\141\155\163\134\160\171\164\150\157\156\134\160\171\164\150\157\156\63\61\61\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\160\153\147\137\162\145\163\157\165\162\143\145\163\134\137\166\145\156\144\157\162\134\160\171\160\141\162\163\151\156\147\134\164\145\163\164\151\156\147\56\160\171"
#endif
},
    {"pkg_resources._vendor.pyparsing.unicode", NULL, 137, 15372, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\165\163\145\162\163\134\161\167\167\71\63\134\141\160\160\144\141\164\141\134\154\157\143\141\154\134\160\162\157\147\162\141\155\163\134\160\171\164\150\157\156\134\160\171\164\150\157\156\63\61\61\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\160\153\147\137\162\145\163\157\165\162\143\145\163\134\137\166\145\156\144\157\162\134\160\171\160\141\162\163\151\156\147\134\165\156\151\143\157\144\145\56\160\171"
#endif
},
    {"pkg_resources._vendor.pyparsing.util", NULL, 138, 14271, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\165\163\145\162\163\134\161\167\167\71\63\134\141\160\160\144\141\164\141\134\154\157\143\141\154\134\160\162\157\147\162\141\155\163\134\160\171\164\150\157\156\134\160\171\164\150\157\156\63\61\61\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\160\153\147\137\162\145\163\157\165\162\143\145\163\134\137\166\145\156\144\157\162\134\160\171\160\141\162\163\151\156\147\134\165\164\151\154\56\160\171"
#endif
},
    {"pkg_resources.extern", NULL, 139, 4318, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG | NUITKA_PACKAGE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\165\163\145\162\163\134\161\167\167\71\63\134\141\160\160\144\141\164\141\134\154\157\143\141\154\134\160\162\157\147\162\141\155\163\134\160\171\164\150\157\156\134\160\171\164\150\157\156\63\61\61\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\160\153\147\137\162\145\163\157\165\162\143\145\163\134\145\170\164\145\162\156\134\137\137\151\156\151\164\137\137\56\160\171"
#endif
},
    {"pycparser", NULL, 140, 3228, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG | NUITKA_PACKAGE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\165\163\145\162\163\134\161\167\167\71\63\134\141\160\160\144\141\164\141\134\154\157\143\141\154\134\160\162\157\147\162\141\155\163\134\160\171\164\150\157\156\134\160\171\164\150\157\156\63\61\61\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\160\171\143\160\141\162\163\145\162\134\137\137\151\156\151\164\137\137\56\160\171"
#endif
},
    {"pycparser.ast_transforms", NULL, 141, 5541, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\165\163\145\162\163\134\161\167\167\71\63\134\141\160\160\144\141\164\141\134\154\157\143\141\154\134\160\162\157\147\162\141\155\163\134\160\171\164\150\157\156\134\160\171\164\150\157\156\63\61\61\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\160\171\143\160\141\162\163\145\162\134\141\163\164\137\164\162\141\156\163\146\157\162\155\163\56\160\171"
#endif
},
    {"pycparser.c_ast", NULL, 142, 53261, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\165\163\145\162\163\134\161\167\167\71\63\134\141\160\160\144\141\164\141\134\154\157\143\141\154\134\160\162\157\147\162\141\155\163\134\160\171\164\150\157\156\134\160\171\164\150\157\156\63\61\61\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\160\171\143\160\141\162\163\145\162\134\143\137\141\163\164\56\160\171"
#endif
},
    {"pycparser.c_lexer", NULL, 143, 18612, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\165\163\145\162\163\134\161\167\167\71\63\134\141\160\160\144\141\164\141\134\154\157\143\141\154\134\160\162\157\147\162\141\155\163\134\160\171\164\150\157\156\134\160\171\164\150\157\156\63\61\61\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\160\171\143\160\141\162\163\145\162\134\143\137\154\145\170\145\162\56\160\171"
#endif
},
    {"pycparser.c_parser", NULL, 144, 93516, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\165\163\145\162\163\134\161\167\167\71\63\134\141\160\160\144\141\164\141\134\154\157\143\141\154\134\160\162\157\147\162\141\155\163\134\160\171\164\150\157\156\134\160\171\164\150\157\156\63\61\61\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\160\171\143\160\141\162\163\145\162\134\143\137\160\141\162\163\145\162\56\160\171"
#endif
},
    {"pycparser.lextab", NULL, 145, 6970, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\165\163\145\162\163\134\161\167\167\71\63\134\141\160\160\144\141\164\141\134\154\157\143\141\154\134\160\162\157\147\162\141\155\163\134\160\171\164\150\157\156\134\160\171\164\150\157\156\63\61\61\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\160\171\143\160\141\162\163\145\162\134\154\145\170\164\141\142\56\160\171"
#endif
},
    {"pycparser.ply", NULL, 146, 248, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG | NUITKA_PACKAGE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\165\163\145\162\163\134\161\167\167\71\63\134\141\160\160\144\141\164\141\134\154\157\143\141\154\134\160\162\157\147\162\141\155\163\134\160\171\164\150\157\156\134\160\171\164\150\157\156\63\61\61\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\160\171\143\160\141\162\163\145\162\134\160\154\171\134\137\137\151\156\151\164\137\137\56\160\171"
#endif
},
    {"pycparser.ply.lex", NULL, 147, 44015, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\165\163\145\162\163\134\161\167\167\71\63\134\141\160\160\144\141\164\141\134\154\157\143\141\154\134\160\162\157\147\162\141\155\163\134\160\171\164\150\157\156\134\160\171\164\150\157\156\63\61\61\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\160\171\143\160\141\162\163\145\162\134\160\154\171\134\154\145\170\56\160\171"
#endif
},
    {"pycparser.ply.yacc", NULL, 148, 110032, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\165\163\145\162\163\134\161\167\167\71\63\134\141\160\160\144\141\164\141\134\154\157\143\141\154\134\160\162\157\147\162\141\155\163\134\160\171\164\150\157\156\134\160\171\164\150\157\156\63\61\61\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\160\171\143\160\141\162\163\145\162\134\160\154\171\134\171\141\143\143\56\160\171"
#endif
},
    {"pycparser.plyparser", NULL, 149, 6496, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\165\163\145\162\163\134\161\167\167\71\63\134\141\160\160\144\141\164\141\134\154\157\143\141\154\134\160\162\157\147\162\141\155\163\134\160\171\164\150\157\156\134\160\171\164\150\157\156\63\61\61\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\160\171\143\160\141\162\163\145\162\134\160\154\171\160\141\162\163\145\162\56\160\171"
#endif
},
    {"pycparser.yacctab", NULL, 150, 193301, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\165\163\145\162\163\134\161\167\167\71\63\134\141\160\160\144\141\164\141\134\154\157\143\141\154\134\160\162\157\147\162\141\155\163\134\160\171\164\150\157\156\134\160\171\164\150\157\156\63\61\61\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\160\171\143\160\141\162\163\145\162\134\171\141\143\143\164\141\142\56\160\171"
#endif
},
    {"pydoc", NULL, 151, 152521, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\161\167\167\71\63\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\61\134\114\151\142\134\160\171\144\157\143\56\160\171"
#endif
},
    {"pyparsing", modulecode_pyparsing, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_PACKAGE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\165\163\145\162\163\134\161\167\167\71\63\134\141\160\160\144\141\164\141\134\154\157\143\141\154\134\160\162\157\147\162\141\155\163\134\160\171\164\150\157\156\134\160\171\164\150\157\156\63\61\61\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\160\171\160\141\162\163\151\156\147\134\137\137\151\156\151\164\137\137\56\160\171"
#endif
},
    {"pyparsing.actions", modulecode_pyparsing$actions, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\165\163\145\162\163\134\161\167\167\71\63\134\141\160\160\144\141\164\141\134\154\157\143\141\154\134\160\162\157\147\162\141\155\163\134\160\171\164\150\157\156\134\160\171\164\150\157\156\63\61\61\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\160\171\160\141\162\163\151\156\147\134\141\143\164\151\157\156\163\56\160\171"
#endif
},
    {"pyparsing.common", modulecode_pyparsing$common, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\165\163\145\162\163\134\161\167\167\71\63\134\141\160\160\144\141\164\141\134\154\157\143\141\154\134\160\162\157\147\162\141\155\163\134\160\171\164\150\157\156\134\160\171\164\150\157\156\63\61\61\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\160\171\160\141\162\163\151\156\147\134\143\157\155\155\157\156\56\160\171"
#endif
},
    {"pyparsing.core", modulecode_pyparsing$core, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\165\163\145\162\163\134\161\167\167\71\63\134\141\160\160\144\141\164\141\134\154\157\143\141\154\134\160\162\157\147\162\141\155\163\134\160\171\164\150\157\156\134\160\171\164\150\157\156\63\61\61\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\160\171\160\141\162\163\151\156\147\134\143\157\162\145\56\160\171"
#endif
},
    {"pyparsing.diagram", modulecode_pyparsing$diagram, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_PACKAGE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\165\163\145\162\163\134\161\167\167\71\63\134\141\160\160\144\141\164\141\134\154\157\143\141\154\134\160\162\157\147\162\141\155\163\134\160\171\164\150\157\156\134\160\171\164\150\157\156\63\61\61\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\160\171\160\141\162\163\151\156\147\134\144\151\141\147\162\141\155\134\137\137\151\156\151\164\137\137\56\160\171"
#endif
},
    {"pyparsing.exceptions", modulecode_pyparsing$exceptions, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\165\163\145\162\163\134\161\167\167\71\63\134\141\160\160\144\141\164\141\134\154\157\143\141\154\134\160\162\157\147\162\141\155\163\134\160\171\164\150\157\156\134\160\171\164\150\157\156\63\61\61\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\160\171\160\141\162\163\151\156\147\134\145\170\143\145\160\164\151\157\156\163\56\160\171"
#endif
},
    {"pyparsing.helpers", modulecode_pyparsing$helpers, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\165\163\145\162\163\134\161\167\167\71\63\134\141\160\160\144\141\164\141\134\154\157\143\141\154\134\160\162\157\147\162\141\155\163\134\160\171\164\150\157\156\134\160\171\164\150\157\156\63\61\61\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\160\171\160\141\162\163\151\156\147\134\150\145\154\160\145\162\163\56\160\171"
#endif
},
    {"pyparsing.results", modulecode_pyparsing$results, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\165\163\145\162\163\134\161\167\167\71\63\134\141\160\160\144\141\164\141\134\154\157\143\141\154\134\160\162\157\147\162\141\155\163\134\160\171\164\150\157\156\134\160\171\164\150\157\156\63\61\61\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\160\171\160\141\162\163\151\156\147\134\162\145\163\165\154\164\163\56\160\171"
#endif
},
    {"pyparsing.testing", modulecode_pyparsing$testing, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\165\163\145\162\163\134\161\167\167\71\63\134\141\160\160\144\141\164\141\134\154\157\143\141\154\134\160\162\157\147\162\141\155\163\134\160\171\164\150\157\156\134\160\171\164\150\157\156\63\61\61\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\160\171\160\141\162\163\151\156\147\134\164\145\163\164\151\156\147\56\160\171"
#endif
},
    {"pyparsing.unicode", modulecode_pyparsing$unicode, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\165\163\145\162\163\134\161\167\167\71\63\134\141\160\160\144\141\164\141\134\154\157\143\141\154\134\160\162\157\147\162\141\155\163\134\160\171\164\150\157\156\134\160\171\164\150\157\156\63\61\61\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\160\171\160\141\162\163\151\156\147\134\165\156\151\143\157\144\145\56\160\171"
#endif
},
    {"pyparsing.util", modulecode_pyparsing$util, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\165\163\145\162\163\134\161\167\167\71\63\134\141\160\160\144\141\164\141\134\154\157\143\141\154\134\160\162\157\147\162\141\155\163\134\160\171\164\150\157\156\134\160\171\164\150\157\156\63\61\61\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\160\171\160\141\162\163\151\156\147\134\165\164\151\154\56\160\171"
#endif
},
    {"pytz", modulecode_pytz, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_PACKAGE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\165\163\145\162\163\134\161\167\167\71\63\134\141\160\160\144\141\164\141\134\154\157\143\141\154\134\160\162\157\147\162\141\155\163\134\160\171\164\150\157\156\134\160\171\164\150\157\156\63\61\61\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\160\171\164\172\134\137\137\151\156\151\164\137\137\56\160\171"
#endif
},
    {"pytz.exceptions", modulecode_pytz$exceptions, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\165\163\145\162\163\134\161\167\167\71\63\134\141\160\160\144\141\164\141\134\154\157\143\141\154\134\160\162\157\147\162\141\155\163\134\160\171\164\150\157\156\134\160\171\164\150\157\156\63\61\61\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\160\171\164\172\134\145\170\143\145\160\164\151\157\156\163\56\160\171"
#endif
},
    {"pytz.lazy", modulecode_pytz$lazy, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\165\163\145\162\163\134\161\167\167\71\63\134\141\160\160\144\141\164\141\134\154\157\143\141\154\134\160\162\157\147\162\141\155\163\134\160\171\164\150\157\156\134\160\171\164\150\157\156\63\61\61\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\160\171\164\172\134\154\141\172\171\56\160\171"
#endif
},
    {"pytz.tzfile", modulecode_pytz$tzfile, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\165\163\145\162\163\134\161\167\167\71\63\134\141\160\160\144\141\164\141\134\154\157\143\141\154\134\160\162\157\147\162\141\155\163\134\160\171\164\150\157\156\134\160\171\164\150\157\156\63\61\61\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\160\171\164\172\134\164\172\146\151\154\145\56\160\171"
#endif
},
    {"pytz.tzinfo", modulecode_pytz$tzinfo, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\165\163\145\162\163\134\161\167\167\71\63\134\141\160\160\144\141\164\141\134\154\157\143\141\154\134\160\162\157\147\162\141\155\163\134\160\171\164\150\157\156\134\160\171\164\150\157\156\63\61\61\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\160\171\164\172\134\164\172\151\156\146\157\56\160\171"
#endif
},
    {"pywin32_bootstrap", modulecode_pywin32_bootstrap, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\161\167\167\71\63\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\167\151\156\63\62\134\154\151\142\134\160\171\167\151\156\63\62\137\142\157\157\164\163\164\162\141\160\56\160\171"
#endif
},
    {"pywin32_system32", modulecode_pywin32_system32, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_PACKAGE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\165\163\145\162\163\134\161\167\167\71\63\134\141\160\160\144\141\164\141\134\154\157\143\141\154\134\160\162\157\147\162\141\155\163\134\160\171\164\150\157\156\134\160\171\164\150\157\156\63\61\61\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\160\171\167\151\156\63\62\137\163\171\163\164\145\155\63\62"
#endif
},
    {"qtpy", modulecode_qtpy, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_PACKAGE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\165\163\145\162\163\134\161\167\167\71\63\134\141\160\160\144\141\164\141\134\154\157\143\141\154\134\160\162\157\147\162\141\155\163\134\160\171\164\150\157\156\134\160\171\164\150\157\156\63\61\61\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\161\164\160\171\134\137\137\151\156\151\164\137\137\56\160\171"
#endif
},
    {"qtpy.QtDataVisualization", modulecode_qtpy$QtDataVisualization, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\165\163\145\162\163\134\161\167\167\71\63\134\141\160\160\144\141\164\141\134\154\157\143\141\154\134\160\162\157\147\162\141\155\163\134\160\171\164\150\157\156\134\160\171\164\150\157\156\63\61\61\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\161\164\160\171\134\121\164\104\141\164\141\126\151\163\165\141\154\151\172\141\164\151\157\156\56\160\171"
#endif
},
    {"qtpy.QtWidgets", modulecode_qtpy$QtWidgets, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\165\163\145\162\163\134\161\167\167\71\63\134\141\160\160\144\141\164\141\134\154\157\143\141\154\134\160\162\157\147\162\141\155\163\134\160\171\164\150\157\156\134\160\171\164\150\157\156\63\61\61\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\161\164\160\171\134\121\164\127\151\144\147\145\164\163\56\160\171"
#endif
},
    {"qtpy.enums_compat", modulecode_qtpy$enums_compat, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\165\163\145\162\163\134\161\167\167\71\63\134\141\160\160\144\141\164\141\134\154\157\143\141\154\134\160\162\157\147\162\141\155\163\134\160\171\164\150\157\156\134\160\171\164\150\157\156\63\61\61\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\161\164\160\171\134\145\156\165\155\163\137\143\157\155\160\141\164\56\160\171"
#endif
},
    {"qtpy.sip", modulecode_qtpy$sip, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\165\163\145\162\163\134\161\167\167\71\63\134\141\160\160\144\141\164\141\134\154\157\143\141\154\134\160\162\157\147\162\141\155\163\134\160\171\164\150\157\156\134\160\171\164\150\157\156\63\61\61\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\161\164\160\171\134\163\151\160\56\160\171"
#endif
},
    {"queue", NULL, 152, 16476, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\161\167\167\71\63\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\61\134\114\151\142\134\161\165\145\165\145\56\160\171"
#endif
},
    {"runpy", NULL, 153, 16139, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\161\167\167\71\63\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\61\134\114\151\142\134\162\165\156\160\171\56\160\171"
#endif
},
    {"scipy", modulecode_scipy, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_PACKAGE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\165\163\145\162\163\134\161\167\167\71\63\134\141\160\160\144\141\164\141\134\154\157\143\141\154\134\160\162\157\147\162\141\155\163\134\160\171\164\150\157\156\134\160\171\164\150\157\156\63\61\61\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\163\143\151\160\171\134\137\137\151\156\151\164\137\137\56\160\171"
#endif
},
    {"scipy.__config__", modulecode_scipy$__config__, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\165\163\145\162\163\134\161\167\167\71\63\134\141\160\160\144\141\164\141\134\154\157\143\141\154\134\160\162\157\147\162\141\155\163\134\160\171\164\150\157\156\134\160\171\164\150\157\156\63\61\61\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\163\143\151\160\171\134\137\137\143\157\156\146\151\147\137\137\56\160\171"
#endif
},
    {"scipy._distributor_init", modulecode_scipy$_distributor_init, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\165\163\145\162\163\134\161\167\167\71\63\134\141\160\160\144\141\164\141\134\154\157\143\141\154\134\160\162\157\147\162\141\155\163\134\160\171\164\150\157\156\134\160\171\164\150\157\156\63\61\61\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\163\143\151\160\171\134\137\144\151\163\164\162\151\142\165\164\157\162\137\151\156\151\164\56\160\171"
#endif
},
    {"scipy._lib", modulecode_scipy$_lib, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_PACKAGE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\165\163\145\162\163\134\161\167\167\71\63\134\141\160\160\144\141\164\141\134\154\157\143\141\154\134\160\162\157\147\162\141\155\163\134\160\171\164\150\157\156\134\160\171\164\150\157\156\63\61\61\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\163\143\151\160\171\134\137\154\151\142\134\137\137\151\156\151\164\137\137\56\160\171"
#endif
},
    {"scipy._lib._bunch", modulecode_scipy$_lib$_bunch, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\165\163\145\162\163\134\161\167\167\71\63\134\141\160\160\144\141\164\141\134\154\157\143\141\154\134\160\162\157\147\162\141\155\163\134\160\171\164\150\157\156\134\160\171\164\150\157\156\63\61\61\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\163\143\151\160\171\134\137\154\151\142\134\137\142\165\156\143\150\56\160\171"
#endif
},
    {"scipy._lib._ccallback", modulecode_scipy$_lib$_ccallback, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\165\163\145\162\163\134\161\167\167\71\63\134\141\160\160\144\141\164\141\134\154\157\143\141\154\134\160\162\157\147\162\141\155\163\134\160\171\164\150\157\156\134\160\171\164\150\157\156\63\61\61\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\163\143\151\160\171\134\137\154\151\142\134\137\143\143\141\154\154\142\141\143\153\56\160\171"
#endif
},
    {"scipy._lib._docscrape", modulecode_scipy$_lib$_docscrape, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\165\163\145\162\163\134\161\167\167\71\63\134\141\160\160\144\141\164\141\134\154\157\143\141\154\134\160\162\157\147\162\141\155\163\134\160\171\164\150\157\156\134\160\171\164\150\157\156\63\61\61\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\163\143\151\160\171\134\137\154\151\142\134\137\144\157\143\163\143\162\141\160\145\56\160\171"
#endif
},
    {"scipy._lib._finite_differences", modulecode_scipy$_lib$_finite_differences, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\165\163\145\162\163\134\161\167\167\71\63\134\141\160\160\144\141\164\141\134\154\157\143\141\154\134\160\162\157\147\162\141\155\163\134\160\171\164\150\157\156\134\160\171\164\150\157\156\63\61\61\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\163\143\151\160\171\134\137\154\151\142\134\137\146\151\156\151\164\145\137\144\151\146\146\145\162\145\156\143\145\163\56\160\171"
#endif
},
    {"scipy._lib._pep440", modulecode_scipy$_lib$_pep440, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\165\163\145\162\163\134\161\167\167\71\63\134\141\160\160\144\141\164\141\134\154\157\143\141\154\134\160\162\157\147\162\141\155\163\134\160\171\164\150\157\156\134\160\171\164\150\157\156\63\61\61\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\163\143\151\160\171\134\137\154\151\142\134\137\160\145\160\64\64\60\56\160\171"
#endif
},
    {"scipy._lib._testutils", modulecode_scipy$_lib$_testutils, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\165\163\145\162\163\134\161\167\167\71\63\134\141\160\160\144\141\164\141\134\154\157\143\141\154\134\160\162\157\147\162\141\155\163\134\160\171\164\150\157\156\134\160\171\164\150\157\156\63\61\61\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\163\143\151\160\171\134\137\154\151\142\134\137\164\145\163\164\165\164\151\154\163\56\160\171"
#endif
},
    {"scipy._lib._threadsafety", modulecode_scipy$_lib$_threadsafety, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\165\163\145\162\163\134\161\167\167\71\63\134\141\160\160\144\141\164\141\134\154\157\143\141\154\134\160\162\157\147\162\141\155\163\134\160\171\164\150\157\156\134\160\171\164\150\157\156\63\61\61\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\163\143\151\160\171\134\137\154\151\142\134\137\164\150\162\145\141\144\163\141\146\145\164\171\56\160\171"
#endif
},
    {"scipy._lib._uarray", modulecode_scipy$_lib$_uarray, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_PACKAGE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\165\163\145\162\163\134\161\167\167\71\63\134\141\160\160\144\141\164\141\134\154\157\143\141\154\134\160\162\157\147\162\141\155\163\134\160\171\164\150\157\156\134\160\171\164\150\157\156\63\61\61\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\163\143\151\160\171\134\137\154\151\142\134\137\165\141\162\162\141\171\134\137\137\151\156\151\164\137\137\56\160\171"
#endif
},
    {"scipy._lib._uarray._backend", modulecode_scipy$_lib$_uarray$_backend, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\165\163\145\162\163\134\161\167\167\71\63\134\141\160\160\144\141\164\141\134\154\157\143\141\154\134\160\162\157\147\162\141\155\163\134\160\171\164\150\157\156\134\160\171\164\150\157\156\63\61\61\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\163\143\151\160\171\134\137\154\151\142\134\137\165\141\162\162\141\171\134\137\142\141\143\153\145\156\144\56\160\171"
#endif
},
    {"scipy._lib._util", modulecode_scipy$_lib$_util, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\165\163\145\162\163\134\161\167\167\71\63\134\141\160\160\144\141\164\141\134\154\157\143\141\154\134\160\162\157\147\162\141\155\163\134\160\171\164\150\157\156\134\160\171\164\150\157\156\63\61\61\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\163\143\151\160\171\134\137\154\151\142\134\137\165\164\151\154\56\160\171"
#endif
},
    {"scipy._lib.decorator", modulecode_scipy$_lib$decorator, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\165\163\145\162\163\134\161\167\167\71\63\134\141\160\160\144\141\164\141\134\154\157\143\141\154\134\160\162\157\147\162\141\155\163\134\160\171\164\150\157\156\134\160\171\164\150\157\156\63\61\61\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\163\143\151\160\171\134\137\154\151\142\134\144\145\143\157\162\141\164\157\162\56\160\171"
#endif
},
    {"scipy._lib.deprecation", modulecode_scipy$_lib$deprecation, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\165\163\145\162\163\134\161\167\167\71\63\134\141\160\160\144\141\164\141\134\154\157\143\141\154\134\160\162\157\147\162\141\155\163\134\160\171\164\150\157\156\134\160\171\164\150\157\156\63\61\61\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\163\143\151\160\171\134\137\154\151\142\134\144\145\160\162\145\143\141\164\151\157\156\56\160\171"
#endif
},
    {"scipy._lib.doccer", modulecode_scipy$_lib$doccer, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\165\163\145\162\163\134\161\167\167\71\63\134\141\160\160\144\141\164\141\134\154\157\143\141\154\134\160\162\157\147\162\141\155\163\134\160\171\164\150\157\156\134\160\171\164\150\157\156\63\61\61\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\163\143\151\160\171\134\137\154\151\142\134\144\157\143\143\145\162\56\160\171"
#endif
},
    {"scipy._lib.uarray", modulecode_scipy$_lib$uarray, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\165\163\145\162\163\134\161\167\167\71\63\134\141\160\160\144\141\164\141\134\154\157\143\141\154\134\160\162\157\147\162\141\155\163\134\160\171\164\150\157\156\134\160\171\164\150\157\156\63\61\61\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\163\143\151\160\171\134\137\154\151\142\134\165\141\162\162\141\171\56\160\171"
#endif
},
    {"scipy.constants", modulecode_scipy$constants, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_PACKAGE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\165\163\145\162\163\134\161\167\167\71\63\134\141\160\160\144\141\164\141\134\154\157\143\141\154\134\160\162\157\147\162\141\155\163\134\160\171\164\150\157\156\134\160\171\164\150\157\156\63\61\61\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\163\143\151\160\171\134\143\157\156\163\164\141\156\164\163\134\137\137\151\156\151\164\137\137\56\160\171"
#endif
},
    {"scipy.constants._codata", modulecode_scipy$constants$_codata, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\165\163\145\162\163\134\161\167\167\71\63\134\141\160\160\144\141\164\141\134\154\157\143\141\154\134\160\162\157\147\162\141\155\163\134\160\171\164\150\157\156\134\160\171\164\150\157\156\63\61\61\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\163\143\151\160\171\134\143\157\156\163\164\141\156\164\163\134\137\143\157\144\141\164\141\56\160\171"
#endif
},
    {"scipy.constants._constants", modulecode_scipy$constants$_constants, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\165\163\145\162\163\134\161\167\167\71\63\134\141\160\160\144\141\164\141\134\154\157\143\141\154\134\160\162\157\147\162\141\155\163\134\160\171\164\150\157\156\134\160\171\164\150\157\156\63\61\61\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\163\143\151\160\171\134\143\157\156\163\164\141\156\164\163\134\137\143\157\156\163\164\141\156\164\163\56\160\171"
#endif
},
    {"scipy.constants.codata", modulecode_scipy$constants$codata, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\165\163\145\162\163\134\161\167\167\71\63\134\141\160\160\144\141\164\141\134\154\157\143\141\154\134\160\162\157\147\162\141\155\163\134\160\171\164\150\157\156\134\160\171\164\150\157\156\63\61\61\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\163\143\151\160\171\134\143\157\156\163\164\141\156\164\163\134\143\157\144\141\164\141\56\160\171"
#endif
},
    {"scipy.constants.constants", modulecode_scipy$constants$constants, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\165\163\145\162\163\134\161\167\167\71\63\134\141\160\160\144\141\164\141\134\154\157\143\141\154\134\160\162\157\147\162\141\155\163\134\160\171\164\150\157\156\134\160\171\164\150\157\156\63\61\61\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\163\143\151\160\171\134\143\157\156\163\164\141\156\164\163\134\143\157\156\163\164\141\156\164\163\56\160\171"
#endif
},
    {"scipy.fft", modulecode_scipy$fft, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_PACKAGE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\165\163\145\162\163\134\161\167\167\71\63\134\141\160\160\144\141\164\141\134\154\157\143\141\154\134\160\162\157\147\162\141\155\163\134\160\171\164\150\157\156\134\160\171\164\150\157\156\63\61\61\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\163\143\151\160\171\134\146\146\164\134\137\137\151\156\151\164\137\137\56\160\171"
#endif
},
    {"scipy.fft._backend", modulecode_scipy$fft$_backend, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\165\163\145\162\163\134\161\167\167\71\63\134\141\160\160\144\141\164\141\134\154\157\143\141\154\134\160\162\157\147\162\141\155\163\134\160\171\164\150\157\156\134\160\171\164\150\157\156\63\61\61\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\163\143\151\160\171\134\146\146\164\134\137\142\141\143\153\145\156\144\56\160\171"
#endif
},
    {"scipy.fft._basic", modulecode_scipy$fft$_basic, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\165\163\145\162\163\134\161\167\167\71\63\134\141\160\160\144\141\164\141\134\154\157\143\141\154\134\160\162\157\147\162\141\155\163\134\160\171\164\150\157\156\134\160\171\164\150\157\156\63\61\61\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\163\143\151\160\171\134\146\146\164\134\137\142\141\163\151\143\56\160\171"
#endif
},
    {"scipy.fft._fftlog", modulecode_scipy$fft$_fftlog, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\165\163\145\162\163\134\161\167\167\71\63\134\141\160\160\144\141\164\141\134\154\157\143\141\154\134\160\162\157\147\162\141\155\163\134\160\171\164\150\157\156\134\160\171\164\150\157\156\63\61\61\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\163\143\151\160\171\134\146\146\164\134\137\146\146\164\154\157\147\56\160\171"
#endif
},
    {"scipy.fft._fftlog_multimethods", modulecode_scipy$fft$_fftlog_multimethods, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\165\163\145\162\163\134\161\167\167\71\63\134\141\160\160\144\141\164\141\134\154\157\143\141\154\134\160\162\157\147\162\141\155\163\134\160\171\164\150\157\156\134\160\171\164\150\157\156\63\61\61\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\163\143\151\160\171\134\146\146\164\134\137\146\146\164\154\157\147\137\155\165\154\164\151\155\145\164\150\157\144\163\56\160\171"
#endif
},
    {"scipy.fft._helper", modulecode_scipy$fft$_helper, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\165\163\145\162\163\134\161\167\167\71\63\134\141\160\160\144\141\164\141\134\154\157\143\141\154\134\160\162\157\147\162\141\155\163\134\160\171\164\150\157\156\134\160\171\164\150\157\156\63\61\61\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\163\143\151\160\171\134\146\146\164\134\137\150\145\154\160\145\162\56\160\171"
#endif
},
    {"scipy.fft._pocketfft", modulecode_scipy$fft$_pocketfft, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_PACKAGE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\165\163\145\162\163\134\161\167\167\71\63\134\141\160\160\144\141\164\141\134\154\157\143\141\154\134\160\162\157\147\162\141\155\163\134\160\171\164\150\157\156\134\160\171\164\150\157\156\63\61\61\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\163\143\151\160\171\134\146\146\164\134\137\160\157\143\153\145\164\146\146\164\134\137\137\151\156\151\164\137\137\56\160\171"
#endif
},
    {"scipy.fft._pocketfft.basic", modulecode_scipy$fft$_pocketfft$basic, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\165\163\145\162\163\134\161\167\167\71\63\134\141\160\160\144\141\164\141\134\154\157\143\141\154\134\160\162\157\147\162\141\155\163\134\160\171\164\150\157\156\134\160\171\164\150\157\156\63\61\61\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\163\143\151\160\171\134\146\146\164\134\137\160\157\143\153\145\164\146\146\164\134\142\141\163\151\143\56\160\171"
#endif
},
    {"scipy.fft._pocketfft.helper", modulecode_scipy$fft$_pocketfft$helper, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\165\163\145\162\163\134\161\167\167\71\63\134\141\160\160\144\141\164\141\134\154\157\143\141\154\134\160\162\157\147\162\141\155\163\134\160\171\164\150\157\156\134\160\171\164\150\157\156\63\61\61\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\163\143\151\160\171\134\146\146\164\134\137\160\157\143\153\145\164\146\146\164\134\150\145\154\160\145\162\56\160\171"
#endif
},
    {"scipy.fft._pocketfft.realtransforms", modulecode_scipy$fft$_pocketfft$realtransforms, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\165\163\145\162\163\134\161\167\167\71\63\134\141\160\160\144\141\164\141\134\154\157\143\141\154\134\160\162\157\147\162\141\155\163\134\160\171\164\150\157\156\134\160\171\164\150\157\156\63\61\61\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\163\143\151\160\171\134\146\146\164\134\137\160\157\143\153\145\164\146\146\164\134\162\145\141\154\164\162\141\156\163\146\157\162\155\163\56\160\171"
#endif
},
    {"scipy.fft._realtransforms", modulecode_scipy$fft$_realtransforms, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\165\163\145\162\163\134\161\167\167\71\63\134\141\160\160\144\141\164\141\134\154\157\143\141\154\134\160\162\157\147\162\141\155\163\134\160\171\164\150\157\156\134\160\171\164\150\157\156\63\61\61\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\163\143\151\160\171\134\146\146\164\134\137\162\145\141\154\164\162\141\156\163\146\157\162\155\163\56\160\171"
#endif
},
    {"scipy.integrate", modulecode_scipy$integrate, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_PACKAGE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\165\163\145\162\163\134\161\167\167\71\63\134\141\160\160\144\141\164\141\134\154\157\143\141\154\134\160\162\157\147\162\141\155\163\134\160\171\164\150\157\156\134\160\171\164\150\157\156\63\61\61\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\163\143\151\160\171\134\151\156\164\145\147\162\141\164\145\134\137\137\151\156\151\164\137\137\56\160\171"
#endif
},
    {"scipy.integrate._bvp", modulecode_scipy$integrate$_bvp, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\165\163\145\162\163\134\161\167\167\71\63\134\141\160\160\144\141\164\141\134\154\157\143\141\154\134\160\162\157\147\162\141\155\163\134\160\171\164\150\157\156\134\160\171\164\150\157\156\63\61\61\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\163\143\151\160\171\134\151\156\164\145\147\162\141\164\145\134\137\142\166\160\56\160\171"
#endif
},
    {"scipy.integrate._ivp", modulecode_scipy$integrate$_ivp, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_PACKAGE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\165\163\145\162\163\134\161\167\167\71\63\134\141\160\160\144\141\164\141\134\154\157\143\141\154\134\160\162\157\147\162\141\155\163\134\160\171\164\150\157\156\134\160\171\164\150\157\156\63\61\61\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\163\143\151\160\171\134\151\156\164\145\147\162\141\164\145\134\137\151\166\160\134\137\137\151\156\151\164\137\137\56\160\171"
#endif
},
    {"scipy.integrate._ivp.base", modulecode_scipy$integrate$_ivp$base, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\165\163\145\162\163\134\161\167\167\71\63\134\141\160\160\144\141\164\141\134\154\157\143\141\154\134\160\162\157\147\162\141\155\163\134\160\171\164\150\157\156\134\160\171\164\150\157\156\63\61\61\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\163\143\151\160\171\134\151\156\164\145\147\162\141\164\145\134\137\151\166\160\134\142\141\163\145\56\160\171"
#endif
},
    {"scipy.integrate._ivp.bdf", modulecode_scipy$integrate$_ivp$bdf, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\165\163\145\162\163\134\161\167\167\71\63\134\141\160\160\144\141\164\141\134\154\157\143\141\154\134\160\162\157\147\162\141\155\163\134\160\171\164\150\157\156\134\160\171\164\150\157\156\63\61\61\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\163\143\151\160\171\134\151\156\164\145\147\162\141\164\145\134\137\151\166\160\134\142\144\146\56\160\171"
#endif
},
    {"scipy.integrate._ivp.common", modulecode_scipy$integrate$_ivp$common, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\165\163\145\162\163\134\161\167\167\71\63\134\141\160\160\144\141\164\141\134\154\157\143\141\154\134\160\162\157\147\162\141\155\163\134\160\171\164\150\157\156\134\160\171\164\150\157\156\63\61\61\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\163\143\151\160\171\134\151\156\164\145\147\162\141\164\145\134\137\151\166\160\134\143\157\155\155\157\156\56\160\171"
#endif
},
    {"scipy.integrate._ivp.dop853_coefficients", modulecode_scipy$integrate$_ivp$dop853_coefficients, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\165\163\145\162\163\134\161\167\167\71\63\134\141\160\160\144\141\164\141\134\154\157\143\141\154\134\160\162\157\147\162\141\155\163\134\160\171\164\150\157\156\134\160\171\164\150\157\156\63\61\61\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\163\143\151\160\171\134\151\156\164\145\147\162\141\164\145\134\137\151\166\160\134\144\157\160\70\65\63\137\143\157\145\146\146\151\143\151\145\156\164\163\56\160\171"
#endif
},
    {"scipy.integrate._ivp.ivp", modulecode_scipy$integrate$_ivp$ivp, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\165\163\145\162\163\134\161\167\167\71\63\134\141\160\160\144\141\164\141\134\154\157\143\141\154\134\160\162\157\147\162\141\155\163\134\160\171\164\150\157\156\134\160\171\164\150\157\156\63\61\61\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\163\143\151\160\171\134\151\156\164\145\147\162\141\164\145\134\137\151\166\160\134\151\166\160\56\160\171"
#endif
},
    {"scipy.integrate._ivp.lsoda", modulecode_scipy$integrate$_ivp$lsoda, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\165\163\145\162\163\134\161\167\167\71\63\134\141\160\160\144\141\164\141\134\154\157\143\141\154\134\160\162\157\147\162\141\155\163\134\160\171\164\150\157\156\134\160\171\164\150\157\156\63\61\61\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\163\143\151\160\171\134\151\156\164\145\147\162\141\164\145\134\137\151\166\160\134\154\163\157\144\141\56\160\171"
#endif
},
    {"scipy.integrate._ivp.radau", modulecode_scipy$integrate$_ivp$radau, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\165\163\145\162\163\134\161\167\167\71\63\134\141\160\160\144\141\164\141\134\154\157\143\141\154\134\160\162\157\147\162\141\155\163\134\160\171\164\150\157\156\134\160\171\164\150\157\156\63\61\61\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\163\143\151\160\171\134\151\156\164\145\147\162\141\164\145\134\137\151\166\160\134\162\141\144\141\165\56\160\171"
#endif
},
    {"scipy.integrate._ivp.rk", modulecode_scipy$integrate$_ivp$rk, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\165\163\145\162\163\134\161\167\167\71\63\134\141\160\160\144\141\164\141\134\154\157\143\141\154\134\160\162\157\147\162\141\155\163\134\160\171\164\150\157\156\134\160\171\164\150\157\156\63\61\61\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\163\143\151\160\171\134\151\156\164\145\147\162\141\164\145\134\137\151\166\160\134\162\153\56\160\171"
#endif
},
    {"scipy.integrate._ode", modulecode_scipy$integrate$_ode, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\165\163\145\162\163\134\161\167\167\71\63\134\141\160\160\144\141\164\141\134\154\157\143\141\154\134\160\162\157\147\162\141\155\163\134\160\171\164\150\157\156\134\160\171\164\150\157\156\63\61\61\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\163\143\151\160\171\134\151\156\164\145\147\162\141\164\145\134\137\157\144\145\56\160\171"
#endif
},
    {"scipy.integrate._odepack_py", modulecode_scipy$integrate$_odepack_py, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\165\163\145\162\163\134\161\167\167\71\63\134\141\160\160\144\141\164\141\134\154\157\143\141\154\134\160\162\157\147\162\141\155\163\134\160\171\164\150\157\156\134\160\171\164\150\157\156\63\61\61\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\163\143\151\160\171\134\151\156\164\145\147\162\141\164\145\134\137\157\144\145\160\141\143\153\137\160\171\56\160\171"
#endif
},
    {"scipy.integrate._quad_vec", modulecode_scipy$integrate$_quad_vec, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\165\163\145\162\163\134\161\167\167\71\63\134\141\160\160\144\141\164\141\134\154\157\143\141\154\134\160\162\157\147\162\141\155\163\134\160\171\164\150\157\156\134\160\171\164\150\157\156\63\61\61\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\163\143\151\160\171\134\151\156\164\145\147\162\141\164\145\134\137\161\165\141\144\137\166\145\143\56\160\171"
#endif
},
    {"scipy.integrate._quadpack_py", modulecode_scipy$integrate$_quadpack_py, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\165\163\145\162\163\134\161\167\167\71\63\134\141\160\160\144\141\164\141\134\154\157\143\141\154\134\160\162\157\147\162\141\155\163\134\160\171\164\150\157\156\134\160\171\164\150\157\156\63\61\61\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\163\143\151\160\171\134\151\156\164\145\147\162\141\164\145\134\137\161\165\141\144\160\141\143\153\137\160\171\56\160\171"
#endif
},
    {"scipy.integrate._quadrature", modulecode_scipy$integrate$_quadrature, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\165\163\145\162\163\134\161\167\167\71\63\134\141\160\160\144\141\164\141\134\154\157\143\141\154\134\160\162\157\147\162\141\155\163\134\160\171\164\150\157\156\134\160\171\164\150\157\156\63\61\61\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\163\143\151\160\171\134\151\156\164\145\147\162\141\164\145\134\137\161\165\141\144\162\141\164\165\162\145\56\160\171"
#endif
},
    {"scipy.integrate.dop", modulecode_scipy$integrate$dop, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\165\163\145\162\163\134\161\167\167\71\63\134\141\160\160\144\141\164\141\134\154\157\143\141\154\134\160\162\157\147\162\141\155\163\134\160\171\164\150\157\156\134\160\171\164\150\157\156\63\61\61\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\163\143\151\160\171\134\151\156\164\145\147\162\141\164\145\134\144\157\160\56\160\171"
#endif
},
    {"scipy.integrate.lsoda", modulecode_scipy$integrate$lsoda, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\165\163\145\162\163\134\161\167\167\71\63\134\141\160\160\144\141\164\141\134\154\157\143\141\154\134\160\162\157\147\162\141\155\163\134\160\171\164\150\157\156\134\160\171\164\150\157\156\63\61\61\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\163\143\151\160\171\134\151\156\164\145\147\162\141\164\145\134\154\163\157\144\141\56\160\171"
#endif
},
    {"scipy.integrate.odepack", modulecode_scipy$integrate$odepack, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\165\163\145\162\163\134\161\167\167\71\63\134\141\160\160\144\141\164\141\134\154\157\143\141\154\134\160\162\157\147\162\141\155\163\134\160\171\164\150\157\156\134\160\171\164\150\157\156\63\61\61\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\163\143\151\160\171\134\151\156\164\145\147\162\141\164\145\134\157\144\145\160\141\143\153\56\160\171"
#endif
},
    {"scipy.integrate.quadpack", modulecode_scipy$integrate$quadpack, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\165\163\145\162\163\134\161\167\167\71\63\134\141\160\160\144\141\164\141\134\154\157\143\141\154\134\160\162\157\147\162\141\155\163\134\160\171\164\150\157\156\134\160\171\164\150\157\156\63\61\61\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\163\143\151\160\171\134\151\156\164\145\147\162\141\164\145\134\161\165\141\144\160\141\143\153\56\160\171"
#endif
},
    {"scipy.integrate.vode", modulecode_scipy$integrate$vode, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\165\163\145\162\163\134\161\167\167\71\63\134\141\160\160\144\141\164\141\134\154\157\143\141\154\134\160\162\157\147\162\141\155\163\134\160\171\164\150\157\156\134\160\171\164\150\157\156\63\61\61\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\163\143\151\160\171\134\151\156\164\145\147\162\141\164\145\134\166\157\144\145\56\160\171"
#endif
},
    {"scipy.interpolate", modulecode_scipy$interpolate, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_PACKAGE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\165\163\145\162\163\134\161\167\167\71\63\134\141\160\160\144\141\164\141\134\154\157\143\141\154\134\160\162\157\147\162\141\155\163\134\160\171\164\150\157\156\134\160\171\164\150\157\156\63\61\61\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\163\143\151\160\171\134\151\156\164\145\162\160\157\154\141\164\145\134\137\137\151\156\151\164\137\137\56\160\171"
#endif
},
    {"scipy.interpolate._bsplines", modulecode_scipy$interpolate$_bsplines, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\165\163\145\162\163\134\161\167\167\71\63\134\141\160\160\144\141\164\141\134\154\157\143\141\154\134\160\162\157\147\162\141\155\163\134\160\171\164\150\157\156\134\160\171\164\150\157\156\63\61\61\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\163\143\151\160\171\134\151\156\164\145\162\160\157\154\141\164\145\134\137\142\163\160\154\151\156\145\163\56\160\171"
#endif
},
    {"scipy.interpolate._cubic", modulecode_scipy$interpolate$_cubic, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\165\163\145\162\163\134\161\167\167\71\63\134\141\160\160\144\141\164\141\134\154\157\143\141\154\134\160\162\157\147\162\141\155\163\134\160\171\164\150\157\156\134\160\171\164\150\157\156\63\61\61\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\163\143\151\160\171\134\151\156\164\145\162\160\157\154\141\164\145\134\137\143\165\142\151\143\56\160\171"
#endif
},
    {"scipy.interpolate._fitpack2", modulecode_scipy$interpolate$_fitpack2, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\165\163\145\162\163\134\161\167\167\71\63\134\141\160\160\144\141\164\141\134\154\157\143\141\154\134\160\162\157\147\162\141\155\163\134\160\171\164\150\157\156\134\160\171\164\150\157\156\63\61\61\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\163\143\151\160\171\134\151\156\164\145\162\160\157\154\141\164\145\134\137\146\151\164\160\141\143\153\62\56\160\171"
#endif
},
    {"scipy.interpolate._fitpack_impl", modulecode_scipy$interpolate$_fitpack_impl, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\165\163\145\162\163\134\161\167\167\71\63\134\141\160\160\144\141\164\141\134\154\157\143\141\154\134\160\162\157\147\162\141\155\163\134\160\171\164\150\157\156\134\160\171\164\150\157\156\63\61\61\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\163\143\151\160\171\134\151\156\164\145\162\160\157\154\141\164\145\134\137\146\151\164\160\141\143\153\137\151\155\160\154\56\160\171"
#endif
},
    {"scipy.interpolate._fitpack_py", modulecode_scipy$interpolate$_fitpack_py, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\165\163\145\162\163\134\161\167\167\71\63\134\141\160\160\144\141\164\141\134\154\157\143\141\154\134\160\162\157\147\162\141\155\163\134\160\171\164\150\157\156\134\160\171\164\150\157\156\63\61\61\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\163\143\151\160\171\134\151\156\164\145\162\160\157\154\141\164\145\134\137\146\151\164\160\141\143\153\137\160\171\56\160\171"
#endif
},
    {"scipy.interpolate._interpolate", modulecode_scipy$interpolate$_interpolate, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\165\163\145\162\163\134\161\167\167\71\63\134\141\160\160\144\141\164\141\134\154\157\143\141\154\134\160\162\157\147\162\141\155\163\134\160\171\164\150\157\156\134\160\171\164\150\157\156\63\61\61\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\163\143\151\160\171\134\151\156\164\145\162\160\157\154\141\164\145\134\137\151\156\164\145\162\160\157\154\141\164\145\56\160\171"
#endif
},
    {"scipy.interpolate._ndgriddata", modulecode_scipy$interpolate$_ndgriddata, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\165\163\145\162\163\134\161\167\167\71\63\134\141\160\160\144\141\164\141\134\154\157\143\141\154\134\160\162\157\147\162\141\155\163\134\160\171\164\150\157\156\134\160\171\164\150\157\156\63\61\61\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\163\143\151\160\171\134\151\156\164\145\162\160\157\154\141\164\145\134\137\156\144\147\162\151\144\144\141\164\141\56\160\171"
#endif
},
    {"scipy.interpolate._pade", modulecode_scipy$interpolate$_pade, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\165\163\145\162\163\134\161\167\167\71\63\134\141\160\160\144\141\164\141\134\154\157\143\141\154\134\160\162\157\147\162\141\155\163\134\160\171\164\150\157\156\134\160\171\164\150\157\156\63\61\61\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\163\143\151\160\171\134\151\156\164\145\162\160\157\154\141\164\145\134\137\160\141\144\145\56\160\171"
#endif
},
    {"scipy.interpolate._polyint", modulecode_scipy$interpolate$_polyint, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\165\163\145\162\163\134\161\167\167\71\63\134\141\160\160\144\141\164\141\134\154\157\143\141\154\134\160\162\157\147\162\141\155\163\134\160\171\164\150\157\156\134\160\171\164\150\157\156\63\61\61\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\163\143\151\160\171\134\151\156\164\145\162\160\157\154\141\164\145\134\137\160\157\154\171\151\156\164\56\160\171"
#endif
},
    {"scipy.interpolate._rbf", modulecode_scipy$interpolate$_rbf, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\165\163\145\162\163\134\161\167\167\71\63\134\141\160\160\144\141\164\141\134\154\157\143\141\154\134\160\162\157\147\162\141\155\163\134\160\171\164\150\157\156\134\160\171\164\150\157\156\63\61\61\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\163\143\151\160\171\134\151\156\164\145\162\160\157\154\141\164\145\134\137\162\142\146\56\160\171"
#endif
},
    {"scipy.interpolate._rbfinterp", modulecode_scipy$interpolate$_rbfinterp, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\165\163\145\162\163\134\161\167\167\71\63\134\141\160\160\144\141\164\141\134\154\157\143\141\154\134\160\162\157\147\162\141\155\163\134\160\171\164\150\157\156\134\160\171\164\150\157\156\63\61\61\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\163\143\151\160\171\134\151\156\164\145\162\160\157\154\141\164\145\134\137\162\142\146\151\156\164\145\162\160\56\160\171"
#endif
},
    {"scipy.interpolate._rgi", modulecode_scipy$interpolate$_rgi, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\165\163\145\162\163\134\161\167\167\71\63\134\141\160\160\144\141\164\141\134\154\157\143\141\154\134\160\162\157\147\162\141\155\163\134\160\171\164\150\157\156\134\160\171\164\150\157\156\63\61\61\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\163\143\151\160\171\134\151\156\164\145\162\160\157\154\141\164\145\134\137\162\147\151\56\160\171"
#endif
},
    {"scipy.interpolate.fitpack", modulecode_scipy$interpolate$fitpack, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\165\163\145\162\163\134\161\167\167\71\63\134\141\160\160\144\141\164\141\134\154\157\143\141\154\134\160\162\157\147\162\141\155\163\134\160\171\164\150\157\156\134\160\171\164\150\157\156\63\61\61\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\163\143\151\160\171\134\151\156\164\145\162\160\157\154\141\164\145\134\146\151\164\160\141\143\153\56\160\171"
#endif
},
    {"scipy.interpolate.fitpack2", modulecode_scipy$interpolate$fitpack2, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\165\163\145\162\163\134\161\167\167\71\63\134\141\160\160\144\141\164\141\134\154\157\143\141\154\134\160\162\157\147\162\141\155\163\134\160\171\164\150\157\156\134\160\171\164\150\157\156\63\61\61\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\163\143\151\160\171\134\151\156\164\145\162\160\157\154\141\164\145\134\146\151\164\160\141\143\153\62\56\160\171"
#endif
},
    {"scipy.interpolate.interpolate", modulecode_scipy$interpolate$interpolate, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\165\163\145\162\163\134\161\167\167\71\63\134\141\160\160\144\141\164\141\134\154\157\143\141\154\134\160\162\157\147\162\141\155\163\134\160\171\164\150\157\156\134\160\171\164\150\157\156\63\61\61\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\163\143\151\160\171\134\151\156\164\145\162\160\157\154\141\164\145\134\151\156\164\145\162\160\157\154\141\164\145\56\160\171"
#endif
},
    {"scipy.interpolate.ndgriddata", modulecode_scipy$interpolate$ndgriddata, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\165\163\145\162\163\134\161\167\167\71\63\134\141\160\160\144\141\164\141\134\154\157\143\141\154\134\160\162\157\147\162\141\155\163\134\160\171\164\150\157\156\134\160\171\164\150\157\156\63\61\61\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\163\143\151\160\171\134\151\156\164\145\162\160\157\154\141\164\145\134\156\144\147\162\151\144\144\141\164\141\56\160\171"
#endif
},
    {"scipy.interpolate.polyint", modulecode_scipy$interpolate$polyint, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\165\163\145\162\163\134\161\167\167\71\63\134\141\160\160\144\141\164\141\134\154\157\143\141\154\134\160\162\157\147\162\141\155\163\134\160\171\164\150\157\156\134\160\171\164\150\157\156\63\61\61\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\163\143\151\160\171\134\151\156\164\145\162\160\157\154\141\164\145\134\160\157\154\171\151\156\164\56\160\171"
#endif
},
    {"scipy.interpolate.rbf", modulecode_scipy$interpolate$rbf, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\165\163\145\162\163\134\161\167\167\71\63\134\141\160\160\144\141\164\141\134\154\157\143\141\154\134\160\162\157\147\162\141\155\163\134\160\171\164\150\157\156\134\160\171\164\150\157\156\63\61\61\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\163\143\151\160\171\134\151\156\164\145\162\160\157\154\141\164\145\134\162\142\146\56\160\171"
#endif
},
    {"scipy.linalg", modulecode_scipy$linalg, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_PACKAGE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\165\163\145\162\163\134\161\167\167\71\63\134\141\160\160\144\141\164\141\134\154\157\143\141\154\134\160\162\157\147\162\141\155\163\134\160\171\164\150\157\156\134\160\171\164\150\157\156\63\61\61\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\163\143\151\160\171\134\154\151\156\141\154\147\134\137\137\151\156\151\164\137\137\56\160\171"
#endif
},
    {"scipy.linalg._basic", modulecode_scipy$linalg$_basic, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\165\163\145\162\163\134\161\167\167\71\63\134\141\160\160\144\141\164\141\134\154\157\143\141\154\134\160\162\157\147\162\141\155\163\134\160\171\164\150\157\156\134\160\171\164\150\157\156\63\61\61\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\163\143\151\160\171\134\154\151\156\141\154\147\134\137\142\141\163\151\143\56\160\171"
#endif
},
    {"scipy.linalg._decomp", modulecode_scipy$linalg$_decomp, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\165\163\145\162\163\134\161\167\167\71\63\134\141\160\160\144\141\164\141\134\154\157\143\141\154\134\160\162\157\147\162\141\155\163\134\160\171\164\150\157\156\134\160\171\164\150\157\156\63\61\61\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\163\143\151\160\171\134\154\151\156\141\154\147\134\137\144\145\143\157\155\160\56\160\171"
#endif
},
    {"scipy.linalg._decomp_cholesky", modulecode_scipy$linalg$_decomp_cholesky, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\165\163\145\162\163\134\161\167\167\71\63\134\141\160\160\144\141\164\141\134\154\157\143\141\154\134\160\162\157\147\162\141\155\163\134\160\171\164\150\157\156\134\160\171\164\150\157\156\63\61\61\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\163\143\151\160\171\134\154\151\156\141\154\147\134\137\144\145\143\157\155\160\137\143\150\157\154\145\163\153\171\56\160\171"
#endif
},
    {"scipy.linalg._decomp_cossin", modulecode_scipy$linalg$_decomp_cossin, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\165\163\145\162\163\134\161\167\167\71\63\134\141\160\160\144\141\164\141\134\154\157\143\141\154\134\160\162\157\147\162\141\155\163\134\160\171\164\150\157\156\134\160\171\164\150\157\156\63\61\61\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\163\143\151\160\171\134\154\151\156\141\154\147\134\137\144\145\143\157\155\160\137\143\157\163\163\151\156\56\160\171"
#endif
},
    {"scipy.linalg._decomp_ldl", modulecode_scipy$linalg$_decomp_ldl, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\165\163\145\162\163\134\161\167\167\71\63\134\141\160\160\144\141\164\141\134\154\157\143\141\154\134\160\162\157\147\162\141\155\163\134\160\171\164\150\157\156\134\160\171\164\150\157\156\63\61\61\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\163\143\151\160\171\134\154\151\156\141\154\147\134\137\144\145\143\157\155\160\137\154\144\154\56\160\171"
#endif
},
    {"scipy.linalg._decomp_lu", modulecode_scipy$linalg$_decomp_lu, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\165\163\145\162\163\134\161\167\167\71\63\134\141\160\160\144\141\164\141\134\154\157\143\141\154\134\160\162\157\147\162\141\155\163\134\160\171\164\150\157\156\134\160\171\164\150\157\156\63\61\61\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\163\143\151\160\171\134\154\151\156\141\154\147\134\137\144\145\143\157\155\160\137\154\165\56\160\171"
#endif
},
    {"scipy.linalg._decomp_polar", modulecode_scipy$linalg$_decomp_polar, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\165\163\145\162\163\134\161\167\167\71\63\134\141\160\160\144\141\164\141\134\154\157\143\141\154\134\160\162\157\147\162\141\155\163\134\160\171\164\150\157\156\134\160\171\164\150\157\156\63\61\61\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\163\143\151\160\171\134\154\151\156\141\154\147\134\137\144\145\143\157\155\160\137\160\157\154\141\162\56\160\171"
#endif
},
    {"scipy.linalg._decomp_qr", modulecode_scipy$linalg$_decomp_qr, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\165\163\145\162\163\134\161\167\167\71\63\134\141\160\160\144\141\164\141\134\154\157\143\141\154\134\160\162\157\147\162\141\155\163\134\160\171\164\150\157\156\134\160\171\164\150\157\156\63\61\61\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\163\143\151\160\171\134\154\151\156\141\154\147\134\137\144\145\143\157\155\160\137\161\162\56\160\171"
#endif
},
    {"scipy.linalg._decomp_qz", modulecode_scipy$linalg$_decomp_qz, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\165\163\145\162\163\134\161\167\167\71\63\134\141\160\160\144\141\164\141\134\154\157\143\141\154\134\160\162\157\147\162\141\155\163\134\160\171\164\150\157\156\134\160\171\164\150\157\156\63\61\61\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\163\143\151\160\171\134\154\151\156\141\154\147\134\137\144\145\143\157\155\160\137\161\172\56\160\171"
#endif
},
    {"scipy.linalg._decomp_schur", modulecode_scipy$linalg$_decomp_schur, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\165\163\145\162\163\134\161\167\167\71\63\134\141\160\160\144\141\164\141\134\154\157\143\141\154\134\160\162\157\147\162\141\155\163\134\160\171\164\150\157\156\134\160\171\164\150\157\156\63\61\61\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\163\143\151\160\171\134\154\151\156\141\154\147\134\137\144\145\143\157\155\160\137\163\143\150\165\162\56\160\171"
#endif
},
    {"scipy.linalg._decomp_svd", modulecode_scipy$linalg$_decomp_svd, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\165\163\145\162\163\134\161\167\167\71\63\134\141\160\160\144\141\164\141\134\154\157\143\141\154\134\160\162\157\147\162\141\155\163\134\160\171\164\150\157\156\134\160\171\164\150\157\156\63\61\61\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\163\143\151\160\171\134\154\151\156\141\154\147\134\137\144\145\143\157\155\160\137\163\166\144\56\160\171"
#endif
},
    {"scipy.linalg._expm_frechet", modulecode_scipy$linalg$_expm_frechet, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\165\163\145\162\163\134\161\167\167\71\63\134\141\160\160\144\141\164\141\134\154\157\143\141\154\134\160\162\157\147\162\141\155\163\134\160\171\164\150\157\156\134\160\171\164\150\157\156\63\61\61\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\163\143\151\160\171\134\154\151\156\141\154\147\134\137\145\170\160\155\137\146\162\145\143\150\145\164\56\160\171"
#endif
},
    {"scipy.linalg._flinalg_py", modulecode_scipy$linalg$_flinalg_py, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\165\163\145\162\163\134\161\167\167\71\63\134\141\160\160\144\141\164\141\134\154\157\143\141\154\134\160\162\157\147\162\141\155\163\134\160\171\164\150\157\156\134\160\171\164\150\157\156\63\61\61\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\163\143\151\160\171\134\154\151\156\141\154\147\134\137\146\154\151\156\141\154\147\137\160\171\56\160\171"
#endif
},
    {"scipy.linalg._interpolative_backend", modulecode_scipy$linalg$_interpolative_backend, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\165\163\145\162\163\134\161\167\167\71\63\134\141\160\160\144\141\164\141\134\154\157\143\141\154\134\160\162\157\147\162\141\155\163\134\160\171\164\150\157\156\134\160\171\164\150\157\156\63\61\61\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\163\143\151\160\171\134\154\151\156\141\154\147\134\137\151\156\164\145\162\160\157\154\141\164\151\166\145\137\142\141\143\153\145\156\144\56\160\171"
#endif
},
    {"scipy.linalg._matfuncs", modulecode_scipy$linalg$_matfuncs, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\165\163\145\162\163\134\161\167\167\71\63\134\141\160\160\144\141\164\141\134\154\157\143\141\154\134\160\162\157\147\162\141\155\163\134\160\171\164\150\157\156\134\160\171\164\150\157\156\63\61\61\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\163\143\151\160\171\134\154\151\156\141\154\147\134\137\155\141\164\146\165\156\143\163\56\160\171"
#endif
},
    {"scipy.linalg._matfuncs_inv_ssq", modulecode_scipy$linalg$_matfuncs_inv_ssq, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\165\163\145\162\163\134\161\167\167\71\63\134\141\160\160\144\141\164\141\134\154\157\143\141\154\134\160\162\157\147\162\141\155\163\134\160\171\164\150\157\156\134\160\171\164\150\157\156\63\61\61\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\163\143\151\160\171\134\154\151\156\141\154\147\134\137\155\141\164\146\165\156\143\163\137\151\156\166\137\163\163\161\56\160\171"
#endif
},
    {"scipy.linalg._matfuncs_sqrtm", modulecode_scipy$linalg$_matfuncs_sqrtm, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\165\163\145\162\163\134\161\167\167\71\63\134\141\160\160\144\141\164\141\134\154\157\143\141\154\134\160\162\157\147\162\141\155\163\134\160\171\164\150\157\156\134\160\171\164\150\157\156\63\61\61\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\163\143\151\160\171\134\154\151\156\141\154\147\134\137\155\141\164\146\165\156\143\163\137\163\161\162\164\155\56\160\171"
#endif
},
    {"scipy.linalg._misc", modulecode_scipy$linalg$_misc, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\165\163\145\162\163\134\161\167\167\71\63\134\141\160\160\144\141\164\141\134\154\157\143\141\154\134\160\162\157\147\162\141\155\163\134\160\171\164\150\157\156\134\160\171\164\150\157\156\63\61\61\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\163\143\151\160\171\134\154\151\156\141\154\147\134\137\155\151\163\143\56\160\171"
#endif
},
    {"scipy.linalg._procrustes", modulecode_scipy$linalg$_procrustes, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\165\163\145\162\163\134\161\167\167\71\63\134\141\160\160\144\141\164\141\134\154\157\143\141\154\134\160\162\157\147\162\141\155\163\134\160\171\164\150\157\156\134\160\171\164\150\157\156\63\61\61\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\163\143\151\160\171\134\154\151\156\141\154\147\134\137\160\162\157\143\162\165\163\164\145\163\56\160\171"
#endif
},
    {"scipy.linalg._sketches", modulecode_scipy$linalg$_sketches, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\165\163\145\162\163\134\161\167\167\71\63\134\141\160\160\144\141\164\141\134\154\157\143\141\154\134\160\162\157\147\162\141\155\163\134\160\171\164\150\157\156\134\160\171\164\150\157\156\63\61\61\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\163\143\151\160\171\134\154\151\156\141\154\147\134\137\163\153\145\164\143\150\145\163\56\160\171"
#endif
},
    {"scipy.linalg._solvers", modulecode_scipy$linalg$_solvers, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\165\163\145\162\163\134\161\167\167\71\63\134\141\160\160\144\141\164\141\134\154\157\143\141\154\134\160\162\157\147\162\141\155\163\134\160\171\164\150\157\156\134\160\171\164\150\157\156\63\61\61\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\163\143\151\160\171\134\154\151\156\141\154\147\134\137\163\157\154\166\145\162\163\56\160\171"
#endif
},
    {"scipy.linalg._special_matrices", modulecode_scipy$linalg$_special_matrices, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\165\163\145\162\163\134\161\167\167\71\63\134\141\160\160\144\141\164\141\134\154\157\143\141\154\134\160\162\157\147\162\141\155\163\134\160\171\164\150\157\156\134\160\171\164\150\157\156\63\61\61\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\163\143\151\160\171\134\154\151\156\141\154\147\134\137\163\160\145\143\151\141\154\137\155\141\164\162\151\143\145\163\56\160\171"
#endif
},
    {"scipy.linalg.basic", modulecode_scipy$linalg$basic, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\165\163\145\162\163\134\161\167\167\71\63\134\141\160\160\144\141\164\141\134\154\157\143\141\154\134\160\162\157\147\162\141\155\163\134\160\171\164\150\157\156\134\160\171\164\150\157\156\63\61\61\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\163\143\151\160\171\134\154\151\156\141\154\147\134\142\141\163\151\143\56\160\171"
#endif
},
    {"scipy.linalg.blas", modulecode_scipy$linalg$blas, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\165\163\145\162\163\134\161\167\167\71\63\134\141\160\160\144\141\164\141\134\154\157\143\141\154\134\160\162\157\147\162\141\155\163\134\160\171\164\150\157\156\134\160\171\164\150\157\156\63\61\61\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\163\143\151\160\171\134\154\151\156\141\154\147\134\142\154\141\163\56\160\171"
#endif
},
    {"scipy.linalg.decomp", modulecode_scipy$linalg$decomp, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\165\163\145\162\163\134\161\167\167\71\63\134\141\160\160\144\141\164\141\134\154\157\143\141\154\134\160\162\157\147\162\141\155\163\134\160\171\164\150\157\156\134\160\171\164\150\157\156\63\61\61\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\163\143\151\160\171\134\154\151\156\141\154\147\134\144\145\143\157\155\160\56\160\171"
#endif
},
    {"scipy.linalg.decomp_cholesky", modulecode_scipy$linalg$decomp_cholesky, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\165\163\145\162\163\134\161\167\167\71\63\134\141\160\160\144\141\164\141\134\154\157\143\141\154\134\160\162\157\147\162\141\155\163\134\160\171\164\150\157\156\134\160\171\164\150\157\156\63\61\61\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\163\143\151\160\171\134\154\151\156\141\154\147\134\144\145\143\157\155\160\137\143\150\157\154\145\163\153\171\56\160\171"
#endif
},
    {"scipy.linalg.decomp_lu", modulecode_scipy$linalg$decomp_lu, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\165\163\145\162\163\134\161\167\167\71\63\134\141\160\160\144\141\164\141\134\154\157\143\141\154\134\160\162\157\147\162\141\155\163\134\160\171\164\150\157\156\134\160\171\164\150\157\156\63\61\61\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\163\143\151\160\171\134\154\151\156\141\154\147\134\144\145\143\157\155\160\137\154\165\56\160\171"
#endif
},
    {"scipy.linalg.decomp_qr", modulecode_scipy$linalg$decomp_qr, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\165\163\145\162\163\134\161\167\167\71\63\134\141\160\160\144\141\164\141\134\154\157\143\141\154\134\160\162\157\147\162\141\155\163\134\160\171\164\150\157\156\134\160\171\164\150\157\156\63\61\61\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\163\143\151\160\171\134\154\151\156\141\154\147\134\144\145\143\157\155\160\137\161\162\56\160\171"
#endif
},
    {"scipy.linalg.decomp_schur", modulecode_scipy$linalg$decomp_schur, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\165\163\145\162\163\134\161\167\167\71\63\134\141\160\160\144\141\164\141\134\154\157\143\141\154\134\160\162\157\147\162\141\155\163\134\160\171\164\150\157\156\134\160\171\164\150\157\156\63\61\61\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\163\143\151\160\171\134\154\151\156\141\154\147\134\144\145\143\157\155\160\137\163\143\150\165\162\56\160\171"
#endif
},
    {"scipy.linalg.decomp_svd", modulecode_scipy$linalg$decomp_svd, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\165\163\145\162\163\134\161\167\167\71\63\134\141\160\160\144\141\164\141\134\154\157\143\141\154\134\160\162\157\147\162\141\155\163\134\160\171\164\150\157\156\134\160\171\164\150\157\156\63\61\61\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\163\143\151\160\171\134\154\151\156\141\154\147\134\144\145\143\157\155\160\137\163\166\144\56\160\171"
#endif
},
    {"scipy.linalg.flinalg", modulecode_scipy$linalg$flinalg, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\165\163\145\162\163\134\161\167\167\71\63\134\141\160\160\144\141\164\141\134\154\157\143\141\154\134\160\162\157\147\162\141\155\163\134\160\171\164\150\157\156\134\160\171\164\150\157\156\63\61\61\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\163\143\151\160\171\134\154\151\156\141\154\147\134\146\154\151\156\141\154\147\56\160\171"
#endif
},
    {"scipy.linalg.interpolative", modulecode_scipy$linalg$interpolative, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\165\163\145\162\163\134\161\167\167\71\63\134\141\160\160\144\141\164\141\134\154\157\143\141\154\134\160\162\157\147\162\141\155\163\134\160\171\164\150\157\156\134\160\171\164\150\157\156\63\61\61\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\163\143\151\160\171\134\154\151\156\141\154\147\134\151\156\164\145\162\160\157\154\141\164\151\166\145\56\160\171"
#endif
},
    {"scipy.linalg.lapack", modulecode_scipy$linalg$lapack, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\165\163\145\162\163\134\161\167\167\71\63\134\141\160\160\144\141\164\141\134\154\157\143\141\154\134\160\162\157\147\162\141\155\163\134\160\171\164\150\157\156\134\160\171\164\150\157\156\63\61\61\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\163\143\151\160\171\134\154\151\156\141\154\147\134\154\141\160\141\143\153\56\160\171"
#endif
},
    {"scipy.linalg.matfuncs", modulecode_scipy$linalg$matfuncs, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\165\163\145\162\163\134\161\167\167\71\63\134\141\160\160\144\141\164\141\134\154\157\143\141\154\134\160\162\157\147\162\141\155\163\134\160\171\164\150\157\156\134\160\171\164\150\157\156\63\61\61\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\163\143\151\160\171\134\154\151\156\141\154\147\134\155\141\164\146\165\156\143\163\56\160\171"
#endif
},
    {"scipy.linalg.misc", modulecode_scipy$linalg$misc, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\165\163\145\162\163\134\161\167\167\71\63\134\141\160\160\144\141\164\141\134\154\157\143\141\154\134\160\162\157\147\162\141\155\163\134\160\171\164\150\157\156\134\160\171\164\150\157\156\63\61\61\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\163\143\151\160\171\134\154\151\156\141\154\147\134\155\151\163\143\56\160\171"
#endif
},
    {"scipy.linalg.special_matrices", modulecode_scipy$linalg$special_matrices, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\165\163\145\162\163\134\161\167\167\71\63\134\141\160\160\144\141\164\141\134\154\157\143\141\154\134\160\162\157\147\162\141\155\163\134\160\171\164\150\157\156\134\160\171\164\150\157\156\63\61\61\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\163\143\151\160\171\134\154\151\156\141\154\147\134\163\160\145\143\151\141\154\137\155\141\164\162\151\143\145\163\56\160\171"
#endif
},
    {"scipy.ndimage", modulecode_scipy$ndimage, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_PACKAGE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\165\163\145\162\163\134\161\167\167\71\63\134\141\160\160\144\141\164\141\134\154\157\143\141\154\134\160\162\157\147\162\141\155\163\134\160\171\164\150\157\156\134\160\171\164\150\157\156\63\61\61\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\163\143\151\160\171\134\156\144\151\155\141\147\145\134\137\137\151\156\151\164\137\137\56\160\171"
#endif
},
    {"scipy.ndimage._filters", modulecode_scipy$ndimage$_filters, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\165\163\145\162\163\134\161\167\167\71\63\134\141\160\160\144\141\164\141\134\154\157\143\141\154\134\160\162\157\147\162\141\155\163\134\160\171\164\150\157\156\134\160\171\164\150\157\156\63\61\61\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\163\143\151\160\171\134\156\144\151\155\141\147\145\134\137\146\151\154\164\145\162\163\56\160\171"
#endif
},
    {"scipy.ndimage._fourier", modulecode_scipy$ndimage$_fourier, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\165\163\145\162\163\134\161\167\167\71\63\134\141\160\160\144\141\164\141\134\154\157\143\141\154\134\160\162\157\147\162\141\155\163\134\160\171\164\150\157\156\134\160\171\164\150\157\156\63\61\61\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\163\143\151\160\171\134\156\144\151\155\141\147\145\134\137\146\157\165\162\151\145\162\56\160\171"
#endif
},
    {"scipy.ndimage._interpolation", modulecode_scipy$ndimage$_interpolation, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\165\163\145\162\163\134\161\167\167\71\63\134\141\160\160\144\141\164\141\134\154\157\143\141\154\134\160\162\157\147\162\141\155\163\134\160\171\164\150\157\156\134\160\171\164\150\157\156\63\61\61\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\163\143\151\160\171\134\156\144\151\155\141\147\145\134\137\151\156\164\145\162\160\157\154\141\164\151\157\156\56\160\171"
#endif
},
    {"scipy.ndimage._measurements", modulecode_scipy$ndimage$_measurements, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\165\163\145\162\163\134\161\167\167\71\63\134\141\160\160\144\141\164\141\134\154\157\143\141\154\134\160\162\157\147\162\141\155\163\134\160\171\164\150\157\156\134\160\171\164\150\157\156\63\61\61\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\163\143\151\160\171\134\156\144\151\155\141\147\145\134\137\155\145\141\163\165\162\145\155\145\156\164\163\56\160\171"
#endif
},
    {"scipy.ndimage._morphology", modulecode_scipy$ndimage$_morphology, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\165\163\145\162\163\134\161\167\167\71\63\134\141\160\160\144\141\164\141\134\154\157\143\141\154\134\160\162\157\147\162\141\155\163\134\160\171\164\150\157\156\134\160\171\164\150\157\156\63\61\61\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\163\143\151\160\171\134\156\144\151\155\141\147\145\134\137\155\157\162\160\150\157\154\157\147\171\56\160\171"
#endif
},
    {"scipy.ndimage._ni_docstrings", modulecode_scipy$ndimage$_ni_docstrings, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\165\163\145\162\163\134\161\167\167\71\63\134\141\160\160\144\141\164\141\134\154\157\143\141\154\134\160\162\157\147\162\141\155\163\134\160\171\164\150\157\156\134\160\171\164\150\157\156\63\61\61\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\163\143\151\160\171\134\156\144\151\155\141\147\145\134\137\156\151\137\144\157\143\163\164\162\151\156\147\163\56\160\171"
#endif
},
    {"scipy.ndimage._ni_support", modulecode_scipy$ndimage$_ni_support, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\165\163\145\162\163\134\161\167\167\71\63\134\141\160\160\144\141\164\141\134\154\157\143\141\154\134\160\162\157\147\162\141\155\163\134\160\171\164\150\157\156\134\160\171\164\150\157\156\63\61\61\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\163\143\151\160\171\134\156\144\151\155\141\147\145\134\137\156\151\137\163\165\160\160\157\162\164\56\160\171"
#endif
},
    {"scipy.ndimage.filters", modulecode_scipy$ndimage$filters, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\165\163\145\162\163\134\161\167\167\71\63\134\141\160\160\144\141\164\141\134\154\157\143\141\154\134\160\162\157\147\162\141\155\163\134\160\171\164\150\157\156\134\160\171\164\150\157\156\63\61\61\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\163\143\151\160\171\134\156\144\151\155\141\147\145\134\146\151\154\164\145\162\163\56\160\171"
#endif
},
    {"scipy.ndimage.fourier", modulecode_scipy$ndimage$fourier, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\165\163\145\162\163\134\161\167\167\71\63\134\141\160\160\144\141\164\141\134\154\157\143\141\154\134\160\162\157\147\162\141\155\163\134\160\171\164\150\157\156\134\160\171\164\150\157\156\63\61\61\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\163\143\151\160\171\134\156\144\151\155\141\147\145\134\146\157\165\162\151\145\162\56\160\171"
#endif
},
    {"scipy.ndimage.interpolation", modulecode_scipy$ndimage$interpolation, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\165\163\145\162\163\134\161\167\167\71\63\134\141\160\160\144\141\164\141\134\154\157\143\141\154\134\160\162\157\147\162\141\155\163\134\160\171\164\150\157\156\134\160\171\164\150\157\156\63\61\61\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\163\143\151\160\171\134\156\144\151\155\141\147\145\134\151\156\164\145\162\160\157\154\141\164\151\157\156\56\160\171"
#endif
},
    {"scipy.ndimage.measurements", modulecode_scipy$ndimage$measurements, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\165\163\145\162\163\134\161\167\167\71\63\134\141\160\160\144\141\164\141\134\154\157\143\141\154\134\160\162\157\147\162\141\155\163\134\160\171\164\150\157\156\134\160\171\164\150\157\156\63\61\61\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\163\143\151\160\171\134\156\144\151\155\141\147\145\134\155\145\141\163\165\162\145\155\145\156\164\163\56\160\171"
#endif
},
    {"scipy.ndimage.morphology", modulecode_scipy$ndimage$morphology, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\165\163\145\162\163\134\161\167\167\71\63\134\141\160\160\144\141\164\141\134\154\157\143\141\154\134\160\162\157\147\162\141\155\163\134\160\171\164\150\157\156\134\160\171\164\150\157\156\63\61\61\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\163\143\151\160\171\134\156\144\151\155\141\147\145\134\155\157\162\160\150\157\154\157\147\171\56\160\171"
#endif
},
    {"scipy.optimize", modulecode_scipy$optimize, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_PACKAGE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\165\163\145\162\163\134\161\167\167\71\63\134\141\160\160\144\141\164\141\134\154\157\143\141\154\134\160\162\157\147\162\141\155\163\134\160\171\164\150\157\156\134\160\171\164\150\157\156\63\61\61\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\163\143\151\160\171\134\157\160\164\151\155\151\172\145\134\137\137\151\156\151\164\137\137\56\160\171"
#endif
},
    {"scipy.optimize._basinhopping", modulecode_scipy$optimize$_basinhopping, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\165\163\145\162\163\134\161\167\167\71\63\134\141\160\160\144\141\164\141\134\154\157\143\141\154\134\160\162\157\147\162\141\155\163\134\160\171\164\150\157\156\134\160\171\164\150\157\156\63\61\61\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\163\143\151\160\171\134\157\160\164\151\155\151\172\145\134\137\142\141\163\151\156\150\157\160\160\151\156\147\56\160\171"
#endif
},
    {"scipy.optimize._cobyla_py", modulecode_scipy$optimize$_cobyla_py, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\165\163\145\162\163\134\161\167\167\71\63\134\141\160\160\144\141\164\141\134\154\157\143\141\154\134\160\162\157\147\162\141\155\163\134\160\171\164\150\157\156\134\160\171\164\150\157\156\63\61\61\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\163\143\151\160\171\134\157\160\164\151\155\151\172\145\134\137\143\157\142\171\154\141\137\160\171\56\160\171"
#endif
},
    {"scipy.optimize._constraints", modulecode_scipy$optimize$_constraints, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\165\163\145\162\163\134\161\167\167\71\63\134\141\160\160\144\141\164\141\134\154\157\143\141\154\134\160\162\157\147\162\141\155\163\134\160\171\164\150\157\156\134\160\171\164\150\157\156\63\61\61\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\163\143\151\160\171\134\157\160\164\151\155\151\172\145\134\137\143\157\156\163\164\162\141\151\156\164\163\56\160\171"
#endif
},
    {"scipy.optimize._differentiable_functions", modulecode_scipy$optimize$_differentiable_functions, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\165\163\145\162\163\134\161\167\167\71\63\134\141\160\160\144\141\164\141\134\154\157\143\141\154\134\160\162\157\147\162\141\155\163\134\160\171\164\150\157\156\134\160\171\164\150\157\156\63\61\61\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\163\143\151\160\171\134\157\160\164\151\155\151\172\145\134\137\144\151\146\146\145\162\145\156\164\151\141\142\154\145\137\146\165\156\143\164\151\157\156\163\56\160\171"
#endif
},
    {"scipy.optimize._differentialevolution", modulecode_scipy$optimize$_differentialevolution, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\165\163\145\162\163\134\161\167\167\71\63\134\141\160\160\144\141\164\141\134\154\157\143\141\154\134\160\162\157\147\162\141\155\163\134\160\171\164\150\157\156\134\160\171\164\150\157\156\63\61\61\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\163\143\151\160\171\134\157\160\164\151\155\151\172\145\134\137\144\151\146\146\145\162\145\156\164\151\141\154\145\166\157\154\165\164\151\157\156\56\160\171"
#endif
},
    {"scipy.optimize._direct_py", modulecode_scipy$optimize$_direct_py, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\165\163\145\162\163\134\161\167\167\71\63\134\141\160\160\144\141\164\141\134\154\157\143\141\154\134\160\162\157\147\162\141\155\163\134\160\171\164\150\157\156\134\160\171\164\150\157\156\63\61\61\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\163\143\151\160\171\134\157\160\164\151\155\151\172\145\134\137\144\151\162\145\143\164\137\160\171\56\160\171"
#endif
},
    {"scipy.optimize._dual_annealing", modulecode_scipy$optimize$_dual_annealing, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\165\163\145\162\163\134\161\167\167\71\63\134\141\160\160\144\141\164\141\134\154\157\143\141\154\134\160\162\157\147\162\141\155\163\134\160\171\164\150\157\156\134\160\171\164\150\157\156\63\61\61\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\163\143\151\160\171\134\157\160\164\151\155\151\172\145\134\137\144\165\141\154\137\141\156\156\145\141\154\151\156\147\56\160\171"
#endif
},
    {"scipy.optimize._hessian_update_strategy", modulecode_scipy$optimize$_hessian_update_strategy, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\165\163\145\162\163\134\161\167\167\71\63\134\141\160\160\144\141\164\141\134\154\157\143\141\154\134\160\162\157\147\162\141\155\163\134\160\171\164\150\157\156\134\160\171\164\150\157\156\63\61\61\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\163\143\151\160\171\134\157\160\164\151\155\151\172\145\134\137\150\145\163\163\151\141\156\137\165\160\144\141\164\145\137\163\164\162\141\164\145\147\171\56\160\171"
#endif
},
    {"scipy.optimize._lbfgsb_py", modulecode_scipy$optimize$_lbfgsb_py, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\165\163\145\162\163\134\161\167\167\71\63\134\141\160\160\144\141\164\141\134\154\157\143\141\154\134\160\162\157\147\162\141\155\163\134\160\171\164\150\157\156\134\160\171\164\150\157\156\63\61\61\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\163\143\151\160\171\134\157\160\164\151\155\151\172\145\134\137\154\142\146\147\163\142\137\160\171\56\160\171"
#endif
},
    {"scipy.optimize._linesearch", modulecode_scipy$optimize$_linesearch, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\165\163\145\162\163\134\161\167\167\71\63\134\141\160\160\144\141\164\141\134\154\157\143\141\154\134\160\162\157\147\162\141\155\163\134\160\171\164\150\157\156\134\160\171\164\150\157\156\63\61\61\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\163\143\151\160\171\134\157\160\164\151\155\151\172\145\134\137\154\151\156\145\163\145\141\162\143\150\56\160\171"
#endif
},
    {"scipy.optimize._linprog", modulecode_scipy$optimize$_linprog, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\165\163\145\162\163\134\161\167\167\71\63\134\141\160\160\144\141\164\141\134\154\157\143\141\154\134\160\162\157\147\162\141\155\163\134\160\171\164\150\157\156\134\160\171\164\150\157\156\63\61\61\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\163\143\151\160\171\134\157\160\164\151\155\151\172\145\134\137\154\151\156\160\162\157\147\56\160\171"
#endif
},
    {"scipy.optimize._linprog_doc", modulecode_scipy$optimize$_linprog_doc, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\165\163\145\162\163\134\161\167\167\71\63\134\141\160\160\144\141\164\141\134\154\157\143\141\154\134\160\162\157\147\162\141\155\163\134\160\171\164\150\157\156\134\160\171\164\150\157\156\63\61\61\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\163\143\151\160\171\134\157\160\164\151\155\151\172\145\134\137\154\151\156\160\162\157\147\137\144\157\143\56\160\171"
#endif
},
    {"scipy.optimize._linprog_highs", modulecode_scipy$optimize$_linprog_highs, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\165\163\145\162\163\134\161\167\167\71\63\134\141\160\160\144\141\164\141\134\154\157\143\141\154\134\160\162\157\147\162\141\155\163\134\160\171\164\150\157\156\134\160\171\164\150\157\156\63\61\61\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\163\143\151\160\171\134\157\160\164\151\155\151\172\145\134\137\154\151\156\160\162\157\147\137\150\151\147\150\163\56\160\171"
#endif
},
    {"scipy.optimize._linprog_ip", modulecode_scipy$optimize$_linprog_ip, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\165\163\145\162\163\134\161\167\167\71\63\134\141\160\160\144\141\164\141\134\154\157\143\141\154\134\160\162\157\147\162\141\155\163\134\160\171\164\150\157\156\134\160\171\164\150\157\156\63\61\61\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\163\143\151\160\171\134\157\160\164\151\155\151\172\145\134\137\154\151\156\160\162\157\147\137\151\160\56\160\171"
#endif
},
    {"scipy.optimize._linprog_rs", modulecode_scipy$optimize$_linprog_rs, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\165\163\145\162\163\134\161\167\167\71\63\134\141\160\160\144\141\164\141\134\154\157\143\141\154\134\160\162\157\147\162\141\155\163\134\160\171\164\150\157\156\134\160\171\164\150\157\156\63\61\61\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\163\143\151\160\171\134\157\160\164\151\155\151\172\145\134\137\154\151\156\160\162\157\147\137\162\163\56\160\171"
#endif
},
    {"scipy.optimize._linprog_simplex", modulecode_scipy$optimize$_linprog_simplex, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\165\163\145\162\163\134\161\167\167\71\63\134\141\160\160\144\141\164\141\134\154\157\143\141\154\134\160\162\157\147\162\141\155\163\134\160\171\164\150\157\156\134\160\171\164\150\157\156\63\61\61\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\163\143\151\160\171\134\157\160\164\151\155\151\172\145\134\137\154\151\156\160\162\157\147\137\163\151\155\160\154\145\170\56\160\171"
#endif
},
    {"scipy.optimize._linprog_util", modulecode_scipy$optimize$_linprog_util, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\165\163\145\162\163\134\161\167\167\71\63\134\141\160\160\144\141\164\141\134\154\157\143\141\154\134\160\162\157\147\162\141\155\163\134\160\171\164\150\157\156\134\160\171\164\150\157\156\63\61\61\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\163\143\151\160\171\134\157\160\164\151\155\151\172\145\134\137\154\151\156\160\162\157\147\137\165\164\151\154\56\160\171"
#endif
},
    {"scipy.optimize._lsq", modulecode_scipy$optimize$_lsq, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_PACKAGE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\165\163\145\162\163\134\161\167\167\71\63\134\141\160\160\144\141\164\141\134\154\157\143\141\154\134\160\162\157\147\162\141\155\163\134\160\171\164\150\157\156\134\160\171\164\150\157\156\63\61\61\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\163\143\151\160\171\134\157\160\164\151\155\151\172\145\134\137\154\163\161\134\137\137\151\156\151\164\137\137\56\160\171"
#endif
},
    {"scipy.optimize._lsq.bvls", modulecode_scipy$optimize$_lsq$bvls, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\165\163\145\162\163\134\161\167\167\71\63\134\141\160\160\144\141\164\141\134\154\157\143\141\154\134\160\162\157\147\162\141\155\163\134\160\171\164\150\157\156\134\160\171\164\150\157\156\63\61\61\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\163\143\151\160\171\134\157\160\164\151\155\151\172\145\134\137\154\163\161\134\142\166\154\163\56\160\171"
#endif
},
    {"scipy.optimize._lsq.common", modulecode_scipy$optimize$_lsq$common, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\165\163\145\162\163\134\161\167\167\71\63\134\141\160\160\144\141\164\141\134\154\157\143\141\154\134\160\162\157\147\162\141\155\163\134\160\171\164\150\157\156\134\160\171\164\150\157\156\63\61\61\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\163\143\151\160\171\134\157\160\164\151\155\151\172\145\134\137\154\163\161\134\143\157\155\155\157\156\56\160\171"
#endif
},
    {"scipy.optimize._lsq.dogbox", modulecode_scipy$optimize$_lsq$dogbox, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\165\163\145\162\163\134\161\167\167\71\63\134\141\160\160\144\141\164\141\134\154\157\143\141\154\134\160\162\157\147\162\141\155\163\134\160\171\164\150\157\156\134\160\171\164\150\157\156\63\61\61\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\163\143\151\160\171\134\157\160\164\151\155\151\172\145\134\137\154\163\161\134\144\157\147\142\157\170\56\160\171"
#endif
},
    {"scipy.optimize._lsq.least_squares", modulecode_scipy$optimize$_lsq$least_squares, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\165\163\145\162\163\134\161\167\167\71\63\134\141\160\160\144\141\164\141\134\154\157\143\141\154\134\160\162\157\147\162\141\155\163\134\160\171\164\150\157\156\134\160\171\164\150\157\156\63\61\61\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\163\143\151\160\171\134\157\160\164\151\155\151\172\145\134\137\154\163\161\134\154\145\141\163\164\137\163\161\165\141\162\145\163\56\160\171"
#endif
},
    {"scipy.optimize._lsq.lsq_linear", modulecode_scipy$optimize$_lsq$lsq_linear, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\165\163\145\162\163\134\161\167\167\71\63\134\141\160\160\144\141\164\141\134\154\157\143\141\154\134\160\162\157\147\162\141\155\163\134\160\171\164\150\157\156\134\160\171\164\150\157\156\63\61\61\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\163\143\151\160\171\134\157\160\164\151\155\151\172\145\134\137\154\163\161\134\154\163\161\137\154\151\156\145\141\162\56\160\171"
#endif
},
    {"scipy.optimize._lsq.trf", modulecode_scipy$optimize$_lsq$trf, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\165\163\145\162\163\134\161\167\167\71\63\134\141\160\160\144\141\164\141\134\154\157\143\141\154\134\160\162\157\147\162\141\155\163\134\160\171\164\150\157\156\134\160\171\164\150\157\156\63\61\61\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\163\143\151\160\171\134\157\160\164\151\155\151\172\145\134\137\154\163\161\134\164\162\146\56\160\171"
#endif
},
    {"scipy.optimize._lsq.trf_linear", modulecode_scipy$optimize$_lsq$trf_linear, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\165\163\145\162\163\134\161\167\167\71\63\134\141\160\160\144\141\164\141\134\154\157\143\141\154\134\160\162\157\147\162\141\155\163\134\160\171\164\150\157\156\134\160\171\164\150\157\156\63\61\61\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\163\143\151\160\171\134\157\160\164\151\155\151\172\145\134\137\154\163\161\134\164\162\146\137\154\151\156\145\141\162\56\160\171"
#endif
},
    {"scipy.optimize._milp", modulecode_scipy$optimize$_milp, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\165\163\145\162\163\134\161\167\167\71\63\134\141\160\160\144\141\164\141\134\154\157\143\141\154\134\160\162\157\147\162\141\155\163\134\160\171\164\150\157\156\134\160\171\164\150\157\156\63\61\61\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\163\143\151\160\171\134\157\160\164\151\155\151\172\145\134\137\155\151\154\160\56\160\171"
#endif
},
    {"scipy.optimize._minimize", modulecode_scipy$optimize$_minimize, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\165\163\145\162\163\134\161\167\167\71\63\134\141\160\160\144\141\164\141\134\154\157\143\141\154\134\160\162\157\147\162\141\155\163\134\160\171\164\150\157\156\134\160\171\164\150\157\156\63\61\61\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\163\143\151\160\171\134\157\160\164\151\155\151\172\145\134\137\155\151\156\151\155\151\172\145\56\160\171"
#endif
},
    {"scipy.optimize._minpack_py", modulecode_scipy$optimize$_minpack_py, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\165\163\145\162\163\134\161\167\167\71\63\134\141\160\160\144\141\164\141\134\154\157\143\141\154\134\160\162\157\147\162\141\155\163\134\160\171\164\150\157\156\134\160\171\164\150\157\156\63\61\61\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\163\143\151\160\171\134\157\160\164\151\155\151\172\145\134\137\155\151\156\160\141\143\153\137\160\171\56\160\171"
#endif
},
    {"scipy.optimize._nnls", modulecode_scipy$optimize$_nnls, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\165\163\145\162\163\134\161\167\167\71\63\134\141\160\160\144\141\164\141\134\154\157\143\141\154\134\160\162\157\147\162\141\155\163\134\160\171\164\150\157\156\134\160\171\164\150\157\156\63\61\61\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\163\143\151\160\171\134\157\160\164\151\155\151\172\145\134\137\156\156\154\163\56\160\171"
#endif
},
    {"scipy.optimize._nonlin", modulecode_scipy$optimize$_nonlin, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\165\163\145\162\163\134\161\167\167\71\63\134\141\160\160\144\141\164\141\134\154\157\143\141\154\134\160\162\157\147\162\141\155\163\134\160\171\164\150\157\156\134\160\171\164\150\157\156\63\61\61\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\163\143\151\160\171\134\157\160\164\151\155\151\172\145\134\137\156\157\156\154\151\156\56\160\171"
#endif
},
    {"scipy.optimize._numdiff", modulecode_scipy$optimize$_numdiff, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\165\163\145\162\163\134\161\167\167\71\63\134\141\160\160\144\141\164\141\134\154\157\143\141\154\134\160\162\157\147\162\141\155\163\134\160\171\164\150\157\156\134\160\171\164\150\157\156\63\61\61\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\163\143\151\160\171\134\157\160\164\151\155\151\172\145\134\137\156\165\155\144\151\146\146\56\160\171"
#endif
},
    {"scipy.optimize._optimize", modulecode_scipy$optimize$_optimize, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\165\163\145\162\163\134\161\167\167\71\63\134\141\160\160\144\141\164\141\134\154\157\143\141\154\134\160\162\157\147\162\141\155\163\134\160\171\164\150\157\156\134\160\171\164\150\157\156\63\61\61\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\163\143\151\160\171\134\157\160\164\151\155\151\172\145\134\137\157\160\164\151\155\151\172\145\56\160\171"
#endif
},
    {"scipy.optimize._qap", modulecode_scipy$optimize$_qap, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\165\163\145\162\163\134\161\167\167\71\63\134\141\160\160\144\141\164\141\134\154\157\143\141\154\134\160\162\157\147\162\141\155\163\134\160\171\164\150\157\156\134\160\171\164\150\157\156\63\61\61\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\163\143\151\160\171\134\157\160\164\151\155\151\172\145\134\137\161\141\160\56\160\171"
#endif
},
    {"scipy.optimize._remove_redundancy", modulecode_scipy$optimize$_remove_redundancy, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\165\163\145\162\163\134\161\167\167\71\63\134\141\160\160\144\141\164\141\134\154\157\143\141\154\134\160\162\157\147\162\141\155\163\134\160\171\164\150\157\156\134\160\171\164\150\157\156\63\61\61\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\163\143\151\160\171\134\157\160\164\151\155\151\172\145\134\137\162\145\155\157\166\145\137\162\145\144\165\156\144\141\156\143\171\56\160\171"
#endif
},
    {"scipy.optimize._root", modulecode_scipy$optimize$_root, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\165\163\145\162\163\134\161\167\167\71\63\134\141\160\160\144\141\164\141\134\154\157\143\141\154\134\160\162\157\147\162\141\155\163\134\160\171\164\150\157\156\134\160\171\164\150\157\156\63\61\61\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\163\143\151\160\171\134\157\160\164\151\155\151\172\145\134\137\162\157\157\164\56\160\171"
#endif
},
    {"scipy.optimize._root_scalar", modulecode_scipy$optimize$_root_scalar, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\165\163\145\162\163\134\161\167\167\71\63\134\141\160\160\144\141\164\141\134\154\157\143\141\154\134\160\162\157\147\162\141\155\163\134\160\171\164\150\157\156\134\160\171\164\150\157\156\63\61\61\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\163\143\151\160\171\134\157\160\164\151\155\151\172\145\134\137\162\157\157\164\137\163\143\141\154\141\162\56\160\171"
#endif
},
    {"scipy.optimize._shgo", modulecode_scipy$optimize$_shgo, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\165\163\145\162\163\134\161\167\167\71\63\134\141\160\160\144\141\164\141\134\154\157\143\141\154\134\160\162\157\147\162\141\155\163\134\160\171\164\150\157\156\134\160\171\164\150\157\156\63\61\61\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\163\143\151\160\171\134\157\160\164\151\155\151\172\145\134\137\163\150\147\157\56\160\171"
#endif
},
    {"scipy.optimize._shgo_lib", modulecode_scipy$optimize$_shgo_lib, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_PACKAGE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\165\163\145\162\163\134\161\167\167\71\63\134\141\160\160\144\141\164\141\134\154\157\143\141\154\134\160\162\157\147\162\141\155\163\134\160\171\164\150\157\156\134\160\171\164\150\157\156\63\61\61\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\163\143\151\160\171\134\157\160\164\151\155\151\172\145\134\137\163\150\147\157\137\154\151\142\134\137\137\151\156\151\164\137\137\56\160\171"
#endif
},
    {"scipy.optimize._shgo_lib.triangulation", modulecode_scipy$optimize$_shgo_lib$triangulation, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\165\163\145\162\163\134\161\167\167\71\63\134\141\160\160\144\141\164\141\134\154\157\143\141\154\134\160\162\157\147\162\141\155\163\134\160\171\164\150\157\156\134\160\171\164\150\157\156\63\61\61\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\163\143\151\160\171\134\157\160\164\151\155\151\172\145\134\137\163\150\147\157\137\154\151\142\134\164\162\151\141\156\147\165\154\141\164\151\157\156\56\160\171"
#endif
},
    {"scipy.optimize._slsqp_py", modulecode_scipy$optimize$_slsqp_py, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\165\163\145\162\163\134\161\167\167\71\63\134\141\160\160\144\141\164\141\134\154\157\143\141\154\134\160\162\157\147\162\141\155\163\134\160\171\164\150\157\156\134\160\171\164\150\157\156\63\61\61\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\163\143\151\160\171\134\157\160\164\151\155\151\172\145\134\137\163\154\163\161\160\137\160\171\56\160\171"
#endif
},
    {"scipy.optimize._spectral", modulecode_scipy$optimize$_spectral, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\165\163\145\162\163\134\161\167\167\71\63\134\141\160\160\144\141\164\141\134\154\157\143\141\154\134\160\162\157\147\162\141\155\163\134\160\171\164\150\157\156\134\160\171\164\150\157\156\63\61\61\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\163\143\151\160\171\134\157\160\164\151\155\151\172\145\134\137\163\160\145\143\164\162\141\154\56\160\171"
#endif
},
    {"scipy.optimize._tnc", modulecode_scipy$optimize$_tnc, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\165\163\145\162\163\134\161\167\167\71\63\134\141\160\160\144\141\164\141\134\154\157\143\141\154\134\160\162\157\147\162\141\155\163\134\160\171\164\150\157\156\134\160\171\164\150\157\156\63\61\61\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\163\143\151\160\171\134\157\160\164\151\155\151\172\145\134\137\164\156\143\56\160\171"
#endif
},
    {"scipy.optimize._trlib", modulecode_scipy$optimize$_trlib, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_PACKAGE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\165\163\145\162\163\134\161\167\167\71\63\134\141\160\160\144\141\164\141\134\154\157\143\141\154\134\160\162\157\147\162\141\155\163\134\160\171\164\150\157\156\134\160\171\164\150\157\156\63\61\61\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\163\143\151\160\171\134\157\160\164\151\155\151\172\145\134\137\164\162\154\151\142\134\137\137\151\156\151\164\137\137\56\160\171"
#endif
},
    {"scipy.optimize._trustregion", modulecode_scipy$optimize$_trustregion, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\165\163\145\162\163\134\161\167\167\71\63\134\141\160\160\144\141\164\141\134\154\157\143\141\154\134\160\162\157\147\162\141\155\163\134\160\171\164\150\157\156\134\160\171\164\150\157\156\63\61\61\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\163\143\151\160\171\134\157\160\164\151\155\151\172\145\134\137\164\162\165\163\164\162\145\147\151\157\156\56\160\171"
#endif
},
    {"scipy.optimize._trustregion_constr", modulecode_scipy$optimize$_trustregion_constr, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_PACKAGE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\165\163\145\162\163\134\161\167\167\71\63\134\141\160\160\144\141\164\141\134\154\157\143\141\154\134\160\162\157\147\162\141\155\163\134\160\171\164\150\157\156\134\160\171\164\150\157\156\63\61\61\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\163\143\151\160\171\134\157\160\164\151\155\151\172\145\134\137\164\162\165\163\164\162\145\147\151\157\156\137\143\157\156\163\164\162\134\137\137\151\156\151\164\137\137\56\160\171"
#endif
},
    {"scipy.optimize._trustregion_constr.canonical_constraint", modulecode_scipy$optimize$_trustregion_constr$canonical_constraint, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\165\163\145\162\163\134\161\167\167\71\63\134\141\160\160\144\141\164\141\134\154\157\143\141\154\134\160\162\157\147\162\141\155\163\134\160\171\164\150\157\156\134\160\171\164\150\157\156\63\61\61\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\163\143\151\160\171\134\157\160\164\151\155\151\172\145\134\137\164\162\165\163\164\162\145\147\151\157\156\137\143\157\156\163\164\162\134\143\141\156\157\156\151\143\141\154\137\143\157\156\163\164\162\141\151\156\164\56\160\171"
#endif
},
    {"scipy.optimize._trustregion_constr.equality_constrained_sqp", modulecode_scipy$optimize$_trustregion_constr$equality_constrained_sqp, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\165\163\145\162\163\134\161\167\167\71\63\134\141\160\160\144\141\164\141\134\154\157\143\141\154\134\160\162\157\147\162\141\155\163\134\160\171\164\150\157\156\134\160\171\164\150\157\156\63\61\61\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\163\143\151\160\171\134\157\160\164\151\155\151\172\145\134\137\164\162\165\163\164\162\145\147\151\157\156\137\143\157\156\163\164\162\134\145\161\165\141\154\151\164\171\137\143\157\156\163\164\162\141\151\156\145\144\137\163\161\160\56\160\171"
#endif
},
    {"scipy.optimize._trustregion_constr.minimize_trustregion_constr", modulecode_scipy$optimize$_trustregion_constr$minimize_trustregion_constr, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\165\163\145\162\163\134\161\167\167\71\63\134\141\160\160\144\141\164\141\134\154\157\143\141\154\134\160\162\157\147\162\141\155\163\134\160\171\164\150\157\156\134\160\171\164\150\157\156\63\61\61\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\163\143\151\160\171\134\157\160\164\151\155\151\172\145\134\137\164\162\165\163\164\162\145\147\151\157\156\137\143\157\156\163\164\162\134\155\151\156\151\155\151\172\145\137\164\162\165\163\164\162\145\147\151\157\156\137\143\157\156\163\164\162\56\160\171"
#endif
},
    {"scipy.optimize._trustregion_constr.projections", modulecode_scipy$optimize$_trustregion_constr$projections, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\165\163\145\162\163\134\161\167\167\71\63\134\141\160\160\144\141\164\141\134\154\157\143\141\154\134\160\162\157\147\162\141\155\163\134\160\171\164\150\157\156\134\160\171\164\150\157\156\63\61\61\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\163\143\151\160\171\134\157\160\164\151\155\151\172\145\134\137\164\162\165\163\164\162\145\147\151\157\156\137\143\157\156\163\164\162\134\160\162\157\152\145\143\164\151\157\156\163\56\160\171"
#endif
},
    {"scipy.optimize._trustregion_constr.qp_subproblem", modulecode_scipy$optimize$_trustregion_constr$qp_subproblem, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\165\163\145\162\163\134\161\167\167\71\63\134\141\160\160\144\141\164\141\134\154\157\143\141\154\134\160\162\157\147\162\141\155\163\134\160\171\164\150\157\156\134\160\171\164\150\157\156\63\61\61\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\163\143\151\160\171\134\157\160\164\151\155\151\172\145\134\137\164\162\165\163\164\162\145\147\151\157\156\137\143\157\156\163\164\162\134\161\160\137\163\165\142\160\162\157\142\154\145\155\56\160\171"
#endif
},
    {"scipy.optimize._trustregion_constr.report", modulecode_scipy$optimize$_trustregion_constr$report, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\165\163\145\162\163\134\161\167\167\71\63\134\141\160\160\144\141\164\141\134\154\157\143\141\154\134\160\162\157\147\162\141\155\163\134\160\171\164\150\157\156\134\160\171\164\150\157\156\63\61\61\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\163\143\151\160\171\134\157\160\164\151\155\151\172\145\134\137\164\162\165\163\164\162\145\147\151\157\156\137\143\157\156\163\164\162\134\162\145\160\157\162\164\56\160\171"
#endif
},
    {"scipy.optimize._trustregion_constr.tr_interior_point", modulecode_scipy$optimize$_trustregion_constr$tr_interior_point, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\165\163\145\162\163\134\161\167\167\71\63\134\141\160\160\144\141\164\141\134\154\157\143\141\154\134\160\162\157\147\162\141\155\163\134\160\171\164\150\157\156\134\160\171\164\150\157\156\63\61\61\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\163\143\151\160\171\134\157\160\164\151\155\151\172\145\134\137\164\162\165\163\164\162\145\147\151\157\156\137\143\157\156\163\164\162\134\164\162\137\151\156\164\145\162\151\157\162\137\160\157\151\156\164\56\160\171"
#endif
},
    {"scipy.optimize._trustregion_dogleg", modulecode_scipy$optimize$_trustregion_dogleg, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\165\163\145\162\163\134\161\167\167\71\63\134\141\160\160\144\141\164\141\134\154\157\143\141\154\134\160\162\157\147\162\141\155\163\134\160\171\164\150\157\156\134\160\171\164\150\157\156\63\61\61\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\163\143\151\160\171\134\157\160\164\151\155\151\172\145\134\137\164\162\165\163\164\162\145\147\151\157\156\137\144\157\147\154\145\147\56\160\171"
#endif
},
    {"scipy.optimize._trustregion_exact", modulecode_scipy$optimize$_trustregion_exact, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\165\163\145\162\163\134\161\167\167\71\63\134\141\160\160\144\141\164\141\134\154\157\143\141\154\134\160\162\157\147\162\141\155\163\134\160\171\164\150\157\156\134\160\171\164\150\157\156\63\61\61\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\163\143\151\160\171\134\157\160\164\151\155\151\172\145\134\137\164\162\165\163\164\162\145\147\151\157\156\137\145\170\141\143\164\56\160\171"
#endif
},
    {"scipy.optimize._trustregion_krylov", modulecode_scipy$optimize$_trustregion_krylov, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\165\163\145\162\163\134\161\167\167\71\63\134\141\160\160\144\141\164\141\134\154\157\143\141\154\134\160\162\157\147\162\141\155\163\134\160\171\164\150\157\156\134\160\171\164\150\157\156\63\61\61\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\163\143\151\160\171\134\157\160\164\151\155\151\172\145\134\137\164\162\165\163\164\162\145\147\151\157\156\137\153\162\171\154\157\166\56\160\171"
#endif
},
    {"scipy.optimize._trustregion_ncg", modulecode_scipy$optimize$_trustregion_ncg, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\165\163\145\162\163\134\161\167\167\71\63\134\141\160\160\144\141\164\141\134\154\157\143\141\154\134\160\162\157\147\162\141\155\163\134\160\171\164\150\157\156\134\160\171\164\150\157\156\63\61\61\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\163\143\151\160\171\134\157\160\164\151\155\151\172\145\134\137\164\162\165\163\164\162\145\147\151\157\156\137\156\143\147\56\160\171"
#endif
},
    {"scipy.optimize._zeros_py", modulecode_scipy$optimize$_zeros_py, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\165\163\145\162\163\134\161\167\167\71\63\134\141\160\160\144\141\164\141\134\154\157\143\141\154\134\160\162\157\147\162\141\155\163\134\160\171\164\150\157\156\134\160\171\164\150\157\156\63\61\61\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\163\143\151\160\171\134\157\160\164\151\155\151\172\145\134\137\172\145\162\157\163\137\160\171\56\160\171"
#endif
},
    {"scipy.optimize.cobyla", modulecode_scipy$optimize$cobyla, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\165\163\145\162\163\134\161\167\167\71\63\134\141\160\160\144\141\164\141\134\154\157\143\141\154\134\160\162\157\147\162\141\155\163\134\160\171\164\150\157\156\134\160\171\164\150\157\156\63\61\61\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\163\143\151\160\171\134\157\160\164\151\155\151\172\145\134\143\157\142\171\154\141\56\160\171"
#endif
},
    {"scipy.optimize.lbfgsb", modulecode_scipy$optimize$lbfgsb, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\165\163\145\162\163\134\161\167\167\71\63\134\141\160\160\144\141\164\141\134\154\157\143\141\154\134\160\162\157\147\162\141\155\163\134\160\171\164\150\157\156\134\160\171\164\150\157\156\63\61\61\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\163\143\151\160\171\134\157\160\164\151\155\151\172\145\134\154\142\146\147\163\142\56\160\171"
#endif
},
    {"scipy.optimize.linesearch", modulecode_scipy$optimize$linesearch, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\165\163\145\162\163\134\161\167\167\71\63\134\141\160\160\144\141\164\141\134\154\157\143\141\154\134\160\162\157\147\162\141\155\163\134\160\171\164\150\157\156\134\160\171\164\150\157\156\63\61\61\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\163\143\151\160\171\134\157\160\164\151\155\151\172\145\134\154\151\156\145\163\145\141\162\143\150\56\160\171"
#endif
},
    {"scipy.optimize.minpack", modulecode_scipy$optimize$minpack, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\165\163\145\162\163\134\161\167\167\71\63\134\141\160\160\144\141\164\141\134\154\157\143\141\154\134\160\162\157\147\162\141\155\163\134\160\171\164\150\157\156\134\160\171\164\150\157\156\63\61\61\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\163\143\151\160\171\134\157\160\164\151\155\151\172\145\134\155\151\156\160\141\143\153\56\160\171"
#endif
},
    {"scipy.optimize.minpack2", modulecode_scipy$optimize$minpack2, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\165\163\145\162\163\134\161\167\167\71\63\134\141\160\160\144\141\164\141\134\154\157\143\141\154\134\160\162\157\147\162\141\155\163\134\160\171\164\150\157\156\134\160\171\164\150\157\156\63\61\61\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\163\143\151\160\171\134\157\160\164\151\155\151\172\145\134\155\151\156\160\141\143\153\62\56\160\171"
#endif
},
    {"scipy.optimize.moduleTNC", modulecode_scipy$optimize$moduleTNC, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\165\163\145\162\163\134\161\167\167\71\63\134\141\160\160\144\141\164\141\134\154\157\143\141\154\134\160\162\157\147\162\141\155\163\134\160\171\164\150\157\156\134\160\171\164\150\157\156\63\61\61\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\163\143\151\160\171\134\157\160\164\151\155\151\172\145\134\155\157\144\165\154\145\124\116\103\56\160\171"
#endif
},
    {"scipy.optimize.nonlin", modulecode_scipy$optimize$nonlin, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\165\163\145\162\163\134\161\167\167\71\63\134\141\160\160\144\141\164\141\134\154\157\143\141\154\134\160\162\157\147\162\141\155\163\134\160\171\164\150\157\156\134\160\171\164\150\157\156\63\61\61\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\163\143\151\160\171\134\157\160\164\151\155\151\172\145\134\156\157\156\154\151\156\56\160\171"
#endif
},
    {"scipy.optimize.optimize", modulecode_scipy$optimize$optimize, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\165\163\145\162\163\134\161\167\167\71\63\134\141\160\160\144\141\164\141\134\154\157\143\141\154\134\160\162\157\147\162\141\155\163\134\160\171\164\150\157\156\134\160\171\164\150\157\156\63\61\61\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\163\143\151\160\171\134\157\160\164\151\155\151\172\145\134\157\160\164\151\155\151\172\145\56\160\171"
#endif
},
    {"scipy.optimize.slsqp", modulecode_scipy$optimize$slsqp, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\165\163\145\162\163\134\161\167\167\71\63\134\141\160\160\144\141\164\141\134\154\157\143\141\154\134\160\162\157\147\162\141\155\163\134\160\171\164\150\157\156\134\160\171\164\150\157\156\63\61\61\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\163\143\151\160\171\134\157\160\164\151\155\151\172\145\134\163\154\163\161\160\56\160\171"
#endif
},
    {"scipy.optimize.tnc", modulecode_scipy$optimize$tnc, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\165\163\145\162\163\134\161\167\167\71\63\134\141\160\160\144\141\164\141\134\154\157\143\141\154\134\160\162\157\147\162\141\155\163\134\160\171\164\150\157\156\134\160\171\164\150\157\156\63\61\61\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\163\143\151\160\171\134\157\160\164\151\155\151\172\145\134\164\156\143\56\160\171"
#endif
},
    {"scipy.optimize.zeros", modulecode_scipy$optimize$zeros, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\165\163\145\162\163\134\161\167\167\71\63\134\141\160\160\144\141\164\141\134\154\157\143\141\154\134\160\162\157\147\162\141\155\163\134\160\171\164\150\157\156\134\160\171\164\150\157\156\63\61\61\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\163\143\151\160\171\134\157\160\164\151\155\151\172\145\134\172\145\162\157\163\56\160\171"
#endif
},
    {"scipy.sparse", modulecode_scipy$sparse, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_PACKAGE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\165\163\145\162\163\134\161\167\167\71\63\134\141\160\160\144\141\164\141\134\154\157\143\141\154\134\160\162\157\147\162\141\155\163\134\160\171\164\150\157\156\134\160\171\164\150\157\156\63\61\61\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\163\143\151\160\171\134\163\160\141\162\163\145\134\137\137\151\156\151\164\137\137\56\160\171"
#endif
},
    {"scipy.sparse._arrays", modulecode_scipy$sparse$_arrays, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\165\163\145\162\163\134\161\167\167\71\63\134\141\160\160\144\141\164\141\134\154\157\143\141\154\134\160\162\157\147\162\141\155\163\134\160\171\164\150\157\156\134\160\171\164\150\157\156\63\61\61\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\163\143\151\160\171\134\163\160\141\162\163\145\134\137\141\162\162\141\171\163\56\160\171"
#endif
},
    {"scipy.sparse._base", modulecode_scipy$sparse$_base, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\165\163\145\162\163\134\161\167\167\71\63\134\141\160\160\144\141\164\141\134\154\157\143\141\154\134\160\162\157\147\162\141\155\163\134\160\171\164\150\157\156\134\160\171\164\150\157\156\63\61\61\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\163\143\151\160\171\134\163\160\141\162\163\145\134\137\142\141\163\145\56\160\171"
#endif
},
    {"scipy.sparse._bsr", modulecode_scipy$sparse$_bsr, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\165\163\145\162\163\134\161\167\167\71\63\134\141\160\160\144\141\164\141\134\154\157\143\141\154\134\160\162\157\147\162\141\155\163\134\160\171\164\150\157\156\134\160\171\164\150\157\156\63\61\61\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\163\143\151\160\171\134\163\160\141\162\163\145\134\137\142\163\162\56\160\171"
#endif
},
    {"scipy.sparse._compressed", modulecode_scipy$sparse$_compressed, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\165\163\145\162\163\134\161\167\167\71\63\134\141\160\160\144\141\164\141\134\154\157\143\141\154\134\160\162\157\147\162\141\155\163\134\160\171\164\150\157\156\134\160\171\164\150\157\156\63\61\61\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\163\143\151\160\171\134\163\160\141\162\163\145\134\137\143\157\155\160\162\145\163\163\145\144\56\160\171"
#endif
},
    {"scipy.sparse._construct", modulecode_scipy$sparse$_construct, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\165\163\145\162\163\134\161\167\167\71\63\134\141\160\160\144\141\164\141\134\154\157\143\141\154\134\160\162\157\147\162\141\155\163\134\160\171\164\150\157\156\134\160\171\164\150\157\156\63\61\61\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\163\143\151\160\171\134\163\160\141\162\163\145\134\137\143\157\156\163\164\162\165\143\164\56\160\171"
#endif
},
    {"scipy.sparse._coo", modulecode_scipy$sparse$_coo, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\165\163\145\162\163\134\161\167\167\71\63\134\141\160\160\144\141\164\141\134\154\157\143\141\154\134\160\162\157\147\162\141\155\163\134\160\171\164\150\157\156\134\160\171\164\150\157\156\63\61\61\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\163\143\151\160\171\134\163\160\141\162\163\145\134\137\143\157\157\56\160\171"
#endif
},
    {"scipy.sparse._csc", modulecode_scipy$sparse$_csc, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\165\163\145\162\163\134\161\167\167\71\63\134\141\160\160\144\141\164\141\134\154\157\143\141\154\134\160\162\157\147\162\141\155\163\134\160\171\164\150\157\156\134\160\171\164\150\157\156\63\61\61\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\163\143\151\160\171\134\163\160\141\162\163\145\134\137\143\163\143\56\160\171"
#endif
},
    {"scipy.sparse._csr", modulecode_scipy$sparse$_csr, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\165\163\145\162\163\134\161\167\167\71\63\134\141\160\160\144\141\164\141\134\154\157\143\141\154\134\160\162\157\147\162\141\155\163\134\160\171\164\150\157\156\134\160\171\164\150\157\156\63\61\61\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\163\143\151\160\171\134\163\160\141\162\163\145\134\137\143\163\162\56\160\171"
#endif
},
    {"scipy.sparse._data", modulecode_scipy$sparse$_data, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\165\163\145\162\163\134\161\167\167\71\63\134\141\160\160\144\141\164\141\134\154\157\143\141\154\134\160\162\157\147\162\141\155\163\134\160\171\164\150\157\156\134\160\171\164\150\157\156\63\61\61\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\163\143\151\160\171\134\163\160\141\162\163\145\134\137\144\141\164\141\56\160\171"
#endif
},
    {"scipy.sparse._dia", modulecode_scipy$sparse$_dia, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\165\163\145\162\163\134\161\167\167\71\63\134\141\160\160\144\141\164\141\134\154\157\143\141\154\134\160\162\157\147\162\141\155\163\134\160\171\164\150\157\156\134\160\171\164\150\157\156\63\61\61\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\163\143\151\160\171\134\163\160\141\162\163\145\134\137\144\151\141\56\160\171"
#endif
},
    {"scipy.sparse._dok", modulecode_scipy$sparse$_dok, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\165\163\145\162\163\134\161\167\167\71\63\134\141\160\160\144\141\164\141\134\154\157\143\141\154\134\160\162\157\147\162\141\155\163\134\160\171\164\150\157\156\134\160\171\164\150\157\156\63\61\61\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\163\143\151\160\171\134\163\160\141\162\163\145\134\137\144\157\153\56\160\171"
#endif
},
    {"scipy.sparse._extract", modulecode_scipy$sparse$_extract, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\165\163\145\162\163\134\161\167\167\71\63\134\141\160\160\144\141\164\141\134\154\157\143\141\154\134\160\162\157\147\162\141\155\163\134\160\171\164\150\157\156\134\160\171\164\150\157\156\63\61\61\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\163\143\151\160\171\134\163\160\141\162\163\145\134\137\145\170\164\162\141\143\164\56\160\171"
#endif
},
    {"scipy.sparse._index", modulecode_scipy$sparse$_index, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\165\163\145\162\163\134\161\167\167\71\63\134\141\160\160\144\141\164\141\134\154\157\143\141\154\134\160\162\157\147\162\141\155\163\134\160\171\164\150\157\156\134\160\171\164\150\157\156\63\61\61\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\163\143\151\160\171\134\163\160\141\162\163\145\134\137\151\156\144\145\170\56\160\171"
#endif
},
    {"scipy.sparse._lil", modulecode_scipy$sparse$_lil, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\165\163\145\162\163\134\161\167\167\71\63\134\141\160\160\144\141\164\141\134\154\157\143\141\154\134\160\162\157\147\162\141\155\163\134\160\171\164\150\157\156\134\160\171\164\150\157\156\63\61\61\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\163\143\151\160\171\134\163\160\141\162\163\145\134\137\154\151\154\56\160\171"
#endif
},
    {"scipy.sparse._matrix_io", modulecode_scipy$sparse$_matrix_io, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\165\163\145\162\163\134\161\167\167\71\63\134\141\160\160\144\141\164\141\134\154\157\143\141\154\134\160\162\157\147\162\141\155\163\134\160\171\164\150\157\156\134\160\171\164\150\157\156\63\61\61\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\163\143\151\160\171\134\163\160\141\162\163\145\134\137\155\141\164\162\151\170\137\151\157\56\160\171"
#endif
},
    {"scipy.sparse._spfuncs", modulecode_scipy$sparse$_spfuncs, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\165\163\145\162\163\134\161\167\167\71\63\134\141\160\160\144\141\164\141\134\154\157\143\141\154\134\160\162\157\147\162\141\155\163\134\160\171\164\150\157\156\134\160\171\164\150\157\156\63\61\61\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\163\143\151\160\171\134\163\160\141\162\163\145\134\137\163\160\146\165\156\143\163\56\160\171"
#endif
},
    {"scipy.sparse._sputils", modulecode_scipy$sparse$_sputils, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\165\163\145\162\163\134\161\167\167\71\63\134\141\160\160\144\141\164\141\134\154\157\143\141\154\134\160\162\157\147\162\141\155\163\134\160\171\164\150\157\156\134\160\171\164\150\157\156\63\61\61\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\163\143\151\160\171\134\163\160\141\162\163\145\134\137\163\160\165\164\151\154\163\56\160\171"
#endif
},
    {"scipy.sparse.base", modulecode_scipy$sparse$base, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\165\163\145\162\163\134\161\167\167\71\63\134\141\160\160\144\141\164\141\134\154\157\143\141\154\134\160\162\157\147\162\141\155\163\134\160\171\164\150\157\156\134\160\171\164\150\157\156\63\61\61\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\163\143\151\160\171\134\163\160\141\162\163\145\134\142\141\163\145\56\160\171"
#endif
},
    {"scipy.sparse.bsr", modulecode_scipy$sparse$bsr, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\165\163\145\162\163\134\161\167\167\71\63\134\141\160\160\144\141\164\141\134\154\157\143\141\154\134\160\162\157\147\162\141\155\163\134\160\171\164\150\157\156\134\160\171\164\150\157\156\63\61\61\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\163\143\151\160\171\134\163\160\141\162\163\145\134\142\163\162\56\160\171"
#endif
},
    {"scipy.sparse.compressed", modulecode_scipy$sparse$compressed, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\165\163\145\162\163\134\161\167\167\71\63\134\141\160\160\144\141\164\141\134\154\157\143\141\154\134\160\162\157\147\162\141\155\163\134\160\171\164\150\157\156\134\160\171\164\150\157\156\63\61\61\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\163\143\151\160\171\134\163\160\141\162\163\145\134\143\157\155\160\162\145\163\163\145\144\56\160\171"
#endif
},
    {"scipy.sparse.construct", modulecode_scipy$sparse$construct, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\165\163\145\162\163\134\161\167\167\71\63\134\141\160\160\144\141\164\141\134\154\157\143\141\154\134\160\162\157\147\162\141\155\163\134\160\171\164\150\157\156\134\160\171\164\150\157\156\63\61\61\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\163\143\151\160\171\134\163\160\141\162\163\145\134\143\157\156\163\164\162\165\143\164\56\160\171"
#endif
},
    {"scipy.sparse.coo", modulecode_scipy$sparse$coo, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\165\163\145\162\163\134\161\167\167\71\63\134\141\160\160\144\141\164\141\134\154\157\143\141\154\134\160\162\157\147\162\141\155\163\134\160\171\164\150\157\156\134\160\171\164\150\157\156\63\61\61\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\163\143\151\160\171\134\163\160\141\162\163\145\134\143\157\157\56\160\171"
#endif
},
    {"scipy.sparse.csc", modulecode_scipy$sparse$csc, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\165\163\145\162\163\134\161\167\167\71\63\134\141\160\160\144\141\164\141\134\154\157\143\141\154\134\160\162\157\147\162\141\155\163\134\160\171\164\150\157\156\134\160\171\164\150\157\156\63\61\61\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\163\143\151\160\171\134\163\160\141\162\163\145\134\143\163\143\56\160\171"
#endif
},
    {"scipy.sparse.csgraph", modulecode_scipy$sparse$csgraph, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_PACKAGE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\165\163\145\162\163\134\161\167\167\71\63\134\141\160\160\144\141\164\141\134\154\157\143\141\154\134\160\162\157\147\162\141\155\163\134\160\171\164\150\157\156\134\160\171\164\150\157\156\63\61\61\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\163\143\151\160\171\134\163\160\141\162\163\145\134\143\163\147\162\141\160\150\134\137\137\151\156\151\164\137\137\56\160\171"
#endif
},
    {"scipy.sparse.csgraph._laplacian", modulecode_scipy$sparse$csgraph$_laplacian, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\165\163\145\162\163\134\161\167\167\71\63\134\141\160\160\144\141\164\141\134\154\157\143\141\154\134\160\162\157\147\162\141\155\163\134\160\171\164\150\157\156\134\160\171\164\150\157\156\63\61\61\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\163\143\151\160\171\134\163\160\141\162\163\145\134\143\163\147\162\141\160\150\134\137\154\141\160\154\141\143\151\141\156\56\160\171"
#endif
},
    {"scipy.sparse.csgraph._validation", modulecode_scipy$sparse$csgraph$_validation, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\165\163\145\162\163\134\161\167\167\71\63\134\141\160\160\144\141\164\141\134\154\157\143\141\154\134\160\162\157\147\162\141\155\163\134\160\171\164\150\157\156\134\160\171\164\150\157\156\63\61\61\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\163\143\151\160\171\134\163\160\141\162\163\145\134\143\163\147\162\141\160\150\134\137\166\141\154\151\144\141\164\151\157\156\56\160\171"
#endif
},
    {"scipy.sparse.csr", modulecode_scipy$sparse$csr, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\165\163\145\162\163\134\161\167\167\71\63\134\141\160\160\144\141\164\141\134\154\157\143\141\154\134\160\162\157\147\162\141\155\163\134\160\171\164\150\157\156\134\160\171\164\150\157\156\63\61\61\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\163\143\151\160\171\134\163\160\141\162\163\145\134\143\163\162\56\160\171"
#endif
},
    {"scipy.sparse.data", modulecode_scipy$sparse$data, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\165\163\145\162\163\134\161\167\167\71\63\134\141\160\160\144\141\164\141\134\154\157\143\141\154\134\160\162\157\147\162\141\155\163\134\160\171\164\150\157\156\134\160\171\164\150\157\156\63\61\61\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\163\143\151\160\171\134\163\160\141\162\163\145\134\144\141\164\141\56\160\171"
#endif
},
    {"scipy.sparse.dia", modulecode_scipy$sparse$dia, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\165\163\145\162\163\134\161\167\167\71\63\134\141\160\160\144\141\164\141\134\154\157\143\141\154\134\160\162\157\147\162\141\155\163\134\160\171\164\150\157\156\134\160\171\164\150\157\156\63\61\61\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\163\143\151\160\171\134\163\160\141\162\163\145\134\144\151\141\56\160\171"
#endif
},
    {"scipy.sparse.dok", modulecode_scipy$sparse$dok, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\165\163\145\162\163\134\161\167\167\71\63\134\141\160\160\144\141\164\141\134\154\157\143\141\154\134\160\162\157\147\162\141\155\163\134\160\171\164\150\157\156\134\160\171\164\150\157\156\63\61\61\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\163\143\151\160\171\134\163\160\141\162\163\145\134\144\157\153\56\160\171"
#endif
},
    {"scipy.sparse.extract", modulecode_scipy$sparse$extract, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\165\163\145\162\163\134\161\167\167\71\63\134\141\160\160\144\141\164\141\134\154\157\143\141\154\134\160\162\157\147\162\141\155\163\134\160\171\164\150\157\156\134\160\171\164\150\157\156\63\61\61\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\163\143\151\160\171\134\163\160\141\162\163\145\134\145\170\164\162\141\143\164\56\160\171"
#endif
},
    {"scipy.sparse.lil", modulecode_scipy$sparse$lil, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\165\163\145\162\163\134\161\167\167\71\63\134\141\160\160\144\141\164\141\134\154\157\143\141\154\134\160\162\157\147\162\141\155\163\134\160\171\164\150\157\156\134\160\171\164\150\157\156\63\61\61\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\163\143\151\160\171\134\163\160\141\162\163\145\134\154\151\154\56\160\171"
#endif
},
    {"scipy.sparse.linalg", modulecode_scipy$sparse$linalg, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_PACKAGE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\165\163\145\162\163\134\161\167\167\71\63\134\141\160\160\144\141\164\141\134\154\157\143\141\154\134\160\162\157\147\162\141\155\163\134\160\171\164\150\157\156\134\160\171\164\150\157\156\63\61\61\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\163\143\151\160\171\134\163\160\141\162\163\145\134\154\151\156\141\154\147\134\137\137\151\156\151\164\137\137\56\160\171"
#endif
},
    {"scipy.sparse.linalg._dsolve", modulecode_scipy$sparse$linalg$_dsolve, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_PACKAGE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\165\163\145\162\163\134\161\167\167\71\63\134\141\160\160\144\141\164\141\134\154\157\143\141\154\134\160\162\157\147\162\141\155\163\134\160\171\164\150\157\156\134\160\171\164\150\157\156\63\61\61\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\163\143\151\160\171\134\163\160\141\162\163\145\134\154\151\156\141\154\147\134\137\144\163\157\154\166\145\134\137\137\151\156\151\164\137\137\56\160\171"
#endif
},
    {"scipy.sparse.linalg._dsolve._add_newdocs", modulecode_scipy$sparse$linalg$_dsolve$_add_newdocs, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\165\163\145\162\163\134\161\167\167\71\63\134\141\160\160\144\141\164\141\134\154\157\143\141\154\134\160\162\157\147\162\141\155\163\134\160\171\164\150\157\156\134\160\171\164\150\157\156\63\61\61\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\163\143\151\160\171\134\163\160\141\162\163\145\134\154\151\156\141\154\147\134\137\144\163\157\154\166\145\134\137\141\144\144\137\156\145\167\144\157\143\163\56\160\171"
#endif
},
    {"scipy.sparse.linalg._dsolve.linsolve", modulecode_scipy$sparse$linalg$_dsolve$linsolve, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\165\163\145\162\163\134\161\167\167\71\63\134\141\160\160\144\141\164\141\134\154\157\143\141\154\134\160\162\157\147\162\141\155\163\134\160\171\164\150\157\156\134\160\171\164\150\157\156\63\61\61\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\163\143\151\160\171\134\163\160\141\162\163\145\134\154\151\156\141\154\147\134\137\144\163\157\154\166\145\134\154\151\156\163\157\154\166\145\56\160\171"
#endif
},
    {"scipy.sparse.linalg._eigen", modulecode_scipy$sparse$linalg$_eigen, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_PACKAGE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\165\163\145\162\163\134\161\167\167\71\63\134\141\160\160\144\141\164\141\134\154\157\143\141\154\134\160\162\157\147\162\141\155\163\134\160\171\164\150\157\156\134\160\171\164\150\157\156\63\61\61\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\163\143\151\160\171\134\163\160\141\162\163\145\134\154\151\156\141\154\147\134\137\145\151\147\145\156\134\137\137\151\156\151\164\137\137\56\160\171"
#endif
},
    {"scipy.sparse.linalg._eigen._svds", modulecode_scipy$sparse$linalg$_eigen$_svds, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\165\163\145\162\163\134\161\167\167\71\63\134\141\160\160\144\141\164\141\134\154\157\143\141\154\134\160\162\157\147\162\141\155\163\134\160\171\164\150\157\156\134\160\171\164\150\157\156\63\61\61\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\163\143\151\160\171\134\163\160\141\162\163\145\134\154\151\156\141\154\147\134\137\145\151\147\145\156\134\137\163\166\144\163\56\160\171"
#endif
},
    {"scipy.sparse.linalg._eigen.arpack", modulecode_scipy$sparse$linalg$_eigen$arpack, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_PACKAGE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\165\163\145\162\163\134\161\167\167\71\63\134\141\160\160\144\141\164\141\134\154\157\143\141\154\134\160\162\157\147\162\141\155\163\134\160\171\164\150\157\156\134\160\171\164\150\157\156\63\61\61\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\163\143\151\160\171\134\163\160\141\162\163\145\134\154\151\156\141\154\147\134\137\145\151\147\145\156\134\141\162\160\141\143\153\134\137\137\151\156\151\164\137\137\56\160\171"
#endif
},
    {"scipy.sparse.linalg._eigen.arpack.arpack", modulecode_scipy$sparse$linalg$_eigen$arpack$arpack, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\165\163\145\162\163\134\161\167\167\71\63\134\141\160\160\144\141\164\141\134\154\157\143\141\154\134\160\162\157\147\162\141\155\163\134\160\171\164\150\157\156\134\160\171\164\150\157\156\63\61\61\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\163\143\151\160\171\134\163\160\141\162\163\145\134\154\151\156\141\154\147\134\137\145\151\147\145\156\134\141\162\160\141\143\153\134\141\162\160\141\143\153\56\160\171"
#endif
},
    {"scipy.sparse.linalg._eigen.lobpcg", modulecode_scipy$sparse$linalg$_eigen$lobpcg, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_PACKAGE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\165\163\145\162\163\134\161\167\167\71\63\134\141\160\160\144\141\164\141\134\154\157\143\141\154\134\160\162\157\147\162\141\155\163\134\160\171\164\150\157\156\134\160\171\164\150\157\156\63\61\61\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\163\143\151\160\171\134\163\160\141\162\163\145\134\154\151\156\141\154\147\134\137\145\151\147\145\156\134\154\157\142\160\143\147\134\137\137\151\156\151\164\137\137\56\160\171"
#endif
},
    {"scipy.sparse.linalg._eigen.lobpcg.lobpcg", modulecode_scipy$sparse$linalg$_eigen$lobpcg$lobpcg, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\165\163\145\162\163\134\161\167\167\71\63\134\141\160\160\144\141\164\141\134\154\157\143\141\154\134\160\162\157\147\162\141\155\163\134\160\171\164\150\157\156\134\160\171\164\150\157\156\63\61\61\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\163\143\151\160\171\134\163\160\141\162\163\145\134\154\151\156\141\154\147\134\137\145\151\147\145\156\134\154\157\142\160\143\147\134\154\157\142\160\143\147\56\160\171"
#endif
},
    {"scipy.sparse.linalg._expm_multiply", modulecode_scipy$sparse$linalg$_expm_multiply, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\165\163\145\162\163\134\161\167\167\71\63\134\141\160\160\144\141\164\141\134\154\157\143\141\154\134\160\162\157\147\162\141\155\163\134\160\171\164\150\157\156\134\160\171\164\150\157\156\63\61\61\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\163\143\151\160\171\134\163\160\141\162\163\145\134\154\151\156\141\154\147\134\137\145\170\160\155\137\155\165\154\164\151\160\154\171\56\160\171"
#endif
},
    {"scipy.sparse.linalg._interface", modulecode_scipy$sparse$linalg$_interface, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\165\163\145\162\163\134\161\167\167\71\63\134\141\160\160\144\141\164\141\134\154\157\143\141\154\134\160\162\157\147\162\141\155\163\134\160\171\164\150\157\156\134\160\171\164\150\157\156\63\61\61\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\163\143\151\160\171\134\163\160\141\162\163\145\134\154\151\156\141\154\147\134\137\151\156\164\145\162\146\141\143\145\56\160\171"
#endif
},
    {"scipy.sparse.linalg._isolve", modulecode_scipy$sparse$linalg$_isolve, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_PACKAGE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\165\163\145\162\163\134\161\167\167\71\63\134\141\160\160\144\141\164\141\134\154\157\143\141\154\134\160\162\157\147\162\141\155\163\134\160\171\164\150\157\156\134\160\171\164\150\157\156\63\61\61\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\163\143\151\160\171\134\163\160\141\162\163\145\134\154\151\156\141\154\147\134\137\151\163\157\154\166\145\134\137\137\151\156\151\164\137\137\56\160\171"
#endif
},
    {"scipy.sparse.linalg._isolve._gcrotmk", modulecode_scipy$sparse$linalg$_isolve$_gcrotmk, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\165\163\145\162\163\134\161\167\167\71\63\134\141\160\160\144\141\164\141\134\154\157\143\141\154\134\160\162\157\147\162\141\155\163\134\160\171\164\150\157\156\134\160\171\164\150\157\156\63\61\61\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\163\143\151\160\171\134\163\160\141\162\163\145\134\154\151\156\141\154\147\134\137\151\163\157\154\166\145\134\137\147\143\162\157\164\155\153\56\160\171"
#endif
},
    {"scipy.sparse.linalg._isolve.iterative", modulecode_scipy$sparse$linalg$_isolve$iterative, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\165\163\145\162\163\134\161\167\167\71\63\134\141\160\160\144\141\164\141\134\154\157\143\141\154\134\160\162\157\147\162\141\155\163\134\160\171\164\150\157\156\134\160\171\164\150\157\156\63\61\61\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\163\143\151\160\171\134\163\160\141\162\163\145\134\154\151\156\141\154\147\134\137\151\163\157\154\166\145\134\151\164\145\162\141\164\151\166\145\56\160\171"
#endif
},
    {"scipy.sparse.linalg._isolve.lgmres", modulecode_scipy$sparse$linalg$_isolve$lgmres, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\165\163\145\162\163\134\161\167\167\71\63\134\141\160\160\144\141\164\141\134\154\157\143\141\154\134\160\162\157\147\162\141\155\163\134\160\171\164\150\157\156\134\160\171\164\150\157\156\63\61\61\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\163\143\151\160\171\134\163\160\141\162\163\145\134\154\151\156\141\154\147\134\137\151\163\157\154\166\145\134\154\147\155\162\145\163\56\160\171"
#endif
},
    {"scipy.sparse.linalg._isolve.lsmr", modulecode_scipy$sparse$linalg$_isolve$lsmr, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\165\163\145\162\163\134\161\167\167\71\63\134\141\160\160\144\141\164\141\134\154\157\143\141\154\134\160\162\157\147\162\141\155\163\134\160\171\164\150\157\156\134\160\171\164\150\157\156\63\61\61\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\163\143\151\160\171\134\163\160\141\162\163\145\134\154\151\156\141\154\147\134\137\151\163\157\154\166\145\134\154\163\155\162\56\160\171"
#endif
},
    {"scipy.sparse.linalg._isolve.lsqr", modulecode_scipy$sparse$linalg$_isolve$lsqr, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\165\163\145\162\163\134\161\167\167\71\63\134\141\160\160\144\141\164\141\134\154\157\143\141\154\134\160\162\157\147\162\141\155\163\134\160\171\164\150\157\156\134\160\171\164\150\157\156\63\61\61\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\163\143\151\160\171\134\163\160\141\162\163\145\134\154\151\156\141\154\147\134\137\151\163\157\154\166\145\134\154\163\161\162\56\160\171"
#endif
},
    {"scipy.sparse.linalg._isolve.minres", modulecode_scipy$sparse$linalg$_isolve$minres, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\165\163\145\162\163\134\161\167\167\71\63\134\141\160\160\144\141\164\141\134\154\157\143\141\154\134\160\162\157\147\162\141\155\163\134\160\171\164\150\157\156\134\160\171\164\150\157\156\63\61\61\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\163\143\151\160\171\134\163\160\141\162\163\145\134\154\151\156\141\154\147\134\137\151\163\157\154\166\145\134\155\151\156\162\145\163\56\160\171"
#endif
},
    {"scipy.sparse.linalg._isolve.tfqmr", modulecode_scipy$sparse$linalg$_isolve$tfqmr, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\165\163\145\162\163\134\161\167\167\71\63\134\141\160\160\144\141\164\141\134\154\157\143\141\154\134\160\162\157\147\162\141\155\163\134\160\171\164\150\157\156\134\160\171\164\150\157\156\63\61\61\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\163\143\151\160\171\134\163\160\141\162\163\145\134\154\151\156\141\154\147\134\137\151\163\157\154\166\145\134\164\146\161\155\162\56\160\171"
#endif
},
    {"scipy.sparse.linalg._isolve.utils", modulecode_scipy$sparse$linalg$_isolve$utils, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\165\163\145\162\163\134\161\167\167\71\63\134\141\160\160\144\141\164\141\134\154\157\143\141\154\134\160\162\157\147\162\141\155\163\134\160\171\164\150\157\156\134\160\171\164\150\157\156\63\61\61\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\163\143\151\160\171\134\163\160\141\162\163\145\134\154\151\156\141\154\147\134\137\151\163\157\154\166\145\134\165\164\151\154\163\56\160\171"
#endif
},
    {"scipy.sparse.linalg._matfuncs", modulecode_scipy$sparse$linalg$_matfuncs, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\165\163\145\162\163\134\161\167\167\71\63\134\141\160\160\144\141\164\141\134\154\157\143\141\154\134\160\162\157\147\162\141\155\163\134\160\171\164\150\157\156\134\160\171\164\150\157\156\63\61\61\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\163\143\151\160\171\134\163\160\141\162\163\145\134\154\151\156\141\154\147\134\137\155\141\164\146\165\156\143\163\56\160\171"
#endif
},
    {"scipy.sparse.linalg._norm", modulecode_scipy$sparse$linalg$_norm, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\165\163\145\162\163\134\161\167\167\71\63\134\141\160\160\144\141\164\141\134\154\157\143\141\154\134\160\162\157\147\162\141\155\163\134\160\171\164\150\157\156\134\160\171\164\150\157\156\63\61\61\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\163\143\151\160\171\134\163\160\141\162\163\145\134\154\151\156\141\154\147\134\137\156\157\162\155\56\160\171"
#endif
},
    {"scipy.sparse.linalg._onenormest", modulecode_scipy$sparse$linalg$_onenormest, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\165\163\145\162\163\134\161\167\167\71\63\134\141\160\160\144\141\164\141\134\154\157\143\141\154\134\160\162\157\147\162\141\155\163\134\160\171\164\150\157\156\134\160\171\164\150\157\156\63\61\61\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\163\143\151\160\171\134\163\160\141\162\163\145\134\154\151\156\141\154\147\134\137\157\156\145\156\157\162\155\145\163\164\56\160\171"
#endif
},
    {"scipy.sparse.linalg._propack", modulecode_scipy$sparse$linalg$_propack, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_PACKAGE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\165\163\145\162\163\134\161\167\167\71\63\134\141\160\160\144\141\164\141\134\154\157\143\141\154\134\160\162\157\147\162\141\155\163\134\160\171\164\150\157\156\134\160\171\164\150\157\156\63\61\61\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\163\143\151\160\171\134\163\160\141\162\163\145\134\154\151\156\141\154\147\134\137\160\162\157\160\141\143\153"
#endif
},
    {"scipy.sparse.linalg._svdp", modulecode_scipy$sparse$linalg$_svdp, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\165\163\145\162\163\134\161\167\167\71\63\134\141\160\160\144\141\164\141\134\154\157\143\141\154\134\160\162\157\147\162\141\155\163\134\160\171\164\150\157\156\134\160\171\164\150\157\156\63\61\61\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\163\143\151\160\171\134\163\160\141\162\163\145\134\154\151\156\141\154\147\134\137\163\166\144\160\56\160\171"
#endif
},
    {"scipy.sparse.linalg.dsolve", modulecode_scipy$sparse$linalg$dsolve, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\165\163\145\162\163\134\161\167\167\71\63\134\141\160\160\144\141\164\141\134\154\157\143\141\154\134\160\162\157\147\162\141\155\163\134\160\171\164\150\157\156\134\160\171\164\150\157\156\63\61\61\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\163\143\151\160\171\134\163\160\141\162\163\145\134\154\151\156\141\154\147\134\144\163\157\154\166\145\56\160\171"
#endif
},
    {"scipy.sparse.linalg.eigen", modulecode_scipy$sparse$linalg$eigen, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\165\163\145\162\163\134\161\167\167\71\63\134\141\160\160\144\141\164\141\134\154\157\143\141\154\134\160\162\157\147\162\141\155\163\134\160\171\164\150\157\156\134\160\171\164\150\157\156\63\61\61\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\163\143\151\160\171\134\163\160\141\162\163\145\134\154\151\156\141\154\147\134\145\151\147\145\156\56\160\171"
#endif
},
    {"scipy.sparse.linalg.interface", modulecode_scipy$sparse$linalg$interface, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\165\163\145\162\163\134\161\167\167\71\63\134\141\160\160\144\141\164\141\134\154\157\143\141\154\134\160\162\157\147\162\141\155\163\134\160\171\164\150\157\156\134\160\171\164\150\157\156\63\61\61\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\163\143\151\160\171\134\163\160\141\162\163\145\134\154\151\156\141\154\147\134\151\156\164\145\162\146\141\143\145\56\160\171"
#endif
},
    {"scipy.sparse.linalg.isolve", modulecode_scipy$sparse$linalg$isolve, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\165\163\145\162\163\134\161\167\167\71\63\134\141\160\160\144\141\164\141\134\154\157\143\141\154\134\160\162\157\147\162\141\155\163\134\160\171\164\150\157\156\134\160\171\164\150\157\156\63\61\61\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\163\143\151\160\171\134\163\160\141\162\163\145\134\154\151\156\141\154\147\134\151\163\157\154\166\145\56\160\171"
#endif
},
    {"scipy.sparse.linalg.matfuncs", modulecode_scipy$sparse$linalg$matfuncs, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\165\163\145\162\163\134\161\167\167\71\63\134\141\160\160\144\141\164\141\134\154\157\143\141\154\134\160\162\157\147\162\141\155\163\134\160\171\164\150\157\156\134\160\171\164\150\157\156\63\61\61\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\163\143\151\160\171\134\163\160\141\162\163\145\134\154\151\156\141\154\147\134\155\141\164\146\165\156\143\163\56\160\171"
#endif
},
    {"scipy.sparse.sparsetools", modulecode_scipy$sparse$sparsetools, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\165\163\145\162\163\134\161\167\167\71\63\134\141\160\160\144\141\164\141\134\154\157\143\141\154\134\160\162\157\147\162\141\155\163\134\160\171\164\150\157\156\134\160\171\164\150\157\156\63\61\61\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\163\143\151\160\171\134\163\160\141\162\163\145\134\163\160\141\162\163\145\164\157\157\154\163\56\160\171"
#endif
},
    {"scipy.sparse.sputils", modulecode_scipy$sparse$sputils, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\165\163\145\162\163\134\161\167\167\71\63\134\141\160\160\144\141\164\141\134\154\157\143\141\154\134\160\162\157\147\162\141\155\163\134\160\171\164\150\157\156\134\160\171\164\150\157\156\63\61\61\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\163\143\151\160\171\134\163\160\141\162\163\145\134\163\160\165\164\151\154\163\56\160\171"
#endif
},
    {"scipy.spatial", modulecode_scipy$spatial, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_PACKAGE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\165\163\145\162\163\134\161\167\167\71\63\134\141\160\160\144\141\164\141\134\154\157\143\141\154\134\160\162\157\147\162\141\155\163\134\160\171\164\150\157\156\134\160\171\164\150\157\156\63\61\61\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\163\143\151\160\171\134\163\160\141\164\151\141\154\134\137\137\151\156\151\164\137\137\56\160\171"
#endif
},
    {"scipy.spatial._geometric_slerp", modulecode_scipy$spatial$_geometric_slerp, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\165\163\145\162\163\134\161\167\167\71\63\134\141\160\160\144\141\164\141\134\154\157\143\141\154\134\160\162\157\147\162\141\155\163\134\160\171\164\150\157\156\134\160\171\164\150\157\156\63\61\61\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\163\143\151\160\171\134\163\160\141\164\151\141\154\134\137\147\145\157\155\145\164\162\151\143\137\163\154\145\162\160\56\160\171"
#endif
},
    {"scipy.spatial._kdtree", modulecode_scipy$spatial$_kdtree, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\165\163\145\162\163\134\161\167\167\71\63\134\141\160\160\144\141\164\141\134\154\157\143\141\154\134\160\162\157\147\162\141\155\163\134\160\171\164\150\157\156\134\160\171\164\150\157\156\63\61\61\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\163\143\151\160\171\134\163\160\141\164\151\141\154\134\137\153\144\164\162\145\145\56\160\171"
#endif
},
    {"scipy.spatial._plotutils", modulecode_scipy$spatial$_plotutils, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\165\163\145\162\163\134\161\167\167\71\63\134\141\160\160\144\141\164\141\134\154\157\143\141\154\134\160\162\157\147\162\141\155\163\134\160\171\164\150\157\156\134\160\171\164\150\157\156\63\61\61\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\163\143\151\160\171\134\163\160\141\164\151\141\154\134\137\160\154\157\164\165\164\151\154\163\56\160\171"
#endif
},
    {"scipy.spatial._procrustes", modulecode_scipy$spatial$_procrustes, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\165\163\145\162\163\134\161\167\167\71\63\134\141\160\160\144\141\164\141\134\154\157\143\141\154\134\160\162\157\147\162\141\155\163\134\160\171\164\150\157\156\134\160\171\164\150\157\156\63\61\61\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\163\143\151\160\171\134\163\160\141\164\151\141\154\134\137\160\162\157\143\162\165\163\164\145\163\56\160\171"
#endif
},
    {"scipy.spatial._spherical_voronoi", modulecode_scipy$spatial$_spherical_voronoi, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\165\163\145\162\163\134\161\167\167\71\63\134\141\160\160\144\141\164\141\134\154\157\143\141\154\134\160\162\157\147\162\141\155\163\134\160\171\164\150\157\156\134\160\171\164\150\157\156\63\61\61\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\163\143\151\160\171\134\163\160\141\164\151\141\154\134\137\163\160\150\145\162\151\143\141\154\137\166\157\162\157\156\157\151\56\160\171"
#endif
},
    {"scipy.spatial.ckdtree", modulecode_scipy$spatial$ckdtree, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\165\163\145\162\163\134\161\167\167\71\63\134\141\160\160\144\141\164\141\134\154\157\143\141\154\134\160\162\157\147\162\141\155\163\134\160\171\164\150\157\156\134\160\171\164\150\157\156\63\61\61\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\163\143\151\160\171\134\163\160\141\164\151\141\154\134\143\153\144\164\162\145\145\56\160\171"
#endif
},
    {"scipy.spatial.distance", modulecode_scipy$spatial$distance, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\165\163\145\162\163\134\161\167\167\71\63\134\141\160\160\144\141\164\141\134\154\157\143\141\154\134\160\162\157\147\162\141\155\163\134\160\171\164\150\157\156\134\160\171\164\150\157\156\63\61\61\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\163\143\151\160\171\134\163\160\141\164\151\141\154\134\144\151\163\164\141\156\143\145\56\160\171"
#endif
},
    {"scipy.spatial.kdtree", modulecode_scipy$spatial$kdtree, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\165\163\145\162\163\134\161\167\167\71\63\134\141\160\160\144\141\164\141\134\154\157\143\141\154\134\160\162\157\147\162\141\155\163\134\160\171\164\150\157\156\134\160\171\164\150\157\156\63\61\61\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\163\143\151\160\171\134\163\160\141\164\151\141\154\134\153\144\164\162\145\145\56\160\171"
#endif
},
    {"scipy.spatial.qhull", modulecode_scipy$spatial$qhull, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\165\163\145\162\163\134\161\167\167\71\63\134\141\160\160\144\141\164\141\134\154\157\143\141\154\134\160\162\157\147\162\141\155\163\134\160\171\164\150\157\156\134\160\171\164\150\157\156\63\61\61\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\163\143\151\160\171\134\163\160\141\164\151\141\154\134\161\150\165\154\154\56\160\171"
#endif
},
    {"scipy.spatial.transform", modulecode_scipy$spatial$transform, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_PACKAGE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\165\163\145\162\163\134\161\167\167\71\63\134\141\160\160\144\141\164\141\134\154\157\143\141\154\134\160\162\157\147\162\141\155\163\134\160\171\164\150\157\156\134\160\171\164\150\157\156\63\61\61\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\163\143\151\160\171\134\163\160\141\164\151\141\154\134\164\162\141\156\163\146\157\162\155\134\137\137\151\156\151\164\137\137\56\160\171"
#endif
},
    {"scipy.spatial.transform._rotation_groups", modulecode_scipy$spatial$transform$_rotation_groups, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\165\163\145\162\163\134\161\167\167\71\63\134\141\160\160\144\141\164\141\134\154\157\143\141\154\134\160\162\157\147\162\141\155\163\134\160\171\164\150\157\156\134\160\171\164\150\157\156\63\61\61\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\163\143\151\160\171\134\163\160\141\164\151\141\154\134\164\162\141\156\163\146\157\162\155\134\137\162\157\164\141\164\151\157\156\137\147\162\157\165\160\163\56\160\171"
#endif
},
    {"scipy.spatial.transform._rotation_spline", modulecode_scipy$spatial$transform$_rotation_spline, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\165\163\145\162\163\134\161\167\167\71\63\134\141\160\160\144\141\164\141\134\154\157\143\141\154\134\160\162\157\147\162\141\155\163\134\160\171\164\150\157\156\134\160\171\164\150\157\156\63\61\61\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\163\143\151\160\171\134\163\160\141\164\151\141\154\134\164\162\141\156\163\146\157\162\155\134\137\162\157\164\141\164\151\157\156\137\163\160\154\151\156\145\56\160\171"
#endif
},
    {"scipy.spatial.transform.rotation", modulecode_scipy$spatial$transform$rotation, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\165\163\145\162\163\134\161\167\167\71\63\134\141\160\160\144\141\164\141\134\154\157\143\141\154\134\160\162\157\147\162\141\155\163\134\160\171\164\150\157\156\134\160\171\164\150\157\156\63\61\61\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\163\143\151\160\171\134\163\160\141\164\151\141\154\134\164\162\141\156\163\146\157\162\155\134\162\157\164\141\164\151\157\156\56\160\171"
#endif
},
    {"scipy.special", modulecode_scipy$special, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_PACKAGE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\165\163\145\162\163\134\161\167\167\71\63\134\141\160\160\144\141\164\141\134\154\157\143\141\154\134\160\162\157\147\162\141\155\163\134\160\171\164\150\157\156\134\160\171\164\150\157\156\63\61\61\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\163\143\151\160\171\134\163\160\145\143\151\141\154\134\137\137\151\156\151\164\137\137\56\160\171"
#endif
},
    {"scipy.special._add_newdocs", modulecode_scipy$special$_add_newdocs, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\165\163\145\162\163\134\161\167\167\71\63\134\141\160\160\144\141\164\141\134\154\157\143\141\154\134\160\162\157\147\162\141\155\163\134\160\171\164\150\157\156\134\160\171\164\150\157\156\63\61\61\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\163\143\151\160\171\134\163\160\145\143\151\141\154\134\137\141\144\144\137\156\145\167\144\157\143\163\56\160\171"
#endif
},
    {"scipy.special._basic", modulecode_scipy$special$_basic, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\165\163\145\162\163\134\161\167\167\71\63\134\141\160\160\144\141\164\141\134\154\157\143\141\154\134\160\162\157\147\162\141\155\163\134\160\171\164\150\157\156\134\160\171\164\150\157\156\63\61\61\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\163\143\151\160\171\134\163\160\145\143\151\141\154\134\137\142\141\163\151\143\56\160\171"
#endif
},
    {"scipy.special._ellip_harm", modulecode_scipy$special$_ellip_harm, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\165\163\145\162\163\134\161\167\167\71\63\134\141\160\160\144\141\164\141\134\154\157\143\141\154\134\160\162\157\147\162\141\155\163\134\160\171\164\150\157\156\134\160\171\164\150\157\156\63\61\61\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\163\143\151\160\171\134\163\160\145\143\151\141\154\134\137\145\154\154\151\160\137\150\141\162\155\56\160\171"
#endif
},
    {"scipy.special._lambertw", modulecode_scipy$special$_lambertw, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\165\163\145\162\163\134\161\167\167\71\63\134\141\160\160\144\141\164\141\134\154\157\143\141\154\134\160\162\157\147\162\141\155\163\134\160\171\164\150\157\156\134\160\171\164\150\157\156\63\61\61\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\163\143\151\160\171\134\163\160\145\143\151\141\154\134\137\154\141\155\142\145\162\164\167\56\160\171"
#endif
},
    {"scipy.special._logsumexp", modulecode_scipy$special$_logsumexp, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\165\163\145\162\163\134\161\167\167\71\63\134\141\160\160\144\141\164\141\134\154\157\143\141\154\134\160\162\157\147\162\141\155\163\134\160\171\164\150\157\156\134\160\171\164\150\157\156\63\61\61\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\163\143\151\160\171\134\163\160\145\143\151\141\154\134\137\154\157\147\163\165\155\145\170\160\56\160\171"
#endif
},
    {"scipy.special._orthogonal", modulecode_scipy$special$_orthogonal, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\165\163\145\162\163\134\161\167\167\71\63\134\141\160\160\144\141\164\141\134\154\157\143\141\154\134\160\162\157\147\162\141\155\163\134\160\171\164\150\157\156\134\160\171\164\150\157\156\63\61\61\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\163\143\151\160\171\134\163\160\145\143\151\141\154\134\137\157\162\164\150\157\147\157\156\141\154\56\160\171"
#endif
},
    {"scipy.special._sf_error", modulecode_scipy$special$_sf_error, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\165\163\145\162\163\134\161\167\167\71\63\134\141\160\160\144\141\164\141\134\154\157\143\141\154\134\160\162\157\147\162\141\155\163\134\160\171\164\150\157\156\134\160\171\164\150\157\156\63\61\61\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\163\143\151\160\171\134\163\160\145\143\151\141\154\134\137\163\146\137\145\162\162\157\162\56\160\171"
#endif
},
    {"scipy.special._spfun_stats", modulecode_scipy$special$_spfun_stats, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\165\163\145\162\163\134\161\167\167\71\63\134\141\160\160\144\141\164\141\134\154\157\143\141\154\134\160\162\157\147\162\141\155\163\134\160\171\164\150\157\156\134\160\171\164\150\157\156\63\61\61\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\163\143\151\160\171\134\163\160\145\143\151\141\154\134\137\163\160\146\165\156\137\163\164\141\164\163\56\160\171"
#endif
},
    {"scipy.special._spherical_bessel", modulecode_scipy$special$_spherical_bessel, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\165\163\145\162\163\134\161\167\167\71\63\134\141\160\160\144\141\164\141\134\154\157\143\141\154\134\160\162\157\147\162\141\155\163\134\160\171\164\150\157\156\134\160\171\164\150\157\156\63\61\61\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\163\143\151\160\171\134\163\160\145\143\151\141\154\134\137\163\160\150\145\162\151\143\141\154\137\142\145\163\163\145\154\56\160\171"
#endif
},
    {"scipy.special.add_newdocs", modulecode_scipy$special$add_newdocs, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\165\163\145\162\163\134\161\167\167\71\63\134\141\160\160\144\141\164\141\134\154\157\143\141\154\134\160\162\157\147\162\141\155\163\134\160\171\164\150\157\156\134\160\171\164\150\157\156\63\61\61\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\163\143\151\160\171\134\163\160\145\143\151\141\154\134\141\144\144\137\156\145\167\144\157\143\163\56\160\171"
#endif
},
    {"scipy.special.basic", modulecode_scipy$special$basic, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\165\163\145\162\163\134\161\167\167\71\63\134\141\160\160\144\141\164\141\134\154\157\143\141\154\134\160\162\157\147\162\141\155\163\134\160\171\164\150\157\156\134\160\171\164\150\157\156\63\61\61\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\163\143\151\160\171\134\163\160\145\143\151\141\154\134\142\141\163\151\143\56\160\171"
#endif
},
    {"scipy.special.orthogonal", modulecode_scipy$special$orthogonal, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\165\163\145\162\163\134\161\167\167\71\63\134\141\160\160\144\141\164\141\134\154\157\143\141\154\134\160\162\157\147\162\141\155\163\134\160\171\164\150\157\156\134\160\171\164\150\157\156\63\61\61\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\163\143\151\160\171\134\163\160\145\143\151\141\154\134\157\162\164\150\157\147\157\156\141\154\56\160\171"
#endif
},
    {"scipy.special.sf_error", modulecode_scipy$special$sf_error, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\165\163\145\162\163\134\161\167\167\71\63\134\141\160\160\144\141\164\141\134\154\157\143\141\154\134\160\162\157\147\162\141\155\163\134\160\171\164\150\157\156\134\160\171\164\150\157\156\63\61\61\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\163\143\151\160\171\134\163\160\145\143\151\141\154\134\163\146\137\145\162\162\157\162\56\160\171"
#endif
},
    {"scipy.special.specfun", modulecode_scipy$special$specfun, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\165\163\145\162\163\134\161\167\167\71\63\134\141\160\160\144\141\164\141\134\154\157\143\141\154\134\160\162\157\147\162\141\155\163\134\160\171\164\150\157\156\134\160\171\164\150\157\156\63\61\61\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\163\143\151\160\171\134\163\160\145\143\151\141\154\134\163\160\145\143\146\165\156\56\160\171"
#endif
},
    {"scipy.special.spfun_stats", modulecode_scipy$special$spfun_stats, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\165\163\145\162\163\134\161\167\167\71\63\134\141\160\160\144\141\164\141\134\154\157\143\141\154\134\160\162\157\147\162\141\155\163\134\160\171\164\150\157\156\134\160\171\164\150\157\156\63\61\61\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\163\143\151\160\171\134\163\160\145\143\151\141\154\134\163\160\146\165\156\137\163\164\141\164\163\56\160\171"
#endif
},
    {"scipy.stats", modulecode_scipy$stats, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_PACKAGE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\165\163\145\162\163\134\161\167\167\71\63\134\141\160\160\144\141\164\141\134\154\157\143\141\154\134\160\162\157\147\162\141\155\163\134\160\171\164\150\157\156\134\160\171\164\150\157\156\63\61\61\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\163\143\151\160\171\134\163\164\141\164\163\134\137\137\151\156\151\164\137\137\56\160\171"
#endif
},
    {"scipy.stats._axis_nan_policy", modulecode_scipy$stats$_axis_nan_policy, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\165\163\145\162\163\134\161\167\167\71\63\134\141\160\160\144\141\164\141\134\154\157\143\141\154\134\160\162\157\147\162\141\155\163\134\160\171\164\150\157\156\134\160\171\164\150\157\156\63\61\61\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\163\143\151\160\171\134\163\164\141\164\163\134\137\141\170\151\163\137\156\141\156\137\160\157\154\151\143\171\56\160\171"
#endif
},
    {"scipy.stats._binned_statistic", modulecode_scipy$stats$_binned_statistic, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\165\163\145\162\163\134\161\167\167\71\63\134\141\160\160\144\141\164\141\134\154\157\143\141\154\134\160\162\157\147\162\141\155\163\134\160\171\164\150\157\156\134\160\171\164\150\157\156\63\61\61\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\163\143\151\160\171\134\163\164\141\164\163\134\137\142\151\156\156\145\144\137\163\164\141\164\151\163\164\151\143\56\160\171"
#endif
},
    {"scipy.stats._binomtest", modulecode_scipy$stats$_binomtest, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\165\163\145\162\163\134\161\167\167\71\63\134\141\160\160\144\141\164\141\134\154\157\143\141\154\134\160\162\157\147\162\141\155\163\134\160\171\164\150\157\156\134\160\171\164\150\157\156\63\61\61\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\163\143\151\160\171\134\163\164\141\164\163\134\137\142\151\156\157\155\164\145\163\164\56\160\171"
#endif
},
    {"scipy.stats._boost", modulecode_scipy$stats$_boost, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_PACKAGE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\165\163\145\162\163\134\161\167\167\71\63\134\141\160\160\144\141\164\141\134\154\157\143\141\154\134\160\162\157\147\162\141\155\163\134\160\171\164\150\157\156\134\160\171\164\150\157\156\63\61\61\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\163\143\151\160\171\134\163\164\141\164\163\134\137\142\157\157\163\164\134\137\137\151\156\151\164\137\137\56\160\171"
#endif
},
    {"scipy.stats._common", modulecode_scipy$stats$_common, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\165\163\145\162\163\134\161\167\167\71\63\134\141\160\160\144\141\164\141\134\154\157\143\141\154\134\160\162\157\147\162\141\155\163\134\160\171\164\150\157\156\134\160\171\164\150\157\156\63\61\61\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\163\143\151\160\171\134\163\164\141\164\163\134\137\143\157\155\155\157\156\56\160\171"
#endif
},
    {"scipy.stats._constants", modulecode_scipy$stats$_constants, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\165\163\145\162\163\134\161\167\167\71\63\134\141\160\160\144\141\164\141\134\154\157\143\141\154\134\160\162\157\147\162\141\155\163\134\160\171\164\150\157\156\134\160\171\164\150\157\156\63\61\61\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\163\143\151\160\171\134\163\164\141\164\163\134\137\143\157\156\163\164\141\156\164\163\56\160\171"
#endif
},
    {"scipy.stats._continuous_distns", modulecode_scipy$stats$_continuous_distns, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\165\163\145\162\163\134\161\167\167\71\63\134\141\160\160\144\141\164\141\134\154\157\143\141\154\134\160\162\157\147\162\141\155\163\134\160\171\164\150\157\156\134\160\171\164\150\157\156\63\61\61\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\163\143\151\160\171\134\163\164\141\164\163\134\137\143\157\156\164\151\156\165\157\165\163\137\144\151\163\164\156\163\56\160\171"
#endif
},
    {"scipy.stats._covariance", modulecode_scipy$stats$_covariance, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\165\163\145\162\163\134\161\167\167\71\63\134\141\160\160\144\141\164\141\134\154\157\143\141\154\134\160\162\157\147\162\141\155\163\134\160\171\164\150\157\156\134\160\171\164\150\157\156\63\61\61\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\163\143\151\160\171\134\163\164\141\164\163\134\137\143\157\166\141\162\151\141\156\143\145\56\160\171"
#endif
},
    {"scipy.stats._crosstab", modulecode_scipy$stats$_crosstab, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\165\163\145\162\163\134\161\167\167\71\63\134\141\160\160\144\141\164\141\134\154\157\143\141\154\134\160\162\157\147\162\141\155\163\134\160\171\164\150\157\156\134\160\171\164\150\157\156\63\61\61\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\163\143\151\160\171\134\163\164\141\164\163\134\137\143\162\157\163\163\164\141\142\56\160\171"
#endif
},
    {"scipy.stats._discrete_distns", modulecode_scipy$stats$_discrete_distns, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\165\163\145\162\163\134\161\167\167\71\63\134\141\160\160\144\141\164\141\134\154\157\143\141\154\134\160\162\157\147\162\141\155\163\134\160\171\164\150\157\156\134\160\171\164\150\157\156\63\61\61\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\163\143\151\160\171\134\163\164\141\164\163\134\137\144\151\163\143\162\145\164\145\137\144\151\163\164\156\163\56\160\171"
#endif
},
    {"scipy.stats._distn_infrastructure", modulecode_scipy$stats$_distn_infrastructure, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\165\163\145\162\163\134\161\167\167\71\63\134\141\160\160\144\141\164\141\134\154\157\143\141\154\134\160\162\157\147\162\141\155\163\134\160\171\164\150\157\156\134\160\171\164\150\157\156\63\61\61\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\163\143\151\160\171\134\163\164\141\164\163\134\137\144\151\163\164\156\137\151\156\146\162\141\163\164\162\165\143\164\165\162\145\56\160\171"
#endif
},
    {"scipy.stats._distr_params", modulecode_scipy$stats$_distr_params, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\165\163\145\162\163\134\161\167\167\71\63\134\141\160\160\144\141\164\141\134\154\157\143\141\154\134\160\162\157\147\162\141\155\163\134\160\171\164\150\157\156\134\160\171\164\150\157\156\63\61\61\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\163\143\151\160\171\134\163\164\141\164\163\134\137\144\151\163\164\162\137\160\141\162\141\155\163\56\160\171"
#endif
},
    {"scipy.stats._entropy", modulecode_scipy$stats$_entropy, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\165\163\145\162\163\134\161\167\167\71\63\134\141\160\160\144\141\164\141\134\154\157\143\141\154\134\160\162\157\147\162\141\155\163\134\160\171\164\150\157\156\134\160\171\164\150\157\156\63\61\61\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\163\143\151\160\171\134\163\164\141\164\163\134\137\145\156\164\162\157\160\171\56\160\171"
#endif
},
    {"scipy.stats._fit", modulecode_scipy$stats$_fit, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\165\163\145\162\163\134\161\167\167\71\63\134\141\160\160\144\141\164\141\134\154\157\143\141\154\134\160\162\157\147\162\141\155\163\134\160\171\164\150\157\156\134\160\171\164\150\157\156\63\61\61\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\163\143\151\160\171\134\163\164\141\164\163\134\137\146\151\164\56\160\171"
#endif
},
    {"scipy.stats._hypotests", modulecode_scipy$stats$_hypotests, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\165\163\145\162\163\134\161\167\167\71\63\134\141\160\160\144\141\164\141\134\154\157\143\141\154\134\160\162\157\147\162\141\155\163\134\160\171\164\150\157\156\134\160\171\164\150\157\156\63\61\61\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\163\143\151\160\171\134\163\164\141\164\163\134\137\150\171\160\157\164\145\163\164\163\56\160\171"
#endif
},
    {"scipy.stats._kde", modulecode_scipy$stats$_kde, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\165\163\145\162\163\134\161\167\167\71\63\134\141\160\160\144\141\164\141\134\154\157\143\141\154\134\160\162\157\147\162\141\155\163\134\160\171\164\150\157\156\134\160\171\164\150\157\156\63\61\61\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\163\143\151\160\171\134\163\164\141\164\163\134\137\153\144\145\56\160\171"
#endif
},
    {"scipy.stats._ksstats", modulecode_scipy$stats$_ksstats, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\165\163\145\162\163\134\161\167\167\71\63\134\141\160\160\144\141\164\141\134\154\157\143\141\154\134\160\162\157\147\162\141\155\163\134\160\171\164\150\157\156\134\160\171\164\150\157\156\63\61\61\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\163\143\151\160\171\134\163\164\141\164\163\134\137\153\163\163\164\141\164\163\56\160\171"
#endif
},
    {"scipy.stats._levy_stable", modulecode_scipy$stats$_levy_stable, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_PACKAGE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\165\163\145\162\163\134\161\167\167\71\63\134\141\160\160\144\141\164\141\134\154\157\143\141\154\134\160\162\157\147\162\141\155\163\134\160\171\164\150\157\156\134\160\171\164\150\157\156\63\61\61\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\163\143\151\160\171\134\163\164\141\164\163\134\137\154\145\166\171\137\163\164\141\142\154\145\134\137\137\151\156\151\164\137\137\56\160\171"
#endif
},
    {"scipy.stats._mannwhitneyu", modulecode_scipy$stats$_mannwhitneyu, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\165\163\145\162\163\134\161\167\167\71\63\134\141\160\160\144\141\164\141\134\154\157\143\141\154\134\160\162\157\147\162\141\155\163\134\160\171\164\150\157\156\134\160\171\164\150\157\156\63\61\61\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\163\143\151\160\171\134\163\164\141\164\163\134\137\155\141\156\156\167\150\151\164\156\145\171\165\56\160\171"
#endif
},
    {"scipy.stats._morestats", modulecode_scipy$stats$_morestats, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\165\163\145\162\163\134\161\167\167\71\63\134\141\160\160\144\141\164\141\134\154\157\143\141\154\134\160\162\157\147\162\141\155\163\134\160\171\164\150\157\156\134\160\171\164\150\157\156\63\61\61\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\163\143\151\160\171\134\163\164\141\164\163\134\137\155\157\162\145\163\164\141\164\163\56\160\171"
#endif
},
    {"scipy.stats._mstats_basic", modulecode_scipy$stats$_mstats_basic, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\165\163\145\162\163\134\161\167\167\71\63\134\141\160\160\144\141\164\141\134\154\157\143\141\154\134\160\162\157\147\162\141\155\163\134\160\171\164\150\157\156\134\160\171\164\150\157\156\63\61\61\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\163\143\151\160\171\134\163\164\141\164\163\134\137\155\163\164\141\164\163\137\142\141\163\151\143\56\160\171"
#endif
},
    {"scipy.stats._mstats_extras", modulecode_scipy$stats$_mstats_extras, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\165\163\145\162\163\134\161\167\167\71\63\134\141\160\160\144\141\164\141\134\154\157\143\141\154\134\160\162\157\147\162\141\155\163\134\160\171\164\150\157\156\134\160\171\164\150\157\156\63\61\61\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\163\143\151\160\171\134\163\164\141\164\163\134\137\155\163\164\141\164\163\137\145\170\164\162\141\163\56\160\171"
#endif
},
    {"scipy.stats._multivariate", modulecode_scipy$stats$_multivariate, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\165\163\145\162\163\134\161\167\167\71\63\134\141\160\160\144\141\164\141\134\154\157\143\141\154\134\160\162\157\147\162\141\155\163\134\160\171\164\150\157\156\134\160\171\164\150\157\156\63\61\61\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\163\143\151\160\171\134\163\164\141\164\163\134\137\155\165\154\164\151\166\141\162\151\141\164\145\56\160\171"
#endif
},
    {"scipy.stats._odds_ratio", modulecode_scipy$stats$_odds_ratio, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\165\163\145\162\163\134\161\167\167\71\63\134\141\160\160\144\141\164\141\134\154\157\143\141\154\134\160\162\157\147\162\141\155\163\134\160\171\164\150\157\156\134\160\171\164\150\157\156\63\61\61\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\163\143\151\160\171\134\163\164\141\164\163\134\137\157\144\144\163\137\162\141\164\151\157\56\160\171"
#endif
},
    {"scipy.stats._page_trend_test", modulecode_scipy$stats$_page_trend_test, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\165\163\145\162\163\134\161\167\167\71\63\134\141\160\160\144\141\164\141\134\154\157\143\141\154\134\160\162\157\147\162\141\155\163\134\160\171\164\150\157\156\134\160\171\164\150\157\156\63\61\61\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\163\143\151\160\171\134\163\164\141\164\163\134\137\160\141\147\145\137\164\162\145\156\144\137\164\145\163\164\56\160\171"
#endif
},
    {"scipy.stats._qmc", modulecode_scipy$stats$_qmc, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\165\163\145\162\163\134\161\167\167\71\63\134\141\160\160\144\141\164\141\134\154\157\143\141\154\134\160\162\157\147\162\141\155\163\134\160\171\164\150\157\156\134\160\171\164\150\157\156\63\61\61\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\163\143\151\160\171\134\163\164\141\164\163\134\137\161\155\143\56\160\171"
#endif
},
    {"scipy.stats._rcont", modulecode_scipy$stats$_rcont, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_PACKAGE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\165\163\145\162\163\134\161\167\167\71\63\134\141\160\160\144\141\164\141\134\154\157\143\141\154\134\160\162\157\147\162\141\155\163\134\160\171\164\150\157\156\134\160\171\164\150\157\156\63\61\61\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\163\143\151\160\171\134\163\164\141\164\163\134\137\162\143\157\156\164\134\137\137\151\156\151\164\137\137\56\160\171"
#endif
},
    {"scipy.stats._relative_risk", modulecode_scipy$stats$_relative_risk, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\165\163\145\162\163\134\161\167\167\71\63\134\141\160\160\144\141\164\141\134\154\157\143\141\154\134\160\162\157\147\162\141\155\163\134\160\171\164\150\157\156\134\160\171\164\150\157\156\63\61\61\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\163\143\151\160\171\134\163\164\141\164\163\134\137\162\145\154\141\164\151\166\145\137\162\151\163\153\56\160\171"
#endif
},
    {"scipy.stats._resampling", modulecode_scipy$stats$_resampling, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\165\163\145\162\163\134\161\167\167\71\63\134\141\160\160\144\141\164\141\134\154\157\143\141\154\134\160\162\157\147\162\141\155\163\134\160\171\164\150\157\156\134\160\171\164\150\157\156\63\61\61\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\163\143\151\160\171\134\163\164\141\164\163\134\137\162\145\163\141\155\160\154\151\156\147\56\160\171"
#endif
},
    {"scipy.stats._rvs_sampling", modulecode_scipy$stats$_rvs_sampling, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\165\163\145\162\163\134\161\167\167\71\63\134\141\160\160\144\141\164\141\134\154\157\143\141\154\134\160\162\157\147\162\141\155\163\134\160\171\164\150\157\156\134\160\171\164\150\157\156\63\61\61\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\163\143\151\160\171\134\163\164\141\164\163\134\137\162\166\163\137\163\141\155\160\154\151\156\147\56\160\171"
#endif
},
    {"scipy.stats._stats_mstats_common", modulecode_scipy$stats$_stats_mstats_common, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\165\163\145\162\163\134\161\167\167\71\63\134\141\160\160\144\141\164\141\134\154\157\143\141\154\134\160\162\157\147\162\141\155\163\134\160\171\164\150\157\156\134\160\171\164\150\157\156\63\61\61\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\163\143\151\160\171\134\163\164\141\164\163\134\137\163\164\141\164\163\137\155\163\164\141\164\163\137\143\157\155\155\157\156\56\160\171"
#endif
},
    {"scipy.stats._stats_py", modulecode_scipy$stats$_stats_py, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\165\163\145\162\163\134\161\167\167\71\63\134\141\160\160\144\141\164\141\134\154\157\143\141\154\134\160\162\157\147\162\141\155\163\134\160\171\164\150\157\156\134\160\171\164\150\157\156\63\61\61\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\163\143\151\160\171\134\163\164\141\164\163\134\137\163\164\141\164\163\137\160\171\56\160\171"
#endif
},
    {"scipy.stats._tukeylambda_stats", modulecode_scipy$stats$_tukeylambda_stats, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\165\163\145\162\163\134\161\167\167\71\63\134\141\160\160\144\141\164\141\134\154\157\143\141\154\134\160\162\157\147\162\141\155\163\134\160\171\164\150\157\156\134\160\171\164\150\157\156\63\61\61\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\163\143\151\160\171\134\163\164\141\164\163\134\137\164\165\153\145\171\154\141\155\142\144\141\137\163\164\141\164\163\56\160\171"
#endif
},
    {"scipy.stats._variation", modulecode_scipy$stats$_variation, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\165\163\145\162\163\134\161\167\167\71\63\134\141\160\160\144\141\164\141\134\154\157\143\141\154\134\160\162\157\147\162\141\155\163\134\160\171\164\150\157\156\134\160\171\164\150\157\156\63\61\61\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\163\143\151\160\171\134\163\164\141\164\163\134\137\166\141\162\151\141\164\151\157\156\56\160\171"
#endif
},
    {"scipy.stats._warnings_errors", modulecode_scipy$stats$_warnings_errors, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\165\163\145\162\163\134\161\167\167\71\63\134\141\160\160\144\141\164\141\134\154\157\143\141\154\134\160\162\157\147\162\141\155\163\134\160\171\164\150\157\156\134\160\171\164\150\157\156\63\61\61\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\163\143\151\160\171\134\163\164\141\164\163\134\137\167\141\162\156\151\156\147\163\137\145\162\162\157\162\163\56\160\171"
#endif
},
    {"scipy.stats.biasedurn", modulecode_scipy$stats$biasedurn, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\165\163\145\162\163\134\161\167\167\71\63\134\141\160\160\144\141\164\141\134\154\157\143\141\154\134\160\162\157\147\162\141\155\163\134\160\171\164\150\157\156\134\160\171\164\150\157\156\63\61\61\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\163\143\151\160\171\134\163\164\141\164\163\134\142\151\141\163\145\144\165\162\156\56\160\171"
#endif
},
    {"scipy.stats.contingency", modulecode_scipy$stats$contingency, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\165\163\145\162\163\134\161\167\167\71\63\134\141\160\160\144\141\164\141\134\154\157\143\141\154\134\160\162\157\147\162\141\155\163\134\160\171\164\150\157\156\134\160\171\164\150\157\156\63\61\61\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\163\143\151\160\171\134\163\164\141\164\163\134\143\157\156\164\151\156\147\145\156\143\171\56\160\171"
#endif
},
    {"scipy.stats.distributions", modulecode_scipy$stats$distributions, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\165\163\145\162\163\134\161\167\167\71\63\134\141\160\160\144\141\164\141\134\154\157\143\141\154\134\160\162\157\147\162\141\155\163\134\160\171\164\150\157\156\134\160\171\164\150\157\156\63\61\61\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\163\143\151\160\171\134\163\164\141\164\163\134\144\151\163\164\162\151\142\165\164\151\157\156\163\56\160\171"
#endif
},
    {"scipy.stats.kde", modulecode_scipy$stats$kde, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\165\163\145\162\163\134\161\167\167\71\63\134\141\160\160\144\141\164\141\134\154\157\143\141\154\134\160\162\157\147\162\141\155\163\134\160\171\164\150\157\156\134\160\171\164\150\157\156\63\61\61\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\163\143\151\160\171\134\163\164\141\164\163\134\153\144\145\56\160\171"
#endif
},
    {"scipy.stats.morestats", modulecode_scipy$stats$morestats, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\165\163\145\162\163\134\161\167\167\71\63\134\141\160\160\144\141\164\141\134\154\157\143\141\154\134\160\162\157\147\162\141\155\163\134\160\171\164\150\157\156\134\160\171\164\150\157\156\63\61\61\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\163\143\151\160\171\134\163\164\141\164\163\134\155\157\162\145\163\164\141\164\163\56\160\171"
#endif
},
    {"scipy.stats.mstats", modulecode_scipy$stats$mstats, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\165\163\145\162\163\134\161\167\167\71\63\134\141\160\160\144\141\164\141\134\154\157\143\141\154\134\160\162\157\147\162\141\155\163\134\160\171\164\150\157\156\134\160\171\164\150\157\156\63\61\61\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\163\143\151\160\171\134\163\164\141\164\163\134\155\163\164\141\164\163\56\160\171"
#endif
},
    {"scipy.stats.mstats_basic", modulecode_scipy$stats$mstats_basic, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\165\163\145\162\163\134\161\167\167\71\63\134\141\160\160\144\141\164\141\134\154\157\143\141\154\134\160\162\157\147\162\141\155\163\134\160\171\164\150\157\156\134\160\171\164\150\157\156\63\61\61\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\163\143\151\160\171\134\163\164\141\164\163\134\155\163\164\141\164\163\137\142\141\163\151\143\56\160\171"
#endif
},
    {"scipy.stats.mstats_extras", modulecode_scipy$stats$mstats_extras, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\165\163\145\162\163\134\161\167\167\71\63\134\141\160\160\144\141\164\141\134\154\157\143\141\154\134\160\162\157\147\162\141\155\163\134\160\171\164\150\157\156\134\160\171\164\150\157\156\63\61\61\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\163\143\151\160\171\134\163\164\141\164\163\134\155\163\164\141\164\163\137\145\170\164\162\141\163\56\160\171"
#endif
},
    {"scipy.stats.mvn", modulecode_scipy$stats$mvn, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\165\163\145\162\163\134\161\167\167\71\63\134\141\160\160\144\141\164\141\134\154\157\143\141\154\134\160\162\157\147\162\141\155\163\134\160\171\164\150\157\156\134\160\171\164\150\157\156\63\61\61\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\163\143\151\160\171\134\163\164\141\164\163\134\155\166\156\56\160\171"
#endif
},
    {"scipy.stats.qmc", modulecode_scipy$stats$qmc, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\165\163\145\162\163\134\161\167\167\71\63\134\141\160\160\144\141\164\141\134\154\157\143\141\154\134\160\162\157\147\162\141\155\163\134\160\171\164\150\157\156\134\160\171\164\150\157\156\63\61\61\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\163\143\151\160\171\134\163\164\141\164\163\134\161\155\143\56\160\171"
#endif
},
    {"scipy.stats.statlib", modulecode_scipy$stats$statlib, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\165\163\145\162\163\134\161\167\167\71\63\134\141\160\160\144\141\164\141\134\154\157\143\141\154\134\160\162\157\147\162\141\155\163\134\160\171\164\150\157\156\134\160\171\164\150\157\156\63\61\61\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\163\143\151\160\171\134\163\164\141\164\163\134\163\164\141\164\154\151\142\56\160\171"
#endif
},
    {"scipy.stats.stats", modulecode_scipy$stats$stats, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\165\163\145\162\163\134\161\167\167\71\63\134\141\160\160\144\141\164\141\134\154\157\143\141\154\134\160\162\157\147\162\141\155\163\134\160\171\164\150\157\156\134\160\171\164\150\157\156\63\61\61\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\163\143\151\160\171\134\163\164\141\164\163\134\163\164\141\164\163\56\160\171"
#endif
},
    {"scipy.version", modulecode_scipy$version, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\165\163\145\162\163\134\161\167\167\71\63\134\141\160\160\144\141\164\141\134\154\157\143\141\154\134\160\162\157\147\162\141\155\163\134\160\171\164\150\157\156\134\160\171\164\150\157\156\63\61\61\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\163\143\151\160\171\134\166\145\162\163\151\157\156\56\160\171"
#endif
},
    {"secrets", NULL, 154, 2885, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\161\167\167\71\63\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\61\134\114\151\142\134\163\145\143\162\145\164\163\56\160\171"
#endif
},
    {"selectors", NULL, 155, 28368, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\161\167\167\71\63\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\61\134\114\151\142\134\163\145\154\145\143\164\157\162\163\56\160\171"
#endif
},
    {"site", NULL, 156, 29853, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\161\167\167\71\63\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\61\134\114\151\142\134\163\151\164\145\56\160\171"
#endif
},
    {"six", modulecode_six, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\165\163\145\162\163\134\161\167\167\71\63\134\141\160\160\144\141\164\141\134\154\157\143\141\154\134\160\162\157\147\162\141\155\163\134\160\171\164\150\157\156\134\160\171\164\150\157\156\63\61\61\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\163\151\170\56\160\171"
#endif
},
    {"socket", NULL, 157, 45500, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\161\167\167\71\63\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\61\134\114\151\142\134\163\157\143\153\145\164\56\160\171"
#endif
},
    {"soupsieve", modulecode_soupsieve, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_PACKAGE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\165\163\145\162\163\134\161\167\167\71\63\134\141\160\160\144\141\164\141\134\154\157\143\141\154\134\160\162\157\147\162\141\155\163\134\160\171\164\150\157\156\134\160\171\164\150\157\156\63\61\61\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\163\157\165\160\163\151\145\166\145\134\137\137\151\156\151\164\137\137\56\160\171"
#endif
},
    {"soupsieve.__meta__", modulecode_soupsieve$__meta__, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\165\163\145\162\163\134\161\167\167\71\63\134\141\160\160\144\141\164\141\134\154\157\143\141\154\134\160\162\157\147\162\141\155\163\134\160\171\164\150\157\156\134\160\171\164\150\157\156\63\61\61\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\163\157\165\160\163\151\145\166\145\134\137\137\155\145\164\141\137\137\56\160\171"
#endif
},
    {"soupsieve.css_match", modulecode_soupsieve$css_match, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\165\163\145\162\163\134\161\167\167\71\63\134\141\160\160\144\141\164\141\134\154\157\143\141\154\134\160\162\157\147\162\141\155\163\134\160\171\164\150\157\156\134\160\171\164\150\157\156\63\61\61\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\163\157\165\160\163\151\145\166\145\134\143\163\163\137\155\141\164\143\150\56\160\171"
#endif
},
    {"soupsieve.css_parser", modulecode_soupsieve$css_parser, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\165\163\145\162\163\134\161\167\167\71\63\134\141\160\160\144\141\164\141\134\154\157\143\141\154\134\160\162\157\147\162\141\155\163\134\160\171\164\150\157\156\134\160\171\164\150\157\156\63\61\61\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\163\157\165\160\163\151\145\166\145\134\143\163\163\137\160\141\162\163\145\162\56\160\171"
#endif
},
    {"soupsieve.css_types", modulecode_soupsieve$css_types, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\165\163\145\162\163\134\161\167\167\71\63\134\141\160\160\144\141\164\141\134\154\157\143\141\154\134\160\162\157\147\162\141\155\163\134\160\171\164\150\157\156\134\160\171\164\150\157\156\63\61\61\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\163\157\165\160\163\151\145\166\145\134\143\163\163\137\164\171\160\145\163\56\160\171"
#endif
},
    {"soupsieve.pretty", modulecode_soupsieve$pretty, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\165\163\145\162\163\134\161\167\167\71\63\134\141\160\160\144\141\164\141\134\154\157\143\141\154\134\160\162\157\147\162\141\155\163\134\160\171\164\150\157\156\134\160\171\164\150\157\156\63\61\61\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\163\157\165\160\163\151\145\166\145\134\160\162\145\164\164\171\56\160\171"
#endif
},
    {"soupsieve.util", modulecode_soupsieve$util, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\165\163\145\162\163\134\161\167\167\71\63\134\141\160\160\144\141\164\141\134\154\157\143\141\154\134\160\162\157\147\162\141\155\163\134\160\171\164\150\157\156\134\160\171\164\150\157\156\63\61\61\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\163\157\165\160\163\151\145\166\145\134\165\164\151\154\56\160\171"
#endif
},
    {"sqlite3", NULL, 158, 1879, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG | NUITKA_PACKAGE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\161\167\167\71\63\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\61\134\114\151\142\134\163\161\154\151\164\145\63\134\137\137\151\156\151\164\137\137\56\160\171"
#endif
},
    {"sqlite3.dbapi2", NULL, 159, 4955, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\161\167\167\71\63\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\61\134\114\151\142\134\163\161\154\151\164\145\63\134\144\142\141\160\151\62\56\160\171"
#endif
},
    {"ssl", NULL, 160, 72382, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\161\167\167\71\63\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\61\134\114\151\142\134\163\163\154\56\160\171"
#endif
},
    {"subprocess", NULL, 161, 82739, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\161\167\167\71\63\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\61\134\114\151\142\134\163\165\142\160\162\157\143\145\163\163\56\160\171"
#endif
},
    {"threadpoolctl", modulecode_threadpoolctl, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\165\163\145\162\163\134\161\167\167\71\63\134\141\160\160\144\141\164\141\134\154\157\143\141\154\134\160\162\157\147\162\141\155\163\134\160\171\164\150\157\156\134\160\171\164\150\157\156\63\61\61\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\164\150\162\145\141\144\160\157\157\154\143\164\154\56\160\171"
#endif
},
    {"tkinter", NULL, 162, 258344, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG | NUITKA_PACKAGE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\161\167\167\71\63\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\61\134\114\151\142\134\164\153\151\156\164\145\162\134\137\137\151\156\151\164\137\137\56\160\171"
#endif
},
    {"tkinter.commondialog", NULL, 163, 2143, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\161\167\167\71\63\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\61\134\114\151\142\134\164\153\151\156\164\145\162\134\143\157\155\155\157\156\144\151\141\154\157\147\56\160\171"
#endif
},
    {"tkinter.constants", NULL, 164, 1961, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\161\167\167\71\63\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\61\134\114\151\142\134\164\153\151\156\164\145\162\134\143\157\156\163\164\141\156\164\163\56\160\171"
#endif
},
    {"tkinter.dialog", NULL, 165, 2382, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\161\167\167\71\63\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\61\134\114\151\142\134\164\153\151\156\164\145\162\134\144\151\141\154\157\147\56\160\171"
#endif
},
    {"tkinter.filedialog", NULL, 166, 24742, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\161\167\167\71\63\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\61\134\114\151\142\134\164\153\151\156\164\145\162\134\146\151\154\145\144\151\141\154\157\147\56\160\171"
#endif
},
    {"tkinter.font", NULL, 167, 11822, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\161\167\167\71\63\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\61\134\114\151\142\134\164\153\151\156\164\145\162\134\146\157\156\164\56\160\171"
#endif
},
    {"tkinter.messagebox", NULL, 168, 4759, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\161\167\167\71\63\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\61\134\114\151\142\134\164\153\151\156\164\145\162\134\155\145\163\163\141\147\145\142\157\170\56\160\171"
#endif
},
    {"tkinter.simpledialog", NULL, 169, 19466, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\161\167\167\71\63\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\61\134\114\151\142\134\164\153\151\156\164\145\162\134\163\151\155\160\154\145\144\151\141\154\157\147\56\160\171"
#endif
},
    {"urllib", NULL, 170, 170, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG | NUITKA_PACKAGE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\161\167\167\71\63\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\61\134\114\151\142\134\165\162\154\154\151\142\134\137\137\151\156\151\164\137\137\56\160\171"
#endif
},
    {"urllib.error", NULL, 171, 3905, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\161\167\167\71\63\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\61\134\114\151\142\134\165\162\154\154\151\142\134\145\162\162\157\162\56\160\171"
#endif
},
    {"urllib.parse", NULL, 172, 53216, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\161\167\167\71\63\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\61\134\114\151\142\134\165\162\154\154\151\142\134\160\141\162\163\145\56\160\171"
#endif
},
    {"urllib.request", NULL, 173, 126512, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\161\167\167\71\63\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\61\134\114\151\142\134\165\162\154\154\151\142\134\162\145\161\165\145\163\164\56\160\171"
#endif
},
    {"urllib.response", NULL, 174, 5213, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\161\167\167\71\63\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\61\134\114\151\142\134\165\162\154\154\151\142\134\162\145\163\160\157\156\163\145\56\160\171"
#endif
},
    {"uuid", NULL, 175, 33091, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\161\167\167\71\63\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\61\134\114\151\142\134\165\165\151\144\56\160\171"
#endif
},
    {"webencodings", modulecode_webencodings, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_PACKAGE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\165\163\145\162\163\134\161\167\167\71\63\134\141\160\160\144\141\164\141\134\154\157\143\141\154\134\160\162\157\147\162\141\155\163\134\160\171\164\150\157\156\134\160\171\164\150\157\156\63\61\61\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\167\145\142\145\156\143\157\144\151\156\147\163\134\137\137\151\156\151\164\137\137\56\160\171"
#endif
},
    {"webencodings.labels", modulecode_webencodings$labels, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\165\163\145\162\163\134\161\167\167\71\63\134\141\160\160\144\141\164\141\134\154\157\143\141\154\134\160\162\157\147\162\141\155\163\134\160\171\164\150\157\156\134\160\171\164\150\157\156\63\61\61\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\167\145\142\145\156\143\157\144\151\156\147\163\134\154\141\142\145\154\163\56\160\171"
#endif
},
    {"webencodings.x_user_defined", modulecode_webencodings$x_user_defined, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\165\163\145\162\163\134\161\167\167\71\63\134\141\160\160\144\141\164\141\134\154\157\143\141\154\134\160\162\157\147\162\141\155\163\134\160\171\164\150\157\156\134\160\171\164\150\157\156\63\61\61\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\167\145\142\145\156\143\157\144\151\156\147\163\134\170\137\165\163\145\162\137\144\145\146\151\156\145\144\56\160\171"
#endif
},
    {"xlrd", modulecode_xlrd, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_PACKAGE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\165\163\145\162\163\134\161\167\167\71\63\134\141\160\160\144\141\164\141\134\154\157\143\141\154\134\160\162\157\147\162\141\155\163\134\160\171\164\150\157\156\134\160\171\164\150\157\156\63\61\61\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\170\154\162\144\134\137\137\151\156\151\164\137\137\56\160\171"
#endif
},
    {"xlrd.biffh", modulecode_xlrd$biffh, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\165\163\145\162\163\134\161\167\167\71\63\134\141\160\160\144\141\164\141\134\154\157\143\141\154\134\160\162\157\147\162\141\155\163\134\160\171\164\150\157\156\134\160\171\164\150\157\156\63\61\61\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\170\154\162\144\134\142\151\146\146\150\56\160\171"
#endif
},
    {"xlrd.book", modulecode_xlrd$book, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\165\163\145\162\163\134\161\167\167\71\63\134\141\160\160\144\141\164\141\134\154\157\143\141\154\134\160\162\157\147\162\141\155\163\134\160\171\164\150\157\156\134\160\171\164\150\157\156\63\61\61\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\170\154\162\144\134\142\157\157\153\56\160\171"
#endif
},
    {"xlrd.compdoc", modulecode_xlrd$compdoc, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\165\163\145\162\163\134\161\167\167\71\63\134\141\160\160\144\141\164\141\134\154\157\143\141\154\134\160\162\157\147\162\141\155\163\134\160\171\164\150\157\156\134\160\171\164\150\157\156\63\61\61\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\170\154\162\144\134\143\157\155\160\144\157\143\56\160\171"
#endif
},
    {"xlrd.formatting", modulecode_xlrd$formatting, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\165\163\145\162\163\134\161\167\167\71\63\134\141\160\160\144\141\164\141\134\154\157\143\141\154\134\160\162\157\147\162\141\155\163\134\160\171\164\150\157\156\134\160\171\164\150\157\156\63\61\61\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\170\154\162\144\134\146\157\162\155\141\164\164\151\156\147\56\160\171"
#endif
},
    {"xlrd.formula", modulecode_xlrd$formula, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\165\163\145\162\163\134\161\167\167\71\63\134\141\160\160\144\141\164\141\134\154\157\143\141\154\134\160\162\157\147\162\141\155\163\134\160\171\164\150\157\156\134\160\171\164\150\157\156\63\61\61\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\170\154\162\144\134\146\157\162\155\165\154\141\56\160\171"
#endif
},
    {"xlrd.info", modulecode_xlrd$info, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\165\163\145\162\163\134\161\167\167\71\63\134\141\160\160\144\141\164\141\134\154\157\143\141\154\134\160\162\157\147\162\141\155\163\134\160\171\164\150\157\156\134\160\171\164\150\157\156\63\61\61\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\170\154\162\144\134\151\156\146\157\56\160\171"
#endif
},
    {"xlrd.sheet", modulecode_xlrd$sheet, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\165\163\145\162\163\134\161\167\167\71\63\134\141\160\160\144\141\164\141\134\154\157\143\141\154\134\160\162\157\147\162\141\155\163\134\160\171\164\150\157\156\134\160\171\164\150\157\156\63\61\61\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\170\154\162\144\134\163\150\145\145\164\56\160\171"
#endif
},
    {"xlrd.timemachine", modulecode_xlrd$timemachine, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\165\163\145\162\163\134\161\167\167\71\63\134\141\160\160\144\141\164\141\134\154\157\143\141\154\134\160\162\157\147\162\141\155\163\134\160\171\164\150\157\156\134\160\171\164\150\157\156\63\61\61\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\170\154\162\144\134\164\151\155\145\155\141\143\150\151\156\145\56\160\171"
#endif
},
    {"xlrd.xldate", modulecode_xlrd$xldate, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\165\163\145\162\163\134\161\167\167\71\63\134\141\160\160\144\141\164\141\134\154\157\143\141\154\134\160\162\157\147\162\141\155\163\134\160\171\164\150\157\156\134\160\171\164\150\157\156\63\61\61\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\170\154\162\144\134\170\154\144\141\164\145\56\160\171"
#endif
},
    {"xml", NULL, 176, 747, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG | NUITKA_PACKAGE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\161\167\167\71\63\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\61\134\114\151\142\134\170\155\154\134\137\137\151\156\151\164\137\137\56\160\171"
#endif
},
    {"xml.dom", NULL, 177, 7154, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG | NUITKA_PACKAGE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\161\167\167\71\63\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\61\134\114\151\142\134\170\155\154\134\144\157\155\134\137\137\151\156\151\164\137\137\56\160\171"
#endif
},
    {"xml.dom.NodeFilter", NULL, 178, 1170, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\161\167\167\71\63\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\61\134\114\151\142\134\170\155\154\134\144\157\155\134\116\157\144\145\106\151\154\164\145\162\56\160\171"
#endif
},
    {"xml.dom.domreg", NULL, 179, 4265, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\161\167\167\71\63\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\61\134\114\151\142\134\170\155\154\134\144\157\155\134\144\157\155\162\145\147\56\160\171"
#endif
},
    {"xml.dom.expatbuilder", NULL, 180, 46501, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\161\167\167\71\63\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\61\134\114\151\142\134\170\155\154\134\144\157\155\134\145\170\160\141\164\142\165\151\154\144\145\162\56\160\171"
#endif
},
    {"xml.dom.minicompat", NULL, 181, 3921, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\161\167\167\71\63\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\61\134\114\151\142\134\170\155\154\134\144\157\155\134\155\151\156\151\143\157\155\160\141\164\56\160\171"
#endif
},
    {"xml.dom.minidom", NULL, 182, 96017, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\161\167\167\71\63\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\61\134\114\151\142\134\170\155\154\134\144\157\155\134\155\151\156\151\144\157\155\56\160\171"
#endif
},
    {"xml.dom.pulldom", NULL, 183, 18332, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\161\167\167\71\63\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\61\134\114\151\142\134\170\155\154\134\144\157\155\134\160\165\154\154\144\157\155\56\160\171"
#endif
},
    {"xml.dom.xmlbuilder", NULL, 184, 18099, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\161\167\167\71\63\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\61\134\114\151\142\134\170\155\154\134\144\157\155\134\170\155\154\142\165\151\154\144\145\162\56\160\171"
#endif
},
    {"xml.etree", NULL, 185, 173, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG | NUITKA_PACKAGE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\161\167\167\71\63\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\61\134\114\151\142\134\170\155\154\134\145\164\162\145\145\134\137\137\151\156\151\164\137\137\56\160\171"
#endif
},
    {"xml.etree.ElementPath", NULL, 186, 17254, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\161\167\167\71\63\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\61\134\114\151\142\134\170\155\154\134\145\164\162\145\145\134\105\154\145\155\145\156\164\120\141\164\150\56\160\171"
#endif
},
    {"xml.etree.ElementTree", NULL, 187, 89043, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\161\167\167\71\63\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\61\134\114\151\142\134\170\155\154\134\145\164\162\145\145\134\105\154\145\155\145\156\164\124\162\145\145\56\160\171"
#endif
},
    {"xml.etree.cElementTree", NULL, 188, 225, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\161\167\167\71\63\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\61\134\114\151\142\134\170\155\154\134\145\164\162\145\145\134\143\105\154\145\155\145\156\164\124\162\145\145\56\160\171"
#endif
},
    {"xml.parsers", NULL, 189, 357, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG | NUITKA_PACKAGE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\161\167\167\71\63\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\61\134\114\151\142\134\170\155\154\134\160\141\162\163\145\162\163\134\137\137\151\156\151\164\137\137\56\160\171"
#endif
},
    {"xml.parsers.expat", NULL, 190, 439, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\161\167\167\71\63\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\61\134\114\151\142\134\170\155\154\134\160\141\162\163\145\162\163\134\145\170\160\141\164\56\160\171"
#endif
},
    {"xml.sax", NULL, 191, 5086, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG | NUITKA_PACKAGE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\161\167\167\71\63\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\61\134\114\151\142\134\170\155\154\134\163\141\170\134\137\137\151\156\151\164\137\137\56\160\171"
#endif
},
    {"xml.sax._exceptions", NULL, 192, 6850, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\161\167\167\71\63\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\61\134\114\151\142\134\170\155\154\134\163\141\170\134\137\145\170\143\145\160\164\151\157\156\163\56\160\171"
#endif
},
    {"xml.sax.expatreader", NULL, 193, 21837, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\161\167\167\71\63\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\61\134\114\151\142\134\170\155\154\134\163\141\170\134\145\170\160\141\164\162\145\141\144\145\162\56\160\171"
#endif
},
    {"xml.sax.handler", NULL, 194, 15570, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\161\167\167\71\63\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\61\134\114\151\142\134\170\155\154\134\163\141\170\134\150\141\156\144\154\145\162\56\160\171"
#endif
},
    {"xml.sax.saxutils", NULL, 195, 21598, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\161\167\167\71\63\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\61\134\114\151\142\134\170\155\154\134\163\141\170\134\163\141\170\165\164\151\154\163\56\160\171"
#endif
},
    {"xml.sax.xmlreader", NULL, 196, 20960, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\161\167\167\71\63\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\61\134\114\151\142\134\170\155\154\134\163\141\170\134\170\155\154\162\145\141\144\145\162\56\160\171"
#endif
},
    {"xmlrpc", NULL, 197, 170, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG | NUITKA_PACKAGE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\161\167\167\71\63\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\61\134\114\151\142\134\170\155\154\162\160\143\134\137\137\151\156\151\164\137\137\56\160\171"
#endif
},
    {"xmlrpc.client", NULL, 198, 56972, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\161\167\167\71\63\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\61\134\114\151\142\134\170\155\154\162\160\143\134\143\154\151\145\156\164\56\160\171"
#endif
},
    {"xmlrpc.server", NULL, 199, 46951, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\161\167\167\71\63\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\61\134\114\151\142\134\170\155\154\162\160\143\134\163\145\162\166\145\162\56\160\171"
#endif
},
    {"yaml", modulecode_yaml, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_PACKAGE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\165\163\145\162\163\134\161\167\167\71\63\134\141\160\160\144\141\164\141\134\154\157\143\141\154\134\160\162\157\147\162\141\155\163\134\160\171\164\150\157\156\134\160\171\164\150\157\156\63\61\61\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\171\141\155\154\134\137\137\151\156\151\164\137\137\56\160\171"
#endif
},
    {"yaml.composer", modulecode_yaml$composer, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\165\163\145\162\163\134\161\167\167\71\63\134\141\160\160\144\141\164\141\134\154\157\143\141\154\134\160\162\157\147\162\141\155\163\134\160\171\164\150\157\156\134\160\171\164\150\157\156\63\61\61\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\171\141\155\154\134\143\157\155\160\157\163\145\162\56\160\171"
#endif
},
    {"yaml.constructor", modulecode_yaml$constructor, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\165\163\145\162\163\134\161\167\167\71\63\134\141\160\160\144\141\164\141\134\154\157\143\141\154\134\160\162\157\147\162\141\155\163\134\160\171\164\150\157\156\134\160\171\164\150\157\156\63\61\61\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\171\141\155\154\134\143\157\156\163\164\162\165\143\164\157\162\56\160\171"
#endif
},
    {"yaml.cyaml", modulecode_yaml$cyaml, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\165\163\145\162\163\134\161\167\167\71\63\134\141\160\160\144\141\164\141\134\154\157\143\141\154\134\160\162\157\147\162\141\155\163\134\160\171\164\150\157\156\134\160\171\164\150\157\156\63\61\61\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\171\141\155\154\134\143\171\141\155\154\56\160\171"
#endif
},
    {"yaml.dumper", modulecode_yaml$dumper, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\165\163\145\162\163\134\161\167\167\71\63\134\141\160\160\144\141\164\141\134\154\157\143\141\154\134\160\162\157\147\162\141\155\163\134\160\171\164\150\157\156\134\160\171\164\150\157\156\63\61\61\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\171\141\155\154\134\144\165\155\160\145\162\56\160\171"
#endif
},
    {"yaml.emitter", modulecode_yaml$emitter, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\165\163\145\162\163\134\161\167\167\71\63\134\141\160\160\144\141\164\141\134\154\157\143\141\154\134\160\162\157\147\162\141\155\163\134\160\171\164\150\157\156\134\160\171\164\150\157\156\63\61\61\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\171\141\155\154\134\145\155\151\164\164\145\162\56\160\171"
#endif
},
    {"yaml.error", modulecode_yaml$error, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\165\163\145\162\163\134\161\167\167\71\63\134\141\160\160\144\141\164\141\134\154\157\143\141\154\134\160\162\157\147\162\141\155\163\134\160\171\164\150\157\156\134\160\171\164\150\157\156\63\61\61\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\171\141\155\154\134\145\162\162\157\162\56\160\171"
#endif
},
    {"yaml.events", modulecode_yaml$events, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\165\163\145\162\163\134\161\167\167\71\63\134\141\160\160\144\141\164\141\134\154\157\143\141\154\134\160\162\157\147\162\141\155\163\134\160\171\164\150\157\156\134\160\171\164\150\157\156\63\61\61\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\171\141\155\154\134\145\166\145\156\164\163\56\160\171"
#endif
},
    {"yaml.loader", modulecode_yaml$loader, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\165\163\145\162\163\134\161\167\167\71\63\134\141\160\160\144\141\164\141\134\154\157\143\141\154\134\160\162\157\147\162\141\155\163\134\160\171\164\150\157\156\134\160\171\164\150\157\156\63\61\61\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\171\141\155\154\134\154\157\141\144\145\162\56\160\171"
#endif
},
    {"yaml.nodes", modulecode_yaml$nodes, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\165\163\145\162\163\134\161\167\167\71\63\134\141\160\160\144\141\164\141\134\154\157\143\141\154\134\160\162\157\147\162\141\155\163\134\160\171\164\150\157\156\134\160\171\164\150\157\156\63\61\61\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\171\141\155\154\134\156\157\144\145\163\56\160\171"
#endif
},
    {"yaml.parser", modulecode_yaml$parser, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\165\163\145\162\163\134\161\167\167\71\63\134\141\160\160\144\141\164\141\134\154\157\143\141\154\134\160\162\157\147\162\141\155\163\134\160\171\164\150\157\156\134\160\171\164\150\157\156\63\61\61\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\171\141\155\154\134\160\141\162\163\145\162\56\160\171"
#endif
},
    {"yaml.reader", modulecode_yaml$reader, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\165\163\145\162\163\134\161\167\167\71\63\134\141\160\160\144\141\164\141\134\154\157\143\141\154\134\160\162\157\147\162\141\155\163\134\160\171\164\150\157\156\134\160\171\164\150\157\156\63\61\61\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\171\141\155\154\134\162\145\141\144\145\162\56\160\171"
#endif
},
    {"yaml.representer", modulecode_yaml$representer, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\165\163\145\162\163\134\161\167\167\71\63\134\141\160\160\144\141\164\141\134\154\157\143\141\154\134\160\162\157\147\162\141\155\163\134\160\171\164\150\157\156\134\160\171\164\150\157\156\63\61\61\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\171\141\155\154\134\162\145\160\162\145\163\145\156\164\145\162\56\160\171"
#endif
},
    {"yaml.resolver", modulecode_yaml$resolver, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\165\163\145\162\163\134\161\167\167\71\63\134\141\160\160\144\141\164\141\134\154\157\143\141\154\134\160\162\157\147\162\141\155\163\134\160\171\164\150\157\156\134\160\171\164\150\157\156\63\61\61\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\171\141\155\154\134\162\145\163\157\154\166\145\162\56\160\171"
#endif
},
    {"yaml.scanner", modulecode_yaml$scanner, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\165\163\145\162\163\134\161\167\167\71\63\134\141\160\160\144\141\164\141\134\154\157\143\141\154\134\160\162\157\147\162\141\155\163\134\160\171\164\150\157\156\134\160\171\164\150\157\156\63\61\61\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\171\141\155\154\134\163\143\141\156\156\145\162\56\160\171"
#endif
},
    {"yaml.serializer", modulecode_yaml$serializer, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\165\163\145\162\163\134\161\167\167\71\63\134\141\160\160\144\141\164\141\134\154\157\143\141\154\134\160\162\157\147\162\141\155\163\134\160\171\164\150\157\156\134\160\171\164\150\157\156\63\61\61\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\171\141\155\154\134\163\145\162\151\141\154\151\172\145\162\56\160\171"
#endif
},
    {"yaml.tokens", modulecode_yaml$tokens, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\165\163\145\162\163\134\161\167\167\71\63\134\141\160\160\144\141\164\141\134\154\157\143\141\154\134\160\162\157\147\162\141\155\163\134\160\171\164\150\157\156\134\160\171\164\150\157\156\63\61\61\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\171\141\155\154\134\164\157\153\145\156\163\56\160\171"
#endif
},
    {NULL, NULL, 0, 0, 0}
};

static void _loadBytesCodesBlob(void) {
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

    {NULL, 0, 0}
};


void copyFrozenModulesTo(struct _frozen *destination) {
    _loadBytesCodesBlob();

    struct frozen_desc *current = _frozen_modules;

    for (;;) {
        destination->name = (char *)current->name;
        destination->code = bytecode_data[current->index];
        destination->size = current->size;
#if PYTHON_VERSION >= 0x3b0
        destination->is_package = current->size < 0;
        destination->size = Py_ABS(destination->size);
        destination->get_code = NULL;
#endif
        if (destination->name == NULL) break;

        current += 1;
        destination += 1;
    };
}

