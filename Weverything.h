#ifdef __GNUC__
/* enable all warnings known to men */
 #pragma GCC diagnostic ignored "-Wunknown-pragmas"
 #pragma GCC diagnostic ignored "-Wpragmas"

 #pragma GCC diagnostic warning "-Weverything"
 #pragma GCC diagnostic warning "-Wpedantic"
 #pragma GCC diagnostic warning "-Wextra"
 #pragma GCC diagnostic warning "-Wall"
 
 #pragma GCC diagnostic ignored "-Wunknown-warning-option"
 #pragma GCC diagnostic ignored "-Wunknown-pragmas"

 #pragma GCC diagnostic warning "-Wabi-tag"
 #pragma GCC diagnostic warning "-Wcatch-value"
 #pragma GCC diagnostic warning "-Wclass-conversion"
 #pragma GCC diagnostic warning "-Wclass-memaccess"
 #pragma GCC diagnostic warning "-Wcomma-subscript"
 #pragma GCC diagnostic warning "-Wconditionally-supported"
 #pragma GCC diagnostic warning "-Wconversion-null"
 #pragma GCC diagnostic warning "-Wctad-maybe-unsupported"
 #pragma GCC diagnostic warning "-Wctor-dtor-privacy"
 #pragma GCC diagnostic warning "-Wdelete-incomplete"
 #pragma GCC diagnostic warning "-Wdelete-non-virtual-dtor"
 #pragma GCC diagnostic warning "-Wdeprecated-copy"
 #pragma GCC diagnostic warning "-Wdeprecated-copy-dtor"
 #pragma GCC diagnostic warning "-Wdeprecated-enum-enum-conversion"
 #pragma GCC diagnostic warning "-Wdeprecated-enum-float-conversion"
 #pragma GCC diagnostic warning "-Weffc++"
 #pragma GCC diagnostic warning "-Wexceptions"
 #pragma GCC diagnostic warning "-Wextra-semi"
 #pragma GCC diagnostic warning "-Winaccessible-base"
 #pragma GCC diagnostic warning "-Winherited-variadic-ctor"
 #pragma GCC diagnostic warning "-Winit-list-lifetime"
 #pragma GCC diagnostic warning "-Winvalid-imported-macros"
 #pragma GCC diagnostic warning "-Winvalid-offsetof"
 #pragma GCC diagnostic warning "-Wliteral-suffix"
 #pragma GCC diagnostic warning "-Wmismatched-new-delete"
 #pragma GCC diagnostic warning "-Wmismatched-tags"
 #pragma GCC diagnostic warning "-Wmultiple-inheritance"
 #pragma GCC diagnostic warning "-Wnamespaces"
 #pragma GCC diagnostic warning "-Wnarrowing"
 #pragma GCC diagnostic warning "-Wnoexcept"
 #pragma GCC diagnostic warning "-Wnoexcept-type"
 #pragma GCC diagnostic warning "-Wnon-virtual-dtor"
 #pragma GCC diagnostic warning "-Wpessimizing-move"
 #pragma GCC diagnostic warning "-Wplacement-new"
 #pragma GCC diagnostic warning "-Wrange-loop-construct"
 #pragma GCC diagnostic warning "-Wredundant-move"
 #pragma GCC diagnostic warning "-Wredundant-tags"
 #pragma GCC diagnostic warning "-Wreorder"
 #pragma GCC diagnostic warning "-Wregister"
 #pragma GCC diagnostic warning "-Wstrict-null-sentinel"
 #pragma GCC diagnostic warning "-Wsubobject-linkage"
 #pragma GCC diagnostic warning "-Wtemplates"
 #pragma GCC diagnostic warning "-Wnon-template-friend"
 #pragma GCC diagnostic warning "-Wold-style-cast"
 #pragma GCC diagnostic warning "-Woverloaded-virtual"
 #pragma GCC diagnostic warning "-Wpmf-conversions"
 #pragma GCC diagnostic warning "-Wsign-promo"
 #pragma GCC diagnostic warning "-Wsized-deallocation"
 #pragma GCC diagnostic warning "-Wsuggest-final-methods"
 #pragma GCC diagnostic warning "-Wsuggest-final-types"
 #pragma GCC diagnostic warning "-Wsuggest-override"
 #pragma GCC diagnostic warning "-Wterminate"
 #pragma GCC diagnostic warning "-Wuseless-cast"
 #pragma GCC diagnostic warning "-Wvexing-parse"
 #pragma GCC diagnostic warning "-Wvirtual-inheritance"
 #pragma GCC diagnostic warning "-Wvirtual-move-assign"
 #pragma GCC diagnostic warning "-Wvolatile"
 #pragma GCC diagnostic warning "-Wzero-as-null-pointer-constant"
 #pragma GCC diagnostic warning "-Wassign-intercept"
 #pragma GCC diagnostic warning "-Wproperty-assign-default"
 #pragma GCC diagnostic warning "-Wprotocol"
 #pragma GCC diagnostic warning "-Wobjc-root-class"
 #pragma GCC diagnostic warning "-Wselector"
 #pragma GCC diagnostic warning "-Wstrict-selector-match"
 #pragma GCC diagnostic warning "-Wundeclared-selector"
 #pragma GCC diagnostic warning "-Wabi"
 #pragma GCC diagnostic warning "-Waddress"
 #pragma GCC diagnostic warning "-Waddress-of-packed-member"
 #pragma GCC diagnostic warning "-Waggregate-return"
 #pragma GCC diagnostic warning "-Walloc-size-larger-than=1"
 #pragma GCC diagnostic warning "-Walloc-zero"
 #pragma GCC diagnostic warning "-Walloca"
 #pragma GCC diagnostic warning "-Walloca-larger-than=1"
 #pragma GCC diagnostic warning "-Waggressive-loop-optimizations"
 #pragma GCC diagnostic warning "-Warith-conversion"
 #pragma GCC diagnostic warning "-Warray-bounds"
 #pragma GCC diagnostic warning "-Wattributes"
 #pragma GCC diagnostic warning "-Wattribute-alias"
 #pragma GCC diagnostic warning "-Wattribute-warning"
 #pragma GCC diagnostic warning "-Wbool-compare"
 #pragma GCC diagnostic warning "-Wbool-operation"
 #pragma GCC diagnostic warning "-Wbuiltin-declaration-mismatch"
 #pragma GCC diagnostic warning "-Wbuiltin-macro-redefined"
 #pragma GCC diagnostic warning "-Wc90-c99-compat"
 #pragma GCC diagnostic warning "-Wc99-c11-compat"
 #pragma GCC diagnostic warning "-Wc11-c2x-compat"
 #pragma GCC diagnostic warning "-Wc++-compat"
 #pragma GCC diagnostic warning "-Wc++11-compat"
 #pragma GCC diagnostic warning "-Wc++14-compat"
 #pragma GCC diagnostic warning "-Wc++17-compat"
 #pragma GCC diagnostic warning "-Wc++20-compat"
 #pragma GCC diagnostic warning "-Wcast-align"
 #pragma GCC diagnostic warning "-Wcast-align=strict"
 #pragma GCC diagnostic warning "-Wcast-function-type"
 #pragma GCC diagnostic warning "-Wcast-qual"
 #pragma GCC diagnostic warning "-Wchar-subscripts"
 #pragma GCC diagnostic warning "-Wclobbered"
 #pragma GCC diagnostic warning "-Wcomment"
 #pragma GCC diagnostic warning "-Wconversion"
 #pragma GCC diagnostic warning "-Wcoverage-mismatch"
 #pragma GCC diagnostic warning "-Wcpp"
 #pragma GCC diagnostic warning "-Wdangling-else"
 #pragma GCC diagnostic warning "-Wdate-time"
 #pragma GCC diagnostic warning "-Wdeprecated"
 #pragma GCC diagnostic warning "-Wdeprecated-declarations"
 #pragma GCC diagnostic warning "-Wdesignated-init"
 #pragma GCC diagnostic warning "-Wdisabled-optimization"
 #pragma GCC diagnostic warning "-Wdiscarded-array-qualifiers"
 #pragma GCC diagnostic warning "-Wdiscarded-qualifiers"
 #pragma GCC diagnostic warning "-Wdiv-by-zero"
 #pragma GCC diagnostic warning "-Wdouble-promotion"
 #pragma GCC diagnostic warning "-Wduplicated-branches"
 #pragma GCC diagnostic warning "-Wduplicated-cond"
 #pragma GCC diagnostic warning "-Wempty-body"
 #pragma GCC diagnostic warning "-Wendif-labels"
 #pragma GCC diagnostic warning "-Wenum-compare"
 #pragma GCC diagnostic warning "-Wenum-conversion"
 #pragma GCC diagnostic warning "-Wexpansion-to-defined"
 #pragma GCC diagnostic warning "-Wfloat-conversion"
 #pragma GCC diagnostic warning "-Wfloat-equal"
 #pragma GCC diagnostic warning "-Wformat"
 #pragma GCC diagnostic warning "-Wformat=2"
 #pragma GCC diagnostic warning "-Wformat-contains-nul"
 #pragma GCC diagnostic warning "-Wformat-extra-args"
 #pragma GCC diagnostic warning "-Wformat-nonliteral"
 #pragma GCC diagnostic warning "-Wformat-overflow"
 #pragma GCC diagnostic warning "-Wformat-security"
 #pragma GCC diagnostic warning "-Wformat-signedness"
 #pragma GCC diagnostic warning "-Wformat-truncation"
 #pragma GCC diagnostic warning "-Wformat-y2k"
 #pragma GCC diagnostic warning "-Wframe-address"
 #pragma GCC diagnostic warning "-Wframe-larger-than=256"
 #pragma GCC diagnostic warning "-Wfree-nonheap-object"
 #pragma GCC diagnostic warning "-Wif-not-aligned"
 #pragma GCC diagnostic warning "-Wignored-attributes"
 #pragma GCC diagnostic warning "-Wignored-qualifiers"
 #pragma GCC diagnostic warning "-Wincompatible-pointer-types"
 #pragma GCC diagnostic warning "-Wimplicit"
 #pragma GCC diagnostic warning "-Wimplicit-fallthrough"
 #pragma GCC diagnostic warning "-Wimplicit-function-declaration"
 #pragma GCC diagnostic warning "-Wimplicit-int"
 #pragma GCC diagnostic warning "-Winit-self"
 #pragma GCC diagnostic warning "-Winline"
 #pragma GCC diagnostic warning "-Wint-conversion"
 #pragma GCC diagnostic warning "-Wint-in-bool-context"
 #pragma GCC diagnostic warning "-Wint-to-pointer-cast"
 #pragma GCC diagnostic warning "-Winvalid-memory-model"
 #pragma GCC diagnostic warning "-Winvalid-pch"
 #pragma GCC diagnostic warning "-Wjump-misses-init"
 #pragma GCC diagnostic warning "-Wlarger-than=256"
 #pragma GCC diagnostic warning "-Wlogical-not-parentheses"
 #pragma GCC diagnostic warning "-Wlogical-op"
 #pragma GCC diagnostic warning "-Wlong-long"
 #pragma GCC diagnostic warning "-Wlto-type-mismatch"
 #pragma GCC diagnostic warning "-Wmain"
 #pragma GCC diagnostic warning "-Wmaybe-uninitialized"
 #pragma GCC diagnostic warning "-Wmemset-elt-size"
 #pragma GCC diagnostic warning "-Wmemset-transposed-args"
 #pragma GCC diagnostic warning "-Wmisleading-indentation"
 #pragma GCC diagnostic warning "-Wmissing-attributes"
 #pragma GCC diagnostic warning "-Wmissing-braces"
 #pragma GCC diagnostic warning "-Wmissing-field-initializers"
 #pragma GCC diagnostic warning "-Wmissing-format-attribute"
 #pragma GCC diagnostic warning "-Wmissing-include-dirs"
 #pragma GCC diagnostic warning "-Wmissing-noreturn"
 #pragma GCC diagnostic warning "-Wmissing-profile"
 #pragma GCC diagnostic warning "-Wmultichar"
 #pragma GCC diagnostic warning "-Wmultistatement-macros"
 #pragma GCC diagnostic warning "-Wnonnull"
 #pragma GCC diagnostic warning "-Wnonnull-compare"
 #pragma GCC diagnostic warning "-Wnormalized"
 #pragma GCC diagnostic warning "-Wnull-dereference"
 #pragma GCC diagnostic warning "-Wodr"
 #pragma GCC diagnostic warning "-Wopenmp-simd"
 #pragma GCC diagnostic warning "-Woverflow"
 #pragma GCC diagnostic warning "-Woverlength-strings"
 #pragma GCC diagnostic warning "-Woverride-init-side-effects"
 #pragma GCC diagnostic warning "-Wpacked"
 #pragma GCC diagnostic warning "-Wpacked-bitfield-compat"
 #pragma GCC diagnostic warning "-Wpacked-not-aligned"
 #pragma GCC diagnostic warning "-Wpadded"
 #pragma GCC diagnostic warning "-Wparentheses"
 #pragma GCC diagnostic warning "-Wpointer-arith"
 #pragma GCC diagnostic warning "-Wpointer-compare"
 #pragma GCC diagnostic warning "-Wpointer-to-int-cast"
 #pragma GCC diagnostic warning "-Wprio-ctor-dtor"
 #pragma GCC diagnostic warning "-Wredundant-decls"
 #pragma GCC diagnostic warning "-Wrestrict"
 #pragma GCC diagnostic warning "-Wreturn-local-addr"
 #pragma GCC diagnostic warning "-Wreturn-type"
 #pragma GCC diagnostic warning "-Wscalar-storage-order"
 #pragma GCC diagnostic warning "-Wsequence-point"
 #pragma GCC diagnostic warning "-Wshadow"
 #pragma GCC diagnostic warning "-Wshadow-ivar"
 #pragma GCC diagnostic warning "-Wshift-count-negative"
 #pragma GCC diagnostic warning "-Wshift-count-overflow"
 #pragma GCC diagnostic warning "-Wshift-negative-value"
 #pragma GCC diagnostic warning "-Wshift-overflow=2"
 #pragma GCC diagnostic warning "-Wsign-compare"
 #pragma GCC diagnostic warning "-Wsign-conversion"
 #pragma GCC diagnostic warning "-Wsizeof-array-argument"
 #pragma GCC diagnostic warning "-Wsizeof-array-div"
 #pragma GCC diagnostic warning "-Wsizeof-pointer-div"
 #pragma GCC diagnostic warning "-Wsizeof-pointer-memaccess"
 #pragma GCC diagnostic warning "-Wstack-protector"
 #pragma GCC diagnostic warning "-Wstack-usage=256"
 #pragma GCC diagnostic warning "-Wstrict-aliasing"
 #pragma GCC diagnostic warning "-Wstrict-overflow"
 #pragma GCC diagnostic warning "-Wstring-compare"
 #pragma GCC diagnostic warning "-Wstringop-overflow"
 #pragma GCC diagnostic warning "-Wstringop-overread"
 #pragma GCC diagnostic warning "-Wstringop-truncation"
 #pragma GCC diagnostic warning "-Wsuggest-attribute=pure"
 #pragma GCC diagnostic warning "-Wsuggest-attribute=const"
 #pragma GCC diagnostic warning "-Wsuggest-attribute=noreturn"
 #pragma GCC diagnostic warning "-Wmissing-noreturn"
 #pragma GCC diagnostic warning "-Wsuggest-attribute=malloc"
 #pragma GCC diagnostic warning "-Wsuggest-attribute=format"
 #pragma GCC diagnostic warning "-Wmissing-format-attribute"
 #pragma GCC diagnostic warning "-Wsuggest-attribute=cold"
 #pragma GCC diagnostic warning "-Wswitch"
 #pragma GCC diagnostic warning "-Wswitch-bool"
 #pragma GCC diagnostic warning "-Wswitch-default"
 #pragma GCC diagnostic warning "-Wswitch-enum"
 #pragma GCC diagnostic warning "-Wswitch-outside-range"
 #pragma GCC diagnostic warning "-Wswitch-unreachable"
 #pragma GCC diagnostic warning "-Wsync-nand"
 #pragma GCC diagnostic warning "-Wsystem-headers"
 #pragma GCC diagnostic warning "-Wtautological-compare"
 #pragma GCC diagnostic warning "-Wtrampolines"
 #pragma GCC diagnostic warning "-Wtrigraphs"
 #pragma GCC diagnostic warning "-Wtsan"
 #pragma GCC diagnostic warning "-Wtype-limits"
 #pragma GCC diagnostic warning "-Wundef"
 #pragma GCC diagnostic warning "-Wuninitialized"
 #pragma GCC diagnostic warning "-Wunsuffixed-float-constants"
 #pragma GCC diagnostic warning "-Wunused"
 #pragma GCC diagnostic warning "-Wunused-but-set-parameter"
 #pragma GCC diagnostic warning "-Wunused-but-set-variable"
 #pragma GCC diagnostic warning "-Wunused-const-variable"
 #pragma GCC diagnostic warning "-Wunused-function"
 #pragma GCC diagnostic warning "-Wunused-label"
 #pragma GCC diagnostic warning "-Wunused-local-typedefs"
 #pragma GCC diagnostic warning "-Wunused-macros"
 #pragma GCC diagnostic warning "-Wunused-parameter"
 #pragma GCC diagnostic warning "-Wunused-result"
 #pragma GCC diagnostic warning "-Wunused-value"
 #pragma GCC diagnostic warning "-Wunused-variable"
 #pragma GCC diagnostic warning "-Wvarargs"
 #pragma GCC diagnostic warning "-Wvariadic-macros"
 #pragma GCC diagnostic warning "-Wvector-operation-performance"
 #pragma GCC diagnostic warning "-Wvla"
 #pragma GCC diagnostic warning "-Wvla-larger-than=1"
 #pragma GCC diagnostic warning "-Wvolatile-register-var"
 #pragma GCC diagnostic warning "-Wwrite-strings"
 #pragma GCC diagnostic warning "-Wzero-length-bounds"
 #pragma GCC diagnostic warning "-Wanalyzer-double-fclose"
 #pragma GCC diagnostic warning "-Wanalyzer-double-free"
 #pragma GCC diagnostic warning "-Wanalyzer-exposure-through-output-file"
 #pragma GCC diagnostic warning "-Wanalyzer-file-leak"
 #pragma GCC diagnostic warning "-Wanalyzer-free-of-non-heap"
 #pragma GCC diagnostic warning "-Wanalyzer-malloc-leak"
 #pragma GCC diagnostic warning "-Wanalyzer-mismatching-deallocation"
 #pragma GCC diagnostic warning "-Wanalyzer-null-argument"
 #pragma GCC diagnostic warning "-Wanalyzer-null-dereference"
 #pragma GCC diagnostic warning "-Wanalyzer-possible-null-argument"
 #pragma GCC diagnostic warning "-Wanalyzer-possible-null-dereference"
 #pragma GCC diagnostic warning "-Wanalyzer-shift-count-negative"
 #pragma GCC diagnostic warning "-Wanalyzer-shift-count-overflow"
 #pragma GCC diagnostic warning "-Wanalyzer-stale-setjmp-buffer"
 #pragma GCC diagnostic warning "-Wanalyzer-tainted-array-index"
 #pragma GCC diagnostic warning "-Wanalyzer-too-complex"
 #pragma GCC diagnostic warning "-Wanalyzer-unsafe-call-within-signal-handler"
 #pragma GCC diagnostic warning "-Wanalyzer-use-after-free"
 #pragma GCC diagnostic warning "-Wanalyzer-use-of-pointer-in-stale-stack-frame"
 #pragma GCC diagnostic warning "-Wanalyzer-write-to-const"
 #pragma GCC diagnostic warning "-Wanalyzer-write-to-string-literal"
 #pragma GCC diagnostic warning "-Wbad-function-cast"
 #pragma GCC diagnostic warning "-Wmissing-declarations"
 #pragma GCC diagnostic warning "-Wmissing-parameter-type"
 #pragma GCC diagnostic warning "-Wmissing-prototypes"
 #pragma GCC diagnostic warning "-Wnested-externs"
 #pragma GCC diagnostic warning "-Wold-style-declaration"
 #pragma GCC diagnostic warning "-Wold-style-definition"
 #pragma GCC diagnostic warning "-Wstrict-prototypes"
 #pragma GCC diagnostic warning "-Wtraditional"
 #pragma GCC diagnostic warning "-Wtraditional-conversion"
 #pragma GCC diagnostic warning "-Wdeclaration-after-statement"
 #pragma GCC diagnostic warning "-Wpointer-sign"


#if !defined(__clang__) || (__clang_major__ > 3)
 #pragma GCC diagnostic warning "-Wunknown-pragmas"
#endif
 #pragma GCC diagnostic warning "-Wunknown-warning-option"
#if !defined(__clang__) || (__clang_major__ > 3)
 #pragma GCC diagnostic warning "-Wpragmas"
#endif

#endif