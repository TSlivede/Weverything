#if defined(_MSC_VER)
 #pragma warning( push , 4 ) // set warning level to 4 

 #pragma warning( disable: 4619 ) // (level 3)|#pragma warning: there is no warning number '*number*'

 #pragma warning( default: 4061 ) // (level 4)|enumerator '*identifier*' in a switch of enum '*enumeration*' is not explicitly handled by a case label
 #pragma warning( default: 4062 ) // (level 4)|enumerator '*identifier*' in a switch of enum '*enumeration*' is not handled
 #pragma warning( default: 4165 ) // (level 1) | 'HRESULT' is being converted to 'bool'; are you sure this is what you want?
 #pragma warning( default: 4191 ) // (level 3)|'*operator*': unsafe conversion from '*type_of_expression*' to '*type_required*'
 #pragma warning( default: 4242 ) // (level 4)|'*identifier*': conversion from '*type1*' to '*type2*', possible loss of data
 #pragma warning( default: 4254 ) // (level 4)|'*operator*': conversion from '*type1*' to '*type2*', possible loss of data
 #pragma warning( default: 4255 ) // (level 4)|'*function*': no function prototype given: converting '()' to '(void)'
 #pragma warning( default: 4263 ) // (level 4)|'*function*': member function does not override any base class virtual member function
 #pragma warning( default: 4264 ) // (level 1)|'*virtual_function*': no override available for virtual member function from base '*class*'; function is hidden
 #pragma warning( default: 4265 ) // (level 3)|'*class*': class has virtual functions, but destructor is not virtual
 #pragma warning( default: 4266 ) // (level 4)|'*function*': no override available for virtual member function from base '*type*'; function is hidden
 #pragma warning( default: 4287 ) // (level 3)|'*operator*': unsigned/negative constant mismatch
 #pragma warning( default: 4289 ) // (level 4)|nonstandard extension used : '*var*' : loop control variable declared in the for-loop is used outside the for-loop scope
 #pragma warning( default: 4296 ) // (level 4)|'*operator*': expression is always false
 #pragma warning( default: 4339 ) // (level 4)|'*type*' : use of undefined type detected in CLR meta-data - use of this type may lead to a runtime exception
 #pragma warning( default: 4342 ) // (level 1)|behavior change: '*function*' called, but a member operator was called in previous versions
 #pragma warning( default: 4350 ) // (level 1)|behavior change: '*member1*' called instead of '*member2*'
 #pragma warning( default: 4355 ) // 'this' : used in base member initializer list
 #pragma warning( default: 4365 ) // (level 4)|'*action*': conversion from '*type_1*' to '*type_2*', signed/unsigned mismatch
 #pragma warning( default: 4370 ) // (level 3)|layout of class has changed from a previous version of the compiler due to better packing
 #pragma warning( default: 4371 ) // (level 3)|'*classname*': layout of class may have changed from a previous version of the compiler due to better packing of member '*member*'
 #pragma warning( default: 4388 ) // (level 4)|signed/unsigned mismatch
 #pragma warning( default: 4412 ) // (level 2)|'*function*': function signature contains type '*type*'; C++ objects are unsafe to pass between pure code and mixed or native
 #pragma warning( default: 4426 ) // (level 1)|optimization flags changed after including header, may be due to #pragma optimize() <sup>14.1</sup>
 #pragma warning( default: 4435 ) // (level 4)|'*class1*' : Object layout under /vd2 will change due to virtual base '*class2*'
 #pragma warning( default: 4437 ) // (level 4)|dynamic_cast from virtual base '*class1*' to '*class2*' could fail in some contexts
 #pragma warning( default: 4444 ) // (level 3)|top level '__unaligned' is not implemented in this context
 #pragma warning( default: 4464 ) // (level 4)|relative include path contains '..'
 #pragma warning( default: 4471 ) // (level 4)|a forward declaration of an unscoped enumeration must have an underlying type (int assumed) <sup>Perm</sup>
 #pragma warning( default: 4472 ) // (level 1)|'*identifier*' is a native enum: add an access specifier (private/public) to declare a managed enum
 #pragma warning( default: 4514 ) // (level 4)|'*function*': unreferenced inline function has been removed
 #pragma warning( default: 4536 ) // (level 4)|'type name': type-name exceeds meta-data limit of '*limit*' characters
 #pragma warning( default: 4545 ) // (level 1)|expression before comma evaluates to a function which is missing an argument list
 #pragma warning( default: 4546 ) // (level 1)|function call before comma missing argument list
 #pragma warning( default: 4547 ) // (level 1)|'*operator*': operator before comma has no effect; expected operator with side-effect
 #pragma warning( default: 4548 ) // (level 1)|expression before comma has no effect; expected expression with side-effect
 #pragma warning( default: 4549 ) // (level 1)|'*operator1*': operator before comma has no effect; did you intend '*operator2*'?
 #pragma warning( default: 4555 ) // (level 1)|expression has no effect; expected expression with side-effect
 #pragma warning( default: 4557 ) // (level 3)|'__assume' contains effect '*effect*'
 #pragma warning( default: 4571 ) // (level 4)|informational: catch(...) semantics changed since Visual C++ 7.1; structured exceptions (SEH) are no longer caught
 #pragma warning( default: 4574 ) // (level 4)|'*identifier*' is defined to be '0': did you mean to use '#if *identifier*'?
 #pragma warning( default: 4577 ) // (level 1)|'noexcept' used with no exception handling mode specified; termination on exception is not guaranteed. Specify /EHsc
 #pragma warning( default: 4582 ) // (level 4)|'*type*': constructor is not implicitly called
 #pragma warning( default: 4583 ) // (level 4)|'*type*': destructor is not implicitly called
 #pragma warning( default: 4587 ) // (level 1)|'*anonymous_structure*': behavior change: constructor is no longer implicitly called
 #pragma warning( default: 4588 ) // (level 1)|'*anonymous_structure*': behavior change: destructor is no longer implicitly called
 #pragma warning( default: 4596 ) // (level 4)|'*identifier*': illegal qualified name in member declaration <sup>14.3</sup> <sup>Perm</sup>
 #pragma warning( default: 4598 ) // (level 1 and level 3)|'#include "*header*"': header number *header-number* in the precompiled header does not match current compilation at that position <sup>14.3</sup>
 #pragma warning( default: 4599 ) // (level 3)|'*option* *path*': command-line argument number *number* does not match pre-compiled header <sup>14.3</sup>
 #pragma warning( default: 4605 ) // (level 1)|'/D*macro*' specified on current command line, but was not specified when precompiled header was built
 #pragma warning( default: 4608 ) // (level 3)|'*union_member*' has already been initialized by another union member in the initializer list, '*union_member*' <sup>Perm</sup>
 #pragma warning( default: 4623 ) // (level 4)|'derived class': default constructor could not be generated because a base class default constructor is inaccessible
 #pragma warning( default: 4625 ) // (level 4)|'derived class': copy constructor could not be generated because a base class copy constructor is inaccessible
 #pragma warning( default: 4626 ) // (level 4)|'derived class': assignment operator could not be generated because a base class assignment operator is inaccessible
 #pragma warning( default: 4628 ) // (level 1)|digraphs not supported with -Ze. Character sequence '*digraph*' not interpreted as alternate token for '*char*'
 #pragma warning( default: 4640 ) // (level 3)|'*instance*': construction of local static object is not thread-safe
 #pragma warning( default: 4643 ) // (level 4) | Forward declaring '*identifier*' in namespace std is not permitted by the C++ Standard. <sup>15.8</sup>
 #pragma warning( default: 4647 ) // (level 3)|behavior change: __is_pod(*type*) has different value in previous versions
 #pragma warning( default: 4654 ) // (level 4)|Code placed before include of precompiled header line will be ignored. Add code to precompiled header. <sup>14.1</sup>
 #pragma warning( default: 4668 ) // (level 4)|'*symbol*' is not defined as a preprocessor macro, replacing with '0' for '*directives*'
 #pragma warning( default: 4682 ) // (level 4)|'*symbol*' : no directional parameter attribute specified, defaulting to [in]
 #pragma warning( default: 4686 ) // (level 3)|'*user-defined type*': possible change in behavior, change in UDT return calling convention
 #pragma warning( default: 4692 ) // (level 1)|'*function*': signature of non-private member contains assembly private native type '*native_type*'
 #pragma warning( default: 4710 ) // (level 4)|'*function*': function not inlined
 #pragma warning( default: 4738 ) // (level 3)|storing 32-bit float result in memory, possible loss of performance
 #pragma warning( default: 4746 ) // volatile access of '*expression*' is subject to /volatile:\<iso&#124;ms> setting; consider using __iso_volatile_load/store intrinsic functions
 #pragma warning( default: 4749 ) // (level 4)|conditionally supported: offsetof applied to non-standard-layout type '*type*'
 #pragma warning( default: 4767 ) // (level 4)|section name '*symbol*' is longer than 8 characters and will be truncated by the linker
 #pragma warning( default: 4768 ) // (level 3)|__declspec attributes before linkage specification are ignored
 #pragma warning( default: 4774 ) // (level 4)|'*string*' : format string expected in argument *number* is not a string literal
 #pragma warning( default: 4777 ) // (level 4)|'*function*' : format string '*string*' requires an argument of type '*type1*', but variadic argument *number* has type '*type2*'
 #pragma warning( default: 4786 ) // (level 3)|'*symbol*' : object name was truncated to '*number*' characters in the debug information
 #pragma warning( default: 4800 ) // (level 4) | Implicit conversion from '*type*' to bool. Possible information loss <sup>16.0</sup>
 #pragma warning( default: 4820 ) // (level 4)|'*bytes*' bytes padding added after construct '*member_name*'
 #pragma warning( default: 4822 ) // (level 1) | '*member*': local class member function does not have a body
 #pragma warning( default: 4826 ) // (level 2)|Conversion from '*type1*' to '*type2*' is sign-extended. This may cause unexpected runtime behavior.
 #pragma warning( default: 4837 ) // (level 4)|trigraph detected: '??*character*' replaced by '*character*'
 #pragma warning( default: 4841 ) // (level 4)|non-standard extension used: compound member designator used in offsetof
 #pragma warning( default: 4842 ) // (level 4)|the result of 'offsetof' applied to a type using multiple inheritance is not guaranteed to be consistent between compiler releases
 #pragma warning( default: 4868 ) // (level 4)|'_file_(*line_number*)' compiler may not enforce left-to-right evaluation order in braced initialization list
 #pragma warning( default: 4905 ) // (level 1)|wide string literal cast to 'LPSTR'
 #pragma warning( default: 4906 ) // (level 1)|string literal cast to 'LPWSTR'
 #pragma warning( default: 4917 ) // (level 1)|'*declarator*': a GUID can only be associated with a class, interface, or namespace
 #pragma warning( default: 4928 ) // (level 1)|illegal copy-initialization; more than one user-defined conversion has been implicitly applied
 #pragma warning( default: 4931 ) // (level 4)|we are assuming the type library was built for number-bit pointers
 #pragma warning( default: 4946 ) // (level 1)|reinterpret_cast used between related classes: '*class1*' and '*class2*'
 #pragma warning( default: 4962 ) // '*function*': profile-guided optimizations disabled because optimizations caused profile data to become inconsistent
 #pragma warning( default: 4986 ) // (level 4)|'*symbol*': exception specification does not match previous declaration
 #pragma warning( default: 4987 ) // (level 4)|nonstandard extension used: 'throw (...)'
 #pragma warning( default: 4988 ) // (level 4)|'*symbol*': variable declared outside class/function scope
 #pragma warning( default: 5022 ) // '*type*': multiple move constructors specified
 #pragma warning( default: 5023 ) // '*type*': multiple move assignment operators specified
 #pragma warning( default: 5024 ) // (level 4)|'*type*': move constructor was implicitly defined as deleted
 #pragma warning( default: 5025 ) // (level 4)|'*type*': move assignment operator was implicitly defined as deleted
 #pragma warning( default: 5026 ) // (level 1 and level 4)|'*type*': move constructor was implicitly defined as deleted
 #pragma warning( default: 5027 ) // (level 1 and level 4)|'*type*': move assignment operator was implicitly defined as deleted
 #pragma warning( default: 5029 ) // (level 4)|nonstandard extension used: alignment attributes in C++ apply to variables, data members and tag types only
 #pragma warning( default: 5031 ) // (level 4)|#pragma warning(pop): likely mismatch, popping warning state pushed in different file <sup>14.1</sup>
 #pragma warning( default: 5032 ) // (level 4)|detected #pragma warning(push) with no corresponding #pragma warning(pop) <sup>14.1</sup>
 #pragma warning( default: 5034 ) // use of intrinsic '*intrinsic*' causes function *function-name* to be compiled as guest code <sup>15.3</sup>
 #pragma warning( default: 5035 ) // use of feature '*feature*' causes function *function-name* to be compiled as guest code <sup>15.3</sup>
 #pragma warning( default: 5036 ) // (level 1)|varargs function pointer conversion when compiling with /hybrid:x86arm64 '*type1*' to '*type2*' <sup>15.3</sup>
 #pragma warning( default: 5038 ) // (level 4)|data member '*member1*' will be initialized after data member '*member2*' <sup>15.3</sup>
 #pragma warning( default: 5039 ) // (level 4)|'*function*': pointer or reference to potentially throwing function passed to extern C function under -EHc. Undefined behavior may occur if this function throws an exception. <sup>15.5</sup>
 #pragma warning( default: 5042 ) // (level 3)|'*function*': function declarations at block scope cannot be specified 'inline' in standard C++; remove 'inline' specifier <sup>15.5</sup>
 #pragma warning( default: 5045 ) // Compiler will insert Spectre mitigation for memory load if /Qspectre switch specified <sup>15.7</sup>
 #pragma warning( default: 4302 ) // (level 2)|'*conversion*': truncation from '*type1*' to '*type2*'
 #pragma warning( default: 4311 ) // (level 1)|'*variable*' : pointer truncation from '*type*' to '*type*'
 #pragma warning( default: 4312 ) // (level 1)|'*operation*' : conversion from '*type1*' to '*type2*' of greater size
 #pragma warning( default: 4319 ) // (level 1)|'*operator*': zero extending '*type1*' to '*type2*' of greater size
 #pragma warning( default: 4431 ) // (level 4)|missing type specifier - int assumed. Note: C no longer supports default-int

 #pragma warning( default: 4619 ) // (level 3)|#pragma warning: there is no warning number '*number*'
#endif //defined(_MSC_VER)

#if defined(__GNUC__) && !( defined(__ICC) && __ICC < 1600 )/*explicitly exclude older versions of ICC*/

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


