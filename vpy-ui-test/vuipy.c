
#ifndef V_COMMIT_HASH
	#define V_COMMIT_HASH "6271798"
#endif

#ifndef V_CURRENT_COMMIT_HASH
	#define V_CURRENT_COMMIT_HASH "6271798"
#endif

// V comptime_defines:

// V typedefs:

typedef struct {
	void* _object;
	int _interface_idx;
} _Interface;

typedef struct strings__Builder strings__Builder;
typedef struct strconv__BF_param strconv__BF_param;
typedef struct strconv__PrepNumber strconv__PrepNumber;
typedef struct strconv__Dec32 strconv__Dec32;
typedef struct strconv__Dec64 strconv__Dec64;
typedef struct strconv__Uint128 strconv__Uint128;
typedef union strconv__Uf32 strconv__Uf32;
typedef union strconv__Uf64 strconv__Uf64;
typedef union strconv__Float64u strconv__Float64u;
typedef struct array array;
typedef struct VAssertMetaInfo VAssertMetaInfo;
typedef struct MethodArgs MethodArgs;
typedef struct FunctionData FunctionData;
typedef struct FieldData FieldData;
typedef struct DenseArray DenseArray;
typedef struct map map;
typedef struct OptionBase OptionBase;
typedef struct Option Option;
typedef struct SortedMap SortedMap;
typedef struct mapnode mapnode;
typedef struct string string;
typedef struct ustring ustring;
typedef struct RepIndex RepIndex;
typedef struct os__File os__File;
typedef struct os__FileInfo os__FileInfo;
typedef struct os__FilePermission os__FilePermission;
typedef struct os__FileMode os__FileMode;
typedef struct os__Result os__Result;
typedef struct os__Uname os__Uname;
typedef struct os__Command os__Command;
typedef struct eventbus__Publisher eventbus__Publisher;
typedef struct eventbus__Subscriber eventbus__Subscriber;
typedef struct eventbus__Registry eventbus__Registry;
typedef struct eventbus__EventHandler eventbus__EventHandler;
typedef struct eventbus__EventBus eventbus__EventBus;
typedef struct time__StopWatchOptions time__StopWatchOptions;
typedef struct time__StopWatch time__StopWatch;
typedef struct time__Time time__Time;
typedef struct sokol__sapp__Event sokol__sapp__Event;
typedef struct sokol__gfx__DepthLayers sokol__gfx__DepthLayers;
typedef struct stbi__Image stbi__Image;
typedef struct gx__Color gx__Color;
typedef struct gx__Image gx__Image;
typedef struct gx__TextCfg gx__TextCfg;
typedef struct rand__wyrand__WyRandRNG rand__wyrand__WyRandRNG;
typedef struct gg__Config gg__Config;
typedef struct gg__Context gg__Context;
typedef struct gg__Size gg__Size;
typedef struct gg__Image gg__Image;
typedef struct gg__FT gg__FT;
typedef struct gg__FTConfig gg__FTConfig;
typedef struct rand__PRNGConfigStruct rand__PRNGConfigStruct;
typedef struct sync__Subscription sync__Subscription;
typedef struct sync__Channel sync__Channel;
typedef struct sync__PoolProcessor sync__PoolProcessor;
typedef struct sync__PoolProcessorConfig sync__PoolProcessorConfig;
typedef struct sync__SResult sync__SResult;
typedef struct sync__IResult sync__IResult;
typedef struct sync__Mutex sync__Mutex;
typedef struct sync__RwMutex sync__RwMutex;
typedef struct sync__RwMutexAttr sync__RwMutexAttr;
typedef struct sync__PosixSemaphore sync__PosixSemaphore;
typedef struct sync__Semaphore sync__Semaphore;
typedef struct sync__Waiter sync__Waiter;
typedef struct sync__WaitGroup sync__WaitGroup;
typedef struct clipboard__Clipboard clipboard__Clipboard;
typedef struct clipboard__Property clipboard__Property;
typedef struct ui__ButtonConfig ui__ButtonConfig;
typedef struct ui__Button ui__Button;
typedef struct ui__Canvas ui__Canvas;
typedef struct ui__CanvasConfig ui__CanvasConfig;
typedef struct ui__CheckBox ui__CheckBox;
typedef struct ui__CheckBoxConfig ui__CheckBoxConfig;
typedef struct ui__ColumnConfig ui__ColumnConfig;
typedef struct ui__EventNames ui__EventNames;
typedef struct ui__Dropdown ui__Dropdown;
typedef struct ui__DropdownConfig ui__DropdownConfig;
typedef struct ui__DropdownItem ui__DropdownItem;
typedef struct ui__Group ui__Group;
typedef struct ui__GroupConfig ui__GroupConfig;
typedef struct ui__KeyEvent ui__KeyEvent;
typedef struct ui__Label ui__Label;
typedef struct ui__LabelConfig ui__LabelConfig;
typedef struct ui__ListBoxConfig ui__ListBoxConfig;
typedef struct ui__ListBox ui__ListBox;
typedef struct ui__ListItem ui__ListItem;
typedef struct ui__Menu ui__Menu;
typedef struct ui__MenuConfig ui__MenuConfig;
typedef struct ui__MenuItem ui__MenuItem;
typedef struct ui__Picture ui__Picture;
typedef struct ui__PictureConfig ui__PictureConfig;
typedef struct ui__ProgressBar ui__ProgressBar;
typedef struct ui__ProgressBarConfig ui__ProgressBarConfig;
typedef struct ui__Radio ui__Radio;
typedef struct ui__RadioConfig ui__RadioConfig;
typedef struct ui__Rectangle ui__Rectangle;
typedef struct ui__RectangleConfig ui__RectangleConfig;
typedef struct ui__RowConfig ui__RowConfig;
typedef struct ui__Slider ui__Slider;
typedef struct ui__SliderConfig ui__SliderConfig;
typedef struct ui__StackConfig ui__StackConfig;
typedef struct ui__Stack ui__Stack;
typedef struct ui__Switch ui__Switch;
typedef struct ui__SwitchConfig ui__SwitchConfig;
typedef struct ui__TextBox ui__TextBox;
typedef struct ui__TextBoxConfig ui__TextBoxConfig;
typedef struct ui__Transition ui__Transition;
typedef struct ui__TransitionConfig ui__TransitionConfig;
typedef struct ui__UI ui__UI;
typedef struct ui__MarginConfig ui__MarginConfig;
typedef struct ui__MouseEvent ui__MouseEvent;
typedef struct ui__ScrollEvent ui__ScrollEvent;
typedef struct ui__MouseMoveEvent ui__MouseMoveEvent;
typedef struct ui__MessageApp ui__MessageApp;
typedef struct ui__Window ui__Window;
typedef struct ui__WindowConfig ui__WindowConfig;
typedef struct vuipy__App vuipy__App;
typedef struct varg_voidptr varg_voidptr;
typedef struct varg_string varg_string;
typedef struct varg_int varg_int;
typedef struct varg_clipboard__AtomType varg_clipboard__AtomType;

// V typedefs2:
typedef struct Option_int Option_int;
typedef struct Option_string Option_string;
typedef struct Option_array_byte Option_array_byte;
typedef struct Option_FILE_ptr Option_FILE_ptr;
typedef struct Option_void Option_void;
typedef struct Option_array_string Option_array_string;
typedef struct Option_bool Option_bool;
typedef struct Option_array_ustring Option_array_ustring;
typedef struct Option_os__File Option_os__File;
typedef struct Option_os__Result Option_os__Result;
typedef struct Option_time__Time Option_time__Time;
typedef struct Option_stbi__Image Option_stbi__Image;
typedef struct Option_gg__FT_ptr Option_gg__FT_ptr;
typedef struct Option_multi_return_string_string Option_multi_return_string_string;

// V cheaders:
// Generated by the V compiler

#if defined(__has_include)

#if __has_include(<inttypes.h>)
#include <inttypes.h>
#else
#error VERROR_MESSAGE The C compiler can not find <inttypes.h> . Please install build-essentials
#endif

#else
#include <inttypes.h>
#endif


//================================== builtin types ================================*/
typedef int64_t i64;
typedef int16_t i16;
typedef int8_t i8;
typedef uint64_t u64;
typedef uint32_t u32;
typedef uint16_t u16;
typedef uint8_t byte;
typedef uint32_t rune;
typedef float f32;
typedef double f64;
typedef int64_t any_int;
typedef double any_float;
typedef unsigned char* byteptr;
typedef void* voidptr;
typedef char* charptr;
typedef byte array_fixed_byte_300 [300];

typedef struct sync__Channel* chan;

#ifndef __cplusplus
	#ifndef bool
		typedef int bool;
		#define true 1
		#define false 0
	#endif
#endif


// c_headers
typedef int (*qsort_callback_func)(const void*, const void*);
#include <stdio.h>  // TODO remove all these includes, define all function signatures and types manually
#include <stdlib.h>

#ifdef __cplusplus
	#include <utility>
	#define _MOV std::move
#else
	#define _MOV
#endif

#ifndef _WIN32
	#if defined __has_include
		#if __has_include (<execinfo.h>)
			#include <execinfo.h>
		#else
			// Most probably musl OR __ANDROID__ ...
			int backtrace (void **__array, int __size) { return 0; }
			char **backtrace_symbols (void *const *__array, int __size){ return 0; }
			void backtrace_symbols_fd (void *const *__array, int __size, int __fd){}
		#endif
	#endif
#endif

//#include "fns.h"
#include <signal.h>
#include <stdarg.h> // for va_list
#include <string.h> // memcpy

#if INTPTR_MAX == INT32_MAX
	#define TARGET_IS_32BIT 1
#elif INTPTR_MAX == INT64_MAX
	#define TARGET_IS_64BIT 1
#else
	#error "The environment is not 32 or 64-bit."
#endif

#if defined(__BYTE_ORDER__) && __BYTE_ORDER__ == __ORDER_BIG_ENDIAN__ || defined(__BYTE_ORDER) && __BYTE_ORDER == __BIG_ENDIAN || defined(__BIG_ENDIAN__) || defined(__ARMEB__) || defined(__THUMBEB__) || defined(__AARCH64EB__) || defined(_MIBSEB) || defined(__MIBSEB) || defined(__MIBSEB__)
	#define TARGET_ORDER_IS_BIG
#elif defined(__BYTE_ORDER__) && __BYTE_ORDER__ == __ORDER_LITTLE_ENDIAN__ || defined(__BYTE_ORDER) && __BYTE_ORDER == __LITTLE_ENDIAN || defined(__LITTLE_ENDIAN__) || defined(__ARMEL__) || defined(__THUMBEL__) || defined(__AARCH64EL__) || defined(_MIPSEL) || defined(__MIPSEL) || defined(__MIPSEL__) || defined(_M_AMD64) || defined(_M_X64) || defined(_M_IX86)
	#define TARGET_ORDER_IS_LITTLE
#else
	#error "Unknown architecture endianness"
#endif

#ifndef _WIN32
	#include <ctype.h>
	#include <locale.h> // tolower
	#include <sys/time.h>
	#include <unistd.h> // sleep
	extern char **environ;
#endif

#if defined(__CYGWIN__) && !defined(_WIN32)
	#error Cygwin is not supported, please use MinGW or Visual Studio.
#endif

#ifdef __linux__
	#include <sys/types.h>
	#include <sys/wait.h> // os__wait uses wait on nix
#endif

#ifdef __FreeBSD__
	#include <sys/types.h>
	#include <sys/wait.h> // os__wait uses wait on nix
#endif

#ifdef __DragonFly__
	#include <sys/types.h>
	#include <sys/wait.h> // os__wait uses wait on nix
#endif

#ifdef __OpenBSD__
	#include <sys/types.h>
	#include <sys/resource.h>
	#include <sys/wait.h> // os__wait uses wait on nix
#endif

#ifdef __NetBSD__
	#include <sys/wait.h> // os__wait uses wait on nix
#endif

#ifdef __sun
	#include <sys/types.h>
	#include <sys/wait.h> // os__wait uses wait on nix
#endif


#define EMPTY_STRUCT_DECLARATION
#define EMPTY_STRUCT_INITIALIZATION 0
// Due to a tcc bug, the length of an array needs to be specified, but GCC crashes if it is...
#define EMPTY_ARRAY_OF_ELEMS(x,n) (x[])
#define TCCSKIP(x) x

#define __NOINLINE __attribute__((noinline))
#define __IRQHANDLER __attribute__((interrupt))

#if defined(__x86_64__)
#define __V_amd64  1
#endif
#if defined(__aarch64__) || defined(__arm64__)
#define __V_aarch64  1
#endif

// Using just __GNUC__ for detecting gcc, is not reliable because other compilers define it too:
#ifdef __GNUC__
	#define __V_GCC__
#endif
#ifdef __TINYC__
	#undef __V_GCC__
#endif
#ifdef __cplusplus
	#undef __V_GCC__
#endif
#ifdef __clang__
	#undef __V_GCC__
#endif
#ifdef _MSC_VER
	#undef __V_GCC__
#endif

#ifdef __TINYC__
	#undef EMPTY_STRUCT_DECLARATION
	#undef EMPTY_STRUCT_INITIALIZATION
	#define EMPTY_STRUCT_DECLARATION char _dummy
	#define EMPTY_STRUCT_INITIALIZATION 0
	#undef EMPTY_ARRAY_OF_ELEMS
	#define EMPTY_ARRAY_OF_ELEMS(x,n) (x[n])
	#undef __NOINLINE
	#undef __IRQHANDLER
	// tcc does not support inlining at all
	#define __NOINLINE
	#define __IRQHANDLER
	#undef TCCSKIP
	#define TCCSKIP(x)
	// #include <byteswap.h>
	#ifndef _WIN32
		#include <execinfo.h>
		int tcc_backtrace(const char *fmt, ...);
	#endif
#endif

// for __offset_of
#ifndef __offsetof
	#define __offsetof(s,memb) ((size_t)((char *)&((s *)0)->memb - (char *)0))
#endif

#define OPTION_CAST(x) (x)

#ifndef V64_PRINTFORMAT
	#ifdef PRIx64
		#define V64_PRINTFORMAT "0x%"PRIx64
	#elif defined(__WIN32__)
		#define V64_PRINTFORMAT "0x%I64x"
	#elif defined(__linux__) && defined(__LP64__)
		#define V64_PRINTFORMAT "0x%lx"
	#else
		#define V64_PRINTFORMAT "0x%llx"
	#endif
#endif


#ifdef _WIN32
	#define WINVER 0x0600
	#ifdef _WIN32_WINNT
		#undef _WIN32_WINNT
	#endif
	#define _WIN32_WINNT 0x0600
	#define WIN32_LEAN_AND_MEAN
	#ifndef _UNICODE
	#define _UNICODE
	#endif
	#ifndef UNICODE
	#define UNICODE
	#endif
	#include <windows.h>

	#include <io.h> // _waccess
	#include <direct.h> // _wgetcwd
	//#include <WinSock2.h>

	#ifdef _MSC_VER
		// On MSVC these are the same (as long as /volatile:ms is passed)
		#define _Atomic volatile

		// MSVC cannot parse some things properly
		#undef EMPTY_STRUCT_DECLARATION
		#undef OPTION_CAST

		#define EMPTY_STRUCT_DECLARATION int ____dummy_variable
		#define OPTION_CAST(x)
		#undef __NOINLINE
		#undef __IRQHANDLER
		#define __NOINLINE __declspec(noinline)
		#define __IRQHANDLER __declspec(naked)

		#include <dbghelp.h>
		#pragma comment(lib, "Dbghelp.lib")

		extern wchar_t **_wenviron;
	#elif !defined(SRWLOCK_INIT)
		// these seem to be missing on Windows tcc
		typedef struct SRWLOCK { void* SRWLOCK; } SRWLOCK;
		void InitializeSRWLock(void*);
		void AcquireSRWLockShared(void*);
		void AcquireSRWLockExclusive(void*);
		void ReleaseSRWLockShared(void*);
		void ReleaseSRWLockExclusive(void*);
	#endif
#else
	#include <pthread.h>
	#ifndef PTHREAD_RWLOCK_PREFER_WRITER_NONRECURSIVE_NP
		// musl does not have that
		#define pthread_rwlockattr_setkind_np(a, b)
	#endif
#endif

// g_live_info is used by live.info()
void* g_live_info = NULL;

//============================== HELPER C MACROS =============================*/
//#define tos4(s, slen) ((string){.str=(s), .len=(slen)})
#define _SLIT(s) ((string){.str=(byteptr)(s), .len=(strlen(s))})
#define _PUSH_MANY(arr, val, tmp, tmp_typ) {tmp_typ tmp = (val); array_push_many(arr, tmp.data, tmp.len);}
#define _IN(typ, val, arr) array_##typ##_contains(arr, val)
#define _IN_MAP(val, m) map_exists(m, val)

// these macros have corresponding implementations in builtin/int.v with different signedness
#define array_i8_contains(a, b) array_byte_contains(a, (byte)(b))
#define array_i16_contains(a, b) array_u16_contains(a, (u16)(b))
#define array_u32_contains(a, b) array_int_contains(a, (int)(b))
#define array_i64_contains(a, b) array_u64_contains(a, (u64)(b))
#define array_rune_contains(a, b) array_int_contains(a, (int)(b))
#define array_f32_contains(a, b) array_int_contains(a, *(int*)&((f32[]){(b)}))
#define array_f64_contains(a, b) array_u64_contains(a, *(u64*)&((f64[]){(b)}))
#ifdef TARGET_IS_64BIT
#define array_voidptr_contains(a, b) array_u64_contains(a, (u64)(b))
#else
#define array_voidptr_contains(a, b) array_int_contains(a, (int)(b))
#endif

// unsigned/signed comparisons
static inline bool _us32_gt(uint32_t a, int32_t b) { return a > INT32_MAX || (int32_t)a > b; }
static inline bool _us32_ge(uint32_t a, int32_t b) { return a >= INT32_MAX || (int32_t)a >= b; }
static inline bool _us32_eq(uint32_t a, int32_t b) { return a <= INT32_MAX && (int32_t)a == b; }
static inline bool _us32_ne(uint32_t a, int32_t b) { return a > INT32_MAX || (int32_t)a != b; }
static inline bool _us32_le(uint32_t a, int32_t b) { return a <= INT32_MAX && (int32_t)a <= b; }
static inline bool _us32_lt(uint32_t a, int32_t b) { return a < INT32_MAX && (int32_t)a < b; }
static inline bool _us64_gt(uint64_t a, int64_t b) { return a > INT64_MAX || (int64_t)a > b; }
static inline bool _us64_ge(uint64_t a, int64_t b) { return a >= INT64_MAX || (int64_t)a >= b; }
static inline bool _us64_eq(uint64_t a, int64_t b) { return a <= INT64_MAX && (int64_t)a == b; }
static inline bool _us64_ne(uint64_t a, int64_t b) { return a > INT64_MAX || (int64_t)a != b; }
static inline bool _us64_le(uint64_t a, int64_t b) { return a <= INT64_MAX && (int64_t)a <= b; }
static inline bool _us64_lt(uint64_t a, int64_t b) { return a < INT64_MAX && (int64_t)a < b; }

#if defined(__MINGW32__) || defined(__MINGW64__) || (defined(_WIN32) && defined(__TINYC__))
	#undef PRId64
	#undef PRIi64
	#undef PRIo64
	#undef PRIu64
	#undef PRIx64
	#undef PRIX64
	#define PRId64 "lld"
	#define PRIi64 "lli"
	#define PRIo64 "llo"
	#define PRIu64 "llu"
	#define PRIx64 "llx"
	#define PRIX64 "llX"
#endif

//================================== GLOBALS =================================*/
//byte g_str_buf[1024];
byte* g_str_buf;
int load_so(byteptr);
void reload_so();
void _vinit();
void _vcleanup();
#define sigaction_size sizeof(sigaction);
#define _ARR_LEN(a) ( (sizeof(a)) / (sizeof(a[0])) )

// ============== wyhash ==============
//Author: Wang Yi
#ifndef wyhash_version_gamma
	#define wyhash_version_gamma
	#define WYHASH_CONDOM 0
	#include <stdint.h>
	#include <string.h>
	#if defined(_MSC_VER) && defined(_M_X64)
		#include <intrin.h>
		#pragma intrinsic(_umul128)
	#endif

	//const uint64_t _wyp0=0xa0761d6478bd642full, _wyp1=0xe7037ed1a0b428dbull;
	#define _wyp0 ((uint64_t)0xa0761d6478bd642full)
	#define _wyp1 ((uint64_t)0xe7037ed1a0b428dbull)

	#if defined(__GNUC__) || defined(__INTEL_COMPILER) || defined(__clang__) || defined(__TINYC__)
		#define _likely_(x) __builtin_expect(x, 1)
		#define _unlikely_(x) __builtin_expect((x), 0)
	#else
		#define _likely_(x) (x)
		#define _unlikely_(x) (x)
	#endif

	#if defined(TARGET_ORDER_IS_LITTLE)
		#define WYHASH_LITTLE_ENDIAN 1
	#elif defined(TARGET_ORDER_IS_BIG)
		#define WYHASH_LITTLE_ENDIAN 0
	#endif

	#if (WYHASH_LITTLE_ENDIAN)
		static inline uint64_t _wyr8(const uint8_t *p) { uint64_t v; memcpy(&v, p, 8); return v;}
		static inline uint64_t _wyr4(const uint8_t *p) { unsigned v; memcpy(&v, p, 4); return v;}
	#else
		#if defined(__GNUC__) || defined(__INTEL_COMPILER) || defined(__clang__)
			static inline uint64_t _wyr8(const uint8_t *p) { uint64_t v; memcpy(&v, p, 8); return __builtin_bswap64(v);}
			static inline uint64_t _wyr4(const uint8_t *p) { unsigned v; memcpy(&v, p, 4); return __builtin_bswap32(v);}
		#elif defined(_MSC_VER)
			static inline uint64_t _wyr8(const uint8_t *p) { uint64_t v; memcpy(&v, p, 8); return _byteswap_uint64(v);}
			static inline uint64_t _wyr4(const uint8_t *p) { unsigned v; memcpy(&v, p, 4); return _byteswap_ulong(v);}
		#elif defined(__TINYC__)
			static inline uint64_t _wyr8(const uint8_t *p) { uint64_t v; memcpy(&v, p, 8); return bswap_64(v);}
			static inline uint64_t _wyr4(const uint8_t *p) { unsigned v; memcpy(&v, p, 4); return bswap_32(v);}
		#endif
	#endif

	static inline uint64_t _wyr3(const uint8_t *p, unsigned k) { return (((uint64_t)p[0]) << 16) | (((uint64_t)p[k >> 1]) << 8) | p[k - 1];}
	static inline uint64_t _wyrotr(uint64_t v, unsigned k) { return (v >> k) | (v << (64 - k));}
	static inline void _wymix128(uint64_t A, uint64_t B, uint64_t *C, uint64_t *D){
		A^=*C;	B^=*D;
	#ifdef UNOFFICIAL_WYHASH_32BIT
		uint64_t hh=(A>>32)*(B>>32), hl=(A>>32)*(unsigned)B, lh=(unsigned)A*(B>>32), ll=(uint64_t)(unsigned)A*(unsigned)B;
		*C=_wyrotr(hl,32)^hh; *D=_wyrotr(lh,32)^ll;
	#else
		#ifdef __SIZEOF_INT128__
			__uint128_t r=A; r*=B; *C=(uint64_t)r; *D=(uint64_t)(r>>64);
		#elif defined(_MSC_VER) && defined(_M_X64)
			A=_umul128(A,B,&B); *C=A; *D=B;
		#else
			uint64_t ha=A>>32, hb=B>>32, la=(uint32_t)A, lb=(uint32_t)B, hi, lo;
			uint64_t rh=ha*hb, rm0=ha*lb, rm1=hb*la, rl=la*lb, t=rl+(rm0<<32), c=t<rl;
			lo=t+(rm1<<32); c+=lo<t; hi=rh+(rm0>>32)+(rm1>>32)+c;
			*C=lo;	*D=hi;
		#endif
	#endif
	}
	static inline uint64_t wyhash(const void *key, uint64_t len, uint64_t seed){
		const uint8_t *p=(const uint8_t *)key;
		uint64_t i=len, see1=seed;
		start:
		if (_likely_(i<=16)) {
	#ifndef	WYHASH_CONDOM
			uint64_t shift = (i<8)*((8-i)<<3);
			//WARNING: intended reading outside buffer, trading for speed.
			_wymix128((_wyr8(p)<<shift)^_wyp0, (_wyr8(p+i-8)>>shift)^_wyp1, &seed, &see1);
	#else
			if (_likely_(i<=8)) {
				if (_likely_(i>=4)) _wymix128(_wyr4(p)^_wyp0,_wyr4(p+i-4)^_wyp1, &seed, &see1);
				else if (_likely_(i)) _wymix128(_wyr3(p,i)^_wyp0,_wyp1, &seed, &see1);
				else _wymix128(_wyp0,_wyp1, &seed, &see1);
			}
			else _wymix128(_wyr8(p)^_wyp0,_wyr8(p+i-8)^_wyp1, &seed, &see1);
	#endif
			_wymix128(len,_wyp0, &seed, &see1);
			return	seed^see1;
		}
		_wymix128(_wyr8(p)^_wyp0,_wyr8(p+8)^_wyp1, &seed, &see1);
		i-=16;	p+=16;	goto start;
	}
	static inline uint64_t wyhash64(uint64_t A, uint64_t B){
		_wymix128(_wyp0,_wyp1,&A,&B);
		_wymix128(0,0,&A,&B);
		return	A^B;
	}
	static inline uint64_t wyrand(uint64_t *seed){
		*seed+=_wyp0;
		uint64_t	a=0, b=0;
		_wymix128(*seed,*seed^_wyp1,&a,&b);
		return	a^b;
	}
	static inline double wy2u01(uint64_t r) {
		const double _wynorm=1.0/(1ull<<52);
		return (r>>12)*_wynorm;
	}
	static inline double wy2gau(uint64_t r) {
		const double _wynorm=1.0/(1ull<<20);
		return ((r&0x1fffff)+((r>>21)&0x1fffff)+((r>>42)&0x1fffff))*_wynorm-3.0;
	}
#endif

voidptr memdup(voidptr src, int sz);
voidptr memfreedup(voidptr ptr, voidptr src, int sz) {
	free(ptr);
	return memdup(src, sz);
}


// V includes:
// added by module `builtin`:

#if defined(__has_include)

#if __has_include(<float.h>)
#include <float.h>
#else
#error VERROR_MESSAGE Header file <float.h>, needed for module `builtin` was not found. Please install the corresponding development headers.
#endif

#else
#include <float.h>
#endif

// added by module `os`:

#if defined(__has_include)

#if __has_include(<sys/stat.h>)
#include <sys/stat.h>
#else
#error VERROR_MESSAGE Header file <sys/stat.h>, needed for module `os` was not found. Please install the corresponding development headers.
#endif

#else
#include <sys/stat.h>
#endif

// added by module `os`:
#include <errno.h>
// added by module `os`:

#if defined(__has_include)

#if __has_include(<dirent.h>)
#include <dirent.h>
#else
#error VERROR_MESSAGE Header file <dirent.h>, needed for module `os` was not found. Please install the corresponding development headers.
#endif

#else
#include <dirent.h>
#endif

// added by module `os`:

#if defined(__has_include)

#if __has_include(<unistd.h>)
#include <unistd.h>
#else
#error VERROR_MESSAGE Header file <unistd.h>, needed for module `os` was not found. Please install the corresponding development headers.
#endif

#else
#include <unistd.h>
#endif

// added by module `os`:

#if defined(__has_include)

#if __has_include(<fcntl.h>)
#include <fcntl.h>
#else
#error VERROR_MESSAGE Header file <fcntl.h>, needed for module `os` was not found. Please install the corresponding development headers.
#endif

#else
#include <fcntl.h>
#endif

// added by module `os`:

#if defined(__has_include)

#if __has_include(<sys/utsname.h>)
#include <sys/utsname.h>
#else
#error VERROR_MESSAGE Header file <sys/utsname.h>, needed for module `os` was not found. Please install the corresponding development headers.
#endif

#else
#include <sys/utsname.h>
#endif

// added by module `math`:

#if defined(__has_include)

#if __has_include(<math.h>)
#include <math.h>
#else
#error VERROR_MESSAGE Header file <math.h>, needed for module `math` was not found. Please install the corresponding development headers.
#endif

#else
#include <math.h>
#endif

// added by module `time`:

#if defined(__has_include)

#if __has_include(<time.h>)
#include <time.h>
#else
#error VERROR_MESSAGE Header file <time.h>, needed for module `time` was not found. Please install the corresponding development headers.
#endif

#else
#include <time.h>
#endif

// added by module `time`:

#if defined(__has_include)

#if __has_include(<time.h>)
#include <time.h>
#else
#error VERROR_MESSAGE Header file <time.h>, needed for module `time` was not found. Please install the corresponding development headers.
#endif

#else
#include <time.h>
#endif

// defined by module `fontstash`:
#define FONTSTASH_IMPLEMENTATION
// added by module `fontstash`:

#if defined(__has_include)

#if __has_include("fontstash.h")
#include "fontstash.h"
#else
#error VERROR_MESSAGE Header file "fontstash.h", needed for module `fontstash` was not found. Please install the corresponding development headers.
#endif

#else
#include "fontstash.h"
#endif

// added by module `stbi`:

#if defined(__has_include)

#if __has_include("stb_image.h")
#include "stb_image.h"
#else
#error VERROR_MESSAGE Header file "stb_image.h", needed for module `stbi` was not found. Please install the corresponding development headers.
#endif

#else
#include "stb_image.h"
#endif

// defined by module `sokol.c`:
#define SOKOL_IMPL
// added by module `sokol.c`:

#if defined(__has_include)

#if __has_include("sokol_app.h")
#include "sokol_app.h"
#else
#error VERROR_MESSAGE Header file "sokol_app.h", needed for module `sokol.c` was not found. Please install the corresponding development headers.
#endif

#else
#include "sokol_app.h"
#endif

// defined by module `sokol.c`:
#define SOKOL_IMPL
// defined by module `sokol.c`:
#define SOKOL_NO_DEPRECATED
// added by module `sokol.c`:

#if defined(__has_include)

#if __has_include("sokol_gfx.h")
#include "sokol_gfx.h"
#else
#error VERROR_MESSAGE Header file "sokol_gfx.h", needed for module `sokol.c` was not found. Please install the corresponding development headers.
#endif

#else
#include "sokol_gfx.h"
#endif

// defined by module `sokol.c`:
#define SOKOL_GL_IMPL
// added by module `sokol.c`:

#if defined(__has_include)

#if __has_include("util/sokol_gl.h")
#include "util/sokol_gl.h"
#else
#error VERROR_MESSAGE Header file "util/sokol_gl.h", needed for module `sokol.c` was not found. Please install the corresponding development headers.
#endif

#else
#include "util/sokol_gl.h"
#endif

// defined by module `sokol.f`:
#define SOKOL_FONTSTASH_IMPL
// added by module `sokol.f`:

#if defined(__has_include)

#if __has_include("util/sokol_fontstash.h")
#include "util/sokol_fontstash.h"
#else
#error VERROR_MESSAGE Header file "util/sokol_fontstash.h", needed for module `sokol.f` was not found. Please install the corresponding development headers.
#endif

#else
#include "util/sokol_fontstash.h"
#endif

// added by module `sync`:

#if defined(__has_include)

#if __has_include(<atomic.h>)
#include <atomic.h>
#else
#error VERROR_MESSAGE Header file <atomic.h>, needed for module `sync` was not found. Please install the corresponding development headers.
#endif

#else
#include <atomic.h>
#endif

// added by module `sync`:

#if defined(__has_include)

#if __has_include(<semaphore.h>)
#include <semaphore.h>
#else
#error VERROR_MESSAGE Header file <semaphore.h>, needed for module `sync` was not found. Please install the corresponding development headers.
#endif

#else
#include <semaphore.h>
#endif

// added by module `clipboard`:

#if defined(__has_include)

#if __has_include(<X11/Xlib.h>)
#include <X11/Xlib.h>
#else
#error VERROR_MESSAGE Header file <X11/Xlib.h>, needed for module `clipboard` was not found. Please install the corresponding development headers.
#endif

#else
#include <X11/Xlib.h>
#endif

// defined by module `ui`:
#define objc_msg ((id (*)(id, SEL, ...))objc_msgSend)
// defined by module `ui`:
#define objc_cls_msg ((id (*)(Class, SEL, ...))objc_msgSend)

// Enum definitions:
typedef enum {
	strconv__Char_parse_state_start, // 
	strconv__Char_parse_state_norm_char, // +1
	strconv__Char_parse_state_field_char, // +2
	strconv__Char_parse_state_pad_ch, // +3
	strconv__Char_parse_state_len_set_start, // +4
	strconv__Char_parse_state_len_set_in, // +5
	strconv__Char_parse_state_check_type, // +6
	strconv__Char_parse_state_check_float, // +7
	strconv__Char_parse_state_check_float_in, // +8
	strconv__Char_parse_state_reset_params, // +9
} strconv__Char_parse_state;

typedef enum {
	strconv__Align_text_right = 0, // 0
	strconv__Align_text_left, // 0+1
	strconv__Align_text_center, // 0+2
} strconv__Align_text;

typedef enum {
	ChanState_success, // 
	ChanState_not_ready, // +1
	ChanState_closed, // +2
} ChanState;

typedef enum {
	os__FileType_regular, // 
	os__FileType_directory, // +1
	os__FileType_character_device, // +2
	os__FileType_block_device, // +3
	os__FileType_fifo, // +4
	os__FileType_symbolic_link, // +5
	os__FileType_socket, // +6
} os__FileType;

typedef enum {
	time__FormatTime_hhmm12, // 
	time__FormatTime_hhmm24, // +1
	time__FormatTime_hhmmss12, // +2
	time__FormatTime_hhmmss24, // +3
	time__FormatTime_hhmmss24_milli, // +4
	time__FormatTime_hhmmss24_micro, // +5
	time__FormatTime_no_time, // +6
} time__FormatTime;

typedef enum {
	time__FormatDate_ddmmyy, // 
	time__FormatDate_ddmmyyyy, // +1
	time__FormatDate_mmddyy, // +2
	time__FormatDate_mmddyyyy, // +3
	time__FormatDate_mmmd, // +4
	time__FormatDate_mmmdd, // +5
	time__FormatDate_mmmddyyyy, // +6
	time__FormatDate_no_date, // +7
	time__FormatDate_yyyymmdd, // +8
} time__FormatDate;

typedef enum {
	time__FormatDelimiter_dot, // 
	time__FormatDelimiter_hyphen, // +1
	time__FormatDelimiter_slash, // +2
	time__FormatDelimiter_space, // +3
	time__FormatDelimiter_no_delimiter, // +4
} time__FormatDelimiter;

typedef enum {
	sokol__sapp__EventType_invalid, // 
	sokol__sapp__EventType_key_down, // +1
	sokol__sapp__EventType_key_up, // +2
	sokol__sapp__EventType_char, // +3
	sokol__sapp__EventType_mouse_down, // +4
	sokol__sapp__EventType_mouse_up, // +5
	sokol__sapp__EventType_mouse_scroll, // +6
	sokol__sapp__EventType_mouse_move, // +7
	sokol__sapp__EventType_mouse_enter, // +8
	sokol__sapp__EventType_mouse_leave, // +9
	sokol__sapp__EventType_touches_began, // +10
	sokol__sapp__EventType_touches_moved, // +11
	sokol__sapp__EventType_touches_ended, // +12
	sokol__sapp__EventType_touches_cancelled, // +13
	sokol__sapp__EventType_resized, // +14
	sokol__sapp__EventType_iconified, // +15
	sokol__sapp__EventType_restored, // +16
	sokol__sapp__EventType_suspended, // +17
	sokol__sapp__EventType_resumed, // +18
	sokol__sapp__EventType_update_cursor, // +19
	sokol__sapp__EventType_quit_requested, // +20
	sokol__sapp__EventType_clipboard_pasted, // +21
	sokol__sapp__EventType_num, // +22
} sokol__sapp__EventType;

typedef enum {
	sokol__sapp__MouseButton_invalid = -1, // -1
	sokol__sapp__MouseButton_left = 0, // 0
	sokol__sapp__MouseButton_right = 1, // 1
	sokol__sapp__MouseButton_middle = 2, // 2
} sokol__sapp__MouseButton;

typedef enum {
	sokol__sapp__Modifier_shift = 1, // 1
	sokol__sapp__Modifier_ctrl = 2, // 2
	sokol__sapp__Modifier_alt = 4, // 4
	sokol__sapp__Modifier_super = 8, // 8
} sokol__sapp__Modifier;

typedef enum {
	sokol__sapp__KeyCode_invalid = 0, // 0
	sokol__sapp__KeyCode_space = 32, // 32
	sokol__sapp__KeyCode_apostrophe = 39, // 39
	sokol__sapp__KeyCode_comma = 44, // 44
	sokol__sapp__KeyCode_minus = 45, // 45
	sokol__sapp__KeyCode_period = 46, // 46
	sokol__sapp__KeyCode_slash = 47, // 47
	sokol__sapp__KeyCode__0 = 48, // 48
	sokol__sapp__KeyCode__1 = 49, // 49
	sokol__sapp__KeyCode__2 = 50, // 50
	sokol__sapp__KeyCode__3 = 51, // 51
	sokol__sapp__KeyCode__4 = 52, // 52
	sokol__sapp__KeyCode__5 = 53, // 53
	sokol__sapp__KeyCode__6 = 54, // 54
	sokol__sapp__KeyCode__7 = 55, // 55
	sokol__sapp__KeyCode__8 = 56, // 56
	sokol__sapp__KeyCode__9 = 57, // 57
	sokol__sapp__KeyCode_semicolon = 59, // 59
	sokol__sapp__KeyCode_equal = 61, // 61
	sokol__sapp__KeyCode_a = 65, // 65
	sokol__sapp__KeyCode_b = 66, // 66
	sokol__sapp__KeyCode_c = 67, // 67
	sokol__sapp__KeyCode_d = 68, // 68
	sokol__sapp__KeyCode_e = 69, // 69
	sokol__sapp__KeyCode_f = 70, // 70
	sokol__sapp__KeyCode_g = 71, // 71
	sokol__sapp__KeyCode_h = 72, // 72
	sokol__sapp__KeyCode_i = 73, // 73
	sokol__sapp__KeyCode_j = 74, // 74
	sokol__sapp__KeyCode_k = 75, // 75
	sokol__sapp__KeyCode_l = 76, // 76
	sokol__sapp__KeyCode_m = 77, // 77
	sokol__sapp__KeyCode_n = 78, // 78
	sokol__sapp__KeyCode_o = 79, // 79
	sokol__sapp__KeyCode_p = 80, // 80
	sokol__sapp__KeyCode_q = 81, // 81
	sokol__sapp__KeyCode_r = 82, // 82
	sokol__sapp__KeyCode_s = 83, // 83
	sokol__sapp__KeyCode_t = 84, // 84
	sokol__sapp__KeyCode_u = 85, // 85
	sokol__sapp__KeyCode_v = 86, // 86
	sokol__sapp__KeyCode_w = 87, // 87
	sokol__sapp__KeyCode_x = 88, // 88
	sokol__sapp__KeyCode_y = 89, // 89
	sokol__sapp__KeyCode_z = 90, // 90
	sokol__sapp__KeyCode_left_bracket = 91, // 91
	sokol__sapp__KeyCode_backslash = 92, // 92
	sokol__sapp__KeyCode_right_bracket = 93, // 93
	sokol__sapp__KeyCode_grave_accent = 96, // 96
	sokol__sapp__KeyCode_world_1 = 161, // 161
	sokol__sapp__KeyCode_world_2 = 162, // 162
	sokol__sapp__KeyCode_escape = 256, // 256
	sokol__sapp__KeyCode_enter = 257, // 257
	sokol__sapp__KeyCode_tab = 258, // 258
	sokol__sapp__KeyCode_backspace = 259, // 259
	sokol__sapp__KeyCode_insert = 260, // 260
	sokol__sapp__KeyCode_delete = 261, // 261
	sokol__sapp__KeyCode_right = 262, // 262
	sokol__sapp__KeyCode_left = 263, // 263
	sokol__sapp__KeyCode_down = 264, // 264
	sokol__sapp__KeyCode_up = 265, // 265
	sokol__sapp__KeyCode_page_up = 266, // 266
	sokol__sapp__KeyCode_page_down = 267, // 267
	sokol__sapp__KeyCode_home = 268, // 268
	sokol__sapp__KeyCode_end = 269, // 269
	sokol__sapp__KeyCode_caps_lock = 280, // 280
	sokol__sapp__KeyCode_scroll_lock = 281, // 281
	sokol__sapp__KeyCode_num_lock = 282, // 282
	sokol__sapp__KeyCode_print_screen = 283, // 283
	sokol__sapp__KeyCode_pause = 284, // 284
	sokol__sapp__KeyCode_f1 = 290, // 290
	sokol__sapp__KeyCode_f2 = 291, // 291
	sokol__sapp__KeyCode_f3 = 292, // 292
	sokol__sapp__KeyCode_f4 = 293, // 293
	sokol__sapp__KeyCode_f5 = 294, // 294
	sokol__sapp__KeyCode_f6 = 295, // 295
	sokol__sapp__KeyCode_f7 = 296, // 296
	sokol__sapp__KeyCode_f8 = 297, // 297
	sokol__sapp__KeyCode_f9 = 298, // 298
	sokol__sapp__KeyCode_f10 = 299, // 299
	sokol__sapp__KeyCode_f11 = 300, // 300
	sokol__sapp__KeyCode_f12 = 301, // 301
	sokol__sapp__KeyCode_f13 = 302, // 302
	sokol__sapp__KeyCode_f14 = 303, // 303
	sokol__sapp__KeyCode_f15 = 304, // 304
	sokol__sapp__KeyCode_f16 = 305, // 305
	sokol__sapp__KeyCode_f17 = 306, // 306
	sokol__sapp__KeyCode_f18 = 307, // 307
	sokol__sapp__KeyCode_f19 = 308, // 308
	sokol__sapp__KeyCode_f20 = 309, // 309
	sokol__sapp__KeyCode_f21 = 310, // 310
	sokol__sapp__KeyCode_f22 = 311, // 311
	sokol__sapp__KeyCode_f23 = 312, // 312
	sokol__sapp__KeyCode_f24 = 313, // 313
	sokol__sapp__KeyCode_f25 = 314, // 314
	sokol__sapp__KeyCode_kp_0 = 320, // 320
	sokol__sapp__KeyCode_kp_1 = 321, // 321
	sokol__sapp__KeyCode_kp_2 = 322, // 322
	sokol__sapp__KeyCode_kp_3 = 323, // 323
	sokol__sapp__KeyCode_kp_4 = 324, // 324
	sokol__sapp__KeyCode_kp_5 = 325, // 325
	sokol__sapp__KeyCode_kp_6 = 326, // 326
	sokol__sapp__KeyCode_kp_7 = 327, // 327
	sokol__sapp__KeyCode_kp_8 = 328, // 328
	sokol__sapp__KeyCode_kp_9 = 329, // 329
	sokol__sapp__KeyCode_kp_decimal = 330, // 330
	sokol__sapp__KeyCode_kp_divide = 331, // 331
	sokol__sapp__KeyCode_kp_multiply = 332, // 332
	sokol__sapp__KeyCode_kp_subtract = 333, // 333
	sokol__sapp__KeyCode_kp_add = 334, // 334
	sokol__sapp__KeyCode_kp_enter = 335, // 335
	sokol__sapp__KeyCode_kp_equal = 336, // 336
	sokol__sapp__KeyCode_left_shift = 340, // 340
	sokol__sapp__KeyCode_left_control = 341, // 341
	sokol__sapp__KeyCode_left_alt = 342, // 342
	sokol__sapp__KeyCode_left_super = 343, // 343
	sokol__sapp__KeyCode_right_shift = 344, // 344
	sokol__sapp__KeyCode_right_control = 345, // 345
	sokol__sapp__KeyCode_right_alt = 346, // 346
	sokol__sapp__KeyCode_right_super = 347, // 347
	sokol__sapp__KeyCode_menu = 348, // 348
} sokol__sapp__KeyCode;

typedef enum {
	fontstash__FonsFlags_top_left = 1, // 1
	fontstash__FonsFlags_bottom_left = 2, // 2
} fontstash__FonsFlags;

typedef enum {
	fontstash__FonsAlign_left = 1, // 1
	fontstash__FonsAlign_center = 2, // 2
	fontstash__FonsAlign_right = 4, // 4
	fontstash__FonsAlign_top = 8, // 8
	fontstash__FonsAlign_middle = 16, // 16
	fontstash__FonsAlign_bottom = 32, // 32
	fontstash__FonsAlign_baseline = 64, // 64
} fontstash__FonsAlign;

typedef enum {
	fontstash__FonsErrorCode_atlas_full = 1, // 1
	fontstash__FonsErrorCode_scratch_full = 2, // 2
	fontstash__FonsErrorCode_states_overflow = 3, // 3
	fontstash__FonsErrorCode_states_underflow = 4, // 4
} fontstash__FonsErrorCode;

typedef enum {
	sokol__gfx__Backend_glcore33, // 
	sokol__gfx__Backend_gles2, // +1
	sokol__gfx__Backend_gles3, // +2
	sokol__gfx__Backend_d3d11, // +3
	sokol__gfx__Backend_metal_ios, // +4
	sokol__gfx__Backend_metal_macos, // +5
	sokol__gfx__Backend_metal_simulator, // +6
	sokol__gfx__Backend_dummy, // +7
} sokol__gfx__Backend;

typedef enum {
	sokol__gfx__PixelFormat__default, // 
	sokol__gfx__PixelFormat_none, // +1
	sokol__gfx__PixelFormat_r8, // +2
	sokol__gfx__PixelFormat_r8sn, // +3
	sokol__gfx__PixelFormat_r8ui, // +4
	sokol__gfx__PixelFormat_r8si, // +5
	sokol__gfx__PixelFormat_r16, // +6
	sokol__gfx__PixelFormat_r16sn, // +7
	sokol__gfx__PixelFormat_r16ui, // +8
	sokol__gfx__PixelFormat_r16si, // +9
	sokol__gfx__PixelFormat_r16f, // +10
	sokol__gfx__PixelFormat_rg8, // +11
	sokol__gfx__PixelFormat_rg8sn, // +12
	sokol__gfx__PixelFormat_rg8ui, // +13
	sokol__gfx__PixelFormat_rg8si, // +14
	sokol__gfx__PixelFormat_r32ui, // +15
	sokol__gfx__PixelFormat_r32si, // +16
	sokol__gfx__PixelFormat_r32f, // +17
	sokol__gfx__PixelFormat_rg16, // +18
	sokol__gfx__PixelFormat_rg16sn, // +19
	sokol__gfx__PixelFormat_rg16ui, // +20
	sokol__gfx__PixelFormat_rg16si, // +21
	sokol__gfx__PixelFormat_rg16f, // +22
	sokol__gfx__PixelFormat_rgba8, // +23
	sokol__gfx__PixelFormat_rgba8sn, // +24
	sokol__gfx__PixelFormat_rgba8ui, // +25
	sokol__gfx__PixelFormat_rgba8si, // +26
	sokol__gfx__PixelFormat_bgra8, // +27
	sokol__gfx__PixelFormat_rgb10a2, // +28
	sokol__gfx__PixelFormat_rg11b10f, // +29
	sokol__gfx__PixelFormat_rg32ui, // +30
	sokol__gfx__PixelFormat_rg32si, // +31
	sokol__gfx__PixelFormat_rg32f, // +32
	sokol__gfx__PixelFormat_rgba16, // +33
	sokol__gfx__PixelFormat_rgba16sn, // +34
	sokol__gfx__PixelFormat_rgba16ui, // +35
	sokol__gfx__PixelFormat_rgba16si, // +36
	sokol__gfx__PixelFormat_rgba16f, // +37
	sokol__gfx__PixelFormat_rgba32ui, // +38
	sokol__gfx__PixelFormat_rgba32si, // +39
	sokol__gfx__PixelFormat_rgba32f, // +40
	sokol__gfx__PixelFormat_depth, // +41
	sokol__gfx__PixelFormat_depth_stencil, // +42
	sokol__gfx__PixelFormat_bc1_rgba, // +43
	sokol__gfx__PixelFormat_bc2_rgba, // +44
	sokol__gfx__PixelFormat_bc3_rgba, // +45
	sokol__gfx__PixelFormat_bc4_r, // +46
	sokol__gfx__PixelFormat_bc4_rsn, // +47
	sokol__gfx__PixelFormat_bc5_rg, // +48
	sokol__gfx__PixelFormat_bc5_rgsn, // +49
	sokol__gfx__PixelFormat_bc6h_rgbf, // +50
	sokol__gfx__PixelFormat_bc6h_rgbuf, // +51
	sokol__gfx__PixelFormat_bc7_rgba, // +52
	sokol__gfx__PixelFormat_pvrtc_rgb_2bpp, // +53
	sokol__gfx__PixelFormat_pvrtc_rgb_4bpp, // +54
	sokol__gfx__PixelFormat_pvrtc_rgba_2bpp, // +55
	sokol__gfx__PixelFormat_pvrtc_rgba_4bpp, // +56
	sokol__gfx__PixelFormat_etc2_rgb8, // +57
	sokol__gfx__PixelFormat_etc2_rgb8a1, // +58
	sokol__gfx__PixelFormat_etc2_rgba8, // +59
	sokol__gfx__PixelFormat_etc2_rg11, // +60
	sokol__gfx__PixelFormat_etc2_rg11sn, // +61
	sokol__gfx__PixelFormat__num, // +62
} sokol__gfx__PixelFormat;

typedef enum {
	sokol__gfx__ResourceState_initial, // 
	sokol__gfx__ResourceState_alloc, // +1
	sokol__gfx__ResourceState_valid, // +2
	sokol__gfx__ResourceState_failed, // +3
	sokol__gfx__ResourceState_invalid, // +4
} sokol__gfx__ResourceState;

typedef enum {
	sokol__gfx__Usage__default, // 
	sokol__gfx__Usage_immutable, // +1
	sokol__gfx__Usage_dynamic, // +2
	sokol__gfx__Usage_stream, // +3
	sokol__gfx__Usage__num, // +4
} sokol__gfx__Usage;

typedef enum {
	sokol__gfx__BufferType__default, // 
	sokol__gfx__BufferType_vertexbuffer, // +1
	sokol__gfx__BufferType_indexbuffer, // +2
	sokol__gfx__BufferType__num, // +3
} sokol__gfx__BufferType;

typedef enum {
	sokol__gfx__IndexType__default, // 
	sokol__gfx__IndexType_none, // +1
	sokol__gfx__IndexType_uint16, // +2
	sokol__gfx__IndexType_uint32, // +3
	sokol__gfx__IndexType__num, // +4
} sokol__gfx__IndexType;

typedef enum {
	sokol__gfx__ImageType__default, // 
	sokol__gfx__ImageType__2d, // +1
	sokol__gfx__ImageType_cube, // +2
	sokol__gfx__ImageType__3d, // +3
	sokol__gfx__ImageType_array, // +4
	sokol__gfx__ImageType__num, // +5
} sokol__gfx__ImageType;

typedef enum {
	sokol__gfx__CubeFace_pos_x, // 
	sokol__gfx__CubeFace_neg_x, // +1
	sokol__gfx__CubeFace_pos_y, // +2
	sokol__gfx__CubeFace_neg_y, // +3
	sokol__gfx__CubeFace_pos_z, // +4
	sokol__gfx__CubeFace_neg_z, // +5
	sokol__gfx__CubeFace_num, // +6
} sokol__gfx__CubeFace;

typedef enum {
	sokol__gfx__ShaderStage_vs, // 
	sokol__gfx__ShaderStage_fs, // +1
} sokol__gfx__ShaderStage;

typedef enum {
	sokol__gfx__PrimitiveType__default, // 
	sokol__gfx__PrimitiveType_points, // +1
	sokol__gfx__PrimitiveType_lines, // +2
	sokol__gfx__PrimitiveType_line_strip, // +3
	sokol__gfx__PrimitiveType_triangles, // +4
	sokol__gfx__PrimitiveType_triangle_strip, // +5
	sokol__gfx__PrimitiveType__num, // +6
} sokol__gfx__PrimitiveType;

typedef enum {
	sokol__gfx__Filter__default, // 
	sokol__gfx__Filter_nearest, // +1
	sokol__gfx__Filter_linear, // +2
	sokol__gfx__Filter_nearest_mipmap_nearest, // +3
	sokol__gfx__Filter_nearest_mipmap_linear, // +4
	sokol__gfx__Filter_linear_mipmap_nearest, // +5
	sokol__gfx__Filter_linear_mipmap_linear, // +6
	sokol__gfx__Filter__num, // +7
} sokol__gfx__Filter;

typedef enum {
	sokol__gfx__Wrap__default, // 
	sokol__gfx__Wrap_repeat, // +1
	sokol__gfx__Wrap_clamp_to_edge, // +2
	sokol__gfx__Wrap_clamp_to_border, // +3
	sokol__gfx__Wrap_mirrored_repeat, // +4
	sokol__gfx__Wrap__num, // +5
} sokol__gfx__Wrap;

typedef enum {
	sokol__gfx__BorderColor__default, // 
	sokol__gfx__BorderColor_transparent_black, // +1
	sokol__gfx__BorderColor_opaque_black, // +2
	sokol__gfx__BorderColor_opaque_white, // +3
	sokol__gfx__BorderColor__num, // +4
} sokol__gfx__BorderColor;

typedef enum {
	sokol__gfx__VertexFormat_invalid, // 
	sokol__gfx__VertexFormat_float, // +1
	sokol__gfx__VertexFormat_float2, // +2
	sokol__gfx__VertexFormat_float3, // +3
	sokol__gfx__VertexFormat_float4, // +4
	sokol__gfx__VertexFormat_byte4, // +5
	sokol__gfx__VertexFormat_byte4n, // +6
	sokol__gfx__VertexFormat_ubyte4, // +7
	sokol__gfx__VertexFormat_ubyte4n, // +8
	sokol__gfx__VertexFormat_short2, // +9
	sokol__gfx__VertexFormat_short2n, // +10
	sokol__gfx__VertexFormat_ushort2n, // +11
	sokol__gfx__VertexFormat_short4, // +12
	sokol__gfx__VertexFormat_short4n, // +13
	sokol__gfx__VertexFormat_ushort4n, // +14
	sokol__gfx__VertexFormat_uint10_n2, // +15
	sokol__gfx__VertexFormat__num, // +16
} sokol__gfx__VertexFormat;

typedef enum {
	sokol__gfx__VertexStep__default, // 
	sokol__gfx__VertexStep_per_vertex, // +1
	sokol__gfx__VertexStep_per_instance, // +2
	sokol__gfx__VertexStep__num, // +3
} sokol__gfx__VertexStep;

typedef enum {
	sokol__gfx__UniformType_invalid, // 
	sokol__gfx__UniformType_float, // +1
	sokol__gfx__UniformType_float2, // +2
	sokol__gfx__UniformType_float3, // +3
	sokol__gfx__UniformType_float4, // +4
	sokol__gfx__UniformType_mat4, // +5
	sokol__gfx__UniformType__num, // +6
} sokol__gfx__UniformType;

typedef enum {
	sokol__gfx__CullMode__default, // 
	sokol__gfx__CullMode_none, // +1
	sokol__gfx__CullMode_front, // +2
	sokol__gfx__CullMode_back, // +3
	sokol__gfx__CullMode__num, // +4
} sokol__gfx__CullMode;

typedef enum {
	sokol__gfx__FaceWinding__facewinding_default, // 
	sokol__gfx__FaceWinding_facewinding_ccw, // +1
	sokol__gfx__FaceWinding_facewinding_cw, // +2
	sokol__gfx__FaceWinding__facewinding_num, // +3
} sokol__gfx__FaceWinding;

typedef enum {
	sokol__gfx__CompareFunc__default, // 
	sokol__gfx__CompareFunc_never, // +1
	sokol__gfx__CompareFunc_less, // +2
	sokol__gfx__CompareFunc_equal, // +3
	sokol__gfx__CompareFunc_less_equal, // +4
	sokol__gfx__CompareFunc_greater, // +5
	sokol__gfx__CompareFunc_not_equal, // +6
	sokol__gfx__CompareFunc_greater_equal, // +7
	sokol__gfx__CompareFunc_always, // +8
	sokol__gfx__CompareFunc__num, // +9
} sokol__gfx__CompareFunc;

typedef enum {
	sokol__gfx__StencilOp__default, // 
	sokol__gfx__StencilOp_keep, // +1
	sokol__gfx__StencilOp_zero, // +2
	sokol__gfx__StencilOp_replace, // +3
	sokol__gfx__StencilOp_incr_clamp, // +4
	sokol__gfx__StencilOp_decr_clamp, // +5
	sokol__gfx__StencilOp_invert, // +6
	sokol__gfx__StencilOp_incr_wrap, // +7
	sokol__gfx__StencilOp_decr_wrap, // +8
	sokol__gfx__StencilOp__num, // +9
} sokol__gfx__StencilOp;

typedef enum {
	sokol__gfx__BlendFactor__default, // 
	sokol__gfx__BlendFactor_zero, // +1
	sokol__gfx__BlendFactor_one, // +2
	sokol__gfx__BlendFactor_src_color, // +3
	sokol__gfx__BlendFactor_one_minus_src_color, // +4
	sokol__gfx__BlendFactor_src_alpha, // +5
	sokol__gfx__BlendFactor_one_minus_src_alpha, // +6
	sokol__gfx__BlendFactor_dst_color, // +7
	sokol__gfx__BlendFactor_one_minus_dst_color, // +8
	sokol__gfx__BlendFactor_dst_alpha, // +9
	sokol__gfx__BlendFactor_one_minus_dst_alpha, // +10
	sokol__gfx__BlendFactor_src_alpha_saturated, // +11
	sokol__gfx__BlendFactor_blend_color, // +12
	sokol__gfx__BlendFactor_one_minus_blend_color, // +13
	sokol__gfx__BlendFactor_blend_alpha, // +14
	sokol__gfx__BlendFactor_one_minus_blend_alpha, // +15
	sokol__gfx__BlendFactor__num, // +16
} sokol__gfx__BlendFactor;

typedef enum {
	sokol__gfx__BlendOp__default, // 
	sokol__gfx__BlendOp_add, // +1
	sokol__gfx__BlendOp_subtract, // +2
	sokol__gfx__BlendOp_reverse_subtract, // +3
	sokol__gfx__BlendOp__num, // +4
} sokol__gfx__BlendOp;

typedef enum {
	sokol__gfx__ColorMask__default = 0, // 0
	sokol__gfx__ColorMask_none = 0x10, // 0x10
	sokol__gfx__ColorMask_r = 1, // 1
	sokol__gfx__ColorMask_g = 2, // 2
	sokol__gfx__ColorMask_b = 4, // 4
	sokol__gfx__ColorMask_a = 8, // 8
	sokol__gfx__ColorMask_rgb = 0x7, // 0x7
	sokol__gfx__ColorMask_rgba = 0xF, // 0xF
} sokol__gfx__ColorMask;

typedef enum {
	sokol__gfx__Action__default, // 
	sokol__gfx__Action_clear, // +1
	sokol__gfx__Action_load, // +2
	sokol__gfx__Action_dontcare, // +3
	sokol__gfx__Action__num, // +4
} sokol__gfx__Action;

typedef enum {
	gx__HorizontalAlign_left = FONS_ALIGN_LEFT, // FONS_ALIGN_LEFT
	gx__HorizontalAlign_center = FONS_ALIGN_CENTER, // FONS_ALIGN_CENTER
	gx__HorizontalAlign_right = FONS_ALIGN_RIGHT, // FONS_ALIGN_RIGHT
} gx__HorizontalAlign;

typedef enum {
	gx__VerticalAlign_top = FONS_ALIGN_TOP, // FONS_ALIGN_TOP
	gx__VerticalAlign_middle = FONS_ALIGN_MIDDLE, // FONS_ALIGN_MIDDLE
	gx__VerticalAlign_bottom = FONS_ALIGN_BOTTOM, // FONS_ALIGN_BOTTOM
	gx__VerticalAlign_baseline = FONS_ALIGN_BASELINE, // FONS_ALIGN_BASELINE
} gx__VerticalAlign;

typedef enum {
	sokol__sgl__SglError_no_error, // 
	sokol__sgl__SglError_vertices_full, // +1
	sokol__sgl__SglError_commands_full, // +2
	sokol__sgl__SglError_stack_overflow, // +3
	sokol__sgl__SglError_stack_underfloat, // +4
} sokol__sgl__SglError;

typedef enum {
	gg__FontVariant_normal = 0, // 0
	gg__FontVariant_bold, // 0+1
	gg__FontVariant_mono, // 0+2
	gg__FontVariant_italic, // 0+3
} gg__FontVariant;

typedef enum {
	sync__BufferElemStat_unused = 0, // 0
	sync__BufferElemStat_writing, // 0+1
	sync__BufferElemStat_written, // 0+2
	sync__BufferElemStat_reading, // 0+3
} sync__BufferElemStat;

typedef enum {
	sync__Direction_pop, // 
	sync__Direction_push, // +1
} sync__Direction;

typedef enum {
	clipboard__AtomType_xa_atom = 0, // 0
	clipboard__AtomType_xa_string = 1, // 1
	clipboard__AtomType_targets = 2, // 2
	clipboard__AtomType_clipboard = 3, // 3
	clipboard__AtomType_primary = 4, // 4
	clipboard__AtomType_secondary = 5, // 5
	clipboard__AtomType_text = 6, // 6
	clipboard__AtomType_utf8_string = 7, // 7
	clipboard__AtomType_text_plain = 8, // 8
	clipboard__AtomType_text_html = 9, // 9
} clipboard__AtomType;

typedef enum {
	ui__ButtonState_normal, // 
	ui__ButtonState_pressed, // +1
} ui__ButtonState;

typedef enum {
	ui__EasingType_linear, // 
	ui__EasingType_ease_in_quad, // +1
	ui__EasingType_ease_out_quad, // +2
	ui__EasingType_ease_in_out_quad, // +3
	ui__EasingType_ease_in_cubic, // +4
	ui__EasingType_ease_out_cubic, // +5
	ui__EasingType_ease_in_out_cubic, // +6
	ui__EasingType_ease_in_quart, // +7
	ui__EasingType_ease_out_quart, // +8
	ui__EasingType_ease_in_out_quart, // +9
	ui__EasingType_ease_in_quint, // +10
	ui__EasingType_ease_out_quint, // +11
	ui__EasingType_ease_in_out_quint, // +12
} ui__EasingType;

typedef enum {
	ui__KeyMod_shift = 1, // 1
	ui__KeyMod_ctrl = 2, // 2
	ui__KeyMod_alt = 4, // 4
	ui__KeyMod_super = 8, // 8
} ui__KeyMod;

typedef enum {
	ui__KeyState_press = 1, // 1
	ui__KeyState_release = 0, // 0
	ui__KeyState_repeat = 2, // 2
} ui__KeyState;

typedef enum {
	ui__Key_invalid = 0, // 0
	ui__Key_space = 32, // 32
	ui__Key_apostrophe = 39, // 39
	ui__Key_comma = 44, // 44
	ui__Key_minus = 45, // 45
	ui__Key_period = 46, // 46
	ui__Key_slash = 47, // 47
	ui__Key__0 = 48, // 48
	ui__Key__1 = 49, // 49
	ui__Key__2 = 50, // 50
	ui__Key__3 = 51, // 51
	ui__Key__4 = 52, // 52
	ui__Key__5 = 53, // 53
	ui__Key__6 = 54, // 54
	ui__Key__7 = 55, // 55
	ui__Key__8 = 56, // 56
	ui__Key__9 = 57, // 57
	ui__Key_semicolon = 59, // 59
	ui__Key_equal = 61, // 61
	ui__Key_a = 65, // 65
	ui__Key_b = 66, // 66
	ui__Key_c = 67, // 67
	ui__Key_d = 68, // 68
	ui__Key_e = 69, // 69
	ui__Key_f = 70, // 70
	ui__Key_g = 71, // 71
	ui__Key_h = 72, // 72
	ui__Key_i = 73, // 73
	ui__Key_j = 74, // 74
	ui__Key_k = 75, // 75
	ui__Key_l = 76, // 76
	ui__Key_m = 77, // 77
	ui__Key_n = 78, // 78
	ui__Key_o = 79, // 79
	ui__Key_p = 80, // 80
	ui__Key_q = 81, // 81
	ui__Key_r = 82, // 82
	ui__Key_s = 83, // 83
	ui__Key_t = 84, // 84
	ui__Key_u = 85, // 85
	ui__Key_v = 86, // 86
	ui__Key_w = 87, // 87
	ui__Key_x = 88, // 88
	ui__Key_y = 89, // 89
	ui__Key_z = 90, // 90
	ui__Key_left_bracket = 91, // 91
	ui__Key_backslash = 92, // 92
	ui__Key_right_bracket = 93, // 93
	ui__Key_grave_accent = 96, // 96
	ui__Key_world_1 = 161, // 161
	ui__Key_world_2 = 162, // 162
	ui__Key_escape = 256, // 256
	ui__Key_enter = 257, // 257
	ui__Key_tab = 258, // 258
	ui__Key_backspace = 259, // 259
	ui__Key_insert = 260, // 260
	ui__Key_delete = 261, // 261
	ui__Key_right = 262, // 262
	ui__Key_left = 263, // 263
	ui__Key_down = 264, // 264
	ui__Key_up = 265, // 265
	ui__Key_page_up = 266, // 266
	ui__Key_page_down = 267, // 267
	ui__Key_home = 268, // 268
	ui__Key_end = 269, // 269
	ui__Key_caps_lock = 280, // 280
	ui__Key_scroll_lock = 281, // 281
	ui__Key_num_lock = 282, // 282
	ui__Key_print_screen = 283, // 283
	ui__Key_pause = 284, // 284
	ui__Key_f1 = 290, // 290
	ui__Key_f2 = 291, // 291
	ui__Key_f3 = 292, // 292
	ui__Key_f4 = 293, // 293
	ui__Key_f5 = 294, // 294
	ui__Key_f6 = 295, // 295
	ui__Key_f7 = 296, // 296
	ui__Key_f8 = 297, // 297
	ui__Key_f9 = 298, // 298
	ui__Key_f10 = 299, // 299
	ui__Key_f11 = 300, // 300
	ui__Key_f12 = 301, // 301
	ui__Key_f13 = 302, // 302
	ui__Key_f14 = 303, // 303
	ui__Key_f15 = 304, // 304
	ui__Key_f16 = 305, // 305
	ui__Key_f17 = 306, // 306
	ui__Key_f18 = 307, // 307
	ui__Key_f19 = 308, // 308
	ui__Key_f20 = 309, // 309
	ui__Key_f21 = 310, // 310
	ui__Key_f22 = 311, // 311
	ui__Key_f23 = 312, // 312
	ui__Key_f24 = 313, // 313
	ui__Key_f25 = 314, // 314
	ui__Key_kp_0 = 320, // 320
	ui__Key_kp_1 = 321, // 321
	ui__Key_kp_2 = 322, // 322
	ui__Key_kp_3 = 323, // 323
	ui__Key_kp_4 = 324, // 324
	ui__Key_kp_5 = 325, // 325
	ui__Key_kp_6 = 326, // 326
	ui__Key_kp_7 = 327, // 327
	ui__Key_kp_8 = 328, // 328
	ui__Key_kp_9 = 329, // 329
	ui__Key_kp_decimal = 330, // 330
	ui__Key_kp_divide = 331, // 331
	ui__Key_kp_multiply = 332, // 332
	ui__Key_kp_subtract = 333, // 333
	ui__Key_kp_add = 334, // 334
	ui__Key_kp_enter = 335, // 335
	ui__Key_kp_equal = 336, // 336
	ui__Key_left_shift = 340, // 340
	ui__Key_left_control = 341, // 341
	ui__Key_left_alt = 342, // 342
	ui__Key_left_super = 343, // 343
	ui__Key_right_shift = 344, // 344
	ui__Key_right_control = 345, // 345
	ui__Key_right_alt = 346, // 346
	ui__Key_right_super = 347, // 347
	ui__Key_menu = 348, // 348
} ui__Key;

typedef enum {
	ui__Orientation_vertical = 0, // 0
	ui__Orientation_horizontal = 1, // 1
} ui__Orientation;

typedef enum {
	ui__Direction_row, // 
	ui__Direction_column, // +1
} ui__Direction;

typedef enum {
	ui__SelectionDirection_nil = 0, // 0
	ui__SelectionDirection_left_to_right, // 0+1
	ui__SelectionDirection_right_to_left, // 0+2
} ui__SelectionDirection;

typedef enum {
	ui__VerticalAlignment_top = 0, // 0
	ui__VerticalAlignment_center, // 0+1
	ui__VerticalAlignment_bottom, // 0+2
} ui__VerticalAlignment;

typedef enum {
	ui__HorizontalAlignment_left = 0, // 0
	ui__HorizontalAlignment_center, // 0+1
	ui__HorizontalAlignment_right, // 0+2
} ui__HorizontalAlignment;

typedef enum {
	ui__MouseAction_up, // 
	ui__MouseAction_down, // +1
} ui__MouseAction;

typedef enum {
	ui__Cursor_hand, // 
	ui__Cursor_arrow, // +1
	ui__Cursor_ibeam, // +2
} ui__Cursor;


// V type definitions:
struct string {
	byteptr str;
	int len;
	int is_lit;
};

struct array {
	int element_size;
	voidptr data;
	int len;
	int cap;
};

struct DenseArray {
	int value_bytes;
	u32 cap;
	u32 len;
	u32 deletes;
	string* keys;
	byteptr values;
};

struct map {
	int value_bytes;
	u32 cap;
	byte cached_hashbits;
	byte shift;
	DenseArray key_values;
	u32* metas;
	u32 extra_metas;
	int len;
};

struct Option {
	bool ok;
	bool is_none;
	string v_error;
	int ecode;
};

typedef map map_string_string;
typedef map map_string_int;
typedef map_string_string map_string;
typedef map_string_int map_int;
typedef array array_string;
typedef array array_byte;
typedef array array_int;
typedef array array_rune;
typedef array array_char;
typedef int (*anon_fn_7_7_7)(int,int);
typedef array array_voidptr;
typedef void (*FnExitCb)();
typedef array array_MethodArgs;
typedef array array_u16;
typedef array array_u64;
typedef array array_RepIndex;
typedef byte (*anon_fn_9_9)(byte);
typedef bool (*anon_fn_9_16)(byte);
typedef _Interface hash__Hasher;
typedef _Interface hash__Hash32er;
typedef _Interface hash__Hash64er;
typedef void (*ui__ButtonClickFn)(voidptr,voidptr);
typedef _Interface ui__Layout;
typedef void (*ui__DrawFn)(gg__Context*,voidptr);
typedef void (*ui__CheckChangedFn)(voidptr,bool);
typedef _Interface ui__Widget;
typedef array array_ui__Widget;
typedef void (*ui__SelectionChangedFn)(voidptr,voidptr);
typedef array array_ui__DropdownItem;
typedef f64 (*ui__EasingFunction)(f64);
typedef array array_ui__ListItem;
typedef array array_ui__MenuItem;
typedef void (*ui__MenuFn)();
typedef void (*ui__PictureClickFn)(voidptr,voidptr);
typedef void (*ui__RadioClickFn)();
typedef void (*ui__SliderValueChangedFn)(voidptr,voidptr);
typedef void (*ui__SwitchClickFn)(voidptr,voidptr);
typedef void (*ui__KeyDownFn)(voidptr,voidptr,u32);
typedef void (*ui__KeyUpFn)(voidptr,voidptr,u32);
typedef void (*ui__TextBoxChangeFn)(string,voidptr);
typedef map map_string_gg__Image;
typedef void (*ui__ClickFn)(ui__MouseEvent,voidptr);
typedef void (*ui__KeyFn)(ui__KeyEvent,voidptr);
typedef void (*ui__ScrollFn)(ui__ScrollEvent,voidptr);
typedef void (*ui__MouseMoveFn)(ui__MouseMoveEvent,voidptr);
typedef array array_ustring;
typedef array array_T;
typedef void (*anon_fn_18_1)(string);
typedef void (*gg__FNCb)(voidptr);
typedef void (*gg__FNEvent)(voidptr,voidptr);
typedef void (*gg__FNFail)(string,voidptr);
typedef void (*gg__FNKeyDown)(sokol__sapp__KeyCode,sokol__sapp__Modifier,voidptr);
typedef void (*gg__FNMove)(f32,f32,voidptr);
typedef void (*gg__FNChar)(u32,voidptr);
typedef array array_gg__Image;
typedef void (*eventbus__EventHandlerFn)(voidptr,voidptr,voidptr);
typedef array array_eventbus__EventHandler;
typedef i64 time__Duration;
typedef voidptr time__time_t;
typedef array array_C__Atom;
typedef array array_sync__Channel_ptr;
typedef array array_sync__Direction;
typedef array array_sync__Subscription;
typedef voidptr (*sync__ThreadCB)(sync__PoolProcessor*,int,int);
typedef array array_sync__SResult;
typedef array array_sync__IResult;
typedef void (*anon_fn__1)();
typedef void (*anon_fn_221_1)(struct sapp_event*);
typedef void (*anon_fn_3_1)(byteptr);
typedef void (*anon_fn_2_1)(voidptr);
typedef void (*anon_fn_221_2_1)(struct sapp_event*,voidptr);
typedef void (*anon_fn_3_2_1)(byteptr,voidptr);
typedef void (*anon_fn_2_7_7_1)(voidptr,int,int);
typedef int (*anon_fn_2_7_7_7)(voidptr,int,int);
typedef void (*anon_fn_2_7_3_1)(voidptr,int*,byteptr);
typedef void (*anon_fn_2_13_13_11_7_1)(voidptr,f32*,f32*,u32*,int);
typedef array array_f32;
typedef voidptr (*anon_fn__2)();
typedef array array_u32;
typedef array array_strconv__Uint128;
typedef array array_f64;
typedef map map_string_gx__Color;
typedef array array_clipboard__AtomType;
typedef array array_ui__KeyMod;
// builtin types:
//------------------ #endbuiltin
typedef string array_fixed_string_11 [11];
struct vuipy__App {
	string counter;
	ui__Window* window;
};

struct ui__EventNames {
	string on_click;
	string on_mouse_move;
	string on_mouse_down;
	string on_mouse_up;
	string on_key_down;
	string on_key_up;
	string on_scroll;
};

struct ui__DropdownItem {
	string text;
};

struct eventbus__Subscriber {
	eventbus__Registry* registry;
};

struct ui__LabelConfig {
	string text;
};

struct ui__MessageApp {
	ui__Window* window;
	sync__WaitGroup* waitgroup;
};

struct eventbus__EventBus {
	eventbus__Registry* registry;
	eventbus__Publisher* publisher;
	eventbus__Subscriber* subscriber;
};

struct os__Uname {
	string sysname;
	string nodename;
	string release;
	string version;
	string machine;
};

struct eventbus__Publisher {
	eventbus__Registry* registry;
};

struct sync__SResult {
	string s;
};

struct sync__Waiter {
	sync__Mutex* mx;
};

struct ustring {
	string s;
	array_int runes;
	int len;
};

struct VAssertMetaInfo {
	string fpath;
	int line_nr;
	string fn_name;
	string src;
	string op;
	string llabel;
	string rlabel;
	string lvalue;
	string rvalue;
};

struct MethodArgs {
	int typ;
};

struct FunctionData {
	string name;
	array_string attrs;
	array_MethodArgs args;
	int return_type;
	int typ;
};

struct FieldData {
	string name;
	array_string attrs;
	bool is_pub;
	bool is_mut;
	int typ;
};

struct OptionBase {
	bool ok;
	bool is_none;
	string v_error;
	int ecode;
};

struct SortedMap {
	int value_bytes;
	mapnode* root;
	int len;
};

typedef voidptr array_fixed_voidptr_11 [11];
struct RepIndex {
	int idx;
	int val_idx;
};

struct ui__MarginConfig {
	int top;
	int left;
	int right;
	int bottom;
};

struct strings__Builder {
	array_byte buf;
	int str_calls;
	int len;
	int initial_size;
};

struct strconv__PrepNumber {
	bool negative;
	int exponent;
	u64 mantissa;
};

union strconv__Float64u {
	f64 f;
	u64 u;
};

struct strconv__Dec32 {
	u32 m;
	int e;
};

union strconv__Uf32 {
	f32 f;
	u32 u;
};

struct strconv__Dec64 {
	u64 m;
	int e;
};

union strconv__Uf64 {
	f64 f;
	u64 u;
};

struct strconv__BF_param {
	byte pad_ch;
	int len0;
	int len1;
	bool positive;
	bool sign_flag;
	strconv__Align_text allign;
	bool rm_tail_zero;
};

struct strconv__Uint128 {
	u64 lo;
	u64 hi;
};

struct ui__ButtonConfig {
	string text;
	string icon_path;
	ui__ButtonClickFn onclick;
	int height;
	int width;
};

struct ui__MouseEvent {
	int x;
	int y;
	int button;
	ui__MouseAction action;
	int mods;
};

struct ui__Canvas {
	int width;
	int height;
	int x;
	int y;
	ui__Layout parent;
	ui__DrawFn draw_fn;
	gg__Context* gg;
};

struct ui__CanvasConfig {
	int width;
	int height;
	string text;
	ui__DrawFn draw_fn;
};

struct ui__CheckBox {
	int height;
	int width;
	int x;
	int y;
	ui__Layout parent;
	bool is_focused;
	bool checked;
	ui__UI* ui;
	ui__CheckChangedFn on_check_changed;
	string text;
	bool disabled;
};

struct ui__CheckBoxConfig {
	int x;
	int y;
	ui__Layout parent;
	string text;
	ui__CheckChangedFn on_check_changed;
	bool checked;
	bool disabled;
};

struct ui__Dropdown {
	string def_text;
	int width;
	ui__Layout parent;
	int x;
	int y;
	ui__UI* ui;
	array_ui__DropdownItem items;
	bool open;
	int selected_index;
	int hover_index;
	bool is_focused;
	ui__SelectionChangedFn on_selection_changed;
};

struct ui__DropdownConfig {
	string def_text;
	int x;
	int y;
	int width;
	ui__Layout parent;
	int selected_index;
	ui__SelectionChangedFn on_selection_changed;
};

struct ui__KeyEvent {
	ui__Key key;
	int action;
	int code;
	ui__KeyMod mods;
	u32 codepoint;
};

struct ui__Group {
	string title;
	int height;
	int width;
	int x;
	int y;
	ui__Layout parent;
	ui__UI* ui;
	array_ui__Widget children;
	int margin_left;
	int margin_top;
	int margin_right;
	int margin_bottom;
	int spacing;
};

struct ui__GroupConfig {
	string title;
	int x;
	int y;
	int width;
	int height;
};

struct ui__Label {
	string text;
	ui__Layout parent;
	int x;
	int y;
	ui__UI* ui;
};

struct gx__Color {
	byte r;
	byte g;
	byte b;
	byte a;
};

struct ui__ListItem {
	int x;
	string id;
	ui__ListBox* list;
	int y;
	string text;
	string draw_text;
};

struct ui__MenuItem {
	string text;
	ui__MenuFn action;
};

struct ui__Menu {
	string text;
	ui__Layout parent;
	int x;
	int y;
	ui__UI* ui;
	array_ui__MenuItem items;
	bool visible;
};

struct ui__MenuConfig {
	string text;
	array_ui__MenuItem items;
};

struct ui__ProgressBar {
	int height;
	int width;
	int x;
	int y;
	ui__Layout parent;
	ui__UI* ui;
	int val;
	int min;
	int max;
	bool is_focused;
};

struct ui__ProgressBarConfig {
	int width;
	int height;
	int min;
	int max;
	int val;
};

struct ui__Radio {
	int selected_index;
	array_string values;
	string title;
	int height;
	int width;
	int x;
	int y;
	ui__Layout parent;
	bool is_focused;
	bool is_checked;
	ui__UI* ui;
};

struct ui__RadioConfig {
	array_string values;
	string title;
	int width;
	ui__Radio* ref;
};

struct ui__Slider {
	int track_height;
	int track_width;
	int thumb_width;
	int thumb_height;
	ui__Orientation orientation;
	int x;
	int y;
	ui__Layout parent;
	ui__UI* ui;
	f32 val;
	int min;
	int max;
	bool is_focused;
	bool dragging;
	ui__SliderValueChangedFn on_value_changed;
	bool focus_on_thumb_only;
	bool rev_min_max_pos;
	bool thumb_in_track;
	bool track_line_displayed;
};

struct ui__SliderConfig {
	int width;
	int height;
	int min;
	int max;
	f32 val;
	ui__Orientation orientation;
	ui__SliderValueChangedFn on_value_changed;
	bool focus_on_thumb_only;
	bool rev_min_max_pos;
	bool thumb_in_track;
	bool track_line_displayed;
};

struct ui__Switch {
	int idx;
	int height;
	int width;
	int x;
	int y;
	ui__Layout parent;
	bool is_focused;
	bool open;
	ui__UI* ui;
	ui__SwitchClickFn onclick;
};

struct ui__SwitchConfig {
	ui__SwitchClickFn onclick;
	bool open;
};

struct ui__TextBox {
	int height;
	int width;
	int x;
	int y;
	ui__Layout parent;
	bool is_focused;
	ui__UI* ui;
	string* text;
	int max_len;
	bool is_multi;
	string placeholder;
	string* placeholder_bind;
	int cursor_pos;
	bool is_numeric;
	bool is_password;
	int sel_start;
	int sel_end;
	int last_x;
	bool read_only;
	bool borderless;
	ui__KeyDownFn on_key_down;
	ui__KeyUpFn on_key_up;
	bool dragging;
	ui__SelectionDirection sel_direction;
	bool border_accentuated;
	bool* is_error;
	ui__TextBoxChangeFn on_change;
	bool is_typing;
};

struct ui__TextBoxConfig {
	int width;
	int height;
	int min;
	int max;
	int val;
	string placeholder;
	string* placeholder_bind;
	int max_len;
	bool is_numeric;
	bool is_password;
	bool read_only;
	bool is_multi;
	string* text;
	bool* is_error;
	bool is_focused;
	bool borderless;
	ui__KeyDownFn on_key_down;
	ui__KeyUpFn on_key_up;
	voidptr on_change;
	voidptr on_return;
	bool border_accentuated;
};

struct ui__Transition {
	i64 last_draw_time;
	i64 started_time;
	i64 duration;
	bool animating;
	ui__EasingFunction easing;
	ui__Layout parent;
	int start_value;
	int last_draw_target;
	ui__UI* ui;
	int target_value;
	int* animated_value;
};

struct ui__TransitionConfig {
	int duration;
	int* animated_value;
	ui__EasingFunction easing;
	ui__Transition* ref;
};

struct clipboard__Clipboard {
	Display* display;
	Atom selection;
	Window window;
	array_C__Atom atoms;
	sync__Mutex* mutex;
	string text;
	bool got_text;
	bool is_owner;
};

struct ui__ScrollEvent {
	f64 x;
	f64 y;
};

struct ui__MouseMoveEvent {
	f64 x;
	f64 y;
};

struct sync__WaitGroup {
	int task_count;
	sync__Mutex* task_count_mutex;
	sync__Waiter* wait_blocker;
};

struct os__File {
	voidptr cfile;
	int fd;
	bool is_opened;
};

struct os__FileInfo {
	string name;
	int size;
};

struct os__FilePermission {
	bool read;
	bool write;
	bool execute;
};

struct os__Result {
	int exit_code;
	string output;
};

typedef char array_fixed_char_256 [256];
struct os__Command {
	voidptr f;
	bool eof;
	string path;
	bool redirect_stdout;
};

struct gx__Image {
	voidptr obj;
	int id;
	int width;
	int height;
};

struct gg__FT {
	struct FONScontext* fons;
	int font_normal;
	int font_bold;
	int font_mono;
	int font_italic;
	f32 scale;
};

struct gg__Size {
	int width;
	int height;
};

struct gg__FTConfig {
	string font_path;
	f32 scale;
	int font_size;
};

struct eventbus__Registry {
	array_eventbus__EventHandler events;
};

struct eventbus__EventHandler {
	string name;
	eventbus__EventHandlerFn handler;
	voidptr receiver;
	bool once;
};

struct time__Time {
	int year;
	int month;
	int day;
	int hour;
	int minute;
	int second;
	int microsecond;
	u64 v_unix;
};

struct time__StopWatchOptions {
	bool auto_start;
};

struct time__StopWatch {
	u64 elapsed;
	u64 start;
	u64 end;
};

struct sync__Mutex {
	pthread_mutex_t mutex;
};

struct clipboard__Property {
	Atom actual_type;
	int actual_format;
	u64 nitems;
	byteptr data;
};

struct sync__Semaphore {
	voidptr sem;
};

struct sync__PoolProcessor {
	voidptr thread_cb;
	int njobs;
	array_voidptr items;
	array_voidptr results;
	int ntask;
	sync__Mutex* ntask_mtx;
	sync__WaitGroup* waitgroup;
	voidptr shared_context;
	array_voidptr thread_contexts;
};

struct sync__PoolProcessorConfig {
	int maxjobs;
	sync__ThreadCB callback;
};

struct sync__IResult {
	int i;
};

struct sync__RwMutex {
	pthread_rwlock_t mutex;
};

struct sync__RwMutexAttr {
	pthread_rwlockattr_t attr;
};

struct sync__PosixSemaphore {
	sem_t sem;
};

typedef f32 array_fixed_f32_16 [16];
typedef int array_fixed_int_8 [8];
typedef u32 array_fixed_u32_2 [2];
typedef voidptr array_fixed_voidptr_2 [2];
struct sokol__gfx__DepthLayers {
	int depth;
	int layers;
};

typedef f32 array_fixed_f32_4 [4];
struct stbi__Image {
	int width;
	int height;
	int nr_channels;
	bool ok;
	voidptr data;
	string ext;
};

struct rand__PRNGConfigStruct {
	array_u32 seed;
};

struct rand__wyrand__WyRandRNG {
	u64 state;
	bool has_extra;
	u32 extra;
};

typedef byte array_fixed_byte_26 [26];
typedef byteptr array_fixed_byteptr_100 [100];
typedef byte array_fixed_byte_1000 [1000];
typedef byte array_fixed_byte_256 [256];
typedef byte array_fixed_byte_4096 [4096];
typedef byte array_fixed_byte_1024 [1024];
typedef byte array_fixed_byte_3811 [3811];
typedef byte array_fixed_byte_818 [818];
typedef byte array_fixed_byte_946 [946];
typedef byte array_fixed_byte_3558 [3558];
typedef byte array_fixed_byte_4411 [4411];
typedef byte array_fixed_byte_163 [163];
struct mapnode {
	voidptr* children;
	int len;
	array_fixed_string_11 keys;
	array_fixed_voidptr_11 values;
};

struct ui__Window {
	ui__UI* ui;
	array_ui__Widget children;
	ui__Window* child_window;
	ui__Window* parent_window;
	bool has_textbox;
	int tab_index;
	bool just_tabbed;
	voidptr state;
	ui__DrawFn draw_fn;
	string title;
	f64 mx;
	f64 my;
	int width;
	int height;
	gx__Color bg_color;
	ui__ClickFn click_fn;
	ui__ClickFn mouse_down_fn;
	ui__ClickFn mouse_up_fn;
	ui__ScrollFn scroll_fn;
	ui__KeyFn key_down_fn;
	ui__KeyFn char_fn;
	ui__MouseMoveFn mouse_move_fn;
	eventbus__EventBus* eventbus;
};

struct gx__TextCfg {
	gx__Color color;
	int size;
	gx__HorizontalAlign align;
	gx__VerticalAlign vertical_align;
	int max_width;
	string family;
	bool bold;
	bool mono;
	bool italic;
};

struct gg__Image {
	int id;
	int width;
	int height;
	int nr_channels;
	bool ok;
	voidptr data;
	string ext;
	bool simg_ok;
	struct sg_image simg;
	string path;
};

struct ui__ColumnConfig {
	int width;
	ui__HorizontalAlignment alignment;
	int spacing;
	bool stretch;
	ui__MarginConfig margin;
};

struct ui__Stack {
	int x;
	int y;
	int width;
	int height;
	array_ui__Widget children;
	ui__Layout parent;
	ui__UI* ui;
	ui__VerticalAlignment vertical_alignment;
	ui__HorizontalAlignment horizontal_alignment;
	int spacing;
	bool stretch;
	ui__Direction direction;
	ui__MarginConfig margin;
};

struct ui__ListBoxConfig {
	int x;
	int y;
	int width;
	int height;
	ui__SelectionChangedFn callback;
	bool draw_lines;
	gx__Color col_border;
	gx__Color col_bkgrnd;
	gx__Color col_selected;
	int item_height;
	int text_offset_y;
	string id;
};

struct ui__ListBox {
	int height;
	int width;
	int x;
	int y;
	ui__Layout parent;
	ui__UI* ui;
	array_ui__ListItem items;
	int selection;
	int draw_count;
	ui__SelectionChangedFn clbk;
	bool focused;
	bool draw_lines;
	gx__Color col_bkgrnd;
	gx__Color col_selected;
	gx__Color col_border;
	int item_height;
	int text_offset_y;
	string id;
};

struct ui__Rectangle {
	gx__Color color;
	string text;
	ui__Layout parent;
	int x;
	int y;
	int height;
	int width;
	int radius;
	bool border;
	gx__Color border_color;
	ui__UI* ui;
};

struct ui__RectangleConfig {
	string text;
	int height;
	int width;
	gx__Color color;
	int radius;
	bool border;
	gx__Color border_color;
	int x;
	int y;
};

struct ui__RowConfig {
	int height;
	ui__VerticalAlignment alignment;
	int spacing;
	bool stretch;
	ui__MarginConfig margin;
	array_ui__Widget children;
};

struct ui__StackConfig {
	int width;
	int height;
	ui__VerticalAlignment vertical_alignment;
	ui__HorizontalAlignment horizontal_alignment;
	int spacing;
	bool stretch;
	ui__Direction direction;
	ui__MarginConfig margin;
};

struct ui__WindowConfig {
	int width;
	int height;
	bool resizable;
	string title;
	bool always_on_top;
	voidptr state;
	ui__DrawFn draw_fn;
	gx__Color bg_color;
	ui__ClickFn on_click;
	ui__ClickFn on_mouse_down;
	ui__ClickFn on_mouse_up;
	ui__KeyFn on_key_down;
	ui__ScrollFn on_scroll;
	ui__MouseMoveFn on_mouse_move;
	array_ui__Widget children;
	string font_path;
};

struct os__FileMode {
	os__FileType typ;
	os__FilePermission owner;
	os__FilePermission group;
	os__FilePermission others;
};

struct gg__Config {
	int width;
	int height;
	bool use_ortho;
	bool retina;
	bool resizable;
	voidptr user_data;
	int font_size;
	bool create_window;
	string window_title;
	bool borderless_window;
	bool always_on_top;
	gx__Color bg_color;
	gg__FNCb init_fn;
	gg__FNCb frame_fn;
	gg__FNCb cleanup_fn;
	gg__FNFail fail_fn;
	gg__FNEvent event_fn;
	gg__FNKeyDown keydown_fn;
	gg__FNChar char_fn;
	gg__FNMove move_fn;
	gg__FNMove click_fn;
	bool wait_events;
	bool fullscreen;
	f32 scale;
	string font_path;
};

struct sync__Subscription {
	sync__Semaphore sem;
	sync__Subscription** prev;
	sync__Subscription* nxt;
};

struct sync__Channel {
	sync__Semaphore writesem;
	sync__Semaphore readsem;
	sync__Semaphore writesem_im;
	sync__Semaphore readsem_im;
	byteptr ringbuf;
	byteptr statusbuf;
	u32 objsize;
	atomic_uintptr_t write_adr;
	atomic_uintptr_t read_adr;
	atomic_uintptr_t adr_read;
	atomic_uintptr_t adr_written;
	u32 write_free;
	u32 read_avail;
	u32 buf_elem_write_idx;
	u32 buf_elem_read_idx;
	sync__Subscription* write_subscriber;
	sync__Subscription* read_subscriber;
	u16 write_sub_mtx;
	u16 read_sub_mtx;
	u16 closed;
	u32 cap;
};

typedef sapp_touchpoint array_fixed_C__sapp_touchpoint_8 [8];
typedef sg_buffer array_fixed_C__sg_buffer_8 [8];
typedef sg_image array_fixed_C__sg_image_8 [8];
typedef sg_shader_attr_desc array_fixed_C__sg_shader_attr_desc_16 [16];
typedef sg_shader_image_desc array_fixed_C__sg_shader_image_desc_12 [12];
typedef sg_shader_uniform_desc array_fixed_C__sg_shader_uniform_desc_16 [16];
typedef sg_subimage_content array_fixed_C__sg_subimage_content_16 [16];
typedef sg_buffer_layout_desc array_fixed_C__sg_buffer_layout_desc_8 [8];
typedef sg_vertex_attr_desc array_fixed_C__sg_vertex_attr_desc_16 [16];
struct ui__Button {
	int text_width;
	int text_height;
	ui__ButtonState state;
	int height;
	int width;
	int x;
	int y;
	ui__Layout parent;
	bool is_focused;
	ui__UI* ui;
	ui__ButtonClickFn onclick;
	string text;
	string icon_path;
	gg__Image image;
	bool use_icon;
};

struct ui__UI {
	gg__Context* gg;
	ui__Window* window;
	bool show_cursor;
	i64 last_type_time;
	gg__Image cb_image;
	gg__Image radio_image;
	gg__Image selected_radio_image;
	gg__Image down_arrow;
	clipboard__Clipboard* clipboard;
	bool redraw_requested;
	map_string_gg__Image resource_cache;
	bool closed;
	bool needs_refresh;
	int ticks;
};

struct ui__Picture {
	int offset_x;
	int offset_y;
	string text;
	ui__Layout parent;
	int x;
	int y;
	int width;
	int height;
	string path;
	ui__UI* ui;
	gg__Image image;
	ui__PictureClickFn on_click;
	bool use_cache;
};

struct ui__PictureConfig {
	string path;
	int width;
	int height;
	ui__PictureClickFn on_click;
	bool use_cache;
	ui__Picture* ref;
	gg__Image image;
};

struct sokol__sapp__Event {
	u64 frame_count;
	sokol__sapp__EventType typ;
	sokol__sapp__KeyCode key_code;
	u32 char_code;
	bool key_repeat;
	u32 modifiers;
	sokol__sapp__MouseButton mouse_button;
	f32 mouse_x;
	f32 mouse_y;
	f32 mouse_dx;
	f32 mouse_dy;
	f32 scroll_x;
	f32 scroll_y;
	int num_touches;
	array_fixed_C__sapp_touchpoint_8 touches;
	int window_width;
	int window_height;
	int framebuffer_width;
	int framebuffer_height;
};

typedef sg_attachment_desc array_fixed_C__sg_attachment_desc_4 [4];
typedef sg_color_attachment_action array_fixed_C__sg_color_attachment_action_4 [4];
typedef array_fixed_C__sg_subimage_content_16 array_fixed_array_fixed_C__sg_subimage_content_16_6 [6];
typedef sg_shader_uniform_block_desc array_fixed_C__sg_shader_uniform_block_desc_4 [4];
struct gg__Context {
	bool render_text;
	array_gg__Image image_cache;
	f32 scale;
	int width;
	int height;
	struct sg_pass_action clear_pass;
	struct sapp_desc window;
	struct sgl_pipeline timage_pip;
	gg__Config config;
	gg__FT* ft;
	bool font_inited;
};


// BEGIN_multi_return_structs
typedef struct {
	u32 arg0;
	u32 arg1;
} multi_return_u32_u32;

typedef struct {
	u32 arg0;
	u32 arg1;
	u32 arg2;
} multi_return_u32_u32_u32;

typedef struct {
	int arg0;
	strconv__PrepNumber arg1;
} multi_return_int_strconv__PrepNumber;

typedef struct {
	u64 arg0;
	int arg1;
} multi_return_u64_int;

typedef struct {
	strconv__Dec32 arg0;
	bool arg1;
} multi_return_strconv__Dec32_bool;

typedef struct {
	strconv__Dec64 arg0;
	bool arg1;
} multi_return_strconv__Dec64_bool;

typedef struct {
	int arg0;
	int arg1;
} multi_return_int_int;

typedef struct {
	string arg0;
	string arg1;
} multi_return_string_string;

typedef struct {
	int arg0;
	bool arg1;
} multi_return_int_bool;

typedef struct {
	u64 arg0;
	u64 arg1;
} multi_return_u64_u64;

typedef struct {
	int arg0;
	int arg1;
	int arg2;
} multi_return_int_int_int;

typedef struct {
	any_int arg0;
	any_int arg1;
} multi_return_any_int_any_int;

// END_multi_return_structs

string strings__Builder_str_no_ptr(strings__Builder it); // auto no_ptr version
string time__FormatTime_str(time__FormatTime it); // auto
string time__FormatDate_str(time__FormatDate it); // auto
string sokol__sapp__EventType_str(sokol__sapp__EventType it); // auto

typedef struct thread_arg_sync__process_in_thread {
	sync__PoolProcessor* arg1;
	int arg2;
} thread_arg_sync__process_in_thread;
void* sync__process_in_thread_thread_wrapper(thread_arg_sync__process_in_thread *arg);

typedef struct thread_arg_clipboard__Clipboard_start_listener {
	clipboard__Clipboard* arg0;
EMPTY_STRUCT_DECLARATION;
} thread_arg_clipboard__Clipboard_start_listener;
void* clipboard__Clipboard_start_listener_thread_wrapper(thread_arg_clipboard__Clipboard_start_listener *arg);

typedef struct thread_arg_ui__UI_idle_loop {
	ui__UI* arg0;
EMPTY_STRUCT_DECLARATION;
} thread_arg_ui__UI_idle_loop;
void* ui__UI_idle_loop_thread_wrapper(thread_arg_ui__UI_idle_loop *arg);

typedef struct thread_arg_ui__run_message_dialog {
	ui__MessageApp* arg1;
	string arg2;
} thread_arg_ui__run_message_dialog;
void* ui__run_message_dialog_thread_wrapper(thread_arg_ui__run_message_dialog *arg);

//BEGIN_variadic_structs
struct varg_voidptr {
	int len;
	voidptr args[0];
};

struct varg_string {
	int len;
	string args[1];
};

struct varg_int {
	int len;
	int args[0];
};

struct varg_clipboard__AtomType {
	int len;
	clipboard__AtomType args[5];
};

// END_variadic_structs


// V Option_xxx definitions:
struct Option_int {
	bool ok;
	bool is_none;
	string v_error;
	int ecode;
	byte data[sizeof(int)];
};

struct Option_string {
	bool ok;
	bool is_none;
	string v_error;
	int ecode;
	byte data[sizeof(string)];
};

struct Option_array_byte {
	bool ok;
	bool is_none;
	string v_error;
	int ecode;
	byte data[sizeof(array_byte)];
};

struct Option_FILE_ptr {
	bool ok;
	bool is_none;
	string v_error;
	int ecode;
	byte data[sizeof(FILE*)];
};

struct Option_void {
	bool ok;
	bool is_none;
	string v_error;
	int ecode;
	byte data[sizeof(int)];
};

struct Option_array_string {
	bool ok;
	bool is_none;
	string v_error;
	int ecode;
	byte data[sizeof(array_string)];
};

struct Option_bool {
	bool ok;
	bool is_none;
	string v_error;
	int ecode;
	byte data[sizeof(bool)];
};

struct Option_array_ustring {
	bool ok;
	bool is_none;
	string v_error;
	int ecode;
	byte data[sizeof(array_ustring)];
};

struct Option_os__File {
	bool ok;
	bool is_none;
	string v_error;
	int ecode;
	byte data[sizeof(os__File)];
};

struct Option_os__Result {
	bool ok;
	bool is_none;
	string v_error;
	int ecode;
	byte data[sizeof(os__Result)];
};

struct Option_time__Time {
	bool ok;
	bool is_none;
	string v_error;
	int ecode;
	byte data[sizeof(time__Time)];
};

struct Option_stbi__Image {
	bool ok;
	bool is_none;
	string v_error;
	int ecode;
	byte data[sizeof(stbi__Image)];
};

struct Option_gg__FT_ptr {
	bool ok;
	bool is_none;
	string v_error;
	int ecode;
	byte data[sizeof(gg__FT*)];
};

struct Option_multi_return_string_string {
	bool ok;
	bool is_none;
	string v_error;
	int ecode;
	byte data[sizeof(multi_return_string_string)];
};


// V json forward decls:

// V definitions:
void _STR_PRINT_ARG(const char*, char**, int*, int*, int, ...);
string _STR(const char*, int, ...);
string _STR_TMP(const char*, ...);
// end of definitions #endif
strings__Builder strings__new_builder(int initial_size);
void strings__Builder_write_bytes(strings__Builder* b, byteptr bytes, int howmany);
void strings__Builder_write_b(strings__Builder* b, byte data);
void strings__Builder_write(strings__Builder* b, string s);
void strings__Builder_go_back(strings__Builder* b, int n);
static string strings__bytes2string(array_byte b);
string strings__Builder_cut_last(strings__Builder* b, int n);
void strings__Builder_go_back_to(strings__Builder* b, int pos);
void strings__Builder_writeln(strings__Builder* b, string s);
string strings__Builder_last_n(strings__Builder* b, int n);
string strings__Builder_after(strings__Builder* b, int n);
string strings__Builder_str(strings__Builder* b);
void strings__Builder_free(strings__Builder* b);
int strings__levenshtein_distance(string a, string b);
f32 strings__levenshtein_distance_percentage(string a, string b);
f32 strings__dice_coefficient(string s1, string s2);
string strings__repeat(byte c, int n);
string strings__repeat_string(string s, int n);
u64 _const_hash__wyp0; // inited later
u64 _const_hash__wyp1; // inited later
u64 _const_hash__wyp2; // inited later
u64 _const_hash__wyp3; // inited later
u64 _const_hash__wyp4; // inited later
u64 hash__wyhash_c(byteptr key, u64 len, u64 seed);
u64 hash__sum64_string(string key, u64 seed);
u64 hash__sum64(array_byte key, u64 seed);
static u64 hash__wyhash64(byteptr key, u64 len, u64 seed_);
static u64 hash__wyrotr(u64 v, u32 k);
u64 hash__wymum(u64 a, u64 b);
static u64 hash__wyr3(byteptr p, u64 k);
static u64 hash__wyr4(byteptr p);
static u64 hash__wyr8(byteptr p);
u32 _const_math__bits__de_bruijn32; // inited later
array_byte _const_math__bits__de_bruijn32tab; // inited later
u64 _const_math__bits__de_bruijn64; // inited later
array_byte _const_math__bits__de_bruijn64tab; // inited later
u64 _const_math__bits__m0; // inited later
u64 _const_math__bits__m1; // inited later
u64 _const_math__bits__m2; // inited later
u64 _const_math__bits__m3; // inited later
u64 _const_math__bits__m4; // inited later
u32 _const_math__bits__max_u32; // inited later
u64 _const_math__bits__max_u64; // inited later
int math__bits__leading_zeros_8(byte x);
int math__bits__leading_zeros_16(u16 x);
int math__bits__leading_zeros_32(u32 x);
int math__bits__leading_zeros_64(u64 x);
int math__bits__trailing_zeros_8(byte x);
int math__bits__trailing_zeros_16(u16 x);
int math__bits__trailing_zeros_32(u32 x);
int math__bits__trailing_zeros_64(u64 x);
int math__bits__ones_count_8(byte x);
int math__bits__ones_count_16(u16 x);
int math__bits__ones_count_32(u32 x);
int math__bits__ones_count_64(u64 x);
byte math__bits__rotate_left_8(byte x, int k);
u16 math__bits__rotate_left_16(u16 x, int k);
u32 math__bits__rotate_left_32(u32 x, int k);
u64 math__bits__rotate_left_64(u64 x, int k);
byte math__bits__reverse_8(byte x);
u16 math__bits__reverse_16(u16 x);
u32 math__bits__reverse_32(u32 x);
u64 math__bits__reverse_64(u64 x);
u16 math__bits__reverse_bytes_16(u16 x);
u32 math__bits__reverse_bytes_32(u32 x);
u64 math__bits__reverse_bytes_64(u64 x);
int math__bits__len_8(byte x);
int math__bits__len_16(u16 x);
int math__bits__len_32(u32 x);
int math__bits__len_64(u64 x);
multi_return_u32_u32 math__bits__add_32(u32 x, u32 y, u32 carry);
multi_return_u64_u64 math__bits__add_64(u64 x, u64 y, u64 carry);
multi_return_u32_u32 math__bits__sub_32(u32 x, u32 y, u32 borrow);
multi_return_u64_u64 math__bits__sub_64(u64 x, u64 y, u64 borrow);
u64 _const_math__bits__two32; // inited later
u64 _const_math__bits__mask32; // inited later
string _const_math__bits__overflow_error; // a string literal, inited later
string _const_math__bits__divide_error; // a string literal, inited later
multi_return_u32_u32 math__bits__mul_32(u32 x, u32 y);
multi_return_u64_u64 math__bits__mul_64(u64 x, u64 y);
multi_return_u32_u32 math__bits__div_32(u32 hi, u32 lo, u32 y);
multi_return_u64_u64 math__bits__div_64(u64 hi, u64 lo, u64 y1);
u32 math__bits__rem_32(u32 hi, u32 lo, u32 y);
u64 math__bits__rem_64(u64 hi, u64 lo, u64 y);
array_byte _const_math__bits__ntz_8_tab; // inited later
array_byte _const_math__bits__pop_8_tab; // inited later
array_byte _const_math__bits__rev_8_tab; // inited later
array_byte _const_math__bits__len_8_tab; // inited later
static multi_return_u32_u32_u32 strconv__lsr96(u32 s2, u32 s1, u32 s0);
static multi_return_u32_u32_u32 strconv__lsl96(u32 s2, u32 s1, u32 s0);
static multi_return_u32_u32_u32 strconv__add96(u32 s2, u32 s1, u32 s0, u32 d2, u32 d1, u32 d0);
static multi_return_u32_u32_u32 strconv__sub96(u32 s2, u32 s1, u32 s0, u32 d2, u32 d1, u32 d0);
#define _const_strconv__digits 18
u64 _const_strconv__double_plus_zero; // inited later
u64 _const_strconv__double_minus_zero; // inited later
u64 _const_strconv__double_plus_infinity; // inited later
u64 _const_strconv__double_minus_infinity; // inited later
#define _const_strconv__fsm_a 0
#define _const_strconv__fsm_b 1
#define _const_strconv__fsm_c 2
#define _const_strconv__fsm_d 3
#define _const_strconv__fsm_e 4
#define _const_strconv__fsm_f 5
#define _const_strconv__fsm_g 6
#define _const_strconv__fsm_h 7
#define _const_strconv__fsm_i 8
#define _const_strconv__fsm_stop 9
#define _const_strconv__parser_ok 0
#define _const_strconv__parser_pzero 1
#define _const_strconv__parser_mzero 2
#define _const_strconv__parser_pinf 3
#define _const_strconv__parser_minf 4
#define _const_strconv__c_dpoint '.'
#define _const_strconv__c_plus '+'
#define _const_strconv__c_minus '-'
#define _const_strconv__c_zero '0'
#define _const_strconv__c_nine '9'
u32 _const_strconv__c_ten; // inited later
static bool strconv__is_digit(byte x);
static bool strconv__is_space(byte x);
static bool strconv__is_exp(byte x);
static multi_return_int_strconv__PrepNumber strconv__parser(string s);
static u64 strconv__converter(strconv__PrepNumber* pn);
f64 strconv__atof64(string s);
f64 strconv__atof_quick(string s);
array_u64 _const_strconv__pos_exp; // inited later
array_u64 _const_strconv__neg_exp; // inited later
#define _const_strconv__int_size 32
u64 _const_strconv__max_u64; // inited later
byte strconv__byte_to_lower(byte c);
u64 strconv__common_parse_uint(string s, int _base, int _bit_size, bool error_on_non_digit, bool error_on_high_digit);
multi_return_u64_int strconv__common_parse_uint2(string s, int _base, int _bit_size);
u64 strconv__parse_uint(string s, int _base, int _bit_size);
i64 strconv__common_parse_int(string _s, int base, int _bit_size, bool error_on_non_digit, bool error_on_high_digit);
i64 strconv__parse_int(string _s, int base, int _bit_size);
int strconv__atoi(string s);
static bool strconv__underscore_ok(string s);
array_u32 _const_strconv__ten_pow_table_32; // inited later
u32 _const_strconv__mantbits32; // inited later
u32 _const_strconv__expbits32; // inited later
#define _const_strconv__bias32 127
#define _const_strconv__maxexp32 255
string strconv__Dec32_get_string_32(strconv__Dec32 d, bool neg, int i_n_digit, int i_pad_digit);
static multi_return_strconv__Dec32_bool strconv__f32_to_decimal_exact_int(u32 i_mant, u32 exp);
strconv__Dec32 strconv__f32_to_decimal(u32 mant, u32 exp);
string strconv__f32_to_str(f32 f, int n_digit);
string strconv__f32_to_str_pad(f32 f, int n_digit);
array_u64 _const_strconv__ten_pow_table_64; // inited later
u32 _const_strconv__mantbits64; // inited later
u32 _const_strconv__expbits64; // inited later
#define _const_strconv__bias64 1023
#define _const_strconv__maxexp64 2047
static string strconv__Dec64_get_string_64(strconv__Dec64 d, bool neg, int i_n_digit, int i_pad_digit);
static multi_return_strconv__Dec64_bool strconv__f64_to_decimal_exact_int(u64 i_mant, u64 exp);
static strconv__Dec64 strconv__f64_to_decimal(u64 mant, u64 exp);
string strconv__f64_to_str(f64 f, int n_digit);
string strconv__f64_to_str_pad(f64 f, int n_digit);
array_f64 _const_strconv__dec_round; // inited later
string strconv__f64_to_str_lnd(f64 f, int dec_digit);
string strconv__format_str(string s, strconv__BF_param p);
string strconv__format_dec(u64 d, strconv__BF_param p);
string strconv__format_fl(f64 f, strconv__BF_param p);
string strconv__format_es(f64 f, strconv__BF_param p);
string strconv__remove_tail_zeros(string s);
void strconv__v_printf(string str, varg_voidptr pt);
string strconv__v_sprintf(string str, varg_voidptr pt);
static void strconv__v_sprintf_panic(int idx, int len);
static f64 strconv__fabs(f64 x);
string strconv__ftoa_64(f64 f);
string strconv__ftoa_long_64(f64 f);
string strconv__ftoa_32(f32 f);
string strconv__ftoa_long_32(f32 f);
#define _const_strconv__pow5_num_bits_32 61
#define _const_strconv__pow5_inv_num_bits_32 59
#define _const_strconv__pow5_num_bits_64 121
#define _const_strconv__pow5_inv_num_bits_64 122
array_u64 _const_strconv__powers_of_10; // inited later
array_u64 _const_strconv__pow5_split_32; // inited later
array_u64 _const_strconv__pow5_inv_split_32; // inited later
array_strconv__Uint128 _const_strconv__pow5_split_64; // inited later
array_strconv__Uint128 _const_strconv__pow5_inv_split_64; // inited later
static void strconv__assert1(bool t, string msg);
static int strconv__bool_to_int(bool b);
static u32 strconv__bool_to_u32(bool b);
static u64 strconv__bool_to_u64(bool b);
static string strconv__get_string_special(bool neg, bool expZero, bool mantZero);
static int strconv__decimal_len_32(u32 u);
static u32 strconv__mul_shift_32(u32 m, u64 mul, int ishift);
static u32 strconv__mul_pow5_invdiv_pow2(u32 m, u32 q, int j);
static u32 strconv__mul_pow5_div_pow2(u32 m, u32 i, int j);
static u32 strconv__pow5_factor_32(u32 i_v);
static bool strconv__multiple_of_power_of_five_32(u32 v, u32 p);
static bool strconv__multiple_of_power_of_two_32(u32 v, u32 p);
static u32 strconv__log10_pow2(int e);
static u32 strconv__log10_pow5(int e);
static int strconv__pow5_bits(int e);
static int strconv__decimal_len_64(u64 u);
static u64 strconv__shift_right_128(strconv__Uint128 v, int shift);
static u64 strconv__mul_shift_64(u64 m, strconv__Uint128 mul, int shift);
static u32 strconv__pow5_factor_64(u64 v_i);
static bool strconv__multiple_of_power_of_five_64(u64 v, u32 p);
static bool strconv__multiple_of_power_of_two_64(u64 v, u32 p);
string strconv__f32_to_str_l(f64 f);
string strconv__f64_to_str_l(f64 f);
static array __new_array(int mylen, int cap, int elm_size);
static array __new_array_with_default(int mylen, int cap, int elm_size, voidptr val);
static array __new_array_with_array_default(int mylen, int cap, int elm_size, array val);
static array new_array_from_c_array(int len, int cap, int elm_size, voidptr c_array);
static array new_array_from_c_array_no_alloc(int len, int cap, int elm_size, voidptr c_array);
static void array_ensure_cap(array* a, int required);
array array_repeat(array a, int count);
void array_sort_with_compare(array* a, voidptr compare);
void array_insert(array* a, int i, voidptr val);
void array_insert_many(array* a, int i, voidptr val, int size);
void array_prepend(array* a, voidptr val);
void array_prepend_many(array* a, voidptr val, int size);
void array_delete(array* a, int i);
void array_clear(array* a);
void array_trim(array* a, int index);
static voidptr array_get_unsafe(array a, int i);
static voidptr array_get(array a, int i);
voidptr array_first(array a);
voidptr array_last(array a);
voidptr array_pop(array* a);
void array_delete_last(array* a);
static array array_slice(array a, int start, int _end);
static array array_slice2(array a, int start, int _end, bool end_max);
static array array_clone_static(array a);
array array_clone(array* a);
static array array_slice_clone(array* a, int start, int _end);
static void array_set_unsafe(array* a, int i, voidptr val);
static void array_set(array* a, int i, voidptr val);
static void array_push(array* a, voidptr val);
void array_push_many(array* a3, voidptr val, int size);
void array_reverse_in_place(array* a);
array array_reverse(array a);
void array_free(array* a);
string array_string_str(array_string a);
string array_byte_hex(array_byte b);
int copy(array_byte dst, array_byte src);
static int compare_ints(int* a, int* b);
static int compare_ints_reverse(int* a, int* b);
static int compare_floats(f64* a, f64* b);
static int compare_floats_reverse(f64* a, f64* b);
void array_int_sort(array_int* a);
int array_string_index(array_string a, string v);
int array_int_index(array_int a, int v);
int array_byte_index(array_byte a, byte v);
int array_rune_index(array_rune a, rune v);
int array_char_index(array_char a, char v);
int array_int_reduce(array_int a, int (*iter)(int , int ), int accum_start);
bool array_string_eq(array_string a1, array_string a2);
int compare_i64(i64* a, i64* b);
int compare_f64(f64* a, f64* b);
int compare_f32(f32* a, f32* b);
array_voidptr array_pointers(array a);
byteptr g_m2_buf; // global
byteptr g_m2_ptr; // global
void v_exit(int code);
bool isnil(voidptr v);
void print_backtrace();
static void panic_debug(int line_no, string file, string mod, string fn_name, string s);
void v_panic(string s);
void eprintln(string s);
void eprint(string s);
void print(string s);
string _const_new_line_character; // a string literal, inited later
void println(string s);
i64 total_m = 0; // global
int nr_mallocs = 0; // global
byteptr v_malloc(int n);
byteptr v_realloc(byteptr b, u32 n);
byteptr v_calloc(int n);
byteptr vcalloc(int n);
void v_free(voidptr ptr);
voidptr memdup(voidptr src, int sz);
static void v_ptr_free(voidptr ptr);
int is_atty(int fd);
static voidptr __as_cast(voidptr obj, int obj_type, int expected_type);
static void __print_assert_failure(VAssertMetaInfo* i);
static void builtin_init();
static bool print_backtrace_skipping_top_frames(int xskipframes);
static bool print_backtrace_skipping_top_frames_mac(int skipframes);
static bool print_backtrace_skipping_top_frames_freebsd(int skipframes);
static bool print_backtrace_skipping_top_frames_linux(int skipframes);
static void break_if_debugger_attached();
int proc_pidpath(int , voidptr , int );
void chan_close(chan ch);
ChanState chan_try_pop(chan ch, voidptr obj);
ChanState chan_try_push(chan ch, voidptr obj);
string f64_str(f64 x);
string any_float_str(any_float d);
string f64_strsci(f64 x, int digit_num);
string f64_strlong(f64 x);
string f32_str(f32 x);
string f32_strsci(f32 x, int digit_num);
string f32_strlong(f32 x);
f32 f32_abs(f32 a);
static f64 f64_abs(f64 a);
f32 f32_max(f32 a, f32 b);
f32 f32_min(f32 a, f32 b);
f64 f64_max(f64 a, f64 b);
static f64 f64_min(f64 a, f64 b);
bool f32_eq_epsilon(f32 a, f32 b);
bool f64_eq_epsilon(f64 a, f64 b);
string ptr_str(voidptr ptr);
string _const_digit_pairs; // a string literal, inited later
string int_str_l(int nn, int max);
string i8_str(i8 n);
string i16_str(i16 n);
string u16_str(u16 n);
string int_str(int n);
string u32_str(u32 nn);
string any_int_str(any_int n);
string i64_str(i64 nn);
string u64_str(u64 nn);
string bool_str(bool b);
static string u64_to_hex(u64 nn, byte len);
static string u64_to_hex_no_leading_zeros(u64 nn, byte len);
string byte_hex(byte nn);
string i8_hex(i8 nn);
string u16_hex(u16 nn);
string i16_hex(i16 nn);
string u32_hex(u32 nn);
string int_hex(int nn);
string int_hex2(int n);
string u64_hex(u64 nn);
string i64_hex(i64 nn);
string any_int_hex(any_int nn);
string voidptr_str(voidptr nn);
string byteptr_str(byteptr nn);
string u64_hex_full(u64 nn);
string byte_str(byte b);
string byte_str_escaped(byte b);
bool array_byte_contains(array_byte a, byte val);
bool array_u16_contains(array_u16 a, u16 val);
static bool array_int_contains(array_int ar, int val);
bool array_u64_contains(array_u64 a, u64 val);
#define _const_hashbits 24
#define _const_max_cached_hashbits 16
#define _const_init_log_capicity 5
int _const_init_capicity; // inited later
#define _const_max_load_factor 0.8
int _const_init_cap; // inited later
#define _const_extra_metas_inc 4
u32 _const_hash_mask; // inited later
u32 _const_probe_inc; // inited later
static bool fast_string_eq(string a, string b);
static DenseArray new_dense_array(int value_bytes);
static u32 DenseArray_push(DenseArray* d, string key, voidptr value);
static voidptr DenseArray_get(DenseArray d, int i);
static void DenseArray_zeros_to_end(DenseArray* d);
static map new_map_1(int value_bytes);
static map new_map_init(int n, int value_bytes, string* keys, voidptr values);
static multi_return_u32_u32 map_key_to_index(map* m, string key);
static multi_return_u32_u32 map_meta_less(map* m, u32 _index, u32 _metas);
static void map_meta_greater(map* m, u32 _index, u32 _metas, u32 kvi);
static void map_ensure_extra_metas(map* m, u32 probe_count);
static void map_set(map* m, string k, voidptr value);
static void map_expand(map* m);
static void map_rehash(map* m);
static void map_cached_rehash(map* m, u32 old_cap);
static voidptr map_get_and_set(map* m, string key, voidptr zero);
static voidptr map_get(map m, string key, voidptr zero);
static bool map_exists(map m, string key);
void map_delete(map* m, string key);
array_string map_keys(map* m);
DenseArray DenseArray_clone(DenseArray d);
map map_clone(map m);
void map_free(map* m);
string OptionBase_str(OptionBase o);
static void opt_ok2(voidptr data, OptionBase* option, int size);
string Option_str(Option o);
static Option opt_none();
Option v_error(string s);
Option error_with_code(string s, int code);
string rune_str(rune c);
bool byte_is_capital(byte c);
array_byte array_byte_clone(array_byte b);
string array_byte_bytestr(array_byte b);
static string bytes2string(array_byte b);
#define _const_degree 6
int _const_mid_index; // inited later
int _const_max_len; // inited later
u32 _const_children_bytes; // inited later
static SortedMap new_sorted_map(int n, int value_bytes);
static SortedMap new_sorted_map_init(int n, int value_bytes, string* keys, voidptr values);
static mapnode* new_node();
static void SortedMap_set(SortedMap* m, string key, voidptr value);
static void mapnode_split_child(mapnode* n, int child_index, mapnode* y);
static bool SortedMap_get(SortedMap m, string key, voidptr out);
static bool SortedMap_exists(SortedMap m, string key);
static int mapnode_find_key(mapnode* n, string k);
static bool mapnode_remove_key(mapnode* n, string k);
static void mapnode_remove_from_leaf(mapnode* n, int idx);
static void mapnode_remove_from_non_leaf(mapnode* n, int idx);
static void mapnode_fill(mapnode* n, int idx);
static void mapnode_borrow_from_prev(mapnode* n, int idx);
static void mapnode_borrow_from_next(mapnode* n, int idx);
static void mapnode_merge(mapnode* n, int idx);
void SortedMap_delete(SortedMap* m, string key);
static int mapnode_subkeys(mapnode* n, array_string* keys, int at);
array_string SortedMap_keys(SortedMap* m);
static void mapnode_free(mapnode* n);
void SortedMap_free(SortedMap* m);
void SortedMap_print(SortedMap m);
int vstrlen(byteptr s);
string tos(byteptr s, int len);
string tos_clone(byteptr s);
string tos2(byteptr s);
string tos3(charptr s);
string tos_lit(charptr s);
string byteptr_vstring(byteptr bp);
string byteptr_vstring_with_len(byteptr bp, int len);
static string string_clone_static(string a);
string string_clone(string a);
string cstring_to_vstring(byteptr cstr);
string string_replace_once(string s, string rep, string with);
string string_replace(string s, string rep, string with);
static int compare_rep_index(RepIndex* a, RepIndex* b);
static void array_RepIndex_sort2(array_RepIndex* a);
string string_replace_each(string s, array_string vals);
bool string_bool(string s);
int string_int(string s);
i64 string_i64(string s);
i8 string_i8(string s);
i16 string_i16(string s);
f32 string_f32(string s);
f64 string_f64(string s);
u16 string_u16(string s);
u32 string_u32(string s);
u64 string_u64(string s);
static bool string_eq(string s, string a);
static bool string_ne(string s, string a);
static bool string_lt(string s, string a);
static bool string_le(string s, string a);
static bool string_gt(string s, string a);
static bool string_ge(string s, string a);
static string string_add(string s, string a);
array_string string_split(string s, string delim);
array_string string_split_nth(string s, string delim, int nth);
array_string string_split_into_lines(string s);
static string string_left(string s, int n);
static string string_right(string s, int n);
static string string_substr2(string s, int start, int _end, bool end_max);
string string_substr(string s, int start, int end);
int string_index_old(string s, string p);
Option_int string_index(string s, string p);
static int string_index_kmp(string s, string p);
int string_index_any(string s, string chars);
Option_int string_last_index(string s, string p);
int string_index_after(string s, string p, int start);
int string_index_byte(string s, byte c);
int string_last_index_byte(string s, byte c);
int string_count(string s, string substr);
bool string_contains(string s, string substr);
bool string_contains_any(string s, string chars);
bool string_contains_any_substr(string s, array_string substrs);
bool string_starts_with(string s, string p);
bool string_ends_with(string s, string p);
string string_to_lower(string s);
bool string_is_lower(string s);
string string_to_upper(string s);
bool string_is_upper(string s);
string string_capitalize(string s);
bool string_is_capital(string s);
string string_title(string s);
bool string_is_title(string s);
string string_find_between(string s, string start, string end);
static bool array_string_contains(array_string ar, string val);
bool byte_is_space(byte c);
string string_trim_space(string s);
string string_trim(string s, string cutset);
string string_trim_left(string s, string cutset);
string string_trim_right(string s, string cutset);
string string_trim_prefix(string s, string str);
string string_trim_suffix(string s, string str);
int compare_strings(string* a, string* b);
static int compare_strings_reverse(string* a, string* b);
static int compare_strings_by_len(string* a, string* b);
static int compare_lower_strings(string* a, string* b);
void array_string_sort(array_string* s);
void array_string_sort_ignore_case(array_string* s);
void array_string_sort_by_len(array_string* s);
string string_str(string s);
string ustring_str(ustring s);
ustring string_ustring(string s);
array_int g_ustring_runes; // global
ustring string_ustring_tmp(string s);
static bool ustring_eq(ustring u, ustring a);
static bool ustring_ne(ustring u, ustring a);
static bool ustring_lt(ustring u, ustring a);
static bool ustring_le(ustring u, ustring a);
static bool ustring_gt(ustring u, ustring a);
static bool ustring_ge(ustring u, ustring a);
ustring ustring_add(ustring u, ustring a);
int ustring_index_after(ustring u, ustring p, int start);
int ustring_count(ustring u, ustring substr);
string ustring_substr(ustring u, int _start, int _end);
string ustring_left(ustring u, int pos);
string ustring_right(ustring u, int pos);
static byte string_at(string s, int idx);
string ustring_at(ustring u, int idx);
static void ustring_free(ustring* u);
bool byte_is_digit(byte c);
bool byte_is_hex_digit(byte c);
bool byte_is_oct_digit(byte c);
bool byte_is_bin_digit(byte c);
bool byte_is_letter(byte c);
void string_free(string* s);
string string_all_before(string s, string dot);
string string_all_before_last(string s, string dot);
string string_all_after(string s, string dot);
string string_all_after_last(string s, string dot);
string string_after(string s, string dot);
string string_after_char(string s, byte dot);
string array_string_join(array_string a, string del);
string array_string_join_lines(array_string s);
string string_reverse(string s);
string string_limit(string s, int max);
bool byte_is_white(byte c);
int string_hash(string s);
array_byte string_bytes(string s);
string string_repeat(string s, int count);
array_string string_fields(string s);
string string_map(string s, byte (*func)(byte ));
string string_filter(string s, bool (*func)(byte b));
string string_strip_margin(string s);
string string_strip_margin_custom(string s, byte del);
int utf8_char_len(byte b);
string utf32_to_str(u32 code);
string utf32_to_str_no_malloc(u32 code, voidptr buf);
int string_utf32_code(string _rune);
#define _const_cp_utf8 65001
u16* string_to_wide(string _str);
string string_from_wide(u16* _wstr);
string string_from_wide2(u16* _wstr, int len);
static int utf8_len(byte c);
static int utf8_str_len(string s);
static int utf8_str_visible_length(string s);
int utf8_getchar();
#define _const_os__s_ifmt 0xF000
#define _const_os__s_ifdir 0x4000
#define _const_os__s_iflnk 0xa000
#define _const_os__s_ixusr 0100
#define _const_os__s_ixgrp 0010
#define _const_os__s_ixoth 0001
int _const_os__std_input_handle; // inited later
int _const_os__std_output_handle; // inited later
int _const_os__std_error_handle; // inited later
#define _const_os__o_rdonly 0
#define _const_os__o_wronly 1
#define _const_os__o_rdwr 2
#define _const_os__o_create 100
#define _const_os__o_binary 8000
#define _const_os__o_excl 200
#define _const_os__o_noctty 400
#define _const_os__o_trunc 1000
#define _const_os__o_append 2000
#define _const_os__o_nonblock 4000
#define _const_os__o_sync 10000
string os__getenv(string key);
int os__setenv(string name, string value, bool overwrite);
int os__unsetenv(string name);
map_string_string os__environ();
bool os__File_is_opened(os__File f);
Option_int os__File_write(os__File* f, string s);
Option_int os__File_writeln(os__File* f, string s);
int os__File_write_bytes(os__File* f, voidptr data, int size);
int os__File_write_bytes_at(os__File* f, voidptr data, int size, int pos);
array_byte os__File_read_bytes(os__File* f, int size);
array_byte os__File_read_bytes_at(os__File* f, int size, int pos);
Option_int os__File_read_bytes_into(os__File* f, int pos, array_byte* buf);
void os__File_flush(os__File* f);
os__File os__open_stdin();
Option_string os__File_get_line(os__File* f);
os__FileMode os__inode(string path);
array_string _const_os__args; // inited later
#define _const_os__max_path_len 4096
Option_array_byte os__read_bytes(string path);
Option_string os__read_file(string path);
int os__file_size(string path);
void os__mv(string src, string dst);
Option_void os__cp(string src, string dst);
Option_void os__cp_r(string osource_path, string odest_path, bool overwrite);
Option_void os__cp_all(string src, string dst, bool overwrite);
Option_void os__mv_by_cp(string source, string target);
Option_FILE_ptr os__vfopen(string path, string mode);
int os__fileno(voidptr cfile);
Option_array_string os__read_lines(string path);
static Option_array_ustring os__read_ulines(string path);
Option_os__File os__open_append(string path);
Option_os__File os__open_file(string path, string mode, varg_int options);
static voidptr os__vpopen(string path);
static multi_return_int_bool os__posix_wait4_to_exit_status(int waitret);
string os__posix_get_error_msg(int code);
static int os__vpclose(voidptr f);
int os__system(string cmd);
string os__sigint_to_signal_name(int si);
#define _const_os__f_ok 0
#define _const_os__x_ok 1
#define _const_os__w_ok 2
#define _const_os__r_ok 4
bool os__exists(string path);
bool os__is_executable(string path);
bool os__is_writable(string path);
bool os__is_readable(string path);
bool os__file_exists(string _path);
Option_void os__rm(string path);
Option_void os__rmdir(string path);
void os__rmdir_recursive(string path);
Option_void os__rmdir_all(string path);
bool os__is_dir_empty(string path);
static void os__print_c_errno();
string os__file_ext(string path);
string os__dir(string path);
string os__base(string path);
string os__file_name(string path);
string os__input(string prompt);
string os__get_line();
string os__get_raw_line();
array_byte os__get_raw_stdin();
array_string os__get_lines();
string os__get_lines_joined();
string os__user_os();
string os__home_dir();
Option_void os__write_file(string path, string text);
Option_void os__write_file_array(string path, array buffer);
void os__on_segfault(voidptr f);
string os__executable();
static string os__executable_fallback();
Option_string os__find_abs_path_of_executable(string exepath);
bool os__exists_in_system_path(string prog);
bool os__dir_exists(string path);
bool os__is_dir(string path);
bool os__is_file(string path);
bool os__is_link(string path);
void os__chdir(string path);
string os__getwd();
string os__real_path(string fpath);
static string os__normalize_drive_letter(string path);
bool os__is_abs_path(string path);
string os__join_path(string base, varg_string dirs);
array_string os__walk_ext(string path, string ext);
void os__walk(string path, void (*f)(string path));
void os__signal(int signum, voidptr handler);
int os__fork();
int os__wait();
int os__file_last_mod_unix(string path);
void os__log(string s);
void os__flush_stdout();
void os__flush();
Option_void os__mkdir_all(string path);
string os__cache_dir();
string os__temp_dir();
string os__vmodules_dir();
void os__chmod(string path, int mode);
string _const_os__wd_at_startup; // inited later
string os__resource_abs_path(string path);
Option_os__File os__open(string path);
Option_os__File os__create(string path);
#define _const_os__prot_read 1
#define _const_os__prot_write 2
#define _const_os__map_private 0x02
#define _const_os__map_anonymous 0x20
#define _const_os__sys_write 1
#define _const_os__sys_open 2
#define _const_os__sys_close 3
#define _const_os__sys_mkdir 83
#define _const_os__sys_creat 85
string _const_os__path_separator; // a string literal, inited later
string _const_os__path_delimiter; // a string literal, inited later
#define _const_os__stdin_value 0
#define _const_os__stdout_value 1
#define _const_os__stderr_value 2
os__Uname os__uname();
static array_string os__init_os_args(int argc, byte** argv);
Option_array_string os__ls(string path);
Option_bool os__mkdir(string path);
Option_os__Result os__exec(string cmd);
Option_void os__Command_start(os__Command* c);
string os__Command_read_line(os__Command* c);
Option_void os__Command_close(os__Command* c);
Option_bool os__symlink(string origin, string target);
string os__get_error_msg(int code);
void os__File_close(os__File* f);
bool os__debugger_present();
Option_bool os__is_writable_folder(string folder);
int os__getpid();
u64 _const_math__uvnan; // inited later
u64 _const_math__uvinf; // inited later
u64 _const_math__uvneginf; // inited later
u64 _const_math__uvone; // inited later
#define _const_math__mask 0x7FF
int _const_math__shift; // inited later
#define _const_math__bias 1023
u64 _const_math__sign_mask; // inited later
u64 _const_math__frac_mask; // inited later
f64 math__inf(int sign);
f64 math__nan();
bool math__is_nan(f64 f);
bool math__is_inf(f64 f, int sign);
#define _const_math__e 2.71828182845904523536028747135266249775724709369995957496696763
#define _const_math__pi 3.14159265358979323846264338327950288419716939937510582097494459
#define _const_math__phi 1.61803398874989484820458683436563811772030917980576286213544862
#define _const_math__tau 6.28318530717958647692528676655900576839433879875021164194988918
#define _const_math__sqrt2 1.41421356237309504880168872420969807856967187537694807317667974
#define _const_math__sqrt_e 1.64872127070012814684865078781416357165377610071014801157507931
#define _const_math__sqrt_pi 1.77245385090551602729816748334114518279754945612238712821380779
#define _const_math__sqrt_tau 2.50662827463100050241576528481104525300698674060993831662992357
#define _const_math__sqrt_phi 1.27201964951406896425242246173749149171560804184009624861664038
#define _const_math__ln2 0.693147180559945309417232121458176568075500134360255254120680009
f64 _const_math__log2_e; // inited later
#define _const_math__ln10 2.30258509299404568401799145468436420760110148862877297603332790
f64 _const_math__log10_e; // inited later
#define _const_math__max_f32 3.40282346638528859811704183484516925440e+38
#define _const_math__smallest_non_zero_f32 1.401298464324817070923729583289916131280e-45
#define _const_math__max_f64 1.797693134862315708145274237317043567981e+308
#define _const_math__smallest_non_zero_f64 4.940656458412465441765687928682213723651e-324
#define _const_math__max_i8 127
int _const_math__min_i8; // inited later
#define _const_math__max_i16 32767
int _const_math__min_i16; // inited later
#define _const_math__max_i32 2147483647
int _const_math__min_i32; // inited later
i64 _const_math__min_i64; // inited later
i64 _const_math__max_i64; // inited later
#define _const_math__max_u8 255
#define _const_math__max_u16 65535
u32 _const_math__max_u32; // inited later
u64 _const_math__max_u64; // inited later
f64 math__abs(f64 a);
f64 math__acos(f64 a);
f64 math__asin(f64 a);
f64 math__atan(f64 a);
f64 math__atan2(f64 a, f64 b);
f64 math__cbrt(f64 a);
f64 math__ceil(f64 a);
f64 math__cos(f64 a);
f32 math__cosf(f32 a);
f64 math__cosh(f64 a);
f64 math__exp(f64 a);
f64 math__erf(f64 a);
f64 math__erfc(f64 a);
f64 math__exp2(f64 a);
f64 math__floor(f64 a);
f64 math__fmod(f64 a, f64 b);
f64 math__gamma(f64 a);
f64 math__hypot(f64 a, f64 b);
f64 math__log(f64 a);
f64 math__log2(f64 a);
f64 math__log10(f64 a);
f64 math__log_gamma(f64 a);
f64 math__log_n(f64 a, f64 b);
f64 math__pow(f64 a, f64 b);
f32 math__powf(f32 a, f32 b);
f64 math__round(f64 f);
f64 math__sin(f64 a);
f32 math__sinf(f32 a);
f64 math__sinh(f64 a);
f64 math__sqrt(f64 a);
f32 math__sqrtf(f32 a);
f64 math__tan(f64 a);
f32 math__tanf(f32 a);
f64 math__tanh(f64 a);
f64 math__trunc(f64 a);
f64 math__aprox_sin(f64 a);
f64 math__aprox_cos(f64 a);
f64 math__copysign(f64 x, f64 y);
f64 math__degrees(f64 radians);
array_int math__digits(int _n, int base);
f64 math__fabs(f64 x);
i64 math__gcd(i64 a_, i64 b_);
i64 math__lcm(i64 a, i64 b);
f64 math__max(f64 a, f64 b);
f64 math__min(f64 a, f64 b);
f64 math__radians(f64 degrees);
u32 math__f32_bits(f32 f);
f32 math__f32_from_bits(u32 b);
u64 math__f64_bits(f64 f);
f64 math__f64_from_bits(u64 b);
eventbus__EventBus* eventbus__new();
void eventbus__EventBus_publish(eventbus__EventBus* eb, string name, voidptr sender, voidptr args);
void eventbus__EventBus_clear_all(eventbus__EventBus* eb);
bool eventbus__EventBus_has_subscriber(eventbus__EventBus* eb, string name);
static void eventbus__Publisher_publish(eventbus__Publisher* pb, string name, voidptr sender, voidptr args);
static void eventbus__Publisher_clear_all(eventbus__Publisher* p);
void eventbus__Subscriber_subscribe(eventbus__Subscriber* s, string name, eventbus__EventHandlerFn handler);
void eventbus__Subscriber_subscribe_method(eventbus__Subscriber* s, string name, eventbus__EventHandlerFn handler, voidptr receiver);
void eventbus__Subscriber_subscribe_once(eventbus__Subscriber* s, string name, eventbus__EventHandlerFn handler);
bool eventbus__Subscriber_is_subscribed(eventbus__Subscriber* s, string name);
void eventbus__Subscriber_unsubscribe(eventbus__Subscriber* s, string name, eventbus__EventHandlerFn handler);
static bool eventbus__Registry_check_subscriber(eventbus__Registry* r, string name);
string time__Time_format(time__Time t);
string time__Time_format_ss(time__Time t);
string time__Time_format_ss_milli(time__Time t);
string time__Time_format_ss_micro(time__Time t);
string time__Time_hhmm(time__Time t);
string time__Time_hhmmss(time__Time t);
string time__Time_hhmm12(time__Time t);
string time__Time_ymmdd(time__Time t);
string time__Time_ddmmy(time__Time t);
string time__Time_md(time__Time t);
string time__Time_clean(time__Time t);
string time__Time_clean12(time__Time t);
string time__Time_get_fmt_time_str(time__Time t, time__FormatTime fmt_time);
string time__Time_get_fmt_date_str(time__Time t, time__FormatDelimiter fmt_dlmtr, time__FormatDate fmt_date);
string time__Time_get_fmt_str(time__Time t, time__FormatDelimiter fmt_dlmtr, time__FormatTime fmt_time, time__FormatDate fmt_date);
string time__Time_utc_string(time__Time t);
bool time__Time_eq(time__Time t1, time__Time t2);
bool time__Time_ne(time__Time t1, time__Time t2);
bool time__Time_lt(time__Time t1, time__Time t2);
bool time__Time_le(time__Time t1, time__Time t2);
bool time__Time_gt(time__Time t1, time__Time t2);
bool time__Time_ge(time__Time t1, time__Time t2);
Option_time__Time time__parse(string s);
Option_time__Time time__parse_rfc2822(string s);
Option_time__Time time__parse_iso8601(string s);
time__StopWatch time__new_stopwatch(time__StopWatchOptions opts);
void time__StopWatch_start(time__StopWatch* t);
void time__StopWatch_restart(time__StopWatch* t);
void time__StopWatch_stop(time__StopWatch* t);
void time__StopWatch_pause(time__StopWatch* t);
time__Duration time__StopWatch_elapsed(time__StopWatch t);
string _const_time__days_string; // a string literal, inited later
array_int _const_time__month_days; // inited later
string _const_time__months_string; // a string literal, inited later
i64 _const_time__absolute_zero_year; // inited later
#define _const_time__seconds_per_minute 60
int _const_time__seconds_per_hour; // inited later
int _const_time__seconds_per_day; // inited later
int _const_time__seconds_per_week; // inited later
int _const_time__days_per_400_years; // inited later
int _const_time__days_per_100_years; // inited later
int _const_time__days_per_4_years; // inited later
array_int _const_time__days_before; // inited later
array_string _const_time__long_days; // inited later
time__Time time__now();
time__Time time__utc();
string time__Time_smonth(time__Time t);
time__Time time__new_time(time__Time t);
int time__Time_unix_time(time__Time t);
u64 time__Time_unix_time_milli(time__Time t);
time__Time time__Time_add_seconds(time__Time t, int seconds);
time__Time time__Time_add_days(time__Time t, int days);
static int time__since(time__Time t);
string time__Time_relative(time__Time t);
string time__Time_relative_short(time__Time t);
int time__day_of_week(int y, int m, int d);
int time__Time_day_of_week(time__Time t);
string time__Time_weekday_str(time__Time t);
string time__Time_long_weekday_str(time__Time t);
i64 time__ticks();
void time__sleep(int seconds);
void time__sleep_ms(int milliseconds);
void time__usleep(int microseconds);
bool time__is_leap_year(int year);
Option_int time__days_in_month(int month, int year);
string time__Time_str(time__Time t);
static time__Time time__convert_ctime(struct tm t, int microsecond);
time__Duration _const_time__nanosecond; // inited later
i64 _const_time__microsecond; // inited later
i64 _const_time__millisecond; // inited later
i64 _const_time__second; // inited later
i64 _const_time__minute; // inited later
i64 _const_time__hour; // inited later
time__Duration _const_time__infinite; // inited later
i64 time__Duration_nanoseconds(time__Duration d);
i64 time__Duration_microseconds(time__Duration d);
i64 time__Duration_milliseconds(time__Duration d);
f64 time__Duration_seconds(time__Duration d);
f64 time__Duration_minutes(time__Duration d);
f64 time__Duration_hours(time__Duration d);
static u64 time__sys_mono_now_darwin();
time__Time time__darwin_now();
time__Time time__solaris_now();
time__Time time__darwin_utc();
time__Time time__solaris_utc();
static int time__make_unix_time(struct tm t);
static time__Time time__to_local_time(time__Time t);
u64 time__sys_mono_now();
static u64 time__vpc_now();
static time__Time time__linux_now();
static time__Time time__linux_utc();
time__Time time__win_now();
time__Time time__win_utc();
struct timespec time__Duration_timespec(time__Duration d);
struct timespec time__zero_timespec();
time__Time time__unix(int abs);
time__Time time__unix2(int abs, int microsecond);
static multi_return_int_int_int time__calculate_date_from_offset(int day_offset_);
static multi_return_int_int_int time__calculate_time_from_offset(int second_offset_);
struct sapp_desc g_desc; // global
struct sg_desc sokol__sapp__create_desc();
bool sokol__sapp__isvalid();
int sokol__sapp__width();
int sokol__sapp__height();
bool sokol__sapp__high_dpi();
f32 sokol__sapp__dpi_scale();
void sokol__sapp__show_keyboard(bool visible);
bool sokol__sapp__keyboard_shown();
void sokol__sapp__show_mouse(bool visible);
bool sokol__sapp__mouse_shown();
voidptr sokol__sapp__userdata();
struct sapp_desc sokol__sapp__query_desc();
void sokol__sapp__request_quit();
void sokol__sapp__cancel_quit();
void sokol__sapp__quit();
void sokol__sapp__consume_event();
u64 sokol__sapp__frame_count();
void sokol__sapp__set_clipboard_string(byteptr str);
byteptr sokol__sapp__get_clipboard_string();
int sokol__sapp__run(struct sapp_desc* desc);
bool sokol__sapp__gles2();
void sokol__sapp__html5_ask_leave_site(bool ask);
voidptr sokol__sapp__metal_get_device();
voidptr sokol__sapp__metal_get_renderpass_descriptor();
voidptr sokol__sapp__metal_get_drawable();
voidptr sokol__sapp__macos_get_window();
voidptr sokol__sapp__ios_get_window();
voidptr sokol__sapp__d3d11_get_device();
voidptr sokol__sapp__d3d11_get_device_context();
voidptr sokol__sapp__d3d11_get_render_target_view();
voidptr sokol__sapp__d3d11_get_depth_stencil_view();
voidptr sokol__sapp__win32_get_hwnd();
voidptr sokol__sapp__android_get_native_activity();
string C__sapp_event_str(struct sapp_event* e);
#define _const_fontstash__used_import 1
struct FONScontext* fontstash__create_internal(struct FONSparams* params);
void fontstash__delete_internal(struct FONScontext* s);
void C__FONScontext_set_error_callback(struct FONScontext* s, void (*callback)(voidptr uptr, int v_error, int val), voidptr uptr);
void C__FONScontext_get_atlas_size(struct FONScontext* s, int* width, int* height);
int C__FONScontext_expand_atlas(struct FONScontext* s, int width, int height);
int C__FONScontext_reset_atlas(struct FONScontext* s, int width, int height);
int C__FONScontext_get_font_by_name(struct FONScontext* s, byteptr name);
int C__FONScontext_add_fallback_font(struct FONScontext* s, int base, int fallback);
int C__FONScontext_add_font_mem(struct FONScontext* s, byteptr name, byteptr data, int data_size, int free_data);
void C__FONScontext_push_state(struct FONScontext* s);
void C__FONScontext_pop_state(struct FONScontext* s);
void C__FONScontext_clear_state(struct FONScontext* s);
void C__FONScontext_set_size(struct FONScontext* s, f32 size);
void C__FONScontext_set_color(struct FONScontext* s, u32 color);
void C__FONScontext_set_spacing(struct FONScontext* s, f32 spacing);
void C__FONScontext_set_blur(struct FONScontext* s, f32 blur);
void C__FONScontext_set_align(struct FONScontext* s, int align);
void C__FONScontext_set_font(struct FONScontext* s, int font);
f32 C__FONScontext_draw_text(struct FONScontext* s, f32 x, f32 y, byteptr str, byteptr end);
f32 C__FONScontext_text_bounds(struct FONScontext* s, f32 x, f32 y, byteptr str, byteptr end, f32* bounds);
void C__FONScontext_line_bounds(struct FONScontext* s, f32 y, f32* miny, f32* maxy);
void C__FONScontext_vert_metrics(struct FONScontext* s, f32* ascender, f32* descender, f32* lineh);
int C__FONScontext_text_iter_init(struct FONScontext* s, struct FONStextIter* iter, f32 x, f32 y, byteptr str, byteptr end);
int C__FONScontext_text_iter_next(struct FONScontext* s, struct FONStextIter* iter, struct FONSquad* quad);
byteptr C__FONScontext_get_texture_data(struct FONScontext* s, int* width, int* height);
int C__FONScontext_validate_texture(struct FONScontext* s, int* dirty);
void C__FONScontext_draw_debug(struct FONScontext* s, f32 x, f32 y);
#define _const_sokol__gfx__version 1
void sokol__gfx__setup(struct sg_desc* desc);
void sokol__gfx__shutdown();
void sokol__gfx__reset_state_cache();
struct sg_buffer sokol__gfx__make_buffer(struct sg_buffer_desc* desc);
struct sg_image sokol__gfx__make_image(struct sg_image_desc* desc);
struct sg_shader sokol__gfx__make_shader(struct sg_shader_desc* desc);
struct sg_pipeline sokol__gfx__make_pipeline(struct sg_pipeline_desc* desc);
struct sg_pass sokol__gfx__make_pass(struct sg_pass_desc* desc);
void sokol__gfx__destroy_buffer(struct sg_buffer buf);
void sokol__gfx__destroy_image(struct sg_image img);
void sokol__gfx__destroy_shader(struct sg_shader shd);
void sokol__gfx__destroy_pipeline(struct sg_pipeline pip);
void sokol__gfx__destroy_pass(struct sg_pass pass);
void sokol__gfx__update_buffer(struct sg_buffer buf, voidptr ptr, int num_bytes);
void sokol__gfx__update_image(struct sg_image img, struct sg_image_content* content);
int sokol__gfx__append_buffer(struct sg_buffer buf, voidptr ptr, int num_bytes);
bool sokol__gfx__query_buffer_overflow(struct sg_buffer buf);
void sokol__gfx__begin_default_pass(struct sg_pass_action* actions, int width, int height);
void sokol__gfx__begin_pass(struct sg_pass pass, struct sg_pass_action* actions);
void sokol__gfx__apply_viewport(int x, int y, int width, int height, bool origin_top_left);
void sokol__gfx__apply_scissor_rect(int x, int y, int width, int height, bool origin_top_left);
void sokol__gfx__apply_pipeline(struct sg_pipeline pip);
void sokol__gfx__apply_bindings(struct sg_bindings* bindings);
void sokol__gfx__apply_uniforms(int stage, int ub_index, voidptr data, int num_bytes);
void sokol__gfx__draw(int base_element, int num_elements, int num_instances);
void sokol__gfx__end_pass();
void sokol__gfx__commit();
struct sg_desc sokol__gfx__query_desc();
sokol__gfx__Backend sokol__gfx__query_backend();
struct sg_features sokol__gfx__query_features();
struct sg_limits sokol__gfx__query_limits();
struct sg_pixelformat_info sokol__gfx__query_pixelformat(sokol__gfx__PixelFormat fmt);
sg_resource_state sokol__gfx__query_buffer_state(struct sg_buffer buf);
sg_resource_state sokol__gfx__query_image_state(struct sg_image img);
sg_resource_state sokol__gfx__query_shader_state(struct sg_shader shd);
sg_resource_state sokol__gfx__query_pipeline_state(struct sg_pipeline pip);
sg_resource_state sokol__gfx__query_pass_state(struct sg_pass pass);
struct sg_buffer_info sokol__gfx__query_buffer_info(struct sg_buffer buf);
struct sg_image_info sokol__gfx__query_image_info(struct sg_image img);
struct sg_shader_info sokol__gfx__query_shader_info(struct sg_shader shd);
struct sg_pipeline_info sokol__gfx__query_pipeline_info(struct sg_pipeline pip);
struct sg_pass_info sokol__gfx__query_pass_info(struct sg_pass pass);
struct sg_buffer_desc sokol__gfx__query_buffer_defaults(struct sg_buffer* desc);
struct sg_image_desc sokol__gfx__query_image_defaults(struct sg_image* desc);
struct sg_shader_desc sokol__gfx__query_shader_defaults(struct sg_shader* desc);
struct sg_pipeline_desc sokol__gfx__query_pipeline_defaults(struct sg_pipeline* desc);
struct sg_pass_desc sokol__gfx__query_pass_defaults(struct sg_pass* desc);
struct sg_context sokol__gfx__setup_context();
void sokol__gfx__activate_context(struct sg_context ctx_id);
void sokol__gfx__discard_context(struct sg_context ctx_id);
void C__sg_pipeline_free(struct sg_pipeline p);
void C__sg_bindings_set_vert_image(struct sg_bindings* b, int index, struct sg_image img);
void C__sg_bindings_set_frag_image(struct sg_bindings* b, int index, struct sg_image img);
void C__sg_bindings_update_vert_buffer(struct sg_bindings* b, int index, voidptr data, int element_size, int element_count);
int C__sg_bindings_append_vert_buffer(struct sg_bindings* b, int index, voidptr data, int element_size, int element_count);
void C__sg_bindings_update_index_buffer(struct sg_bindings* b, voidptr data, int element_size, int element_count);
int C__sg_bindings_append_index_buffer(struct sg_bindings* b, voidptr data, int element_size, int element_count);
struct sg_shader_desc* C__sg_shader_desc_set_vert_src(struct sg_shader_desc* desc, string src);
struct sg_shader_desc* C__sg_shader_desc_set_frag_src(struct sg_shader_desc* desc, string src);
struct sg_shader_desc* C__sg_shader_desc_set_vert_image(struct sg_shader_desc* desc, int index, string name);
struct sg_shader_desc* C__sg_shader_desc_set_frag_image(struct sg_shader_desc* desc, int index, string name);
struct sg_shader_desc* C__sg_shader_desc_set_vert_uniform_block_size(struct sg_shader_desc* desc, int block_index, int size);
struct sg_shader_desc* C__sg_shader_desc_set_frag_uniform_block_size(struct sg_shader_desc* desc, int block_index, int size);
struct sg_shader_desc* C__sg_shader_desc_set_vert_uniform(struct sg_shader_desc* desc, int block_index, int uniform_index, string name, sokol__gfx__UniformType type, int array_count);
struct sg_shader_desc* C__sg_shader_desc_set_frag_uniform(struct sg_shader_desc* desc, int block_index, int uniform_index, string name, sokol__gfx__UniformType type, int array_count);
struct sg_shader C__sg_shader_desc_make_shader(struct sg_shader_desc* desc);
struct sg_shader_stage_desc C__sg_shader_stage_desc_set_image(struct sg_shader_stage_desc* desc, int index, string name);
void C__sg_shader_free(struct sg_shader s);
void C__sg_pass_free(struct sg_pass p);
void C__sg_buffer_free(struct sg_buffer b);
void C__sg_image_free(struct sg_image i);
struct sg_pass_action sokol__gfx__create_clear_pass(f32 r, f32 g, f32 b, f32 a);
static void stbi__init();
Option_stbi__Image stbi__load(string path);
Option_stbi__Image stbi__load_from_memory(byteptr buf, int bufsize);
void stbi__Image_free(stbi__Image img);
void stbi__set_flip_vertically_on_load(bool val);
#define _const_sokol__c__used_import 1
gx__Color _const_gx__blue; // inited later
gx__Color _const_gx__red; // inited later
gx__Color _const_gx__green; // inited later
gx__Color _const_gx__yellow; // inited later
gx__Color _const_gx__orange; // inited later
gx__Color _const_gx__purple; // inited later
gx__Color _const_gx__black; // inited later
gx__Color _const_gx__gray; // inited later
gx__Color _const_gx__indigo; // inited later
gx__Color _const_gx__pink; // inited later
gx__Color _const_gx__violet; // inited later
gx__Color _const_gx__white; // inited later
gx__Color _const_gx__dark_blue; // inited later
gx__Color _const_gx__dark_gray; // inited later
gx__Color _const_gx__dark_green; // inited later
gx__Color _const_gx__dark_red; // inited later
gx__Color _const_gx__light_blue; // inited later
gx__Color _const_gx__light_gray; // inited later
gx__Color _const_gx__light_green; // inited later
gx__Color _const_gx__light_red; // inited later
gx__Color gx__hex(int color);
gx__Color gx__rgb(byte r, byte g, byte b);
gx__Color gx__rgba(byte r, byte g, byte b, byte a);
gx__Color gx__Color__plus(gx__Color c, gx__Color c2);
gx__Color gx__Color__minus(gx__Color c, gx__Color c2);
gx__Color gx__Color__mult(gx__Color c, gx__Color c2);
gx__Color gx__Color__div(gx__Color c, gx__Color c2);
bool gx__Color_eq(gx__Color c, gx__Color c2);
string gx__Color_str(gx__Color c);
map_string_gx__Color _const_gx__string_colors; // inited later
gx__Color gx__color_from_string(string s);
bool gx__Image_is_empty(gx__Image i);
int _const_gx__used_import; // inited later
gx__HorizontalAlign _const_gx__align_left; // inited later
gx__HorizontalAlign _const_gx__align_right; // inited later
int _const_sokol__sgl__version; // inited later
void sokol__sgl__setup(struct sgl_desc_t* desc);
void sokol__sgl__shutdown();
sgl_error_t sokol__sgl__error();
void sokol__sgl__defaults();
f32 sokol__sgl__rad(f32 deg);
f32 sokol__sgl__deg(f32 rad);
struct sgl_pipeline sokol__sgl__make_pipeline(struct sg_pipeline_desc* desc);
void sokol__sgl__destroy_pipeline(struct sgl_pipeline pip);
void sokol__sgl__viewport(int x, int y, int w, int h, bool origin_top_left);
void sokol__sgl__scissor_rect(int x, int y, int w, int h, bool origin_top_left);
void sokol__sgl__enable_texture();
void sokol__sgl__disable_texture();
void sokol__sgl__texture(struct sg_image img);
void sokol__sgl__default_pipeline();
void sokol__sgl__load_pipeline(struct sgl_pipeline pip);
void sokol__sgl__push_pipeline();
void sokol__sgl__pop_pipeline();
void sokol__sgl__matrix_mode_modelview();
void sokol__sgl__matrix_mode_projection();
void sokol__sgl__matrix_mode_texture();
void sokol__sgl__load_identity();
void sokol__sgl__load_matrix(array_f32 m);
void sokol__sgl__load_transpose_matrix(array_f32 m);
void sokol__sgl__mult_matrix(array_f32 m);
void sokol__sgl__mult_transpose_matrix(array_f32 m);
void sokol__sgl__rotate(f32 angle_rad, f32 x, f32 y, f32 z);
void sokol__sgl__scale(f32 x, f32 y, f32 z);
void sokol__sgl__translate(f32 x, f32 y, f32 z);
void sokol__sgl__frustum(f32 l, f32 r, f32 b, f32 t, f32 n, f32 f);
void sokol__sgl__ortho(f32 l, f32 r, f32 b, f32 t, f32 n, f32 f);
void sokol__sgl__perspective(f32 fov_y, f32 aspect, f32 z_near, f32 z_far);
void sokol__sgl__lookat(f32 eye_x, f32 eye_y, f32 eye_z, f32 center_x, f32 center_y, f32 center_z, f32 up_x, f32 up_y, f32 up_z);
void sokol__sgl__push_matrix();
void sokol__sgl__pop_matrix();
void sokol__sgl__t2f(f32 u, f32 v);
void sokol__sgl__c3f(f32 r, f32 g, f32 b);
void sokol__sgl__c4f(f32 r, f32 g, f32 b, f32 a);
void sokol__sgl__c3b(byte r, byte g, byte b);
void sokol__sgl__c4b(byte r, byte g, byte b, byte a);
void sokol__sgl__c1i(u32 rgba);
void sokol__sgl__begin_points();
void sokol__sgl__begin_lines();
void sokol__sgl__begin_line_strip();
void sokol__sgl__begin_triangles();
void sokol__sgl__begin_triangle_strip();
void sokol__sgl__begin_quads();
void sokol__sgl__v2f(f32 x, f32 y);
void sokol__sgl__v3f(f32 x, f32 y, f32 z);
void sokol__sgl__v2f_t2f(f32 x, f32 y, f32 u, f32 v);
void sokol__sgl__v3f_t2f(f32 x, f32 y, f32 z, f32 u, f32 v);
void sokol__sgl__v2f_c3f(f32 x, f32 y, f32 r, f32 g, f32 b);
void sokol__sgl__v2f_c3b(f32 x, f32 y, byte r, byte g, byte b);
void sokol__sgl__v2f_c4f(f32 x, f32 y, f32 r, f32 g, f32 b, f32 a);
void sokol__sgl__v2f_c4b(f32 x, f32 y, byte r, byte g, byte b, byte a);
void sokol__sgl__v2f_c1i(f32 x, f32 y, u32 rgba);
void sokol__sgl__v3f_c3f(f32 x, f32 y, f32 z, f32 r, f32 g, f32 b);
void sokol__sgl__v3f_c3b(f32 x, f32 y, f32 z, byte r, byte g, byte b);
void sokol__sgl__v3f_c4f(f32 x, f32 y, f32 z, f32 r, f32 g, f32 b, f32 a);
void sokol__sgl__v3f_c4b(f32 x, f32 y, f32 z, byte r, byte g, byte b, byte a);
void sokol__sgl__v3f_c1i(f32 x, f32 y, f32 z, u32 rgba);
void sokol__sgl__v2f_t2f_c3f(f32 x, f32 y, f32 u, f32 v, f32 r, f32 g, f32 b);
void sokol__sgl__v2f_t2f_c3b(f32 x, f32 y, f32 u, f32 v, byte r, byte g, byte b);
void sokol__sgl__v2f_t2f_c4f(f32 x, f32 y, f32 u, f32 v, f32 r, f32 g, f32 b, f32 a);
void sokol__sgl__v2f_t2f_c4b(f32 x, f32 y, f32 u, f32 v, byte r, byte g, byte b, byte a);
void sokol__sgl__v2f_t2f_c1i(f32 x, f32 y, f32 u, f32 v, u32 rgba);
void sokol__sgl__v3f_t2f_c3f(f32 x, f32 y, f32 z, f32 u, f32 v, f32 r, f32 g, f32 b);
void sokol__sgl__v3f_t2f_c3b(f32 x, f32 y, f32 z, f32 u, f32 v, byte r, byte g, byte b);
void sokol__sgl__v3f_t2f_c4f(f32 x, f32 y, f32 z, f32 u, f32 v, f32 r, f32 g, f32 b, f32 a);
void sokol__sgl__v3f_t2f_c4b(f32 x, f32 y, f32 z, f32 u, f32 v, byte r, byte g, byte b, byte a);
void sokol__sgl__v3f_t2f_c1i(f32 x, f32 y, f32 z, f32 u, f32 v, u32 rgba);
void sokol__sgl__end();
void sokol__sgl__draw();
int _const_sokol__sfons__used_import; // inited later
struct FONScontext* sokol__sfons__create(int width, int height, int flags);
void sokol__sfons__destroy(struct FONScontext* ctx);
u32 sokol__sfons__rgba(byte r, byte g, byte b, byte a);
void sokol__sfons__flush(struct FONScontext* ctx);
int runtime__nr_jobs();
bool runtime__is_32bit();
bool runtime__is_64bit();
bool runtime__is_little_endian();
bool runtime__is_big_endian();
int runtime__nr_cpus();
int _const_sokol__f__used_import; // inited later
u64 _const_rand__util__lower_mask; // inited later
#define _const_rand__util__max_u32 0xFFFFFFFF
#define _const_rand__util__max_u64 0xFFFFFFFFFFFFFFFF
f32 _const_rand__util__max_u32_as_f32; // inited later
f64 _const_rand__util__max_u64_as_f64; // inited later
u32 _const_rand__util__u31_mask; // inited later
u64 _const_rand__util__u63_mask; // inited later
static u32 rand__util__nr_next(u32 prev);
array_u32 rand__util__time_seed_array(int count);
u32 rand__util__time_seed_32();
u64 rand__util__time_seed_64();
int _const_sokol__used_import; // inited later
u64 _const_rand__wyrand__wyp0; // inited later
u64 _const_rand__wyrand__wyp1; // inited later
void rand__wyrand__WyRandRNG_seed(rand__wyrand__WyRandRNG* rng, array_u32 seed_data);
u32 rand__wyrand__WyRandRNG_u32(rand__wyrand__WyRandRNG* rng);
u64 rand__wyrand__WyRandRNG_u64(rand__wyrand__WyRandRNG* rng);
u32 rand__wyrand__WyRandRNG_u32n(rand__wyrand__WyRandRNG* rng, u32 max);
u64 rand__wyrand__WyRandRNG_u64n(rand__wyrand__WyRandRNG* rng, u64 max);
u32 rand__wyrand__WyRandRNG_u32_in_range(rand__wyrand__WyRandRNG* rng, u32 min, u32 max);
u64 rand__wyrand__WyRandRNG_u64_in_range(rand__wyrand__WyRandRNG* rng, u64 min, u64 max);
int rand__wyrand__WyRandRNG_int(rand__wyrand__WyRandRNG* rng);
i64 rand__wyrand__WyRandRNG_i64(rand__wyrand__WyRandRNG* rng);
int rand__wyrand__WyRandRNG_int31(rand__wyrand__WyRandRNG* rng);
i64 rand__wyrand__WyRandRNG_int63(rand__wyrand__WyRandRNG* rng);
int rand__wyrand__WyRandRNG_intn(rand__wyrand__WyRandRNG* rng, int max);
i64 rand__wyrand__WyRandRNG_i64n(rand__wyrand__WyRandRNG* rng, i64 max);
int rand__wyrand__WyRandRNG_int_in_range(rand__wyrand__WyRandRNG* rng, int min, int max);
i64 rand__wyrand__WyRandRNG_i64_in_range(rand__wyrand__WyRandRNG* rng, i64 min, i64 max);
f32 rand__wyrand__WyRandRNG_f32(rand__wyrand__WyRandRNG* rng);
f64 rand__wyrand__WyRandRNG_f64(rand__wyrand__WyRandRNG* rng);
f32 rand__wyrand__WyRandRNG_f32n(rand__wyrand__WyRandRNG* rng, f32 max);
f64 rand__wyrand__WyRandRNG_f64n(rand__wyrand__WyRandRNG* rng, f64 max);
f32 rand__wyrand__WyRandRNG_f32_in_range(rand__wyrand__WyRandRNG* rng, f32 min, f32 max);
f64 rand__wyrand__WyRandRNG_f64_in_range(rand__wyrand__WyRandRNG* rng, f64 min, f64 max);
static void gg__gg_init_sokol_window(voidptr user_data);
static void gg__gg_frame_fn(voidptr user_data);
static void gg__gg_event_fn(struct sapp_event* ce, voidptr user_data);
static void gg__gg_cleanup_fn(voidptr user_data);
static void gg__gg_fail_fn(charptr msg, voidptr user_data);
gg__Context* gg__new_context(gg__Config cfg);
void gg__Context_run(gg__Context* gg);
void gg__Context_set_bg_color(gg__Context* ctx, gx__Color c);
void gg__Context_draw_rect(gg__Context* ctx, f32 x, f32 y, f32 w, f32 h, gx__Color c);
void gg__Context_draw_triangle(gg__Context* ctx, f32 x, f32 y, f32 x2, f32 y2, f32 x3, f32 y3, gx__Color c);
void gg__Context_draw_empty_rect(gg__Context* ctx, f32 x, f32 y, f32 w, f32 h, gx__Color c);
void gg__Context_draw_circle_line(gg__Context* ctx, f32 x, f32 y, int r, int segments, gx__Color c);
void gg__Context_draw_circle(gg__Context* ctx, f32 x, f32 y, int r, gx__Color c);
void gg__Context_draw_circle_with_segments(gg__Context* ctx, f32 x, f32 y, int r, int segments, gx__Color c);
void gg__Context_draw_arc_line(gg__Context* ctx, f32 x, f32 y, int r, f32 start_angle, f32 arc_angle, int segments, gx__Color c);
void gg__Context_draw_arc(gg__Context* ctx, f32 x, f32 y, int r, f32 start_angle, f32 arc_angle, int segments, gx__Color c);
void gg__Context_begin(gg__Context* gg);
void gg__Context_end(gg__Context* gg);
static f32 gg__abs(f32 a);
void gg__Context_draw_line(gg__Context* ctx, f32 x, f32 y, f32 x2, f32 y2, gx__Color c);
void gg__Context_draw_rounded_rect(gg__Context* ctx, f32 x, f32 y, f32 width, f32 height, f32 radius, gx__Color color);
void gg__Context_draw_empty_rounded_rect(gg__Context* ctx, f32 x, f32 y, f32 width, f32 height, f32 radius, gx__Color border_color);
void gg__wait_events();
gg__Image gg__Context_create_image(gg__Context* ctx, string file);
static gg__Image gg__create_image(string file);
gg__Image gg__create_image_from_memory(byteptr buf, int bufsize);
gg__Image gg__create_image_from_byte_array(array_byte b);
gg__Image* gg__Image_init_sokol_image(gg__Image* img);
void gg__Context_draw_image(gg__Context* ctx, f32 x, f32 y, f32 width, f32 height, gg__Image* img_);
void gg__Context_draw_image_flipped(gg__Context* ctx, f32 x, f32 y, f32 width, f32 height, gg__Image* img_);
void gg__Context_draw_image_by_id(gg__Context* ctx, f32 x, f32 y, f32 width, f32 height, int id);
static Option_gg__FT_ptr gg__new_ft(gg__FTConfig c);
static void gg__Context_set_cfg(gg__Context* ctx, gx__TextCfg cfg);
void gg__Context_draw_text(gg__Context* ctx, int x, int y, string text_, gx__TextCfg cfg);
void gg__Context_draw_text_def(gg__Context* ctx, int x, int y, string text);
void gg__FT_flush(gg__FT* ft);
int gg__Context_text_width(gg__Context* ctx, string s);
int gg__Context_text_height(gg__Context* ctx, string s);
multi_return_int_int gg__Context_text_size(gg__Context* ctx, string s);
string gg__system_font_path();
static string gg__get_font_path_variant(string font_path, gg__FontVariant variant);
static void gg__debug_font_println(string s);
rand__wyrand__WyRandRNG* default_rng; // global
static void rand__init();
rand__wyrand__WyRandRNG* rand__new_default(rand__PRNGConfigStruct config);
void rand__seed(array_u32 seed);
u32 rand__u32();
u64 rand__u64();
u32 rand__u32n(u32 max);
u64 rand__u64n(u64 max);
u32 rand__u32_in_range(u32 min, u32 max);
u64 rand__u64_in_range(u64 min, u64 max);
int rand__int();
int rand__intn(int max);
int rand__int_in_range(int min, int max);
int rand__int31();
i64 rand__i64();
i64 rand__i64n(i64 max);
i64 rand__i64_in_range(i64 min, i64 max);
i64 rand__int63();
f32 rand__f32();
f64 rand__f64();
f32 rand__f32n(f32 max);
f64 rand__f64n(f64 max);
f32 rand__f32_in_range(f32 min, f32 max);
f64 rand__f64_in_range(f64 min, f64 max);
string _const_rand__chars; // a string literal, inited later
string rand__string(int len);
string rand__uuid_v4();
string _const_rand__ulid_encoding; // a string literal, inited later
string rand__ulid();
string rand__ulid_at_millisecond(u64 unix_time_milli);
#define _const_sync__spinloops 750
#define _const_sync__spinloops_sem 4000
static sync__Channel* sync__new_channel_st(u32 n, u32 st);
void sync__Channel_close(sync__Channel* ch);
int sync__Channel_len(sync__Channel* ch);
void sync__Channel_push(sync__Channel* ch, voidptr src);
ChanState sync__Channel_try_push(sync__Channel* ch, voidptr src);
static ChanState sync__Channel_try_push_priv(sync__Channel* ch, voidptr src, bool no_block);
bool sync__Channel_pop(sync__Channel* ch, voidptr dest);
ChanState sync__Channel_try_pop(sync__Channel* ch, voidptr dest);
static ChanState sync__Channel_try_pop_priv(sync__Channel* ch, voidptr dest, bool no_block);
int sync__channel_select(array_sync__Channel_ptr* channels, array_sync__Direction dir, array_voidptr* objrefs, time__Duration timeout);
voidptr _const_sync__no_result; // inited later
sync__PoolProcessor* sync__new_pool_processor(sync__PoolProcessorConfig context);
void sync__PoolProcessor_set_max_jobs(sync__PoolProcessor* pool, int njobs);
void sync__PoolProcessor_work_on_pointers(sync__PoolProcessor* pool, array_voidptr items);
static void sync__process_in_thread(sync__PoolProcessor* pool, int task_id);
string sync__PoolProcessor_get_string_item(sync__PoolProcessor* pool, int idx);
int sync__PoolProcessor_get_int_item(sync__PoolProcessor* pool, int idx);
void sync__PoolProcessor_set_shared_context(sync__PoolProcessor* pool, voidptr context);
voidptr sync__PoolProcessor_get_shared_context(sync__PoolProcessor* pool);
void sync__PoolProcessor_set_thread_context(sync__PoolProcessor* pool, int idx, voidptr context);
voidptr sync__PoolProcessor_get_thread_context(sync__PoolProcessor* pool, int idx);
void sync__PoolProcessor_work_on_items_s(sync__PoolProcessor* pool, array_string items);
void sync__PoolProcessor_work_on_items_i(sync__PoolProcessor* pool, array_int items);
array_sync__SResult sync__PoolProcessor_get_results_s(sync__PoolProcessor* pool);
array_sync__IResult sync__PoolProcessor_get_results_i(sync__PoolProcessor* pool);
sync__Mutex* sync__new_mutex();
sync__RwMutex* sync__new_rwmutex();
void sync__Mutex_m_lock(sync__Mutex* m);
void sync__Mutex_unlock(sync__Mutex* m);
void sync__RwMutex_r_lock(sync__RwMutex* m);
void sync__RwMutex_w_lock(sync__RwMutex* m);
void sync__RwMutex_r_unlock(sync__RwMutex* m);
void sync__RwMutex_w_unlock(sync__RwMutex* m);
sync__Semaphore sync__new_semaphore();
sync__Semaphore sync__new_semaphore_init(u32 n);
void sync__Semaphore_post(sync__Semaphore s);
void sync__Semaphore_wait(sync__Semaphore s);
bool sync__Semaphore_try_wait(sync__Semaphore s);
bool sync__Semaphore_timed_wait(sync__Semaphore s, time__Duration timeout);
bool sync__Semaphore_destroy(sync__Semaphore s);
void sync__Waiter_wait(sync__Waiter* w);
void sync__Waiter_stop(sync__Waiter* w);
sync__Waiter* sync__new_waiter();
sync__WaitGroup* sync__new_waitgroup();
void sync__WaitGroup_add(sync__WaitGroup* wg, int delta);
void sync__WaitGroup_done(sync__WaitGroup* wg);
void sync__WaitGroup_wait(sync__WaitGroup* wg);
clipboard__Clipboard* clipboard__new();
bool clipboard__Clipboard_copy(clipboard__Clipboard* cb, string text);
string clipboard__Clipboard_paste(clipboard__Clipboard* cb);
void clipboard__Clipboard_clear_all(clipboard__Clipboard* cb);
void clipboard__Clipboard_destroy(clipboard__Clipboard* cb);
bool clipboard__Clipboard_check_ownership(clipboard__Clipboard cb);
bool clipboard__Clipboard_is_available(clipboard__Clipboard* cb);
static void clipboard__todo_del();
array_string _const_clipboard__atom_names; // inited later
static clipboard__Clipboard* clipboard__new_clipboard();
static clipboard__Clipboard* clipboard__new_x11_clipboard(clipboard__AtomType selection);
static bool clipboard__Clipboard_check_availability(clipboard__Clipboard* cb);
static void clipboard__Clipboard_free(clipboard__Clipboard* cb);
static void clipboard__Clipboard_clear(clipboard__Clipboard* cb);
static bool clipboard__Clipboard_has_ownership(clipboard__Clipboard* cb);
static void clipboard__Clipboard_take_ownership(clipboard__Clipboard* cb);
static bool clipboard__Clipboard_set_text(clipboard__Clipboard* cb, string text);
static string clipboard__Clipboard_get_text(clipboard__Clipboard* cb);
static bool clipboard__Clipboard_transmit_selection(clipboard__Clipboard* cb, XSelectionEvent* xse);
static void clipboard__Clipboard_start_listener(clipboard__Clipboard* cb);
static void clipboard__Clipboard_intern_atoms(clipboard__Clipboard* cb);
static clipboard__Property clipboard__read_property(Display* d, Window w, Atom p);
static Atom clipboard__Clipboard_pick_target(clipboard__Clipboard* cb, clipboard__Property prop);
static array_C__Atom clipboard__Clipboard_get_atoms(clipboard__Clipboard* cb, varg_clipboard__AtomType types);
static Atom clipboard__Clipboard_get_atom(clipboard__Clipboard* cb, clipboard__AtomType typ);
static bool clipboard__Clipboard_is_supported_target(clipboard__Clipboard* cb, Atom target);
static int clipboard__Clipboard_get_target_index(clipboard__Clipboard* cb, Atom target);
static array_C__Atom clipboard__Clipboard_get_supported_targets(clipboard__Clipboard* cb);
static Atom* clipboard__new_atom(int value);
static Window clipboard__create_xwindow(Display* display);
static Display* clipboard__new_display();
clipboard__Clipboard* clipboard__new_primary();
gx__Color _const_ui__button_bg_color; // inited later
gx__Color _const_ui__button_border_color; // inited later
gx__TextCfg _const_ui__btn_text_cfg; // inited later
#define _const_ui__button_horizontal_padding 26
#define _const_ui__button_vertical_padding 8
static void ui__Button_init(ui__Button* b, ui__Layout parent);
ui__Button* ui__button(ui__ButtonConfig c);
static void ui__btn_click(ui__Button* b, ui__MouseEvent* e, ui__Window* window);
static void ui__Button_set_pos(ui__Button* b, int x, int y);
static multi_return_int_int ui__Button_size(ui__Button* b);
static multi_return_int_int ui__Button_propose_size(ui__Button* b, int w, int h);
static void ui__Button_draw(ui__Button* b);
static bool ui__Button_point_inside(ui__Button* b, f64 x, f64 y);
static void ui__Button_focus(ui__Button* b);
static void ui__Button_unfocus(ui__Button* b);
static bool ui__Button_is_focused(ui__Button* b);
static void ui__Canvas_init(ui__Canvas* c, ui__Layout parent);
ui__Canvas* ui__canvas(ui__CanvasConfig c);
static void ui__Canvas_set_pos(ui__Canvas* c, int x, int y);
static multi_return_int_int ui__Canvas_size(ui__Canvas* c);
static multi_return_int_int ui__Canvas_propose_size(ui__Canvas* c, int w, int h);
static void ui__Canvas_draw(ui__Canvas* c);
static void ui__Canvas_focus(ui__Canvas* c);
static bool ui__Canvas_is_focused(ui__Canvas* c);
static void ui__Canvas_unfocus(ui__Canvas* c);
static bool ui__Canvas_point_inside(ui__Canvas* c, f64 x, f64 y);
#define _const_ui__check_mark_size 14
gx__Color _const_ui__cb_border_color; // inited later
u32 _const_ui__cb_image; // inited later
static void ui__CheckBox_init(ui__CheckBox* cb, ui__Layout parent);
ui__CheckBox* ui__checkbox(ui__CheckBoxConfig c);
static void ui__cb_click(ui__CheckBox* cb, ui__MouseEvent* e, ui__Window* window);
static void ui__CheckBox_set_pos(ui__CheckBox* cb, int x, int y);
static multi_return_int_int ui__CheckBox_size(ui__CheckBox* cb);
static multi_return_int_int ui__CheckBox_propose_size(ui__CheckBox* cb, int w, int h);
static void ui__CheckBox_draw(ui__CheckBox* cb);
static bool ui__CheckBox_point_inside(ui__CheckBox* cb, f64 x, f64 y);
static void ui__CheckBox_mouse_move(ui__CheckBox* cb, ui__MouseEvent e);
static void ui__CheckBox_focus(ui__CheckBox* cb);
static void ui__CheckBox_unfocus(ui__CheckBox* cb);
static bool ui__CheckBox_is_focused(ui__CheckBox* cb);
ui__Stack* ui__column(ui__ColumnConfig c, array_ui__Widget children);
ui__EventNames _const_ui__events; // inited later
#define _const_ui__dropdown_height 25
#define _const_ui__dropdown_width 150
gx__Color _const_ui__dropdown_color; // inited later
gx__Color _const_ui__border_color; // inited later
gx__Color _const_ui__drawer_color; // inited later
static void ui__Dropdown_init(ui__Dropdown* dd, ui__Layout parent);
ui__Dropdown* ui__dropdown(ui__DropdownConfig c, array_ui__DropdownItem items);
static void ui__Dropdown_set_pos(ui__Dropdown* dd, int x, int y);
static multi_return_int_int ui__Dropdown_size(ui__Dropdown* dd);
static multi_return_int_int ui__Dropdown_propose_size(ui__Dropdown* dd, int w, int h);
static void ui__Dropdown_draw(ui__Dropdown* dd);
void ui__Dropdown_add_item(ui__Dropdown* dd, string text);
static void ui__dd_key_down(ui__Dropdown* dd, ui__KeyEvent* e, voidptr zzz);
static void ui__dd_click(ui__Dropdown* dd, ui__MouseEvent* e, voidptr zzz);
static void ui__dd_mouse_move(ui__Dropdown* dd, ui__MouseEvent* e, voidptr zzz);
static void ui__Dropdown_focus(ui__Dropdown* dd);
static void ui__Dropdown_open_drawer(ui__Dropdown* dd);
static bool ui__Dropdown_is_focused(ui__Dropdown* dd);
static void ui__Dropdown_unfocus(ui__Dropdown* dd);
static bool ui__Dropdown_point_inside(ui__Dropdown* dd, f64 x, f64 y);
static f64 ui__linear(f64 x);
static f64 ui__ease_in_quad(f64 x);
static f64 ui__ease_out_quad(f64 x);
static f64 ui__ease_in_out_quad(f64 x);
static f64 ui__ease_in_cubic(f64 x);
static f64 ui__ease_out_cubic(f64 x);
static f64 ui__ease_in_out_cubic(f64 x);
static f64 ui__ease_in_quart(f64 x);
static f64 ui__ease_out_quart(f64 x);
static f64 ui__ease_in_out_quart(f64 x);
static f64 ui__ease_in_quint(f64 x);
static f64 ui__ease_out_quint(f64 x);
static f64 ui__ease_in_out_quint(f64 x);
ui__EasingFunction ui__easing(ui__EasingType easingtype);
static void ui__Group_init(ui__Group* g, ui__Layout parent);
ui__Group* ui__group(ui__GroupConfig c, array_ui__Widget children);
static void ui__Group_set_pos(ui__Group* g, int x, int y);
static void ui__Group_calculate_child_positions(ui__Group* g);
static multi_return_int_int ui__Group_propose_size(ui__Group* g, int w, int h);
static void ui__Group_draw(ui__Group* g);
static bool ui__Group_point_inside(ui__Group* g, f64 x, f64 y);
static void ui__Group_focus(ui__Group* g);
static void ui__Group_unfocus(ui__Group* g);
static bool ui__Group_is_focused(ui__Group* g);
static ui__UI* ui__Group_get_ui(ui__Group* g);
static void ui__Group_unfocus_all(ui__Group* g);
static void ui__Group_resize(ui__Group* g, int width, int height);
static voidptr ui__Group_get_state(ui__Group* g);
static eventbus__Subscriber* ui__Group_get_subscriber(ui__Group* g);
static multi_return_int_int ui__Group_size(ui__Group* g);
static void ui__Label_init(ui__Label* l, ui__Layout parent);
ui__Label* ui__label(ui__LabelConfig c);
static void ui__Label_set_pos(ui__Label* l, int x, int y);
static multi_return_int_int ui__Label_size(ui__Label* l);
static multi_return_int_int ui__Label_propose_size(ui__Label* l, int w, int h);
static void ui__Label_draw(ui__Label* l);
static void ui__Label_focus(ui__Label* l);
static bool ui__Label_is_focused(ui__Label* l);
static void ui__Label_unfocus(ui__Label* l);
static bool ui__Label_point_inside(ui__Label* l, f64 x, f64 y);
void ui__Label_set_text(ui__Label* l, string s);
#define _const_ui___item_height 20
gx__Color _const_ui___col_list_bkgrnd; // inited later
gx__Color _const_ui___col_item_select; // inited later
gx__Color _const_ui___col_border; // inited later
#define _const_ui___text_offset_y 3
#define _const_ui___text_offset_x 5
ui__ListBox* ui__listbox(ui__ListBoxConfig c, map_string_string items);
void ui__ListBox_add_item(ui__ListBox* list, string id, string text);
static int ui__ListBox_get_draw_to(ui__ListBox* lb, string text);
static void ui__ListBox_append_item(ui__ListBox* lb, string id, string text, int draw_to);
bool ui__ListBox_is_selected(ui__ListBox* lb);
Option_multi_return_string_string ui__ListBox_selected(ui__ListBox* lb);
Option_int ui__ListBox_selected_inx(ui__ListBox* lb);
void ui__ListBox_set_text(ui__ListBox* lb, string id, string text);
void ui__ListBox_remove_item(ui__ListBox* lb, string id);
void ui__ListBox_remove_inx(ui__ListBox* lb, int i);
void ui__ListBox_clear(ui__ListBox* lb);
static void ui__ListBox_draw_item(ui__ListBox* lb, ui__ListItem li, bool selected);
static void ui__ListBox_init(ui__ListBox* lb, ui__Layout parent);
static void ui__ListBox_draw(ui__ListBox* lb);
static bool ui__ListBox_point_inside(ui__ListBox* lb, f64 x, f64 y);
static bool ui__ListItem_point_inside(ui__ListItem* li, f64 x, f64 y);
static void ui__on_click(ui__ListBox* lb, ui__MouseEvent* e, ui__Window* window);
static void ui__on_key_up(ui__ListBox* lb, ui__KeyEvent* e, ui__Window* window);
static void ui__ListBox_set_pos(ui__ListBox* lb, int x, int y);
static void ui__ListBox_focus(ui__ListBox* lb);
static void ui__ListBox_unfocus(ui__ListBox* lb);
static bool ui__ListBox_is_focused(ui__ListBox* lb);
static ui__UI* ui__ListBox_get_ui(ui__ListBox* lb);
static void ui__ListBox_unfocus_all(ui__ListBox* lb);
static void ui__ListBox_resize(ui__ListBox* lb, int width, int height);
static voidptr ui__ListBox_get_state(ui__ListBox* lb);
static eventbus__Subscriber* ui__ListBox_get_subscriber(ui__ListBox* lb);
static multi_return_int_int ui__ListBox_size(ui__ListBox* lb);
static multi_return_int_int ui__ListBox_propose_size(ui__ListBox* lb, int w, int h);
#define _const_ui__menu_height 30
gx__Color _const_ui__menu_color; // inited later
gx__Color _const_ui__menu_border_color; // inited later
static void ui__Menu_init(ui__Menu* m, ui__Layout parent);
ui__Menu* ui__menu(ui__MenuConfig c);
static void ui__Menu_set_pos(ui__Menu* m, int x, int y);
static multi_return_int_int ui__Menu_size(ui__Menu* m);
static multi_return_int_int ui__Menu_propose_size(ui__Menu* m, int w, int h);
static void ui__Menu_draw(ui__Menu* m);
void ui__Menu_add_item(ui__Menu* m, string text, ui__MenuFn action);
static void ui__Menu_focus(ui__Menu* m);
static bool ui__Menu_is_focused(ui__Menu* m);
static void ui__Menu_unfocus(ui__Menu* m);
static bool ui__Menu_point_inside(ui__Menu* m, f64 x, f64 y);
void ui__Menu_set_text(ui__Menu* m, string s);
static void ui__Picture_init(ui__Picture* pic, ui__Layout parent);
ui__Picture* ui__picture(ui__PictureConfig c);
static void ui__pic_click(ui__Picture* pic, ui__MouseEvent* e, ui__Window* window);
static void ui__Picture_set_pos(ui__Picture* pic, int x, int y);
static multi_return_int_int ui__Picture_size(ui__Picture* pic);
static multi_return_int_int ui__Picture_propose_size(ui__Picture* pic, int w, int h);
static void ui__Picture_draw(ui__Picture* pic);
static void ui__Picture_focus(ui__Picture* pic);
static bool ui__Picture_is_focused(ui__Picture* pic);
static void ui__Picture_unfocus(ui__Picture* pic);
static bool ui__Picture_point_inside(ui__Picture* pic, f64 x, f64 y);
#define _const_ui__bytes_check_png_len 3811
array_fixed_byte_3811 _const_ui__bytes_check_png = {((byte)(137)), 80, 78, 71, 13, 10, 26, 10, 0, 0, 0, 13, 73, 72, 68, 82, 0, 0, 0, 16, 0, 0, 0, 16, 8, 6, 0, 0, 0, 31, 243, 255, 97, 0, 0, 0, 4, 103, 65, 77, 65, 0, 0, 177, 142, 124, 251, 81, 147, 0, 0, 0, 32, 99, 72, 82, 77, 0, 0, 135, 14, 0, 0, 140, 18, 0, 1, 10, 118, 0, 0, 124, 199, 0, 0, 108, 171, 0, 1, 10, 41, 0, 0, 60, 174, 0, 0, 22, 177, 136, 240, 182, 122, 0, 0, 10, 169, 105, 67, 67, 80, 73, 67, 67, 32, 80, 114, 111, 102, 105, 108, 101, 0, 0, 72, 199, 173, 150, 103, 84, 83, 217, 22, 199, 207, 189, 233, 141, 22, 64, 64, 74, 232, 189, 119, 144, 94, 67, 17, 164, 131, 168, 132, 36, 64, 40, 33, 36, 4, 20, 27, 34, 131, 35, 56, 22, 68, 68, 64, 29, 209, 65, 138, 130, 131, 82, 100, 16, 21, 11, 182, 65, 65, 193, 238, 128, 136, 128, 50, 78, 44, 216, 80, 51, 23, 120, 196, 153, 15, 239, 195, 91, 235, 237, 181, 118, 206, 111, 237, 181, 207, 62, 123, 223, 156, 179, 214, 31, 0, 242, 29, 6, 143, 151, 14, 203, 0, 144, 193, 205, 230, 135, 249, 121, 210, 98, 98, 227, 104, 184, 103, 0, 2, 48, 80, 0, 246, 64, 137, 193, 20, 240, 60, 66, 67, 131, 0, 98, 11, 235, 191, 237, 253, 16, 146, 141, 216, 109, 211, 217, 90, 224, 127, 51, 89, 22, 91, 192, 4, 0, 10, 69, 56, 145, 37, 96, 102, 32, 124, 10, 241, 46, 38, 143, 159, 13, 0, 138, 135, 196, 181, 115, 179, 121, 179, 92, 134, 176, 60, 31, 105, 16, 225, 186, 89, 78, 158, 231, 174, 89, 78, 156, 231, 91, 115, 57, 17, 97, 94, 8, 63, 3, 0, 79, 102, 48, 248, 201, 0, 144, 68, 72, 156, 150, 195, 76, 70, 234, 144, 145, 105, 129, 5, 151, 197, 225, 34, 236, 142, 176, 43, 51, 133, 193, 66, 56, 31, 97, 147, 140, 140, 204, 89, 62, 134, 176, 65, 226, 63, 234, 36, 255, 171, 102, 162, 164, 38, 131, 145, 44, 225, 249, 89, 230, 12, 239, 205, 17, 240, 210, 25, 107, 192, 255, 219, 50, 210, 133, 11, 103, 104, 35, 78, 78, 225, 251, 135, 205, 158, 55, 251, 221, 210, 50, 3, 37, 204, 77, 92, 26, 178, 192, 28, 214, 124, 79, 179, 156, 34, 244, 143, 92, 96, 166, 192, 43, 110, 129, 89, 12, 239, 64, 201, 222, 244, 165, 65, 11, 156, 196, 241, 165, 75, 234, 100, 211, 35, 22, 152, 159, 25, 38, 169, 207, 22, 248, 132, 47, 48, 131, 255, 253, 44, 97, 90, 164, 135, 228, 92, 54, 93, 82, 51, 47, 37, 34, 122, 129, 115, 56, 81, 75, 23, 88, 144, 22, 30, 248, 61, 199, 75, 18, 231, 11, 195, 36, 61, 39, 241, 125, 37, 51, 102, 8, 254, 49, 23, 135, 46, 201, 207, 78, 137, 240, 151, 204, 200, 248, 222, 27, 91, 16, 35, 233, 129, 197, 246, 246, 145, 196, 185, 145, 146, 28, 94, 182, 167, 164, 62, 47, 61, 84, 146, 207, 78, 247, 147, 196, 5, 57, 225, 146, 189, 217, 200, 101, 251, 190, 55, 84, 242, 125, 82, 25, 1, 161, 11, 12, 56, 32, 24, 48, 0, 51, 155, 189, 58, 123, 182, 97, 175, 76, 222, 26, 62, 39, 57, 37, 155, 230, 129, 188, 24, 54, 141, 206, 101, 154, 153, 208, 172, 44, 172, 44, 0, 152, 125, 127, 243, 127, 175, 232, 230, 220, 187, 130, 148, 101, 191, 199, 138, 144, 187, 230, 42, 18, 139, 197, 109, 223, 99, 254, 151, 0, 104, 113, 6, 128, 88, 249, 61, 166, 223, 0, 128, 212, 32, 0, 87, 30, 51, 133, 252, 156, 249, 24, 122, 246, 7, 3, 136, 64, 26, 200, 3, 101, 160, 142, 220, 31, 3, 96, 10, 172, 128, 29, 112, 6, 238, 192, 7, 4, 128, 16, 16, 1, 98, 193, 74, 192, 4, 41, 32, 3, 240, 65, 46, 88, 7, 54, 129, 34, 80, 2, 118, 130, 61, 160, 18, 28, 4, 135, 65, 29, 56, 14, 90, 64, 59, 232, 2, 231, 193, 101, 112, 29, 220, 2, 131, 224, 33, 24, 6, 99, 224, 37, 16, 129, 247, 96, 6, 130, 32, 28, 68, 129, 168, 144, 50, 164, 1, 233, 66, 198, 144, 21, 228, 0, 185, 66, 62, 80, 16, 20, 6, 197, 66, 9, 80, 50, 196, 133, 132, 208, 58, 104, 51, 84, 2, 149, 66, 149, 208, 33, 168, 30, 250, 21, 58, 13, 157, 135, 174, 66, 253, 208, 125, 104, 4, 154, 132, 222, 64, 159, 97, 20, 76, 134, 229, 97, 53, 88, 15, 54, 135, 29, 96, 15, 56, 16, 142, 128, 87, 192, 201, 112, 22, 156, 7, 23, 194, 219, 225, 10, 184, 6, 62, 6, 183, 193, 231, 225, 235, 240, 32, 60, 12, 191, 132, 167, 81, 0, 69, 66, 41, 162, 52, 81, 166, 40, 7, 148, 23, 42, 4, 21, 135, 74, 66, 241, 81, 27, 80, 197, 168, 114, 84, 13, 170, 9, 213, 137, 234, 69, 221, 70, 13, 163, 166, 80, 159, 208, 88, 52, 21, 77, 67, 155, 162, 157, 209, 254, 232, 72, 52, 19, 157, 133, 222, 128, 222, 134, 174, 68, 215, 161, 219, 208, 23, 209, 183, 209, 35, 104, 17, 250, 27, 134, 130, 81, 197, 24, 99, 156, 48, 116, 76, 12, 38, 25, 147, 139, 41, 194, 148, 99, 106, 49, 173, 152, 75, 152, 65, 204, 24, 230, 61, 22, 139, 85, 196, 234, 99, 237, 177, 254, 216, 88, 108, 42, 118, 45, 118, 27, 118, 63, 182, 25, 123, 14, 219, 143, 29, 197, 78, 227, 112, 56, 101, 156, 49, 206, 5, 23, 130, 99, 224, 178, 113, 69, 184, 125, 184, 99, 184, 179, 184, 1, 220, 24, 238, 35, 158, 132, 215, 192, 91, 225, 125, 241, 113, 120, 46, 190, 0, 95, 142, 111, 192, 119, 227, 7, 240, 227, 248, 25, 130, 12, 65, 151, 224, 68, 8, 33, 176, 8, 107, 8, 59, 8, 71, 8, 157, 132, 155, 132, 49, 194, 12, 81, 150, 168, 79, 116, 33, 70, 16, 83, 137, 155, 136, 21, 196, 38, 226, 37, 226, 35, 226, 91, 18, 137, 164, 69, 114, 36, 45, 35, 113, 72, 249, 164, 10, 210, 9, 210, 21, 210, 8, 233, 19, 89, 142, 108, 68, 246, 34, 199, 147, 133, 228, 237, 228, 163, 228, 115, 228, 251, 228, 183, 20, 10, 69, 143, 226, 78, 137, 163, 100, 83, 182, 83, 234, 41, 23, 40, 79, 40, 31, 165, 168, 82, 102, 82, 116, 41, 150, 212, 70, 169, 42, 169, 54, 169, 1, 169, 87, 210, 4, 105, 93, 105, 15, 233, 149, 210, 121, 210, 229, 210, 39, 165, 111, 74, 79, 201, 16, 100, 244, 100, 188, 100, 24, 50, 27, 100, 170, 100, 78, 203, 220, 149, 153, 150, 165, 202, 90, 202, 134, 200, 102, 200, 110, 147, 109, 144, 189, 42, 59, 33, 135, 147, 211, 147, 243, 145, 99, 201, 21, 202, 29, 150, 187, 32, 55, 74, 69, 81, 181, 169, 94, 84, 38, 117, 51, 245, 8, 245, 18, 117, 76, 30, 43, 175, 47, 79, 151, 79, 149, 47, 145, 63, 46, 223, 39, 47, 82, 144, 83, 176, 81, 136, 82, 88, 173, 80, 165, 112, 70, 97, 88, 17, 165, 168, 167, 72, 87, 76, 87, 220, 161, 216, 162, 56, 164, 248, 121, 145, 218, 34, 143, 69, 236, 69, 91, 23, 53, 45, 26, 88, 244, 65, 105, 177, 146, 187, 18, 91, 169, 88, 169, 89, 105, 80, 233, 179, 50, 77, 217, 71, 57, 77, 121, 151, 114, 187, 242, 99, 21, 180, 138, 145, 202, 50, 149, 92, 149, 3, 42, 151, 84, 166, 22, 203, 47, 118, 94, 204, 92, 92, 188, 184, 101, 241, 3, 85, 88, 213, 72, 53, 76, 117, 173, 234, 97, 213, 27, 170, 211, 106, 234, 106, 126, 106, 60, 181, 125, 106, 23, 212, 166, 212, 21, 213, 221, 213, 83, 213, 203, 212, 187, 213, 39, 53, 168, 26, 174, 26, 28, 141, 50, 141, 179, 26, 47, 104, 10, 52, 15, 90, 58, 173, 130, 118, 145, 38, 210, 84, 213, 244, 215, 20, 106, 30, 210, 236, 211, 156, 209, 210, 215, 138, 212, 42, 208, 106, 214, 122, 172, 77, 212, 118, 208, 78, 210, 46, 211, 238, 209, 22, 233, 104, 232, 4, 235, 172, 211, 105, 212, 121, 160, 75, 208, 117, 208, 77, 209, 221, 171, 219, 171, 251, 65, 79, 95, 47, 90, 111, 139, 94, 187, 222, 132, 190, 146, 62, 93, 63, 79, 191, 81, 255, 145, 1, 197, 192, 205, 32, 203, 160, 198, 224, 142, 33, 214, 208, 193, 48, 205, 112, 191, 225, 45, 35, 216, 200, 214, 40, 197, 168, 202, 232, 166, 49, 108, 108, 103, 204, 49, 222, 111, 220, 111, 130, 49, 113, 52, 225, 154, 212, 152, 220, 53, 37, 155, 122, 152, 230, 152, 54, 154, 142, 152, 41, 154, 5, 153, 21, 152, 181, 155, 189, 50, 215, 49, 143, 51, 223, 101, 222, 107, 254, 205, 194, 214, 34, 221, 226, 136, 197, 67, 75, 57, 203, 0, 203, 2, 203, 78, 203, 55, 86, 70, 86, 76, 171, 42, 171, 59, 214, 20, 107, 95, 235, 141, 214, 29, 214, 175, 109, 140, 109, 216, 54, 7, 108, 238, 217, 82, 109, 131, 109, 183, 216, 246, 216, 126, 181, 179, 183, 227, 219, 53, 217, 77, 218, 235, 216, 39, 216, 87, 219, 223, 117, 144, 119, 8, 117, 216, 230, 112, 197, 17, 227, 232, 233, 184, 209, 177, 203, 241, 147, 147, 157, 83, 182, 83, 139, 211, 95, 206, 166, 206, 105, 206, 13, 206, 19, 75, 244, 151, 176, 151, 28, 89, 50, 234, 162, 229, 194, 112, 57, 228, 50, 236, 74, 115, 77, 112, 253, 217, 117, 216, 77, 211, 141, 225, 86, 227, 246, 212, 93, 219, 157, 229, 94, 235, 62, 238, 97, 232, 145, 234, 113, 204, 227, 149, 167, 133, 39, 223, 179, 213, 243, 131, 151, 147, 215, 122, 175, 115, 222, 40, 111, 63, 239, 98, 239, 62, 31, 57, 159, 72, 159, 74, 159, 39, 190, 90, 190, 201, 190, 141, 190, 34, 63, 91, 191, 181, 126, 231, 252, 49, 254, 129, 254, 187, 252, 239, 210, 213, 232, 76, 122, 61, 93, 20, 96, 31, 176, 62, 224, 98, 32, 57, 48, 60, 176, 50, 240, 105, 144, 81, 16, 63, 168, 51, 24, 14, 14, 8, 222, 29, 252, 104, 169, 238, 82, 238, 210, 246, 16, 16, 66, 15, 217, 29, 242, 56, 84, 63, 52, 43, 244, 183, 101, 216, 101, 161, 203, 170, 150, 61, 15, 179, 12, 91, 23, 214, 27, 78, 13, 95, 21, 222, 16, 254, 62, 194, 51, 98, 71, 196, 195, 72, 131, 72, 97, 100, 79, 148, 116, 84, 124, 84, 125, 212, 135, 104, 239, 232, 210, 232, 225, 24, 243, 152, 245, 49, 215, 99, 85, 98, 57, 177, 29, 113, 184, 184, 168, 184, 218, 184, 233, 229, 62, 203, 247, 44, 31, 139, 183, 141, 47, 138, 31, 90, 161, 191, 98, 245, 138, 171, 43, 85, 86, 166, 175, 60, 179, 74, 122, 21, 99, 213, 201, 4, 76, 66, 116, 66, 67, 194, 23, 70, 8, 163, 134, 49, 157, 72, 79, 172, 78, 20, 49, 189, 152, 123, 153, 47, 89, 238, 172, 50, 214, 36, 219, 133, 93, 202, 30, 79, 114, 73, 42, 77, 154, 72, 118, 73, 222, 157, 60, 153, 226, 150, 82, 158, 50, 197, 241, 226, 84, 114, 94, 167, 250, 167, 30, 76, 253, 144, 22, 146, 118, 52, 77, 156, 30, 157, 222, 156, 129, 207, 72, 200, 56, 205, 149, 227, 166, 113, 47, 102, 170, 103, 174, 206, 236, 231, 25, 243, 138, 120, 195, 89, 78, 89, 123, 178, 68, 252, 64, 126, 173, 0, 18, 172, 16, 116, 100, 203, 35, 66, 231, 134, 208, 64, 248, 131, 112, 36, 199, 53, 167, 42, 231, 99, 110, 84, 238, 201, 213, 178, 171, 185, 171, 111, 172, 49, 90, 179, 117, 205, 120, 158, 111, 222, 47, 107, 209, 107, 153, 107, 123, 214, 105, 174, 219, 180, 110, 100, 189, 199, 250, 67, 27, 160, 13, 137, 27, 122, 54, 106, 111, 44, 220, 56, 150, 239, 151, 95, 183, 137, 184, 41, 109, 211, 239, 5, 22, 5, 165, 5, 239, 54, 71, 111, 238, 44, 84, 43, 204, 47, 28, 253, 193, 239, 135, 198, 34, 169, 34, 126, 209, 221, 45, 206, 91, 14, 254, 136, 254, 145, 243, 99, 223, 86, 235, 173, 251, 182, 126, 43, 102, 21, 95, 43, 177, 40, 41, 47, 249, 178, 141, 185, 237, 218, 79, 150, 63, 85, 252, 36, 222, 158, 180, 189, 111, 135, 221, 142, 3, 59, 177, 59, 185, 59, 135, 118, 185, 237, 170, 43, 149, 45, 205, 43, 29, 221, 29, 188, 187, 173, 140, 86, 86, 92, 246, 110, 207, 170, 61, 87, 203, 109, 202, 15, 238, 37, 238, 21, 238, 29, 174, 8, 170, 232, 216, 167, 179, 111, 231, 190, 47, 149, 41, 149, 131, 85, 158, 85, 205, 213, 170, 213, 91, 171, 63, 236, 103, 237, 31, 56, 224, 126, 160, 233, 160, 218, 193, 146, 131, 159, 127, 230, 252, 124, 239, 144, 223, 161, 182, 26, 189, 154, 242, 195, 216, 195, 57, 135, 159, 31, 137, 58, 210, 251, 139, 195, 47, 245, 181, 42, 181, 37, 181, 95, 143, 114, 143, 14, 215, 133, 213, 93, 172, 183, 175, 175, 111, 80, 109, 216, 209, 8, 55, 10, 27, 39, 143, 197, 31, 187, 117, 220, 251, 120, 71, 147, 105, 211, 161, 102, 197, 230, 146, 19, 224, 132, 240, 196, 139, 95, 19, 126, 29, 106, 9, 108, 233, 57, 233, 112, 178, 233, 148, 238, 169, 234, 86, 106, 107, 113, 27, 212, 182, 166, 77, 212, 158, 210, 62, 220, 17, 219, 209, 127, 58, 224, 116, 79, 167, 115, 103, 235, 111, 102, 191, 29, 237, 210, 236, 170, 58, 163, 112, 102, 71, 55, 177, 187, 176, 91, 124, 54, 239, 236, 244, 57, 222, 185, 169, 243, 201, 231, 71, 123, 86, 245, 60, 188, 16, 115, 225, 206, 197, 101, 23, 251, 46, 5, 94, 186, 114, 217, 247, 242, 133, 94, 143, 222, 179, 87, 92, 174, 116, 93, 117, 186, 122, 250, 154, 195, 181, 246, 235, 118, 215, 219, 110, 216, 222, 104, 253, 221, 246, 247, 214, 62, 187, 190, 182, 155, 246, 55, 59, 110, 57, 222, 234, 236, 95, 210, 223, 61, 224, 54, 112, 254, 182, 247, 237, 203, 119, 232, 119, 174, 15, 46, 29, 236, 31, 138, 28, 186, 119, 55, 254, 238, 240, 61, 214, 189, 137, 251, 233, 247, 95, 63, 200, 121, 48, 243, 48, 255, 17, 230, 81, 241, 99, 153, 199, 229, 79, 84, 159, 212, 252, 97, 248, 71, 243, 176, 221, 240, 153, 17, 239, 145, 27, 79, 195, 159, 62, 28, 101, 142, 190, 124, 38, 120, 246, 101, 172, 240, 57, 229, 121, 249, 184, 198, 120, 253, 132, 213, 68, 215, 164, 239, 228, 173, 23, 203, 95, 140, 189, 228, 189, 156, 153, 42, 250, 83, 246, 207, 234, 87, 6, 175, 78, 253, 229, 254, 215, 13, 81, 140, 104, 236, 53, 255, 181, 248, 205, 182, 183, 202, 111, 143, 190, 179, 121, 215, 51, 29, 58, 253, 228, 125, 198, 251, 153, 15, 197, 31, 149, 63, 214, 125, 114, 248, 212, 251, 57, 250, 243, 248, 76, 238, 23, 220, 151, 138, 175, 134, 95, 59, 191, 5, 126, 123, 36, 206, 16, 139, 121, 12, 62, 99, 78, 10, 160, 16, 135, 147, 146, 0, 120, 115, 20, 0, 74, 44, 0, 84, 68, 55, 19, 151, 207, 235, 227, 57, 131, 230, 53, 253, 28, 129, 255, 198, 243, 26, 122, 206, 236, 0, 104, 66, 150, 89, 41, 52, 43, 249, 78, 34, 90, 90, 15, 209, 214, 148, 115, 0, 132, 32, 107, 132, 59, 128, 173, 173, 37, 254, 31, 19, 36, 89, 91, 205, 215, 146, 106, 4, 0, 167, 41, 22, 191, 201, 4, 128, 128, 248, 23, 63, 177, 120, 38, 84, 44, 254, 90, 141, 52, 123, 7, 128, 238, 137, 121, 93, 62, 107, 88, 68, 191, 55, 81, 207, 11, 106, 227, 6, 190, 229, 231, 255, 91, 29, 3, 240, 55, 74, 247, 10, 138, 238, 200, 114, 131, 0, 0, 0, 9, 112, 72, 89, 115, 0, 0, 14, 196, 0, 0, 14, 196, 1, 149, 43, 14, 27, 0, 0, 2, 4, 105, 84, 88, 116, 88, 77, 76, 58, 99, 111, 109, 46, 97, 100, 111, 98, 101, 46, 120, 109, 112, 0, 0, 0, 0, 0, 60, 120, 58, 120, 109, 112, 109, 101, 116, 97, 32, 120, 109, 108, 110, 115, 58, 120, 61, 34, 97, 100, 111, 98, 101, 58, 110, 115, 58, 109, 101, 116, 97, 47, 34, 32, 120, 58, 120, 109, 112, 116, 107, 61, 34, 88, 77, 80, 32, 67, 111, 114, 101, 32, 53, 46, 52, 46, 48, 34, 62, 10, 32, 32, 32, 60, 114, 100, 102, 58, 82, 68, 70, 32, 120, 109, 108, 110, 115, 58, 114, 100, 102, 61, 34, 104, 116, 116, 112, 58, 47, 47, 119, 119, 119, 46, 119, 51, 46, 111, 114, 103, 47, 49, 57, 57, 57, 47, 48, 50, 47, 50, 50, 45, 114, 100, 102, 45, 115, 121, 110, 116, 97, 120, 45, 110, 115, 35, 34, 62, 10, 32, 32, 32, 32, 32, 32, 60, 114, 100, 102, 58, 68, 101, 115, 99, 114, 105, 112, 116, 105, 111, 110, 32, 114, 100, 102, 58, 97, 98, 111, 117, 116, 61, 34, 34, 10, 32, 32, 32, 32, 32, 32, 32, 32, 32, 32, 32, 32, 120, 109, 108, 110, 115, 58, 101, 120, 105, 102, 61, 34, 104, 116, 116, 112, 58, 47, 47, 110, 115, 46, 97, 100, 111, 98, 101, 46, 99, 111, 109, 47, 101, 120, 105, 102, 47, 49, 46, 48, 47, 34, 10, 32, 32, 32, 32, 32, 32, 32, 32, 32, 32, 32, 32, 120, 109, 108, 110, 115, 58, 116, 105, 102, 102, 61, 34, 104, 116, 116, 112, 58, 47, 47, 110, 115, 46, 97, 100, 111, 98, 101, 46, 99, 111, 109, 47, 116, 105, 102, 102, 47, 49, 46, 48, 47, 34, 62, 10, 32, 32, 32, 32, 32, 32, 32, 32, 32, 60, 101, 120, 105, 102, 58, 80, 105, 120, 101, 108, 89, 68, 105, 109, 101, 110, 115, 105, 111, 110, 62, 49, 53, 50, 60, 47, 101, 120, 105, 102, 58, 80, 105, 120, 101, 108, 89, 68, 105, 109, 101, 110, 115, 105, 111, 110, 62, 10, 32, 32, 32, 32, 32, 32, 32, 32, 32, 60, 101, 120, 105, 102, 58, 80, 105, 120, 101, 108, 88, 68, 105, 109, 101, 110, 115, 105, 111, 110, 62, 50, 50, 48, 60, 47, 101, 120, 105, 102, 58, 80, 105, 120, 101, 108, 88, 68, 105, 109, 101, 110, 115, 105, 111, 110, 62, 10, 32, 32, 32, 32, 32, 32, 32, 32, 32, 60, 116, 105, 102, 102, 58, 79, 114, 105, 101, 110, 116, 97, 116, 105, 111, 110, 62, 49, 60, 47, 116, 105, 102, 102, 58, 79, 114, 105, 101, 110, 116, 97, 116, 105, 111, 110, 62, 10, 32, 32, 32, 32, 32, 32, 60, 47, 114, 100, 102, 58, 68, 101, 115, 99, 114, 105, 112, 116, 105, 111, 110, 62, 10, 32, 32, 32, 60, 47, 114, 100, 102, 58, 82, 68, 70, 62, 10, 60, 47, 120, 58, 120, 109, 112, 109, 101, 116, 97, 62, 10, 233, 63, 32, 177, 0, 0, 1, 148, 73, 68, 65, 84, 56, 79, 149, 147, 177, 175, 193, 80, 24, 197, 207, 171, 65, 98, 40, 18, 36, 54, 131, 201, 102, 53, 8, 179, 197, 98, 105, 68, 24, 108, 93, 25, 76, 254, 2, 137, 69, 194, 210, 196, 42, 86, 210, 177, 145, 144, 24, 172, 6, 131, 8, 131, 16, 34, 97, 161, 232, 115, 63, 183, 120, 201, 243, 94, 253, 146, 38, 223, 57, 105, 79, 239, 185, 183, 253, 50, 110, 224, 3, 142, 199, 35, 42, 149, 10, 6, 131, 1, 36, 73, 194, 199, 1, 173, 86, 11, 181, 90, 141, 102, 81, 20, 33, 208, 100, 145, 217, 108, 134, 102, 179, 201, 21, 16, 141, 70, 173, 7, 92, 175, 87, 52, 26, 13, 28, 14, 7, 210, 126, 191, 31, 153, 76, 198, 122, 64, 183, 219, 69, 191, 223, 231, 10, 200, 231, 243, 240, 122, 189, 214, 2, 86, 171, 21, 20, 69, 225, 10, 136, 199, 227, 116, 49, 254, 13, 184, 92, 46, 180, 244, 205, 102, 67, 218, 227, 241, 208, 219, 77, 40, 96, 191, 223, 211, 141, 191, 209, 235, 245, 160, 105, 26, 87, 64, 54, 155, 165, 254, 38, 2, 59, 146, 84, 42, 133, 66, 161, 128, 237, 118, 203, 237, 59, 187, 221, 14, 245, 122, 29, 231, 243, 153, 116, 36, 18, 65, 34, 145, 160, 217, 196, 166, 235, 122, 249, 116, 58, 97, 185, 92, 98, 177, 88, 32, 22, 139, 65, 16, 238, 205, 88, 248, 104, 52, 162, 217, 237, 118, 163, 84, 42, 193, 229, 114, 145, 54, 17, 146, 201, 36, 31, 65, 187, 108, 110, 214, 112, 56, 68, 167, 211, 161, 153, 145, 78, 167, 17, 8, 4, 184, 122, 98, 107, 183, 219, 229, 233, 116, 138, 249, 124, 78, 198, 120, 60, 134, 211, 233, 164, 47, 110, 189, 94, 147, 23, 14, 135, 33, 203, 242, 99, 101, 175, 208, 167, 204, 186, 22, 139, 69, 76, 38, 19, 110, 63, 113, 56, 28, 168, 86, 171, 8, 6, 131, 220, 249, 9, 69, 178, 94, 172, 159, 207, 231, 35, 243, 21, 246, 195, 188, 123, 152, 241, 88, 19, 235, 199, 86, 97, 183, 219, 185, 3, 132, 66, 33, 58, 161, 63, 97, 21, 94, 81, 85, 213, 184, 109, 172, 145, 203, 229, 140, 91, 37, 238, 190, 195, 48, 190, 1, 231, 96, 208, 15, 105, 22, 68, 122, 0, 0, 0, 0, 73, 69, 78, 68, 174, 66, 96, 130}; // fixed array const
#define _const_ui__bytes_circle_png_len 818
array_fixed_byte_818 _const_ui__bytes_circle_png = {((byte)(137)), 80, 78, 71, 13, 10, 26, 10, 0, 0, 0, 13, 73, 72, 68, 82, 0, 0, 0, 16, 0, 0, 0, 16, 8, 6, 0, 0, 0, 31, 243, 255, 97, 0, 0, 0, 6, 98, 75, 71, 68, 0, 0, 0, 0, 0, 0, 249, 67, 187, 127, 0, 0, 0, 9, 112, 72, 89, 115, 0, 0, 14, 196, 0, 0, 14, 196, 1, 149, 43, 14, 27, 0, 0, 0, 7, 116, 73, 77, 69, 7, 228, 1, 13, 12, 55, 42, 204, 173, 146, 223, 0, 0, 2, 191, 73, 68, 65, 84, 56, 203, 117, 147, 75, 111, 27, 55, 20, 133, 15, 47, 57, 154, 135, 60, 178, 37, 57, 66, 97, 189, 90, 163, 25, 196, 72, 22, 113, 146, 110, 211, 191, 94, 100, 209, 192, 13, 220, 54, 139, 52, 242, 171, 133, 109, 196, 11, 91, 178, 28, 69, 51, 36, 103, 72, 222, 46, 218, 20, 72, 91, 159, 237, 193, 249, 112, 54, 159, 96, 102, 2, 160, 0, 36, 0, 114, 239, 125, 207, 90, 219, 109, 154, 166, 227, 189, 143, 1, 64, 74, 105, 163, 40, 90, 197, 113, 188, 148, 82, 46, 1, 172, 0, 24, 0, 78, 48, 115, 11, 64, 198, 204, 219, 90, 235, 161, 214, 122, 66, 68, 59, 66, 136, 190, 16, 34, 3, 0, 102, 174, 66, 224, 5, 115, 184, 74, 211, 244, 34, 77, 211, 15, 66, 136, 57, 128, 74, 1, 72, 152, 185, 95, 150, 229, 110, 93, 215, 123, 81, 20, 21, 243, 249, 124, 124, 51, 191, 238, 149, 85, 153, 2, 64, 59, 107, 235, 193, 131, 193, 109, 191, 191, 125, 105, 140, 233, 133, 16, 226, 118, 187, 13, 33, 196, 181, 2, 144, 107, 173, 71, 117, 93, 239, 5, 14, 79, 95, 31, 252, 88, 8, 224, 171, 135, 223, 22, 27, 155, 155, 91, 145, 84, 18, 119, 119, 203, 102, 118, 52, 91, 211, 217, 105, 255, 217, 254, 139, 172, 174, 107, 16, 145, 205, 178, 204, 168, 16, 66, 207, 24, 51, 113, 206, 21, 111, 222, 28, 20, 143, 31, 63, 121, 56, 153, 76, 123, 66, 8, 137, 191, 211, 201, 59, 24, 143, 166, 253, 243, 243, 63, 58, 7, 63, 189, 198, 139, 231, 223, 85, 198, 152, 219, 36, 73, 110, 201, 24, 211, 101, 230, 157, 147, 211, 163, 241, 163, 71, 123, 223, 76, 38, 211, 126, 8, 65, 50, 243, 231, 61, 152, 25, 33, 120, 57, 157, 126, 221, 43, 138, 98, 247, 244, 236, 100, 204, 204, 59, 198, 152, 46, 53, 77, 147, 175, 215, 235, 126, 85, 85, 189, 225, 112, 212, 115, 206, 145, 82, 10, 68, 4, 33, 4, 132, 16, 32, 34, 40, 165, 224, 156, 163, 209, 112, 212, 93, 151, 159, 250, 101, 89, 110, 55, 77, 211, 33, 239, 125, 162, 141, 206, 24, 72, 163, 40, 82, 82, 254, 243, 252, 63, 145, 82, 34, 138, 34, 5, 22, 137, 214, 58, 245, 222, 199, 4, 8, 120, 239, 225, 189, 3, 0, 16, 209, 189, 128, 191, 58, 1, 231, 29, 156, 119, 0, 4, 72, 74, 178, 68, 84, 49, 195, 48, 7, 239, 189, 191, 23, 224, 189, 71, 8, 193, 3, 108, 164, 148, 90, 74, 178, 212, 106, 181, 86, 89, 154, 46, 66, 240, 11, 99, 141, 113, 206, 241, 125, 0, 231, 28, 27, 171, 77, 8, 97, 145, 165, 217, 188, 213, 106, 173, 40, 142, 227, 101, 158, 111, 94, 37, 113, 122, 249, 219, 236, 221, 185, 148, 100, 173, 181, 220, 52, 13, 152, 25, 204, 12, 231, 28, 172, 181, 76, 146, 234, 247, 179, 119, 231, 89, 186, 113, 153, 231, 249, 85, 28, 199, 75, 34, 162, 219, 36, 137, 47, 158, 237, 63, 63, 62, 158, 157, 28, 254, 242, 246, 231, 35, 109, 170, 21, 4, 234, 16, 130, 11, 33, 56, 102, 174, 181, 169, 86, 191, 190, 61, 156, 157, 158, 156, 29, 238, 63, 221, 63, 142, 227, 248, 130, 136, 150, 130, 153, 59, 204, 60, 168, 170, 106, 183, 105, 220, 222, 171, 87, 63, 20, 166, 214, 227, 141, 188, 221, 179, 181, 77, 1, 32, 110, 197, 230, 211, 199, 245, 34, 203, 54, 46, 95, 190, 252, 254, 88, 73, 249, 62, 203, 178, 223, 133, 16, 215, 95, 202, 100, 244, 208, 53, 110, 178, 188, 91, 238, 220, 220, 220, 108, 27, 173, 51, 0, 72, 210, 180, 26, 60, 24, 44, 182, 182, 182, 62, 40, 165, 62, 203, 180, 0, 80, 138, 127, 233, 220, 241, 222, 119, 173, 181, 93, 231, 220, 23, 58, 43, 165, 254, 87, 231, 63, 1, 43, 35, 163, 127, 2, 249, 125, 174, 0, 0, 0, 0, 73, 69, 78, 68, 174, 66, 96, 130}; // fixed array const
#define _const_ui__bytes_selected_radio_linux_png_len 946
array_fixed_byte_946 _const_ui__bytes_selected_radio_linux_png = {((byte)(137)), 80, 78, 71, 13, 10, 26, 10, 0, 0, 0, 13, 73, 72, 68, 82, 0, 0, 0, 16, 0, 0, 0, 16, 8, 6, 0, 0, 0, 31, 243, 255, 97, 0, 0, 0, 6, 98, 75, 71, 68, 0, 255, 0, 255, 0, 255, 160, 189, 167, 147, 0, 0, 0, 9, 112, 72, 89, 115, 0, 0, 14, 196, 0, 0, 14, 196, 1, 149, 43, 14, 27, 0, 0, 0, 7, 116, 73, 77, 69, 7, 228, 1, 13, 12, 52, 27, 182, 94, 193, 38, 0, 0, 3, 63, 73, 68, 65, 84, 56, 203, 109, 211, 203, 110, 27, 85, 28, 7, 224, 223, 57, 103, 46, 158, 51, 30, 199, 151, 196, 73, 236, 56, 184, 193, 49, 164, 8, 37, 64, 80, 37, 144, 202, 146, 34, 94, 128, 53, 18, 123, 118, 188, 1, 98, 195, 91, 128, 144, 216, 3, 43, 164, 168, 11, 170, 180, 2, 5, 218, 230, 214, 4, 112, 162, 70, 141, 47, 177, 227, 120, 102, 206, 92, 206, 249, 179, 98, 81, 196, 247, 14, 31, 35, 34, 14, 192, 2, 80, 0, 16, 104, 173, 171, 73, 146, 84, 178, 44, 43, 105, 173, 93, 0, 16, 66, 36, 182, 109, 79, 93, 215, 29, 11, 33, 198, 0, 166, 0, 20, 128, 156, 17, 145, 3, 64, 18, 209, 124, 28, 199, 205, 56, 142, 87, 57, 231, 13, 198, 88, 141, 49, 38, 1, 128, 136, 34, 99, 104, 68, 100, 46, 60, 207, 59, 243, 60, 239, 57, 99, 108, 8, 32, 178, 0, 20, 136, 168, 22, 134, 225, 90, 154, 166, 27, 182, 109, 119, 135, 195, 97, 107, 48, 236, 87, 195, 40, 244, 0, 192, 151, 126, 92, 95, 168, 95, 213, 106, 243, 231, 74, 169, 170, 49, 198, 245, 125, 31, 140, 177, 190, 5, 32, 136, 227, 120, 37, 77, 211, 13, 67, 102, 235, 193, 238, 47, 93, 6, 44, 173, 119, 186, 197, 185, 185, 178, 45, 44, 129, 201, 100, 156, 29, 30, 29, 206, 248, 233, 73, 237, 237, 183, 182, 101, 154, 166, 224, 156, 39, 82, 74, 101, 25, 99, 170, 74, 169, 213, 60, 207, 187, 143, 30, 237, 118, 219, 237, 91, 171, 27, 27, 183, 203, 100, 140, 67, 0, 7, 8, 190, 244, 77, 107, 229, 21, 185, 191, 255, 196, 221, 125, 248, 0, 219, 239, 188, 27, 41, 165, 174, 10, 133, 194, 149, 165, 148, 170, 16, 81, 227, 217, 201, 81, 107, 185, 209, 88, 236, 116, 214, 231, 116, 158, 21, 46, 70, 161, 56, 232, 141, 193, 0, 220, 110, 87, 197, 82, 85, 242, 245, 245, 46, 146, 52, 89, 58, 57, 125, 214, 122, 173, 251, 250, 153, 82, 170, 103, 101, 89, 22, 204, 102, 179, 90, 20, 69, 213, 78, 103, 61, 32, 210, 238, 254, 217, 149, 248, 250, 251, 199, 172, 52, 23, 128, 136, 240, 237, 207, 199, 248, 226, 147, 77, 241, 106, 179, 236, 52, 27, 205, 226, 31, 79, 126, 175, 133, 97, 56, 111, 89, 86, 137, 107, 173, 11, 177, 138, 37, 1, 158, 47, 165, 109, 11, 240, 47, 191, 249, 21, 165, 106, 5, 239, 111, 182, 240, 222, 230, 42, 252, 74, 5, 95, 125, 247, 27, 179, 5, 184, 239, 75, 27, 196, 10, 113, 28, 123, 90, 107, 151, 3, 12, 90, 107, 104, 157, 131, 49, 134, 44, 77, 209, 187, 12, 177, 92, 47, 99, 239, 239, 9, 30, 247, 38, 88, 89, 44, 227, 244, 226, 6, 121, 158, 129, 115, 142, 92, 231, 200, 117, 14, 128, 193, 18, 130, 39, 156, 243, 136, 8, 42, 207, 243, 76, 67, 155, 55, 111, 149, 68, 127, 48, 193, 90, 171, 6, 2, 112, 210, 27, 96, 107, 173, 68, 105, 150, 25, 109, 120, 6, 144, 18, 66, 196, 66, 240, 132, 59, 142, 51, 149, 158, 55, 50, 70, 143, 166, 55, 211, 25, 152, 157, 126, 118, 175, 173, 117, 116, 69, 59, 15, 79, 177, 179, 123, 2, 166, 38, 244, 233, 135, 109, 3, 102, 167, 215, 211, 235, 153, 49, 102, 36, 61, 57, 116, 28, 103, 106, 185, 174, 59, 14, 130, 185, 139, 130, 235, 157, 63, 61, 124, 90, 187, 179, 125, 199, 121, 163, 211, 46, 127, 94, 146, 206, 96, 60, 230, 0, 161, 94, 173, 152, 229, 133, 197, 84, 165, 201, 245, 193, 209, 254, 11, 233, 21, 207, 131, 32, 184, 112, 93, 119, 204, 136, 168, 25, 69, 81, 71, 41, 181, 245, 227, 79, 63, 108, 45, 45, 215, 187, 237, 118, 123, 105, 97, 126, 177, 232, 216, 142, 13, 48, 164, 105, 146, 245, 135, 151, 179, 94, 239, 175, 23, 253, 203, 225, 241, 71, 247, 62, 222, 115, 93, 119, 79, 74, 121, 202, 136, 168, 68, 68, 245, 40, 138, 214, 178, 44, 223, 184, 127, 127, 167, 171, 210, 184, 85, 12, 252, 106, 146, 38, 30, 0, 184, 142, 171, 110, 174, 103, 35, 41, 139, 231, 119, 239, 126, 112, 108, 9, 113, 32, 165, 252, 147, 49, 214, 127, 57, 147, 138, 155, 121, 150, 175, 142, 39, 227, 198, 96, 48, 152, 87, 113, 44, 1, 160, 224, 121, 81, 125, 161, 62, 42, 151, 203, 207, 45, 203, 250, 55, 211, 8, 64, 200, 254, 211, 185, 164, 181, 174, 36, 73, 82, 201, 243, 252, 165, 206, 150, 101, 253, 111, 231, 127, 0, 37, 201, 192, 194, 193, 83, 41, 228, 0, 0, 0, 0, 73, 69, 78, 68, 174, 66, 96, 130}; // fixed array const
#define _const_ui__bytes_darwin_circle_png_len 3558
array_fixed_byte_3558 _const_ui__bytes_darwin_circle_png = {((byte)(137)), 80, 78, 71, 13, 10, 26, 10, 0, 0, 0, 13, 73, 72, 68, 82, 0, 0, 0, 12, 0, 0, 0, 12, 8, 6, 0, 0, 0, 86, 117, 92, 231, 0, 0, 10, 171, 105, 67, 67, 80, 73, 67, 67, 32, 80, 114, 111, 102, 105, 108, 101, 0, 0, 72, 137, 149, 150, 7, 84, 147, 201, 22, 199, 231, 251, 210, 27, 45, 116, 41, 161, 55, 233, 210, 165, 215, 80, 4, 233, 96, 35, 36, 1, 66, 9, 49, 33, 40, 216, 16, 17, 87, 112, 45, 136, 136, 128, 186, 162, 75, 85, 112, 81, 1, 89, 84, 68, 17, 219, 162, 160, 216, 117, 65, 68, 64, 89, 55, 22, 68, 69, 205, 251, 128, 71, 216, 125, 239, 188, 247, 206, 251, 159, 115, 51, 191, 115, 115, 231, 206, 157, 249, 102, 206, 185, 0, 144, 239, 50, 120, 188, 84, 88, 6, 128, 52, 110, 6, 63, 212, 215, 131, 22, 29, 19, 75, 195, 189, 0, 16, 128, 129, 2, 176, 3, 202, 12, 166, 128, 231, 30, 18, 18, 8, 16, 205, 141, 127, 215, 199, 123, 72, 52, 162, 59, 166, 211, 185, 254, 253, 255, 255, 42, 89, 22, 91, 192, 4, 0, 10, 65, 56, 158, 37, 96, 166, 33, 124, 26, 177, 118, 38, 143, 159, 1, 0, 138, 135, 248, 117, 214, 100, 240, 166, 185, 24, 97, 121, 62, 82, 32, 194, 53, 211, 156, 56, 203, 237, 211, 28, 63, 203, 183, 103, 98, 194, 67, 61, 17, 126, 1, 0, 158, 204, 96, 240, 19, 1, 32, 137, 16, 63, 45, 147, 153, 136, 228, 33, 35, 187, 5, 22, 92, 22, 135, 139, 176, 27, 194, 46, 204, 36, 6, 11, 225, 28, 132, 23, 166, 165, 165, 79, 243, 113, 132, 13, 227, 255, 146, 39, 241, 111, 57, 227, 37, 57, 25, 140, 68, 9, 207, 238, 101, 70, 120, 47, 142, 128, 151, 202, 200, 250, 63, 143, 227, 127, 43, 45, 85, 56, 183, 134, 14, 98, 228, 36, 190, 95, 232, 244, 122, 211, 231, 150, 146, 30, 32, 97, 110, 252, 146, 224, 57, 230, 176, 102, 107, 154, 230, 36, 161, 95, 196, 28, 51, 5, 158, 177, 115, 204, 98, 120, 5, 72, 230, 166, 46, 9, 156, 227, 4, 142, 15, 93, 146, 39, 131, 30, 62, 199, 252, 244, 80, 73, 126, 182, 192, 59, 108, 142, 25, 252, 249, 181, 132, 41, 17, 238, 146, 117, 217, 116, 73, 206, 236, 164, 240, 168, 57, 206, 228, 68, 46, 153, 99, 65, 74, 88, 192, 124, 140, 167, 196, 207, 23, 134, 74, 106, 78, 224, 251, 72, 246, 152, 38, 248, 203, 190, 56, 116, 73, 124, 70, 82, 184, 159, 100, 143, 140, 249, 218, 216, 130, 104, 73, 13, 44, 182, 151, 183, 196, 207, 141, 144, 196, 240, 50, 60, 36, 249, 121, 169, 33, 146, 120, 118, 170, 175, 196, 47, 200, 12, 147, 204, 205, 64, 46, 219, 252, 220, 16, 201, 249, 36, 51, 252, 67, 230, 24, 112, 64, 16, 96, 0, 102, 6, 123, 109, 198, 116, 193, 158, 233, 188, 44, 62, 39, 49, 41, 131, 230, 142, 188, 24, 54, 141, 206, 101, 154, 45, 164, 89, 89, 88, 89, 0, 48, 253, 254, 102, 63, 175, 232, 214, 204, 187, 130, 84, 100, 231, 125, 249, 200, 93, 115, 17, 137, 197, 226, 230, 121, 159, 95, 23, 0, 77, 78, 0, 16, 203, 230, 125, 6, 117, 0, 72, 245, 3, 112, 245, 41, 83, 200, 207, 156, 245, 161, 167, 127, 48, 128, 8, 164, 129, 60, 80, 1, 26, 200, 253, 49, 4, 166, 192, 10, 216, 2, 39, 224, 6, 188, 129, 63, 8, 6, 225, 32, 6, 172, 4, 76, 144, 4, 210, 0, 31, 172, 1, 235, 193, 102, 144, 15, 10, 193, 110, 176, 15, 148, 129, 195, 224, 40, 168, 1, 39, 64, 19, 104, 1, 237, 224, 34, 184, 2, 110, 128, 219, 160, 31, 60, 6, 3, 96, 24, 188, 6, 34, 240, 17, 76, 65, 16, 132, 131, 40, 16, 21, 82, 129, 52, 33, 61, 200, 4, 178, 130, 236, 33, 23, 200, 27, 10, 132, 66, 161, 24, 40, 14, 74, 132, 184, 144, 16, 90, 15, 109, 129, 10, 161, 34, 168, 12, 58, 2, 213, 66, 191, 64, 103, 161, 139, 208, 53, 168, 23, 122, 8, 13, 66, 99, 208, 59, 232, 11, 140, 130, 201, 176, 60, 172, 14, 235, 195, 230, 176, 61, 236, 14, 7, 192, 225, 240, 10, 56, 17, 94, 13, 103, 195, 121, 240, 78, 184, 20, 174, 132, 143, 195, 205, 240, 69, 248, 6, 220, 15, 15, 192, 175, 225, 9, 20, 64, 145, 80, 138, 40, 45, 148, 41, 202, 30, 229, 137, 10, 70, 197, 162, 18, 80, 124, 212, 70, 84, 1, 170, 4, 85, 137, 106, 64, 181, 161, 186, 81, 119, 80, 3, 168, 113, 212, 103, 52, 22, 77, 69, 211, 208, 166, 104, 39, 180, 31, 58, 2, 205, 68, 175, 70, 111, 68, 239, 64, 151, 161, 107, 208, 205, 232, 203, 232, 59, 232, 65, 180, 8, 253, 29, 67, 193, 168, 97, 76, 48, 142, 24, 58, 38, 26, 147, 136, 89, 131, 201, 199, 148, 96, 170, 48, 103, 48, 93, 152, 126, 204, 48, 230, 35, 22, 139, 85, 196, 26, 96, 237, 176, 126, 216, 24, 108, 50, 118, 29, 118, 7, 246, 32, 182, 17, 219, 129, 237, 197, 14, 97, 39, 112, 56, 156, 10, 206, 4, 231, 140, 11, 198, 49, 112, 25, 184, 124, 220, 1, 220, 113, 220, 5, 92, 31, 110, 24, 247, 9, 79, 194, 107, 226, 173, 240, 62, 248, 88, 60, 23, 159, 139, 47, 193, 215, 225, 207, 227, 251, 240, 35, 248, 41, 130, 12, 65, 143, 224, 72, 8, 38, 176, 8, 89, 132, 93, 132, 99, 132, 54, 194, 45, 194, 48, 97, 138, 40, 75, 52, 32, 58, 19, 195, 137, 201, 196, 205, 196, 82, 98, 3, 177, 139, 248, 132, 248, 158, 68, 34, 105, 147, 28, 72, 75, 73, 28, 82, 14, 169, 148, 116, 146, 116, 149, 52, 72, 250, 76, 150, 35, 27, 147, 61, 201, 203, 201, 66, 242, 78, 114, 53, 185, 131, 252, 144, 252, 158, 66, 161, 232, 83, 220, 40, 177, 148, 12, 202, 78, 74, 45, 229, 18, 229, 25, 229, 147, 20, 85, 202, 76, 138, 46, 197, 146, 218, 36, 85, 46, 213, 44, 213, 39, 245, 70, 154, 32, 173, 39, 237, 46, 189, 82, 58, 91, 186, 68, 250, 148, 244, 45, 233, 113, 25, 130, 140, 190, 140, 167, 12, 67, 102, 163, 76, 185, 204, 89, 153, 251, 50, 19, 178, 84, 89, 75, 217, 96, 217, 52, 217, 29, 178, 117, 178, 215, 100, 71, 229, 112, 114, 250, 114, 222, 114, 44, 185, 60, 185, 163, 114, 151, 228, 134, 168, 40, 170, 14, 213, 147, 202, 164, 110, 161, 30, 163, 118, 81, 135, 229, 177, 242, 6, 242, 116, 249, 100, 249, 66, 249, 19, 242, 61, 242, 34, 5, 57, 133, 69, 10, 145, 10, 107, 21, 202, 21, 206, 41, 12, 40, 162, 20, 245, 21, 233, 138, 169, 138, 187, 20, 155, 20, 239, 41, 126, 81, 82, 87, 114, 87, 98, 43, 109, 87, 106, 80, 234, 83, 154, 84, 94, 160, 236, 166, 204, 86, 46, 80, 110, 84, 238, 87, 254, 162, 66, 83, 241, 86, 73, 81, 217, 163, 210, 162, 242, 84, 21, 173, 106, 172, 186, 84, 117, 141, 234, 33, 213, 46, 213, 241, 5, 242, 11, 156, 22, 48, 23, 20, 44, 104, 90, 240, 72, 13, 86, 51, 86, 11, 85, 91, 167, 118, 84, 237, 166, 218, 132, 186, 134, 186, 175, 58, 79, 253, 128, 250, 37, 245, 113, 13, 69, 13, 55, 141, 100, 141, 98, 141, 243, 26, 99, 154, 84, 77, 23, 77, 142, 102, 177, 230, 5, 205, 87, 52, 5, 154, 59, 45, 149, 86, 74, 187, 76, 19, 105, 169, 105, 249, 105, 9, 181, 142, 104, 245, 104, 77, 105, 27, 104, 71, 104, 231, 106, 55, 106, 63, 213, 33, 234, 216, 235, 36, 232, 20, 235, 116, 234, 136, 116, 53, 117, 131, 116, 215, 235, 214, 235, 62, 210, 35, 232, 217, 235, 37, 233, 237, 215, 235, 214, 155, 212, 55, 208, 143, 210, 223, 166, 223, 162, 63, 106, 160, 108, 64, 55, 200, 54, 168, 55, 120, 98, 72, 49, 116, 53, 92, 109, 88, 105, 120, 215, 8, 107, 100, 111, 148, 98, 116, 208, 232, 182, 49, 108, 108, 99, 156, 100, 92, 110, 124, 203, 4, 54, 177, 53, 225, 152, 28, 52, 233, 93, 136, 89, 232, 176, 144, 187, 176, 114, 225, 125, 83, 178, 169, 187, 105, 166, 105, 189, 233, 160, 153, 162, 89, 160, 89, 174, 89, 139, 217, 27, 115, 93, 243, 88, 243, 61, 230, 221, 230, 223, 45, 108, 44, 82, 45, 142, 89, 60, 182, 148, 179, 244, 183, 204, 181, 108, 179, 124, 103, 101, 108, 197, 180, 42, 183, 186, 107, 77, 177, 246, 177, 222, 100, 221, 106, 253, 118, 145, 201, 34, 246, 162, 67, 139, 30, 216, 80, 109, 130, 108, 182, 217, 116, 218, 124, 179, 181, 179, 229, 219, 54, 216, 142, 217, 233, 218, 197, 217, 85, 216, 221, 183, 151, 183, 15, 177, 223, 97, 127, 213, 1, 227, 224, 225, 176, 201, 161, 221, 225, 179, 163, 173, 99, 134, 99, 147, 227, 159, 78, 166, 78, 41, 78, 117, 78, 163, 139, 13, 22, 179, 23, 31, 91, 60, 228, 172, 237, 204, 112, 62, 226, 60, 224, 66, 115, 137, 115, 249, 201, 101, 192, 85, 203, 149, 225, 90, 233, 250, 220, 77, 199, 141, 229, 86, 229, 54, 226, 110, 228, 158, 236, 126, 220, 253, 141, 135, 133, 7, 223, 227, 140, 199, 164, 167, 163, 231, 6, 207, 14, 47, 148, 151, 175, 87, 129, 87, 143, 183, 156, 119, 132, 119, 153, 247, 51, 31, 109, 159, 68, 159, 122, 31, 145, 175, 141, 239, 58, 223, 14, 63, 140, 95, 128, 223, 30, 191, 251, 116, 117, 58, 147, 94, 75, 23, 249, 219, 249, 111, 240, 191, 28, 64, 14, 8, 11, 40, 11, 120, 30, 104, 28, 200, 15, 108, 11, 130, 131, 252, 131, 246, 6, 61, 89, 162, 183, 132, 187, 164, 37, 24, 4, 211, 131, 247, 6, 63, 13, 49, 8, 89, 29, 242, 235, 82, 236, 210, 144, 165, 229, 75, 95, 134, 90, 134, 174, 15, 237, 14, 163, 134, 173, 10, 171, 11, 251, 24, 238, 17, 190, 43, 252, 113, 132, 97, 132, 48, 162, 51, 82, 58, 114, 121, 100, 109, 228, 100, 148, 87, 84, 81, 212, 64, 180, 121, 244, 134, 232, 27, 49, 170, 49, 156, 152, 214, 88, 92, 108, 100, 108, 85, 236, 196, 50, 239, 101, 251, 150, 13, 47, 183, 89, 158, 191, 252, 222, 10, 131, 21, 107, 87, 92, 91, 169, 186, 50, 117, 229, 185, 85, 210, 171, 24, 171, 78, 197, 97, 226, 162, 226, 234, 226, 190, 50, 130, 25, 149, 140, 137, 120, 122, 124, 69, 188, 136, 233, 201, 220, 207, 124, 205, 114, 99, 21, 179, 198, 216, 206, 236, 34, 246, 72, 130, 115, 66, 81, 194, 104, 162, 115, 226, 222, 196, 177, 36, 215, 164, 146, 164, 113, 142, 39, 167, 140, 243, 54, 217, 47, 249, 112, 242, 100, 74, 112, 74, 117, 138, 56, 53, 42, 181, 49, 13, 159, 22, 151, 118, 150, 43, 199, 77, 225, 94, 78, 215, 72, 95, 155, 222, 203, 51, 225, 229, 243, 6, 86, 59, 174, 222, 183, 90, 196, 15, 224, 87, 9, 32, 193, 10, 65, 107, 134, 60, 210, 232, 220, 20, 26, 10, 183, 10, 7, 51, 93, 50, 203, 51, 63, 173, 137, 92, 115, 106, 173, 236, 90, 238, 218, 155, 89, 198, 89, 219, 179, 70, 178, 125, 178, 127, 94, 135, 94, 199, 92, 215, 185, 94, 107, 253, 230, 245, 131, 27, 220, 55, 28, 217, 8, 109, 140, 223, 216, 185, 73, 103, 83, 222, 166, 225, 28, 223, 156, 154, 205, 196, 205, 41, 155, 127, 203, 181, 200, 45, 202, 253, 176, 37, 106, 75, 91, 158, 122, 94, 78, 222, 208, 86, 223, 173, 245, 249, 82, 249, 252, 252, 251, 219, 156, 182, 29, 254, 1, 253, 3, 231, 135, 158, 237, 214, 219, 15, 108, 255, 94, 192, 42, 184, 94, 104, 81, 88, 82, 248, 117, 7, 115, 199, 245, 31, 45, 127, 44, 253, 81, 188, 51, 97, 103, 207, 46, 219, 93, 135, 118, 99, 119, 115, 119, 223, 219, 227, 186, 167, 166, 72, 182, 40, 187, 104, 104, 111, 208, 222, 230, 98, 90, 113, 65, 241, 135, 125, 171, 246, 93, 43, 89, 84, 114, 120, 63, 113, 191, 112, 255, 64, 105, 96, 105, 235, 1, 221, 3, 187, 15, 124, 45, 75, 42, 235, 47, 247, 40, 111, 172, 80, 171, 216, 94, 49, 121, 144, 117, 176, 239, 144, 219, 161, 134, 195, 234, 135, 11, 15, 127, 249, 137, 243, 211, 131, 35, 190, 71, 154, 43, 245, 43, 75, 142, 98, 143, 102, 30, 125, 121, 44, 242, 88, 247, 207, 246, 63, 215, 86, 169, 86, 21, 86, 125, 171, 230, 86, 15, 212, 132, 214, 92, 174, 181, 171, 173, 173, 83, 171, 219, 85, 15, 215, 11, 235, 199, 142, 47, 63, 126, 251, 132, 215, 137, 214, 6, 211, 134, 35, 141, 138, 141, 133, 39, 193, 73, 225, 201, 87, 191, 196, 253, 114, 175, 41, 160, 169, 243, 148, 253, 169, 134, 211, 122, 167, 43, 206, 80, 207, 20, 52, 67, 205, 89, 205, 162, 150, 164, 150, 129, 214, 152, 214, 222, 179, 254, 103, 59, 219, 156, 218, 206, 252, 106, 246, 107, 117, 187, 86, 123, 249, 57, 133, 115, 187, 206, 19, 207, 231, 157, 23, 95, 200, 190, 48, 209, 193, 235, 24, 191, 152, 120, 113, 168, 115, 85, 231, 227, 75, 209, 151, 238, 94, 94, 122, 185, 167, 43, 160, 235, 234, 21, 159, 43, 151, 186, 221, 187, 47, 92, 117, 190, 218, 126, 205, 241, 218, 217, 235, 246, 215, 91, 110, 216, 222, 104, 190, 105, 115, 243, 204, 111, 54, 191, 157, 233, 177, 237, 105, 190, 101, 119, 171, 245, 182, 195, 237, 182, 222, 197, 189, 231, 251, 92, 251, 46, 222, 241, 186, 115, 229, 46, 253, 238, 141, 254, 37, 253, 189, 247, 34, 238, 61, 184, 191, 252, 254, 192, 3, 214, 131, 209, 135, 169, 15, 223, 62, 202, 124, 52, 245, 56, 231, 9, 230, 73, 193, 83, 153, 167, 37, 207, 212, 158, 85, 254, 110, 244, 123, 227, 128, 237, 192, 185, 65, 175, 193, 155, 207, 195, 158, 63, 30, 98, 14, 189, 126, 33, 120, 241, 117, 56, 239, 37, 229, 101, 201, 136, 230, 72, 237, 168, 213, 104, 251, 152, 207, 216, 237, 87, 203, 94, 13, 191, 230, 189, 158, 26, 207, 255, 67, 246, 143, 138, 55, 134, 111, 78, 255, 233, 246, 231, 77, 81, 180, 104, 248, 45, 255, 173, 248, 221, 142, 247, 42, 239, 171, 63, 44, 250, 208, 57, 17, 50, 241, 236, 99, 218, 199, 169, 201, 130, 79, 42, 159, 106, 62, 219, 127, 238, 254, 18, 245, 101, 100, 106, 205, 87, 220, 215, 210, 111, 70, 223, 218, 190, 7, 124, 127, 34, 78, 19, 139, 121, 12, 62, 99, 166, 21, 64, 33, 6, 39, 36, 0, 240, 174, 26, 0, 74, 12, 0, 84, 164, 111, 38, 46, 155, 237, 143, 103, 4, 205, 246, 244, 51, 4, 254, 19, 207, 246, 208, 51, 178, 5, 160, 1, 25, 166, 91, 161, 233, 150, 239, 84, 14, 0, 250, 110, 72, 238, 14, 0, 130, 145, 49, 220, 13, 192, 214, 214, 18, 251, 167, 4, 9, 214, 86, 179, 185, 164, 234, 1, 192, 105, 137, 197, 239, 210, 1, 32, 32, 246, 213, 87, 44, 158, 10, 17, 139, 191, 85, 32, 197, 222, 5, 224, 252, 232, 108, 95, 62, 45, 44, 210, 191, 55, 80, 47, 10, 170, 98, 251, 190, 231, 228, 128, 127, 209, 63, 0, 74, 247, 10, 138, 245, 28, 149, 144, 0, 0, 2, 11, 105, 84, 88, 116, 88, 77, 76, 58, 99, 111, 109, 46, 97, 100, 111, 98, 101, 46, 120, 109, 112, 0, 0, 0, 0, 0, 60, 120, 58, 120, 109, 112, 109, 101, 116, 97, 32, 120, 109, 108, 110, 115, 58, 120, 61, 34, 97, 100, 111, 98, 101, 58, 110, 115, 58, 109, 101, 116, 97, 47, 34, 32, 120, 58, 120, 109, 112, 116, 107, 61, 34, 88, 77, 80, 32, 67, 111, 114, 101, 32, 53, 46, 52, 46, 48, 34, 62, 10, 32, 32, 32, 60, 114, 100, 102, 58, 82, 68, 70, 32, 120, 109, 108, 110, 115, 58, 114, 100, 102, 61, 34, 104, 116, 116, 112, 58, 47, 47, 119, 119, 119, 46, 119, 51, 46, 111, 114, 103, 47, 49, 57, 57, 57, 47, 48, 50, 47, 50, 50, 45, 114, 100, 102, 45, 115, 121, 110, 116, 97, 120, 45, 110, 115, 35, 34, 62, 10, 32, 32, 32, 32, 32, 32, 60, 114, 100, 102, 58, 68, 101, 115, 99, 114, 105, 112, 116, 105, 111, 110, 32, 114, 100, 102, 58, 97, 98, 111, 117, 116, 61, 34, 34, 10, 32, 32, 32, 32, 32, 32, 32, 32, 32, 32, 32, 32, 120, 109, 108, 110, 115, 58, 116, 105, 102, 102, 61, 34, 104, 116, 116, 112, 58, 47, 47, 110, 115, 46, 97, 100, 111, 98, 101, 46, 99, 111, 109, 47, 116, 105, 102, 102, 47, 49, 46, 48, 47, 34, 62, 10, 32, 32, 32, 32, 32, 32, 32, 32, 32, 60, 116, 105, 102, 102, 58, 82, 101, 115, 111, 108, 117, 116, 105, 111, 110, 85, 110, 105, 116, 62, 50, 60, 47, 116, 105, 102, 102, 58, 82, 101, 115, 111, 108, 117, 116, 105, 111, 110, 85, 110, 105, 116, 62, 10, 32, 32, 32, 32, 32, 32, 32, 32, 32, 60, 116, 105, 102, 102, 58, 67, 111, 109, 112, 114, 101, 115, 115, 105, 111, 110, 62, 49, 60, 47, 116, 105, 102, 102, 58, 67, 111, 109, 112, 114, 101, 115, 115, 105, 111, 110, 62, 10, 32, 32, 32, 32, 32, 32, 32, 32, 32, 60, 116, 105, 102, 102, 58, 79, 114, 105, 101, 110, 116, 97, 116, 105, 111, 110, 62, 49, 60, 47, 116, 105, 102, 102, 58, 79, 114, 105, 101, 110, 116, 97, 116, 105, 111, 110, 62, 10, 32, 32, 32, 32, 32, 32, 32, 32, 32, 60, 116, 105, 102, 102, 58, 80, 104, 111, 116, 111, 109, 101, 116, 114, 105, 99, 73, 110, 116, 101, 114, 112, 114, 101, 116, 97, 116, 105, 111, 110, 62, 50, 60, 47, 116, 105, 102, 102, 58, 80, 104, 111, 116, 111, 109, 101, 116, 114, 105, 99, 73, 110, 116, 101, 114, 112, 114, 101, 116, 97, 116, 105, 111, 110, 62, 10, 32, 32, 32, 32, 32, 32, 60, 47, 114, 100, 102, 58, 68, 101, 115, 99, 114, 105, 112, 116, 105, 111, 110, 62, 10, 32, 32, 32, 60, 47, 114, 100, 102, 58, 82, 68, 70, 62, 10, 60, 47, 120, 58, 120, 109, 112, 109, 101, 116, 97, 62, 10, 15, 69, 42, 147, 0, 0, 0, 223, 73, 68, 65, 84, 40, 21, 133, 82, 59, 10, 133, 64, 12, 28, 227, 231, 8, 130, 133, 133, 104, 43, 54, 122, 32, 175, 32, 120, 7, 45, 188, 133, 199, 177, 210, 78, 208, 198, 66, 240, 12, 130, 207, 236, 123, 89, 120, 162, 152, 38, 217, 201, 36, 217, 236, 172, 113, 156, 134, 159, 237, 251, 142, 174, 235, 48, 142, 163, 66, 162, 40, 66, 154, 166, 112, 28, 71, 40, 176, 36, 234, 251, 30, 85, 85, 97, 93, 87, 129, 148, 119, 93, 23, 101, 89, 170, 66, 6, 12, 158, 48, 12, 3, 138, 162, 0, 79, 184, 51, 34, 66, 93, 215, 170, 200, 56, 73, 71, 158, 231, 88, 150, 229, 142, 171, 49, 158, 212, 182, 45, 136, 175, 242, 70, 230, 170, 109, 219, 212, 126, 52, 207, 179, 238, 242, 22, 76, 211, 4, 122, 35, 93, 243, 20, 4, 193, 21, 123, 60, 135, 97, 8, 74, 146, 4, 190, 239, 63, 146, 36, 193, 75, 179, 38, 100, 154, 166, 122, 103, 203, 210, 146, 8, 71, 123, 126, 86, 214, 194, 182, 237, 239, 14, 113, 28, 163, 105, 26, 120, 158, 167, 73, 18, 112, 103, 22, 148, 187, 179, 41, 225, 36, 121, 253, 26, 124, 231, 44, 203, 254, 190, 198, 7, 214, 237, 83, 207, 108, 11, 4, 150, 0, 0, 0, 0, 73, 69, 78, 68, 174, 66, 96, 130}; // fixed array const
#define _const_ui__bytes_selected_radio_png_len 4411
array_fixed_byte_4411 _const_ui__bytes_selected_radio_png = {((byte)(137)), 80, 78, 71, 13, 10, 26, 10, 0, 0, 0, 13, 73, 72, 68, 82, 0, 0, 0, 32, 0, 0, 0, 32, 8, 6, 0, 0, 0, 115, 122, 122, 244, 0, 0, 10, 171, 105, 67, 67, 80, 73, 67, 67, 32, 80, 114, 111, 102, 105, 108, 101, 0, 0, 72, 137, 149, 150, 7, 84, 147, 201, 22, 199, 231, 251, 210, 27, 45, 116, 41, 161, 55, 233, 210, 165, 215, 80, 4, 233, 96, 35, 36, 1, 66, 9, 49, 33, 40, 216, 16, 17, 87, 112, 45, 136, 136, 128, 186, 162, 75, 85, 112, 81, 1, 89, 84, 68, 17, 219, 162, 160, 216, 117, 65, 68, 64, 89, 55, 22, 68, 69, 205, 251, 128, 71, 216, 125, 239, 188, 247, 206, 251, 159, 115, 51, 191, 115, 115, 231, 206, 157, 249, 102, 206, 185, 0, 144, 239, 50, 120, 188, 84, 88, 6, 128, 52, 110, 6, 63, 212, 215, 131, 22, 29, 19, 75, 195, 189, 0, 16, 128, 129, 2, 176, 3, 202, 12, 166, 128, 231, 30, 18, 18, 8, 16, 205, 141, 127, 215, 199, 123, 72, 52, 162, 59, 166, 211, 185, 254, 253, 255, 255, 42, 89, 22, 91, 192, 4, 0, 10, 65, 56, 158, 37, 96, 166, 33, 124, 26, 177, 118, 38, 143, 159, 1, 0, 138, 135, 248, 117, 214, 100, 240, 166, 185, 24, 97, 121, 62, 82, 32, 194, 53, 211, 156, 56, 203, 237, 211, 28, 63, 203, 183, 103, 98, 194, 67, 61, 17, 126, 1, 0, 158, 204, 96, 240, 19, 1, 32, 137, 16, 63, 45, 147, 153, 136, 228, 33, 35, 187, 5, 22, 92, 22, 135, 139, 176, 27, 194, 46, 204, 36, 6, 11, 225, 28, 132, 23, 166, 165, 165, 79, 243, 113, 132, 13, 227, 255, 146, 39, 241, 111, 57, 227, 37, 57, 25, 140, 68, 9, 207, 238, 101, 70, 120, 47, 142, 128, 151, 202, 200, 250, 63, 143, 227, 127, 43, 45, 85, 56, 183, 134, 14, 98, 228, 36, 190, 95, 232, 244, 122, 211, 231, 150, 146, 30, 32, 97, 110, 252, 146, 224, 57, 230, 176, 102, 107, 154, 230, 36, 161, 95, 196, 28, 51, 5, 158, 177, 115, 204, 98, 120, 5, 72, 230, 166, 46, 9, 156, 227, 4, 142, 15, 93, 146, 39, 131, 30, 62, 199, 252, 244, 80, 73, 126, 182, 192, 59, 108, 142, 25, 252, 249, 181, 132, 41, 17, 238, 146, 117, 217, 116, 73, 206, 236, 164, 240, 168, 57, 206, 228, 68, 46, 153, 99, 65, 74, 88, 192, 124, 140, 167, 196, 207, 23, 134, 74, 106, 78, 224, 251, 72, 246, 152, 38, 248, 203, 190, 56, 116, 73, 124, 70, 82, 184, 159, 100, 143, 140, 249, 218, 216, 130, 104, 73, 13, 44, 182, 151, 183, 196, 207, 141, 144, 196, 240, 50, 60, 36, 249, 121, 169, 33, 146, 120, 118, 170, 175, 196, 47, 200, 12, 147, 204, 205, 64, 46, 219, 252, 220, 16, 201, 249, 36, 51, 252, 67, 230, 24, 112, 64, 16, 96, 0, 102, 6, 123, 109, 198, 116, 193, 158, 233, 188, 44, 62, 39, 49, 41, 131, 230, 142, 188, 24, 54, 141, 206, 101, 154, 45, 164, 89, 89, 88, 89, 0, 48, 253, 254, 102, 63, 175, 232, 214, 204, 187, 130, 84, 100, 231, 125, 249, 200, 93, 115, 17, 137, 197, 226, 230, 121, 159, 95, 23, 0, 77, 78, 0, 16, 203, 230, 125, 6, 117, 0, 72, 245, 3, 112, 245, 41, 83, 200, 207, 156, 245, 161, 167, 127, 48, 128, 8, 164, 129, 60, 80, 1, 26, 200, 253, 49, 4, 166, 192, 10, 216, 2, 39, 224, 6, 188, 129, 63, 8, 6, 225, 32, 6, 172, 4, 76, 144, 4, 210, 0, 31, 172, 1, 235, 193, 102, 144, 15, 10, 193, 110, 176, 15, 148, 129, 195, 224, 40, 168, 1, 39, 64, 19, 104, 1, 237, 224, 34, 184, 2, 110, 128, 219, 160, 31, 60, 6, 3, 96, 24, 188, 6, 34, 240, 17, 76, 65, 16, 132, 131, 40, 16, 21, 82, 129, 52, 33, 61, 200, 4, 178, 130, 236, 33, 23, 200, 27, 10, 132, 66, 161, 24, 40, 14, 74, 132, 184, 144, 16, 90, 15, 109, 129, 10, 161, 34, 168, 12, 58, 2, 213, 66, 191, 64, 103, 161, 139, 208, 53, 168, 23, 122, 8, 13, 66, 99, 208, 59, 232, 11, 140, 130, 201, 176, 60, 172, 14, 235, 195, 230, 176, 61, 236, 14, 7, 192, 225, 240, 10, 56, 17, 94, 13, 103, 195, 121, 240, 78, 184, 20, 174, 132, 143, 195, 205, 240, 69, 248, 6, 220, 15, 15, 192, 175, 225, 9, 20, 64, 145, 80, 138, 40, 45, 148, 41, 202, 30, 229, 137, 10, 70, 197, 162, 18, 80, 124, 212, 70, 84, 1, 170, 4, 85, 137, 106, 64, 181, 161, 186, 81, 119, 80, 3, 168, 113, 212, 103, 52, 22, 77, 69, 211, 208, 166, 104, 39, 180, 31, 58, 2, 205, 68, 175, 70, 111, 68, 239, 64, 151, 161, 107, 208, 205, 232, 203, 232, 59, 232, 65, 180, 8, 253, 29, 67, 193, 168, 97, 76, 48, 142, 24, 58, 38, 26, 147, 136, 89, 131, 201, 199, 148, 96, 170, 48, 103, 48, 93, 152, 126, 204, 48, 230, 35, 22, 139, 85, 196, 26, 96, 237, 176, 126, 216, 24, 108, 50, 118, 29, 118, 7, 246, 32, 182, 17, 219, 129, 237, 197, 14, 97, 39, 112, 56, 156, 10, 206, 4, 231, 140, 11, 198, 49, 112, 25, 184, 124, 220, 1, 220, 113, 220, 5, 92, 31, 110, 24, 247, 9, 79, 194, 107, 226, 173, 240, 62, 248, 88, 60, 23, 159, 139, 47, 193, 215, 225, 207, 227, 251, 240, 35, 248, 41, 130, 12, 65, 143, 224, 72, 8, 38, 176, 8, 89, 132, 93, 132, 99, 132, 54, 194, 45, 194, 48, 97, 138, 40, 75, 52, 32, 58, 19, 195, 137, 201, 196, 205, 196, 82, 98, 3, 177, 139, 248, 132, 248, 158, 68, 34, 105, 147, 28, 72, 75, 73, 28, 82, 14, 169, 148, 116, 146, 116, 149, 52, 72, 250, 76, 150, 35, 27, 147, 61, 201, 203, 201, 66, 242, 78, 114, 53, 185, 131, 252, 144, 252, 158, 66, 161, 232, 83, 220, 40, 177, 148, 12, 202, 78, 74, 45, 229, 18, 229, 25, 229, 147, 20, 85, 202, 76, 138, 46, 197, 146, 218, 36, 85, 46, 213, 44, 213, 39, 245, 70, 154, 32, 173, 39, 237, 46, 189, 82, 58, 91, 186, 68, 250, 148, 244, 45, 233, 113, 25, 130, 140, 190, 140, 167, 12, 67, 102, 163, 76, 185, 204, 89, 153, 251, 50, 19, 178, 84, 89, 75, 217, 96, 217, 52, 217, 29, 178, 117, 178, 215, 100, 71, 229, 112, 114, 250, 114, 222, 114, 44, 185, 60, 185, 163, 114, 151, 228, 134, 168, 40, 170, 14, 213, 147, 202, 164, 110, 161, 30, 163, 118, 81, 135, 229, 177, 242, 6, 242, 116, 249, 100, 249, 66, 249, 19, 242, 61, 242, 34, 5, 57, 133, 69, 10, 145, 10, 107, 21, 202, 21, 206, 41, 12, 40, 162, 20, 245, 21, 233, 138, 169, 138, 187, 20, 155, 20, 239, 41, 126, 81, 82, 87, 114, 87, 98, 43, 109, 87, 106, 80, 234, 83, 154, 84, 94, 160, 236, 166, 204, 86, 46, 80, 110, 84, 238, 87, 254, 162, 66, 83, 241, 86, 73, 81, 217, 163, 210, 162, 242, 84, 21, 173, 106, 172, 186, 84, 117, 141, 234, 33, 213, 46, 213, 241, 5, 242, 11, 156, 22, 48, 23, 20, 44, 104, 90, 240, 72, 13, 86, 51, 86, 11, 85, 91, 167, 118, 84, 237, 166, 218, 132, 186, 134, 186, 175, 58, 79, 253, 128, 250, 37, 245, 113, 13, 69, 13, 55, 141, 100, 141, 98, 141, 243, 26, 99, 154, 84, 77, 23, 77, 142, 102, 177, 230, 5, 205, 87, 52, 5, 154, 59, 45, 149, 86, 74, 187, 76, 19, 105, 169, 105, 249, 105, 9, 181, 142, 104, 245, 104, 77, 105, 27, 104, 71, 104, 231, 106, 55, 106, 63, 213, 33, 234, 216, 235, 36, 232, 20, 235, 116, 234, 136, 116, 53, 117, 131, 116, 215, 235, 214, 235, 62, 210, 35, 232, 217, 235, 37, 233, 237, 215, 235, 214, 155, 212, 55, 208, 143, 210, 223, 166, 223, 162, 63, 106, 160, 108, 64, 55, 200, 54, 168, 55, 120, 98, 72, 49, 116, 53, 92, 109, 88, 105, 120, 215, 8, 107, 100, 111, 148, 98, 116, 208, 232, 182, 49, 108, 108, 99, 156, 100, 92, 110, 124, 203, 4, 54, 177, 53, 225, 152, 28, 52, 233, 93, 136, 89, 232, 176, 144, 187, 176, 114, 225, 125, 83, 178, 169, 187, 105, 166, 105, 189, 233, 160, 153, 162, 89, 160, 89, 174, 89, 139, 217, 27, 115, 93, 243, 88, 243, 61, 230, 221, 230, 223, 45, 108, 44, 82, 45, 142, 89, 60, 182, 148, 179, 244, 183, 204, 181, 108, 179, 124, 103, 101, 108, 197, 180, 42, 183, 186, 107, 77, 177, 246, 177, 222, 100, 221, 106, 253, 118, 145, 201, 34, 246, 162, 67, 139, 30, 216, 80, 109, 130, 108, 182, 217, 116, 218, 124, 179, 181, 179, 229, 219, 54, 216, 142, 217, 233, 218, 197, 217, 85, 216, 221, 183, 151, 183, 15, 177, 223, 97, 127, 213, 1, 227, 224, 225, 176, 201, 161, 221, 225, 179, 163, 173, 99, 134, 99, 147, 227, 159, 78, 166, 78, 41, 78, 117, 78, 163, 139, 13, 22, 179, 23, 31, 91, 60, 228, 172, 237, 204, 112, 62, 226, 60, 224, 66, 115, 137, 115, 249, 201, 101, 192, 85, 203, 149, 225, 90, 233, 250, 220, 77, 199, 141, 229, 86, 229, 54, 226, 110, 228, 158, 236, 126, 220, 253, 141, 135, 133, 7, 223, 227, 140, 199, 164, 167, 163, 231, 6, 207, 14, 47, 148, 151, 175, 87, 129, 87, 143, 183, 156, 119, 132, 119, 153, 247, 51, 31, 109, 159, 68, 159, 122, 31, 145, 175, 141, 239, 58, 223, 14, 63, 140, 95, 128, 223, 30, 191, 251, 116, 117, 58, 147, 94, 75, 23, 249, 219, 249, 111, 240, 191, 28, 64, 14, 8, 11, 40, 11, 120, 30, 104, 28, 200, 15, 108, 11, 130, 131, 252, 131, 246, 6, 61, 89, 162, 183, 132, 187, 164, 37, 24, 4, 211, 131, 247, 6, 63, 13, 49, 8, 89, 29, 242, 235, 82, 236, 210, 144, 165, 229, 75, 95, 134, 90, 134, 174, 15, 237, 14, 163, 134, 173, 10, 171, 11, 251, 24, 238, 17, 190, 43, 252, 113, 132, 97, 132, 48, 162, 51, 82, 58, 114, 121, 100, 109, 228, 100, 148, 87, 84, 81, 212, 64, 180, 121, 244, 134, 232, 27, 49, 170, 49, 156, 152, 214, 88, 92, 108, 100, 108, 85, 236, 196, 50, 239, 101, 251, 150, 13, 47, 183, 89, 158, 191, 252, 222, 10, 131, 21, 107, 87, 92, 91, 169, 186, 50, 117, 229, 185, 85, 210, 171, 24, 171, 78, 197, 97, 226, 162, 226, 234, 226, 190, 50, 130, 25, 149, 140, 137, 120, 122, 124, 69, 188, 136, 233, 201, 220, 207, 124, 205, 114, 99, 21, 179, 198, 216, 206, 236, 34, 246, 72, 130, 115, 66, 81, 194, 104, 162, 115, 226, 222, 196, 177, 36, 215, 164, 146, 164, 113, 142, 39, 167, 140, 243, 54, 217, 47, 249, 112, 242, 100, 74, 112, 74, 117, 138, 56, 53, 42, 181, 49, 13, 159, 22, 151, 118, 150, 43, 199, 77, 225, 94, 78, 215, 72, 95, 155, 222, 203, 51, 225, 229, 243, 6, 86, 59, 174, 222, 183, 90, 196, 15, 224, 87, 9, 32, 193, 10, 65, 107, 134, 60, 210, 232, 220, 20, 26, 10, 183, 10, 7, 51, 93, 50, 203, 51, 63, 173, 137, 92, 115, 106, 173, 236, 90, 238, 218, 155, 89, 198, 89, 219, 179, 70, 178, 125, 178, 127, 94, 135, 94, 199, 92, 215, 185, 94, 107, 253, 230, 245, 131, 27, 220, 55, 28, 217, 8, 109, 140, 223, 216, 185, 73, 103, 83, 222, 166, 225, 28, 223, 156, 154, 205, 196, 205, 41, 155, 127, 203, 181, 200, 45, 202, 253, 176, 37, 106, 75, 91, 158, 122, 94, 78, 222, 208, 86, 223, 173, 245, 249, 82, 249, 252, 252, 251, 219, 156, 182, 29, 254, 1, 253, 3, 231, 135, 158, 237, 214, 219, 15, 108, 255, 94, 192, 42, 184, 94, 104, 81, 88, 82, 248, 117, 7, 115, 199, 245, 31, 45, 127, 44, 253, 81, 188, 51, 97, 103, 207, 46, 219, 93, 135, 118, 99, 119, 115, 119, 223, 219, 227, 186, 167, 166, 72, 182, 40, 187, 104, 104, 111, 208, 222, 230, 98, 90, 113, 65, 241, 135, 125, 171, 246, 93, 43, 89, 84, 114, 120, 63, 113, 191, 112, 255, 64, 105, 96, 105, 235, 1, 221, 3, 187, 15, 124, 45, 75, 42, 235, 47, 247, 40, 111, 172, 80, 171, 216, 94, 49, 121, 144, 117, 176, 239, 144, 219, 161, 134, 195, 234, 135, 11, 15, 127, 249, 137, 243, 211, 131, 35, 190, 71, 154, 43, 245, 43, 75, 142, 98, 143, 102, 30, 125, 121, 44, 242, 88, 247, 207, 246, 63, 215, 86, 169, 86, 21, 86, 125, 171, 230, 86, 15, 212, 132, 214, 92, 174, 181, 171, 173, 173, 83, 171, 219, 85, 15, 215, 11, 235, 199, 142, 47, 63, 126, 251, 132, 215, 137, 214, 6, 211, 134, 35, 141, 138, 141, 133, 39, 193, 73, 225, 201, 87, 191, 196, 253, 114, 175, 41, 160, 169, 243, 148, 253, 169, 134, 211, 122, 167, 43, 206, 80, 207, 20, 52, 67, 205, 89, 205, 162, 150, 164, 150, 129, 214, 152, 214, 222, 179, 254, 103, 59, 219, 156, 218, 206, 252, 106, 246, 107, 117, 187, 86, 123, 249, 57, 133, 115, 187, 206, 19, 207, 231, 157, 23, 95, 200, 190, 48, 209, 193, 235, 24, 191, 152, 120, 113, 168, 115, 85, 231, 227, 75, 209, 151, 238, 94, 94, 122, 185, 167, 43, 160, 235, 234, 21, 159, 43, 151, 186, 221, 187, 47, 92, 117, 190, 218, 126, 205, 241, 218, 217, 235, 246, 215, 91, 110, 216, 222, 104, 190, 105, 115, 243, 204, 111, 54, 191, 157, 233, 177, 237, 105, 190, 101, 119, 171, 245, 182, 195, 237, 182, 222, 197, 189, 231, 251, 92, 251, 46, 222, 241, 186, 115, 229, 46, 253, 238, 141, 254, 37, 253, 189, 247, 34, 238, 61, 184, 191, 252, 254, 192, 3, 214, 131, 209, 135, 169, 15, 223, 62, 202, 124, 52, 245, 56, 231, 9, 230, 73, 193, 83, 153, 167, 37, 207, 212, 158, 85, 254, 110, 244, 123, 227, 128, 237, 192, 185, 65, 175, 193, 155, 207, 195, 158, 63, 30, 98, 14, 189, 126, 33, 120, 241, 117, 56, 239, 37, 229, 101, 201, 136, 230, 72, 237, 168, 213, 104, 251, 152, 207, 216, 237, 87, 203, 94, 13, 191, 230, 189, 158, 26, 207, 255, 67, 246, 143, 138, 55, 134, 111, 78, 255, 233, 246, 231, 77, 81, 180, 104, 248, 45, 255, 173, 248, 221, 142, 247, 42, 239, 171, 63, 44, 250, 208, 57, 17, 50, 241, 236, 99, 218, 199, 169, 201, 130, 79, 42, 159, 106, 62, 219, 127, 238, 254, 18, 245, 101, 100, 106, 205, 87, 220, 215, 210, 111, 70, 223, 218, 190, 7, 124, 127, 34, 78, 19, 139, 121, 12, 62, 99, 166, 21, 64, 33, 6, 39, 36, 0, 240, 174, 26, 0, 74, 12, 0, 84, 164, 111, 38, 46, 155, 237, 143, 103, 4, 205, 246, 244, 51, 4, 254, 19, 207, 246, 208, 51, 178, 5, 160, 1, 25, 166, 91, 161, 233, 150, 239, 84, 14, 0, 250, 110, 72, 238, 14, 0, 130, 145, 49, 220, 13, 192, 214, 214, 18, 251, 167, 4, 9, 214, 86, 179, 185, 164, 234, 1, 192, 105, 137, 197, 239, 210, 1, 32, 32, 246, 213, 87, 44, 158, 10, 17, 139, 191, 85, 32, 197, 222, 5, 224, 252, 232, 108, 95, 62, 45, 44, 210, 191, 55, 80, 47, 10, 170, 98, 251, 190, 231, 228, 128, 127, 209, 63, 0, 74, 247, 10, 138, 245, 28, 149, 144, 0, 0, 2, 11, 105, 84, 88, 116, 88, 77, 76, 58, 99, 111, 109, 46, 97, 100, 111, 98, 101, 46, 120, 109, 112, 0, 0, 0, 0, 0, 60, 120, 58, 120, 109, 112, 109, 101, 116, 97, 32, 120, 109, 108, 110, 115, 58, 120, 61, 34, 97, 100, 111, 98, 101, 58, 110, 115, 58, 109, 101, 116, 97, 47, 34, 32, 120, 58, 120, 109, 112, 116, 107, 61, 34, 88, 77, 80, 32, 67, 111, 114, 101, 32, 53, 46, 52, 46, 48, 34, 62, 10, 32, 32, 32, 60, 114, 100, 102, 58, 82, 68, 70, 32, 120, 109, 108, 110, 115, 58, 114, 100, 102, 61, 34, 104, 116, 116, 112, 58, 47, 47, 119, 119, 119, 46, 119, 51, 46, 111, 114, 103, 47, 49, 57, 57, 57, 47, 48, 50, 47, 50, 50, 45, 114, 100, 102, 45, 115, 121, 110, 116, 97, 120, 45, 110, 115, 35, 34, 62, 10, 32, 32, 32, 32, 32, 32, 60, 114, 100, 102, 58, 68, 101, 115, 99, 114, 105, 112, 116, 105, 111, 110, 32, 114, 100, 102, 58, 97, 98, 111, 117, 116, 61, 34, 34, 10, 32, 32, 32, 32, 32, 32, 32, 32, 32, 32, 32, 32, 120, 109, 108, 110, 115, 58, 116, 105, 102, 102, 61, 34, 104, 116, 116, 112, 58, 47, 47, 110, 115, 46, 97, 100, 111, 98, 101, 46, 99, 111, 109, 47, 116, 105, 102, 102, 47, 49, 46, 48, 47, 34, 62, 10, 32, 32, 32, 32, 32, 32, 32, 32, 32, 60, 116, 105, 102, 102, 58, 82, 101, 115, 111, 108, 117, 116, 105, 111, 110, 85, 110, 105, 116, 62, 50, 60, 47, 116, 105, 102, 102, 58, 82, 101, 115, 111, 108, 117, 116, 105, 111, 110, 85, 110, 105, 116, 62, 10, 32, 32, 32, 32, 32, 32, 32, 32, 32, 60, 116, 105, 102, 102, 58, 67, 111, 109, 112, 114, 101, 115, 115, 105, 111, 110, 62, 49, 60, 47, 116, 105, 102, 102, 58, 67, 111, 109, 112, 114, 101, 115, 115, 105, 111, 110, 62, 10, 32, 32, 32, 32, 32, 32, 32, 32, 32, 60, 116, 105, 102, 102, 58, 79, 114, 105, 101, 110, 116, 97, 116, 105, 111, 110, 62, 49, 60, 47, 116, 105, 102, 102, 58, 79, 114, 105, 101, 110, 116, 97, 116, 105, 111, 110, 62, 10, 32, 32, 32, 32, 32, 32, 32, 32, 32, 60, 116, 105, 102, 102, 58, 80, 104, 111, 116, 111, 109, 101, 116, 114, 105, 99, 73, 110, 116, 101, 114, 112, 114, 101, 116, 97, 116, 105, 111, 110, 62, 50, 60, 47, 116, 105, 102, 102, 58, 80, 104, 111, 116, 111, 109, 101, 116, 114, 105, 99, 73, 110, 116, 101, 114, 112, 114, 101, 116, 97, 116, 105, 111, 110, 62, 10, 32, 32, 32, 32, 32, 32, 60, 47, 114, 100, 102, 58, 68, 101, 115, 99, 114, 105, 112, 116, 105, 111, 110, 62, 10, 32, 32, 32, 60, 47, 114, 100, 102, 58, 82, 68, 70, 62, 10, 60, 47, 120, 58, 120, 109, 112, 109, 101, 116, 97, 62, 10, 15, 69, 42, 147, 0, 0, 4, 52, 73, 68, 65, 84, 88, 9, 181, 151, 215, 78, 228, 64, 16, 69, 107, 26, 147, 115, 206, 153, 87, 224, 5, 248, 49, 132, 248, 5, 36, 196, 79, 240, 57, 136, 39, 144, 144, 200, 32, 114, 20, 57, 195, 176, 167, 180, 101, 245, 120, 199, 30, 239, 238, 80, 146, 229, 182, 219, 93, 247, 214, 237, 234, 234, 118, 230, 242, 242, 50, 43, 41, 236, 238, 238, 78, 174, 174, 174, 228, 230, 230, 70, 104, 63, 60, 60, 200, 203, 203, 139, 142, 172, 168, 168, 144, 154, 154, 26, 169, 171, 171, 147, 134, 134, 6, 105, 110, 110, 214, 118, 10, 183, 146, 41, 68, 224, 236, 236, 76, 142, 142, 142, 228, 228, 228, 68, 157, 2, 84, 85, 85, 37, 128, 150, 149, 149, 41, 198, 219, 219, 155, 146, 121, 122, 122, 82, 98, 16, 236, 236, 236, 148, 238, 238, 110, 105, 111, 111, 79, 228, 17, 75, 224, 241, 241, 81, 182, 183, 183, 229, 240, 240, 80, 58, 58, 58, 164, 181, 181, 85, 170, 171, 171, 165, 180, 180, 84, 156, 115, 122, 101, 50, 25, 117, 158, 205, 102, 229, 235, 235, 75, 175, 247, 247, 119, 97, 236, 197, 197, 133, 156, 158, 158, 74, 79, 79, 143, 12, 15, 15, 235, 216, 124, 76, 242, 18, 96, 224, 206, 206, 142, 70, 216, 213, 213, 165, 242, 150, 151, 151, 235, 115, 16, 4, 82, 82, 82, 146, 151, 192, 231, 231, 167, 124, 124, 124, 8, 138, 188, 190, 190, 170, 26, 199, 199, 199, 250, 60, 52, 52, 164, 129, 68, 73, 4, 209, 23, 200, 189, 190, 190, 174, 18, 2, 94, 89, 89, 169, 23, 114, 3, 78, 244, 68, 110, 209, 219, 120, 84, 48, 37, 140, 4, 211, 132, 106, 144, 88, 91, 91, 19, 8, 50, 45, 190, 229, 16, 32, 242, 205, 205, 77, 233, 239, 239, 23, 192, 153, 107, 8, 152, 236, 249, 128, 125, 103, 180, 33, 1, 81, 8, 163, 154, 41, 199, 51, 190, 81, 143, 41, 53, 11, 9, 48, 111, 200, 14, 195, 222, 222, 94, 101, 14, 56, 206, 162, 209, 218, 224, 124, 119, 35, 137, 82, 128, 49, 158, 139, 54, 121, 2, 70, 109, 109, 109, 152, 19, 206, 156, 88, 7, 209, 91, 166, 19, 249, 223, 128, 155, 47, 187, 51, 22, 31, 40, 137, 79, 124, 3, 14, 150, 153, 18, 56, 63, 63, 215, 140, 237, 235, 235, 11, 193, 97, 93, 44, 195, 151, 145, 0, 131, 169, 6, 19, 11, 9, 12, 14, 14, 74, 99, 99, 163, 174, 111, 228, 42, 182, 225, 147, 164, 4, 3, 44, 35, 16, 80, 209, 126, 21, 35, 153, 154, 154, 210, 132, 75, 19, 57, 89, 190, 188, 188, 44, 27, 27, 27, 202, 115, 100, 100, 68, 38, 38, 38, 194, 194, 20, 71, 30, 223, 228, 21, 9, 190, 180, 180, 164, 203, 52, 184, 190, 190, 214, 34, 67, 9, 77, 51, 231, 43, 43, 43, 50, 55, 55, 167, 149, 209, 7, 106, 107, 107, 147, 153, 153, 25, 37, 226, 191, 247, 219, 150, 19, 96, 81, 216, 192, 118, 40, 128, 44, 105, 192, 87, 87, 87, 101, 122, 122, 250, 15, 112, 64, 144, 116, 118, 118, 86, 149, 241, 65, 163, 109, 35, 1, 38, 216, 142, 13, 133, 77, 196, 10, 76, 116, 128, 61, 83, 68, 230, 231, 231, 181, 210, 217, 187, 232, 157, 101, 198, 55, 148, 227, 56, 131, 0, 88, 96, 130, 237, 40, 153, 204, 11, 29, 92, 113, 134, 244, 7, 7, 7, 113, 221, 225, 123, 148, 32, 63, 226, 204, 112, 192, 4, 219, 81, 185, 200, 206, 36, 112, 156, 249, 107, 55, 206, 185, 189, 103, 19, 75, 50, 176, 192, 4, 219, 25, 163, 164, 1, 63, 209, 103, 184, 142, 245, 137, 20, 176, 73, 50, 214, 110, 90, 99, 251, 77, 50, 176, 192, 4, 219, 81, 161, 140, 64, 18, 137, 241, 241, 113, 221, 35, 146, 28, 211, 199, 114, 164, 38, 196, 25, 24, 70, 0, 108, 71, 50, 176, 28, 172, 35, 110, 32, 108, 89, 231, 73, 133, 138, 236, 230, 27, 150, 116, 156, 25, 14, 152, 96, 59, 54, 137, 251, 251, 123, 221, 169, 232, 76, 178, 209, 209, 81, 89, 88, 88, 208, 179, 66, 244, 59, 34, 167, 64, 37, 69, 207, 24, 48, 88, 174, 96, 130, 29, 176, 30, 57, 118, 177, 29, 19, 93, 161, 122, 48, 54, 54, 38, 139, 139, 139, 57, 165, 152, 57, 159, 156, 156, 44, 88, 138, 13, 28, 44, 170, 32, 231, 2, 61, 146, 237, 238, 238, 134, 219, 37, 7, 7, 228, 254, 9, 163, 152, 113, 92, 219, 223, 223, 215, 105, 39, 177, 117, 55, 108, 106, 106, 146, 189, 189, 61, 225, 84, 203, 71, 133, 166, 226, 95, 200, 225, 19, 223, 96, 128, 5, 38, 166, 4, 234, 235, 235, 117, 115, 96, 159, 102, 167, 227, 42, 38, 9, 124, 153, 95, 48, 216, 136, 192, 12, 9, 208, 96, 62, 248, 233, 48, 18, 197, 82, 194, 34, 135, 0, 190, 193, 240, 207, 132, 170, 0, 4, 40, 141, 252, 68, 32, 15, 103, 122, 54, 148, 255, 85, 194, 34, 199, 23, 62, 241, 13, 6, 88, 102, 57, 231, 46, 182, 72, 6, 109, 109, 109, 41, 56, 76, 121, 214, 138, 245, 251, 56, 110, 3, 147, 238, 140, 97, 169, 161, 162, 69, 14, 56, 135, 93, 48, 124, 203, 33, 64, 7, 201, 65, 157, 230, 87, 236, 249, 249, 89, 229, 162, 98, 249, 75, 212, 234, 184, 239, 8, 80, 187, 0, 7, 152, 132, 51, 217, 57, 11, 70, 193, 25, 159, 247, 207, 136, 14, 246, 106, 6, 35, 221, 192, 192, 128, 180, 180, 180, 232, 81, 218, 234, 132, 79, 194, 128, 45, 114, 214, 57, 199, 60, 162, 38, 225, 80, 210, 151, 29, 255, 102, 177, 4, 236, 131, 219, 219, 91, 45, 26, 20, 14, 212, 225, 88, 77, 5, 179, 159, 14, 190, 99, 47, 225, 162, 188, 82, 225, 236, 91, 190, 183, 108, 55, 127, 209, 123, 65, 2, 54, 128, 233, 176, 223, 114, 218, 40, 132, 212, 24, 170, 16, 33, 181, 29, 114, 84, 87, 218, 105, 236, 27, 141, 198, 164, 204, 130, 59, 242, 161, 0, 0, 0, 0, 73, 69, 78, 68, 174, 66, 96, 130}; // fixed array const
#define _const_ui__bytes_arrow_png_len 163
array_fixed_byte_163 _const_ui__bytes_arrow_png = {((byte)(137)), 80, 78, 71, 13, 10, 26, 10, 0, 0, 0, 13, 73, 72, 68, 82, 0, 0, 0, 48, 0, 0, 0, 48, 8, 6, 0, 0, 0, 87, 2, 249, 135, 0, 0, 0, 6, 98, 75, 71, 68, 0, 255, 0, 255, 0, 255, 160, 189, 167, 147, 0, 0, 0, 88, 73, 68, 65, 84, 104, 129, 237, 213, 49, 10, 128, 80, 16, 3, 209, 28, 61, 229, 222, 90, 171, 216, 88, 168, 160, 95, 2, 243, 32, 253, 116, 145, 0, 0, 0, 0, 0, 192, 83, 35, 105, 123, 105, 179, 184, 253, 224, 27, 113, 87, 243, 226, 230, 19, 171, 56, 62, 172, 226, 248, 176, 138, 227, 195, 42, 142, 15, 171, 56, 62, 172, 226, 248, 176, 138, 227, 99, 244, 227, 73, 1, 0, 0, 0, 0, 190, 180, 3, 241, 255, 99, 199, 80, 201, 152, 44, 0, 0, 0, 0, 73, 69, 78, 68, 174, 66, 96, 130}; // fixed array const
gx__Color _const_ui__progress_bar_color; // inited later
gx__Color _const_ui__progress_bar_border_color; // inited later
gx__Color _const_ui__progress_bar_background_color; // inited later
gx__Color _const_ui__progress_bar_background_border_color; // inited later
static void ui__ProgressBar_init(ui__ProgressBar* pb, ui__Layout parent);
ui__ProgressBar* ui__progressbar(ui__ProgressBarConfig c);
static void ui__ProgressBar_set_pos(ui__ProgressBar* pb, int x, int y);
static multi_return_int_int ui__ProgressBar_size(ui__ProgressBar* pb);
static multi_return_int_int ui__ProgressBar_propose_size(ui__ProgressBar* pb, int w, int h);
static void ui__ProgressBar_draw(ui__ProgressBar* pb);
static bool ui__ProgressBar_point_inside(ui__ProgressBar* pb, f64 x, f64 y);
static void ui__ProgressBar_focus(ui__ProgressBar* pb);
static bool ui__ProgressBar_is_focused(ui__ProgressBar* pb);
static void ui__ProgressBar_unfocus(ui__ProgressBar* pb);
static void ui__Radio_init(ui__Radio* r, ui__Layout parent);
ui__Radio* ui__radio(ui__RadioConfig c);
static void ui__Radio_set_pos(ui__Radio* r, int x, int y);
static multi_return_int_int ui__Radio_size(ui__Radio* r);
static multi_return_int_int ui__Radio_propose_size(ui__Radio* r, int w, int h);
static void ui__Radio_draw(ui__Radio* r);
static bool ui__Radio_point_inside(ui__Radio* r, f64 x, f64 y);
static void ui__radio_click(ui__Radio* r, ui__MouseEvent* e, voidptr zzz);
static void ui__Radio_focus(ui__Radio* r);
static void ui__Radio_unfocus(ui__Radio* r);
string ui__Radio_selected_value(ui__Radio* r);
static bool ui__Radio_is_focused(ui__Radio* r);
static void ui__Rectangle_init(ui__Rectangle* r, ui__Layout parent);
ui__Rectangle* ui__rectangle(ui__RectangleConfig c);
static void ui__Rectangle_set_pos(ui__Rectangle* r, int x, int y);
static multi_return_int_int ui__Rectangle_size(ui__Rectangle* r);
static multi_return_int_int ui__Rectangle_propose_size(ui__Rectangle* r, int w, int h);
static void ui__Rectangle_draw(ui__Rectangle* r);
static void ui__Rectangle_focus(ui__Rectangle* r);
static bool ui__Rectangle_is_focused(ui__Rectangle* r);
static void ui__Rectangle_unfocus(ui__Rectangle* r);
static bool ui__Rectangle_point_inside(ui__Rectangle* r, f64 x, f64 y);
ui__Stack* ui__row(ui__RowConfig c, array_ui__Widget children);
gx__Color _const_ui__thumb_color; // inited later
gx__Color _const_ui__slider_background_color; // inited later
gx__Color _const_ui__slider_background_border_color; // inited later
gx__Color _const_ui__slider_focused_background_border_color; // inited later
static void ui__Slider_init(ui__Slider* s, ui__Layout parent);
ui__Slider* ui__slider(ui__SliderConfig c);
static void ui__Slider_draw_thumb(ui__Slider* s);
static void ui__Slider_set_pos(ui__Slider* s, int x, int y);
static multi_return_int_int ui__Slider_size(ui__Slider* s);
static multi_return_int_int ui__Slider_propose_size(ui__Slider* s, int w, int h);
static void ui__Slider_draw(ui__Slider* s);
static void ui__slider_key_down(ui__Slider* s, ui__KeyEvent* e, voidptr zzz);
static bool ui__Slider_point_inside(ui__Slider* s, f64 x, f64 y);
static void ui__slider_click(ui__Slider* s, ui__MouseEvent* e, voidptr zzz);
static void ui__slider_mouse_move(ui__Slider* s, ui__MouseEvent* e, voidptr zzz);
static void ui__Slider_change_value(ui__Slider* s, int x, int y);
static void ui__Slider_focus(ui__Slider* s);
static bool ui__Slider_is_focused(ui__Slider* s);
static void ui__Slider_unfocus(ui__Slider* s);
static bool ui__Slider_point_inside_thumb(ui__Slider* s, f64 x, f64 y);
static void ui__Stack_init(ui__Stack* s, ui__Layout parent);
static ui__Stack* ui__stack(ui__StackConfig c, array_ui__Widget children);
static void ui__Stack_set_pos(ui__Stack* s, int x, int y);
static eventbus__Subscriber* ui__Stack_get_subscriber(ui__Stack* s);
static multi_return_int_int ui__Stack_propose_size(ui__Stack* s, int w, int h);
static multi_return_int_int ui__Stack_size(ui__Stack* c);
static void ui__Stack_draw(ui__Stack* s);
static int ui__Stack_align(ui__Stack* s, int size);
static ui__UI* ui__Stack_get_ui(ui__Stack* s);
static void ui__Stack_unfocus_all(ui__Stack* s);
static voidptr ui__Stack_get_state(ui__Stack* s);
static bool ui__Stack_point_inside(ui__Stack* s, f64 x, f64 y);
static void ui__Stack_focus(ui__Stack* s);
static void ui__Stack_unfocus(ui__Stack* s);
static bool ui__Stack_is_focused(ui__Stack* s);
static void ui__Stack_resize(ui__Stack* s, int width, int height);
static int ui__Stack_get_oriented_height(ui__Stack* s);
static int ui__Stack_get_oriented_width(ui__Stack* s);
static int ui__Stack_get_oriented_y_axis(ui__Stack* s);
static int ui__Stack_get_oriented_x_axis(ui__Stack* s);
static int ui__Stack_set_oriented_height(ui__Stack* s, int h);
static int ui__Stack_set_oriented_width(ui__Stack* s, int w);
#define _const_ui__sw_height 20
#define _const_ui__sw_width 40
#define _const_ui__sw_dot_size 16
gx__Color _const_ui__sw_open_bg_color; // inited later
gx__Color _const_ui__sw_close_bg_color; // inited later
static void ui__Switch_init(ui__Switch* s, ui__Layout parent);
ui__Switch* ui__switcher(ui__SwitchConfig c);
static void ui__Switch_set_pos(ui__Switch* s, int x, int y);
static multi_return_int_int ui__Switch_size(ui__Switch* s);
static multi_return_int_int ui__Switch_propose_size(ui__Switch* s, int w, int h);
static void ui__Switch_draw(ui__Switch* s);
static bool ui__Switch_point_inside(ui__Switch* s, f64 x, f64 y);
static void ui__sw_click(ui__Switch* s, ui__MouseEvent* e, ui__Window* w);
static void ui__Switch_focus(ui__Switch* s);
static void ui__Switch_unfocus(ui__Switch* s);
static bool ui__Switch_is_focused(ui__Switch* s);
gx__TextCfg _const_ui__placeholder_cfg; // inited later
gx__Color _const_ui__text_border_color; // inited later
gx__Color _const_ui__text_inner_border_color; // inited later
gx__Color _const_ui__text_border_accentuated_color; // inited later
#define _const_ui__textbox_padding 5
gx__Color _const_ui__selection_color; // inited later
static void ui__TextBox_init(ui__TextBox* tb, ui__Layout parent);
ui__TextBox* ui__textbox(ui__TextBoxConfig c);
static void ui__draw_inner_border(bool border_accentuated, gg__Context* gg, int x, int y, int width, int height, bool is_error);
static void ui__TextBox_set_pos(ui__TextBox* tb, int x, int y);
static multi_return_int_int ui__TextBox_size(ui__TextBox* tb);
static multi_return_int_int ui__TextBox_propose_size(ui__TextBox* tb, int w, int h);
static void ui__TextBox_draw(ui__TextBox* tb);
static void ui__tb_key_up(ui__TextBox* tb, ui__KeyEvent* e, ui__Window* window);
static void ui__tb_key_down(ui__TextBox* tb, ui__KeyEvent* e, ui__Window* window);
static void ui__TextBox_set_sel(ui__TextBox* tb, int sel_start, int sel_end, ui__Key key);
static bool ui__TextBox_sel(ui__TextBox* tb, ui__KeyMod mods, ui__Key key);
static bool ui__TextBox_point_inside(ui__TextBox* tb, f64 x, f64 y);
static void ui__tb_mouse_move(ui__TextBox* tb, ui__MouseEvent* e, voidptr zzz);
static void ui__tb_click(ui__TextBox* tb, ui__MouseEvent* e, voidptr zzz);
void ui__TextBox_focus(ui__TextBox* tb);
static bool ui__TextBox_is_focused(ui__TextBox* tb);
static void ui__TextBox_unfocus(ui__TextBox* tb);
static void ui__TextBox_update(ui__TextBox* tb);
void ui__TextBox_hide(ui__TextBox* tb);
void ui__TextBox_set_text(ui__TextBox* tb, string s);
void ui__TextBox_on_return(ui__TextBox* tb, voidptr func);
void ui__TextBox_insert(ui__TextBox* tb, string s);
static void ui__Transition_init(ui__Transition* t, ui__Layout parent);
ui__Transition* ui__transition(ui__TransitionConfig config);
void ui__Transition_set_value(ui__Transition* t, int* animated_value);
static void ui__Transition_set_pos(ui__Transition* t, int x, int y);
static multi_return_int_int ui__Transition_propose_size(ui__Transition* t, int w, int h);
static multi_return_int_int ui__Transition_size(ui__Transition* t);
static void ui__Transition_draw(ui__Transition* t);
static void ui__Transition_focus(ui__Transition* t);
static bool ui__Transition_is_focused(ui__Transition* t);
static void ui__Transition_unfocus(ui__Transition* t);
static bool ui__Transition_point_inside(ui__Transition* t, f64 x, f64 y);
string _const_ui__version; // a string literal, inited later
#define _const_ui__cursor_show_delay 100
ui__Layout ui__ilayout(ui__Layout x);
static void ui__UI_idle_loop(ui__UI* ui);
void ui__run(ui__Window* window);
static void ui__UI_load_icos(ui__UI* ui);
void ui__open_url(string url);
bool ui__confirm(string s);
void ui__message_box(string s);
static void ui__run_message_dialog(ui__MessageApp* message_app, string s);
static void ui__msgbox_on_key_down(ui__MessageApp* app, ui__KeyEvent* e, ui__Window* window);
static void ui__msgbox_btn_ok_click(ui__MessageApp* app);
static array_string ui__word_wrap_to_lines(string s, int max_line_length);
gx__Color _const_ui__default_window_color; // inited later
#define _const_ui__default_font_size 13
static void ui__on_event(sokol__sapp__Event* e, ui__Window* window);
static void ui__gg_init(ui__Window* window);
ui__Window* ui__window(ui__WindowConfig cfg, array_ui__Widget children);
ui__Window* ui__child_window(ui__WindowConfig cfg, ui__Window* parent_window, array_ui__Widget children);
static void ui__window_mouse_move(sokol__sapp__Event event, ui__UI* ui);
static void ui__window_scroll(sokol__sapp__Event event, ui__UI* ui);
static void ui__window_mouse_down(sokol__sapp__Event event, ui__UI* ui);
static void ui__window_mouse_up(sokol__sapp__Event event, ui__UI* ui);
static void ui__window_click(sokol__sapp__Event event, ui__UI* ui);
static void ui__window_key_down(sokol__sapp__Event event, ui__UI* ui);
static void ui__window_char(sokol__sapp__Event event, ui__UI* ui);
static void ui__Window_focus_next(ui__Window* w);
static void ui__Window_focus_previous(ui__Window* w);
void ui__Window_set_cursor(ui__Window* w, ui__Cursor cursor);
void ui__Window_close(ui__Window* w);
void ui__Window_refresh(ui__Window* w);
void ui__Window_onmousedown(ui__Window* w, voidptr cb);
void ui__Window_onkeydown(ui__Window* w, voidptr cb);
void ui__Window_on_click(ui__Window* w, ui__ClickFn func);
void ui__Window_on_mousemove(ui__Window* w, ui__MouseMoveFn func);
void ui__Window_on_scroll(ui__Window* w, ui__ScrollFn func);
bool ui__Window_mouse_inside(ui__Window* w, int x, int y, int width, int height);
void ui__Window_focus(ui__Window* w);
void ui__Window_always_on_top(ui__Window* w, bool val);
static void ui__foo(ui__Widget w);
static void ui__foo2(ui__Layout l);
static void ui__bar();
static void ui__bar2();
static void ui__Window_draw(ui__Window* w);
static void ui__frame(ui__Window* w);
void ui__Window_set_title(ui__Window* w, string title);
static ui__UI* ui__Window_get_ui(ui__Window* w);
static voidptr ui__Window_get_state(ui__Window* w);
eventbus__Subscriber* ui__Window_get_subscriber(ui__Window* w);
static multi_return_int_int ui__Window_size(ui__Window* w);
static void ui__Window_resize(ui__Window* window, int width, int height);
static void ui__Window_unfocus_all(ui__Window* window);
#define _const_vuipy__win_width 400
#define _const_vuipy__win_height 200
static void vuipy__main();
void vuipy__run();
static void vuipy__btn_count_click(vuipy__App* app, ui__Button* btn);

// V interface table:
int _ui__Layout_ui__Group_index = 0;
int _ui__Layout_ui__Stack_index = 1;
int _ui__Layout_ui__Window_index = 2;
// ^^^ number of types for interface ui__Layout: 3

// Methods wrapper for interface "ui__Layout"

typedef ui__UI* (*_ui__Layout_get_ui_fn)(void* _);
typedef voidptr (*_ui__Layout_get_state_fn)(void* _);
typedef multi_return_int_int (*_ui__Layout_size_fn)(void* _);
typedef eventbus__Subscriber* (*_ui__Layout_get_subscriber_fn)(void* _);
typedef void (*_ui__Layout_unfocus_all_fn)(void* _);
typedef void (*_ui__Layout_draw_fn)(void* _);
typedef void (*_ui__Layout_resize_fn)(void* _, int w, int h);

struct _ui__Layout_interface_methods {
	_ui__Layout_get_ui_fn get_ui;
	_ui__Layout_get_state_fn get_state;
	_ui__Layout_size_fn size;
	_ui__Layout_get_subscriber_fn get_subscriber;
	_ui__Layout_unfocus_all_fn unfocus_all;
	_ui__Layout_draw_fn draw;
	_ui__Layout_resize_fn resize;
};

struct _ui__Layout_interface_methods ui__Layout_name_table[3] = {
	{
		.get_ui = ui__Group_get_ui,
		.get_state = ui__Group_get_state,
		.size = ui__Group_size,
		.get_subscriber = ui__Group_get_subscriber,
		.unfocus_all = ui__Group_unfocus_all,
		.draw = ui__Group_draw,
		.resize = ui__Group_resize,
	},
	{
		.get_ui = ui__Stack_get_ui,
		.get_state = ui__Stack_get_state,
		.size = ui__Stack_size,
		.get_subscriber = ui__Stack_get_subscriber,
		.unfocus_all = ui__Stack_unfocus_all,
		.draw = ui__Stack_draw,
		.resize = ui__Stack_resize,
	},
	{
		.get_ui = ui__Window_get_ui,
		.get_state = ui__Window_get_state,
		.size = ui__Window_size,
		.get_subscriber = ui__Window_get_subscriber,
		.unfocus_all = ui__Window_unfocus_all,
		.draw = ui__Window_draw,
		.resize = ui__Window_resize,
	},
};

// Casting functions for interface "ui__Layout"
_Interface I_ui__Group_to_Interface_ui__Layout(ui__Group* x) {
	return (_Interface) {
		._object = (void*) (x),
		._interface_idx = _ui__Layout_ui__Group_index
	};
}

_Interface* I_ui__Group_to_Interface_ui__Layout_ptr(ui__Group* x) {
	// TODO Remove memdup
	return (_Interface*) memdup(&(_Interface) {
		._object = (void*) (x),
		._interface_idx = _ui__Layout_ui__Group_index
	}, sizeof(_Interface));
}

_Interface I_ui__Stack_to_Interface_ui__Layout(ui__Stack* x) {
	return (_Interface) {
		._object = (void*) (x),
		._interface_idx = _ui__Layout_ui__Stack_index
	};
}

_Interface* I_ui__Stack_to_Interface_ui__Layout_ptr(ui__Stack* x) {
	// TODO Remove memdup
	return (_Interface*) memdup(&(_Interface) {
		._object = (void*) (x),
		._interface_idx = _ui__Layout_ui__Stack_index
	}, sizeof(_Interface));
}

_Interface I_ui__Window_to_Interface_ui__Layout(ui__Window* x) {
	return (_Interface) {
		._object = (void*) (x),
		._interface_idx = _ui__Layout_ui__Window_index
	};
}

_Interface* I_ui__Window_to_Interface_ui__Layout_ptr(ui__Window* x) {
	// TODO Remove memdup
	return (_Interface*) memdup(&(_Interface) {
		._object = (void*) (x),
		._interface_idx = _ui__Layout_ui__Window_index
	}, sizeof(_Interface));
}

int _ui__Widget_ui__Label_index = 0;
int _ui__Widget_ui__Button_index = 1;
int _ui__Widget_ui__TextBox_index = 2;
int _ui__Widget_ui__ProgressBar_index = 3;
int _ui__Widget_ui__Slider_index = 4;
int _ui__Widget_ui__CheckBox_index = 5;
int _ui__Widget_ui__Radio_index = 6;
int _ui__Widget_ui__Picture_index = 7;
int _ui__Widget_ui__Canvas_index = 8;
int _ui__Widget_ui__Menu_index = 9;
int _ui__Widget_ui__Dropdown_index = 10;
int _ui__Widget_ui__Transition_index = 11;
int _ui__Widget_ui__Stack_index = 12;
int _ui__Widget_ui__Switch_index = 13;
int _ui__Widget_ui__Rectangle_index = 14;
int _ui__Widget_ui__Group_index = 15;
// ^^^ number of types for interface ui__Widget: 16

// Methods wrapper for interface "ui__Widget"

typedef void (*_ui__Widget_init_fn)(void* _, ui__Layout );
typedef void (*_ui__Widget_draw_fn)(void* _);
typedef bool (*_ui__Widget_point_inside_fn)(void* _, f64 x, f64 y);
typedef void (*_ui__Widget_unfocus_fn)(void* _);
typedef void (*_ui__Widget_focus_fn)(void* _);
typedef void (*_ui__Widget_set_pos_fn)(void* _, int x, int y);
typedef multi_return_int_int (*_ui__Widget_propose_size_fn)(void* _, int w, int h);
typedef multi_return_int_int (*_ui__Widget_size_fn)(void* _);
typedef bool (*_ui__Widget_is_focused_fn)(void* _);

struct _ui__Widget_interface_methods {
	_ui__Widget_init_fn init;
	_ui__Widget_draw_fn draw;
	_ui__Widget_point_inside_fn point_inside;
	_ui__Widget_unfocus_fn unfocus;
	_ui__Widget_focus_fn focus;
	_ui__Widget_set_pos_fn set_pos;
	_ui__Widget_propose_size_fn propose_size;
	_ui__Widget_size_fn size;
	_ui__Widget_is_focused_fn is_focused;
};

struct _ui__Widget_interface_methods ui__Widget_name_table[16] = {
	{
		.init = ui__Label_init,
		.draw = ui__Label_draw,
		.point_inside = ui__Label_point_inside,
		.unfocus = ui__Label_unfocus,
		.focus = ui__Label_focus,
		.set_pos = ui__Label_set_pos,
		.propose_size = ui__Label_propose_size,
		.size = ui__Label_size,
		.is_focused = ui__Label_is_focused,
	},
	{
		.init = ui__Button_init,
		.draw = ui__Button_draw,
		.point_inside = ui__Button_point_inside,
		.unfocus = ui__Button_unfocus,
		.focus = ui__Button_focus,
		.set_pos = ui__Button_set_pos,
		.propose_size = ui__Button_propose_size,
		.size = ui__Button_size,
		.is_focused = ui__Button_is_focused,
	},
	{
		.init = ui__TextBox_init,
		.draw = ui__TextBox_draw,
		.point_inside = ui__TextBox_point_inside,
		.unfocus = ui__TextBox_unfocus,
		.focus = ui__TextBox_focus,
		.set_pos = ui__TextBox_set_pos,
		.propose_size = ui__TextBox_propose_size,
		.size = ui__TextBox_size,
		.is_focused = ui__TextBox_is_focused,
	},
	{
		.init = ui__ProgressBar_init,
		.draw = ui__ProgressBar_draw,
		.point_inside = ui__ProgressBar_point_inside,
		.unfocus = ui__ProgressBar_unfocus,
		.focus = ui__ProgressBar_focus,
		.set_pos = ui__ProgressBar_set_pos,
		.propose_size = ui__ProgressBar_propose_size,
		.size = ui__ProgressBar_size,
		.is_focused = ui__ProgressBar_is_focused,
	},
	{
		.init = ui__Slider_init,
		.draw = ui__Slider_draw,
		.point_inside = ui__Slider_point_inside,
		.unfocus = ui__Slider_unfocus,
		.focus = ui__Slider_focus,
		.set_pos = ui__Slider_set_pos,
		.propose_size = ui__Slider_propose_size,
		.size = ui__Slider_size,
		.is_focused = ui__Slider_is_focused,
	},
	{
		.init = ui__CheckBox_init,
		.draw = ui__CheckBox_draw,
		.point_inside = ui__CheckBox_point_inside,
		.unfocus = ui__CheckBox_unfocus,
		.focus = ui__CheckBox_focus,
		.set_pos = ui__CheckBox_set_pos,
		.propose_size = ui__CheckBox_propose_size,
		.size = ui__CheckBox_size,
		.is_focused = ui__CheckBox_is_focused,
	},
	{
		.init = ui__Radio_init,
		.draw = ui__Radio_draw,
		.point_inside = ui__Radio_point_inside,
		.unfocus = ui__Radio_unfocus,
		.focus = ui__Radio_focus,
		.set_pos = ui__Radio_set_pos,
		.propose_size = ui__Radio_propose_size,
		.size = ui__Radio_size,
		.is_focused = ui__Radio_is_focused,
	},
	{
		.init = ui__Picture_init,
		.draw = ui__Picture_draw,
		.point_inside = ui__Picture_point_inside,
		.unfocus = ui__Picture_unfocus,
		.focus = ui__Picture_focus,
		.set_pos = ui__Picture_set_pos,
		.propose_size = ui__Picture_propose_size,
		.size = ui__Picture_size,
		.is_focused = ui__Picture_is_focused,
	},
	{
		.init = ui__Canvas_init,
		.draw = ui__Canvas_draw,
		.point_inside = ui__Canvas_point_inside,
		.unfocus = ui__Canvas_unfocus,
		.focus = ui__Canvas_focus,
		.set_pos = ui__Canvas_set_pos,
		.propose_size = ui__Canvas_propose_size,
		.size = ui__Canvas_size,
		.is_focused = ui__Canvas_is_focused,
	},
	{
		.init = ui__Menu_init,
		.draw = ui__Menu_draw,
		.point_inside = ui__Menu_point_inside,
		.unfocus = ui__Menu_unfocus,
		.focus = ui__Menu_focus,
		.set_pos = ui__Menu_set_pos,
		.propose_size = ui__Menu_propose_size,
		.size = ui__Menu_size,
		.is_focused = ui__Menu_is_focused,
	},
	{
		.init = ui__Dropdown_init,
		.draw = ui__Dropdown_draw,
		.point_inside = ui__Dropdown_point_inside,
		.unfocus = ui__Dropdown_unfocus,
		.focus = ui__Dropdown_focus,
		.set_pos = ui__Dropdown_set_pos,
		.propose_size = ui__Dropdown_propose_size,
		.size = ui__Dropdown_size,
		.is_focused = ui__Dropdown_is_focused,
	},
	{
		.init = ui__Transition_init,
		.draw = ui__Transition_draw,
		.point_inside = ui__Transition_point_inside,
		.unfocus = ui__Transition_unfocus,
		.focus = ui__Transition_focus,
		.set_pos = ui__Transition_set_pos,
		.propose_size = ui__Transition_propose_size,
		.size = ui__Transition_size,
		.is_focused = ui__Transition_is_focused,
	},
	{
		.init = ui__Stack_init,
		.draw = ui__Stack_draw,
		.point_inside = ui__Stack_point_inside,
		.unfocus = ui__Stack_unfocus,
		.focus = ui__Stack_focus,
		.set_pos = ui__Stack_set_pos,
		.propose_size = ui__Stack_propose_size,
		.size = ui__Stack_size,
		.is_focused = ui__Stack_is_focused,
	},
	{
		.init = ui__Switch_init,
		.draw = ui__Switch_draw,
		.point_inside = ui__Switch_point_inside,
		.unfocus = ui__Switch_unfocus,
		.focus = ui__Switch_focus,
		.set_pos = ui__Switch_set_pos,
		.propose_size = ui__Switch_propose_size,
		.size = ui__Switch_size,
		.is_focused = ui__Switch_is_focused,
	},
	{
		.init = ui__Rectangle_init,
		.draw = ui__Rectangle_draw,
		.point_inside = ui__Rectangle_point_inside,
		.unfocus = ui__Rectangle_unfocus,
		.focus = ui__Rectangle_focus,
		.set_pos = ui__Rectangle_set_pos,
		.propose_size = ui__Rectangle_propose_size,
		.size = ui__Rectangle_size,
		.is_focused = ui__Rectangle_is_focused,
	},
	{
		.init = ui__Group_init,
		.draw = ui__Group_draw,
		.point_inside = ui__Group_point_inside,
		.unfocus = ui__Group_unfocus,
		.focus = ui__Group_focus,
		.set_pos = ui__Group_set_pos,
		.propose_size = ui__Group_propose_size,
		.size = ui__Group_size,
		.is_focused = ui__Group_is_focused,
	},
};

// Casting functions for interface "ui__Widget"
_Interface I_ui__Label_to_Interface_ui__Widget(ui__Label* x) {
	return (_Interface) {
		._object = (void*) (x),
		._interface_idx = _ui__Widget_ui__Label_index
	};
}

_Interface* I_ui__Label_to_Interface_ui__Widget_ptr(ui__Label* x) {
	// TODO Remove memdup
	return (_Interface*) memdup(&(_Interface) {
		._object = (void*) (x),
		._interface_idx = _ui__Widget_ui__Label_index
	}, sizeof(_Interface));
}

_Interface I_ui__Button_to_Interface_ui__Widget(ui__Button* x) {
	return (_Interface) {
		._object = (void*) (x),
		._interface_idx = _ui__Widget_ui__Button_index
	};
}

_Interface* I_ui__Button_to_Interface_ui__Widget_ptr(ui__Button* x) {
	// TODO Remove memdup
	return (_Interface*) memdup(&(_Interface) {
		._object = (void*) (x),
		._interface_idx = _ui__Widget_ui__Button_index
	}, sizeof(_Interface));
}

_Interface I_ui__TextBox_to_Interface_ui__Widget(ui__TextBox* x) {
	return (_Interface) {
		._object = (void*) (x),
		._interface_idx = _ui__Widget_ui__TextBox_index
	};
}

_Interface* I_ui__TextBox_to_Interface_ui__Widget_ptr(ui__TextBox* x) {
	// TODO Remove memdup
	return (_Interface*) memdup(&(_Interface) {
		._object = (void*) (x),
		._interface_idx = _ui__Widget_ui__TextBox_index
	}, sizeof(_Interface));
}

_Interface I_ui__ProgressBar_to_Interface_ui__Widget(ui__ProgressBar* x) {
	return (_Interface) {
		._object = (void*) (x),
		._interface_idx = _ui__Widget_ui__ProgressBar_index
	};
}

_Interface* I_ui__ProgressBar_to_Interface_ui__Widget_ptr(ui__ProgressBar* x) {
	// TODO Remove memdup
	return (_Interface*) memdup(&(_Interface) {
		._object = (void*) (x),
		._interface_idx = _ui__Widget_ui__ProgressBar_index
	}, sizeof(_Interface));
}

_Interface I_ui__Slider_to_Interface_ui__Widget(ui__Slider* x) {
	return (_Interface) {
		._object = (void*) (x),
		._interface_idx = _ui__Widget_ui__Slider_index
	};
}

_Interface* I_ui__Slider_to_Interface_ui__Widget_ptr(ui__Slider* x) {
	// TODO Remove memdup
	return (_Interface*) memdup(&(_Interface) {
		._object = (void*) (x),
		._interface_idx = _ui__Widget_ui__Slider_index
	}, sizeof(_Interface));
}

_Interface I_ui__CheckBox_to_Interface_ui__Widget(ui__CheckBox* x) {
	return (_Interface) {
		._object = (void*) (x),
		._interface_idx = _ui__Widget_ui__CheckBox_index
	};
}

_Interface* I_ui__CheckBox_to_Interface_ui__Widget_ptr(ui__CheckBox* x) {
	// TODO Remove memdup
	return (_Interface*) memdup(&(_Interface) {
		._object = (void*) (x),
		._interface_idx = _ui__Widget_ui__CheckBox_index
	}, sizeof(_Interface));
}

_Interface I_ui__Radio_to_Interface_ui__Widget(ui__Radio* x) {
	return (_Interface) {
		._object = (void*) (x),
		._interface_idx = _ui__Widget_ui__Radio_index
	};
}

_Interface* I_ui__Radio_to_Interface_ui__Widget_ptr(ui__Radio* x) {
	// TODO Remove memdup
	return (_Interface*) memdup(&(_Interface) {
		._object = (void*) (x),
		._interface_idx = _ui__Widget_ui__Radio_index
	}, sizeof(_Interface));
}

_Interface I_ui__Picture_to_Interface_ui__Widget(ui__Picture* x) {
	return (_Interface) {
		._object = (void*) (x),
		._interface_idx = _ui__Widget_ui__Picture_index
	};
}

_Interface* I_ui__Picture_to_Interface_ui__Widget_ptr(ui__Picture* x) {
	// TODO Remove memdup
	return (_Interface*) memdup(&(_Interface) {
		._object = (void*) (x),
		._interface_idx = _ui__Widget_ui__Picture_index
	}, sizeof(_Interface));
}

_Interface I_ui__Canvas_to_Interface_ui__Widget(ui__Canvas* x) {
	return (_Interface) {
		._object = (void*) (x),
		._interface_idx = _ui__Widget_ui__Canvas_index
	};
}

_Interface* I_ui__Canvas_to_Interface_ui__Widget_ptr(ui__Canvas* x) {
	// TODO Remove memdup
	return (_Interface*) memdup(&(_Interface) {
		._object = (void*) (x),
		._interface_idx = _ui__Widget_ui__Canvas_index
	}, sizeof(_Interface));
}

_Interface I_ui__Menu_to_Interface_ui__Widget(ui__Menu* x) {
	return (_Interface) {
		._object = (void*) (x),
		._interface_idx = _ui__Widget_ui__Menu_index
	};
}

_Interface* I_ui__Menu_to_Interface_ui__Widget_ptr(ui__Menu* x) {
	// TODO Remove memdup
	return (_Interface*) memdup(&(_Interface) {
		._object = (void*) (x),
		._interface_idx = _ui__Widget_ui__Menu_index
	}, sizeof(_Interface));
}

_Interface I_ui__Dropdown_to_Interface_ui__Widget(ui__Dropdown* x) {
	return (_Interface) {
		._object = (void*) (x),
		._interface_idx = _ui__Widget_ui__Dropdown_index
	};
}

_Interface* I_ui__Dropdown_to_Interface_ui__Widget_ptr(ui__Dropdown* x) {
	// TODO Remove memdup
	return (_Interface*) memdup(&(_Interface) {
		._object = (void*) (x),
		._interface_idx = _ui__Widget_ui__Dropdown_index
	}, sizeof(_Interface));
}

_Interface I_ui__Transition_to_Interface_ui__Widget(ui__Transition* x) {
	return (_Interface) {
		._object = (void*) (x),
		._interface_idx = _ui__Widget_ui__Transition_index
	};
}

_Interface* I_ui__Transition_to_Interface_ui__Widget_ptr(ui__Transition* x) {
	// TODO Remove memdup
	return (_Interface*) memdup(&(_Interface) {
		._object = (void*) (x),
		._interface_idx = _ui__Widget_ui__Transition_index
	}, sizeof(_Interface));
}

_Interface I_ui__Stack_to_Interface_ui__Widget(ui__Stack* x) {
	return (_Interface) {
		._object = (void*) (x),
		._interface_idx = _ui__Widget_ui__Stack_index
	};
}

_Interface* I_ui__Stack_to_Interface_ui__Widget_ptr(ui__Stack* x) {
	// TODO Remove memdup
	return (_Interface*) memdup(&(_Interface) {
		._object = (void*) (x),
		._interface_idx = _ui__Widget_ui__Stack_index
	}, sizeof(_Interface));
}

_Interface I_ui__Switch_to_Interface_ui__Widget(ui__Switch* x) {
	return (_Interface) {
		._object = (void*) (x),
		._interface_idx = _ui__Widget_ui__Switch_index
	};
}

_Interface* I_ui__Switch_to_Interface_ui__Widget_ptr(ui__Switch* x) {
	// TODO Remove memdup
	return (_Interface*) memdup(&(_Interface) {
		._object = (void*) (x),
		._interface_idx = _ui__Widget_ui__Switch_index
	}, sizeof(_Interface));
}

_Interface I_ui__Rectangle_to_Interface_ui__Widget(ui__Rectangle* x) {
	return (_Interface) {
		._object = (void*) (x),
		._interface_idx = _ui__Widget_ui__Rectangle_index
	};
}

_Interface* I_ui__Rectangle_to_Interface_ui__Widget_ptr(ui__Rectangle* x) {
	// TODO Remove memdup
	return (_Interface*) memdup(&(_Interface) {
		._object = (void*) (x),
		._interface_idx = _ui__Widget_ui__Rectangle_index
	}, sizeof(_Interface));
}

_Interface I_ui__Group_to_Interface_ui__Widget(ui__Group* x) {
	return (_Interface) {
		._object = (void*) (x),
		._interface_idx = _ui__Widget_ui__Group_index
	};
}

_Interface* I_ui__Group_to_Interface_ui__Widget_ptr(ui__Group* x) {
	// TODO Remove memdup
	return (_Interface*) memdup(&(_Interface) {
		._object = (void*) (x),
		._interface_idx = _ui__Widget_ui__Group_index
	}, sizeof(_Interface));
}


// V gowrappers:
void* sync__process_in_thread_thread_wrapper(thread_arg_sync__process_in_thread *arg) {
	sync__process_in_thread(arg->arg1, arg->arg2);
	return 0;
}
void* clipboard__Clipboard_start_listener_thread_wrapper(thread_arg_clipboard__Clipboard_start_listener *arg) {
	clipboard__Clipboard_start_listener(arg->arg0);
	return 0;
}
void* ui__UI_idle_loop_thread_wrapper(thread_arg_ui__UI_idle_loop *arg) {
	ui__UI_idle_loop(arg->arg0);
	return 0;
}
void* ui__run_message_dialog_thread_wrapper(thread_arg_ui__run_message_dialog *arg) {
	ui__run_message_dialog(arg->arg1, arg->arg2);
	return 0;
}

// V option typedefs:
typedef struct {
			int  data;
			string error;
			int    ecode;
			bool   ok;
			bool   is_none;
		} Option2_int;
typedef struct {
			string  data;
			string error;
			int    ecode;
			bool   ok;
			bool   is_none;
		} Option2_string;
typedef struct {
			array_byte  data;
			string error;
			int    ecode;
			bool   ok;
			bool   is_none;
		} Option2_array_byte;
typedef struct {
			FILE*  data;
			string error;
			int    ecode;
			bool   ok;
			bool   is_none;
		} Option2_FILE_ptr;
typedef struct {
			void*  data;
			string error;
			int    ecode;
			bool   ok;
			bool   is_none;
		} Option2_void;
typedef struct {
			array_string  data;
			string error;
			int    ecode;
			bool   ok;
			bool   is_none;
		} Option2_array_string;
typedef struct {
			bool  data;
			string error;
			int    ecode;
			bool   ok;
			bool   is_none;
		} Option2_bool;
typedef struct {
			array_ustring  data;
			string error;
			int    ecode;
			bool   ok;
			bool   is_none;
		} Option2_array_ustring;
typedef struct {
			os__File  data;
			string error;
			int    ecode;
			bool   ok;
			bool   is_none;
		} Option2_os__File;
typedef struct {
			os__Result  data;
			string error;
			int    ecode;
			bool   ok;
			bool   is_none;
		} Option2_os__Result;
typedef struct {
			time__Time  data;
			string error;
			int    ecode;
			bool   ok;
			bool   is_none;
		} Option2_time__Time;
typedef struct {
			stbi__Image  data;
			string error;
			int    ecode;
			bool   ok;
			bool   is_none;
		} Option2_stbi__Image;
typedef struct {
			gg__FT*  data;
			string error;
			int    ecode;
			bool   ok;
			bool   is_none;
		} Option2_gg__FT_ptr;
typedef struct {
			multi_return_string_string  data;
			string error;
			int    ecode;
			bool   ok;
			bool   is_none;
		} Option2_multi_return_string_string;

// V stringliterals:

// >> string literal consts
void vinit_string_literals(){
	_const_math__bits__overflow_error = tos_lit("Overflow Error");
	_const_math__bits__divide_error = tos_lit("Divide Error");
	_const_new_line_character = tos_lit("\n");
	_const_digit_pairs = tos_lit("00102030405060708090011121314151617181910212223242526272829203132333435363738393041424344454647484940515253545556575859506162636465666768696071727374757677787970818283848586878889809192939495969798999");
	_const_os__path_separator = tos_lit("/");
	_const_os__path_delimiter = tos_lit(":");
	_const_time__days_string = tos_lit("MonTueWedThuFriSatSun");
	_const_time__months_string = tos_lit("JanFebMarAprMayJunJulAugSepOctNovDec");
	_const_rand__chars = tos_lit("abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ");
	_const_rand__ulid_encoding = tos_lit("0123456789ABCDEFGHJKMNPQRSTVWXYZ");
	_const_ui__version = tos_lit("0.0.4");
}
// << string literal consts


// V auto str functions:
string strings__Builder_str_no_ptr(strings__Builder it){ return strings__Builder_str(&it); }
string time__FormatTime_str(time__FormatTime it) { /* gen_str_for_enum */
	switch(it) {
		case time__FormatTime_hhmm12: return tos_lit("hhmm12");
		case time__FormatTime_hhmm24: return tos_lit("hhmm24");
		case time__FormatTime_hhmmss12: return tos_lit("hhmmss12");
		case time__FormatTime_hhmmss24: return tos_lit("hhmmss24");
		case time__FormatTime_hhmmss24_milli: return tos_lit("hhmmss24_milli");
		case time__FormatTime_hhmmss24_micro: return tos_lit("hhmmss24_micro");
		case time__FormatTime_no_time: return tos_lit("no_time");
		default: return tos_lit("unknown enum value");
	}
}
string time__FormatDate_str(time__FormatDate it) { /* gen_str_for_enum */
	switch(it) {
		case time__FormatDate_ddmmyy: return tos_lit("ddmmyy");
		case time__FormatDate_ddmmyyyy: return tos_lit("ddmmyyyy");
		case time__FormatDate_mmddyy: return tos_lit("mmddyy");
		case time__FormatDate_mmddyyyy: return tos_lit("mmddyyyy");
		case time__FormatDate_mmmd: return tos_lit("mmmd");
		case time__FormatDate_mmmdd: return tos_lit("mmmdd");
		case time__FormatDate_mmmddyyyy: return tos_lit("mmmddyyyy");
		case time__FormatDate_no_date: return tos_lit("no_date");
		case time__FormatDate_yyyymmdd: return tos_lit("yyyymmdd");
		default: return tos_lit("unknown enum value");
	}
}
string sokol__sapp__EventType_str(sokol__sapp__EventType it) { /* gen_str_for_enum */
	switch(it) {
		case sokol__sapp__EventType_invalid: return tos_lit("invalid");
		case sokol__sapp__EventType_key_down: return tos_lit("key_down");
		case sokol__sapp__EventType_key_up: return tos_lit("key_up");
		case sokol__sapp__EventType_char: return tos_lit("char");
		case sokol__sapp__EventType_mouse_down: return tos_lit("mouse_down");
		case sokol__sapp__EventType_mouse_up: return tos_lit("mouse_up");
		case sokol__sapp__EventType_mouse_scroll: return tos_lit("mouse_scroll");
		case sokol__sapp__EventType_mouse_move: return tos_lit("mouse_move");
		case sokol__sapp__EventType_mouse_enter: return tos_lit("mouse_enter");
		case sokol__sapp__EventType_mouse_leave: return tos_lit("mouse_leave");
		case sokol__sapp__EventType_touches_began: return tos_lit("touches_began");
		case sokol__sapp__EventType_touches_moved: return tos_lit("touches_moved");
		case sokol__sapp__EventType_touches_ended: return tos_lit("touches_ended");
		case sokol__sapp__EventType_touches_cancelled: return tos_lit("touches_cancelled");
		case sokol__sapp__EventType_resized: return tos_lit("resized");
		case sokol__sapp__EventType_iconified: return tos_lit("iconified");
		case sokol__sapp__EventType_restored: return tos_lit("restored");
		case sokol__sapp__EventType_suspended: return tos_lit("suspended");
		case sokol__sapp__EventType_resumed: return tos_lit("resumed");
		case sokol__sapp__EventType_update_cursor: return tos_lit("update_cursor");
		case sokol__sapp__EventType_quit_requested: return tos_lit("quit_requested");
		case sokol__sapp__EventType_clipboard_pasted: return tos_lit("clipboard_pasted");
		case sokol__sapp__EventType_num: return tos_lit("num");
		default: return tos_lit("unknown enum value");
	}
}

// V out

// >> typeof() support for sum types
// << typeof() support for sum types


void _STR_PRINT_ARG(const char *fmt, char** refbufp, int *nbytes, int *memsize, int guess, ...) {
	va_list args;
	va_start(args, guess);
	// NB: (*memsize - *nbytes) === how much free space is left at the end of the current buffer refbufp
	// *memsize === total length of the buffer refbufp
	// *nbytes === already occupied bytes of buffer refbufp
	// guess === how many bytes were taken during the current vsnprintf run
	for(;;) {
		if (guess < *memsize - *nbytes) {
			guess = vsnprintf(*refbufp + *nbytes, *memsize - *nbytes, fmt, args);
			if (guess < *memsize - *nbytes) { // result did fit into buffer
				*nbytes += guess;
				break;
			}
		}
		// increase buffer (somewhat exponentially)
		*memsize += (*memsize + *memsize) / 3 + guess;
		*refbufp = (char*)realloc((void*)*refbufp, *memsize);
	}
	va_end(args);
}

string _STR(const char *fmt, int nfmts, ...) {
	va_list argptr;
	int memsize = 128;
	int nbytes = 0;
	char* buf = (char*)malloc(memsize);
	va_start(argptr, nfmts);
	for (int i=0; i<nfmts; ++i) {
		int k = strlen(fmt);
		bool is_fspec = false;
		for (int j=0; j<k; ++j) {
			if (fmt[j] == '%') {
				j++;
				if (fmt[j] != '%') {
					is_fspec = true;
					break;
				}
			}
		}
		if (is_fspec) {
			char f = fmt[k-1];
			char fup = f & 0xdf; // toupper
			bool l = fmt[k-2] == 'l';
			bool ll = l && fmt[k-3] == 'l';
			if (f == 'u' || fup == 'X' || f == 'o' || f == 'd' || f == 'c') { // int...
				if (ll) _STR_PRINT_ARG(fmt, &buf, &nbytes, &memsize, k+16, va_arg(argptr, long long));
				else if (l) _STR_PRINT_ARG(fmt, &buf, &nbytes, &memsize, k+10, va_arg(argptr, long));
				else _STR_PRINT_ARG(fmt, &buf, &nbytes, &memsize, k+8, va_arg(argptr, int));
			} else if (fup >= 'E' && fup <= 'G') { // floating point
				_STR_PRINT_ARG(fmt, &buf, &nbytes, &memsize, k+10, va_arg(argptr, double));
			} else if (f == 'p') {
				_STR_PRINT_ARG(fmt, &buf, &nbytes, &memsize, k+14, va_arg(argptr, void*));
			} else if (f == 's') { // v string
				string s = va_arg(argptr, string);
				if (fmt[k-4] == '*') { // %*.*s
					int fwidth = va_arg(argptr, int);
					if (fwidth < 0)
						fwidth -= (s.len - utf8_str_visible_length(s));
					else
						fwidth += (s.len - utf8_str_visible_length(s));
					_STR_PRINT_ARG(fmt, &buf, &nbytes, &memsize, k+s.len-4, fwidth, s.len, s.str);
				} else { // %.*s
					_STR_PRINT_ARG(fmt, &buf, &nbytes, &memsize, k+s.len-4, s.len, s.str);
				}
			} else {
				//v_panic(tos3('Invaid format specifier'));
			}
		} else {
			_STR_PRINT_ARG(fmt, &buf, &nbytes, &memsize, k);
		}
		fmt += k+1;
	}
	va_end(argptr);
	buf[nbytes] = 0;
	buf = (char*)realloc((void*)buf, nbytes+1);
#ifdef DEBUG_ALLOC
	//puts('_STR:');
	puts(buf);
#endif
#if _VAUTOFREE
	//g_cur_str = (byteptr)buf;
#endif
	return tos2((byteptr)buf);
}

string _STR_TMP(const char *fmt, ...) {
	va_list argptr;
	va_start(argptr, fmt);
	size_t len = vsnprintf(0, 0, fmt, argptr) + 1;
	va_end(argptr);
	va_start(argptr, fmt);
	vsprintf((char *)g_str_buf, fmt, argptr);
	va_end(argptr);

#ifdef DEBUG_ALLOC
	//puts('_STR_TMP:');
	//puts(g_str_buf);
#endif
	string res = tos(g_str_buf,  len);
	res.is_lit = 1;
	return res;

} // endof _STR_TMP


strings__Builder strings__new_builder(int initial_size) {
	return (strings__Builder){.buf = __new_array_with_default(0, initial_size, sizeof(byte), 0),.str_calls = 0,.len = 0,.initial_size = initial_size,};
}

void strings__Builder_write_bytes(strings__Builder* b, byteptr bytes, int howmany) {
	array_push_many(&b->buf, bytes, howmany);
	b->len += howmany;
}

void strings__Builder_write_b(strings__Builder* b, byte data) {
	array_push(&b->buf, _MOV((byte[]){ data }));
	b->len++;
}

// Attr: [inline]
inline void strings__Builder_write(strings__Builder* b, string s) {
	if ((s).len == 0) {
		return;
	}
	array_push_many(&b->buf, s.str, s.len);
	b->len += s.len;
}

void strings__Builder_go_back(strings__Builder* b, int n) {
	array_trim(&b->buf, b->buf.len - n);
	b->len -= n;
}

static string strings__bytes2string(array_byte b) {
	array_byte copy = array_clone(&b);
	array_push(&copy, _MOV((byte[]){ ((byte)('\0')) }));
	string res = tos(copy.data, copy.len - 1);
	return res;
}

string strings__Builder_cut_last(strings__Builder* b, int n) {
	string res = strings__bytes2string(array_slice(b->buf, b->len - n, b->buf.len));
	array_trim(&b->buf, b->buf.len - n);
	b->len -= n;
	return res;
}

void strings__Builder_go_back_to(strings__Builder* b, int pos) {
	array_trim(&b->buf, pos);
	b->len = pos;
}

// Attr: [inline]
inline void strings__Builder_writeln(strings__Builder* b, string s) {
	array_push_many(&b->buf, s.str, s.len);
	array_push(&b->buf, _MOV((byte[]){ '\n' }));
	b->len += s.len + 1;
}

string strings__Builder_last_n(strings__Builder* b, int n) {
	if (n > b->len) {
		return tos_lit("");
	}
	return strings__bytes2string(array_slice(b->buf, b->len - n, b->buf.len));
}

string strings__Builder_after(strings__Builder* b, int n) {
	if (n >= b->len) {
		return tos_lit("");
	}
	return strings__bytes2string(array_slice(b->buf, n, b->buf.len));
}

string strings__Builder_str(strings__Builder* b) {
	b->str_calls++;
	if (b->str_calls > 1) {
		v_panic(string_add(tos_lit("builder.str() should be called just once.\n"), tos_lit("If you want to reuse a builder, call b.free() first.")));
	}
	array_push(&b->buf, _MOV((byte[]){ '\0' }));
	string s = tos(b->buf.data, b->len);
	int bis = b->initial_size;
	b->buf = __new_array_with_default(0, bis, sizeof(byte), 0);
	b->len = 0;
	return s;
}

void strings__Builder_free(strings__Builder* b) {
	v_free(b->buf.data);
	b->len = 0;
	b->str_calls = 0;
}

int strings__levenshtein_distance(string a, string b) {
	array_int f = array_repeat(new_array_from_c_array(1, 1, sizeof(int), _MOV((int[1]){0})), b.len + 1);
	for (int j = 0; j < f.len; ++j) {
		array_set(&f, j, &(int[]) { j });
	}
	for (int _t5 = 0; _t5 < a.len; ++_t5) {
		byte ca = a.str[_t5];
		int j = 1;
		int fj1 = (*(int*)array_get(f, 0));
		(*(int*)array_get(f, 0))++;
		for (int _t6 = 0; _t6 < b.len; ++_t6) {
			byte cb = b.str[_t6];
			int mn = ((*(int*)array_get(f, j)) + 1 <= (*(int*)array_get(f, j - 1)) + 1 ? ((*(int*)array_get(f, j)) + 1) : ((*(int*)array_get(f, j - 1)) + 1));
			if (cb != ca) {
				mn = (mn <= fj1 + 1 ? (mn) : (fj1 + 1));
			} else {
				mn = (mn <= fj1 ? (mn) : (fj1));
			}
			fj1 = (*(int*)array_get(f, j));
			array_set(&f, j, &(int[]) { mn });
			j++;
		}
	}
	return (*(int*)array_get(f, f.len - 1));
}

f32 strings__levenshtein_distance_percentage(string a, string b) {
	int d = strings__levenshtein_distance(a, b);
	int l = (a.len >= b.len ? (a.len) : (b.len));
	return (1.00 - ((f32)(d)) / ((f32)(l))) * 100.00;
}

f32 strings__dice_coefficient(string s1, string s2) {
	if (s1.len == 0 || s2.len == 0) {
		return 0.0;
	}
	if (string_eq(s1, s2)) {
		return 1.0;
	}
	if (s1.len < 2 || s2.len < 2) {
		return 0.0;
	}
	string a = (s1.len > s2.len ? (s1) : (s2));
	string b = (string_eq(a, s1) ? (s2) : (s1));
	map_string_int first_bigrams = new_map_1(sizeof(int));
	for (int i = 0; i < a.len - 1; ++i) {
		string bigram = string_substr(a, i, i + 2);
		int q = (_IN_MAP(bigram, first_bigrams) ? ((*(int*)map_get(first_bigrams, bigram, &(int[]){ 0 })) + 1) : (1));
		map_set(&first_bigrams, bigram, &(int[]) { q });
	}
	int intersection_size = 0;
	for (int i = 0; i < b.len - 1; ++i) {
		string bigram = string_substr(b, i, i + 2);
		int count = (_IN_MAP(bigram, first_bigrams) ? ((*(int*)map_get(first_bigrams, bigram, &(int[]){ 0 }))) : (0));
		if (count > 0) {
			map_set(&first_bigrams, bigram, &(int[]) { count - 1 });
			intersection_size++;
		}
	}
	return (2.0 * ((f32)(intersection_size))) / (((f32)(a.len)) + ((f32)(b.len)) - 2);
}

string strings__repeat(byte c, int n) {
	if (n <= 0) {
		return tos_lit("");
	}
	byteptr bytes = v_malloc(n + 1);
	{ // Unsafe block
		memset(bytes, c, n);
		bytes[n] = '0';
	}
	return byteptr_vstring_with_len(bytes, n);
}

string strings__repeat_string(string s, int n) {
	if (n <= 0 || s.len == 0) {
		return tos_lit("");
	}
	int slen = s.len;
	int blen = slen * n;
	byteptr bytes = v_malloc(blen + 1);
	for (int bi = 0; bi < n; ++bi) {
		int bislen = bi * slen;
		for (int si = 0; si < slen; ++si) {
			{ // Unsafe block
				bytes[bislen + si] = string_at(s, si);
			}
		}
	}
	{ // Unsafe block
		bytes[blen] = '0';
	}
	return byteptr_vstring_with_len(bytes, blen);
}

// Attr: [inline]
inline u64 hash__wyhash_c(byteptr key, u64 len, u64 seed) {
	return wyhash(key, len, seed);
}

// Attr: [inline]
inline u64 hash__sum64_string(string key, u64 seed) {
	return hash__wyhash64(key.str, ((u64)(key.len)), seed);
}

// Attr: [inline]
inline u64 hash__sum64(array_byte key, u64 seed) {
	return hash__wyhash64(((byteptr)(key.data)), ((u64)(key.len)), seed);
}

// Attr: [inline]
inline static u64 hash__wyhash64(byteptr key, u64 len, u64 seed_) {
	if (len == 0) {
		return 0;
	}
	byteptr p = key;
	u64 seed = seed_;
	u64 i = (len & 63);
	u64 _t7 = i;
		seed = (((_t7 <= 3)) ? (hash__wymum(((hash__wyr3(p, i) ^ seed) ^ _const_hash__wyp0), (seed ^ _const_hash__wyp1))) : ((_t7 >= 4 && _t7 <= 8)) ? (hash__wymum(((hash__wyr4(p) ^ seed) ^ _const_hash__wyp0), ((hash__wyr4(p + i - 4) ^ seed) ^ _const_hash__wyp1))) : ((_t7 >= 9 && _t7 <= 16)) ? (hash__wymum(((hash__wyr8(p) ^ seed) ^ _const_hash__wyp0), ((hash__wyr8(p + i - 8) ^ seed) ^ _const_hash__wyp1))) : ((_t7 >= 17 && _t7 <= 24)) ? ((hash__wymum(((hash__wyr8(p) ^ seed) ^ _const_hash__wyp0), ((hash__wyr8(p + 8) ^ seed) ^ _const_hash__wyp1)) ^ hash__wymum(((hash__wyr8(p + i - 8) ^ seed) ^ _const_hash__wyp2), (seed ^ _const_hash__wyp3)))) : ((_t7 >= 25 && _t7 <= 32)) ? ((hash__wymum(((hash__wyr8(p) ^ seed) ^ _const_hash__wyp0), ((hash__wyr8(p + 8) ^ seed) ^ _const_hash__wyp1)) ^ hash__wymum(((hash__wyr8(p + 16) ^ seed) ^ _const_hash__wyp2), ((hash__wyr8(p + i - 8) ^ seed) ^ _const_hash__wyp3)))) : ((((hash__wymum(((hash__wyr8(p) ^ seed) ^ _const_hash__wyp0), ((hash__wyr8(p + 8) ^ seed) ^ _const_hash__wyp1)) ^ hash__wymum(((hash__wyr8(p + 16) ^ seed) ^ _const_hash__wyp2), ((hash__wyr8(p + 24) ^ seed) ^ _const_hash__wyp3))) ^ hash__wymum(((hash__wyr8(p + i - 32) ^ seed) ^ _const_hash__wyp1), ((hash__wyr8(p + i - 24) ^ seed) ^ _const_hash__wyp2))) ^ hash__wymum(((hash__wyr8(p + i - 16) ^ seed) ^ _const_hash__wyp3), ((hash__wyr8(p + i - 8) ^ seed) ^ _const_hash__wyp0)))));
	if (i == len) {
		return hash__wymum(seed, (len ^ _const_hash__wyp4));
	}
	u64 see1 = seed;
	u64 see2 = seed;
	u64 see3 = seed;
	{ // Unsafe block
		p = p + i;
		for (i = len - i; i >= 64; i -= 64) {
			seed = hash__wymum(((hash__wyr8(p) ^ seed) ^ _const_hash__wyp0), ((hash__wyr8(p + 8) ^ seed) ^ _const_hash__wyp1));
			see1 = hash__wymum(((hash__wyr8(p + 16) ^ see1) ^ _const_hash__wyp2), ((hash__wyr8(p + 24) ^ see1) ^ _const_hash__wyp3));
			see2 = hash__wymum(((hash__wyr8(p + 32) ^ see2) ^ _const_hash__wyp1), ((hash__wyr8(p + 40) ^ see2) ^ _const_hash__wyp2));
			see3 = hash__wymum(((hash__wyr8(p + 48) ^ see3) ^ _const_hash__wyp3), ((hash__wyr8(p + 56) ^ see3) ^ _const_hash__wyp0));
			p = p + 64;
		}
	}
	return hash__wymum(((seed ^ see1) ^ see2), ((see3 ^ len) ^ _const_hash__wyp4));
}

// Attr: [inline]
inline static u64 hash__wyrotr(u64 v, u32 k) {
	return ((v >> k) | (v << (64 - k)));
}

// Attr: [inline]
inline u64 hash__wymum(u64 a, u64 b) {
	u32 mask32 = ((u32)(4294967295U));
	u64 x0 = (a & mask32);
	u64 x1 = a >> 32;
	u64 y0 = (b & mask32);
	u64 y1 = b >> 32;
	u64 w0 = x0 * y0;
	u64 t = x1 * y0 + (w0 >> 32);
	u64 w1 = (t & mask32);
	u64 w2 = t >> 32;
	w1 += x0 * y1;
	u64 hi = x1 * y1 + w2 + (w1 >> 32);
	u64 lo = a * b;
	return (hi ^ lo);
}

// Attr: [inline]
inline static u64 hash__wyr3(byteptr p, u64 k) {
	{ // Unsafe block
		return (((((u64)(p[0])) << 16) | (((u64)(p[k >> 1])) << 8)) | ((u64)(p[k - 1])));
	}
	return 0;
}

// Attr: [inline]
inline static u64 hash__wyr4(byteptr p) {
	{ // Unsafe block
		return (((((u32)(p[0])) | (((u32)(p[1])) << ((u32)(8U)))) | (((u32)(p[2])) << ((u32)(16U)))) | (((u32)(p[3])) << ((u32)(24U))));
	}
	return 0;
}

// Attr: [inline]
inline static u64 hash__wyr8(byteptr p) {
	{ // Unsafe block
		return (((((((((u64)(p[0])) | (((u64)(p[1])) << 8)) | (((u64)(p[2])) << 16)) | (((u64)(p[3])) << 24)) | (((u64)(p[4])) << 32)) | (((u64)(p[5])) << 40)) | (((u64)(p[6])) << 48)) | (((u64)(p[7])) << 56));
	}
	return 0;
}

int math__bits__leading_zeros_8(byte x) {
	return 8 - math__bits__len_8(x);
}

int math__bits__leading_zeros_16(u16 x) {
	return 16 - math__bits__len_16(x);
}

int math__bits__leading_zeros_32(u32 x) {
	return 32 - math__bits__len_32(x);
}

int math__bits__leading_zeros_64(u64 x) {
	return 64 - math__bits__len_64(x);
}

int math__bits__trailing_zeros_8(byte x) {
	return ((int)((*(byte*)array_get(_const_math__bits__ntz_8_tab, x))));
}

int math__bits__trailing_zeros_16(u16 x) {
	if (x == 0) {
		return 16;
	}
	return ((int)((*(byte*)array_get(_const_math__bits__de_bruijn32tab, ((u32)((x & -x))) * _const_math__bits__de_bruijn32 >> (32 - 5)))));
}

int math__bits__trailing_zeros_32(u32 x) {
	if (x == 0) {
		return 32;
	}
	return ((int)((*(byte*)array_get(_const_math__bits__de_bruijn32tab, ((x & -x)) * _const_math__bits__de_bruijn32 >> (32 - 5)))));
}

int math__bits__trailing_zeros_64(u64 x) {
	if (x == 0) {
		return 64;
	}
	return ((int)((*(byte*)array_get(_const_math__bits__de_bruijn64tab, ((x & -x)) * _const_math__bits__de_bruijn64 >> (64 - 6)))));
}

int math__bits__ones_count_8(byte x) {
	return ((int)((*(byte*)array_get(_const_math__bits__pop_8_tab, x))));
}

int math__bits__ones_count_16(u16 x) {
	return ((int)((*(byte*)array_get(_const_math__bits__pop_8_tab, x >> 8)) + (*(byte*)array_get(_const_math__bits__pop_8_tab, (x & ((u16)(0xffU)))))));
}

int math__bits__ones_count_32(u32 x) {
	return ((int)((*(byte*)array_get(_const_math__bits__pop_8_tab, x >> 24)) + (*(byte*)array_get(_const_math__bits__pop_8_tab, (x >> 16 & 0xff))) + (*(byte*)array_get(_const_math__bits__pop_8_tab, (x >> 8 & 0xff))) + (*(byte*)array_get(_const_math__bits__pop_8_tab, (x & ((u32)(0xffU)))))));
}

int math__bits__ones_count_64(u64 x) {
	u64 y = ((x >> ((u64)(1U)) & ((_const_math__bits__m0 & _const_math__bits__max_u64)))) + ((x & ((_const_math__bits__m0 & _const_math__bits__max_u64))));
	y = ((y >> ((u64)(2U)) & ((_const_math__bits__m1 & _const_math__bits__max_u64)))) + ((y & ((_const_math__bits__m1 & _const_math__bits__max_u64))));
	y = (((y >> 4) + y) & ((_const_math__bits__m2 & _const_math__bits__max_u64)));
	y += y >> 8;
	y += y >> 16;
	y += y >> 32;
	return (((int)(y)) & ((1 << 7) - 1));
}

// Attr: [inline]
inline byte math__bits__rotate_left_8(byte x, int k) {
	byte n = ((byte)(8));
	byte s = (((byte)(k)) & (n - ((byte)(1))));
	return (((x << s) | (x >> (n - s))));
}

// Attr: [inline]
inline u16 math__bits__rotate_left_16(u16 x, int k) {
	u16 n = ((u16)(16U));
	u16 s = (((u16)(k)) & (n - ((u16)(1U))));
	return (((x << s) | (x >> (n - s))));
}

// Attr: [inline]
inline u32 math__bits__rotate_left_32(u32 x, int k) {
	u32 n = ((u32)(32U));
	u32 s = (((u32)(k)) & (n - ((u32)(1U))));
	return (((x << s) | (x >> (n - s))));
}

// Attr: [inline]
inline u64 math__bits__rotate_left_64(u64 x, int k) {
	u64 n = ((u64)(64U));
	u64 s = (((u64)(k)) & (n - ((u64)(1U))));
	return (((x << s) | (x >> (n - s))));
}

// Attr: [inline]
inline byte math__bits__reverse_8(byte x) {
	return (*(byte*)array_get(_const_math__bits__rev_8_tab, x));
}

// Attr: [inline]
inline u16 math__bits__reverse_16(u16 x) {
	return (((u16)((*(byte*)array_get(_const_math__bits__rev_8_tab, x >> 8)))) | (((u16)((*(byte*)array_get(_const_math__bits__rev_8_tab, (x & ((u16)(0xffU))))))) << 8));
}

// Attr: [inline]
inline u32 math__bits__reverse_32(u32 x) {
	u64 y = ((((x >> ((u32)(1U)) & ((_const_math__bits__m0 & _const_math__bits__max_u32)))) | (((x & ((_const_math__bits__m0 & _const_math__bits__max_u32)))) << 1)));
	y = ((((y >> ((u32)(2U)) & ((_const_math__bits__m1 & _const_math__bits__max_u32)))) | (((y & ((_const_math__bits__m1 & _const_math__bits__max_u32)))) << ((u32)(2U)))));
	y = ((((y >> ((u32)(4U)) & ((_const_math__bits__m2 & _const_math__bits__max_u32)))) | (((y & ((_const_math__bits__m2 & _const_math__bits__max_u32)))) << ((u32)(4U)))));
	return math__bits__reverse_bytes_32(((u32)(y)));
}

// Attr: [inline]
inline u64 math__bits__reverse_64(u64 x) {
	u64 y = ((((x >> ((u64)(1U)) & ((_const_math__bits__m0 & _const_math__bits__max_u64)))) | (((x & ((_const_math__bits__m0 & _const_math__bits__max_u64)))) << 1)));
	y = ((((y >> ((u64)(2U)) & ((_const_math__bits__m1 & _const_math__bits__max_u64)))) | (((y & ((_const_math__bits__m1 & _const_math__bits__max_u64)))) << 2)));
	y = ((((y >> ((u64)(4U)) & ((_const_math__bits__m2 & _const_math__bits__max_u64)))) | (((y & ((_const_math__bits__m2 & _const_math__bits__max_u64)))) << 4)));
	return math__bits__reverse_bytes_64(y);
}

// Attr: [inline]
inline u16 math__bits__reverse_bytes_16(u16 x) {
	return ((x >> 8) | (x << 8));
}

// Attr: [inline]
inline u32 math__bits__reverse_bytes_32(u32 x) {
	u64 y = ((((x >> ((u32)(8U)) & ((_const_math__bits__m3 & _const_math__bits__max_u32)))) | (((x & ((_const_math__bits__m3 & _const_math__bits__max_u32)))) << ((u32)(8U)))));
	return ((u32)(((y >> 16) | (y << 16))));
}

// Attr: [inline]
inline u64 math__bits__reverse_bytes_64(u64 x) {
	u64 y = ((((x >> ((u64)(8U)) & ((_const_math__bits__m3 & _const_math__bits__max_u64)))) | (((x & ((_const_math__bits__m3 & _const_math__bits__max_u64)))) << ((u64)(8U)))));
	y = ((((y >> ((u64)(16U)) & ((_const_math__bits__m4 & _const_math__bits__max_u64)))) | (((y & ((_const_math__bits__m4 & _const_math__bits__max_u64)))) << ((u64)(16U)))));
	return ((y >> 32) | (y << 32));
}

int math__bits__len_8(byte x) {
	return ((int)((*(byte*)array_get(_const_math__bits__len_8_tab, x))));
}

int math__bits__len_16(u16 x) {
	u16 y = x;
	int n = 0;
	if (y >= 1 << 8) {
		y >>= 8;
		n = 8;
	}
	return n + ((int)((*(byte*)array_get(_const_math__bits__len_8_tab, y))));
}

int math__bits__len_32(u32 x) {
	u32 y = x;
	int n = 0;
	if (y >= (1 << 16)) {
		y >>= 16;
		n = 16;
	}
	if (y >= (1 << 8)) {
		y >>= 8;
		n += 8;
	}
	return n + ((int)((*(byte*)array_get(_const_math__bits__len_8_tab, y))));
}

int math__bits__len_64(u64 x) {
	u64 y = x;
	int n = 0;
	if (y >= ((u64)(1U)) << ((u64)(32U))) {
		y >>= 32;
		n = 32;
	}
	if (y >= ((u64)(1U)) << ((u64)(16U))) {
		y >>= 16;
		n += 16;
	}
	if (y >= ((u64)(1U)) << ((u64)(8U))) {
		y >>= 8;
		n += 8;
	}
	return n + ((int)((*(byte*)array_get(_const_math__bits__len_8_tab, y))));
}

multi_return_u32_u32 math__bits__add_32(u32 x, u32 y, u32 carry) {
	u64 sum64 = ((u64)(x)) + ((u64)(y)) + ((u64)(carry));
	u32 sum = ((u32)(sum64));
	u32 carry_out = ((u32)(sum64 >> 32));
	return (multi_return_u32_u32){.arg0=sum, .arg1=carry_out};
}

multi_return_u64_u64 math__bits__add_64(u64 x, u64 y, u64 carry) {
	u64 sum = x + y + carry;
	u64 carry_out = ((((x & y)) | ((((x | y)) & ~sum)))) >> 63;
	return (multi_return_u64_u64){.arg0=sum, .arg1=carry_out};
}

multi_return_u32_u32 math__bits__sub_32(u32 x, u32 y, u32 borrow) {
	u32 diff = x - y - borrow;
	u32 borrow_out = ((((~x & y)) | ((~((x ^ y)) & diff)))) >> 31;
	return (multi_return_u32_u32){.arg0=diff, .arg1=borrow_out};
}

multi_return_u64_u64 math__bits__sub_64(u64 x, u64 y, u64 borrow) {
	u64 diff = x - y - borrow;
	u64 borrow_out = ((((~x & y)) | ((~((x ^ y)) & diff)))) >> 63;
	return (multi_return_u64_u64){.arg0=diff, .arg1=borrow_out};
}

multi_return_u32_u32 math__bits__mul_32(u32 x, u32 y) {
	u64 tmp = ((u64)(x)) * ((u64)(y));
	u32 hi = ((u32)(tmp >> 32));
	u32 lo = ((u32)(tmp));
	return (multi_return_u32_u32){.arg0=hi, .arg1=lo};
}

multi_return_u64_u64 math__bits__mul_64(u64 x, u64 y) {
	u64 x0 = (x & _const_math__bits__mask32);
	u64 x1 = x >> 32;
	u64 y0 = (y & _const_math__bits__mask32);
	u64 y1 = y >> 32;
	u64 w0 = x0 * y0;
	u64 t = x1 * y0 + (w0 >> 32);
	u64 w1 = (t & _const_math__bits__mask32);
	u64 w2 = t >> 32;
	w1 += x0 * y1;
	u64 hi = x1 * y1 + w2 + (w1 >> 32);
	u64 lo = x * y;
	return (multi_return_u64_u64){.arg0=hi, .arg1=lo};
}

multi_return_u32_u32 math__bits__div_32(u32 hi, u32 lo, u32 y) {
	if (y != 0 && y <= hi) {
		v_panic(_const_math__bits__overflow_error);
	}
	u64 z = ((((u64)(hi)) << 32) | ((u64)(lo)));
	u32 quo = ((u32)(z / ((u64)(y))));
	u32 rem = ((u32)(z % ((u64)(y))));
	return (multi_return_u32_u32){.arg0=quo, .arg1=rem};
}

multi_return_u64_u64 math__bits__div_64(u64 hi, u64 lo, u64 y1) {
	u64 y = y1;
	if (y == 0) {
		v_panic(_const_math__bits__overflow_error);
	}
	if (y <= hi) {
		v_panic(_const_math__bits__overflow_error);
	}
	u32 s = ((u32)(math__bits__leading_zeros_64(y)));
	y <<= s;
	u64 yn1 = y >> 32;
	u64 yn0 = (y & _const_math__bits__mask32);
	u64 un32 = ((hi << s) | (lo >> (64 - s)));
	u64 un10 = lo << s;
	u64 un1 = un10 >> 32;
	u64 un0 = (un10 & _const_math__bits__mask32);
	u64 q1 = un32 / yn1;
	u64 rhat = un32 - q1 * yn1;
	for (;;) {
		if (!(q1 >= _const_math__bits__two32 || q1 * yn0 > _const_math__bits__two32 * rhat + un1)) break;
		q1--;
		rhat += yn1;
		if (rhat >= _const_math__bits__two32) {
			break;
		}
	}
	u64 un21 = un32 * _const_math__bits__two32 + un1 - q1 * y;
	u64 q0 = un21 / yn1;
	rhat = un21 - q0 * yn1;
	for (;;) {
		if (!(q0 >= _const_math__bits__two32 || q0 * yn0 > _const_math__bits__two32 * rhat + un0)) break;
		q0--;
		rhat += yn1;
		if (rhat >= _const_math__bits__two32) {
			break;
		}
	}
	return (multi_return_u64_u64){.arg0=q1 * _const_math__bits__two32 + q0, .arg1=(un21 * _const_math__bits__two32 + un0 - q0 * y) >> s};
}

u32 math__bits__rem_32(u32 hi, u32 lo, u32 y) {
	return ((u32)((((((u64)(hi)) << 32) | ((u64)(lo)))) % ((u64)(y))));
}

u64 math__bits__rem_64(u64 hi, u64 lo, u64 y) {
	multi_return_u64_u64 mr_15272 = math__bits__div_64(hi % y, lo, y);
	u64 rem = mr_15272.arg1;
	return rem;
}

static multi_return_u32_u32_u32 strconv__lsr96(u32 s2, u32 s1, u32 s0) {
	u32 r0 = ((u32)(0U));
	u32 r1 = ((u32)(0U));
	u32 r2 = ((u32)(0U));
	r0 = ((s0 >> 1) | (((s1 & ((u32)(1U)))) << 31));
	r1 = ((s1 >> 1) | (((s2 & ((u32)(1U)))) << 31));
	r2 = s2 >> 1;
	return (multi_return_u32_u32_u32){.arg0=r2, .arg1=r1, .arg2=r0};
}

static multi_return_u32_u32_u32 strconv__lsl96(u32 s2, u32 s1, u32 s0) {
	u32 r0 = ((u32)(0U));
	u32 r1 = ((u32)(0U));
	u32 r2 = ((u32)(0U));
	r2 = ((s2 << 1) | (((s1 & (((u32)(1U)) << 31))) >> 31));
	r1 = ((s1 << 1) | (((s0 & (((u32)(1U)) << 31))) >> 31));
	r0 = s0 << 1;
	return (multi_return_u32_u32_u32){.arg0=r2, .arg1=r1, .arg2=r0};
}

static multi_return_u32_u32_u32 strconv__add96(u32 s2, u32 s1, u32 s0, u32 d2, u32 d1, u32 d0) {
	u64 w = ((u64)(0U));
	u32 r0 = ((u32)(0U));
	u32 r1 = ((u32)(0U));
	u32 r2 = ((u32)(0U));
	w = ((u64)(s0)) + ((u64)(d0));
	r0 = ((u32)(w));
	w >>= 32;
	w += ((u64)(s1)) + ((u64)(d1));
	r1 = ((u32)(w));
	w >>= 32;
	w += ((u64)(s2)) + ((u64)(d2));
	r2 = ((u32)(w));
	return (multi_return_u32_u32_u32){.arg0=r2, .arg1=r1, .arg2=r0};
}

static multi_return_u32_u32_u32 strconv__sub96(u32 s2, u32 s1, u32 s0, u32 d2, u32 d1, u32 d0) {
	u64 w = ((u64)(0U));
	u32 r0 = ((u32)(0U));
	u32 r1 = ((u32)(0U));
	u32 r2 = ((u32)(0U));
	w = ((u64)(s0)) - ((u64)(d0));
	r0 = ((u32)(w));
	w >>= 32;
	w += ((u64)(s1)) - ((u64)(d1));
	r1 = ((u32)(w));
	w >>= 32;
	w += ((u64)(s2)) - ((u64)(d2));
	r2 = ((u32)(w));
	return (multi_return_u32_u32_u32){.arg0=r2, .arg1=r1, .arg2=r0};
}

static bool strconv__is_digit(byte x) {
	return (x >= _const_strconv__c_zero && x <= _const_strconv__c_nine) == true;
}

static bool strconv__is_space(byte x) {
	return (x == '\t' || x == '\n' || x == '\v' || x == '\f' || x == '\r' || x == ' ');
}

static bool strconv__is_exp(byte x) {
	return (x == 'E' || x == 'e') == true;
}

static multi_return_int_strconv__PrepNumber strconv__parser(string s) {
	int state = _const_strconv__fsm_a;
	int digx = 0;
	byte c = ((byte)(' '));
	int result = _const_strconv__parser_ok;
	bool expneg = false;
	int expexp = 0;
	int i = 0;
	strconv__PrepNumber pn = (strconv__PrepNumber){.negative = 0,.exponent = 0,.mantissa = 0,};
	for (;;) {
		if (!(state != _const_strconv__fsm_stop)) break;
		int _t8 = state;
		if (_t8 == _const_strconv__fsm_a) {
			if (strconv__is_space(c) == true) {
				c = string_at(s, i);
				i++;
			} else {
				state = _const_strconv__fsm_b;
			}
		} else if (_t8 == _const_strconv__fsm_b) {
			state = _const_strconv__fsm_c;
			if (c == _const_strconv__c_plus) {
				c = string_at(s, i);
				i++;
			} else if (c == _const_strconv__c_minus) {
				pn.negative = true;
				c = string_at(s, i);
				i++;
			} else if (strconv__is_digit(c)) {
			} else if (c == _const_strconv__c_dpoint) {
			} else {
				state = _const_strconv__fsm_stop;
			}
		} else if (_t8 == _const_strconv__fsm_c) {
			if (c == _const_strconv__c_zero) {
				c = string_at(s, i++);
			} else if (c == _const_strconv__c_dpoint) {
				c = string_at(s, i++);
				state = _const_strconv__fsm_d;
			} else {
				state = _const_strconv__fsm_e;
			}
		} else if (_t8 == _const_strconv__fsm_d) {
			if (c == _const_strconv__c_zero) {
				c = string_at(s, i++);
				if (pn.exponent > -2147483647) {
					pn.exponent--;
				}
			} else {
				state = _const_strconv__fsm_f;
			}
		} else if (_t8 == _const_strconv__fsm_e) {
			if (strconv__is_digit(c)) {
				if (digx < _const_strconv__digits) {
					pn.mantissa *= 10;
					pn.mantissa += ((u64)(c - _const_strconv__c_zero));
					digx++;
				} else if (pn.exponent < 2147483647) {
					pn.exponent++;
				}
				c = string_at(s, i++);
			} else if (c == _const_strconv__c_dpoint) {
				c = string_at(s, i++);
				state = _const_strconv__fsm_f;
			} else {
				state = _const_strconv__fsm_f;
			}
		} else if (_t8 == _const_strconv__fsm_f) {
			if (strconv__is_digit(c)) {
				if (digx < _const_strconv__digits) {
					pn.mantissa *= 10;
					pn.mantissa += ((u64)(c - _const_strconv__c_zero));
					pn.exponent--;
					digx++;
				}
				c = string_at(s, i++);
			} else if (strconv__is_exp(c)) {
				c = string_at(s, i++);
				state = _const_strconv__fsm_g;
			} else {
				state = _const_strconv__fsm_g;
			}
		} else if (_t8 == _const_strconv__fsm_g) {
			if (c == _const_strconv__c_plus) {
				c = string_at(s, i++);
			} else if (c == _const_strconv__c_minus) {
				expneg = true;
				c = string_at(s, i++);
			}
			state = _const_strconv__fsm_h;
		} else if (_t8 == _const_strconv__fsm_h) {
			if (c == _const_strconv__c_zero) {
				c = string_at(s, i++);
			} else {
				state = _const_strconv__fsm_i;
			}
		} else if (_t8 == _const_strconv__fsm_i) {
			if (strconv__is_digit(c)) {
				if (expexp < 214748364) {
					expexp *= 10;
					expexp += ((int)(c - _const_strconv__c_zero));
				}
				c = string_at(s, i++);
			} else {
				state = _const_strconv__fsm_stop;
			}
		} else {
		};
		if (i >= s.len) {
			state = _const_strconv__fsm_stop;
		}
	}
	if (expneg) {
		expexp = -expexp;
	}
	pn.exponent += expexp;
	if (pn.mantissa == 0) {
		if (pn.negative) {
			result = _const_strconv__parser_mzero;
		} else {
			result = _const_strconv__parser_pzero;
		}
	} else if (pn.exponent > 309) {
		if (pn.negative) {
			result = _const_strconv__parser_minf;
		} else {
			result = _const_strconv__parser_pinf;
		}
	} else if (pn.exponent < -328) {
		if (pn.negative) {
			result = _const_strconv__parser_mzero;
		} else {
			result = _const_strconv__parser_pzero;
		}
	}
	return (multi_return_int_strconv__PrepNumber){.arg0=result, .arg1=pn};
}

static u64 strconv__converter(strconv__PrepNumber* pn) {
	int binexp = 92;
	u32 s2 = ((u32)(0U));
	u32 s1 = ((u32)(0U));
	u32 s0 = ((u32)(0U));
	u32 q2 = ((u32)(0U));
	u32 q1 = ((u32)(0U));
	u32 q0 = ((u32)(0U));
	u32 r2 = ((u32)(0U));
	u32 r1 = ((u32)(0U));
	u32 r0 = ((u32)(0U));
	u32 mask28 = ((u32)(0xF << 28));
	u64 result = ((u64)(0U));
	s0 = ((u32)((pn->mantissa & ((u64)(0x00000000FFFFFFFFU)))));
	s1 = ((u32)(pn->mantissa >> 32));
	s2 = ((u32)(0U));
	for (;;) {
		if (!(pn->exponent > 0)) break;
		multi_return_u32_u32_u32 mr_6682 = strconv__lsl96(s2, s1, s0);
		q2 = mr_6682.arg0;
		q1 = mr_6682.arg1;
		q0 = mr_6682.arg2;
		multi_return_u32_u32_u32 mr_6726 = strconv__lsl96(q2, q1, q0);
		r2 = mr_6726.arg0;
		r1 = mr_6726.arg1;
		r0 = mr_6726.arg2;
		multi_return_u32_u32_u32 mr_6780 = strconv__lsl96(r2, r1, r0);
		s2 = mr_6780.arg0;
		s1 = mr_6780.arg1;
		s0 = mr_6780.arg2;
		multi_return_u32_u32_u32 mr_6834 = strconv__add96(s2, s1, s0, q2, q1, q0);
		s2 = mr_6834.arg0;
		s1 = mr_6834.arg1;
		s0 = mr_6834.arg2;
		pn->exponent--;
		for (;;) {
			if (!(((s2 & mask28)) != 0)) break;
			multi_return_u32_u32_u32 mr_6955 = strconv__lsr96(s2, s1, s0);
			q2 = mr_6955.arg0;
			q1 = mr_6955.arg1;
			q0 = mr_6955.arg2;
			binexp++;
			s2 = q2;
			s1 = q1;
			s0 = q0;
		}
	}
	for (;;) {
		if (!(pn->exponent < 0)) break;
		for (;;) {
			if (!(!(((s2 & (((u32)(1U)) << 31))) != 0))) break;
			multi_return_u32_u32_u32 mr_7098 = strconv__lsl96(s2, s1, s0);
			q2 = mr_7098.arg0;
			q1 = mr_7098.arg1;
			q0 = mr_7098.arg2;
			binexp--;
			s2 = q2;
			s1 = q1;
			s0 = q0;
		}
		q2 = s2 / _const_strconv__c_ten;
		r1 = s2 % _const_strconv__c_ten;
		r2 = ((s1 >> 8) | (r1 << 24));
		q1 = r2 / _const_strconv__c_ten;
		r1 = r2 % _const_strconv__c_ten;
		r2 = (((((s1 & ((u32)(0xFFU)))) << 16) | (s0 >> 16)) | (r1 << 24));
		r0 = r2 / _const_strconv__c_ten;
		r1 = r2 % _const_strconv__c_ten;
		q1 = ((q1 << 8) | (((r0 & ((u32)(0x00FF0000U)))) >> 16));
		q0 = r0 << 16;
		r2 = (((s0 & ((u32)(0xFFFFU)))) | (r1 << 16));
		q0 |= r2 / _const_strconv__c_ten;
		s2 = q2;
		s1 = q1;
		s0 = q0;
		pn->exponent++;
	}
	if (s2 != 0 || s1 != 0 || s0 != 0) {
		for (;;) {
			if (!(((s2 & mask28)) == 0)) break;
			multi_return_u32_u32_u32 mr_7757 = strconv__lsl96(s2, s1, s0);
			q2 = mr_7757.arg0;
			q1 = mr_7757.arg1;
			q0 = mr_7757.arg2;
			binexp--;
			s2 = q2;
			s1 = q1;
			s0 = q0;
		}
	}
	int nbit = 7;
	u32 check_round_bit = ((u32)(1U)) << ((u32)(nbit));
	u32 check_round_mask = ((u32)(0xFFFFFFFFU)) << ((u32)(nbit));
	if (((s1 & check_round_bit)) != 0) {
		if (((s1 & ~check_round_mask)) != 0) {
			multi_return_u32_u32_u32 mr_8830 = strconv__add96(s2, s1, s0, 0, check_round_bit, 0);
			s2 = mr_8830.arg0;
			s1 = mr_8830.arg1;
			s0 = mr_8830.arg2;
		} else {
			if (((s1 & (check_round_bit << ((u32)(1U))))) != 0) {
				multi_return_u32_u32_u32 mr_9020 = strconv__add96(s2, s1, s0, 0, check_round_bit, 0);
				s2 = mr_9020.arg0;
				s1 = mr_9020.arg1;
				s0 = mr_9020.arg2;
			}
		}
		s1 = (s1 & check_round_mask);
		s0 = ((u32)(0U));
		if ((s2 & (mask28 << ((u32)(1U)))) != 0) {
			multi_return_u32_u32_u32 mr_9220 = strconv__lsr96(s2, s1, s0);
			q2 = mr_9220.arg0;
			q1 = mr_9220.arg1;
			q0 = mr_9220.arg2;
			binexp--;
			s2 = q2;
			s1 = q1;
			s0 = q0;
		}
	}
	binexp += 1023;
	if (binexp > 2046) {
		if (pn->negative) {
			result = _const_strconv__double_minus_infinity;
		} else {
			result = _const_strconv__double_plus_infinity;
		}
	} else if (binexp < 1) {
		if (pn->negative) {
			result = _const_strconv__double_minus_zero;
		} else {
			result = _const_strconv__double_plus_zero;
		}
	} else if (s2 != 0) {
		u64 q = ((u64)(0U));
		u64 binexs2 = ((u64)(binexp)) << 52;
		q = (((((u64)((s2 & ~mask28))) << 24) | ((((u64)(s1)) + ((u64)(128U))) >> 8)) | binexs2);
		if (pn->negative) {
			q |= (((u64)(1U)) << 63);
		}
		result = q;
	}
	return result;
}

f64 strconv__atof64(string s) {
	strconv__PrepNumber pn = (strconv__PrepNumber){.negative = 0,.exponent = 0,.mantissa = 0,};
	int res_parsing = 0;
	strconv__Float64u res = (strconv__Float64u){
#ifndef __cplusplus
0
#endif
};
	multi_return_int_strconv__PrepNumber mr_10225 = strconv__parser(string_add(s, tos_lit(" ")));
	res_parsing = mr_10225.arg0;
	pn = mr_10225.arg1;
	int _t9 = res_parsing;
	if (_t9 == _const_strconv__parser_ok) {
		res.u = strconv__converter((voidptr)&/*qq*/pn);
	} else if (_t9 == _const_strconv__parser_pzero) {
		res.u = _const_strconv__double_plus_zero;
	} else if (_t9 == _const_strconv__parser_mzero) {
		res.u = _const_strconv__double_minus_zero;
	} else if (_t9 == _const_strconv__parser_pinf) {
		res.u = _const_strconv__double_plus_infinity;
	} else if (_t9 == _const_strconv__parser_minf) {
		res.u = _const_strconv__double_minus_infinity;
	} else {
	};
	return res.f;
}

f64 strconv__atof_quick(string s) {
	strconv__Float64u f = (strconv__Float64u){
#ifndef __cplusplus
0
#endif
};
	f64 sign = ((f64)(1.0));
	int i = 0;
	for (;;) {
		if (!(i < s.len && string_at(s, i) == ' ')) break;
		i++;
	}
	if (i < s.len) {
		if (string_at(s, i) == '-') {
			sign = -1.0;
			i++;
		} else if (string_at(s, i) == '+') {
			i++;
		}
	}
	if (string_at(s, i) == 'i' && i + 2 < s.len && string_at(s, i + 1) == 'n' && string_at(s, i + 2) == 'f') {
		if (sign > 0.0) {
			f.u = _const_strconv__double_plus_infinity;
		} else {
			f.u = _const_strconv__double_minus_infinity;
		}
		return f.f;
	}
	for (;;) {
		if (!(i < s.len && string_at(s, i) == '0')) break;
		i++;
		if (i >= s.len) {
			if (sign > 0.0) {
				f.u = _const_strconv__double_plus_zero;
			} else {
				f.u = _const_strconv__double_minus_zero;
			}
			return f.f;
		}
	}
	for (;;) {
		if (!(i < s.len && (string_at(s, i) >= '0' && string_at(s, i) <= '9'))) break;
		f.f *= ((f64)(10.0));
		f.f += ((f64)(string_at(s, i) - '0'));
		i++;
	}
	if (i < s.len && string_at(s, i) == '.') {
		i++;
		f64 frac_mul = ((f64)(0.1));
		for (;;) {
			if (!(i < s.len && (string_at(s, i) >= '0' && string_at(s, i) <= '9'))) break;
			f.f += ((f64)(string_at(s, i) - '0')) * frac_mul;
			frac_mul *= ((f64)(0.1));
			i++;
		}
	}
	if (i < s.len && (string_at(s, i) == 'e' || string_at(s, i) == 'E')) {
		i++;
		int exp = 0;
		int exp_sign = 1;
		if (i < s.len) {
			if (string_at(s, i) == '-') {
				exp_sign = -1;
				i++;
			} else if (string_at(s, i) == '+') {
				i++;
			}
		}
		for (;;) {
			if (!(i < s.len && string_at(s, i) == '0')) break;
			i++;
		}
		for (;;) {
			if (!(i < s.len && (string_at(s, i) >= '0' && string_at(s, i) <= '9'))) break;
			exp *= 10;
			exp += ((int)(string_at(s, i) - '0'));
			i++;
		}
		if (exp_sign == 1) {
			if (exp > _const_strconv__pos_exp.len) {
				if (sign > 0) {
					f.u = _const_strconv__double_plus_infinity;
				} else {
					f.u = _const_strconv__double_minus_infinity;
				}
				return f.f;
			}
			strconv__Float64u tmp_mul = (strconv__Float64u){.u = (*(u64*)array_get(_const_strconv__pos_exp, exp)),};
			f.f = f.f * tmp_mul.f;
		} else {
			if (exp > _const_strconv__neg_exp.len) {
				if (sign > 0) {
					f.u = _const_strconv__double_plus_zero;
				} else {
					f.u = _const_strconv__double_minus_zero;
				}
				return f.f;
			}
			strconv__Float64u tmp_mul = (strconv__Float64u){.u = (*(u64*)array_get(_const_strconv__neg_exp, exp)),};
			f.f = f.f * tmp_mul.f;
		}
	}
	f.f = f.f * sign;
	return f.f;
}

byte strconv__byte_to_lower(byte c) {
	return (c | ('x' - 'X'));
}

u64 strconv__common_parse_uint(string s, int _base, int _bit_size, bool error_on_non_digit, bool error_on_high_digit) {
	multi_return_u64_int mr_816 = strconv__common_parse_uint2(s, _base, _bit_size);
	u64 result = mr_816.arg0;
	int v_error = mr_816.arg1;
	if (v_error != 0) {
		if (v_error > 0 && (error_on_non_digit || error_on_high_digit)) {
			return ((u64)(0U));
		}
	}
	return result;
}

multi_return_u64_int strconv__common_parse_uint2(string s, int _base, int _bit_size) {
	int bit_size = _bit_size;
	int base = _base;
	if (s.len < 1 || !strconv__underscore_ok(s)) {
		return (multi_return_u64_int){.arg0=((u64)(0U)), .arg1=1};
	}
	bool base0 = base == 0;
	int start_index = 0;
	if (2 <= base && base <= 36) {
	} else if (base == 0) {
		base = 10;
		if (string_at(s, 0) == '0') {
			if (s.len >= 3 && strconv__byte_to_lower(string_at(s, 1)) == 'b') {
				base = 2;
				start_index += 2;
			} else if (s.len >= 3 && strconv__byte_to_lower(string_at(s, 1)) == 'o') {
				base = 8;
				start_index += 2;
			} else if (s.len >= 3 && strconv__byte_to_lower(string_at(s, 1)) == 'x') {
				base = 16;
				start_index += 2;
			} else if (s.len >= 2 && (string_at(s, 1) >= '0' && string_at(s, 1) <= '9')) {
				base = 10;
				start_index++;
			} else {
				base = 8;
				start_index++;
			}
		}
	} else {
		return (multi_return_u64_int){.arg0=((u64)(0U)), .arg1=-1};
	}
	if (bit_size == 0) {
		bit_size = _const_strconv__int_size;
	} else if (bit_size < 0 || bit_size > 64) {
		return (multi_return_u64_int){.arg0=((u64)(0U)), .arg1=-2};
	}
	u64 cutoff = _const_strconv__max_u64 / ((u64)(base)) + ((u64)(1U));
	u64 max_val = (bit_size == 64 ? (_const_strconv__max_u64) : ((((u64)(1U)) << ((u64)(bit_size))) - ((u64)(1U))));
	u64 n = ((u64)(0U));
	for (int i = start_index; i < s.len; ++i) {
		byte c = string_at(s, i);
		byte cl = strconv__byte_to_lower(c);
		byte d = ((byte)(0));
		if (c == '_' && base0) {
			continue;
		} else if ('0' <= c && c <= '9') {
			d = c - '0';
		} else if ('a' <= cl && cl <= 'z') {
			d = cl - 'a' + 10;
		} else {
			return (multi_return_u64_int){.arg0=n, .arg1=i + 1};
		}
		if (d >= ((byte)(base))) {
			return (multi_return_u64_int){.arg0=n, .arg1=i + 1};
		}
		if (n >= cutoff) {
			return (multi_return_u64_int){.arg0=max_val, .arg1=-3};
		}
		n *= ((u64)(base));
		u64 n1 = n + ((u64)(d));
		if (n1 < n || n1 > max_val) {
			return (multi_return_u64_int){.arg0=max_val, .arg1=-3};
		}
		n = n1;
	}
	return (multi_return_u64_int){.arg0=n, .arg1=0};
}

u64 strconv__parse_uint(string s, int _base, int _bit_size) {
	return strconv__common_parse_uint(s, _base, _bit_size, true, true);
}

i64 strconv__common_parse_int(string _s, int base, int _bit_size, bool error_on_non_digit, bool error_on_high_digit) {
	string s = _s;
	int bit_size = _bit_size;
	if (s.len < 1) {
		return ((i64)(0));
	}
	bool neg = false;
	if (string_at(s, 0) == '+') {
		s = string_substr(s, 1, s.len);
	} else if (string_at(s, 0) == '-') {
		neg = true;
		s = string_substr(s, 1, s.len);
	}
	u64 un = strconv__common_parse_uint(s, base, bit_size, error_on_non_digit, error_on_high_digit);
	if (un == 0) {
		return ((i64)(0));
	}
	if (bit_size == 0) {
		bit_size = _const_strconv__int_size;
	}
	u64 cutoff = ((u64)(1U)) << ((u64)(bit_size - 1));
	if (!neg && un >= cutoff) {
		return ((i64)(cutoff - ((u64)(1U))));
	}
	if (neg && un > cutoff) {
		return -((i64)(cutoff));
	}
	return (neg ? (-((i64)(un))) : (((i64)(un))));
}

i64 strconv__parse_int(string _s, int base, int _bit_size) {
	return strconv__common_parse_int(_s, base, _bit_size, true, true);
}

int strconv__atoi(string s) {
	if ((_const_strconv__int_size == 32 && (0 < s.len && s.len < 10)) || (_const_strconv__int_size == 64 && (0 < s.len && s.len < 19))) {
		int start_idx = 0;
		if (string_at(s, 0) == '-' || string_at(s, 0) == '+') {
			start_idx++;
			if (s.len - start_idx < 1) {
				return 0;
			}
		}
		int n = 0;
		for (int i = start_idx; i < s.len; ++i) {
			rune ch = string_at(s, i) - '0';
			if (ch > 9) {
				return 0;
			}
			n = n * 10 + ((int)(ch));
		}
		return (string_at(s, 0) == '-' ? (-n) : (n));
	}
	i64 int64 = strconv__parse_int(s, 10, 0);
	return ((int)(int64));
}

static bool strconv__underscore_ok(string s) {
	rune saw = '^';
	int i = 0;
	if (s.len >= 1 && (string_at(s, 0) == '-' || string_at(s, 0) == '+')) {
		i++;
	}
	bool hex = false;
	if (s.len - i >= 2 && string_at(s, i) == '0' && (strconv__byte_to_lower(string_at(s, i + 1)) == 'b' || strconv__byte_to_lower(string_at(s, i + 1)) == 'o' || strconv__byte_to_lower(string_at(s, i + 1)) == 'x')) {
		saw = '0';
		hex = strconv__byte_to_lower(string_at(s, i + 1)) == 'x';
		i += 2;
	}
	for (; i < s.len; i++) {
		if (('0' <= string_at(s, i) && string_at(s, i) <= '9') || (hex && 'a' <= strconv__byte_to_lower(string_at(s, i)) && strconv__byte_to_lower(string_at(s, i)) <= 'f')) {
			saw = '0';
			continue;
		}
		if (string_at(s, i) == '_') {
			if (saw != '0') {
				return false;
			}
			saw = '_';
			continue;
		}
		if (saw == '_') {
			return false;
		}
		saw = '!';
	}
	return saw != '_';
}

string strconv__Dec32_get_string_32(strconv__Dec32 d, bool neg, int i_n_digit, int i_pad_digit) {
	int n_digit = i_n_digit + 1;
	int pad_digit = i_pad_digit + 1;
	u32 out = d.m;
	int out_len = strconv__decimal_len_32(out);
	int out_len_original = out_len;
	int fw_zeros = 0;
	if (pad_digit > out_len) {
		fw_zeros = pad_digit - out_len;
	}
	array_byte buf = __new_array_with_default(((int)(out_len + 5 + 1 + 1)), 0, sizeof(byte), 0);
	int i = 0;
	if (neg) {
		array_set(&buf, i, &(byte[]) { '-' });
		i++;
	}
	int disp = 0;
	if (out_len <= 1) {
		disp = 1;
	}
	if (n_digit < out_len) {
		out += (*(u32*)array_get(_const_strconv__ten_pow_table_32, out_len - n_digit - 1)) * 5;
		out /= (*(u32*)array_get(_const_strconv__ten_pow_table_32, out_len - n_digit));
		out_len = n_digit;
	}
	int y = i + out_len;
	int x = 0;
	for (;;) {
		if (!(x < (out_len - disp - 1))) break;
		array_set(&buf, y - x, &(byte[]) { '0' + ((byte)(out % 10)) });
		out /= 10;
		i++;
		x++;
	}
	if (out_len >= 1) {
		array_set(&buf, y - x, &(byte[]) { '.' });
		x++;
		i++;
	}
	if (y - x >= 0) {
		array_set(&buf, y - x, &(byte[]) { '0' + ((byte)(out % 10)) });
		i++;
	}
	for (;;) {
		if (!(fw_zeros > 0)) break;
		array_set(&buf, i++, &(byte[]) { '0' });
		fw_zeros--;
	}
	array_set(&buf, i, &(byte[]) { 'e' });
	i++;
	int exp = d.e + out_len_original - 1;
	if (exp < 0) {
		array_set(&buf, i, &(byte[]) { '-' });
		i++;
		exp = -exp;
	} else {
		array_set(&buf, i, &(byte[]) { '+' });
		i++;
	}
	int d1 = exp % 10;
	int d0 = exp / 10;
	array_set(&buf, i, &(byte[]) { '0' + ((byte)(d0)) });
	i++;
	array_set(&buf, i, &(byte[]) { '0' + ((byte)(d1)) });
	i++;
	array_set(&buf, i, &(byte[]) { 0 });
	return tos(((byteptr)(&(*(byte*)array_get(buf, 0)))), i);
}

static multi_return_strconv__Dec32_bool strconv__f32_to_decimal_exact_int(u32 i_mant, u32 exp) {
	strconv__Dec32 d = (strconv__Dec32){.m = 0,.e = 0,};
	u32 e = exp - _const_strconv__bias32;
	if (e > _const_strconv__mantbits32) {
		return (multi_return_strconv__Dec32_bool){.arg0=d, .arg1=false};
	}
	u32 shift = _const_strconv__mantbits32 - e;
	u32 mant = (i_mant | 0x00800000);
	d.m = mant >> shift;
	if ((d.m << shift) != mant) {
		return (multi_return_strconv__Dec32_bool){.arg0=d, .arg1=false};
	}
	for (;;) {
		if (!((d.m % 10) == 0)) break;
		d.m /= 10;
		d.e++;
	}
	return (multi_return_strconv__Dec32_bool){.arg0=d, .arg1=true};
}

strconv__Dec32 strconv__f32_to_decimal(u32 mant, u32 exp) {
	int e2 = 0;
	u32 m2 = ((u32)(0U));
	if (exp == 0) {
		e2 = 1 - _const_strconv__bias32 - ((int)(_const_strconv__mantbits32)) - 2;
		m2 = mant;
	} else {
		e2 = ((int)(exp)) - _const_strconv__bias32 - ((int)(_const_strconv__mantbits32)) - 2;
		m2 = ((((u32)(1U)) << _const_strconv__mantbits32) | mant);
	}
	bool even = ((m2 & 1)) == 0;
	bool accept_bounds = even;
	u32 mv = ((u32)(4 * m2));
	u32 mp = ((u32)(4 * m2 + 2));
	u32 mm_shift = strconv__bool_to_u32(mant != 0 || exp <= 1);
	u32 mm = ((u32)(4 * m2 - 1 - mm_shift));
	u32 vr = ((u32)(0U));
	u32 vp = ((u32)(0U));
	u32 vm = ((u32)(0U));
	int e10 = 0;
	bool vm_is_trailing_zeros = false;
	bool vr_is_trailing_zeros = false;
	byte last_removed_digit = ((byte)(0));
	if (e2 >= 0) {
		u32 q = strconv__log10_pow2(e2);
		e10 = ((int)(q));
		int k = _const_strconv__pow5_inv_num_bits_32 + strconv__pow5_bits(((int)(q))) - 1;
		int i = -e2 + ((int)(q)) + k;
		vr = strconv__mul_pow5_invdiv_pow2(mv, q, i);
		vp = strconv__mul_pow5_invdiv_pow2(mp, q, i);
		vm = strconv__mul_pow5_invdiv_pow2(mm, q, i);
		if (q != 0 && (vp - 1) / 10 <= vm / 10) {
			int l = _const_strconv__pow5_inv_num_bits_32 + strconv__pow5_bits(((int)(q - 1))) - 1;
			last_removed_digit = ((byte)(strconv__mul_pow5_invdiv_pow2(mv, q - 1, -e2 + ((int)(q - 1)) + l) % 10));
		}
		if (q <= 9) {
			if (mv % 5 == 0) {
				vr_is_trailing_zeros = strconv__multiple_of_power_of_five_32(mv, q);
			} else if (accept_bounds) {
				vm_is_trailing_zeros = strconv__multiple_of_power_of_five_32(mm, q);
			} else if (strconv__multiple_of_power_of_five_32(mp, q)) {
				vp--;
			}
		}
	} else {
		u32 q = strconv__log10_pow5(-e2);
		e10 = ((int)(q)) + e2;
		int i = -e2 - ((int)(q));
		int k = strconv__pow5_bits(i) - _const_strconv__pow5_num_bits_32;
		int j = ((int)(q)) - k;
		vr = strconv__mul_pow5_div_pow2(mv, ((u32)(i)), j);
		vp = strconv__mul_pow5_div_pow2(mp, ((u32)(i)), j);
		vm = strconv__mul_pow5_div_pow2(mm, ((u32)(i)), j);
		if (q != 0 && ((vp - 1) / 10) <= vm / 10) {
			j = ((int)(q)) - 1 - (strconv__pow5_bits(i + 1) - _const_strconv__pow5_num_bits_32);
			last_removed_digit = ((byte)(strconv__mul_pow5_div_pow2(mv, ((u32)(i + 1)), j) % 10));
		}
		if (q <= 1) {
			vr_is_trailing_zeros = true;
			if (accept_bounds) {
				vm_is_trailing_zeros = mm_shift == 1;
			} else {
				vp--;
			}
		} else if (q < 31) {
			vr_is_trailing_zeros = strconv__multiple_of_power_of_two_32(mv, q - 1);
		}
	}
	int removed = 0;
	u32 out = ((u32)(0U));
	if (vm_is_trailing_zeros || vr_is_trailing_zeros) {
		for (;;) {
			if (!(vp / 10 > vm / 10)) break;
			vm_is_trailing_zeros = vm_is_trailing_zeros && (vm % 10) == 0;
			vr_is_trailing_zeros = vr_is_trailing_zeros && (last_removed_digit == 0);
			last_removed_digit = ((byte)(vr % 10));
			vr /= 10;
			vp /= 10;
			vm /= 10;
			removed++;
		}
		if (vm_is_trailing_zeros) {
			for (;;) {
				if (!(vm % 10 == 0)) break;
				vr_is_trailing_zeros = vr_is_trailing_zeros && (last_removed_digit == 0);
				last_removed_digit = ((byte)(vr % 10));
				vr /= 10;
				vp /= 10;
				vm /= 10;
				removed++;
			}
		}
		if (vr_is_trailing_zeros && (last_removed_digit == 5) && (vr % 2) == 0) {
			last_removed_digit = 4;
		}
		out = vr;
		if ((vr == vm && (!accept_bounds || !vm_is_trailing_zeros)) || last_removed_digit >= 5) {
			out++;
		}
	} else {
		for (;;) {
			if (!(vp / 10 > vm / 10)) break;
			last_removed_digit = ((byte)(vr % 10));
			vr /= 10;
			vp /= 10;
			vm /= 10;
			removed++;
		}
		out = vr + strconv__bool_to_u32(vr == vm || last_removed_digit >= 5);
	}
	return (strconv__Dec32){.m = out,.e = e10 + removed,};
}

string strconv__f32_to_str(f32 f, int n_digit) {
	strconv__Uf32 u1 = (strconv__Uf32){
#ifndef __cplusplus
0
#endif
};
	u1.f = f;
	u32 u = u1.u;
	bool neg = (u >> (_const_strconv__mantbits32 + _const_strconv__expbits32)) != 0;
	u32 mant = (u & ((((u32)(1U)) << _const_strconv__mantbits32) - ((u32)(1U))));
	u32 exp = ((u >> _const_strconv__mantbits32) & ((((u32)(1U)) << _const_strconv__expbits32) - ((u32)(1U))));
	if ((exp == _const_strconv__maxexp32) || (exp == 0 && mant == 0)) {
		return strconv__get_string_special(neg, exp == 0, mant == 0);
	}
	multi_return_strconv__Dec32_bool mr_7979 = strconv__f32_to_decimal_exact_int(mant, exp);
	strconv__Dec32 d = mr_7979.arg0;
	bool ok = mr_7979.arg1;
	if (!ok) {
		d = strconv__f32_to_decimal(mant, exp);
	}
	return strconv__Dec32_get_string_32(d, neg, n_digit, 0);
}

string strconv__f32_to_str_pad(f32 f, int n_digit) {
	strconv__Uf32 u1 = (strconv__Uf32){
#ifndef __cplusplus
0
#endif
};
	u1.f = f;
	u32 u = u1.u;
	bool neg = (u >> (_const_strconv__mantbits32 + _const_strconv__expbits32)) != 0;
	u32 mant = (u & ((((u32)(1U)) << _const_strconv__mantbits32) - ((u32)(1U))));
	u32 exp = ((u >> _const_strconv__mantbits32) & ((((u32)(1U)) << _const_strconv__expbits32) - ((u32)(1U))));
	if ((exp == _const_strconv__maxexp32) || (exp == 0 && mant == 0)) {
		return strconv__get_string_special(neg, exp == 0, mant == 0);
	}
	multi_return_strconv__Dec32_bool mr_8687 = strconv__f32_to_decimal_exact_int(mant, exp);
	strconv__Dec32 d = mr_8687.arg0;
	bool ok = mr_8687.arg1;
	if (!ok) {
		d = strconv__f32_to_decimal(mant, exp);
	}
	return strconv__Dec32_get_string_32(d, neg, n_digit, n_digit);
}

static string strconv__Dec64_get_string_64(strconv__Dec64 d, bool neg, int i_n_digit, int i_pad_digit) {
	int n_digit = i_n_digit + 1;
	int pad_digit = i_pad_digit + 1;
	u64 out = d.m;
	int d_exp = d.e;
	int out_len = strconv__decimal_len_64(out);
	int out_len_original = out_len;
	int fw_zeros = 0;
	if (pad_digit > out_len) {
		fw_zeros = pad_digit - out_len;
	}
	array_byte buf = __new_array_with_default((out_len + 6 + 1 + 1 + fw_zeros), 0, sizeof(byte), 0);
	int i = 0;
	if (neg) {
		array_set(&buf, i, &(byte[]) { '-' });
		i++;
	}
	int disp = 0;
	if (out_len <= 1) {
		disp = 1;
	}
	if (n_digit < out_len) {
		out += (*(u64*)array_get(_const_strconv__ten_pow_table_64, out_len - n_digit - 1)) * 5;
		out /= (*(u64*)array_get(_const_strconv__ten_pow_table_64, out_len - n_digit));
		if (d.m / (*(u64*)array_get(_const_strconv__ten_pow_table_64, out_len - n_digit)) < out) {
			d_exp++;
			n_digit++;
		}
		out_len = n_digit;
	}
	int y = i + out_len;
	int x = 0;
	for (;;) {
		if (!(x < (out_len - disp - 1))) break;
		array_set(&buf, y - x, &(byte[]) { '0' + ((byte)(out % 10)) });
		out /= 10;
		i++;
		x++;
	}
	if (out_len >= 1) {
		array_set(&buf, y - x, &(byte[]) { '.' });
		x++;
		i++;
	}
	if (y - x >= 0) {
		array_set(&buf, y - x, &(byte[]) { '0' + ((byte)(out % 10)) });
		i++;
	}
	for (;;) {
		if (!(fw_zeros > 0)) break;
		array_set(&buf, i++, &(byte[]) { '0' });
		fw_zeros--;
	}
	array_set(&buf, i, &(byte[]) { 'e' });
	i++;
	int exp = d_exp + out_len_original - 1;
	if (exp < 0) {
		array_set(&buf, i, &(byte[]) { '-' });
		i++;
		exp = -exp;
	} else {
		array_set(&buf, i, &(byte[]) { '+' });
		i++;
	}
	int d2 = exp % 10;
	exp /= 10;
	int d1 = exp % 10;
	int d0 = exp / 10;
	if (d0 > 0) {
		array_set(&buf, i, &(byte[]) { '0' + ((byte)(d0)) });
		i++;
	}
	array_set(&buf, i, &(byte[]) { '0' + ((byte)(d1)) });
	i++;
	array_set(&buf, i, &(byte[]) { '0' + ((byte)(d2)) });
	i++;
	array_set(&buf, i, &(byte[]) { 0 });
	return tos(((byteptr)(&(*(byte*)array_get(buf, 0)))), i);
}

static multi_return_strconv__Dec64_bool strconv__f64_to_decimal_exact_int(u64 i_mant, u64 exp) {
	strconv__Dec64 d = (strconv__Dec64){.m = 0,.e = 0,};
	u64 e = exp - _const_strconv__bias64;
	if (e > _const_strconv__mantbits64) {
		return (multi_return_strconv__Dec64_bool){.arg0=d, .arg1=false};
	}
	u64 shift = _const_strconv__mantbits64 - e;
	u64 mant = (i_mant | ((u64)(0x0010000000000000U)));
	d.m = mant >> shift;
	if ((d.m << shift) != mant) {
		return (multi_return_strconv__Dec64_bool){.arg0=d, .arg1=false};
	}
	for (;;) {
		if (!((d.m % 10) == 0)) break;
		d.m /= 10;
		d.e++;
	}
	return (multi_return_strconv__Dec64_bool){.arg0=d, .arg1=true};
}

static strconv__Dec64 strconv__f64_to_decimal(u64 mant, u64 exp) {
	int e2 = 0;
	u64 m2 = ((u64)(0U));
	if (exp == 0) {
		e2 = 1 - _const_strconv__bias64 - ((int)(_const_strconv__mantbits64)) - 2;
		m2 = mant;
	} else {
		e2 = ((int)(exp)) - _const_strconv__bias64 - ((int)(_const_strconv__mantbits64)) - 2;
		m2 = ((((u64)(1U)) << _const_strconv__mantbits64) | mant);
	}
	bool even = ((m2 & 1)) == 0;
	bool accept_bounds = even;
	u64 mv = ((u64)(4 * m2));
	u64 mm_shift = strconv__bool_to_u64(mant != 0 || exp <= 1);
	u64 vr = ((u64)(0U));
	u64 vp = ((u64)(0U));
	u64 vm = ((u64)(0U));
	int e10 = 0;
	bool vm_is_trailing_zeros = false;
	bool vr_is_trailing_zeros = false;
	if (e2 >= 0) {
		u32 q = strconv__log10_pow2(e2) - strconv__bool_to_u32(e2 > 3);
		e10 = ((int)(q));
		int k = _const_strconv__pow5_inv_num_bits_64 + strconv__pow5_bits(((int)(q))) - 1;
		int i = -e2 + ((int)(q)) + k;
		strconv__Uint128 mul = (*(strconv__Uint128*)array_get(_const_strconv__pow5_inv_split_64, q));
		vr = strconv__mul_shift_64(((u64)(4U)) * m2, mul, i);
		vp = strconv__mul_shift_64(((u64)(4U)) * m2 + ((u64)(2U)), mul, i);
		vm = strconv__mul_shift_64(((u64)(4U)) * m2 - ((u64)(1U)) - mm_shift, mul, i);
		if (q <= 21) {
			if (mv % 5 == 0) {
				vr_is_trailing_zeros = strconv__multiple_of_power_of_five_64(mv, q);
			} else if (accept_bounds) {
				vm_is_trailing_zeros = strconv__multiple_of_power_of_five_64(mv - 1 - mm_shift, q);
			} else if (strconv__multiple_of_power_of_five_64(mv + 2, q)) {
				vp--;
			}
		}
	} else {
		u32 q = strconv__log10_pow5(-e2) - strconv__bool_to_u32(-e2 > 1);
		e10 = ((int)(q)) + e2;
		int i = -e2 - ((int)(q));
		int k = strconv__pow5_bits(i) - _const_strconv__pow5_num_bits_64;
		int j = ((int)(q)) - k;
		strconv__Uint128 mul = (*(strconv__Uint128*)array_get(_const_strconv__pow5_split_64, i));
		vr = strconv__mul_shift_64(((u64)(4U)) * m2, mul, j);
		vp = strconv__mul_shift_64(((u64)(4U)) * m2 + ((u64)(2U)), mul, j);
		vm = strconv__mul_shift_64(((u64)(4U)) * m2 - ((u64)(1U)) - mm_shift, mul, j);
		if (q <= 1) {
			vr_is_trailing_zeros = true;
			if (accept_bounds) {
				vm_is_trailing_zeros = (mm_shift == 1);
			} else {
				vp--;
			}
		} else if (q < 63) {
			vr_is_trailing_zeros = strconv__multiple_of_power_of_two_64(mv, q - 1);
		}
	}
	int removed = 0;
	byte last_removed_digit = ((byte)(0));
	u64 out = ((u64)(0U));
	if (vm_is_trailing_zeros || vr_is_trailing_zeros) {
		for (;;) {
			u64 vp_div_10 = vp / 10;
			u64 vm_div_10 = vm / 10;
			if (vp_div_10 <= vm_div_10) {
				break;
			}
			u64 vm_mod_10 = vm % 10;
			u64 vr_div_10 = vr / 10;
			u64 vr_mod_10 = vr % 10;
			vm_is_trailing_zeros = vm_is_trailing_zeros && vm_mod_10 == 0;
			vr_is_trailing_zeros = vr_is_trailing_zeros && (last_removed_digit == 0);
			last_removed_digit = ((byte)(vr_mod_10));
			vr = vr_div_10;
			vp = vp_div_10;
			vm = vm_div_10;
			removed++;
		}
		if (vm_is_trailing_zeros) {
			for (;;) {
				u64 vm_div_10 = vm / 10;
				u64 vm_mod_10 = vm % 10;
				if (vm_mod_10 != 0) {
					break;
				}
				u64 vp_div_10 = vp / 10;
				u64 vr_div_10 = vr / 10;
				u64 vr_mod_10 = vr % 10;
				vr_is_trailing_zeros = vr_is_trailing_zeros && (last_removed_digit == 0);
				last_removed_digit = ((byte)(vr_mod_10));
				vr = vr_div_10;
				vp = vp_div_10;
				vm = vm_div_10;
				removed++;
			}
		}
		if (vr_is_trailing_zeros && (last_removed_digit == 5) && (vr % 2) == 0) {
			last_removed_digit = 4;
		}
		out = vr;
		if ((vr == vm && (!accept_bounds || !vm_is_trailing_zeros)) || last_removed_digit >= 5) {
			out++;
		}
	} else {
		bool round_up = false;
		for (;;) {
			if (!(vp / 100 > vm / 100)) break;
			round_up = (vr % 100) >= 50;
			vr /= 100;
			vp /= 100;
			vm /= 100;
			removed += 2;
		}
		for (;;) {
			if (!(vp / 10 > vm / 10)) break;
			round_up = (vr % 10) >= 5;
			vr /= 10;
			vp /= 10;
			vm /= 10;
			removed++;
		}
		out = vr + strconv__bool_to_u64(vr == vm || round_up);
	}
	return (strconv__Dec64){.m = out,.e = e10 + removed,};
}

string strconv__f64_to_str(f64 f, int n_digit) {
	strconv__Uf64 u1 = (strconv__Uf64){
#ifndef __cplusplus
0
#endif
};
	u1.f = f;
	u64 u = u1.u;
	bool neg = (u >> (_const_strconv__mantbits64 + _const_strconv__expbits64)) != 0;
	u64 mant = (u & ((((u64)(1U)) << _const_strconv__mantbits64) - ((u64)(1U))));
	u64 exp = ((u >> _const_strconv__mantbits64) & ((((u64)(1U)) << _const_strconv__expbits64) - ((u64)(1U))));
	if ((exp == _const_strconv__maxexp64) || (exp == 0 && mant == 0)) {
		return strconv__get_string_special(neg, exp == 0, mant == 0);
	}
	multi_return_strconv__Dec64_bool mr_9686 = strconv__f64_to_decimal_exact_int(mant, exp);
	strconv__Dec64 d = mr_9686.arg0;
	bool ok = mr_9686.arg1;
	if (!ok) {
		d = strconv__f64_to_decimal(mant, exp);
	}
	return strconv__Dec64_get_string_64(d, neg, n_digit, 0);
}

string strconv__f64_to_str_pad(f64 f, int n_digit) {
	strconv__Uf64 u1 = (strconv__Uf64){
#ifndef __cplusplus
0
#endif
};
	u1.f = f;
	u64 u = u1.u;
	bool neg = (u >> (_const_strconv__mantbits64 + _const_strconv__expbits64)) != 0;
	u64 mant = (u & ((((u64)(1U)) << _const_strconv__mantbits64) - ((u64)(1U))));
	u64 exp = ((u >> _const_strconv__mantbits64) & ((((u64)(1U)) << _const_strconv__expbits64) - ((u64)(1U))));
	if ((exp == _const_strconv__maxexp64) || (exp == 0 && mant == 0)) {
		return strconv__get_string_special(neg, exp == 0, mant == 0);
	}
	multi_return_strconv__Dec64_bool mr_10422 = strconv__f64_to_decimal_exact_int(mant, exp);
	strconv__Dec64 d = mr_10422.arg0;
	bool ok = mr_10422.arg1;
	if (!ok) {
		d = strconv__f64_to_decimal(mant, exp);
	}
	return strconv__Dec64_get_string_64(d, neg, n_digit, n_digit);
}

string strconv__f64_to_str_lnd(f64 f, int dec_digit) {
	string s = strconv__f64_to_str(f + (*(f64*)array_get(_const_strconv__dec_round, dec_digit)), 18);
	if (s.len > 2 && (string_at(s, 0) == 'n' || string_at(s, 1) == 'i')) {
		return s;
	}
	bool m_sgn_flag = false;
	int sgn = 1;
	array_fixed_byte_26 b = {0};
	int d_pos = 1;
	int i = 0;
	int i1 = 0;
	int exp = 0;
	int exp_sgn = 1;
	int dot_res_sp = -1;
	for (int _t10 = 0; _t10 < s.len; ++_t10) {
		byte c = s.str[_t10];
		if (c == '-') {
			sgn = -1;
			i++;
		} else if (c == '+') {
			sgn = 1;
			i++;
		} else if (c >= '0' && c <= '9') {
			b[i1++] = c;
			i++;
		} else if (c == '.') {
			if (sgn > 0) {
				d_pos = i;
			} else {
				d_pos = i - 1;
			}
			i++;
		} else if (c == 'e') {
			i++;
			break;
		} else {
			return tos_lit("[Float conversion error!!]");
		}
	}
	b[i1] = 0;
	if (string_at(s, i) == '-') {
		exp_sgn = -1;
		i++;
	} else if (string_at(s, i) == '+') {
		exp_sgn = 1;
		i++;
	}
	for (int _t11 = 0; _t11 < string_substr(s, i, s.len).len; ++_t11) {
		byte c = string_substr(s, i, s.len).str[_t11];
		exp = exp * 10 + ((int)(c - '0'));
	}
	array_byte res = __new_array_with_default(exp + 32, 0, sizeof(byte), &(byte[]){0});
	int r_i = 0;
	if (sgn == 1) {
		if (m_sgn_flag) {
			array_set(&res, r_i++, &(byte[]) { '+' });
		}
	} else {
		array_set(&res, r_i++, &(byte[]) { '-' });
	}
	i = 0;
	if (exp_sgn >= 0) {
		for (;;) {
			if (!(b[i] != 0)) break;
			array_set(&res, r_i++, &(byte[]) { b[i] });
			i++;
			if (i >= d_pos && exp >= 0) {
				if (exp == 0) {
					dot_res_sp = r_i;
					array_set(&res, r_i++, &(byte[]) { '.' });
				}
				exp--;
			}
		}
		for (;;) {
			if (!(exp >= 0)) break;
			array_set(&res, r_i++, &(byte[]) { '0' });
			exp--;
		}
	} else {
		bool dot_p = true;
		for (;;) {
			if (!(exp > 0)) break;
			array_set(&res, r_i++, &(byte[]) { '0' });
			exp--;
			if (dot_p) {
				dot_res_sp = r_i;
				array_set(&res, r_i++, &(byte[]) { '.' });
				dot_p = false;
			}
		}
		for (;;) {
			if (!(b[i] != 0)) break;
			array_set(&res, r_i++, &(byte[]) { b[i] });
			i++;
		}
	}
	if (dot_res_sp >= 0) {
		if ((r_i - dot_res_sp) > dec_digit) {
			r_i = dot_res_sp + dec_digit + 1;
		}
		array_set(&res, r_i, &(byte[]) { 0 });
		return tos(res.data, r_i);
	} else {
		if (dec_digit > 0) {
			int c = 0;
			array_set(&res, r_i++, &(byte[]) { '.' });
			for (;;) {
				if (!(c < dec_digit)) break;
				array_set(&res, r_i++, &(byte[]) { '0' });
				c++;
			}
			array_set(&res, r_i, &(byte[]) { 0 });
		}
		return tos(res.data, r_i);
	}
	return (string){.str=(byteptr)""};
}

string strconv__format_str(string s, strconv__BF_param p) {
	int dif = p.len0 - s.len;
	if (dif <= 0) {
		return s;
	}
	strings__Builder res = strings__new_builder(s.len + dif);
	if (p.allign == strconv__Align_text_right) {
		for (int i1 = 0; i1 < dif; i1++) {
			strings__Builder_write_b(&res, p.pad_ch);
		}
	}
	strings__Builder_write(&res, s);
	if (p.allign == strconv__Align_text_left) {
		for (int i1 = 0; i1 < dif; i1++) {
			strings__Builder_write_b(&res, p.pad_ch);
		}
	}
	return strings__Builder_str(&res);
}

string strconv__format_dec(u64 d, strconv__BF_param p) {
	string s = tos_lit("");
	strings__Builder res = strings__new_builder(20);
	int sign_len_diff = 0;
	if (p.pad_ch == '0') {
		if (p.positive) {
			if (p.sign_flag) {
				strings__Builder_write_b(&res, '+');
				sign_len_diff = -1;
			}
		} else {
			strings__Builder_write_b(&res, '-');
			sign_len_diff = -1;
		}
		s = u64_str(d);
	} else {
		if (p.positive) {
			if (p.sign_flag) {
				s = string_add(tos_lit("+"), u64_str(d));
			} else {
				s = u64_str(d);
			}
		} else {
			s = string_add(tos_lit("-"), u64_str(d));
		}
	}
	int dif = p.len0 - s.len + sign_len_diff;
	if (p.allign == strconv__Align_text_right) {
		for (int i1 = 0; i1 < dif; i1++) {
			strings__Builder_write_b(&res, p.pad_ch);
		}
	}
	strings__Builder_write(&res, s);
	if (p.allign == strconv__Align_text_left) {
		for (int i1 = 0; i1 < dif; i1++) {
			strings__Builder_write_b(&res, p.pad_ch);
		}
	}
	return strings__Builder_str(&res);
}

string strconv__format_fl(f64 f, strconv__BF_param p) {
	string s = tos_lit("");
	string fs = strconv__f64_to_str_lnd((f >= 0.0 ? (f) : (-f)), p.len1);
	if (string_at(fs, 0) == '[') {
		return fs;
	}
	if (p.rm_tail_zero) {
		fs = strconv__remove_tail_zeros(fs);
	}
	strings__Builder res = strings__new_builder((p.len0 > fs.len ? (p.len0) : (fs.len)));
	int sign_len_diff = 0;
	if (p.pad_ch == '0') {
		if (p.positive) {
			if (p.sign_flag) {
				strings__Builder_write_b(&res, '+');
				sign_len_diff = -1;
			}
		} else {
			strings__Builder_write_b(&res, '-');
			sign_len_diff = -1;
		}
		s = fs;
	} else {
		if (p.positive) {
			if (p.sign_flag) {
				s = string_add(tos_lit("+"), fs);
			} else {
				s = fs;
			}
		} else {
			s = string_add(tos_lit("-"), fs);
		}
	}
	int dif = p.len0 - s.len + sign_len_diff;
	if (p.allign == strconv__Align_text_right) {
		for (int i1 = 0; i1 < dif; i1++) {
			strings__Builder_write_b(&res, p.pad_ch);
		}
	}
	strings__Builder_write(&res, s);
	if (p.allign == strconv__Align_text_left) {
		for (int i1 = 0; i1 < dif; i1++) {
			strings__Builder_write_b(&res, p.pad_ch);
		}
	}
	return strings__Builder_str(&res);
}

string strconv__format_es(f64 f, strconv__BF_param p) {
	string s = tos_lit("");
	string fs = strconv__f64_to_str_pad((f > 0 ? (f) : (-f)), p.len1);
	if (p.rm_tail_zero) {
		fs = strconv__remove_tail_zeros(fs);
	}
	strings__Builder res = strings__new_builder((p.len0 > fs.len ? (p.len0) : (fs.len)));
	int sign_len_diff = 0;
	if (p.pad_ch == '0') {
		if (p.positive) {
			if (p.sign_flag) {
				strings__Builder_write_b(&res, '+');
				sign_len_diff = -1;
			}
		} else {
			strings__Builder_write_b(&res, '-');
			sign_len_diff = -1;
		}
		s = fs;
	} else {
		if (p.positive) {
			if (p.sign_flag) {
				s = string_add(tos_lit("+"), fs);
			} else {
				s = fs;
			}
		} else {
			s = string_add(tos_lit("-"), fs);
		}
	}
	int dif = p.len0 - s.len + sign_len_diff;
	if (p.allign == strconv__Align_text_right) {
		for (int i1 = 0; i1 < dif; i1++) {
			strings__Builder_write_b(&res, p.pad_ch);
		}
	}
	strings__Builder_write(&res, s);
	if (p.allign == strconv__Align_text_left) {
		for (int i1 = 0; i1 < dif; i1++) {
			strings__Builder_write_b(&res, p.pad_ch);
		}
	}
	return strings__Builder_str(&res);
}

string strconv__remove_tail_zeros(string s) {
	int i = 0;
	int last_zero_start = -1;
	int dot_pos = -1;
	bool in_decimal = false;
	byte prev_ch = ((byte)(0));
	for (;;) {
		if (!(i < s.len)) break;
		byte ch = s.str[i];
		if (ch == '.') {
			in_decimal = true;
			dot_pos = i;
		} else if (in_decimal) {
			if (ch == '0' && prev_ch != '0') {
				last_zero_start = i;
			} else if (ch >= '1' && ch <= '9') {
				last_zero_start = -1;
			} else if (ch == 'e') {
				break;
			}
		}
		prev_ch = ch;
		i++;
	}
	string tmp = tos_lit("");
	if (last_zero_start > 0) {
		if (last_zero_start == dot_pos + 1) {
			tmp = string_add(string_substr(s, 0, dot_pos), string_substr(s, i, s.len));
		} else {
			tmp = string_add(string_substr(s, 0, last_zero_start), string_substr(s, i, s.len));
		}
	} else {
		tmp = s;
	}
	if (tmp.str[tmp.len - 1] == '.') {
		return string_substr(tmp, 0, tmp.len - 1);
	}
	return tmp;
}

void strconv__v_printf(string str, varg_voidptr pt) {
	print(strconv__v_sprintf(str, pt));
}

string strconv__v_sprintf(string str, varg_voidptr pt) {
	strings__Builder res = strings__new_builder(pt.len * 16);
	int i = 0;
	int p_index = 0;
	bool sign = false;
	strconv__Align_text allign = strconv__Align_text_right;
	int len0 = -1;
	int len1 = -1;
	int def_len1 = 6;
	byte pad_ch = ((byte)(' '));
	rune ch1 = '0';
	rune ch2 = '0';
	strconv__Char_parse_state status = strconv__Char_parse_state_norm_char;
	for (;;) {
		if (!(i < str.len)) break;
		if (status == strconv__Char_parse_state_reset_params) {
			sign = false;
			allign = strconv__Align_text_right;
			len0 = -1;
			len1 = -1;
			pad_ch = ' ';
			status = strconv__Char_parse_state_norm_char;
			ch1 = '0';
			ch2 = '0';
			continue;
		}
		byte ch = string_at(str, i);
		if (ch != '%' && status == strconv__Char_parse_state_norm_char) {
			strings__Builder_write_b(&res, ch);
			i++;
			continue;
		}
		if (ch == '%' && status == strconv__Char_parse_state_norm_char) {
			status = strconv__Char_parse_state_field_char;
			i++;
			continue;
		}
		if (ch == 'c' && status == strconv__Char_parse_state_field_char) {
			strconv__v_sprintf_panic(p_index, pt.len);
			byte d1 = *(((byte*)(pt.args[p_index])));
			strings__Builder_write_b(&res, d1);
			status = strconv__Char_parse_state_reset_params;
			p_index++;
			i++;
			continue;
		}
		if (ch == 'p' && status == strconv__Char_parse_state_field_char) {
			strconv__v_sprintf_panic(p_index, pt.len);
			strings__Builder_write(&res, tos_lit("0x"));
			strings__Builder_write(&res, ptr_str(pt.args[p_index]));
			status = strconv__Char_parse_state_reset_params;
			p_index++;
			i++;
			continue;
		}
		if (status == strconv__Char_parse_state_field_char) {
			rune fc_ch1 = '0';
			rune fc_ch2 = '0';
			if ((i + 1) < str.len) {
				fc_ch1 = string_at(str, i + 1);
				if ((i + 2) < str.len) {
					fc_ch2 = string_at(str, i + 2);
				}
			}
			if (ch == '+') {
				sign = true;
				i++;
				continue;
			} else if (ch == '-') {
				allign = strconv__Align_text_left;
				i++;
				continue;
			} else if ((ch == '0' || ch == ' ')) {
				if (allign == strconv__Align_text_right) {
					pad_ch = ch;
				}
				i++;
				continue;
			} else if (ch == '\'') {
				i++;
				continue;
			} else if (ch == '.' && fc_ch1 >= '1' && fc_ch1 <= '9') {
				status = strconv__Char_parse_state_check_float;
				i++;
				continue;
			} else if (ch == '.' && fc_ch1 == '*' && fc_ch2 == 's') {
				strconv__v_sprintf_panic(p_index, pt.len);
				int len = *(((int*)(pt.args[p_index])));
				p_index++;
				strconv__v_sprintf_panic(p_index, pt.len);
				string s = *(((string*)(pt.args[p_index])));
				s = string_substr(s, 0, len);
				p_index++;
				strings__Builder_write(&res, s);
				status = strconv__Char_parse_state_reset_params;
				i += 3;
				continue;
			}
			status = strconv__Char_parse_state_len_set_start;
			continue;
		}
		if (status == strconv__Char_parse_state_len_set_start) {
			if (ch >= '1' && ch <= '9') {
				len0 = ((int)(ch - '0'));
				status = strconv__Char_parse_state_len_set_in;
				i++;
				continue;
			}
			if (ch == '.') {
				status = strconv__Char_parse_state_check_float;
				i++;
				continue;
			}
			status = strconv__Char_parse_state_check_type;
			continue;
		}
		if (status == strconv__Char_parse_state_len_set_in) {
			if (ch >= '0' && ch <= '9') {
				len0 *= 10;
				len0 += ((int)(ch - '0'));
				i++;
				continue;
			}
			if (ch == '.') {
				status = strconv__Char_parse_state_check_float;
				i++;
				continue;
			}
			status = strconv__Char_parse_state_check_type;
			continue;
		}
		if (status == strconv__Char_parse_state_check_float) {
			if (ch >= '0' && ch <= '9') {
				len1 = ((int)(ch - '0'));
				status = strconv__Char_parse_state_check_float_in;
				i++;
				continue;
			}
			status = strconv__Char_parse_state_check_type;
			continue;
		}
		if (status == strconv__Char_parse_state_check_float_in) {
			if (ch >= '0' && ch <= '9') {
				len1 *= 10;
				len1 += ((int)(ch - '0'));
				i++;
				continue;
			}
			status = strconv__Char_parse_state_check_type;
			continue;
		}
		if (status == strconv__Char_parse_state_check_type) {
			if (ch == 'l') {
				if (ch1 == '0') {
					ch1 = 'l';
					i++;
					continue;
				} else {
					ch2 = 'l';
					i++;
					continue;
				}
			} else if (ch == 'h') {
				if (ch1 == '0') {
					ch1 = 'h';
					i++;
					continue;
				} else {
					ch2 = 'h';
					i++;
					continue;
				}
			} else if ((ch == 'd' || ch == 'i')) {
				u64 d1 = ((u64)(0U));
				bool positive = true;
				rune _t12 = ch1;
				if (_t12 == 'h') {
					if (ch2 == 'h') {
						strconv__v_sprintf_panic(p_index, pt.len);
						i8 x = *(((i8*)(pt.args[p_index])));
						positive = (x >= 0 ? (true) : (false));
						d1 = (positive ? (((u64)(x))) : (((u64)(-x))));
					} else {
						i16 x = *(((i16*)(pt.args[p_index])));
						positive = (x >= 0 ? (true) : (false));
						d1 = (positive ? (((u64)(x))) : (((u64)(-x))));
					}
				} else if (_t12 == 'l') {
					strconv__v_sprintf_panic(p_index, pt.len);
					i64 x = *(((i64*)(pt.args[p_index])));
					positive = (x >= 0 ? (true) : (false));
					d1 = (positive ? (((u64)(x))) : (((u64)(-x))));
				} else {
					strconv__v_sprintf_panic(p_index, pt.len);
					int x = *(((int*)(pt.args[p_index])));
					positive = (x >= 0 ? (true) : (false));
					d1 = (positive ? (((u64)(x))) : (((u64)(-x))));
				};
				strings__Builder_write(&res, strconv__format_dec(d1, (strconv__BF_param){
					.pad_ch = pad_ch,
					.len0 = len0,
					.len1 = 0,
					.positive = positive,
					.sign_flag = sign,
					.allign = allign,
					.rm_tail_zero = 0,
				}));
				status = strconv__Char_parse_state_reset_params;
				p_index++;
				i++;
				ch1 = '0';
				ch2 = '0';
				continue;
			} else if (ch == 'u') {
				u64 d1 = ((u64)(0U));
				bool positive = true;
				strconv__v_sprintf_panic(p_index, pt.len);
				rune _t13 = ch1;
				if (_t13 == 'h') {
					if (ch2 == 'h') {
						d1 = ((u64)(*(((byte*)(pt.args[p_index])))));
					} else {
						d1 = ((u64)(*(((u16*)(pt.args[p_index])))));
					}
				} else if (_t13 == 'l') {
					d1 = ((u64)(*(((u64*)(pt.args[p_index])))));
				} else {
					d1 = ((u64)(*(((u32*)(pt.args[p_index])))));
				};
				strings__Builder_write(&res, strconv__format_dec(d1, (strconv__BF_param){
					.pad_ch = pad_ch,
					.len0 = len0,
					.len1 = 0,
					.positive = positive,
					.sign_flag = sign,
					.allign = allign,
					.rm_tail_zero = 0,
				}));
				status = strconv__Char_parse_state_reset_params;
				p_index++;
				i++;
				continue;
			} else if ((ch == 'x' || ch == 'X')) {
				strconv__v_sprintf_panic(p_index, pt.len);
				string s = tos_lit("");
				rune _t14 = ch1;
				if (_t14 == 'h') {
					if (ch2 == 'h') {
						i8 x = *(((i8*)(pt.args[p_index])));
						s = i8_hex(x);
					} else {
						i16 x = *(((i16*)(pt.args[p_index])));
						s = i16_hex(x);
					}
				} else if (_t14 == 'l') {
					i64 x = *(((i64*)(pt.args[p_index])));
					s = i64_hex(x);
				} else {
					int x = *(((int*)(pt.args[p_index])));
					s = int_hex(x);
				};
				if (ch == 'X') {
					s = string_to_upper(s);
				}
				strings__Builder_write(&res, strconv__format_str(s, (strconv__BF_param){
					.pad_ch = pad_ch,
					.len0 = len0,
					.len1 = 0,
					.positive = true,
					.sign_flag = false,
					.allign = allign,
					.rm_tail_zero = 0,
				}));
				status = strconv__Char_parse_state_reset_params;
				p_index++;
				i++;
				continue;
			}
			if ((ch == 'f' || ch == 'F')) {
				strconv__v_sprintf_panic(p_index, pt.len);
				f64 x = *(((f64*)(pt.args[p_index])));
				bool positive = x >= ((f64)(0.0));
				len1 = (len1 >= 0 ? (len1) : (def_len1));
				string s = strconv__format_fl(((f64)(x)), (strconv__BF_param){
					.pad_ch = pad_ch,
					.len0 = len0,
					.len1 = len1,
					.positive = positive,
					.sign_flag = sign,
					.allign = allign,
					.rm_tail_zero = 0,
				});
				strings__Builder_write(&res, (ch == 'F' ? (string_to_upper(s)) : (s)));
				status = strconv__Char_parse_state_reset_params;
				p_index++;
				i++;
				continue;
			} else if ((ch == 'e' || ch == 'E')) {
				strconv__v_sprintf_panic(p_index, pt.len);
				f64 x = *(((f64*)(pt.args[p_index])));
				bool positive = x >= ((f64)(0.0));
				len1 = (len1 >= 0 ? (len1) : (def_len1));
				string s = strconv__format_es(((f64)(x)), (strconv__BF_param){
					.pad_ch = pad_ch,
					.len0 = len0,
					.len1 = len1,
					.positive = positive,
					.sign_flag = sign,
					.allign = allign,
					.rm_tail_zero = 0,
				});
				strings__Builder_write(&res, (ch == 'E' ? (string_to_upper(s)) : (s)));
				status = strconv__Char_parse_state_reset_params;
				p_index++;
				i++;
				continue;
			} else if ((ch == 'g' || ch == 'G')) {
				strconv__v_sprintf_panic(p_index, pt.len);
				f64 x = *(((f64*)(pt.args[p_index])));
				bool positive = x >= ((f64)(0.0));
				string s = tos_lit("");
				f64 tx = strconv__fabs(x);
				if (tx < 999999.0 && tx >= 0.00001) {
					len1 = (len1 >= 0 ? (len1 + 1) : (def_len1));
					s = strconv__format_fl(x, (strconv__BF_param){
						.pad_ch = pad_ch,
						.len0 = len0,
						.len1 = len1,
						.positive = positive,
						.sign_flag = sign,
						.allign = allign,
						.rm_tail_zero = true,
					});
				} else {
					len1 = (len1 >= 0 ? (len1 + 1) : (def_len1));
					s = strconv__format_es(x, (strconv__BF_param){
						.pad_ch = pad_ch,
						.len0 = len0,
						.len1 = len1,
						.positive = positive,
						.sign_flag = sign,
						.allign = allign,
						.rm_tail_zero = true,
					});
				}
				strings__Builder_write(&res, (ch == 'G' ? (string_to_upper(s)) : (s)));
				status = strconv__Char_parse_state_reset_params;
				p_index++;
				i++;
				continue;
			} else if (ch == 's') {
				strconv__v_sprintf_panic(p_index, pt.len);
				string s1 = *(((string*)(pt.args[p_index])));
				pad_ch = ' ';
				strings__Builder_write(&res, strconv__format_str(s1, (strconv__BF_param){
					.pad_ch = pad_ch,
					.len0 = len0,
					.len1 = 0,
					.positive = true,
					.sign_flag = false,
					.allign = allign,
					.rm_tail_zero = 0,
				}));
				status = strconv__Char_parse_state_reset_params;
				p_index++;
				i++;
				continue;
			}
		}
		status = strconv__Char_parse_state_reset_params;
		p_index++;
		i++;
	}
	if (p_index != pt.len) {
		v_panic(_STR("%"PRId32"\000 %% conversion specifiers, but given %"PRId32"\000 args", 3, p_index, pt.len));
	}
	return strings__Builder_str(&res);
}

// Attr: [inline]
inline static void strconv__v_sprintf_panic(int idx, int len) {
	if (idx >= len) {
		v_panic(_STR("%"PRId32"\000 %% conversion specifiers, but given only %"PRId32"\000 args", 3, idx + 1, len));
	}
}

static f64 strconv__fabs(f64 x) {
	if (x < 0.0) {
		return -x;
	}
	return x;
}

// Attr: [inline]
inline string strconv__ftoa_64(f64 f) {
	return strconv__f64_to_str(f, 17);
}

// Attr: [inline]
inline string strconv__ftoa_long_64(f64 f) {
	return strconv__f64_to_str_l(f);
}

// Attr: [inline]
inline string strconv__ftoa_32(f32 f) {
	return strconv__f32_to_str(f, 8);
}

// Attr: [inline]
inline string strconv__ftoa_long_32(f32 f) {
	return strconv__f32_to_str_l(f);
}

static void strconv__assert1(bool t, string msg) {
	if (!t) {
		v_panic(msg);
	}
}

// Attr: [inline]
inline static int strconv__bool_to_int(bool b) {
	if (b) {
		return 1;
	}
	return 0;
}

// Attr: [inline]
inline static u32 strconv__bool_to_u32(bool b) {
	if (b) {
		return ((u32)(1U));
	}
	return ((u32)(0U));
}

// Attr: [inline]
inline static u64 strconv__bool_to_u64(bool b) {
	if (b) {
		return ((u64)(1U));
	}
	return ((u64)(0U));
}

static string strconv__get_string_special(bool neg, bool expZero, bool mantZero) {
	if (!mantZero) {
		return tos_lit("nan");
	}
	if (!expZero) {
		if (neg) {
			return tos_lit("-inf");
		} else {
			return tos_lit("+inf");
		}
	}
	if (neg) {
		return tos_lit("-0e+00");
	}
	return tos_lit("0e+00");
}

static int strconv__decimal_len_32(u32 u) {
	strconv__assert1(u < 1000000000, tos_lit("too big"));
	if (u >= 100000000) {
		return 9;
	} else if (u >= 10000000) {
		return 8;
	} else if (u >= 1000000) {
		return 7;
	} else if (u >= 100000) {
		return 6;
	} else if (u >= 10000) {
		return 5;
	} else if (u >= 1000) {
		return 4;
	} else if (u >= 100) {
		return 3;
	} else if (u >= 10) {
		return 2;
	}
	return 1;
}

static u32 strconv__mul_shift_32(u32 m, u64 mul, int ishift) {
	multi_return_u64_u64 mr_1855 = math__bits__mul_64(((u64)(m)), mul);
	u64 hi = mr_1855.arg0;
	u64 lo = mr_1855.arg1;
	u64 shifted_sum = (lo >> ((u64)(ishift))) + (hi << ((u64)(64 - ishift)));
	strconv__assert1(shifted_sum <= 2147483647, tos_lit("shiftedSum <= math.max_u32"));
	return ((u32)(shifted_sum));
}

static u32 strconv__mul_pow5_invdiv_pow2(u32 m, u32 q, int j) {
	return strconv__mul_shift_32(m, (*(u64*)array_get(_const_strconv__pow5_inv_split_32, q)), j);
}

static u32 strconv__mul_pow5_div_pow2(u32 m, u32 i, int j) {
	return strconv__mul_shift_32(m, (*(u64*)array_get(_const_strconv__pow5_split_32, i)), j);
}

static u32 strconv__pow5_factor_32(u32 i_v) {
	u32 v = i_v;
	for (u32 n = ((u32)(0U)); ; n++) {
		u32 q = v / 5;
		u32 r = v % 5;
		if (r != 0) {
			return n;
		}
		v = q;
	}
	return v;
}

static bool strconv__multiple_of_power_of_five_32(u32 v, u32 p) {
	return strconv__pow5_factor_32(v) >= p;
}

static bool strconv__multiple_of_power_of_two_32(u32 v, u32 p) {
	return ((u32)(math__bits__trailing_zeros_32(v))) >= p;
}

static u32 strconv__log10_pow2(int e) {
	strconv__assert1(e >= 0, tos_lit("e >= 0"));
	strconv__assert1(e <= 1650, tos_lit("e <= 1650"));
	return (((u32)(e)) * 78913) >> 18;
}

static u32 strconv__log10_pow5(int e) {
	strconv__assert1(e >= 0, tos_lit("e >= 0"));
	strconv__assert1(e <= 2620, tos_lit("e <= 2620"));
	return (((u32)(e)) * 732923) >> 20;
}

static int strconv__pow5_bits(int e) {
	strconv__assert1(e >= 0, tos_lit("e >= 0"));
	strconv__assert1(e <= 3528, tos_lit("e <= 3528"));
	return ((int)(((((u32)(e)) * 1217359) >> 19) + 1));
}

static int strconv__decimal_len_64(u64 u) {
	int log2 = 64 - math__bits__leading_zeros_64(u) - 1;
	int t = (log2 + 1) * 1233 >> 12;
	return t - strconv__bool_to_int(u < (*(u64*)array_get(_const_strconv__powers_of_10, t))) + 1;
}

static u64 strconv__shift_right_128(strconv__Uint128 v, int shift) {
	strconv__assert1(shift < 64, tos_lit("shift < 64"));
	return ((v.hi << ((u64)(64 - shift))) | (v.lo >> ((u32)(shift))));
}

static u64 strconv__mul_shift_64(u64 m, strconv__Uint128 mul, int shift) {
	multi_return_u64_u64 mr_4388 = math__bits__mul_64(m, mul.hi);
	u64 hihi = mr_4388.arg0;
	u64 hilo = mr_4388.arg1;
	multi_return_u64_u64 mr_4426 = math__bits__mul_64(m, mul.lo);
	u64 lohi = mr_4426.arg0;
	strconv__Uint128 sum = (strconv__Uint128){.lo = lohi + hilo,.hi = hihi,};
	if (sum.lo < lohi) {
		sum.hi++;
	}
	return strconv__shift_right_128(sum, shift - 64);
}

static u32 strconv__pow5_factor_64(u64 v_i) {
	u64 v = v_i;
	for (u32 n = ((u32)(0U)); ; n++) {
		u64 q = v / 5;
		u64 r = v % 5;
		if (r != 0) {
			return n;
		}
		v = q;
	}
	return ((u32)(0U));
}

static bool strconv__multiple_of_power_of_five_64(u64 v, u32 p) {
	return strconv__pow5_factor_64(v) >= p;
}

static bool strconv__multiple_of_power_of_two_64(u64 v, u32 p) {
	return ((u32)(math__bits__trailing_zeros_64(v))) >= p;
}

string strconv__f32_to_str_l(f64 f) {
	return strconv__f64_to_str_l(((f32)(f)));
}

string strconv__f64_to_str_l(f64 f) {
	string s = strconv__f64_to_str(f, 18);
	if (s.len > 2 && (string_at(s, 0) == 'n' || string_at(s, 1) == 'i')) {
		return s;
	}
	bool m_sgn_flag = false;
	int sgn = 1;
	array_fixed_byte_26 b = {0};
	int d_pos = 1;
	int i = 0;
	int i1 = 0;
	int exp = 0;
	int exp_sgn = 1;
	for (int _t15 = 0; _t15 < s.len; ++_t15) {
		byte c = s.str[_t15];
		if (c == '-') {
			sgn = -1;
			i++;
		} else if (c == '+') {
			sgn = 1;
			i++;
		} else if (c >= '0' && c <= '9') {
			b[i1++] = c;
			i++;
		} else if (c == '.') {
			if (sgn > 0) {
				d_pos = i;
			} else {
				d_pos = i - 1;
			}
			i++;
		} else if (c == 'e') {
			i++;
			break;
		} else {
			return tos_lit("Float conversion error!!");
		}
	}
	b[i1] = 0;
	if (string_at(s, i) == '-') {
		exp_sgn = -1;
		i++;
	} else if (string_at(s, i) == '+') {
		exp_sgn = 1;
		i++;
	}
	for (int _t16 = 0; _t16 < string_substr(s, i, s.len).len; ++_t16) {
		byte c = string_substr(s, i, s.len).str[_t16];
		exp = exp * 10 + ((int)(c - '0'));
	}
	array_byte res = __new_array_with_default(exp + 32, 0, sizeof(byte), &(byte[]){0});
	int r_i = 0;
	if (sgn == 1) {
		if (m_sgn_flag) {
			array_set(&res, r_i++, &(byte[]) { '+' });
		}
	} else {
		array_set(&res, r_i++, &(byte[]) { '-' });
	}
	i = 0;
	if (exp_sgn >= 0) {
		for (;;) {
			if (!(b[i] != 0)) break;
			array_set(&res, r_i++, &(byte[]) { b[i] });
			i++;
			if (i >= d_pos && exp >= 0) {
				if (exp == 0) {
					array_set(&res, r_i++, &(byte[]) { '.' });
				}
				exp--;
			}
		}
		for (;;) {
			if (!(exp >= 0)) break;
			array_set(&res, r_i++, &(byte[]) { '0' });
			exp--;
		}
	} else {
		bool dot_p = true;
		for (;;) {
			if (!(exp > 0)) break;
			array_set(&res, r_i++, &(byte[]) { '0' });
			exp--;
			if (dot_p) {
				array_set(&res, r_i++, &(byte[]) { '.' });
				dot_p = false;
			}
		}
		for (;;) {
			if (!(b[i] != 0)) break;
			array_set(&res, r_i++, &(byte[]) { b[i] });
			i++;
		}
	}
	array_set(&res, r_i, &(byte[]) { 0 });
	return tos(res.data, r_i);
}

static array __new_array(int mylen, int cap, int elm_size) {
	int cap_ = (cap < mylen ? (mylen) : (cap));
	array arr = (array){.element_size = elm_size,.data = vcalloc(cap_ * elm_size),.len = mylen,.cap = cap_,};
	return arr;
}

static array __new_array_with_default(int mylen, int cap, int elm_size, voidptr val) {
	int cap_ = (cap < mylen ? (mylen) : (cap));
	array arr = (array){.element_size = elm_size,.data = vcalloc(cap_ * elm_size),.len = mylen,.cap = cap_,};
	if (val != 0) {
		for (int i = 0; i < arr.len; ++i) {
			array_set_unsafe(&arr, i, val);
		}
	}
	return arr;
}

static array __new_array_with_array_default(int mylen, int cap, int elm_size, array val) {
	int cap_ = (cap < mylen ? (mylen) : (cap));
	array arr = (array){.element_size = elm_size,.data = vcalloc(cap_ * elm_size),.len = mylen,.cap = cap_,};
	for (int i = 0; i < arr.len; ++i) {
		array val_clone = array_clone(&val);
		array_set_unsafe(&arr, i, &val_clone);
	}
	return arr;
}

static array new_array_from_c_array(int len, int cap, int elm_size, voidptr c_array) {
	int cap_ = (cap < len ? (len) : (cap));
	array arr = (array){.element_size = elm_size,.data = vcalloc(cap_ * elm_size),.len = len,.cap = cap_,};
	memcpy(arr.data, c_array, len * elm_size);
	return arr;
}

static array new_array_from_c_array_no_alloc(int len, int cap, int elm_size, voidptr c_array) {
	array arr = (array){.element_size = elm_size,.data = c_array,.len = len,.cap = cap,};
	return arr;
}

// Attr: [inline]
inline static void array_ensure_cap(array* a, int required) {
	if (required <= a->cap) {
		return;
	}
	int cap = (a->cap == 0 ? (2) : (a->cap * 2));
	for (;;) {
		if (!(required > cap)) break;
		cap *= 2;
	}
	if (a->cap == 0) {
		a->data = vcalloc(cap * a->element_size);
	} else {
		a->data = v_realloc(a->data, ((u32)(cap * a->element_size)));
	}
	a->cap = cap;
}

array array_repeat(array a, int count) {
	if (count < 0) {
		v_panic(_STR("array.repeat: count is negative: %"PRId32"", 1, count));
	}
	int size = count * a.len * a.element_size;
	if (size == 0) {
		size = a.element_size;
	}
	array arr = (array){.element_size = a.element_size,.data = vcalloc(size),.len = count * a.len,.cap = count * a.len,};
	int size_of_array = ((int)(/*SizeOfType*/ sizeof(struct array)));
	for (int i = 0; i < count; ++i) {
		if (a.len > 0 && a.element_size == size_of_array) {
			array ary = (array){.element_size = 0,.data = 0,.len = 0,.cap = 0,};
			memcpy(&ary, a.data, size_of_array);
			array ary_clone = array_clone(&ary);
			memcpy(array_get_unsafe(arr, i * a.len), &ary_clone, a.len * a.element_size);
		} else {
			memcpy(array_get_unsafe(arr, i * a.len), ((byteptr)(a.data)), a.len * a.element_size);
		}
	}
	return arr;
}

void array_sort_with_compare(array* a, voidptr compare) {
	qsort(a->data, a->len, a->element_size, compare);
}

void array_insert(array* a, int i, voidptr val) {
	#if !defined(CUSTOM_DEFINE_no_bounds_checking)
	{
		if (i < 0 || i > a->len) {
			v_panic(_STR("array.insert: index out of range (i == %"PRId32"\000, a.len == %"PRId32"\000)", 3, i, a->len));
		}
	}
	#endif
	array_ensure_cap(a, a->len + 1);
	{ // Unsafe block
		memmove(array_get_unsafe(/*rec*/*a, i + 1), array_get_unsafe(/*rec*/*a, i), (a->len - i) * a->element_size);
		array_set_unsafe(a, i, val);
	}
	a->len++;
}

void array_insert_many(array* a, int i, voidptr val, int size) {
	#if !defined(CUSTOM_DEFINE_no_bounds_checking)
	{
		if (i < 0 || i > a->len) {
			v_panic(_STR("array.insert_many: index out of range (i == %"PRId32"\000, a.len == %"PRId32"\000)", 3, i, a->len));
		}
	}
	#endif
	array_ensure_cap(a, a->len + size);
	int elem_size = a->element_size;
	{ // Unsafe block
		voidptr iptr = array_get_unsafe(/*rec*/*a, i);
		memmove(array_get_unsafe(/*rec*/*a, i + size), iptr, (a->len - i) * elem_size);
		memcpy(iptr, val, size * elem_size);
	}
	a->len += size;
}

void array_prepend(array* a, voidptr val) {
	array_insert(a, 0, val);
}

void array_prepend_many(array* a, voidptr val, int size) {
	array_insert_many(a, 0, val, size);
}

void array_delete(array* a, int i) {
	#if !defined(CUSTOM_DEFINE_no_bounds_checking)
	{
		if (i < 0 || i >= a->len) {
			v_panic(_STR("array.delete: index out of range (i == %"PRId32"\000, a.len == %"PRId32"\000)", 3, i, a->len));
		}
	}
	#endif
	memmove(array_get_unsafe(/*rec*/*a, i), array_get_unsafe(/*rec*/*a, i + 1), (a->len - i - 1) * a->element_size);
	a->len--;
}

void array_clear(array* a) {
	a->len = 0;
}

void array_trim(array* a, int index) {
	if (index < a->len) {
		a->len = index;
	}
}

// Attr: [inline]
// Attr: [unsafe]
inline static voidptr array_get_unsafe(array a, int i) {
	{ // Unsafe block
		return ((byteptr)(a.data)) + i * a.element_size;
	}
	return 0;
}

static voidptr array_get(array a, int i) {
	#if !defined(CUSTOM_DEFINE_no_bounds_checking)
	{
		if (i < 0 || i >= a.len) {
			v_panic(_STR("array.get: index out of range (i == %"PRId32"\000, a.len == %"PRId32"\000)", 3, i, a.len));
		}
	}
	#endif
	{ // Unsafe block
		return ((byteptr)(a.data)) + i * a.element_size;
	}
	return 0;
}

voidptr array_first(array a) {
	#if !defined(CUSTOM_DEFINE_no_bounds_checking)
	{
		if (a.len == 0) {
			v_panic(tos_lit("array.first: array is empty"));
		}
	}
	#endif
	return a.data;
}

voidptr array_last(array a) {
	#if !defined(CUSTOM_DEFINE_no_bounds_checking)
	{
		if (a.len == 0) {
			v_panic(tos_lit("array.last: array is empty"));
		}
	}
	#endif
	{ // Unsafe block
		return ((byteptr)(a.data)) + (a.len - 1) * a.element_size;
	}
	return 0;
}

voidptr array_pop(array* a) {
	#if !defined(CUSTOM_DEFINE_no_bounds_checking)
	{
		if (a->len == 0) {
			v_panic(tos_lit("array.pop: array is empty"));
		}
	}
	#endif
	int new_len = a->len - 1;
	byteptr last_elem = ((byteptr)(a->data)) + (new_len) * a->element_size;
	a->len = new_len;
	return memdup(last_elem, a->element_size);
}

void array_delete_last(array* a) {
	#if !defined(CUSTOM_DEFINE_no_bounds_checking)
	{
		if (a->len == 0) {
			v_panic(tos_lit("array.pop: array is empty"));
		}
	}
	#endif
	a->len--;
}

static array array_slice(array a, int start, int _end) {
	int end = _end;
	#if !defined(CUSTOM_DEFINE_no_bounds_checking)
	{
		if (start > end) {
			v_panic(_STR("array.slice: invalid slice index (%"PRId32"\000 > %"PRId32"\000)", 3, start, end));
		}
		if (end > a.len) {
			v_panic(_STR("array.slice: slice bounds out of range (%"PRId32"\000 >= %"PRId32"\000)", 3, end, a.len));
		}
		if (start < 0) {
			v_panic(_STR("array.slice: slice bounds out of range (%"PRId32"\000 < 0)", 2, start));
		}
	}
	#endif
	byteptr data = ((byteptr)(0));
	{ // Unsafe block
		data = ((byteptr)(a.data)) + start * a.element_size;
	}
	int l = end - start;
	array res = (array){.element_size = a.element_size,.data = data,.len = l,.cap = l,};
	return res;
}

static array array_slice2(array a, int start, int _end, bool end_max) {
	int end = (end_max ? (a.len) : (_end));
	return array_slice(a, start, end);
}

static array array_clone_static(array a) {
	return array_clone(&a);
}

array array_clone(array* a) {
	int size = a->cap * a->element_size;
	if (size == 0) {
		size++;
	}
	array arr = (array){.element_size = a->element_size,.data = vcalloc(size),.len = a->len,.cap = a->cap,};
	int size_of_array = ((int)(/*SizeOfType*/ sizeof(struct array)));
	if (a->element_size == size_of_array) {
		for (int i = 0; i < a->len; ++i) {
			array ar = (array){.element_size = 0,.data = 0,.len = 0,.cap = 0,};
			memcpy(&ar, array_get_unsafe(/*rec*/*a, i), size_of_array);
			array ar_clone = array_clone(&ar);
			array_set_unsafe(&arr, i, &ar_clone);
		}
	} else {
		memcpy(((byteptr)(arr.data)), a->data, a->cap * a->element_size);
	}
	return arr;
}

static array array_slice_clone(array* a, int start, int _end) {
	int end = _end;
	#if !defined(CUSTOM_DEFINE_no_bounds_checking)
	{
		if (start > end) {
			v_panic(_STR("array.slice: invalid slice index (%"PRId32"\000 > %"PRId32"\000)", 3, start, end));
		}
		if (end > a->len) {
			v_panic(_STR("array.slice: slice bounds out of range (%"PRId32"\000 >= %"PRId32"\000)", 3, end, a->len));
		}
		if (start < 0) {
			v_panic(_STR("array.slice: slice bounds out of range (%"PRId32"\000 < 0)", 2, start));
		}
	}
	#endif
	byteptr data = ((byteptr)(0));
	{ // Unsafe block
		data = ((byteptr)(a->data)) + start * a->element_size;
	}
	int l = end - start;
	array res = (array){.element_size = a->element_size,.data = data,.len = l,.cap = l,};
	return array_clone(&res);
}

// Attr: [inline]
// Attr: [unsafe]
inline static void array_set_unsafe(array* a, int i, voidptr val) {
	memcpy(((byteptr)(a->data)) + a->element_size * i, val, a->element_size);
}

static void array_set(array* a, int i, voidptr val) {
	#if !defined(CUSTOM_DEFINE_no_bounds_checking)
	{
		if (i < 0 || i >= a->len) {
			v_panic(_STR("array.set: index out of range (i == %"PRId32"\000, a.len == %"PRId32"\000)", 3, i, a->len));
		}
	}
	#endif
	memcpy(((byteptr)(a->data)) + a->element_size * i, val, a->element_size);
}

static void array_push(array* a, voidptr val) {
	array_ensure_cap(a, a->len + 1);
	memcpy(((byteptr)(a->data)) + a->element_size * a->len, val, a->element_size);
	a->len++;
}

void array_push_many(array* a3, voidptr val, int size) {
	if (a3->data == val) {
		array copy = array_clone(a3);
		array_ensure_cap(a3, a3->len + size);
		memcpy(array_get_unsafe(/*rec*/*a3, a3->len), copy.data, a3->element_size * size);
	} else {
		array_ensure_cap(a3, a3->len + size);
		memcpy(array_get_unsafe(/*rec*/*a3, a3->len), val, a3->element_size * size);
	}
	a3->len += size;
}

void array_reverse_in_place(array* a) {
	if (a->len < 2) {
		return;
	}
	{ // Unsafe block
		byteptr tmp_value = v_malloc(a->element_size);
		for (int i = 0; i < a->len / 2; ++i) {
			memcpy(tmp_value, ((byteptr)(a->data)) + i * a->element_size, a->element_size);
			memcpy(((byteptr)(a->data)) + i * a->element_size, ((byteptr)(a->data)) + (a->len - 1 - i) * a->element_size, a->element_size);
			memcpy(((byteptr)(a->data)) + (a->len - 1 - i) * a->element_size, tmp_value, a->element_size);
		}
		v_free(tmp_value);
	}
}

array array_reverse(array a) {
	if (a.len < 2) {
		return a;
	}
	array arr = (array){.element_size = a.element_size,.data = vcalloc(a.cap * a.element_size),.len = a.len,.cap = a.cap,};
	for (int i = 0; i < a.len; ++i) {
		array_set_unsafe(&arr, i, array_get_unsafe(a, a.len - 1 - i));
	}
	return arr;
}

// Attr: [unsafe]
void array_free(array* a) {
	#if defined(_VPREALLOC)
	{
	}
	#endif
	free(a->data);
}

string array_string_str(array_string a) {
	strings__Builder sb = strings__new_builder(a.len * 3);
	strings__Builder_write(&sb, tos_lit("["));
	for (int i = 0; i < a.len; ++i) {
		string val = (*(string*)array_get(a, i));
		strings__Builder_write(&sb, tos_lit("\'"));
		strings__Builder_write(&sb, val);
		strings__Builder_write(&sb, tos_lit("\'"));
		if (i < a.len - 1) {
			strings__Builder_write(&sb, tos_lit(", "));
		}
	}
	strings__Builder_write(&sb, tos_lit("]"));
	return strings__Builder_str(&sb);
}

string array_byte_hex(array_byte b) {
	byteptr hex = v_malloc(b.len * 2 + 1);
	int dst_i = 0;
	// FOR IN array
	array _t17 = b;
	for (int _t18 = 0; _t18 < _t17.len; ++_t18) {
		byte i = ((byte*)_t17.data)[_t18];
		byte n0 = i >> 4;
		{ // Unsafe block
			hex[dst_i++] = (n0 < 10 ? (n0 + '0') : (n0 + ((byte)(87))));
		}
		byte n1 = (i & 0xF);
		{ // Unsafe block
			hex[dst_i++] = (n1 < 10 ? (n1 + '0') : (n1 + ((byte)(87))));
		}
	}
	{ // Unsafe block
		hex[dst_i] = '\0';
		return tos(hex, dst_i);
	}
	return (string){.str=(byteptr)""};
}

int copy(array_byte dst, array_byte src) {
	if (dst.len > 0 && src.len > 0) {
		int min = 0;
		min = (dst.len < src.len ? (dst.len) : (src.len));
		memcpy(((byteptr)(dst.data)), array_slice(src, 0, min).data, dst.element_size * min);
		return min;
	}
	return 0;
}

static int compare_ints(int* a, int* b) {
	if (*a < *b) {
		return -1;
	}
	if (*a > *b) {
		return 1;
	}
	return 0;
}

static int compare_ints_reverse(int* a, int* b) {
	if (*a > *b) {
		return -1;
	}
	if (*a < *b) {
		return 1;
	}
	return 0;
}

static int compare_floats(f64* a, f64* b) {
	if (*a < *b) {
		return -1;
	}
	if (*a > *b) {
		return 1;
	}
	return 0;
}

static int compare_floats_reverse(f64* a, f64* b) {
	if (*a > *b) {
		return -1;
	}
	if (*a < *b) {
		return 1;
	}
	return 0;
}

void array_int_sort(array_int* a) {
	array_sort_with_compare(a, compare_ints);
}

int array_string_index(array_string a, string v) {
	for (int i = 0; i < a.len; ++i) {
		if (string_eq((*(string*)array_get(a, i)), v)) {
			return i;
		}
	}
	return -1;
}

int array_int_index(array_int a, int v) {
	for (int i = 0; i < a.len; ++i) {
		if ((*(int*)array_get(a, i)) == v) {
			return i;
		}
	}
	return -1;
}

int array_byte_index(array_byte a, byte v) {
	for (int i = 0; i < a.len; ++i) {
		if ((*(byte*)array_get(a, i)) == v) {
			return i;
		}
	}
	return -1;
}

int array_rune_index(array_rune a, rune v) {
	for (int i = 0; i < a.len; ++i) {
		if ((*(rune*)array_get(a, i)) == v) {
			return i;
		}
	}
	return -1;
}

int array_char_index(array_char a, char v) {
	for (int i = 0; i < a.len; ++i) {
		if ((*(char*)array_get(a, i)) == v) {
			return i;
		}
	}
	return -1;
}

int array_int_reduce(array_int a, int (*iter)(int , int ), int accum_start) {
	int accum_ = accum_start;
	// FOR IN array
	array _t19 = a;
	for (int _t20 = 0; _t20 < _t19.len; ++_t20) {
		int i = ((int*)_t19.data)[_t20];
		accum_ = iter(accum_, i);
	}
	return accum_;
}

bool array_string_eq(array_string a1, array_string a2) {
	if (a1.len != a2.len) {
		return false;
	}
	for (int i = 0; i < a1.len; ++i) {
		if (string_ne((*(string*)array_get(a1, i)), (*(string*)array_get(a2, i)))) {
			return false;
		}
	}
	return true;
}

int compare_i64(i64* a, i64* b) {
	if (*a < *b) {
		return -1;
	}
	if (*a > *b) {
		return 1;
	}
	return 0;
}

int compare_f64(f64* a, f64* b) {
	if (*a < *b) {
		return -1;
	}
	if (*a > *b) {
		return 1;
	}
	return 0;
}

int compare_f32(f32* a, f32* b) {
	if (*a < *b) {
		return -1;
	}
	if (*a > *b) {
		return 1;
	}
	return 0;
}

array_voidptr array_pointers(array a) {
	array_voidptr res = __new_array_with_default(0, 0, sizeof(voidptr), 0);
	for (int i = 0; i < a.len; ++i) {
		array_push(&res, _MOV((voidptr[]){ array_get_unsafe(a, i) }));
	}
	return res;
}

// TypeDecl
void v_exit(int code) {
	exit(code);
}

bool isnil(voidptr v) {
	return v == 0;
}

void print_backtrace() {
	print_backtrace_skipping_top_frames(2);
}

static void panic_debug(int line_no, string file, string mod, string fn_name, string s) {
	eprintln(tos_lit("================ V panic ================"));
	eprintln(_STR("   module: %.*s", 1, mod));
	eprintln(_STR(" function: %.*s\000()", 2, fn_name));
	eprintln(_STR("  message: %.*s", 1, s));
	eprintln(_STR("     file: %.*s", 1, file));
	eprintln(string_add(tos_lit("     line: "), int_str(line_no)));
	eprintln(tos_lit("========================================="));
	#if !defined(__TINYC__)
	{
		print_backtrace_skipping_top_frames(1);
	}
	#endif
	break_if_debugger_attached();
	exit(1);
}

void v_panic(string s) {
	eprintln(_STR("V panic: %.*s", 1, s));
	#if !defined(__TINYC__)
	{
		print_backtrace();
	}
	#endif
	break_if_debugger_attached();
	exit(1);
}

void eprintln(string s) {
	if (s.str == 0) {
		eprintln(tos_lit("eprintln(NIL)"));
	}
	fflush(stdout);
	fflush(stderr);
	write(2, s.str, s.len);
	write(2, "\n", 1);
	fflush(stderr);
}

void eprint(string s) {
	if (s.str == 0) {
		eprintln(tos_lit("eprint(NIL)"));
	}
	fflush(stdout);
	fflush(stderr);
	write(2, s.str, s.len);
	fflush(stderr);
}

void print(string s) {
	write(1, s.str, s.len);
}

void println(string s) {
	#if defined(_WIN32)
	{
	}
	#else
	{
		printf("%.*s\n", s.len, s.str);
	}
	#endif
}

// Attr: [unsafe]
byteptr v_malloc(int n) {
	if (n <= 0) {
		v_panic(tos_lit("malloc(<=0)"));
	}
	#if defined(_VPREALLOC)
	{
	}
	#else
	{
		byteptr ptr = malloc(n);
		if (ptr == 0) {
			v_panic(_STR("malloc(%"PRId32"\000) failed", 2, n));
		}
		return ptr;
	}
	#endif
	return 0;
}

// Attr: [unsafe]
byteptr v_realloc(byteptr b, u32 n) {
	#if defined(_VPREALLOC)
	{
	}
	#else
	{
		byteptr ptr = realloc(b, n);
		if (ptr == 0) {
			v_panic(_STR("realloc(%"PRIu32"\000) failed", 2, n));
		}
		return ptr;
	}
	#endif
	return 0;
}

// Attr: [unsafe]
byteptr v_calloc(int n) {
	return calloc(1, n);
}

// Attr: [unsafe]
byteptr vcalloc(int n) {
	if (n < 0) {
		v_panic(tos_lit("calloc(<=0)"));
	} else if (n == 0) {
		return ((byteptr)(0));
	}
	return calloc(1, n);
}

// Attr: [unsafe]
void v_free(voidptr ptr) {
	#if defined(_VPREALLOC)
	{
	}
	#endif
	free(ptr);
}

voidptr memdup(voidptr src, int sz) {
	if (sz == 0) {
		return vcalloc(1);
	}
	{ // Unsafe block
		byteptr mem = v_malloc(sz);
		return memcpy(mem, src, sz);
	}
	return 0;
}

static void v_ptr_free(voidptr ptr) {
	#if defined(_VPREALLOC)
	{
	}
	#endif
	free(ptr);
}

int is_atty(int fd) {
	#if defined(_WIN32)
	{
	}
	#else
	{
		return isatty(fd);
	}
	#endif
	return 0;
}

static voidptr __as_cast(voidptr obj, int obj_type, int expected_type) {
	if (obj_type != expected_type) {
		v_panic(_STR("as cast: cannot cast %"PRId32"\000 to %"PRId32"", 2, obj_type, expected_type));
	}
	return obj;
}

static void __print_assert_failure(VAssertMetaInfo* i) {
	eprintln(_STR("%.*s\000:%"PRId32"\000: FAIL: fn %.*s\000: assert %.*s", 4, i->fpath, i->line_nr + 1, i->fn_name, i->src));
	if (i->op.len > 0 && string_ne(i->op, tos_lit("call"))) {
		eprintln(_STR("   left value: %.*s\000 = %.*s", 2, i->llabel, i->lvalue));
		if (string_eq(i->rlabel, i->rvalue)) {
			eprintln(_STR("  right value: %.*s", 1, i->rlabel));
		} else {
			eprintln(_STR("  right value: %.*s\000 = %.*s", 2, i->rlabel, i->rvalue));
		}
	}
}

static void builtin_init() {
}

static bool print_backtrace_skipping_top_frames(int xskipframes) {
	int skipframes = xskipframes + 2;
	#if defined(__APPLE__)
	{
	}
	#endif
	#if defined(__linux__)
	{
		return print_backtrace_skipping_top_frames_linux(skipframes);
	}
	#endif
	#if defined(__FreeBSD__)
	{
	}
	#endif
	#if defined(__NetBSD__)
	{
	}
	#endif
	#if defined(__OpenBSD__)
	{
	}
	#endif
	println(_STR("print_backtrace_skipping_top_frames is not implemented. skipframes: %"PRId32"", 1, skipframes));
	return false;
}

static bool print_backtrace_skipping_top_frames_mac(int skipframes) {
	#if defined(__APPLE__)
	{
	}
	#endif
	return true;
}

static bool print_backtrace_skipping_top_frames_freebsd(int skipframes) {
	#if defined(__FreeBSD__)
	{
	}
	#endif
	return true;
}

static bool print_backtrace_skipping_top_frames_linux(int skipframes) {
	#if defined(__ANDROID__)
	{
	}
	#endif
	#if !defined(__GLIBC__)
	{
	}
	#endif
	#if defined(__TINYC__)
	{
	}
	#endif
	array_fixed_byteptr_100 buffer = {0};
	int nr_ptrs = backtrace(((voidptr)(buffer)), 100);
	if (nr_ptrs < 2) {
		eprintln(tos_lit("C.backtrace returned less than 2 frames"));
		return false;
	}
	int nr_actual_frames = nr_ptrs - skipframes;
	array_string sframes = __new_array_with_default(0, 0, sizeof(string), 0);
	charptr* csymbols = backtrace_symbols(((voidptr)(&buffer[skipframes])), nr_actual_frames);
	for (int i = 0; i < nr_actual_frames; ++i) {
		array_push(&sframes, _MOV((string[]){ tos2(((byteptr)(csymbols[i]))) }));
	}
	// FOR IN array
	array _t23 = sframes;
	for (int _t24 = 0; _t24 < _t23.len; ++_t24) {
		string sframe = ((string*)_t23.data)[_t24];
		string executable = string_all_before(sframe, tos_lit("("));
		string addr = string_all_before(string_all_after(sframe, tos_lit("[")), tos_lit("]"));
		string beforeaddr = string_all_before(sframe, tos_lit("["));
		string cmd = _STR("addr2line -e %.*s\000 %.*s", 2, executable, addr);
		voidptr f = popen(((charptr)(cmd.str)), "r");
		if (isnil(f)) {
			eprintln(sframe);
			continue;
		}
		array_fixed_byte_1000 buf = {0};
		string output = tos_lit("");
		for (;;) {
			if (!(fgets(((charptr)(buf)), 1000, f) != 0)) break;
			output = /*f*/string_add(output, tos(((byteptr)(buf)), vstrlen(((byteptr)(buf)))));
		}
		output = string_add(string_trim_space(output), tos_lit(":"));
		if (pclose(f) != 0) {
			eprintln(sframe);
			continue;
		}
		if ((string_eq(output, tos_lit("??:0:")) || string_eq(output, tos_lit("??:?:")))) {
			output = tos_lit("");
		}
		output = string_replace(output, tos_lit(" (discriminator"), tos_lit(": (d."));
		eprintln(_STR("%*.*s\000 | %*.*s\000 | %.*s", 3, output, -46, addr, 14, beforeaddr));
	}
	return true;
}

static void break_if_debugger_attached() {
	{ // Unsafe block
		voidptr* ptr = ((voidptr*)(0));
		*ptr = 0;
	}
}

int proc_pidpath(int , voidptr , int );

// Attr: [trusted]
// Attr: [trusted]
// Attr: [trusted]
void chan_close(chan ch) {
}

ChanState chan_try_pop(chan ch, voidptr obj) {
	return ChanState_success;
}

ChanState chan_try_push(chan ch, voidptr obj) {
	return ChanState_success;
}

// Attr: [inline]
inline string f64_str(f64 x) {
	f64 abs_x = f64_abs(x);
	if (abs_x >= 0.0001 && abs_x < 1.0e6) {
		return strconv__f64_to_str_l(x);
	} else {
		return strconv__ftoa_64(x);
	}
	return (string){.str=(byteptr)""};
}

// Attr: [inline]
inline string any_float_str(any_float d) {
	return f64_str(((f64)(d)));
}

// Attr: [inline]
inline string f64_strsci(f64 x, int digit_num) {
	int n_digit = digit_num;
	if (n_digit < 1) {
		n_digit = 1;
	} else if (n_digit > 17) {
		n_digit = 17;
	}
	return strconv__f64_to_str(x, n_digit);
}

// Attr: [inline]
inline string f64_strlong(f64 x) {
	return strconv__f64_to_str_l(x);
}

// Attr: [inline]
inline string f32_str(f32 x) {
	f32 abs_x = f32_abs(x);
	if (abs_x >= 0.0001 && abs_x < 1.0e6) {
		return strconv__f32_to_str_l(x);
	} else {
		return strconv__ftoa_32(x);
	}
	return (string){.str=(byteptr)""};
}

// Attr: [inline]
inline string f32_strsci(f32 x, int digit_num) {
	int n_digit = digit_num;
	if (n_digit < 1) {
		n_digit = 1;
	} else if (n_digit > 8) {
		n_digit = 8;
	}
	return strconv__f32_to_str(x, n_digit);
}

// Attr: [inline]
inline string f32_strlong(f32 x) {
	return strconv__f32_to_str_l(x);
}

// Attr: [inline]
inline f32 f32_abs(f32 a) {
	return (a < 0 ? (-a) : (a));
}

// Attr: [inline]
inline static f64 f64_abs(f64 a) {
	return (a < 0 ? (-a) : (a));
}

// Attr: [inline]
inline f32 f32_max(f32 a, f32 b) {
	return (a > b ? (a) : (b));
}

// Attr: [inline]
inline f32 f32_min(f32 a, f32 b) {
	return (a < b ? (a) : (b));
}

// Attr: [inline]
inline f64 f64_max(f64 a, f64 b) {
	return (a > b ? (a) : (b));
}

// Attr: [inline]
inline static f64 f64_min(f64 a, f64 b) {
	return (a < b ? (a) : (b));
}

// Attr: [inline]
inline bool f32_eq_epsilon(f32 a, f32 b) {
	f32 hi = f32_max(f32_abs(a), f32_abs(b));
	f32 delta = f32_abs(a - b);
	if (hi > ((f32)(1.0))) {
		return delta <= hi * (4 * ((f32)(FLT_EPSILON)));
	} else {
		return (1 / (4 * ((f32)(FLT_EPSILON)))) * delta <= hi;
	}
	return 0;
}

// Attr: [inline]
inline bool f64_eq_epsilon(f64 a, f64 b) {
	f64 hi = f64_max(f64_abs(a), f64_abs(b));
	f64 delta = f64_abs(a - b);
	if (hi > 1.0) {
		return delta <= hi * (4 * ((f64)(DBL_EPSILON)));
	} else {
		return (1 / (4 * ((f64)(DBL_EPSILON)))) * delta <= hi;
	}
	return 0;
}

string ptr_str(voidptr ptr) {
	string buf1 = u64_hex(((u64)(ptr)));
	return buf1;
}

// Attr: [inline]
inline string int_str_l(int nn, int max) {
	i64 n = ((i64)(nn));
	int d = 0;
	if (n == 0) {
		return tos_lit("0");
	}
	byteptr buf = v_malloc(max + 1);
	bool is_neg = false;
	if (n < 0) {
		n = -n;
		is_neg = true;
	}
	int index = max;
	{ // Unsafe block
		buf[index--] = '\0';
	}
	for (;;) {
		if (!(n > 0)) break;
		int n1 = ((int)(n / 100));
		d = ((((int)(n)) - (n1 * 100)) << 1);
		n = n1;
		{ // Unsafe block
			buf[index--] = _const_digit_pairs.str[d++];
			buf[index--] = _const_digit_pairs.str[d];
		}
	}
	index++;
	if (d < 20) {
		index++;
	}
	if (is_neg) {
		index--;
		{ // Unsafe block
			buf[index] = '-';
		}
	}
	{ // Unsafe block
		memmove(buf, buf + index, (max - index) + 1);
		return tos(buf, (max - index));
	}
	return (string){.str=(byteptr)""};
}

string i8_str(i8 n) {
	return int_str_l(((int)(n)), 5);
}

string i16_str(i16 n) {
	return int_str_l(((int)(n)), 7);
}

string u16_str(u16 n) {
	return int_str_l(((int)(n)), 7);
}

string int_str(int n) {
	return int_str_l(n, 12);
}

string u32_str(u32 nn) {
	u32 n = nn;
	u32 d = ((u32)(0U));
	if (n == 0) {
		return tos_lit("0");
	}
	int max = 12;
	byteptr buf = v_malloc(max + 1);
	int index = max;
	{ // Unsafe block
		buf[index--] = '\0';
	}
	for (;;) {
		if (!(n > 0)) break;
		u32 n1 = n / ((u32)(100U));
		d = ((n - (n1 * ((u32)(100U)))) << ((u32)(1U)));
		n = n1;
		{ // Unsafe block
			buf[index--] = string_at(_const_digit_pairs, d++);
			buf[index--] = string_at(_const_digit_pairs, d);
		}
	}
	index++;
	if (d < ((u32)(20U))) {
		index++;
	}
	{ // Unsafe block
		memmove(buf, buf + index, (max - index) + 1);
		return tos(buf, (max - index));
	}
	return (string){.str=(byteptr)""};
}

// Attr: [inline]
inline string any_int_str(any_int n) {
	return i64_str(((i64)(n)));
}

string i64_str(i64 nn) {
	i64 n = nn;
	i64 d = ((i64)(0));
	if (n == 0) {
		return tos_lit("0");
	}
	int max = 20;
	byteptr buf = vcalloc(max + 1);
	bool is_neg = false;
	if (n < 0) {
		n = -n;
		is_neg = true;
	}
	int index = max;
	{ // Unsafe block
		buf[index--] = '\0';
	}
	for (;;) {
		if (!(n > 0)) break;
		i64 n1 = n / ((i64)(100));
		d = ((n - (n1 * ((i64)(100)))) << ((i64)(1)));
		n = n1;
		{ // Unsafe block
			buf[index--] = string_at(_const_digit_pairs, d++);
			buf[index--] = string_at(_const_digit_pairs, d);
		}
	}
	index++;
	if (d < ((i64)(20))) {
		index++;
	}
	if (is_neg) {
		index--;
		{ // Unsafe block
			buf[index] = '-';
		}
	}
	{ // Unsafe block
		memmove(buf, buf + index, (max - index) + 1);
		return tos(buf, (max - index));
	}
	return (string){.str=(byteptr)""};
}

string u64_str(u64 nn) {
	u64 n = nn;
	u64 d = ((u64)(0U));
	if (n == 0) {
		return tos_lit("0");
	}
	int max = 20;
	byteptr buf = vcalloc(max + 1);
	int index = max;
	{ // Unsafe block
		buf[index--] = '\0';
	}
	for (;;) {
		if (!(n > 0)) break;
		u64 n1 = n / 100;
		d = ((n - (n1 * 100)) << 1);
		n = n1;
		{ // Unsafe block
			buf[index--] = string_at(_const_digit_pairs, d++);
			buf[index--] = string_at(_const_digit_pairs, d);
		}
	}
	index++;
	if (d < 20) {
		index++;
	}
	{ // Unsafe block
		memmove(buf, buf + index, (max - index) + 1);
		return tos(buf, (max - index));
	}
	return (string){.str=(byteptr)""};
}

string bool_str(bool b) {
	if (b) {
		return tos_lit("true");
	}
	return tos_lit("false");
}

// Attr: [inline]
inline static string u64_to_hex(u64 nn, byte len) {
	u64 n = nn;
	array_fixed_byte_256 buf = {0};
	buf[len] = '\0';
	int i = 0;
	for (i = len - 1; i >= 0; i--) {
		byte d = ((byte)((n & 0xF)));
		rune x = (d < 10 ? (d + '0') : (d + 87));
		buf[i] = x;
		n = n >> 4;
	}
	return (string){.str = memdup((voidptr)&/*qq*/buf, len + 1), .len = len};
}

// Attr: [inline]
inline static string u64_to_hex_no_leading_zeros(u64 nn, byte len) {
	u64 n = nn;
	array_fixed_byte_256 buf = {0};
	buf[len] = '\0';
	int i = 0;
	for (i = len - 1; i >= 0; i--) {
		byte d = ((byte)((n & 0xF)));
		rune x = (d < 10 ? (d + '0') : (d + 87));
		buf[i] = x;
		n = n >> 4;
		if (n == 0) {
			break;
		}
	}
	int res_len = len - i;
	return (string){.str = memdup(&buf[i], res_len + 1), .len = res_len};
}

string byte_hex(byte nn) {
	if (nn == 0) {
		return tos_lit("00");
	}
	return u64_to_hex(nn, 2);
}

string i8_hex(i8 nn) {
	return byte_hex(((byte)(nn)));
}

string u16_hex(u16 nn) {
	if (nn == 0) {
		return tos_lit("0");
	}
	return u64_to_hex_no_leading_zeros(nn, 4);
}

string i16_hex(i16 nn) {
	return u16_hex(((u16)(nn)));
}

string u32_hex(u32 nn) {
	if (nn == 0) {
		return tos_lit("0");
	}
	return u64_to_hex_no_leading_zeros(nn, 8);
}

string int_hex(int nn) {
	return u32_hex(((u32)(nn)));
}

string int_hex2(int n) {
	return string_add(tos_lit("0x"), int_hex(n));
}

string u64_hex(u64 nn) {
	if (nn == 0) {
		return tos_lit("0");
	}
	return u64_to_hex_no_leading_zeros(nn, 16);
}

string i64_hex(i64 nn) {
	return u64_hex(((u64)(nn)));
}

string any_int_hex(any_int nn) {
	return u64_hex(((u64)(nn)));
}

string voidptr_str(voidptr nn) {
	return u64_hex(((u64)(nn)));
}

string byteptr_str(byteptr nn) {
	return u64_hex(((u64)(nn)));
}

string u64_hex_full(u64 nn) {
	return u64_to_hex(nn, 16);
}

string byte_str(byte b) {
	string str = (string){.str = v_malloc(2), .len = 1};
	{ // Unsafe block
		str.str[0] = b;
		str.str[1] = '\0';
	}
	return str;
}

string byte_str_escaped(byte b) {
	byte _t25 = b;
		string str = ((_t25 == 0) ? (string_add(tos_lit("`\\"), tos_lit("0`"))) : (_t25 == 7) ? (tos_lit("`\\a`")) : (_t25 == 8) ? (tos_lit("`\\b`")) : (_t25 == 9) ? (tos_lit("`\\t`")) : (_t25 == 10) ? (tos_lit("`\\n`")) : (_t25 == 11) ? (tos_lit("`\\v`")) : (_t25 == 12) ? (tos_lit("`\\f`")) : (_t25 == 13) ? (tos_lit("`\\r`")) : ((_t25 >= 32 && _t25 <= 126)) ? (byte_str(b)) : (string_add(tos_lit("0x"), byte_hex(b))));
	return str;
}

bool array_byte_contains(array_byte a, byte val) {
	// FOR IN array
	array _t26 = a;
	for (int _t27 = 0; _t27 < _t26.len; ++_t27) {
		byte aa = ((byte*)_t26.data)[_t27];
		if (aa == val) {
			return true;
		}
	}
	return false;
}

bool array_u16_contains(array_u16 a, u16 val) {
	// FOR IN array
	array _t28 = a;
	for (int _t29 = 0; _t29 < _t28.len; ++_t29) {
		u16 aa = ((u16*)_t28.data)[_t29];
		if (aa == val) {
			return true;
		}
	}
	return false;
}

static bool array_int_contains(array_int ar, int val) {
	// FOR IN array
	array _t30 = ar;
	for (int _t31 = 0; _t31 < _t30.len; ++_t31) {
		int s = ((int*)_t30.data)[_t31];
		if (s == val) {
			return true;
		}
	}
	return false;
}

bool array_u64_contains(array_u64 a, u64 val) {
	// FOR IN array
	array _t32 = a;
	for (int _t33 = 0; _t33 < _t32.len; ++_t33) {
		u64 aa = ((u64*)_t32.data)[_t33];
		if (aa == val) {
			return true;
		}
	}
	return false;
}

// Attr: [inline]
inline static bool fast_string_eq(string a, string b) {
	if (a.len != b.len) {
		return false;
	}
	{ // Unsafe block
		return memcmp(a.str, b.str, b.len) == 0;
	}
	return 0;
}

// Attr: [inline]
// Attr: [unsafe]
inline static DenseArray new_dense_array(int value_bytes) {
	int s8size = ((int)(8 * /*SizeOfType*/ sizeof(string)));
	return (DenseArray){
		.value_bytes = value_bytes,
		.cap = 8,
		.len = 0,
		.deletes = 0,
		.keys = ((string*)(v_malloc(s8size))),
		.values = v_malloc(8 * value_bytes),
	};
}

// Attr: [inline]
inline static u32 DenseArray_push(DenseArray* d, string key, voidptr value) {
	if (d->cap == d->len) {
		d->cap += d->cap >> 3;
		{ // Unsafe block
			byteptr x = v_realloc(((byteptr)(d->keys)), /*SizeOfType*/ sizeof(string) * d->cap);
			d->keys = ((string*)(x));
			d->values = v_realloc(((byteptr)(d->values)), ((u32)(d->value_bytes)) * d->cap);
		}
	}
	u32 push_index = d->len;
	{ // Unsafe block
		d->keys[push_index] = key;
		memcpy(d->values + push_index * ((u32)(d->value_bytes)), value, d->value_bytes);
	}
	d->len++;
	return push_index;
}

static voidptr DenseArray_get(DenseArray d, int i) {
	#if !defined(CUSTOM_DEFINE_no_bounds_checking)
	{
		if (i < 0 || i >= ((int)(d.len))) {
			v_panic(_STR("DenseArray.get: index out of range (i == %"PRId32"\000, d.len == %"PRIu32"\000)", 3, i, d.len));
		}
	}
	#endif
	{ // Unsafe block
		return ((byteptr)(d.keys)) + i * ((int)(/*SizeOfType*/ sizeof(string)));
	}
	return 0;
}

static void DenseArray_zeros_to_end(DenseArray* d) {
	byteptr tmp_value = v_malloc(d->value_bytes);
	u32 count = ((u32)(0U));
	for (int i = 0; i < ((int)(d->len)); ++i) {
		if (d->keys[i].str != 0) {
			{ // Unsafe block
				string tmp_key = d->keys[count];
				d->keys[count] = d->keys[i];
				d->keys[i] = tmp_key;
			}
			{ // Unsafe block
				memcpy(tmp_value, d->values + count * ((u32)(d->value_bytes)), d->value_bytes);
				memcpy(d->values + count * ((u32)(d->value_bytes)), d->values + i * d->value_bytes, d->value_bytes);
				memcpy(d->values + i * d->value_bytes, tmp_value, d->value_bytes);
			}
			count++;
		}
	}
	v_free(tmp_value);
	d->deletes = 0;
	d->len = count;
	d->cap = (count < 8 ? (((u32)(8U))) : (count));
	{ // Unsafe block
		byteptr x = v_realloc(((byteptr)(d->keys)), /*SizeOfType*/ sizeof(string) * d->cap);
		d->keys = ((string*)(x));
		d->values = v_realloc(((byteptr)(d->values)), ((u32)(d->value_bytes)) * d->cap);
	}
}

static map new_map_1(int value_bytes) {
	int metasize = ((int)(/*SizeOfType*/ sizeof(u32) * (_const_init_capicity + _const_extra_metas_inc)));
	return (map){
		.value_bytes = value_bytes,
		.cap = _const_init_cap,
		.cached_hashbits = _const_max_cached_hashbits,
		.shift = _const_init_log_capicity,
		.key_values = new_dense_array(value_bytes),
		.metas = ((u32*)(vcalloc(metasize))),
		.extra_metas = _const_extra_metas_inc,
		.len = 0,
	};
}

static map new_map_init(int n, int value_bytes, string* keys, voidptr values) {
	map out = new_map_1(value_bytes);
	for (int i = 0; i < n; ++i) {
		map_set(&out, keys[i], ((byteptr)(values)) + i * value_bytes);
	}
	return out;
}

// Attr: [inline]
inline static multi_return_u32_u32 map_key_to_index(map* m, string key) {
	u64 hash = hash__wyhash_c(key.str, ((u64)(key.len)), 0);
	u64 index = (hash & m->cap);
	u64 meta = ((((hash >> m->shift) & _const_hash_mask)) | _const_probe_inc);
	return (multi_return_u32_u32){.arg0=((u32)(index)), .arg1=((u32)(meta))};
}

// Attr: [inline]
inline static multi_return_u32_u32 map_meta_less(map* m, u32 _index, u32 _metas) {
	u32 index = _index;
	u32 meta = _metas;
	for (;;) {
		if (!(meta < m->metas[index])) break;
		index += 2;
		meta += _const_probe_inc;
	}
	return (multi_return_u32_u32){.arg0=index, .arg1=meta};
}

// Attr: [inline]
inline static void map_meta_greater(map* m, u32 _index, u32 _metas, u32 kvi) {
	u32 meta = _metas;
	u32 index = _index;
	u32 kv_index = kvi;
	for (;;) {
		if (!(m->metas[index] != 0)) break;
		if (meta > m->metas[index]) {
			{ // Unsafe block
				u32 tmp_meta = m->metas[index];
				m->metas[index] = meta;
				meta = tmp_meta;
			}
			u32 tmp_index = m->metas[index + 1];
			{ // Unsafe block
				m->metas[index + 1] = kv_index;
			}
			kv_index = tmp_index;
		}
		index += 2;
		meta += _const_probe_inc;
	}
	{ // Unsafe block
		m->metas[index] = meta;
		m->metas[index + 1] = kv_index;
	}
	u32 probe_count = (meta >> _const_hashbits) - 1;
	map_ensure_extra_metas(m, probe_count);
}

// Attr: [inline]
inline static void map_ensure_extra_metas(map* m, u32 probe_count) {
	if ((probe_count << 1) == m->extra_metas) {
		m->extra_metas += _const_extra_metas_inc;
		u32 mem_size = (m->cap + 2 + m->extra_metas);
		{ // Unsafe block
			byteptr x = v_realloc(((byteptr)(m->metas)), /*SizeOfType*/ sizeof(u32) * mem_size);
			m->metas = ((u32*)(x));
			memset(m->metas + mem_size - _const_extra_metas_inc, 0, /*SizeOfType*/ sizeof(u32) * _const_extra_metas_inc);
		}
		if (probe_count == 252) {
			v_panic(tos_lit("Probe overflow"));
		}
	}
}

static void map_set(map* m, string k, voidptr value) {
	string key = string_clone(k);
	f32 load_factor = ((f32)(m->len << 1)) / ((f32)(m->cap));
	if (load_factor > _const_max_load_factor) {
		map_expand(m);
	}
	multi_return_u32_u32 mr_9362 = map_key_to_index(m, key);
	u32 index = mr_9362.arg0;
	u32 meta = mr_9362.arg1;
	multi_return_u32_u32 mr_9397 = map_meta_less(m, index, meta);
	index = mr_9397.arg0;
	meta = mr_9397.arg1;
	for (;;) {
		if (!(meta == m->metas[index])) break;
		u32 kv_index = m->metas[index + 1];
		if (fast_string_eq(key, m->key_values.keys[kv_index])) {
			memcpy(m->key_values.values + kv_index * ((u32)(m->value_bytes)), value, m->value_bytes);
			return;
		}
		index += 2;
		meta += _const_probe_inc;
	}
	u32 kv_index = DenseArray_push(&m->key_values, key, value);
	map_meta_greater(m, index, meta, kv_index);
	m->len++;
}

static void map_expand(map* m) {
	u32 old_cap = m->cap;
	m->cap = ((m->cap + 2) << 1) - 2;
	if (m->cached_hashbits == 0) {
		m->shift += _const_max_cached_hashbits;
		m->cached_hashbits = _const_max_cached_hashbits;
		map_rehash(m);
	} else {
		map_cached_rehash(m, old_cap);
		m->cached_hashbits--;
	}
}

static void map_rehash(map* m) {
	u32 meta_bytes = /*SizeOfType*/ sizeof(u32) * (m->cap + 2 + m->extra_metas);
	{ // Unsafe block
		byteptr x = v_realloc(((byteptr)(m->metas)), meta_bytes);
		m->metas = ((u32*)(x));
		memset(m->metas, 0, meta_bytes);
	}
	for (u32 i = ((u32)(0U)); i < m->key_values.len; i++) {
		if (m->key_values.keys[i].str == 0) {
			continue;
		}
		multi_return_u32_u32 mr_10794 = map_key_to_index(m, m->key_values.keys[i]);
		u32 index = mr_10794.arg0;
		u32 meta = mr_10794.arg1;
		multi_return_u32_u32 mr_10856 = map_meta_less(m, index, meta);
		index = mr_10856.arg0;
		meta = mr_10856.arg1;
		map_meta_greater(m, index, meta, i);
	}
}

static void map_cached_rehash(map* m, u32 old_cap) {
	u32* old_metas = m->metas;
	int metasize = ((int)(/*SizeOfType*/ sizeof(u32) * (m->cap + 2 + m->extra_metas)));
	m->metas = ((u32*)(vcalloc(metasize)));
	u32 old_extra_metas = m->extra_metas;
	for (u32 i = ((u32)(0U)); i <= old_cap + old_extra_metas; i += 2) {
		if (old_metas[i] == 0) {
			continue;
		}
		u32 old_meta = old_metas[i];
		u32 old_probe_count = ((old_meta >> _const_hashbits) - 1) << 1;
		u32 old_index = ((i - old_probe_count) & (m->cap >> 1));
		u32 index = (((old_index | (old_meta << m->shift))) & m->cap);
		u32 meta = (((old_meta & _const_hash_mask)) | _const_probe_inc);
		multi_return_u32_u32 mr_11613 = map_meta_less(m, index, meta);
		index = mr_11613.arg0;
		meta = mr_11613.arg1;
		u32 kv_index = old_metas[i + 1];
		map_meta_greater(m, index, meta, kv_index);
	}
	v_free(old_metas);
}

static voidptr map_get_and_set(map* m, string key, voidptr zero) {
	for (;;) {
		multi_return_u32_u32 mr_12059 = map_key_to_index(m, key);
		u32 index = mr_12059.arg0;
		u32 meta = mr_12059.arg1;
		for (;;) {
			if (meta == m->metas[index]) {
				u32 kv_index = m->metas[index + 1];
				if (fast_string_eq(key, m->key_values.keys[kv_index])) {
					{ // Unsafe block
						return ((voidptr)(m->key_values.values + kv_index * ((u32)(m->value_bytes))));
					}
				}
			}
			index += 2;
			meta += _const_probe_inc;
			if (meta > m->metas[index]) {
				break;
			}
		}
		map_set(m, key, zero);
	}
	return 0;
}

static voidptr map_get(map m, string key, voidptr zero) {
	multi_return_u32_u32 mr_12736 = map_key_to_index(&m, key);
	u32 index = mr_12736.arg0;
	u32 meta = mr_12736.arg1;
	for (;;) {
		if (meta == m.metas[index]) {
			u32 kv_index = m.metas[index + 1];
			if (fast_string_eq(key, m.key_values.keys[kv_index])) {
				{ // Unsafe block
					return ((voidptr)(m.key_values.values + kv_index * ((u32)(m.value_bytes))));
				}
			}
		}
		index += 2;
		meta += _const_probe_inc;
		if (meta > m.metas[index]) {
			break;
		}
	}
	return zero;
}

static bool map_exists(map m, string key) {
	multi_return_u32_u32 mr_13224 = map_key_to_index(&m, key);
	u32 index = mr_13224.arg0;
	u32 meta = mr_13224.arg1;
	for (;;) {
		if (meta == m.metas[index]) {
			u32 kv_index = m.metas[index + 1];
			if (fast_string_eq(key, m.key_values.keys[kv_index])) {
				return true;
			}
		}
		index += 2;
		meta += _const_probe_inc;
		if (meta > m.metas[index]) {
			break;
		}
	}
	return false;
}

void map_delete(map* m, string key) {
	multi_return_u32_u32 mr_13644 = map_key_to_index(m, key);
	u32 index = mr_13644.arg0;
	u32 meta = mr_13644.arg1;
	multi_return_u32_u32 mr_13679 = map_meta_less(m, index, meta);
	index = mr_13679.arg0;
	meta = mr_13679.arg1;
	for (;;) {
		if (!(meta == m->metas[index])) break;
		u32 kv_index = m->metas[index + 1];
		if (fast_string_eq(key, m->key_values.keys[kv_index])) {
			for (;;) {
				if (!((m->metas[index + 2] >> _const_hashbits) > 1)) break;
				{ // Unsafe block
					m->metas[index] = m->metas[index + 2] - _const_probe_inc;
					m->metas[index + 1] = m->metas[index + 3];
				}
				index += 2;
			}
			m->len--;
			{ // Unsafe block
				m->metas[index] = 0;
			}
			m->key_values.deletes++;
			{ // Unsafe block
				string_free(&m->key_values.keys[kv_index]);
				memset(&m->key_values.keys[kv_index], 0, /*SizeOfType*/ sizeof(string));
			}
			if (m->key_values.len <= 32) {
				return;
			}
			if (m->key_values.deletes >= (m->key_values.len >> 1)) {
				DenseArray_zeros_to_end(&m->key_values);
				map_rehash(m);
				m->key_values.deletes = 0;
			}
			return;
		}
		index += 2;
		meta += _const_probe_inc;
	}
}

array_string map_keys(map* m) {
	array_string keys = __new_array_with_default(m->len, 0, sizeof(string), &(string[]){tos_lit("")});
	int j = 0;
	for (u32 i = ((u32)(0U)); i < m->key_values.len; i++) {
		if (m->key_values.keys[i].str == 0) {
			continue;
		}
		array_set(&keys, j, &(string[]) { string_clone(m->key_values.keys[i]) });
		j++;
	}
	return keys;
}

// Attr: [unsafe]
DenseArray DenseArray_clone(DenseArray d) {
	int ksize = ((int)(d.cap * /*SizeOfType*/ sizeof(string)));
	int vsize = ((int)(d.cap * ((u32)(d.value_bytes))));
	DenseArray res = (DenseArray){
		.value_bytes = d.value_bytes,
		.cap = d.cap,
		.len = d.len,
		.deletes = d.deletes,
		.keys = ((string*)(v_malloc(ksize))),
		.values = ((byteptr)(v_malloc(vsize))),
	};
	{ // Unsafe block
		memcpy(res.keys, d.keys, ksize);
		memcpy(res.values, d.values, vsize);
	}
	return res;
}

// Attr: [unsafe]
map map_clone(map m) {
	int metasize = ((int)(/*SizeOfType*/ sizeof(u32) * (m.cap + 2 + m.extra_metas)));
	map res = (map){
		.value_bytes = m.value_bytes,
		.cap = m.cap,
		.cached_hashbits = m.cached_hashbits,
		.shift = m.shift,
		.key_values = DenseArray_clone(m.key_values),
		.metas = ((u32*)(v_malloc(metasize))),
		.extra_metas = m.extra_metas,
		.len = m.len,
	};
	memcpy(res.metas, m.metas, metasize);
	return res;
}

// Attr: [unsafe]
void map_free(map* m) {
	v_free(m->metas);
	for (u32 i = ((u32)(0U)); i < m->key_values.len; i++) {
		if (m->key_values.keys[i].str == 0) {
			continue;
		}
		string_free(&m->key_values.keys[i]);
	}
	{ // Unsafe block
		v_free(m->key_values.keys);
		v_free(m->key_values.values);
	}
}

string OptionBase_str(OptionBase o) {
	if (o.ok && !o.is_none) {
		return tos_lit("Option{ valid }");
	}
	if (o.is_none) {
		return tos_lit("Option{ none }");
	}
	return _STR("Option{ error: \"%.*s\000\" }", 2, o.v_error);
}

static void opt_ok2(voidptr data, OptionBase* option, int size) {
	{ // Unsafe block
		*option = (OptionBase){.ok = true,.is_none = 0,.v_error = (string){.str=(byteptr)""},.ecode = 0,};
		memcpy(((byteptr)(&option->ecode)) + /*SizeOfType*/ sizeof(int), data, size);
	}
}

string Option_str(Option o) {
	if (o.ok && !o.is_none) {
		return tos_lit("Option{ ok }");
	}
	if (o.is_none) {
		return tos_lit("Option{ none }");
	}
	return _STR("Option{ error: \"%.*s\000\" }", 2, o.v_error);
}

static Option opt_none() {
	return (Option){.ok = false,.is_none = true,.v_error = (string){.str=(byteptr)""},.ecode = 0,};
}

Option v_error(string s) {
	return (Option){.ok = false,.is_none = false,.v_error = s,.ecode = 0,};
}

Option error_with_code(string s, int code) {
	return (Option){.ok = false,.is_none = false,.v_error = s,.ecode = code,};
}

// TypeDecl
string rune_str(rune c) {
	return utf32_to_str(((u32)(c)));
}

bool byte_is_capital(byte c) {
	return c >= 'A' && c <= 'Z';
}

array_byte array_byte_clone(array_byte b) {
	array_byte res = __new_array_with_default(b.len, 0, sizeof(byte), 0);
	for (int i = 0; i < b.len; ++i) {
		array_set(&res, i, &(byte[]) { (*(byte*)array_get(b, i)) });
	}
	return res;
}

string array_byte_bytestr(array_byte b) {
	return bytes2string(b);
}

static string bytes2string(array_byte b) {
	array_byte copy = array_clone(&b);
	array_push(&copy, _MOV((byte[]){ '\0' }));
	string res = tos(copy.data, copy.len - 1);
	return res;
}

static SortedMap new_sorted_map(int n, int value_bytes) {
	return (SortedMap){.value_bytes = value_bytes,.root = new_node(),.len = 0,};
}

static SortedMap new_sorted_map_init(int n, int value_bytes, string* keys, voidptr values) {
	SortedMap out = new_sorted_map(n, value_bytes);
	for (int i = 0; i < n; ++i) {
		SortedMap_set(&out, keys[i], ((byteptr)(values)) + i * value_bytes);
	}
	return out;
}

static mapnode* new_node() {
	return (mapnode*)memdup(&(mapnode){.children = 0,.len = 0,.keys = {0},.values = {0},}, sizeof(mapnode));
}

static void SortedMap_set(SortedMap* m, string key, voidptr value) {
	mapnode* node = m->root;
	int child_index = 0;
	mapnode* parent = ((mapnode*)(0));
	for (;;) {
		if (node->len == _const_max_len) {
			if (isnil(parent)) {
				parent = new_node();
				m->root = parent;
			}
			mapnode_split_child(parent, child_index, node);
			if (string_eq(key, parent->keys[child_index])) {
				memcpy(parent->values[child_index], value, m->value_bytes);
				return;
			}
			if (string_lt(key, parent->keys[child_index])) {
				node = ((mapnode*)(parent->children[child_index]));
			} else {
				node = ((mapnode*)(parent->children[child_index + 1]));
			}
		}
		int i = 0;
		for (;;) {
			if (!(i < node->len && string_gt(key, node->keys[i]))) break;
			i++;
		}
		if (i != node->len && string_eq(key, node->keys[i])) {
			memcpy(node->values[i], value, m->value_bytes);
			return;
		}
		if (isnil(node->children)) {
			int j = node->len - 1;
			for (;;) {
				if (!(j >= 0 && string_lt(key, node->keys[j]))) break;
				node->keys[j + 1] = node->keys[j];
				node->values[j + 1] = node->values[j];
				j--;
			}
			node->keys[j + 1] = key;
			node->values[j + 1] = v_malloc(m->value_bytes);
			memcpy(node->values[j + 1], value, m->value_bytes);
			node->len++;
			m->len++;
			return;
		}
		parent = node;
		child_index = i;
		node = ((mapnode*)(node->children[child_index]));
	}
}

static void mapnode_split_child(mapnode* n, int child_index, mapnode* y) {
	mapnode* z = new_node();
	z->len = _const_mid_index;
	y->len = _const_mid_index;
	for (int j = _const_mid_index - 1; j >= 0; j--) {
		z->keys[j] = y->keys[j + _const_degree];
		z->values[j] = y->values[j + _const_degree];
	}
	if (!isnil(y->children)) {
		z->children = ((voidptr*)(v_malloc(((int)(_const_children_bytes)))));
		for (int jj = _const_degree - 1; jj >= 0; jj--) {
			{ // Unsafe block
				z->children[jj] = y->children[jj + _const_degree];
			}
		}
	}
	if (isnil(n->children)) {
		n->children = ((voidptr*)(v_malloc(((int)(_const_children_bytes)))));
	}
	{ // Unsafe block
		n->children[n->len + 1] = n->children[n->len];
	}
	for (int j = n->len; j > child_index; j--) {
		n->keys[j] = n->keys[j - 1];
		n->values[j] = n->values[j - 1];
		{ // Unsafe block
			n->children[j] = n->children[j - 1];
		}
	}
	n->keys[child_index] = y->keys[_const_mid_index];
	n->values[child_index] = y->values[_const_mid_index];
	{ // Unsafe block
		n->children[child_index] = ((voidptr)(y));
		n->children[child_index + 1] = ((voidptr)(z));
	}
	n->len++;
}

static bool SortedMap_get(SortedMap m, string key, voidptr out) {
	mapnode* node = m.root;
	for (;;) {
		int i = node->len - 1;
		for (;;) {
			if (!(i >= 0 && string_lt(key, node->keys[i]))) break;
			i--;
		}
		if (i != -1 && string_eq(key, node->keys[i])) {
			memcpy(out, node->values[i], m.value_bytes);
			return true;
		}
		if (isnil(node->children)) {
			break;
		}
		node = ((mapnode*)(node->children[i + 1]));
	}
	return false;
}

static bool SortedMap_exists(SortedMap m, string key) {
	if (isnil(m.root)) {
		return false;
	}
	mapnode* node = m.root;
	for (;;) {
		int i = node->len - 1;
		for (;;) {
			if (!(i >= 0 && string_lt(key, node->keys[i]))) break;
			i--;
		}
		if (i != -1 && string_eq(key, node->keys[i])) {
			return true;
		}
		if (isnil(node->children)) {
			break;
		}
		node = ((mapnode*)(node->children[i + 1]));
	}
	return false;
}

static int mapnode_find_key(mapnode* n, string k) {
	int idx = 0;
	for (;;) {
		if (!(idx < n->len && string_lt(n->keys[idx], k))) break;
		idx++;
	}
	return idx;
}

static bool mapnode_remove_key(mapnode* n, string k) {
	int idx = mapnode_find_key(n, k);
	if (idx < n->len && string_eq(n->keys[idx], k)) {
		if (isnil(n->children)) {
			mapnode_remove_from_leaf(n, idx);
		} else {
			mapnode_remove_from_non_leaf(n, idx);
		}
		return true;
	} else {
		if (isnil(n->children)) {
			return false;
		}
		bool flag = (idx == n->len ? (true) : (false));
		if (((mapnode*)(n->children[idx]))->len < _const_degree) {
			mapnode_fill(n, idx);
		}
		mapnode* node = ((mapnode*)(0));
		if (flag && idx > n->len) {
			node = ((mapnode*)(n->children[idx - 1]));
		} else {
			node = ((mapnode*)(n->children[idx]));
		}
		return mapnode_remove_key(node, k);
	}
	return 0;
}

static void mapnode_remove_from_leaf(mapnode* n, int idx) {
	for (int i = idx + 1; i < n->len; i++) {
		n->keys[i - 1] = n->keys[i];
		n->values[i - 1] = n->values[i];
	}
	n->len--;
}

static void mapnode_remove_from_non_leaf(mapnode* n, int idx) {
	string k = n->keys[idx];
	if (((mapnode*)(n->children[idx]))->len >= _const_degree) {
		mapnode* current = ((mapnode*)(n->children[idx]));
		for (;;) {
			if (!(!isnil(current->children))) break;
			current = ((mapnode*)(current->children[current->len]));
		}
		string predecessor = current->keys[current->len - 1];
		n->keys[idx] = predecessor;
		n->values[idx] = current->values[current->len - 1];
		mapnode* node = ((mapnode*)(n->children[idx]));
		mapnode_remove_key(node, predecessor);
	} else if (((mapnode*)(n->children[idx + 1]))->len >= _const_degree) {
		mapnode* current = ((mapnode*)(n->children[idx + 1]));
		for (;;) {
			if (!(!isnil(current->children))) break;
			current = ((mapnode*)(current->children[0]));
		}
		string successor = current->keys[0];
		n->keys[idx] = successor;
		n->values[idx] = current->values[0];
		mapnode* node = ((mapnode*)(n->children[idx + 1]));
		mapnode_remove_key(node, successor);
	} else {
		mapnode_merge(n, idx);
		mapnode* node = ((mapnode*)(n->children[idx]));
		mapnode_remove_key(node, k);
	}
}

static void mapnode_fill(mapnode* n, int idx) {
	if (idx != 0 && ((mapnode*)(n->children[idx - 1]))->len >= _const_degree) {
		mapnode_borrow_from_prev(n, idx);
	} else if (idx != n->len && ((mapnode*)(n->children[idx + 1]))->len >= _const_degree) {
		mapnode_borrow_from_next(n, idx);
	} else if (idx != n->len) {
		mapnode_merge(n, idx);
	} else {
		mapnode_merge(n, idx - 1);
	}
}

static void mapnode_borrow_from_prev(mapnode* n, int idx) {
	mapnode* child = ((mapnode*)(n->children[idx]));
	mapnode* sibling = ((mapnode*)(n->children[idx - 1]));
	for (int i = child->len - 1; i >= 0; i--) {
		child->keys[i + 1] = child->keys[i];
		child->values[i + 1] = child->values[i];
	}
	if (!isnil(child->children)) {
		for (int i = child->len; i >= 0; i--) {
			{ // Unsafe block
				child->children[i + 1] = child->children[i];
			}
		}
	}
	child->keys[0] = n->keys[idx - 1];
	child->values[0] = n->values[idx - 1];
	if (!isnil(child->children)) {
		{ // Unsafe block
			child->children[0] = sibling->children[sibling->len];
		}
	}
	n->keys[idx - 1] = sibling->keys[sibling->len - 1];
	n->values[idx - 1] = sibling->values[sibling->len - 1];
	child->len++;
	sibling->len--;
}

static void mapnode_borrow_from_next(mapnode* n, int idx) {
	mapnode* child = ((mapnode*)(n->children[idx]));
	mapnode* sibling = ((mapnode*)(n->children[idx + 1]));
	child->keys[child->len] = n->keys[idx];
	child->values[child->len] = n->values[idx];
	if (!isnil(child->children)) {
		{ // Unsafe block
			child->children[child->len + 1] = sibling->children[0];
		}
	}
	n->keys[idx] = sibling->keys[0];
	n->values[idx] = sibling->values[0];
	for (int i = 1; i < sibling->len; i++) {
		sibling->keys[i - 1] = sibling->keys[i];
		sibling->values[i - 1] = sibling->values[i];
	}
	if (!isnil(sibling->children)) {
		for (int i = 1; i <= sibling->len; i++) {
			{ // Unsafe block
				sibling->children[i - 1] = sibling->children[i];
			}
		}
	}
	child->len++;
	sibling->len--;
}

static void mapnode_merge(mapnode* n, int idx) {
	mapnode* child = ((mapnode*)(n->children[idx]));
	mapnode* sibling = ((mapnode*)(n->children[idx + 1]));
	child->keys[_const_mid_index] = n->keys[idx];
	child->values[_const_mid_index] = n->values[idx];
	for (int i = 0; i < sibling->len; ++i) {
		child->keys[i + _const_degree] = sibling->keys[i];
		child->values[i + _const_degree] = sibling->values[i];
	}
	if (!isnil(child->children)) {
		for (int i = 0; i <= sibling->len; i++) {
			{ // Unsafe block
				child->children[i + _const_degree] = sibling->children[i];
			}
		}
	}
	for (int i = idx + 1; i < n->len; i++) {
		n->keys[i - 1] = n->keys[i];
		n->values[i - 1] = n->values[i];
	}
	for (int i = idx + 2; i <= n->len; i++) {
		{ // Unsafe block
			n->children[i - 1] = n->children[i];
		}
	}
	child->len += sibling->len + 1;
	n->len--;
}

void SortedMap_delete(SortedMap* m, string key) {
	if (m->root->len == 0) {
		return;
	}
	bool removed = mapnode_remove_key(m->root, key);
	if (removed) {
		m->len--;
	}
	if (m->root->len == 0) {
		if (isnil(m->root->children)) {
			return;
		} else {
			m->root = ((mapnode*)(m->root->children[0]));
		}
	}
}

static int mapnode_subkeys(mapnode* n, array_string* keys, int at) {
	int position = at;
	if (!isnil(n->children)) {
		for (int i = 0; i < n->len; ++i) {
			mapnode* child = ((mapnode*)(n->children[i]));
			position += mapnode_subkeys(child, keys, position);
			array_set(keys, position, &(string[]) { n->keys[i] });
			position++;
		}
		mapnode* child = ((mapnode*)(n->children[n->len]));
		position += mapnode_subkeys(child, keys, position);
	} else {
		for (int i = 0; i < n->len; ++i) {
			array_set(keys, position + i, &(string[]) { n->keys[i] });
		}
		position += n->len;
	}
	return position - at;
}

array_string SortedMap_keys(SortedMap* m) {
	array_string keys = __new_array_with_default(m->len, 0, sizeof(string), &(string[]){tos_lit("")});
	if (isnil(m->root) || m->root->len == 0) {
		return keys;
	}
	mapnode_subkeys(m->root, &/*arr*/keys, 0);
	return keys;
}

static void mapnode_free(mapnode* n) {
	println(tos_lit("TODO"));
}

void SortedMap_free(SortedMap* m) {
	if (isnil(m->root)) {
		return;
	}
	mapnode_free(m->root);
}

void SortedMap_print(SortedMap m) {
	println(tos_lit("TODO"));
}

// Attr: [unsafe]
int vstrlen(byteptr s) {
	return strlen(((charptr)(s)));
}

// Attr: [unsafe]
string tos(byteptr s, int len) {
	if (s == 0) {
		v_panic(tos_lit("tos(): nil string"));
	}
	return (string){.str = s, .len = len};
}

string tos_clone(byteptr s) {
	return string_clone(tos2(s));
}

string tos2(byteptr s) {
	if (s == 0) {
		v_panic(tos_lit("tos2: nil string"));
	}
	return (string){.str = s, .len = vstrlen(s)};
}

string tos3(charptr s) {
	if (s == 0) {
		v_panic(tos_lit("tos3: nil string"));
	}
	return (string){.str = ((byteptr)(s)), .len = strlen(s)};
}

string tos_lit(charptr s) {
	return (string){.str = ((byteptr)(s)), .len = strlen(s), .is_lit = 1};
}

// Attr: [unsafe]
string byteptr_vstring(byteptr bp) {
	return (string){.str = bp, .len = strlen(((charptr)(bp)))};
}

// Attr: [unsafe]
string byteptr_vstring_with_len(byteptr bp, int len) {
	return (string){.str = bp, .len = len};
}

static string string_clone_static(string a) {
	return string_clone(a);
}

string string_clone(string a) {
	string b = (string){.str = v_malloc(a.len + 1), .len = a.len};
	{ // Unsafe block
		memcpy(b.str, a.str, a.len);
		b.str[a.len] = '\0';
	}
	return b;
}

// Attr: [unsafe]
string cstring_to_vstring(byteptr cstr) {
	return tos_clone(cstr);
}

string string_replace_once(string s, string rep, string with) {
	Option_int _t35 = string_index(s, rep);
	if (!_t35.ok) {
		string err = _t35.v_error;
		int errcode = _t35.ecode;
		return string_clone(s);
	}
 	int index = *(int*) _t35.data;
	return string_add(string_add(string_substr(s, 0, index), with), string_substr(s, index + rep.len, s.len));
}

string string_replace(string s, string rep, string with) {
	if (s.len == 0 || rep.len == 0) {
		return string_clone(s);
	}
	array_int idxs = __new_array_with_default(0, 0, sizeof(int), 0);
	int idx = 0;
	for (;;) {
		idx = string_index_after(s, rep, idx);
		if (idx == -1) {
			break;
		}
		array_push(&idxs, _MOV((int[]){ idx }));
		idx += rep.len;
	}
	if (idxs.len == 0) {
		// Defer begin
		array_free(&idxs);
		// Defer end
		return string_clone(s);
	}
	int new_len = s.len + idxs.len * (with.len - rep.len);
	byteptr b = v_malloc(new_len + 1);
	int idx_pos = 0;
	int cur_idx = (*(int*)array_get(idxs, idx_pos));
	int b_i = 0;
	for (int i = 0; i < s.len; i++) {
		if (i == cur_idx) {
			for (int j = 0; j < with.len; ++j) {
				{ // Unsafe block
					b[b_i] = string_at(with, j);
				}
				b_i++;
			}
			i += rep.len - 1;
			idx_pos++;
			if (idx_pos < idxs.len) {
				cur_idx = (*(int*)array_get(idxs, idx_pos));
			}
		} else {
			{ // Unsafe block
				b[b_i] = string_at(s, i);
			}
			b_i++;
		}
	}
	{ // Unsafe block
		b[new_len] = '\0';
		// Defer begin
		array_free(&idxs);
		// Defer end
		return tos(b, new_len);
	}
	return (string){.str=(byteptr)""};
}

static int compare_rep_index(RepIndex* a, RepIndex* b) {
	if (a->idx < b->idx) {
		return -1;
	}
	if (a->idx > b->idx) {
		return 1;
	}
	return 0;
}

static void array_RepIndex_sort2(array_RepIndex* a) {
	array_sort_with_compare(a, compare_rep_index);
}

string string_replace_each(string s, array_string vals) {
	if (s.len == 0 || vals.len == 0) {
		return s;
	}
	if (vals.len % 2 != 0) {
		println(tos_lit("string.replace_each(): odd number of strings"));
		return s;
	}
	int new_len = s.len;
	array_RepIndex idxs = __new_array_with_default(0, 0, sizeof(RepIndex), 0);
	int idx = 0;
	for (int rep_i = 0; rep_i < vals.len; rep_i += 2) {
		string rep = (*(string*)array_get(vals, rep_i));
		string with = (*(string*)array_get(vals, rep_i + 1));
		for (;;) {
			idx = string_index_after(s, rep, idx);
			if (idx == -1) {
				break;
			}
			array_push(&idxs, _MOV((RepIndex[]){ (RepIndex){.idx = idx,.val_idx = rep_i,} }));
			idx += rep.len;
			new_len += with.len - rep.len;
		}
	}
	if (idxs.len == 0) {
		return s;
	}
	array_RepIndex_sort2(&idxs);
	byteptr b = v_malloc(new_len + 1);
	int idx_pos = 0;
	RepIndex cur_idx = (*(RepIndex*)array_get(idxs, idx_pos));
	int b_i = 0;
	for (int i = 0; i < s.len; i++) {
		if (i == cur_idx.idx) {
			string rep = (*(string*)array_get(vals, cur_idx.val_idx));
			string with = (*(string*)array_get(vals, cur_idx.val_idx + 1));
			for (int j = 0; j < with.len; ++j) {
				{ // Unsafe block
					b[b_i] = string_at(with, j);
				}
				b_i++;
			}
			i += rep.len - 1;
			idx_pos++;
			if (idx_pos < idxs.len) {
				cur_idx = (*(RepIndex*)array_get(idxs, idx_pos));
			}
		} else {
			{ // Unsafe block
				b[b_i] = s.str[i];
			}
			b_i++;
		}
	}
	{ // Unsafe block
		b[new_len] = '\0';
		return tos(b, new_len);
	}
	return (string){.str=(byteptr)""};
}

bool string_bool(string s) {
	return string_eq(s, tos_lit("true")) || string_eq(s, tos_lit("t"));
}

int string_int(string s) {
	return ((int)(strconv__common_parse_int(s, 0, 32, false, false)));
}

i64 string_i64(string s) {
	return strconv__common_parse_int(s, 0, 64, false, false);
}

i8 string_i8(string s) {
	return ((i8)(strconv__common_parse_int(s, 0, 8, false, false)));
}

i16 string_i16(string s) {
	return ((i16)(strconv__common_parse_int(s, 0, 16, false, false)));
}

f32 string_f32(string s) {
	return ((f32)(strconv__atof64(s)));
}

f64 string_f64(string s) {
	return strconv__atof64(s);
}

u16 string_u16(string s) {
	return ((u16)(strconv__common_parse_uint(s, 0, 16, false, false)));
}

u32 string_u32(string s) {
	return ((u32)(strconv__common_parse_uint(s, 0, 32, false, false)));
}

u64 string_u64(string s) {
	return strconv__common_parse_uint(s, 0, 64, false, false);
}

static bool string_eq(string s, string a) {
	if (s.str == 0) {
		v_panic(tos_lit("string.eq(): nil string"));
	}
	if (s.len != a.len) {
		return false;
	}
	{ // Unsafe block
		return memcmp(s.str, a.str, a.len) == 0;
	}
	return 0;
}

static bool string_ne(string s, string a) {
	return !string_eq(s, a);
}

static bool string_lt(string s, string a) {
	for (int i = 0; i < s.len; ++i) {
		if (i >= a.len || string_at(s, i) > string_at(a, i)) {
			return false;
		} else if (string_at(s, i) < string_at(a, i)) {
			return true;
		}
	}
	if (s.len < a.len) {
		return true;
	}
	return false;
}

static bool string_le(string s, string a) {
	return string_lt(s, a) || string_eq(s, a);
}

static bool string_gt(string s, string a) {
	return !string_le(s, a);
}

static bool string_ge(string s, string a) {
	return !string_lt(s, a);
}

static string string_add(string s, string a) {
	int new_len = a.len + s.len;
	string res = (string){.str = v_malloc(new_len + 1), .len = new_len};
	for (int j = 0; j < s.len; ++j) {
		{ // Unsafe block
			res.str[j] = s.str[j];
		}
	}
	for (int j = 0; j < a.len; ++j) {
		{ // Unsafe block
			res.str[s.len + j] = a.str[j];
		}
	}
	{ // Unsafe block
		res.str[new_len] = '\0';
	}
	return res;
}

array_string string_split(string s, string delim) {
	return string_split_nth(s, delim, 0);
}

array_string string_split_nth(string s, string delim, int nth) {
	array_string res = __new_array_with_default(0, 0, sizeof(string), 0);
	int i = 0;
	if (delim.len == 0) {
		i = 1;
		for (int _t38 = 0; _t38 < s.len; ++_t38) {
			byte ch = s.str[_t38];
			if (nth > 0 && i >= nth) {
				array_push(&res, _MOV((string[]){ string_substr(s, i, s.len) }));
				break;
			}
			array_push(&res, _MOV((string[]){ byte_str(ch) }));
			i++;
		}
		return res;
	}
	int start = 0;
	int nth_1 = nth - 1;
	for (;;) {
		if (!(i <= s.len)) break;
		bool is_delim = s.str[i] == delim.str[0];
		int j = 0;
		for (;;) {
			if (!(is_delim && j < delim.len)) break;
			is_delim = is_delim && s.str[i + j] == delim.str[j];
			j++;
		}
		bool last = i == s.len - 1;
		if (is_delim || last) {
			if (!is_delim && last) {
				i++;
			}
			string val = string_substr(s, start, i);
			if (string_starts_with(val, delim)) {
				val = string_right(val, delim.len);
			}
			bool was_last = nth > 0 && res.len == nth_1;
			if (was_last) {
				array_push(&res, _MOV((string[]){ string_right(s, start) }));
				break;
			}
			array_push(&res, _MOV((string[]){ val }));
			start = i + delim.len;
		}
		i++;
	}
	if (string_ends_with(s, delim) && (nth < 1 || res.len < nth)) {
		array_push(&res, _MOV((string[]){ tos_lit("") }));
	}
	return res;
}

array_string string_split_into_lines(string s) {
	array_string res = __new_array_with_default(0, 0, sizeof(string), 0);
	if (s.len == 0) {
		return res;
	}
	int start = 0;
	for (int i = 0; i < s.len; i++) {
		bool is_lf = s.str[i] == '\n';
		bool is_crlf = i != s.len - 1 && s.str[i] == '\r' && s.str[i + 1] == '\n';
		bool is_eol = is_lf || is_crlf;
		bool is_last = (is_crlf ? (i == s.len - 2) : (i == s.len - 1));
		if (is_eol || is_last) {
			if (is_last && !is_eol) {
				i++;
			}
			string line = string_substr(s, start, i);
			array_push(&res, _MOV((string[]){ line }));
			if (is_crlf) {
				i++;
			}
			start = i + 1;
		}
	}
	return res;
}

static string string_left(string s, int n) {
	if (n >= s.len) {
		return s;
	}
	return string_substr(s, 0, n);
}

static string string_right(string s, int n) {
	if (n >= s.len) {
		return tos_lit("");
	}
	return string_substr(s, n, s.len);
}

static string string_substr2(string s, int start, int _end, bool end_max) {
	int end = (end_max ? (s.len) : (_end));
	return string_substr(s, start, end);
}

string string_substr(string s, int start, int end) {
	#if !defined(CUSTOM_DEFINE_no_bounds_checking)
	{
		if (start > end || start > s.len || end > s.len || start < 0 || end < 0) {
			v_panic(_STR("substr(%"PRId32"\000, %"PRId32"\000) out of bounds (len=%"PRId32"\000)", 4, start, end, s.len));
		}
	}
	#endif
	int len = end - start;
	string res = (string){.str = v_malloc(len + 1), .len = len};
	for (int i = 0; i < len; ++i) {
		{ // Unsafe block
			res.str[i] = s.str[start + i];
		}
	}
	{ // Unsafe block
		res.str[len] = '\0';
	}
	return res;
}

int string_index_old(string s, string p) {
	if (p.len > s.len || p.len == 0) {
		return -1;
	}
	int i = 0;
	for (;;) {
		if (!(i < s.len)) break;
		int j = 0;
		for (;;) {
			if (!(j < p.len && s.str[i + j] == p.str[j])) break;
			j++;
		}
		if (j == p.len) {
			return i;
		}
		i++;
	}
	return -1;
}

Option_int string_index(string s, string p) {
	if (p.len > s.len || p.len == 0) {
		Option _t45 = opt_none();
		return *(Option_int*)&_t45;
	}
	int i = 0;
	for (;;) {
		if (!(i < s.len)) break;
		int j = 0;
		for (;;) {
			if (!(j < p.len && s.str[i + j] == p.str[j])) break;
			j++;
		}
		if (j == p.len) {
			Option_int _t46;
			opt_ok2(&(int[]) { i }, (OptionBase*)(&_t46), sizeof(int));
			return _t46;
		}
		i++;
	}
	Option _t47 = opt_none();
	return *(Option_int*)&_t47;
}

static int string_index_kmp(string s, string p) {
	if (p.len > s.len) {
		return -1;
	}
	array_int prefix = __new_array_with_default(p.len, 0, sizeof(int), 0);
	int j = 0;
	for (int i = 1; i < p.len; i++) {
		for (;;) {
			if (!(p.str[j] != p.str[i] && j > 0)) break;
			j = (*(int*)array_get(prefix, j - 1));
		}
		if (p.str[j] == p.str[i]) {
			j++;
		}
		array_set(&prefix, i, &(int[]) { j });
	}
	j = 0;
	for (int i = 0; i < s.len; ++i) {
		for (;;) {
			if (!(p.str[j] != s.str[i] && j > 0)) break;
			j = (*(int*)array_get(prefix, j - 1));
		}
		if (p.str[j] == s.str[i]) {
			j++;
		}
		if (j == p.len) {
			return i - p.len + 1;
		}
	}
	return -1;
}

int string_index_any(string s, string chars) {
	for (int _t48 = 0; _t48 < chars.len; ++_t48) {
		byte c = chars.str[_t48];
		Option_int _t49 = string_index(s, byte_str(c));
		if (!_t49.ok) {
			string err = _t49.v_error;
			int errcode = _t49.ecode;
			continue;
		}
 		int index = *(int*) _t49.data;
		return index;
	}
	return -1;
}

Option_int string_last_index(string s, string p) {
	if (p.len > s.len || p.len == 0) {
		Option _t50 = opt_none();
		return *(Option_int*)&_t50;
	}
	int i = s.len - p.len;
	for (;;) {
		if (!(i >= 0)) break;
		int j = 0;
		for (;;) {
			if (!(j < p.len && s.str[i + j] == p.str[j])) break;
			j++;
		}
		if (j == p.len) {
			Option_int _t51;
			opt_ok2(&(int[]) { i }, (OptionBase*)(&_t51), sizeof(int));
			return _t51;
		}
		i--;
	}
	Option _t52 = opt_none();
	return *(Option_int*)&_t52;
}

int string_index_after(string s, string p, int start) {
	if (p.len > s.len) {
		return -1;
	}
	int strt = start;
	if (start < 0) {
		strt = 0;
	}
	if (start >= s.len) {
		return -1;
	}
	int i = strt;
	for (;;) {
		if (!(i < s.len)) break;
		int j = 0;
		int ii = i;
		for (;;) {
			if (!(j < p.len && s.str[ii] == p.str[j])) break;
			j++;
			ii++;
		}
		if (j == p.len) {
			return i;
		}
		i++;
	}
	return -1;
}

int string_index_byte(string s, byte c) {
	for (int i = 0; i < s.len; ++i) {
		if (s.str[i] == c) {
			return i;
		}
	}
	return -1;
}

int string_last_index_byte(string s, byte c) {
	for (int i = s.len - 1; i >= 0; i--) {
		if (s.str[i] == c) {
			return i;
		}
	}
	return -1;
}

int string_count(string s, string substr) {
	if (s.len == 0 || substr.len == 0) {
		return 0;
	}
	if (substr.len > s.len) {
		return 0;
	}
	int n = 0;
	int i = 0;
	for (;;) {
		i = string_index_after(s, substr, i);
		if (i == -1) {
			return n;
		}
		i += substr.len;
		n++;
	}
	return 0;
}

bool string_contains(string s, string substr) {
	if (substr.len == 0) {
		return true;
	}
	Option_int _t53 = string_index(s, substr);
	if (!_t53.ok) {
		string err = _t53.v_error;
		int errcode = _t53.ecode;
		return false;
	};
	return true;
}

bool string_contains_any(string s, string chars) {
	for (int _t54 = 0; _t54 < chars.len; ++_t54) {
		byte c = chars.str[_t54];
		if (string_contains(s, byte_str(c))) {
			return true;
		}
	}
	return false;
}

bool string_contains_any_substr(string s, array_string substrs) {
	if (substrs.len == 0) {
		return true;
	}
	// FOR IN array
	array _t55 = substrs;
	for (int _t56 = 0; _t56 < _t55.len; ++_t56) {
		string sub = ((string*)_t55.data)[_t56];
		if (string_contains(s, sub)) {
			return true;
		}
	}
	return false;
}

bool string_starts_with(string s, string p) {
	if (p.len > s.len) {
		return false;
	}
	for (int i = 0; i < p.len; ++i) {
		if (s.str[i] != p.str[i]) {
			return false;
		}
	}
	return true;
}

bool string_ends_with(string s, string p) {
	if (p.len > s.len) {
		return false;
	}
	for (int i = 0; i < p.len; ++i) {
		if (string_at(p, i) != string_at(s, s.len - p.len + i)) {
			return false;
		}
	}
	return true;
}

string string_to_lower(string s) {
	{ // Unsafe block
		byteptr b = v_malloc(s.len + 1);
		for (int i = 0; i < s.len; ++i) {
			b[i] = ((byte)(tolower(s.str[i])));
		}
		return tos(b, s.len);
	}
	return (string){.str=(byteptr)""};
}

bool string_is_lower(string s) {
	for (int i = 0; i < s.len; ++i) {
		if (string_at(s, i) >= 'A' && string_at(s, i) <= 'Z') {
			return false;
		}
	}
	return true;
}

string string_to_upper(string s) {
	{ // Unsafe block
		byteptr b = v_malloc(s.len + 1);
		for (int i = 0; i < s.len; ++i) {
			b[i] = ((byte)(toupper(s.str[i])));
		}
		return tos(b, s.len);
	}
	return (string){.str=(byteptr)""};
}

bool string_is_upper(string s) {
	for (int i = 0; i < s.len; ++i) {
		if (string_at(s, i) >= 'a' && string_at(s, i) <= 'z') {
			return false;
		}
	}
	return true;
}

string string_capitalize(string s) {
	if (s.len == 0) {
		return tos_lit("");
	}
	return string_add(string_to_upper(byte_str(string_at(s, 0))), string_substr(s, 1, s.len));
}

bool string_is_capital(string s) {
	if (s.len == 0 || !(string_at(s, 0) >= 'A' && string_at(s, 0) <= 'Z')) {
		return false;
	}
	for (int i = 1; i < s.len; ++i) {
		if (string_at(s, i) >= 'A' && string_at(s, i) <= 'Z') {
			return false;
		}
	}
	return true;
}

string string_title(string s) {
	array_string words = string_split(s, tos_lit(" "));
	array_string tit = __new_array_with_default(0, 0, sizeof(string), 0);
	// FOR IN array
	array _t57 = words;
	for (int _t58 = 0; _t58 < _t57.len; ++_t58) {
		string word = ((string*)_t57.data)[_t58];
		array_push(&tit, _MOV((string[]){ string_capitalize(word) }));
	}
	string title = array_string_join(tit, tos_lit(" "));
	return title;
}

bool string_is_title(string s) {
	array_string words = string_split(s, tos_lit(" "));
	// FOR IN array
	array _t60 = words;
	for (int _t61 = 0; _t61 < _t60.len; ++_t61) {
		string word = ((string*)_t60.data)[_t61];
		if (!string_is_capital(word)) {
			return false;
		}
	}
	return true;
}

string string_find_between(string s, string start, string end) {
	Option_int _t62 = string_index(s, start);
	if (!_t62.ok) {
		string err = _t62.v_error;
		int errcode = _t62.ecode;
		return tos_lit("");
	}
 	int start_pos = *(int*) _t62.data;
	string val = string_right(s, start_pos + start.len);
	Option_int _t63 = string_index(val, end);
	if (!_t63.ok) {
		string err = _t63.v_error;
		int errcode = _t63.ecode;
		return val;
	}
 	int end_pos = *(int*) _t63.data;
	return string_left(val, end_pos);
}

static bool array_string_contains(array_string ar, string val) {
	// FOR IN array
	array _t64 = ar;
	for (int _t65 = 0; _t65 < _t64.len; ++_t65) {
		string s = ((string*)_t64.data)[_t65];
		if (string_eq(s, val)) {
			return true;
		}
	}
	return false;
}

bool byte_is_space(byte c) {
	return (c == ' ' || c == '\n' || c == '\t' || c == '\v' || c == '\f' || c == '\r' || c == 0x85 || c == 0xa0);
}

string string_trim_space(string s) {
	return string_trim(s, tos_lit(" \n\t\v\f\r"));
}

string string_trim(string s, string cutset) {
	if (s.len < 1 || cutset.len < 1) {
		return s;
	}
	array_byte cs_arr = string_bytes(cutset);
	int pos_left = 0;
	int pos_right = s.len - 1;
	bool cs_match = true;
	for (;;) {
		if (!(pos_left <= s.len && pos_right >= -1 && cs_match)) break;
		cs_match = false;
		if (_IN(byte, string_at(s, pos_left), cs_arr)) {
			pos_left++;
			cs_match = true;
		}
		if (_IN(byte, string_at(s, pos_right), cs_arr)) {
			pos_right--;
			cs_match = true;
		}
		if (pos_left > pos_right) {
			return tos_lit("");
		}
	}
	return string_substr(s, pos_left, pos_right + 1);
}

string string_trim_left(string s, string cutset) {
	if (s.len < 1 || cutset.len < 1) {
		return s;
	}
	array_byte cs_arr = string_bytes(cutset);
	int pos = 0;
	for (;;) {
		if (!(pos < s.len && _IN(byte, string_at(s, pos), cs_arr))) break;
		pos++;
	}
	return string_right(s, pos);
}

string string_trim_right(string s, string cutset) {
	if (s.len < 1 || cutset.len < 1) {
		return s;
	}
	array_byte cs_arr = string_bytes(cutset);
	int pos = s.len - 1;
	for (;;) {
		if (!(pos >= 0 && _IN(byte, string_at(s, pos), cs_arr))) break;
		pos--;
	}
	return (pos < 0 ? (tos_lit("")) : (string_left(s, pos + 1)));
}

string string_trim_prefix(string s, string str) {
	if (string_starts_with(s, str)) {
		return string_substr(s, str.len, s.len);
	}
	return s;
}

string string_trim_suffix(string s, string str) {
	if (string_ends_with(s, str)) {
		return string_substr(s, 0, s.len - str.len);
	}
	return s;
}

int compare_strings(string* a, string* b) {
	if (string_lt(/*rec*/*a, *b)) {
		return -1;
	}
	if (string_gt(/*rec*/*a, *b)) {
		return 1;
	}
	return 0;
}

static int compare_strings_reverse(string* a, string* b) {
	if (string_lt(/*rec*/*a, *b)) {
		return 1;
	}
	if (string_gt(/*rec*/*a, *b)) {
		return -1;
	}
	return 0;
}

static int compare_strings_by_len(string* a, string* b) {
	if (a->len < b->len) {
		return -1;
	}
	if (a->len > b->len) {
		return 1;
	}
	return 0;
}

static int compare_lower_strings(string* a, string* b) {
	string aa = string_to_lower(/*rec*/*a);
	string bb = string_to_lower(/*rec*/*b);
	return compare_strings((voidptr)&/*qq*/aa, (voidptr)&/*qq*/bb);
}

void array_string_sort(array_string* s) {
	array_sort_with_compare(s, compare_strings);
}

void array_string_sort_ignore_case(array_string* s) {
	array_sort_with_compare(s, compare_lower_strings);
}

void array_string_sort_by_len(array_string* s) {
	array_sort_with_compare(s, compare_strings_by_len);
}

string string_str(string s) {
	return s;
}

string ustring_str(ustring s) {
	return s.s;
}

ustring string_ustring(string s) {
	ustring res = (ustring){.s = s,.runes = __new_array(0, s.len, ((int)(/*SizeOfType*/ sizeof(int)))),.len = 0,};
	for (int i = 0; i < s.len; i++) {
		int char_len = utf8_char_len(s.str[i]);
		array_push(&res.runes, _MOV((int[]){ i }));
		i += char_len - 1;
		res.len++;
	}
	return res;
}

ustring string_ustring_tmp(string s) {
	if (g_ustring_runes.len == 0) {
		g_ustring_runes = __new_array(0, 128, ((int)(/*SizeOfType*/ sizeof(int))));
	}
	ustring res = (ustring){.s = s,.runes = __new_array(0, 1, sizeof(int)),.len = 0,};
	res.runes = g_ustring_runes;
	res.runes.len = s.len;
	int j = 0;
	for (int i = 0; i < s.len; i++) {
		int char_len = utf8_char_len(s.str[i]);
		(*(int*)array_get(res.runes, j)) = i;
		j++;
		i += char_len - 1;
		res.len++;
	}
	return res;
}

static bool ustring_eq(ustring u, ustring a) {
	if (u.len != a.len || string_ne(u.s, a.s)) {
		return false;
	}
	return true;
}

static bool ustring_ne(ustring u, ustring a) {
	return !ustring_eq(u, a);
}

static bool ustring_lt(ustring u, ustring a) {
	return string_lt(u.s, a.s);
}

static bool ustring_le(ustring u, ustring a) {
	return ustring_lt(u, a) || ustring_eq(u, a);
}

static bool ustring_gt(ustring u, ustring a) {
	return !ustring_le(u, a);
}

static bool ustring_ge(ustring u, ustring a) {
	return !ustring_lt(u, a);
}

ustring ustring_add(ustring u, ustring a) {
	ustring res = (ustring){.s = string_add(u.s, a.s),.runes = __new_array(0, u.s.len + a.s.len, ((int)(/*SizeOfType*/ sizeof(int)))),.len = 0,};
	int j = 0;
	for (int i = 0; i < u.s.len; i++) {
		int char_len = utf8_char_len(u.s.str[i]);
		array_push(&res.runes, _MOV((int[]){ j }));
		i += char_len - 1;
		j += char_len;
		res.len++;
	}
	for (int i = 0; i < a.s.len; i++) {
		int char_len = utf8_char_len(a.s.str[i]);
		array_push(&res.runes, _MOV((int[]){ j }));
		i += char_len - 1;
		j += char_len;
		res.len++;
	}
	return res;
}

int ustring_index_after(ustring u, ustring p, int start) {
	if (p.len > u.len) {
		return -1;
	}
	int strt = start;
	if (start < 0) {
		strt = 0;
	}
	if (start > u.len) {
		return -1;
	}
	int i = strt;
	for (;;) {
		if (!(i < u.len)) break;
		int j = 0;
		int ii = i;
		for (;;) {
			if (!(j < p.len && string_eq(ustring_at(u, ii), ustring_at(p, j)))) break;
			j++;
			ii++;
		}
		if (j == p.len) {
			return i;
		}
		i++;
	}
	return -1;
}

int ustring_count(ustring u, ustring substr) {
	if (u.len == 0 || substr.len == 0) {
		return 0;
	}
	if (substr.len > u.len) {
		return 0;
	}
	int n = 0;
	int i = 0;
	for (;;) {
		i = ustring_index_after(u, substr, i);
		if (i == -1) {
			return n;
		}
		i += substr.len;
		n++;
	}
	return 0;
}

string ustring_substr(ustring u, int _start, int _end) {
	#if !defined(CUSTOM_DEFINE_no_bounds_checking)
	{
		if (_start > _end || _start > u.len || _end > u.len || _start < 0 || _end < 0) {
			v_panic(_STR("substr(%"PRId32"\000, %"PRId32"\000) out of bounds (len=%"PRId32"\000)", 4, _start, _end, u.len));
		}
	}
	#endif
	int end = (_end >= u.len ? (u.s.len) : ((*(int*)array_get(u.runes, _end))));
	return string_substr(u.s, (*(int*)array_get(u.runes, _start)), end);
}

string ustring_left(ustring u, int pos) {
	if (pos >= u.len) {
		return u.s;
	}
	return ustring_substr(u, 0, pos);
}

string ustring_right(ustring u, int pos) {
	if (pos >= u.len) {
		return tos_lit("");
	}
	return ustring_substr(u, pos, u.len);
}

static byte string_at(string s, int idx) {
	#if !defined(CUSTOM_DEFINE_no_bounds_checking)
	{
		if (idx < 0 || idx >= s.len) {
			v_panic(_STR("string index out of range: %"PRId32"\000 / %"PRId32"", 2, idx, s.len));
		}
	}
	#endif
	{ // Unsafe block
		return s.str[idx];
	}
	return 0;
}

string ustring_at(ustring u, int idx) {
	#if !defined(CUSTOM_DEFINE_no_bounds_checking)
	{
		if (idx < 0 || idx >= u.len) {
			v_panic(_STR("string index out of range: %"PRId32"\000 / %"PRId32"", 2, idx, u.runes.len));
		}
	}
	#endif
	return ustring_substr(u, idx, idx + 1);
}

// Attr: [unsafe]
static void ustring_free(ustring* u) {
	#if defined(_VPREALLOC)
	{
	}
	#endif
	array_free(&u->runes);
}

bool byte_is_digit(byte c) {
	return c >= '0' && c <= '9';
}

bool byte_is_hex_digit(byte c) {
	return byte_is_digit(c) || (c >= 'a' && c <= 'f') || (c >= 'A' && c <= 'F');
}

bool byte_is_oct_digit(byte c) {
	return c >= '0' && c <= '7';
}

bool byte_is_bin_digit(byte c) {
	return c == '0' || c == '1';
}

bool byte_is_letter(byte c) {
	return (c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z');
}

void string_free(string* s) {
	#if defined(_VPREALLOC)
	{
	}
	#endif
	if (s->is_lit == -98761234) {
		printf("double string.free() detected\n");
		return;
	}
	if (s->is_lit == 1 || s->len == 0) {
		return;
	}
	v_free(s->str);
	s->is_lit = -98761234;
}

string string_all_before(string s, string dot) {
	Option_int _t69 = string_index(s, dot);
	if (!_t69.ok) {
		string err = _t69.v_error;
		int errcode = _t69.ecode;
		return s;
	}
 	int pos = *(int*) _t69.data;
	return string_left(s, pos);
}

string string_all_before_last(string s, string dot) {
	Option_int _t70 = string_last_index(s, dot);
	if (!_t70.ok) {
		string err = _t70.v_error;
		int errcode = _t70.ecode;
		return s;
	}
 	int pos = *(int*) _t70.data;
	return string_left(s, pos);
}

string string_all_after(string s, string dot) {
	Option_int _t71 = string_index(s, dot);
	if (!_t71.ok) {
		string err = _t71.v_error;
		int errcode = _t71.ecode;
		return s;
	}
 	int pos = *(int*) _t71.data;
	return string_right(s, pos + dot.len);
}

string string_all_after_last(string s, string dot) {
	Option_int _t72 = string_last_index(s, dot);
	if (!_t72.ok) {
		string err = _t72.v_error;
		int errcode = _t72.ecode;
		return s;
	}
 	int pos = *(int*) _t72.data;
	return string_right(s, pos + dot.len);
}

string string_after(string s, string dot) {
	return string_all_after_last(s, dot);
}

string string_after_char(string s, byte dot) {
	int pos = 0;
	for (int i = 0; i < s.len; ++i) {
		byte c = s.str[i];
		if (c == dot) {
			pos = i;
			break;
		}
	}
	if (pos == 0) {
		return s;
	}
	return string_right(s, pos + 1);
}

string array_string_join(array_string a, string del) {
	if (a.len == 0) {
		return tos_lit("");
	}
	int len = 0;
	// FOR IN array
	array _t73 = a;
	for (int _t74 = 0; _t74 < _t73.len; ++_t74) {
		string val = ((string*)_t73.data)[_t74];
		len += val.len + del.len;
	}
	len -= del.len;
	string res = tos_lit("");
	res.len = len;
	res.str = v_malloc(res.len + 1);
	int idx = 0;
	// FOR IN array
	array _t75 = a;
	for (int i = 0; i < _t75.len; ++i) {
		string val = ((string*)_t75.data)[i];
		for (int j = 0; j < val.len; ++j) {
			{ // Unsafe block
				res.str[idx] = val.str[j];
			}
			idx++;
		}
		if (i != a.len - 1) {
			for (int k = 0; k < del.len; ++k) {
				{ // Unsafe block
					res.str[idx] = del.str[k];
				}
				idx++;
			}
		}
	}
	{ // Unsafe block
		res.str[res.len] = '\0';
	}
	return res;
}

string array_string_join_lines(array_string s) {
	return array_string_join(s, tos_lit("\n"));
}

string string_reverse(string s) {
	if (s.len == 0 || s.len == 1) {
		return s;
	}
	string res = (string){.str = v_malloc(s.len), .len = s.len};
	for (int i = s.len - 1; i >= 0; i--) {
		{ // Unsafe block
			res.str[s.len - i - 1] = string_at(s, i);
		}
	}
	return res;
}

string string_limit(string s, int max) {
	ustring u = string_ustring(s);
	if (u.len <= max) {
		return s;
	}
	return ustring_substr(u, 0, max);
}

// Attr: [deprecated]
bool byte_is_white(byte c) {
	eprintln(tos_lit("warning: `string.is_white` has been deprecated, use `string.is_space` instead"));
	return byte_is_space(c);
}

int string_hash(string s) {
	u32 h = ((u32)(0U));
	if (h == 0 && s.len > 0) {
		for (int _t76 = 0; _t76 < s.len; ++_t76) {
			byte c = s.str[_t76];
			h = h * 31 + ((u32)(c));
		}
	}
	return ((int)(h));
}

array_byte string_bytes(string s) {
	if (s.len == 0) {
		return __new_array_with_default(0, 0, sizeof(byte), 0);
	}
	array_byte buf = __new_array_with_default(s.len, 0, sizeof(byte), 0);
	memcpy(buf.data, s.str, s.len);
	return buf;
}

string string_repeat(string s, int count) {
	if (count < 0) {
		v_panic(_STR("string.repeat: count is negative: %"PRId32"", 1, count));
	} else if (count == 0) {
		return tos_lit("");
	} else if (count == 1) {
		return s;
	}
	byteptr ret = v_malloc(s.len * count + 1);
	for (int i = 0; i < count; ++i) {
		for (int j = 0; j < s.len; ++j) {
			{ // Unsafe block
				ret[i * s.len + j] = string_at(s, j);
			}
		}
	}
	{ // Unsafe block
		int new_len = s.len * count;
		ret[new_len] = 0;
		return byteptr_vstring_with_len(ret, new_len);
	}
	return (string){.str=(byteptr)""};
}

array_string string_fields(string s) {
	return string_split(string_replace(s, tos_lit("\t"), tos_lit(" ")), tos_lit(" "));
}

string string_map(string s, byte (*func)(byte )) {
	{ // Unsafe block
		byteptr res = v_malloc(s.len + 1);
		for (int i = 0; i < s.len; ++i) {
			res[i] = func(string_at(s, i));
		}
		return tos(res, s.len);
	}
	return (string){.str=(byteptr)""};
}

string string_filter(string s, bool (*func)(byte b)) {
	int new_len = 0;
	byteptr buf = v_malloc(s.len + 1);
	for (int i = 0; i < s.len; ++i) {
		byte b = string_at(s, i);
		if (func(b)) {
			{ // Unsafe block
				buf[new_len] = b;
			}
			new_len++;
		}
	}
	{ // Unsafe block
		buf[new_len] = 0;
		return byteptr_vstring_with_len(buf, new_len);
	}
	return (string){.str=(byteptr)""};
}

string string_strip_margin(string s) {
	return string_strip_margin_custom(s, '|');
}

string string_strip_margin_custom(string s, byte del) {
	byte sep = del;
	if (byte_is_space(sep)) {
		eprintln(tos_lit("Warning: `strip_margin` cannot use white-space as a delimiter"));
		eprintln(tos_lit("    Defaulting to `|`"));
		sep = '|';
	}
	byteptr ret = v_malloc(s.len + 1);
	int count = 0;
	for (int i = 0; i < s.len; i++) {
		if ((string_at(s, i) == '\n' || string_at(s, i) == '\r')) {
			{ // Unsafe block
				ret[count] = string_at(s, i);
			}
			count++;
			if (string_at(s, i) == '\r' && i < s.len - 1 && string_at(s, i + 1) == '\n') {
				{ // Unsafe block
					ret[count] = string_at(s, i + 1);
				}
				count++;
				i++;
			}
			for (;;) {
				if (!(string_at(s, i) != sep)) break;
				i++;
				if (i >= s.len) {
					break;
				}
			}
		} else {
			{ // Unsafe block
				ret[count] = string_at(s, i);
			}
			count++;
		}
	}
	{ // Unsafe block
		ret[count] = 0;
		return byteptr_vstring_with_len(ret, count);
	}
	return (string){.str=(byteptr)""};
}

int utf8_char_len(byte b) {
	return (((0xe5000000 >> (((b >> 3) & 0x1e))) & 3)) + 1;
}

string utf32_to_str(u32 code) {
	byteptr buffer = v_malloc(5);
	return utf32_to_str_no_malloc(code, buffer);
}

string utf32_to_str_no_malloc(u32 code, voidptr buf) {
	int icode = ((int)(code));
	{ // Unsafe block
		byteptr buffer = ((byteptr)(buf));
		if (icode <= 127) {
			buffer[0] = ((byte)(icode));
			return tos(buffer, 1);
		}
		if (icode <= 2047) {
			buffer[0] = (192 | ((byte)(icode >> 6)));
			buffer[1] = (128 | ((byte)((icode & 63))));
			return tos(buffer, 2);
		}
		if (icode <= 65535) {
			buffer[0] = (224 | ((byte)(icode >> 12)));
			buffer[1] = (128 | ((((byte)(icode >> 6)) & 63)));
			buffer[2] = (128 | ((byte)((icode & 63))));
			return tos(buffer, 3);
		}
		if (icode <= 1114111) {
			buffer[0] = (240 | ((byte)(icode >> 18)));
			buffer[1] = (128 | ((((byte)(icode >> 12)) & 63)));
			buffer[2] = (128 | ((((byte)(icode >> 6)) & 63)));
			buffer[3] = (128 | ((byte)((icode & 63))));
			return tos(buffer, 4);
		}
	}
	return tos_lit("");
}

int string_utf32_code(string _rune) {
	if (_rune.len == 0) {
		return 0;
	}
	if (_rune.len == 1) {
		return ((int)(string_at(_rune, 0)));
	}
	byte b = ((byte)(((int)(string_at(_rune, 0)))));
	b = b << _rune.len;
	int res = ((int)(b));
	int shift = 6 - _rune.len;
	for (int i = 1; i < _rune.len; i++) {
		int c = ((int)(string_at(_rune, i)));
		res = res << shift;
		res |= (c & 63);
		shift = 6;
	}
	return res;
}

u16* string_to_wide(string _str) {
	#if defined(_WIN32)
	{
	}
	#else
	{
		return 0;
	}
	#endif
	return 0;
}

string string_from_wide(u16* _wstr) {
	#if defined(_WIN32)
	{
	}
	#else
	{
		return tos_lit("");
	}
	#endif
	return (string){.str=(byteptr)""};
}

string string_from_wide2(u16* _wstr, int len) {
	#if defined(_WIN32)
	{
	}
	#else
	{
		return tos_lit("");
	}
	#endif
	return (string){.str=(byteptr)""};
}

static int utf8_len(byte c) {
	int b = 0;
	byte x = c;
	if (((x & 240)) != 0) {
		x >>= 4;
	} else {
		b += 4;
	}
	if (((x & 12)) != 0) {
		x >>= 2;
	} else {
		b += 2;
	}
	if (((x & 2)) == 0) {
		b++;
	}
	return b;
}

static int utf8_str_len(string s) {
	int l = 0;
	for (int i = 0; i < s.len; i++) {
		l++;
		byte c = s.str[i];
		if (((c & (1 << 7))) != 0) {
			for (byte t = ((byte)(1 << 6)); ((c & t)) != 0; t >>= 1) {
				i++;
			}
		}
	}
	return l;
}

static int utf8_str_visible_length(string s) {
	int l = 0;
	int ul = 1;
	for (int i = 0; i < s.len; i += ul) {
		ul = 1;
		byte c = s.str[i];
		if (((c & (1 << 7))) != 0) {
			for (byte t = ((byte)(1 << 6)); ((c & t)) != 0; t >>= 1) {
				ul++;
			}
		}
		if (i + ul > s.len) {
			return l;
		}
		l++;
		if (c == 0xcc || c == 0xcd) {
			u16 r = ((((u16)(c)) << 8) | s.str[i + 1]);
			if (r >= 0xcc80 && r < 0xcdb0) {
				l--;
			}
		} else if (c == 0xe1 || c == 0xe2 || c == 0xef) {
			u32 r = ((((u32)(c)) << 16) | ((((u32)(s.str[i + 1])) << 8) | s.str[i + 2]));
			if ((r >= 0xe1aab0 && r < 0xe1ac80) || (r >= 0xe1b780 && r < 0xe1b880) || (r >= 0xe28390 && r < 0xe28480) || (r >= 0xefb8a0 && r < 0xefb8b0)) {
				l--;
			}
		}
	}
	return l;
}

int utf8_getchar() {
	int c = getchar();
	int len = utf8_len(((byte)(~c)));
	if (c < 0) {
		return 0;
	} else if (len == 0) {
		return c;
	} else if (len == 1) {
		return -1;
	} else {
		int uc = (c & ((1 << (7 - len)) - 1));
		for (int i = 0; i + 1 < len; i++) {
			int c2 = getchar();
			if (c2 != -1 && (c2 >> 6) == 2) {
				uc <<= 6;
				uc |= ((c2 & 63));
			} else if (c2 == -1) {
				return 0;
			} else {
				return -1;
			}
		}
		return uc;
	}
	return 0;
}

string os__getenv(string key) {
	#if defined(_WIN32)
	{
	}
	#else
	{
		char* s = getenv(((charptr)(key.str)));
		if (s == ((voidptr)(0))) {
			return tos_lit("");
		}
		return cstring_to_vstring(((byteptr)(s)));
	}
	#endif
	return (string){.str=(byteptr)""};
}

int os__setenv(string name, string value, bool overwrite) {
	#if defined(_WIN32)
	{
	}
	#else
	{
		{ // Unsafe block
			return setenv(((charptr)(name.str)), ((charptr)(value.str)), overwrite);
		}
	}
	#endif
	return 0;
}

int os__unsetenv(string name) {
	#if defined(_WIN32)
	{
	}
	#else
	{
		return unsetenv(((charptr)(name.str)));
	}
	#endif
	return 0;
}

map_string_string os__environ() {
	map_string_string res = new_map_1(sizeof(string));
	#if defined(_WIN32)
	{
	}
	#else
	{
		charptr* e = ((charptr*)(environ));
		for (int i = 0; !isnil(e[i]); i++) {
			string eline = cstring_to_vstring(((byteptr)(e[i])));
			int eq_index = string_index_byte(eline, '=');
			if (eq_index > 0) {
				map_set(&res, string_substr(eline, 0, eq_index), &(string[]) { string_substr(eline, eq_index + 1, eline.len) });
			}
		}
	}
	#endif
	return res;
}

// Attr: [deprecated]
bool os__File_is_opened(os__File f) {
	eprintln(tos_lit("warning: `file.is_opened()` has been deprecated, use `file.is_opened` instead"));
	return f.is_opened;
}

Option_int os__File_write(os__File* f, string s) {
	if (!f->is_opened) {
		Option _t77 = v_error(tos_lit("file is not opened"));
		return *(Option_int*)&_t77;
	}
	int written = fwrite(s.str, s.len, 1, f->cfile);
	if (written == 0 && s.len != 0) {
		Option _t78 = v_error(tos_lit("0 bytes written"));
		return *(Option_int*)&_t78;
	}
	Option_int _t79;
	opt_ok2(&(int[]) { written }, (OptionBase*)(&_t79), sizeof(int));
	return _t79;
}

Option_int os__File_writeln(os__File* f, string s) {
	if (!f->is_opened) {
		Option _t80 = v_error(tos_lit("file is not opened"));
		return *(Option_int*)&_t80;
	}
	int written = fwrite(s.str, s.len, 1, f->cfile);
	if (written == 0 && s.len != 0) {
		Option _t81 = v_error(tos_lit("0 bytes written"));
		return *(Option_int*)&_t81;
	}
	int x = fputs("\n", f->cfile);
	if (x < 0) {
		Option _t82 = v_error(tos_lit("could not add newline"));
		return *(Option_int*)&_t82;
	}
	Option_int _t83;
	opt_ok2(&(int[]) { (written + 1) }, (OptionBase*)(&_t83), sizeof(int));
	return _t83;
}

int os__File_write_bytes(os__File* f, voidptr data, int size) {
	return fwrite(data, 1, size, f->cfile);
}

int os__File_write_bytes_at(os__File* f, voidptr data, int size, int pos) {
	fseek(f->cfile, pos, SEEK_SET);
	int res = fwrite(data, 1, size, f->cfile);
	fseek(f->cfile, 0, SEEK_END);
	return res;
}

array_byte os__File_read_bytes(os__File* f, int size) {
	return os__File_read_bytes_at(f, size, 0);
}

array_byte os__File_read_bytes_at(os__File* f, int size, int pos) {
	array_byte arr = __new_array_with_default(size, 0, sizeof(byte), 0);
	Option_int _t84 = os__File_read_bytes_into(f, pos, &/*arr*/arr);
	if (!_t84.ok) {
		string err = _t84.v_error;
		int errcode = _t84.ecode;
		return __new_array_with_default(0, 0, sizeof(byte), 0);
	}
 	int nreadbytes = *(int*) _t84.data;
	return array_slice(arr, 0, nreadbytes);
}

Option_int os__File_read_bytes_into(os__File* f, int pos, array_byte* buf) {
	if (buf->len == 0) {
		v_panic(string_add(tos_lit("read_bytes_into"), tos_lit(": `buf.len` == 0")));
	}
	fseek(f->cfile, pos, SEEK_SET);
	errno = 0;
	int nbytes = fread(buf->data, 1, buf->len, f->cfile);
	if (errno != 0) {
		Option _t85 = v_error(os__posix_get_error_msg(errno));
		return *(Option_int*)&_t85;
	}
	#if defined(_VDEBUG)
	{
	}
	#endif
	Option_int _t86;
	opt_ok2(&(int[]) { nbytes }, (OptionBase*)(&_t86), sizeof(int));
	return _t86;
}

void os__File_flush(os__File* f) {
	if (!f->is_opened) {
		return;
	}
	fflush(f->cfile);
}

os__File os__open_stdin() {
	return (os__File){.cfile = stdin,.fd = 0,.is_opened = true,};
}

Option_string os__File_get_line(os__File* f) {
	if (!f->is_opened) {
		Option _t87 = v_error(tos_lit("file is closed"));
		return *(Option_string*)&_t87;
	}
	#if !defined(_WIN32)
	{
		byteptr zbuf = ((byteptr)(0));
		size_t zblen = ((size_t)(0));
		int zx = 0;
		{ // Unsafe block
			zx = getline(((charptr*)(&zbuf)), &zblen, f->cfile);
			if (zx == -1) {
				free(zbuf);
				if (errno == 0) {
					Option _t88 = v_error(tos_lit("end of file"));
					return *(Option_string*)&_t88;
				}
				Option _t89 = v_error(os__posix_get_error_msg(errno));
				return *(Option_string*)&_t89;
			}
			Option_string _t90;
			opt_ok2(&(string[]) { byteptr_vstring_with_len(zbuf, zx) }, (OptionBase*)(&_t90), sizeof(string));
			return _t90;
		}
	}
	#endif
	array_fixed_byte_4096 buf = {0};
	strings__Builder res = strings__new_builder(1024);
	charptr x = ((charptr)(0));
	for (;;) {
		{ // Unsafe block
			x = fgets(((charptr)(buf)), 4096, f->cfile);
		}
		if (x == 0) {
			if (res.len > 0) {
				break;
			}
			Option _t91 = v_error(tos_lit("end of file"));
			return *(Option_string*)&_t91;
		}
		byteptr bufbp = ((byteptr)(buf));
		int blen = vstrlen(bufbp);
		strings__Builder_write_bytes(&res, bufbp, blen);
		{ // Unsafe block
			if (blen == 0 || bufbp[blen - 1] == '\n' || bufbp[blen - 1] == '\r') {
				break;
			}
		}
	}
	Option_string _t92;
	opt_ok2(&(string[]) { strings__Builder_str(&res) }, (OptionBase*)(&_t92), sizeof(string));
	return _t92;
}

os__FileMode os__inode(string path) {
	struct stat attr;
	stat(((charptr)(path.str)), &attr);
	os__FileType typ = os__FileType_regular;
	if ((attr.st_mode & ((u32)(S_IFMT))) == ((u32)(S_IFDIR))) {
		typ = os__FileType_directory;
	}
	#if !defined(_WIN32)
	{
		if ((attr.st_mode & ((u32)(S_IFMT))) == ((u32)(S_IFCHR))) {
			typ = os__FileType_character_device;
		} else if ((attr.st_mode & ((u32)(S_IFMT))) == ((u32)(S_IFBLK))) {
			typ = os__FileType_block_device;
		} else if ((attr.st_mode & ((u32)(S_IFMT))) == ((u32)(S_IFIFO))) {
			typ = os__FileType_fifo;
		} else if ((attr.st_mode & ((u32)(S_IFMT))) == ((u32)(S_IFLNK))) {
			typ = os__FileType_symbolic_link;
		} else if ((attr.st_mode & ((u32)(S_IFMT))) == ((u32)(S_IFSOCK))) {
			typ = os__FileType_socket;
		}
	}
	#endif
	#if defined(_WIN32)
	{
	}
	#else
	{
		return (os__FileMode){.typ = typ,.owner = (os__FilePermission){.read = ((attr.st_mode & ((u32)(S_IRUSR)))) != 0,.write = ((attr.st_mode & ((u32)(S_IWUSR)))) != 0,.execute = ((attr.st_mode & ((u32)(S_IXUSR)))) != 0,},.group = (os__FilePermission){.read = ((attr.st_mode & ((u32)(S_IRGRP)))) != 0,.write = ((attr.st_mode & ((u32)(S_IWGRP)))) != 0,.execute = ((attr.st_mode & ((u32)(S_IXGRP)))) != 0,},.others = (os__FilePermission){.read = ((attr.st_mode & ((u32)(S_IROTH)))) != 0,.write = ((attr.st_mode & ((u32)(S_IWOTH)))) != 0,.execute = ((attr.st_mode & ((u32)(S_IXOTH)))) != 0,},};
	}
	#endif
	return (os__FileMode){0};
}

Option_array_byte os__read_bytes(string path) {
	Option_FILE_ptr _t93 = os__vfopen(path, tos_lit("rb"));
	if (!_t93.ok) {
		return *(Option_array_byte *)&_t93;
	}
 	FILE* fp = *(FILE**) _t93.data;
	int cseek = fseek(fp, 0, SEEK_END);
	if (cseek != 0) {
		Option _t94 = v_error(tos_lit("fseek failed"));
		return *(Option_array_byte*)&_t94;
	}
	int fsize = ftell(fp);
	if (fsize < 0) {
		Option _t95 = v_error(tos_lit("ftell failed"));
		return *(Option_array_byte*)&_t95;
	}
	rewind(fp);
	array_byte res = __new_array_with_default(fsize, 0, sizeof(byte), 0);
	int nr_read_elements = fread(res.data, fsize, 1, fp);
	if (nr_read_elements == 0 && fsize > 0) {
		Option _t96 = v_error(tos_lit("fread failed"));
		return *(Option_array_byte*)&_t96;
	}
	fclose(fp);
	Option_array_byte _t97;
	opt_ok2(&(array_byte[]) { array_slice(res, 0, nr_read_elements * fsize) }, (OptionBase*)(&_t97), sizeof(array_byte));
	return _t97;
}

Option_string os__read_file(string path) {
	string mode = tos_lit("rb");
	Option_FILE_ptr _t98 = os__vfopen(path, mode);
	if (!_t98.ok) {
		return *(Option_string *)&_t98;
	}
 	FILE* fp = *(FILE**) _t98.data;
	int cseek = fseek(fp, 0, SEEK_END);
	if (cseek != 0) {
		// Defer begin
		fclose(fp);
		// Defer end
		Option _t99 = v_error(tos_lit("fseek failed"));
		return *(Option_string*)&_t99;
	}
	int fsize = ftell(fp);
	if (fsize < 0) {
		// Defer begin
		fclose(fp);
		// Defer end
		Option _t100 = v_error(tos_lit("ftell failed"));
		return *(Option_string*)&_t100;
	}
	rewind(fp);
	{ // Unsafe block
		byteptr str = v_malloc(fsize + 1);
		int nelements = fread(str, fsize, 1, fp);
		if (nelements == 0 && fsize > 0) {
			v_free(str);
			// Defer begin
			fclose(fp);
			// Defer end
			Option _t101 = v_error(tos_lit("fread failed"));
			return *(Option_string*)&_t101;
		}
		str[fsize] = 0;
		// Defer begin
		fclose(fp);
		// Defer end
		Option_string _t102;
		opt_ok2(&(string[]) { byteptr_vstring_with_len(str, fsize) }, (OptionBase*)(&_t102), sizeof(string));
		return _t102;
	}
	// Defer begin
	fclose(fp);
	// Defer end
	Option _t103 = opt_none();
	return *(Option_string*)&_t103;
}

int os__file_size(string path) {
	struct stat s;
	{ // Unsafe block
		#if defined(_WIN32)
		{
		}
		#else
		{
			stat(((charptr)(path.str)), &s);
		}
		#endif
	}
	return s.st_size;
}

void os__mv(string src, string dst) {
	string rdst = dst;
	if (os__is_dir(rdst)) {
		rdst = os__join_path(string_trim_right(rdst, _const_os__path_separator), (varg_string){.len=1,.args={os__file_name(string_trim_right(src, _const_os__path_separator))}});
	}
	#if defined(_WIN32)
	{
	}
	#else
	{
		rename(((charptr)(src.str)), ((charptr)(rdst.str)));
	}
	#endif
}

Option_void os__cp(string src, string dst) {
	#if defined(_WIN32)
	{
	}
	#else
	{
		int fp_from = open(((charptr)(src.str)), O_RDONLY);
		if (fp_from < 0) {
			Option _t104 = error_with_code(_STR("cp: failed to open %.*s", 1, src), ((int)(fp_from)));
			return *(Option_void*)&_t104;
		}
		int fp_to = open(((charptr)(dst.str)), ((O_WRONLY | O_CREAT) | O_TRUNC), (S_IWUSR | S_IRUSR));
		if (fp_to < 0) {
			close(fp_from);
			Option _t105 = error_with_code(_STR("cp (permission): failed to write to %.*s\000 (fp_to: %"PRId32"\000)", 3, dst, fp_to), ((int)(fp_to)));
			return *(Option_void*)&_t105;
		}
		array_fixed_byte_1024 buf = {0};
		int count = 0;
		for (;;) {
			count = read(fp_from, buf, 1024);
			if (count == 0) {
				break;
			}
			if (write(fp_to, buf, count) < 0) {
				Option _t106 = error_with_code(_STR("cp: failed to write to %.*s", 1, dst), ((int)(-1)));
				return *(Option_void*)&_t106;
			}
		}
		struct stat from_attr;
		stat(((charptr)(src.str)), &from_attr);
		if (chmod(((charptr)(dst.str)), from_attr.st_mode) < 0) {
			Option _t107 = error_with_code(_STR("failed to set permissions for %.*s", 1, dst), ((int)(-1)));
			return *(Option_void*)&_t107;
		}
		close(fp_to);
		close(fp_from);
	}
	#endif
	Option_void _t108 = {.ok = true};
	return _t108;
}

// Attr: [deprecated]
Option_void os__cp_r(string osource_path, string odest_path, bool overwrite) {
	eprintln(tos_lit("warning: `os.cp_r` has been deprecated, use `os.cp_all` instead"));
	return os__cp_all(osource_path, odest_path, overwrite);
}

Option_void os__cp_all(string src, string dst, bool overwrite) {
	string source_path = os__real_path(src);
	string dest_path = os__real_path(dst);
	if (!os__exists(source_path)) {
		Option _t109 = v_error(tos_lit("Source path doesn\'t exist"));
		return *(Option_void*)&_t109;
	}
	if (!os__is_dir(source_path)) {
		string adjusted_path = (os__is_dir(dest_path) ? (os__join_path(dest_path, (varg_string){.len=1,.args={os__file_name(source_path)}})) : (dest_path));
		if (os__exists(adjusted_path)) {
			if (overwrite) {
				os__rm(adjusted_path);
			} else {
				Option _t110 = v_error(tos_lit("Destination file path already exist"));
				return *(Option_void*)&_t110;
			}
		}
		Option_void _t111 = os__cp(source_path, adjusted_path);
		if (!_t111.ok && !_t111.is_none) {
			return *(Option_void *)&_t111;
		};
		Option_void _t112 = {.ok = true};
		return _t112;
	}
	if (!os__is_dir(dest_path)) {
		Option _t113 = v_error(tos_lit("Destination path is not a valid directory"));
		return *(Option_void*)&_t113;
	}
	Option_array_string _t114 = os__ls(source_path);
	if (!_t114.ok) {
		return *(Option_void *)&_t114;
	}
 	array_string files = *(array_string*) _t114.data;
	// FOR IN array
	array _t115 = files;
	for (int _t116 = 0; _t116 < _t115.len; ++_t116) {
		string file = ((string*)_t115.data)[_t116];
		string sp = os__join_path(source_path, (varg_string){.len=1,.args={file}});
		string dp = os__join_path(dest_path, (varg_string){.len=1,.args={file}});
		if (os__is_dir(sp)) {
			Option_bool _t117 = os__mkdir(dp);
			if (!_t117.ok) {
				return *(Option_void *)&_t117;
			};
		}
		Option_void _t118 = os__cp_all(sp, dp, overwrite);
		if (!_t118.ok && !_t118.is_none) {
			string err = _t118.v_error;
			int errcode = _t118.ecode;
			os__rmdir(dp);
			Option _t119 = v_error(err);
			return *(Option_void*)&_t119;
		};
	}
	Option_void _t120 = {.ok = true};
	return _t120;
}

Option_void os__mv_by_cp(string source, string target) {
	Option_void _t121 = os__cp(source, target);
	if (!_t121.ok && !_t121.is_none) {
		return *(Option_void *)&_t121;
	};
	Option_void _t122 = os__rm(source);
	if (!_t122.ok && !_t122.is_none) {
		return *(Option_void *)&_t122;
	};
	Option_void _t123 = {.ok = true};
	return _t123;
}

Option_FILE_ptr os__vfopen(string path, string mode) {
	if (path.len == 0) {
		Option _t124 = v_error(tos_lit("vfopen called with \"\""));
		return *(Option_FILE_ptr*)&_t124;
	}
	voidptr fp = ((voidptr)(0));
	#if defined(_WIN32)
	{
	}
	#else
	{
		fp = fopen(((charptr)(path.str)), ((charptr)(mode.str)));
	}
	#endif
	if (isnil(fp)) {
		Option _t125 = v_error(_STR("failed to open file \"%.*s\000\"", 2, path));
		return *(Option_FILE_ptr*)&_t125;
	} else {
		Option_FILE_ptr _t126;
		opt_ok2(&(FILE*[]) { fp }, (OptionBase*)(&_t126), sizeof(FILE*));
		return _t126;
	}
	Option _t127 = opt_none();
	return *(Option_FILE_ptr*)&_t127;
}

int os__fileno(voidptr cfile) {
	#if defined(_WIN32)
	{
	}
	#else
	{
		FILE* cfile_casted = ((FILE*)(0));
		cfile_casted = cfile;
		return fileno(cfile_casted);
	}
	#endif
	return 0;
}

Option_array_string os__read_lines(string path) {
	Option_string _t128 = os__read_file(path);
	if (!_t128.ok) {
		return *(Option_array_string *)&_t128;
	}
 	string buf = *(string*) _t128.data;
	Option_array_string _t129;
	opt_ok2(&(array_string[]) { string_split_into_lines(buf) }, (OptionBase*)(&_t129), sizeof(array_string));
	return _t129;
}

static Option_array_ustring os__read_ulines(string path) {
	Option_array_string _t130 = os__read_lines(path);
	if (!_t130.ok) {
		return *(Option_array_ustring *)&_t130;
	}
 	array_string lines = *(array_string*) _t130.data;
	array_ustring ulines = __new_array_with_default(0, 0, sizeof(ustring), 0);
	// FOR IN array
	array _t131 = lines;
	for (int _t132 = 0; _t132 < _t131.len; ++_t132) {
		string myline = ((string*)_t131.data)[_t132];
		array_push(&ulines, _MOV((ustring[]){ string_ustring(myline) }));
	}
	Option_array_ustring _t134;
	opt_ok2(&(array_ustring[]) { ulines }, (OptionBase*)(&_t134), sizeof(array_ustring));
	return _t134;
}

Option_os__File os__open_append(string path) {
	os__File file = (os__File){.cfile = 0,.fd = 0,.is_opened = 0,};
	#if defined(_WIN32)
	{
	}
	#else
	{
		byteptr cpath = path.str;
		file = (os__File){.cfile = fopen(((charptr)(cpath)), "ab"),.fd = 0,.is_opened = 0,};
	}
	#endif
	if (isnil(file.cfile)) {
		Option _t135 = v_error(_STR("failed to create(append) file \"%.*s\000\"", 2, path));
		return *(Option_os__File*)&_t135;
	}
	file.is_opened = true;
	Option_os__File _t136;
	opt_ok2(&(os__File[]) { file }, (OptionBase*)(&_t136), sizeof(os__File));
	return _t136;
}

Option_os__File os__open_file(string path, string mode, varg_int options) {
	int flags = 0;
	for (int _t137 = 0; _t137 < mode.len; ++_t137) {
		byte m = mode.str[_t137];
		byte _t138 = m;
		if (_t138 == 'r') {
			flags |= _const_os__o_rdonly;
		} else if (_t138 == 'w') {
			flags |= (_const_os__o_create | _const_os__o_trunc);
		} else if (_t138 == 'b') {
			flags |= _const_os__o_binary;
		} else if (_t138 == 'a') {
			flags |= (_const_os__o_create | _const_os__o_append);
		} else if (_t138 == 's') {
			flags |= _const_os__o_sync;
		} else if (_t138 == 'n') {
			flags |= _const_os__o_nonblock;
		} else if (_t138 == 'c') {
			flags |= _const_os__o_noctty;
		} else if (_t138 == '+') {
			flags |= _const_os__o_rdwr;
		} else {
		};
	}
	int permission = 0666;
	if (options.len > 0) {
		permission = options.args[0];
	}
	#if defined(_WIN32)
	{
	}
	#endif
	string p = path;
	#if defined(_WIN32)
	{
	}
	#endif
	int fd = open(((charptr)(p.str)), flags, permission);
	if (fd == -1) {
		Option _t139 = v_error(os__posix_get_error_msg(errno));
		return *(Option_os__File*)&_t139;
	}
	voidptr cfile = fdopen(fd, ((charptr)(mode.str)));
	if (isnil(cfile)) {
		Option _t140 = v_error(_STR("Failed to open or create file \"%.*s\000\"", 2, path));
		return *(Option_os__File*)&_t140;
	}
	Option_os__File _t141;
	opt_ok2(&(os__File[]) { (os__File){.cfile = cfile,.fd = fd,.is_opened = true,} }, (OptionBase*)(&_t141), sizeof(os__File));
	return _t141;
}

static voidptr os__vpopen(string path) {
	#if defined(_WIN32)
	{
	}
	#else
	{
		byteptr cpath = path.str;
		return popen(((charptr)(cpath)), "r");
	}
	#endif
	return 0;
}

static multi_return_int_bool os__posix_wait4_to_exit_status(int waitret) {
	#if defined(_WIN32)
	{
	}
	#else
	{
		int ret = 0;
		bool is_signaled = true;
		if (WIFEXITED(waitret)) {
			ret = WEXITSTATUS(waitret);
			is_signaled = false;
		} else if (WIFSIGNALED(waitret)) {
			ret = WTERMSIG(waitret);
			is_signaled = true;
		}
		return (multi_return_int_bool){.arg0=ret, .arg1=is_signaled};
	}
	#endif
	return (multi_return_int_bool){0};
}

string os__posix_get_error_msg(int code) {
	charptr ptr_text = strerror(code);
	if (ptr_text == 0) {
		return tos_lit("");
	}
	return tos3(ptr_text);
}

static int os__vpclose(voidptr f) {
	#if defined(_WIN32)
	{
	}
	#else
	{
		multi_return_int_bool mr_9205 = os__posix_wait4_to_exit_status(pclose(f));
		int ret = mr_9205.arg0;
		return ret;
	}
	#endif
	return 0;
}

int os__system(string cmd) {
	int ret = 0;
	#if defined(_WIN32)
	{
	}
	#else
	{
		#if defined(__TARGET_IOS__)
		{
		}
		#else
		{
			{ // Unsafe block
				ret = system(((charptr)(cmd.str)));
			}
		}
		#endif
	}
	#endif
	if (ret == -1) {
		os__print_c_errno();
	}
	#if !defined(_WIN32)
	{
		multi_return_int_bool mr_10305 = os__posix_wait4_to_exit_status(ret);
		int pret = mr_10305.arg0;
		bool is_signaled = mr_10305.arg1;
		if (is_signaled) {
			println(string_add(string_add(_STR("Terminated by signal %2"PRId32"\000 (", 2, ret), os__sigint_to_signal_name(pret)), tos_lit(")")));
		}
		ret = pret;
	}
	#endif
	return ret;
}

string os__sigint_to_signal_name(int si) {
	int _t142 = si;
	if (_t142 == 1) {
		return tos_lit("SIGHUP");
	} else if (_t142 == 2) {
		return tos_lit("SIGINT");
	} else if (_t142 == 3) {
		return tos_lit("SIGQUIT");
	} else if (_t142 == 4) {
		return tos_lit("SIGILL");
	} else if (_t142 == 6) {
		return tos_lit("SIGABRT");
	} else if (_t142 == 8) {
		return tos_lit("SIGFPE");
	} else if (_t142 == 9) {
		return tos_lit("SIGKILL");
	} else if (_t142 == 11) {
		return tos_lit("SIGSEGV");
	} else if (_t142 == 13) {
		return tos_lit("SIGPIPE");
	} else if (_t142 == 14) {
		return tos_lit("SIGALRM");
	} else if (_t142 == 15) {
		return tos_lit("SIGTERM");
	} else {
	};
	#if defined(__linux__)
	{
		int _t143 = si;
		if (_t143 == 10) {
			return tos_lit("SIGUSR1");
		} else if (_t143 == 12) {
			return tos_lit("SIGUSR2");
		} else if (_t143 == 17) {
			return tos_lit("SIGCHLD");
		} else if (_t143 == 18) {
			return tos_lit("SIGCONT");
		} else if (_t143 == 19) {
			return tos_lit("SIGSTOP");
		} else if (_t143 == 20) {
			return tos_lit("SIGTSTP");
		} else if (_t143 == 21) {
			return tos_lit("SIGTTIN");
		} else if (_t143 == 22) {
			return tos_lit("SIGTTOU");
		} else if (_t143 == 5) {
			return tos_lit("SIGTRAP");
		} else if (_t143 == 7) {
			return tos_lit("SIGBUS");
		} else {
		};
	}
	#endif
	return tos_lit("unknown");
}

bool os__exists(string path) {
	#if defined(_WIN32)
	{
	}
	#else
	{
		return access(((charptr)(path.str)), _const_os__f_ok) != -1;
	}
	#endif
	return 0;
}

bool os__is_executable(string path) {
	#if defined(_WIN32)
	{
	}
	#endif
	#if defined(__sun)
	{
	}
	#endif
	return access(((charptr)(path.str)), _const_os__x_ok) != -1;
}

bool os__is_writable(string path) {
	#if defined(_WIN32)
	{
	}
	#else
	{
		return access(((charptr)(path.str)), _const_os__w_ok) != -1;
	}
	#endif
	return 0;
}

bool os__is_readable(string path) {
	#if defined(_WIN32)
	{
	}
	#else
	{
		return access(((charptr)(path.str)), _const_os__r_ok) != -1;
	}
	#endif
	return 0;
}

// Attr: [deprecated]
bool os__file_exists(string _path) {
	eprintln(tos_lit("warning: `os.file_exists` has been deprecated, use `os.exists` instead"));
	return os__exists(_path);
}

Option_void os__rm(string path) {
	#if defined(_WIN32)
	{
	}
	#else
	{
		int rc = remove(((charptr)(path.str)));
		if (rc == -1) {
			Option _t144 = v_error(os__posix_get_error_msg(errno));
			return *(Option_void*)&_t144;
		}
	}
	#endif
	Option_void _t145 = {.ok = true};
	return _t145;
}

Option_void os__rmdir(string path) {
	#if defined(_WIN32)
	{
	}
	#else
	{
		int rc = rmdir(((charptr)(path.str)));
		if (rc == -1) {
			Option _t146 = v_error(os__posix_get_error_msg(errno));
			return *(Option_void*)&_t146;
		}
	}
	#endif
	Option_void _t147 = {.ok = true};
	return _t147;
}

// Attr: [deprecated]
void os__rmdir_recursive(string path) {
	eprintln(tos_lit("warning: `os.rmdir_recursive` has been deprecated, use `os.rmdir_all` instead"));
	os__rmdir_all(path);
}

Option_void os__rmdir_all(string path) {
	string ret_err = tos_lit("");
	Option_array_string _t148 = os__ls(path);
	if (!_t148.ok) {
		return *(Option_void *)&_t148;
	}
 	array_string items = *(array_string*) _t148.data;
	// FOR IN array
	array _t149 = items;
	for (int _t150 = 0; _t150 < _t149.len; ++_t150) {
		string item = ((string*)_t149.data)[_t150];
		if (os__is_dir(os__join_path(path, (varg_string){.len=1,.args={item}}))) {
			os__rmdir_all(os__join_path(path, (varg_string){.len=1,.args={item}}));
		}
		Option_void _t151 = os__rm(os__join_path(path, (varg_string){.len=1,.args={item}}));
		if (!_t151.ok && !_t151.is_none) {
			string err = _t151.v_error;
			int errcode = _t151.ecode;
			ret_err = err;
		};
	}
	Option_void _t152 = os__rmdir(path);
	if (!_t152.ok && !_t152.is_none) {
		string err = _t152.v_error;
		int errcode = _t152.ecode;
		ret_err = err;
	};
	if (ret_err.len > 0) {
		Option _t153 = v_error(ret_err);
		return *(Option_void*)&_t153;
	}
	Option_void _t154 = {.ok = true};
	return _t154;
}

bool os__is_dir_empty(string path) {
	Option_array_string _t155 = os__ls(path);
	if (!_t155.ok) {
		string err = _t155.v_error;
		int errcode = _t155.ecode;
		return true;
	}
 	array_string items = *(array_string*) _t155.data;
	return items.len == 0;
}

static void os__print_c_errno() {
	int e = errno;
	string se = tos_clone(((byteptr)(strerror(errno))));
	println(_STR("errno=%"PRId32"\000 err=%.*s", 2, e, se));
}

string os__file_ext(string path) {
	Option_int _t156 = string_last_index(path, tos_lit("."));
	if (!_t156.ok) {
		string err = _t156.v_error;
		int errcode = _t156.ecode;
		return tos_lit("");
	}
 	int pos = *(int*) _t156.data;
	return string_substr(path, pos, path.len);
}

string os__dir(string path) {
	if ((path).len == 0) {
		return tos_lit(".");
	}
	Option_int _t157 = string_last_index(path, _const_os__path_separator);
	if (!_t157.ok) {
		string err = _t157.v_error;
		int errcode = _t157.ecode;
		return tos_lit(".");
	}
 	int pos = *(int*) _t157.data;
	if (string_ends_with(path, _const_os__path_separator)) {
		pos--;
	}
	return string_substr(path, 0, pos);
}

string os__base(string path) {
	if ((path).len == 0) {
		return tos_lit(".");
	}
	if (string_eq(path, _const_os__path_separator)) {
		return _const_os__path_separator;
	}
	if (string_ends_with(path, _const_os__path_separator)) {
		string path2 = string_substr(path, 0, path.len - 1);
		Option_int _t158 = string_last_index(path2, _const_os__path_separator);
		if (!_t158.ok) {
			string err = _t158.v_error;
			int errcode = _t158.ecode;
			return string_clone(path2);
		}
 		int pos = *(int*) _t158.data;
		return string_substr(path2, pos + 1, path2.len);
	}
	Option_int _t159 = string_last_index(path, _const_os__path_separator);
	if (!_t159.ok) {
		string err = _t159.v_error;
		int errcode = _t159.ecode;
		return string_clone(path);
	}
 	int pos = *(int*) _t159.data;
	return string_substr(path, pos + 1, path.len);
}

string os__file_name(string path) {
	return string_all_after_last(path, _const_os__path_separator);
}

string os__input(string prompt) {
	print(prompt);
	os__flush();
	return os__get_line();
}

string os__get_line() {
	string str = os__get_raw_line();
	#if defined(_WIN32)
	{
	}
	#else
	{
		return string_trim_right(str, tos_lit("\n"));
	}
	#endif
	return (string){.str=(byteptr)""};
}

string os__get_raw_line() {
	#if defined(_WIN32)
	{
	}
	#else
	{
		size_t max = ((size_t)(0));
		charptr buf = ((charptr)(0));
		int nr_chars = getline(&buf, &max, stdin);
		if (nr_chars == 0 || nr_chars == -1) {
			return tos_lit("");
		}
		return tos3(buf);
	}
	#endif
	return (string){.str=(byteptr)""};
}

array_byte os__get_raw_stdin() {
	#if defined(_WIN32)
	{
	}
	#else
	{
		v_panic(tos_lit("get_raw_stdin not implemented on this platform..."));
	}
	#endif
	return __new_array(0, 1, sizeof(byte));
}

array_string os__get_lines() {
	string line = tos_lit("");
	array_string inputstr = __new_array_with_default(0, 0, sizeof(string), 0);
	for (;;) {
		line = os__get_line();
		if (line.len <= 0) {
			break;
		}
		line = string_trim_space(line);
		array_push(&inputstr, _MOV((string[]){ line }));
	}
	return inputstr;
}

string os__get_lines_joined() {
	string line = tos_lit("");
	string inputstr = tos_lit("");
	for (;;) {
		line = os__get_line();
		if (line.len <= 0) {
			break;
		}
		line = string_trim_space(line);
		inputstr = /*f*/string_add(inputstr, line);
	}
	return inputstr;
}

string os__user_os() {
	#if defined(__linux__)
	{
		return tos_lit("linux");
	}
	#endif
	#if defined(__APPLE__)
	{
	}
	#endif
	#if defined(_WIN32)
	{
	}
	#endif
	#if defined(__FreeBSD__)
	{
	}
	#endif
	#if defined(__OpenBSD__)
	{
	}
	#endif
	#if defined(__NetBSD__)
	{
	}
	#endif
	#if defined(__DragonFly__)
	{
	}
	#endif
	#if defined(__ANDROID__)
	{
	}
	#endif
	#if defined(__sun)
	{
	}
	#endif
	#if defined(__haiku__)
	{
	}
	#endif
	return tos_lit("unknown");
}

string os__home_dir() {
	#if defined(_WIN32)
	{
	}
	#else
	{
		return os__getenv(tos_lit("HOME"));
	}
	#endif
	return (string){.str=(byteptr)""};
}

Option_void os__write_file(string path, string text) {
	Option_os__File _t161 = os__create(path);
	if (!_t161.ok) {
		return *(Option_void *)&_t161;
	}
 	os__File f = *(os__File*) _t161.data;
	os__File_write(&f, text);
	os__File_close(&f);
	Option_void _t162 = {.ok = true};
	return _t162;
}

Option_void os__write_file_array(string path, array buffer) {
	Option_os__File _t163 = os__create(path);
	if (!_t163.ok) {
		return *(Option_void *)&_t163;
	}
 	os__File f = *(os__File*) _t163.data;
	os__File_write_bytes_at(&f, buffer.data, (buffer.len * buffer.element_size), 0);
	os__File_close(&f);
	Option_void _t164 = {.ok = true};
	return _t164;
}


void os__on_segfault(voidptr f) {
	#if defined(_WIN32)
	{
	}
	#endif
	#if defined(__APPLE__)
	{
	}
	#endif
}

string os__executable() {
	#if defined(__linux__)
	{
		byteptr result = vcalloc(_const_os__max_path_len);
		int count = readlink("/proc/self/exe", ((charptr)(result)), _const_os__max_path_len);
		if (count < 0) {
			eprintln(tos_lit("os.executable() failed at reading /proc/self/exe to get exe path"));
			return os__executable_fallback();
		}
		return byteptr_vstring(result);
	}
	#endif
	#if defined(_WIN32)
	{
	}
	#endif
	#if defined(__APPLE__)
	{
	}
	#endif
	#if defined(__FreeBSD__)
	{
	}
	#endif
	#if defined(__OpenBSD__)
	{
	}
	#endif
	#if defined(__sun)
	{
	}
	#endif
	#if defined(__haiku__)
	{
	}
	#endif
	#if defined(__NetBSD__)
	{
	}
	#endif
	#if defined(__DragonFly__)
	{
	}
	#endif
	return os__executable_fallback();
}

static string os__executable_fallback() {
	if (_const_os__args.len == 0) {
		return tos_lit("");
	}
	string exepath = (*(string*)array_get(_const_os__args, 0));
	#if defined(_WIN32)
	{
	}
	#endif
	if (!os__is_abs_path(exepath)) {
		if (string_contains(exepath, _const_os__path_separator)) {
			exepath = os__join_path(_const_os__wd_at_startup, (varg_string){.len=1,.args={exepath}});
		} else {
			Option_string _t165 = os__find_abs_path_of_executable(exepath);
			if (!_t165.ok) {
				string err = _t165.v_error;
				int errcode = _t165.ecode;
				*(string*) _t165.data = tos_lit("");
			}
 			string foundpath = *(string*) _t165.data;
			if (foundpath.len > 0) {
				exepath = foundpath;
			}
		}
	}
	exepath = os__real_path(exepath);
	return exepath;
}

Option_string os__find_abs_path_of_executable(string exepath) {
	if (os__is_abs_path(exepath)) {
		Option_string _t166;
		opt_ok2(&(string[]) { os__real_path(exepath) }, (OptionBase*)(&_t166), sizeof(string));
		return _t166;
	}
	string res = tos_lit("");
	string env_path_delimiter = (string_eq(os__user_os(), tos_lit("windows")) ? (tos_lit(";")) : (tos_lit(":")));
	array_string paths = string_split(os__getenv(tos_lit("PATH")), env_path_delimiter);
	// FOR IN array
	array _t167 = paths;
	for (int _t168 = 0; _t168 < _t167.len; ++_t168) {
		string p = ((string*)_t167.data)[_t168];
		string found_abs_path = os__join_path(p, (varg_string){.len=1,.args={exepath}});
		if (os__exists(found_abs_path) && os__is_executable(found_abs_path)) {
			res = found_abs_path;
			break;
		}
	}
	if (res.len > 0) {
		Option_string _t169;
		opt_ok2(&(string[]) { os__real_path(res) }, (OptionBase*)(&_t169), sizeof(string));
		return _t169;
	}
	Option _t170 = v_error(tos_lit("failed to find executable"));
	return *(Option_string*)&_t170;
}

bool os__exists_in_system_path(string prog) {
	Option_string _t171 = os__find_abs_path_of_executable(prog);
	if (!_t171.ok) {
		string err = _t171.v_error;
		int errcode = _t171.ecode;
		return false;
	};
	return true;
}

// Attr: [deprecated]
bool os__dir_exists(string path) {
	eprintln(tos_lit("warning: `os.dir_exists` has been deprecated, use `os.is_dir` instead"));
	return os__is_dir(path);
}

bool os__is_dir(string path) {
	#if defined(_WIN32)
	{
	}
	#else
	{
		struct stat statbuf;
		if (stat(((charptr)(path.str)), &statbuf) != 0) {
			return false;
		}
		int val = (((int)(statbuf.st_mode)) & _const_os__s_ifmt);
		return val == _const_os__s_ifdir;
	}
	#endif
	return 0;
}

bool os__is_file(string path) {
	return os__exists(path) && !os__is_dir(path);
}

bool os__is_link(string path) {
	#if defined(_WIN32)
	{
	}
	#else
	{
		struct stat statbuf;
		if (lstat(((charptr)(path.str)), &statbuf) != 0) {
			return false;
		}
		return (((int)(statbuf.st_mode)) & _const_os__s_ifmt) == _const_os__s_iflnk;
	}
	#endif
	return 0;
}

void os__chdir(string path) {
	#if defined(_WIN32)
	{
	}
	#else
	{
		chdir(((charptr)(path.str)));
	}
	#endif
}

string os__getwd() {
	#if defined(_WIN32)
	{
	}
	#else
	{
		byteptr buf = vcalloc(512);
		if (getcwd(((charptr)(buf)), 512) == 0) {
			return tos_lit("");
		}
		return byteptr_vstring(buf);
	}
	#endif
	return (string){.str=(byteptr)""};
}

string os__real_path(string fpath) {
	byteptr fullpath = vcalloc(_const_os__max_path_len);
	charptr ret = ((charptr)(0));
	#if defined(_WIN32)
	{
	}
	#else
	{
		ret = ((charptr)(realpath(((charptr)(fpath.str)), ((charptr)(fullpath)))));
		if (ret == 0) {
			return fpath;
		}
	}
	#endif
	string res = byteptr_vstring(fullpath);
	return os__normalize_drive_letter(res);
}

static string os__normalize_drive_letter(string path) {
	#if !defined(_WIN32)
	{
		return path;
	}
	#endif
	if (path.len > 2 && string_at(path, 0) >= 'a' && string_at(path, 0) <= 'z' && string_at(path, 1) == ':' && string_at(path, 2) == string_at(_const_os__path_separator, 0)) {
		{ // Unsafe block
			byte* x = &path.str[0];
			(*x) = *x - 32;
		}
	}
	return path;
}

bool os__is_abs_path(string path) {
	#if defined(_WIN32)
	{
	}
	#endif
	return string_at(path, 0) == '/';
}

string os__join_path(string base, varg_string dirs) {
	array_string result = __new_array_with_default(0, 0, sizeof(string), 0);
	array_push(&result, _MOV((string[]){ string_trim_right(base, tos_lit("\\/")) }));
	// FOR IN cond_type/variadic
	for (int _t173 = 0; _t173 < dirs.len; ++_t173) {
		string d = dirs.args[_t173];
		array_push(&result, _MOV((string[]){ d }));
	}
	return array_string_join(result, _const_os__path_separator);
}

array_string os__walk_ext(string path, string ext) {
	if (!os__is_dir(path)) {
		return __new_array_with_default(0, 0, sizeof(string), 0);
	}
	Option_array_string _t175 = os__ls(path);
	if (!_t175.ok) {
		string err = _t175.v_error;
		int errcode = _t175.ecode;
		return __new_array_with_default(0, 0, sizeof(string), 0);
	}
 	array_string files = *(array_string*) _t175.data;
	array_string res = __new_array_with_default(0, 0, sizeof(string), 0);
	string separator = (string_ends_with(path, _const_os__path_separator) ? (tos_lit("")) : (_const_os__path_separator));
	// FOR IN array
	array _t176 = files;
	for (int _t177 = 0; _t177 < _t176.len; ++_t177) {
		string file = ((string*)_t176.data)[_t177];
		if (string_starts_with(file, tos_lit("."))) {
			continue;
		}
		string p = string_add(string_add(path, separator), file);
		if (os__is_dir(p) && !os__is_link(p)) {
			_PUSH_MANY(&res, (os__walk_ext(p, ext)), _t178, array_string);
		} else if (string_ends_with(file, ext)) {
			array_push(&res, _MOV((string[]){ p }));
		}
	}
	return res;
}

void os__walk(string path, void (*f)(string path)) {
	if (!os__is_dir(path)) {
		return;
	}
	Option_array_string _t180 = os__ls(path);
	if (!_t180.ok) {
		string err = _t180.v_error;
		int errcode = _t180.ecode;
		return;
	}
 	array_string files = *(array_string*) _t180.data;
	// FOR IN array
	array _t181 = files;
	for (int _t182 = 0; _t182 < _t181.len; ++_t182) {
		string file = ((string*)_t181.data)[_t182];
		string p = string_add(string_add(path, _const_os__path_separator), file);
		if (os__is_dir(p) && !os__is_link(p)) {
			os__walk(p, f);
		} else if (os__exists(p)) {
			f(p);
		}
	}
	return;
}

// Attr: [unsafe]
void os__signal(int signum, voidptr handler) {
	signal(signum, handler);
}

int os__fork() {
	int pid = -1;
	#if !defined(_WIN32)
	{
		pid = fork();
	}
	#endif
	#if defined(_WIN32)
	{
	}
	#endif
	return pid;
}

int os__wait() {
	int pid = -1;
	#if !defined(_WIN32)
	{
		pid = wait(0);
	}
	#endif
	#if defined(_WIN32)
	{
	}
	#endif
	return pid;
}

int os__file_last_mod_unix(string path) {
	struct stat attr;
	stat(((charptr)(path.str)), &attr);
	return attr.st_mtime;
}

void os__log(string s) {
	println(string_add(tos_lit("os.log: "), s));
}

// Attr: [deprecated]
void os__flush_stdout() {
	eprintln(tos_lit("warning: `os.flush_stdout` has been deprecated, use `os.flush` instead"));
	os__flush();
}

void os__flush() {
	fflush(stdout);
}

Option_void os__mkdir_all(string path) {
	string p = (string_starts_with(path, _const_os__path_separator) ? (_const_os__path_separator) : (tos_lit("")));
	array_string path_parts = string_split(string_trim_left(path, _const_os__path_separator), _const_os__path_separator);
	// FOR IN array
	array _t183 = path_parts;
	for (int _t184 = 0; _t184 < _t183.len; ++_t184) {
		string subdir = ((string*)_t183.data)[_t184];
		p = /*f*/string_add(p, string_add(subdir, _const_os__path_separator));
		if (os__exists(p) && os__is_dir(p)) {
			continue;
		}
		Option_bool _t185 = os__mkdir(p);
		if (!_t185.ok) {
			string err = _t185.v_error;
			int errcode = _t185.ecode;
			Option _t186 = v_error(_STR("folder: %.*s\000, error: %.*s", 2, p, err));
			return *(Option_void*)&_t186;
		};
	}
	Option_void _t187 = {.ok = true};
	return _t187;
}

string os__cache_dir() {
	#if !defined(_WIN32)
	{
		string xdg_cache_home = os__getenv(tos_lit("XDG_CACHE_HOME"));
		if ((xdg_cache_home).len != 0) {
			return xdg_cache_home;
		}
	}
	#endif
	string cdir = os__join_path(os__home_dir(), (varg_string){.len=1,.args={tos_lit(".cache")}});
	if (!os__is_dir(cdir) && !os__is_link(cdir)) {
		Option_bool _t188 = os__mkdir(cdir);
		if (!_t188.ok) {
			string err = _t188.v_error;
			int errcode = _t188.ecode;
			v_panic(err);
		};
	}
	return cdir;
}

string os__temp_dir() {
	string path = os__getenv(tos_lit("TMPDIR"));
	#if defined(_WIN32)
	{
	}
	#endif
	#if defined(__ANDROID__)
	{
	}
	#endif
	if ((path).len == 0) {
		path = tos_lit("/tmp");
	}
	return path;
}

string os__vmodules_dir() {
	string path = os__getenv(tos_lit("VMODULES"));
	if ((path).len == 0) {
		path = os__join_path(os__home_dir(), (varg_string){.len=1,.args={tos_lit(".vmodules")}});
	}
	return path;
}

void os__chmod(string path, int mode) {
	chmod(((charptr)(path.str)), mode);
}

string os__resource_abs_path(string path) {
	string base_path = os__real_path(os__dir(os__executable()));
	string vresource = os__getenv(tos_lit("V_RESOURCE_PATH"));
	if (vresource.len != 0) {
		base_path = vresource;
	}
	return os__real_path(os__join_path(base_path, (varg_string){.len=1,.args={path}}));
}

Option_os__File os__open(string path) {
	Option_FILE_ptr _t189 = os__vfopen(path, tos_lit("rb"));
	if (!_t189.ok) {
		return *(Option_os__File *)&_t189;
	}
 	FILE* cfile = *(FILE**) _t189.data;
	int fd = os__fileno(cfile);
	Option_os__File _t190;
	opt_ok2(&(os__File[]) { (os__File){.cfile = cfile,.fd = fd,.is_opened = true,} }, (OptionBase*)(&_t190), sizeof(os__File));
	return _t190;
}

Option_os__File os__create(string path) {
	Option_FILE_ptr _t191 = os__vfopen(path, tos_lit("wb"));
	if (!_t191.ok) {
		return *(Option_os__File *)&_t191;
	}
 	FILE* cfile = *(FILE**) _t191.data;
	int fd = os__fileno(cfile);
	Option_os__File _t192;
	opt_ok2(&(os__File[]) { (os__File){.cfile = cfile,.fd = fd,.is_opened = true,} }, (OptionBase*)(&_t192), sizeof(os__File));
	return _t192;
}

os__Uname os__uname() {
	os__Uname u = (os__Uname){.sysname = (string){.str=(byteptr)""},.nodename = (string){.str=(byteptr)""},.release = (string){.str=(byteptr)""},.version = (string){.str=(byteptr)""},.machine = (string){.str=(byteptr)""},};
	u32 utsize = /*SizeOfType*/ sizeof(struct utsname);
	byteptr x = v_malloc(((int)(utsize)));
	struct utsname* d = ((struct utsname*)(x));
	if (uname(d) == 0) {
		u.sysname = cstring_to_vstring(((byteptr)(d->sysname)));
		u.nodename = cstring_to_vstring(((byteptr)(d->nodename)));
		u.release = cstring_to_vstring(((byteptr)(d->release)));
		u.version = cstring_to_vstring(((byteptr)(d->version)));
		u.machine = cstring_to_vstring(((byteptr)(d->machine)));
	}
	v_free(d);
	return u;
}

static array_string os__init_os_args(int argc, byte** argv) {
	array_string args = __new_array_with_default(0, 0, sizeof(string), 0);
	for (int i = 0; i < argc; ++i) {
		array_push(&args, _MOV((string[]){ byteptr_vstring(((byteptr)(argv[i]))) }));
	}
	return args;
}

Option_array_string os__ls(string path) {
	array_string res = __new_array_with_default(0, 0, sizeof(string), 0);
	voidptr dir = opendir(((charptr)(path.str)));
	if (isnil(dir)) {
		Option _t194 = v_error(_STR("ls() couldnt open dir \"%.*s\000\"", 2, path));
		return *(Option_array_string*)&_t194;
	}
	struct dirent* ent = ((struct dirent*)(0));
	for (;;) {
		ent = readdir(dir);
		if (isnil(ent)) {
			break;
		}
		string name = tos_clone(((byteptr)(ent->d_name)));
		if (string_ne(name, tos_lit(".")) && string_ne(name, tos_lit("..")) && (name).len != 0) {
			array_push(&res, _MOV((string[]){ name }));
		}
	}
	closedir(dir);
	Option_array_string _t196;
	opt_ok2(&(array_string[]) { res }, (OptionBase*)(&_t196), sizeof(array_string));
	return _t196;
}

Option_bool os__mkdir(string path) {
	if (string_eq(path, tos_lit("."))) {
		Option_bool _t197;
		opt_ok2(&(bool[]) { true }, (OptionBase*)(&_t197), sizeof(bool));
		return _t197;
	}
	string apath = os__real_path(path);
	int r = mkdir(((charptr)(apath.str)), 511);
	if (r == -1) {
		Option _t198 = v_error(os__posix_get_error_msg(errno));
		return *(Option_bool*)&_t198;
	}
	Option_bool _t199;
	opt_ok2(&(bool[]) { true }, (OptionBase*)(&_t199), sizeof(bool));
	return _t199;
}

Option_os__Result os__exec(string cmd) {
	string pcmd = _STR("%.*s\000 2>&1", 2, cmd);
	voidptr f = os__vpopen(pcmd);
	if (isnil(f)) {
		Option _t200 = v_error(_STR("exec(\"%.*s\000\") failed", 2, cmd));
		return *(Option_os__Result*)&_t200;
	}
	array_fixed_byte_4096 buf = {0};
	strings__Builder res = strings__new_builder(1024);
	for (;;) {
		if (!(fgets(((charptr)(buf)), 4096, f) != 0)) break;
		byteptr bufbp = ((byteptr)(buf));
		strings__Builder_write_bytes(&res, bufbp, vstrlen(bufbp));
	}
	string soutput = strings__Builder_str(&res);
	int exit_code = os__vpclose(f);
	if (exit_code == 127) {
		Option _t201 = error_with_code(soutput, 127);
		return *(Option_os__Result*)&_t201;
	}
	Option_os__Result _t202;
	opt_ok2(&(os__Result[]) { (os__Result){.exit_code = exit_code,.output = soutput,} }, (OptionBase*)(&_t202), sizeof(os__Result));
	return _t202;
}

Option_void os__Command_start(os__Command* c) {
	string pcmd = _STR("%.*s\000 2>&1", 2, c->path);
	c->f = os__vpopen(pcmd);
	if (isnil(c->f)) {
		Option _t203 = v_error(_STR("exec(\"%.*s\000\") failed", 2, c->path));
		return *(Option_void*)&_t203;
	}
	Option_void _t204 = {.ok = true};
	return _t204;
}

string os__Command_read_line(os__Command* c) {
	array_fixed_byte_4096 buf = {0};
	strings__Builder res = strings__new_builder(1024);
	{ // Unsafe block
		for (;;) {
			if (!(fgets(((charptr)(buf)), 4096, c->f) != 0)) break;
			byteptr bufbp = ((byteptr)(buf));
			int len = vstrlen(bufbp);
			for (int i = 0; i < len; ++i) {
				if (((int)(bufbp[i])) == '\n') {
					strings__Builder_write_bytes(&res, bufbp, i);
					return strings__Builder_str(&res);
				}
			}
			strings__Builder_write_bytes(&res, bufbp, len);
		}
	}
	c->eof = true;
	return strings__Builder_str(&res);
}

Option_void os__Command_close(os__Command* c) {
	int exit_code = os__vpclose(c->f);
	if (exit_code == 127) {
		Option _t205 = error_with_code(tos_lit("error"), 127);
		return *(Option_void*)&_t205;
	}
	Option_void _t206 = {.ok = true};
	return _t206;
}

Option_bool os__symlink(string origin, string target) {
	int res = symlink(((charptr)(origin.str)), ((charptr)(target.str)));
	if (res == 0) {
		Option_bool _t207;
		opt_ok2(&(bool[]) { true }, (OptionBase*)(&_t207), sizeof(bool));
		return _t207;
	}
	Option _t208 = v_error(os__posix_get_error_msg(errno));
	return *(Option_bool*)&_t208;
}

string os__get_error_msg(int code) {
	return os__posix_get_error_msg(code);
}

void os__File_close(os__File* f) {
	if (!f->is_opened) {
		return;
	}
	f->is_opened = false;
	fflush(f->cfile);
	fclose(f->cfile);
}

bool os__debugger_present() {
	return false;
}

Option_bool os__is_writable_folder(string folder) {
	if (!os__exists(folder)) {
		Option _t209 = v_error(_STR("`%.*s\000` does not exist", 2, folder));
		return *(Option_bool*)&_t209;
	}
	if (!os__is_dir(folder)) {
		Option _t210 = v_error(tos_lit("`folder` is not a folder"));
		return *(Option_bool*)&_t210;
	}
	string tmp_perm_check = os__join_path(folder, (varg_string){.len=1,.args={tos_lit("XXXXXX")}});
	{ // Unsafe block
		int x = mkstemp(((charptr)(tmp_perm_check.str)));
		if (-1 == x) {
			Option _t211 = v_error(_STR("folder `%.*s\000` is not writable", 2, folder));
			return *(Option_bool*)&_t211;
		}
		close(x);
	}
	os__rm(tmp_perm_check);
	Option_bool _t212;
	opt_ok2(&(bool[]) { true }, (OptionBase*)(&_t212), sizeof(bool));
	return _t212;
}

// Attr: [inline]
inline int os__getpid() {
	return getpid();
}

f64 math__inf(int sign) {
	u64 v = (sign >= 0 ? (_const_math__uvinf) : (_const_math__uvneginf));
	return math__f64_from_bits(v);
}

f64 math__nan() {
	return math__f64_from_bits(_const_math__uvnan);
}

bool math__is_nan(f64 f) {
	return f != f;
}

bool math__is_inf(f64 f, int sign) {
	return (sign >= 0 && f > _const_math__max_f64) || (sign <= 0 && f < -_const_math__max_f64);
}

#if defined(_WIN32)
#endif
// Attr: [inline]
inline f64 math__abs(f64 a) {
	return fabs(a);
}

// Attr: [inline]
inline f64 math__acos(f64 a) {
	return acos(a);
}

// Attr: [inline]
inline f64 math__asin(f64 a) {
	return asin(a);
}

// Attr: [inline]
inline f64 math__atan(f64 a) {
	return atan(a);
}

// Attr: [inline]
inline f64 math__atan2(f64 a, f64 b) {
	return atan2(a, b);
}

// Attr: [inline]
inline f64 math__cbrt(f64 a) {
	return cbrt(a);
}

// Attr: [inline]
inline f64 math__ceil(f64 a) {
	return ceil(a);
}

// Attr: [inline]
inline f64 math__cos(f64 a) {
	return cos(a);
}

// Attr: [inline]
inline f32 math__cosf(f32 a) {
	return cosf(a);
}

// Attr: [inline]
inline f64 math__cosh(f64 a) {
	return cosh(a);
}

// Attr: [inline]
inline f64 math__exp(f64 a) {
	return exp(a);
}

// Attr: [inline]
inline f64 math__erf(f64 a) {
	return erf(a);
}

// Attr: [inline]
inline f64 math__erfc(f64 a) {
	return erfc(a);
}

// Attr: [inline]
inline f64 math__exp2(f64 a) {
	return exp2(a);
}

// Attr: [inline]
inline f64 math__floor(f64 a) {
	return floor(a);
}

// Attr: [inline]
inline f64 math__fmod(f64 a, f64 b) {
	return fmod(a, b);
}

// Attr: [inline]
inline f64 math__gamma(f64 a) {
	return tgamma(a);
}

// Attr: [inline]
inline f64 math__hypot(f64 a, f64 b) {
	return hypot(a, b);
}

// Attr: [inline]
inline f64 math__log(f64 a) {
	return log(a);
}

// Attr: [inline]
inline f64 math__log2(f64 a) {
	return log2(a);
}

// Attr: [inline]
inline f64 math__log10(f64 a) {
	return log10(a);
}

// Attr: [inline]
inline f64 math__log_gamma(f64 a) {
	return lgamma(a);
}

// Attr: [inline]
inline f64 math__log_n(f64 a, f64 b) {
	return log(a) / log(b);
}

// Attr: [inline]
inline f64 math__pow(f64 a, f64 b) {
	return pow(a, b);
}

// Attr: [inline]
inline f32 math__powf(f32 a, f32 b) {
	return powf(a, b);
}

// Attr: [inline]
inline f64 math__round(f64 f) {
	return round(f);
}

// Attr: [inline]
inline f64 math__sin(f64 a) {
	return sin(a);
}

// Attr: [inline]
inline f32 math__sinf(f32 a) {
	return sinf(a);
}

// Attr: [inline]
inline f64 math__sinh(f64 a) {
	return sinh(a);
}

// Attr: [inline]
inline f64 math__sqrt(f64 a) {
	return sqrt(a);
}

// Attr: [inline]
inline f32 math__sqrtf(f32 a) {
	return sqrtf(a);
}

// Attr: [inline]
inline f64 math__tan(f64 a) {
	return tan(a);
}

// Attr: [inline]
inline f32 math__tanf(f32 a) {
	return tanf(a);
}

// Attr: [inline]
inline f64 math__tanh(f64 a) {
	return tanh(a);
}

// Attr: [inline]
inline f64 math__trunc(f64 a) {
	return trunc(a);
}

f64 math__aprox_sin(f64 a) {
	f64 a0 = 1.91059300966915117e-31;
	f64 a1 = 1.00086760103908896;
	f64 a2 = -1.21276126894734565e-2;
	f64 a3 = -1.38078780785773762e-1;
	f64 a4 = -2.67353392911981221e-2;
	f64 a5 = 2.08026600266304389e-2;
	f64 a6 = -3.03996055049204407e-3;
	f64 a7 = 1.38235642404333740e-4;
	return a0 + a * (a1 + a * (a2 + a * (a3 + a * (a4 + a * (a5 + a * (a6 + a * a7))))));
}

f64 math__aprox_cos(f64 a) {
	f64 a0 = 9.9995999154986614e-1;
	f64 a1 = 1.2548995793001028e-3;
	f64 a2 = -5.0648546280678015e-1;
	f64 a3 = 1.2942246466519995e-2;
	f64 a4 = 2.8668384702547972e-2;
	f64 a5 = 7.3726485210586547e-3;
	f64 a6 = -3.8510875386947414e-3;
	f64 a7 = 4.7196604604366623e-4;
	f64 a8 = -1.8776444013090451e-5;
	return a0 + a * (a1 + a * (a2 + a * (a3 + a * (a4 + a * (a5 + a * (a6 + a * (a7 + a * a8)))))));
}

f64 math__copysign(f64 x, f64 y) {
	return math__f64_from_bits((((math__f64_bits(x) & ~_const_math__sign_mask)) | ((math__f64_bits(y) & _const_math__sign_mask))));
}

f64 math__degrees(f64 radians) {
	return radians * (180.0 / _const_math__pi);
}

array_int math__digits(int _n, int base) {
	if (base < 2) {
		v_panic(_STR("digits: Cannot find digits of n with base %"PRId32"", 1, base));
	}
	int n = _n;
	int sign = 1;
	if (n < 0) {
		sign = -1;
		n = -n;
	}
	array_int res = __new_array_with_default(0, 0, sizeof(int), 0);
	for (;;) {
		if (!(n != 0)) break;
		array_push(&res, _MOV((int[]){ (n % base) * sign }));
		n /= base;
	}
	return res;
}

f64 math__fabs(f64 x) {
	if (x < 0.0) {
		return -x;
	}
	return x;
}

i64 math__gcd(i64 a_, i64 b_) {
	i64 a = a_;
	i64 b = b_;
	if (a < 0) {
		a = -a;
	}
	if (b < 0) {
		b = -b;
	}
	for (;;) {
		if (!(b != 0)) break;
		a %= b;
		if (a == 0) {
			return b;
		}
		b %= a;
	}
	return a;
}

i64 math__lcm(i64 a, i64 b) {
	if (a == 0) {
		return a;
	}
	i64 res = a * (b / math__gcd(b, a));
	if (res < 0) {
		return -res;
	}
	return res;
}

f64 math__max(f64 a, f64 b) {
	if (a > b) {
		return a;
	}
	return b;
}

f64 math__min(f64 a, f64 b) {
	if (a < b) {
		return a;
	}
	return b;
}

f64 math__radians(f64 degrees) {
	return degrees * (_const_math__pi / 180.0);
}

u32 math__f32_bits(f32 f) {
	u32 p = *(((u32*)(&f)));
	return p;
}

f32 math__f32_from_bits(u32 b) {
	f32 p = *(((f32*)(&b)));
	return p;
}

u64 math__f64_bits(f64 f) {
	u64 p = *(((u64*)(&f)));
	return p;
}

f64 math__f64_from_bits(u64 b) {
	f64 p = *(((f64*)(&b)));
	return p;
}

// TypeDecl
eventbus__EventBus* eventbus__new() {
	eventbus__Registry* registry = (eventbus__Registry*)memdup(&(eventbus__Registry){.events = __new_array_with_default(0, 0, sizeof(eventbus__EventHandler), 0),}, sizeof(eventbus__Registry));
	return (eventbus__EventBus*)memdup(&(eventbus__EventBus){.registry = registry,.publisher = (eventbus__Publisher*)memdup(&(eventbus__Publisher){.registry = registry,}, sizeof(eventbus__Publisher)),.subscriber = (eventbus__Subscriber*)memdup(&(eventbus__Subscriber){.registry = registry,}, sizeof(eventbus__Subscriber)),}, sizeof(eventbus__EventBus));
}

void eventbus__EventBus_publish(eventbus__EventBus* eb, string name, voidptr sender, voidptr args) {
	eventbus__Publisher* publisher = eb->publisher;
	eventbus__Publisher_publish(publisher, name, sender, args);
}

void eventbus__EventBus_clear_all(eventbus__EventBus* eb) {
	eventbus__Publisher* publisher = eb->publisher;
	eventbus__Publisher_clear_all(publisher);
}

bool eventbus__EventBus_has_subscriber(eventbus__EventBus* eb, string name) {
	return eventbus__Registry_check_subscriber(eb->registry, name);
}

static void eventbus__Publisher_publish(eventbus__Publisher* pb, string name, voidptr sender, voidptr args) {
	// FOR IN array
	array _t214 = pb->registry->events;
	for (int i = 0; i < _t214.len; ++i) {
		eventbus__EventHandler event = ((eventbus__EventHandler*)_t214.data)[i];
		if (string_eq(event.name, name)) {
			if (event.once) {
				array_delete(&pb->registry->events, i);
			}
			event.handler(event.receiver, args, sender);
		}
	}
}

static void eventbus__Publisher_clear_all(eventbus__Publisher* p) {
	if (p->registry->events.len == 0) {
		return;
	}
	for (int i = p->registry->events.len - 1; i >= 0; i--) {
		array_delete(&p->registry->events, i);
	}
}

void eventbus__Subscriber_subscribe(eventbus__Subscriber* s, string name, eventbus__EventHandlerFn handler) {
	array_push(&s->registry->events, _MOV((eventbus__EventHandler[]){ (eventbus__EventHandler){.name = name,.handler = handler,.receiver = ((voidptr)(0)),.once = 0,} }));
}

void eventbus__Subscriber_subscribe_method(eventbus__Subscriber* s, string name, eventbus__EventHandlerFn handler, voidptr receiver) {
	array_push(&s->registry->events, _MOV((eventbus__EventHandler[]){ (eventbus__EventHandler){.name = name,.handler = handler,.receiver = receiver,.once = 0,} }));
}

void eventbus__Subscriber_subscribe_once(eventbus__Subscriber* s, string name, eventbus__EventHandlerFn handler) {
	array_push(&s->registry->events, _MOV((eventbus__EventHandler[]){ (eventbus__EventHandler){.name = name,.handler = handler,.receiver = ((voidptr)(0)),.once = true,} }));
}

bool eventbus__Subscriber_is_subscribed(eventbus__Subscriber* s, string name) {
	return eventbus__Registry_check_subscriber(s->registry, name);
}

void eventbus__Subscriber_unsubscribe(eventbus__Subscriber* s, string name, eventbus__EventHandlerFn handler) {
	// FOR IN array
	array _t218 = s->registry->events;
	for (int i = 0; i < _t218.len; ++i) {
		eventbus__EventHandler event = ((eventbus__EventHandler*)_t218.data)[i];
		if (string_eq(event.name, name)) {
			if (event.handler == handler) {
				array_delete(&s->registry->events, i);
			}
		}
	}
}

static bool eventbus__Registry_check_subscriber(eventbus__Registry* r, string name) {
	// FOR IN array
	array _t219 = r->events;
	for (int _t220 = 0; _t220 < _t219.len; ++_t220) {
		eventbus__EventHandler event = ((eventbus__EventHandler*)_t219.data)[_t220];
		if (string_eq(event.name, name)) {
			return true;
		}
	}
	return false;
}

string time__Time_format(time__Time t) {
	return time__Time_get_fmt_str(t, time__FormatDelimiter_hyphen, time__FormatTime_hhmm24, time__FormatDate_yyyymmdd);
}

string time__Time_format_ss(time__Time t) {
	return time__Time_get_fmt_str(t, time__FormatDelimiter_hyphen, time__FormatTime_hhmmss24, time__FormatDate_yyyymmdd);
}

string time__Time_format_ss_milli(time__Time t) {
	return time__Time_get_fmt_str(t, time__FormatDelimiter_hyphen, time__FormatTime_hhmmss24_milli, time__FormatDate_yyyymmdd);
}

string time__Time_format_ss_micro(time__Time t) {
	return time__Time_get_fmt_str(t, time__FormatDelimiter_hyphen, time__FormatTime_hhmmss24_micro, time__FormatDate_yyyymmdd);
}

string time__Time_hhmm(time__Time t) {
	return time__Time_get_fmt_time_str(t, time__FormatTime_hhmm24);
}

string time__Time_hhmmss(time__Time t) {
	return time__Time_get_fmt_time_str(t, time__FormatTime_hhmmss24);
}

string time__Time_hhmm12(time__Time t) {
	return time__Time_get_fmt_time_str(t, time__FormatTime_hhmm12);
}

string time__Time_ymmdd(time__Time t) {
	return time__Time_get_fmt_date_str(t, time__FormatDelimiter_hyphen, time__FormatDate_yyyymmdd);
}

string time__Time_ddmmy(time__Time t) {
	return time__Time_get_fmt_date_str(t, time__FormatDelimiter_dot, time__FormatDate_ddmmyyyy);
}

string time__Time_md(time__Time t) {
	return time__Time_get_fmt_date_str(t, time__FormatDelimiter_space, time__FormatDate_mmmd);
}

string time__Time_clean(time__Time t) {
	time__Time znow = time__now();
	if (t.month == znow.month && t.year == znow.year && t.day == znow.day) {
		return time__Time_get_fmt_time_str(t, time__FormatTime_hhmm24);
	}
	if (t.year == znow.year) {
		return time__Time_get_fmt_str(t, time__FormatDelimiter_space, time__FormatTime_hhmm24, time__FormatDate_mmmd);
	}
	return time__Time_format(t);
}

string time__Time_clean12(time__Time t) {
	time__Time znow = time__now();
	if (t.month == znow.month && t.year == znow.year && t.day == znow.day) {
		return time__Time_get_fmt_time_str(t, time__FormatTime_hhmm12);
	}
	if (t.year == znow.year) {
		return time__Time_get_fmt_str(t, time__FormatDelimiter_space, time__FormatTime_hhmm12, time__FormatDate_mmmd);
	}
	return time__Time_format(t);
}

string time__Time_get_fmt_time_str(time__Time t, time__FormatTime fmt_time) {
	if (fmt_time == time__FormatTime_no_time) {
		return tos_lit("");
	}
	string tp = (t.hour > 11 ? (tos_lit("p.m.")) : (tos_lit("a.m.")));
	int hour = (t.hour > 12 ? (t.hour - 12) : t.hour == 0 ? (12) : (t.hour));
	time__FormatTime _t221 = fmt_time;
		return ((_t221 == time__FormatTime_hhmm12) ? (_STR("%"PRId32"\000:%02"PRId32"\000 %.*s", 3, hour, t.minute, tp)) : (_t221 == time__FormatTime_hhmm24) ? (_STR("%02"PRId32"\000:%02"PRId32"", 2, t.hour, t.minute)) : (_t221 == time__FormatTime_hhmmss12) ? (_STR("%"PRId32"\000:%02"PRId32"\000:%02"PRId32"\000 %.*s", 4, hour, t.minute, t.second, tp)) : (_t221 == time__FormatTime_hhmmss24) ? (_STR("%02"PRId32"\000:%02"PRId32"\000:%02"PRId32"", 3, t.hour, t.minute, t.second)) : (_t221 == time__FormatTime_hhmmss24_milli) ? (_STR("%02"PRId32"\000:%02"PRId32"\000:%02"PRId32"\000.%03"PRId32"", 4, t.hour, t.minute, t.second, (t.microsecond / 1000))) : (_t221 == time__FormatTime_hhmmss24_micro) ? (_STR("%02"PRId32"\000:%02"PRId32"\000:%02"PRId32"\000.%06"PRId32"", 4, t.hour, t.minute, t.second, t.microsecond)) : (_STR("unknown enumeration %.*s", 1, time__FormatTime_str(fmt_time))));
}

string time__Time_get_fmt_date_str(time__Time t, time__FormatDelimiter fmt_dlmtr, time__FormatDate fmt_date) {
	if (fmt_date == time__FormatDate_no_date) {
		return tos_lit("");
	}
	string month = _STR("%.*s", 1, time__Time_smonth(t));
	string year = _STR("%02"PRId32"", 1, (t.year % 100));
	time__FormatDate _t222 = fmt_date;
		string res = ((_t222 == time__FormatDate_ddmmyy) ? (_STR("%02"PRId32"\000|%02"PRId32"\000|%.*s", 3, t.day, t.month, year)) : (_t222 == time__FormatDate_ddmmyyyy) ? (_STR("%02"PRId32"\000|%02"PRId32"\000|%04"PRId32"", 3, t.day, t.month, t.year)) : (_t222 == time__FormatDate_mmddyy) ? (_STR("%02"PRId32"\000|%02"PRId32"\000|%.*s", 3, t.month, t.day, year)) : (_t222 == time__FormatDate_mmddyyyy) ? (_STR("%02"PRId32"\000|%02"PRId32"\000|%04"PRId32"", 3, t.month, t.day, t.year)) : (_t222 == time__FormatDate_mmmd) ? (_STR("%.*s\000|%"PRId32"", 2, month, t.day)) : (_t222 == time__FormatDate_mmmdd) ? (_STR("%.*s\000|%02"PRId32"", 2, month, t.day)) : (_t222 == time__FormatDate_mmmddyyyy) ? (_STR("%.*s\000|%02"PRId32"\000|%04"PRId32"", 3, month, t.day, t.year)) : (_t222 == time__FormatDate_yyyymmdd) ? (_STR("%04"PRId32"\000|%02"PRId32"\000|%02"PRId32"", 3, t.year, t.month, t.day)) : (_STR("unknown enumeration %.*s", 1, time__FormatDate_str(fmt_date))));
	time__FormatDelimiter _t223 = fmt_dlmtr;
		string del = ((_t223 == time__FormatDelimiter_dot) ? (tos_lit(".")) : (_t223 == time__FormatDelimiter_hyphen) ? (tos_lit("-")) : (_t223 == time__FormatDelimiter_slash) ? (tos_lit("/")) : (_t223 == time__FormatDelimiter_space) ? (tos_lit(" ")) : (tos_lit("")));
	res = string_replace(res, tos_lit("|"), del);
	return res;
}

string time__Time_get_fmt_str(time__Time t, time__FormatDelimiter fmt_dlmtr, time__FormatTime fmt_time, time__FormatDate fmt_date) {
	if (fmt_date == time__FormatDate_no_date) {
		if (fmt_time == time__FormatTime_no_time) {
			return tos_lit("");
		} else {
			return time__Time_get_fmt_time_str(t, fmt_time);
		}
	} else {
		if (fmt_time != time__FormatTime_no_time) {
			return string_add(string_add(time__Time_get_fmt_date_str(t, fmt_dlmtr, fmt_date), tos_lit(" ")), time__Time_get_fmt_time_str(t, fmt_time));
		} else {
			return time__Time_get_fmt_date_str(t, fmt_dlmtr, fmt_date);
		}
	}
	return (string){.str=(byteptr)""};
}

string time__Time_utc_string(time__Time t) {
	string day_str = time__Time_weekday_str(t);
	string month_str = time__Time_smonth(t);
	string utc_string = _STR("%.*s\000, %"PRId32"\000 %.*s\000 %"PRId32"\000 %02"PRId32"\000:%02"PRId32"\000:%02"PRId32"\000 UTC", 8, day_str, t.day, month_str, t.year, t.hour, t.minute, t.second);
	return utc_string;
}

// Attr: [inline]
inline bool time__Time_eq(time__Time t1, time__Time t2) {
	if (t1.v_unix == t2.v_unix && t1.microsecond == t2.microsecond) {
		return true;
	}
	return false;
}

bool time__Time_ne(time__Time t1, time__Time t2) {
	return !time__Time_eq(t1, t2);
}

bool time__Time_lt(time__Time t1, time__Time t2) {
	if (t1.v_unix < t2.v_unix || (t1.v_unix == t2.v_unix && t1.microsecond < t2.microsecond)) {
		return true;
	}
	return false;
}

bool time__Time_le(time__Time t1, time__Time t2) {
	return time__Time_lt(t1, t2) || time__Time_eq(t1, t2);
}

bool time__Time_gt(time__Time t1, time__Time t2) {
	if (t1.v_unix > t2.v_unix || (t1.v_unix == t2.v_unix && t1.microsecond > t2.microsecond)) {
		return true;
	}
	return false;
}

bool time__Time_ge(time__Time t1, time__Time t2) {
	return time__Time_gt(t1, t2) || time__Time_eq(t1, t2);
}

Option_time__Time time__parse(string s) {
	Option_int _t224 = string_index(s, tos_lit(" "));
	if (!_t224.ok) {
		string err = _t224.v_error;
		int errcode = _t224.ecode;
		Option _t225 = v_error(_STR("Invalid time format: %.*s", 1, s));
		return *(Option_time__Time*)&_t225;
	}
 	int pos = *(int*) _t224.data;
	string symd = string_substr(s, 0, pos);
	array_string ymd = string_split(symd, tos_lit("-"));
	if (ymd.len != 3) {
		Option _t226 = v_error(_STR("Invalid time format: %.*s", 1, s));
		return *(Option_time__Time*)&_t226;
	}
	string shms = string_substr(s, pos, s.len);
	array_string hms = string_split(shms, tos_lit(":"));
	string hour = string_substr((*(string*)array_get(hms, 0)), 1, (*(string*)array_get(hms, 0)).len);
	string minute = (*(string*)array_get(hms, 1));
	string second = (*(string*)array_get(hms, 2));
	time__Time res = time__new_time((time__Time){
		.year = string_int((*(string*)array_get(ymd, 0))),
		.month = string_int((*(string*)array_get(ymd, 1))),
		.day = string_int((*(string*)array_get(ymd, 2))),
		.hour = string_int(hour),
		.minute = string_int(minute),
		.second = string_int(second),
		.microsecond = 0,
		.v_unix = 0,
	});
	Option_time__Time _t227;
	opt_ok2(&(time__Time[]) { res }, (OptionBase*)(&_t227), sizeof(time__Time));
	return _t227;
}

Option_time__Time time__parse_rfc2822(string s) {
	array_string fields = string_split(s, tos_lit(" "));
	if (fields.len < 5) {
		Option _t228 = v_error(_STR("Invalid time format: %.*s", 1, s));
		return *(Option_time__Time*)&_t228;
	}
	Option_int _t229 = string_index(_const_time__months_string, (*(string*)array_get(fields, 2)));
	if (!_t229.ok) {
		string err = _t229.v_error;
		int errcode = _t229.ecode;
		Option _t230 = v_error(_STR("Invalid time format: %.*s", 1, s));
		return *(Option_time__Time*)&_t230;
	}
 	int pos = *(int*) _t229.data;
	int mm = pos / 3 + 1;
	byteptr tmstr = ((byteptr)(0));
	{ // Unsafe block
		tmstr = v_malloc(s.len * 2);
	}
	int count = snprintf(((charptr)(tmstr)), (s.len * 2), "%s-%02d-%s %s", (*(string*)array_get(fields, 3)).str, mm, (*(string*)array_get(fields, 1)).str, (*(string*)array_get(fields, 4)).str);
	return time__parse(tos(tmstr, count));
}

Option_time__Time time__parse_iso8601(string s) {
	int year = 0;
	int month = 0;
	int day = 0;
	int hour = 0;
	int minute = 0;
	int second = 0;
	int mic_second = 0;
	rune time_char = 'a';
	rune plus_min = 'a';
	int offset_hour = 0;
	int offset_min = 0;
	int count = sscanf(((charptr)(s.str)), "%4d-%2d-%2d%c%2d:%2d:%2d.%6d%c%2d:%2d", &year, &month, &day, ((charptr)(&time_char)), &hour, &minute, &second, &mic_second, ((charptr)(&plus_min)), &offset_hour, &offset_min);
	if (count != 11) {
		Option _t231 = v_error(tos_lit("Invalid 8601 format"));
		return *(Option_time__Time*)&_t231;
	}
	if (time_char != 'T' && time_char != ' ') {
		Option _t232 = v_error(tos_lit("Invalid 8601 format, expected space or `T` as time separator"));
		return *(Option_time__Time*)&_t232;
	}
	if (plus_min != '+' && plus_min != '-') {
		Option _t233 = v_error(tos_lit("Invalid 8601 format, expected `+` or `-` as time separator"));
		return *(Option_time__Time*)&_t233;
	}
	time__Time t = time__new_time((time__Time){
		.year = year,
		.month = month,
		.day = day,
		.hour = hour,
		.minute = minute,
		.second = second,
		.microsecond = mic_second,
		.v_unix = 0,
	});
	u64 unix_time = t.v_unix;
	int unix_offset = ((int)(0));
	if (offset_hour > 0) {
		unix_offset += 3600 * offset_hour;
	}
	if (offset_min > 0) {
		unix_offset += 60 * offset_min;
	}
	if (unix_offset != 0) {
		if (plus_min == '+') {
			unix_time -= ((u64)(unix_offset));
		} else {
			unix_time += ((u64)(unix_offset));
		}
		t = time__unix2(((int)(unix_time)), t.microsecond);
	}
	Option_time__Time _t234;
	opt_ok2(&(time__Time[]) { time__to_local_time(t) }, (OptionBase*)(&_t234), sizeof(time__Time));
	return _t234;
}

time__StopWatch time__new_stopwatch(time__StopWatchOptions opts) {
	u64 initial = ((u64)(0U));
	if (opts.auto_start) {
		initial = time__sys_mono_now();
	}
	return (time__StopWatch){.elapsed = 0,.start = initial,.end = 0,};
}

void time__StopWatch_start(time__StopWatch* t) {
	t->start = time__sys_mono_now();
	t->end = 0;
}

void time__StopWatch_restart(time__StopWatch* t) {
	t->start = time__sys_mono_now();
	t->end = 0;
	t->elapsed = 0;
}

void time__StopWatch_stop(time__StopWatch* t) {
	t->end = time__sys_mono_now();
}

void time__StopWatch_pause(time__StopWatch* t) {
	if (t->start > 0) {
		if (t->end == 0) {
			t->elapsed += time__sys_mono_now() - t->start;
		} else {
			t->elapsed += t->end - t->start;
		}
	}
	t->start = 0;
}

time__Duration time__StopWatch_elapsed(time__StopWatch t) {
	if (t.start > 0) {
		if (t.end == 0) {
			return ((((i64)(time__sys_mono_now() - t.start + t.elapsed))));
		} else {
			return ((((i64)(t.end - t.start + t.elapsed))));
		}
	}
	return ((((i64)(t.elapsed))));
}

time__Time time__now() {
	#if defined(__APPLE__)
	{
	}
	#endif
	#if defined(_WIN32)
	{
	}
	#endif
	#if defined(__sun)
	{
	}
	#endif
	#if defined(__linux__) || defined(__ANDROID__)
	{
		return time__linux_now();
	}
	#endif
	time_t t = time(0);
	struct tm* now = localtime(&t);
	return time__convert_ctime(*now, 0);
}

time__Time time__utc() {
	#if defined(__APPLE__)
	{
	}
	#endif
	#if defined(_WIN32)
	{
	}
	#endif
	#if defined(__sun)
	{
	}
	#endif
	#if defined(__linux__) || defined(__ANDROID__)
	{
		return time__linux_utc();
	}
	#endif
	time_t t = time(0);
	time(&t);
	return time__unix2(((int)(t)), 0);
}

string time__Time_smonth(time__Time t) {
	if (t.month <= 0 || t.month > 12) {
		return tos_lit("---");
	}
	int i = t.month - 1;
	return string_substr(_const_time__months_string, i * 3, (i + 1) * 3);
}

time__Time time__new_time(time__Time t) {
	if (t.v_unix != 0) {
		return t;
	}
	struct tm tt = (struct tm){
		.tm_sec = t.second,
		.tm_min = t.minute,
		.tm_hour = t.hour,
		.tm_mday = t.day,
		.tm_mon = t.month - 1,
		.tm_year = t.year - 1900,
		.tm_wday = 0,
		.tm_yday = 0,
		.tm_isdst = 0,
	};
	u64 utime = ((u64)(time__make_unix_time(tt)));
	return // assoc
	(time__Time){
		.year = t.year,
		.month = t.month,
		.day = t.day,
		.hour = t.hour,
		.minute = t.minute,
		.second = t.second,
		.microsecond = t.microsecond,
		.v_unix = utime, 
	};
}

// Attr: [inline]
inline int time__Time_unix_time(time__Time t) {
	return ((int)(t.v_unix));
}

// Attr: [inline]
inline u64 time__Time_unix_time_milli(time__Time t) {
	return t.v_unix * 1000 + ((u64)(t.microsecond / 1000));
}

time__Time time__Time_add_seconds(time__Time t, int seconds) {
	return time__unix(((int)(t.v_unix + ((u64)(seconds)))));
}

time__Time time__Time_add_days(time__Time t, int days) {
	return time__unix(((int)(t.v_unix + ((u64)(((i64)(days)) * 3600 * 24)))));
}

static int time__since(time__Time t) {
	return 0;
}

string time__Time_relative(time__Time t) {
	time__Time znow = time__now();
	u64 secs = znow.v_unix - t.v_unix;
	if (secs <= 30) {
		return tos_lit("now");
	}
	if (secs < 60) {
		return tos_lit("1m");
	}
	if (secs < 3600) {
		u64 m = secs / 60;
		if (m == 1) {
			return tos_lit("1 minute ago");
		}
		return _STR("%"PRIu64"\000 minutes ago", 2, m);
	}
	if (secs < 3600 * 24) {
		u64 h = secs / 3600;
		if (h == 1) {
			return tos_lit("1 hour ago");
		}
		return _STR("%"PRIu64"\000 hours ago", 2, h);
	}
	if (secs < 3600 * 24 * 5) {
		u64 d = secs / 3600 / 24;
		if (d == 1) {
			return tos_lit("1 day ago");
		}
		return _STR("%"PRIu64"\000 days ago", 2, d);
	}
	if (secs > 3600 * 24 * 10000) {
		return tos_lit("");
	}
	return time__Time_md(t);
}

string time__Time_relative_short(time__Time t) {
	time__Time znow = time__now();
	u64 secs = znow.v_unix - t.v_unix;
	if (secs <= 30) {
		return tos_lit("now");
	}
	if (secs < 60) {
		return tos_lit("1m");
	}
	if (secs < 3600) {
		return _STR("%"PRIu64"\000m", 2, secs / 60);
	}
	if (secs < 3600 * 24) {
		return _STR("%"PRIu64"\000h", 2, secs / 3600);
	}
	if (secs < 3600 * 24 * 5) {
		return _STR("%"PRIu64"\000d", 2, secs / 3600 / 24);
	}
	if (secs > 3600 * 24 * 10000) {
		return tos_lit("");
	}
	return time__Time_md(t);
}

int time__day_of_week(int y, int m, int d) {
	array_int t = new_array_from_c_array(12, 12, sizeof(int), _MOV((int[12]){
			0, 3, 2, 5, 0, 3, 5, 1, 4, 6, 2, 4}));
	int sy = y;
	if (m < 3) {
		sy = sy - 1;
	}
	return (sy + sy / 4 - sy / 100 + sy / 400 + (*(int*)array_get(t, m - 1)) + d - 1) % 7 + 1;
}

int time__Time_day_of_week(time__Time t) {
	return time__day_of_week(t.year, t.month, t.day);
}

string time__Time_weekday_str(time__Time t) {
	int i = time__Time_day_of_week(t) - 1;
	return string_substr(_const_time__days_string, i * 3, (i + 1) * 3);
}

string time__Time_long_weekday_str(time__Time t) {
	int i = time__Time_day_of_week(t) - 1;
	return (*(string*)array_get(_const_time__long_days, i));
}

i64 time__ticks() {
	#if defined(_WIN32)
	{
	}
	#else
	{
		struct timeval ts = (struct timeval){.tv_sec = 0,.tv_usec = 0,};
		gettimeofday(&ts, 0);
		return ((i64)(ts.tv_sec * ((u64)(1000U)) + (ts.tv_usec / ((u64)(1000U)))));
	}
	#endif
	return 0;
}

void time__sleep(int seconds) {
	#if defined(_WIN32)
	{
	}
	#else
	{
		sleep(seconds);
	}
	#endif
}

void time__sleep_ms(int milliseconds) {
	#if defined(_WIN32)
	{
	}
	#else
	{
		usleep(milliseconds * 1000);
	}
	#endif
}

void time__usleep(int microseconds) {
	#if defined(_WIN32)
	{
	}
	#else
	{
		usleep(microseconds);
	}
	#endif
}

bool time__is_leap_year(int year) {
	return (year % 4 == 0) && (year % 100 != 0 || year % 400 == 0);
}

Option_int time__days_in_month(int month, int year) {
	if (month > 12 || month < 1) {
		Option _t235 = v_error(_STR("Invalid month: %"PRId32"", 1, month));
		return *(Option_int*)&_t235;
	}
	int extra = (month == 2 && time__is_leap_year(year) ? (1) : (0));
	int res = (*(int*)array_get(_const_time__month_days, month - 1)) + extra;
	Option_int _t236;
	opt_ok2(&(int[]) { res }, (OptionBase*)(&_t236), sizeof(int));
	return _t236;
}

string time__Time_str(time__Time t) {
	return time__Time_format_ss(t);
}

static time__Time time__convert_ctime(struct tm t, int microsecond) {
	return (time__Time){
		.year = t.tm_year + 1900,
		.month = t.tm_mon + 1,
		.day = t.tm_mday,
		.hour = t.tm_hour,
		.minute = t.tm_min,
		.second = t.tm_sec,
		.microsecond = microsecond,
		.v_unix = ((u64)(time__make_unix_time(t))),
	};
}

// TypeDecl
i64 time__Duration_nanoseconds(time__Duration d) {
	return ((i64)(d));
}

i64 time__Duration_microseconds(time__Duration d) {
	return ((i64)(d)) / 1000;
}

i64 time__Duration_milliseconds(time__Duration d) {
	return ((i64)(d)) / 1000000;
}

f64 time__Duration_seconds(time__Duration d) {
	i64 sec = d / _const_time__second;
	i64 nsec = d % _const_time__second;
	return ((f64)(sec)) + ((f64)(nsec)) / 1e9;
}

f64 time__Duration_minutes(time__Duration d) {
	i64 min = d / _const_time__minute;
	i64 nsec = d % _const_time__minute;
	return ((f64)(min)) + ((f64)(nsec)) / (60 * 1e9);
}

f64 time__Duration_hours(time__Duration d) {
	i64 hr = d / _const_time__hour;
	i64 nsec = d % _const_time__hour;
	return ((f64)(hr)) + ((f64)(nsec)) / (60 * 60 * 1e9);
}

static u64 time__sys_mono_now_darwin() {
	return 0;
}

time__Time time__darwin_now() {
	return (time__Time){.year = 0,.month = 0,.day = 0,.hour = 0,.minute = 0,.second = 0,.microsecond = 0,.v_unix = 0,};
}

time__Time time__solaris_now() {
	return (time__Time){.year = 0,.month = 0,.day = 0,.hour = 0,.minute = 0,.second = 0,.microsecond = 0,.v_unix = 0,};
}

time__Time time__darwin_utc() {
	return (time__Time){.year = 0,.month = 0,.day = 0,.hour = 0,.minute = 0,.second = 0,.microsecond = 0,.v_unix = 0,};
}

time__Time time__solaris_utc() {
	return (time__Time){.year = 0,.month = 0,.day = 0,.hour = 0,.minute = 0,.second = 0,.microsecond = 0,.v_unix = 0,};
}

static int time__make_unix_time(struct tm t) {
	return ((int)(timegm(&t)));
}

static time__Time time__to_local_time(time__Time t) {
	struct tm loc_tm = (struct tm){.tm_sec = 0,.tm_min = 0,.tm_hour = 0,.tm_mday = 0,.tm_mon = 0,.tm_year = 0,.tm_wday = 0,.tm_yday = 0,.tm_isdst = 0,};
	localtime_r(((time__time_t)(&t.v_unix)), &loc_tm);
	return time__convert_ctime(loc_tm, t.microsecond);
}

// TypeDecl
u64 time__sys_mono_now() {
	#if defined(__APPLE__)
	{
	}
	#else
	{
		struct timespec ts = (struct timespec){.tv_sec = 0,.tv_nsec = 0,};
		clock_gettime(CLOCK_MONOTONIC, &ts);
		return ((u64)(ts.tv_sec)) * 1000000000 + ((u64)(ts.tv_nsec));
	}
	#endif
	return 0;
}

// Attr: [inline]
inline static u64 time__vpc_now() {
	struct timespec ts = (struct timespec){.tv_sec = 0,.tv_nsec = 0,};
	clock_gettime(CLOCK_MONOTONIC, &ts);
	return ((u64)(ts.tv_sec)) * 1000000000 + ((u64)(ts.tv_nsec));
}

// Attr: [inline]
inline static time__Time time__linux_now() {
	struct timespec ts = (struct timespec){.tv_sec = 0,.tv_nsec = 0,};
	clock_gettime(CLOCK_REALTIME, &ts);
	struct tm loc_tm = (struct tm){.tm_sec = 0,.tm_min = 0,.tm_hour = 0,.tm_mday = 0,.tm_mon = 0,.tm_year = 0,.tm_wday = 0,.tm_yday = 0,.tm_isdst = 0,};
	localtime_r(&ts.tv_sec, &loc_tm);
	return time__convert_ctime(loc_tm, ((int)(ts.tv_nsec / 1000)));
}

// Attr: [inline]
inline static time__Time time__linux_utc() {
	struct timespec ts = (struct timespec){.tv_sec = 0,.tv_nsec = 0,};
	clock_gettime(CLOCK_REALTIME, &ts);
	return time__unix2(((int)(ts.tv_sec)), ((int)(ts.tv_nsec / 1000)));
}

time__Time time__win_now() {
	return (time__Time){.year = 0,.month = 0,.day = 0,.hour = 0,.minute = 0,.second = 0,.microsecond = 0,.v_unix = 0,};
}

time__Time time__win_utc() {
	return (time__Time){.year = 0,.month = 0,.day = 0,.hour = 0,.minute = 0,.second = 0,.microsecond = 0,.v_unix = 0,};
}

struct timespec time__Duration_timespec(time__Duration d) {
	struct timespec ts = (struct timespec){.tv_sec = 0,.tv_nsec = 0,};
	clock_gettime(CLOCK_REALTIME, &ts);
	i64 d_sec = d / _const_time__second;
	i64 d_nsec = d % _const_time__second;
	ts.tv_sec += d_sec;
	ts.tv_nsec += d_nsec;
	if (ts.tv_nsec > _const_time__second) {
		ts.tv_nsec -= _const_time__second;
		ts.tv_sec++;
	}
	return ts;
}

struct timespec time__zero_timespec() {
	struct timespec ts = (struct timespec){.tv_sec = 0,.tv_nsec = 0,};
	return ts;
}

time__Time time__unix(int abs) {
	int day_offset = abs / _const_time__seconds_per_day;
	if (abs % _const_time__seconds_per_day < 0) {
		day_offset--;
	}
	multi_return_int_int_int mr_470 = time__calculate_date_from_offset(day_offset);
	int year = mr_470.arg0;
	int month = mr_470.arg1;
	int day = mr_470.arg2;
	multi_return_int_int_int mr_524 = time__calculate_time_from_offset(abs % _const_time__seconds_per_day);
	int hr = mr_524.arg0;
	int min = mr_524.arg1;
	int sec = mr_524.arg2;
	return (time__Time){
		.year = year,
		.month = month,
		.day = day,
		.hour = hr,
		.minute = min,
		.second = sec,
		.microsecond = 0,
		.v_unix = ((u64)(abs)),
	};
}

time__Time time__unix2(int abs, int microsecond) {
	int day_offset = abs / _const_time__seconds_per_day;
	if (abs % _const_time__seconds_per_day < 0) {
		day_offset--;
	}
	multi_return_int_int_int mr_1019 = time__calculate_date_from_offset(day_offset);
	int year = mr_1019.arg0;
	int month = mr_1019.arg1;
	int day = mr_1019.arg2;
	multi_return_int_int_int mr_1073 = time__calculate_time_from_offset(abs % _const_time__seconds_per_day);
	int hr = mr_1073.arg0;
	int min = mr_1073.arg1;
	int sec = mr_1073.arg2;
	return (time__Time){
		.year = year,
		.month = month,
		.day = day,
		.hour = hr,
		.minute = min,
		.second = sec,
		.microsecond = microsecond,
		.v_unix = ((u64)(abs)),
	};
}

// Attr: [inline]
inline static multi_return_int_int_int time__calculate_date_from_offset(int day_offset_) {
	int day_offset = day_offset_;
	int year = 2001;
	day_offset -= 31 * 365 + 8;
	year += (day_offset / _const_time__days_per_400_years) * 400;
	day_offset %= _const_time__days_per_400_years;
	if (day_offset == _const_time__days_per_100_years * 4) {
		year += 300;
		day_offset -= _const_time__days_per_100_years * 3;
	} else {
		year += (day_offset / _const_time__days_per_100_years) * 100;
		day_offset %= _const_time__days_per_100_years;
	}
	if (day_offset == _const_time__days_per_4_years * 25) {
		year += 96;
		day_offset -= _const_time__days_per_4_years * 24;
	} else {
		year += (day_offset / _const_time__days_per_4_years) * 4;
		day_offset %= _const_time__days_per_4_years;
	}
	if (day_offset == 365 * 4) {
		year += 3;
		day_offset -= 365 * 3;
	} else {
		year += (day_offset / 365);
		day_offset %= 365;
	}
	if (day_offset < 0) {
		year--;
		if (time__is_leap_year(year)) {
			day_offset += 366;
		} else {
			day_offset += 365;
		}
	}
	if (time__is_leap_year(year)) {
		if (day_offset > 31 + 29 - 1) {
			day_offset--;
		} else if (day_offset == 31 + 29 - 1) {
			return (multi_return_int_int_int){.arg0=year, .arg1=2, .arg2=29};
		}
	}
	int estimated_month = day_offset / 31;
	for (;;) {
		if (!(day_offset >= (*(int*)array_get(_const_time__days_before, estimated_month + 1)))) break;
		estimated_month++;
	}
	for (;;) {
		if (!(day_offset < (*(int*)array_get(_const_time__days_before, estimated_month)))) break;
		if (estimated_month == 0) {
			break;
		}
		estimated_month--;
	}
	day_offset -= (*(int*)array_get(_const_time__days_before, estimated_month));
	return (multi_return_int_int_int){.arg0=year, .arg1=estimated_month + 1, .arg2=day_offset + 1};
}

// Attr: [inline]
inline static multi_return_int_int_int time__calculate_time_from_offset(int second_offset_) {
	int second_offset = second_offset_;
	if (second_offset < 0) {
		second_offset += _const_time__seconds_per_day;
	}
	int hour = second_offset / _const_time__seconds_per_hour;
	second_offset %= _const_time__seconds_per_hour;
	int min = second_offset / _const_time__seconds_per_minute;
	second_offset %= _const_time__seconds_per_minute;
	return (multi_return_int_int_int){.arg0=hour, .arg1=min, .arg2=second_offset};
}

struct sg_desc sokol__sapp__create_desc() {
	struct sg_mtl_context_desc mtl_desc = (struct sg_mtl_context_desc){.device = sokol__sapp__metal_get_device(),.renderpass_descriptor_cb = sokol__sapp__metal_get_renderpass_descriptor,.drawable_cb = sokol__sapp__metal_get_drawable,};
	struct sg_d3d11_context_desc d3d11_desc = (struct sg_d3d11_context_desc){.device = sokol__sapp__d3d11_get_device(),.device_context = sokol__sapp__d3d11_get_device_context(),.render_target_view_cb = sokol__sapp__d3d11_get_render_target_view,.depth_stencil_view_cb = sokol__sapp__d3d11_get_depth_stencil_view,};
	return (struct sg_desc){._start_canary = 0,.buffer_pool_size = 0,.image_pool_size = 1000,.shader_pool_size = 0,.pipeline_pool_size = 0,.pass_pool_size = 0,.context_pool_size = 0,.context = (struct sg_context_desc){.sample_count = 0,.gl = {0},.metal = mtl_desc,.d3d11 = d3d11_desc,.color_format = 0,.depth_format = 0,},._end_canary = 0,};
}

// Attr: [inline]
inline bool sokol__sapp__isvalid() {
	return sapp_isvalid();
}

// Attr: [inline]
inline int sokol__sapp__width() {
	return sapp_width();
}

// Attr: [inline]
inline int sokol__sapp__height() {
	return sapp_height();
}

// Attr: [inline]
inline bool sokol__sapp__high_dpi() {
	return sapp_high_dpi();
}

// Attr: [inline]
inline f32 sokol__sapp__dpi_scale() {
	return sapp_dpi_scale();
}

// Attr: [inline]
inline void sokol__sapp__show_keyboard(bool visible) {
	sapp_show_keyboard(visible);
}

// Attr: [inline]
inline bool sokol__sapp__keyboard_shown() {
	return sapp_keyboard_shown();
}

// Attr: [inline]
inline void sokol__sapp__show_mouse(bool visible) {
	sapp_show_mouse(visible);
}

// Attr: [inline]
inline bool sokol__sapp__mouse_shown() {
	return sapp_mouse_shown();
}

// Attr: [inline]
inline voidptr sokol__sapp__userdata() {
	return sapp_userdata();
}

// Attr: [inline]
inline struct sapp_desc sokol__sapp__query_desc() {
	return sapp_query_desc();
}

// Attr: [inline]
inline void sokol__sapp__request_quit() {
	sapp_request_quit();
}

// Attr: [inline]
inline void sokol__sapp__cancel_quit() {
	sapp_cancel_quit();
}

// Attr: [inline]
inline void sokol__sapp__quit() {
	sapp_quit();
}

// Attr: [inline]
inline void sokol__sapp__consume_event() {
	sapp_consume_event();
}

// Attr: [inline]
inline u64 sokol__sapp__frame_count() {
	return sapp_frame_count();
}

// Attr: [inline]
inline void sokol__sapp__set_clipboard_string(byteptr str) {
	sapp_set_clipboard_string(str);
}

// Attr: [inline]
inline byteptr sokol__sapp__get_clipboard_string() {
	return sapp_get_clipboard_string();
}

// Attr: [inline]
inline int sokol__sapp__run(struct sapp_desc* desc) {
	g_desc = *desc;
	return sapp_run(desc);
}

// Attr: [inline]
inline bool sokol__sapp__gles2() {
	return sapp_gles2();
}

// Attr: [inline]
inline void sokol__sapp__html5_ask_leave_site(bool ask) {
	sapp_html5_ask_leave_site(ask);
}

// Attr: [inline]
inline voidptr sokol__sapp__metal_get_device() {
	return sapp_metal_get_device();
}

// Attr: [inline]
inline voidptr sokol__sapp__metal_get_renderpass_descriptor() {
	return sapp_metal_get_renderpass_descriptor();
}

// Attr: [inline]
inline voidptr sokol__sapp__metal_get_drawable() {
	return sapp_metal_get_drawable();
}

// Attr: [inline]
inline voidptr sokol__sapp__macos_get_window() {
	return sapp_macos_get_window();
}

// Attr: [inline]
inline voidptr sokol__sapp__ios_get_window() {
	return sapp_ios_get_window();
}

// Attr: [inline]
inline voidptr sokol__sapp__d3d11_get_device() {
	return sapp_d3d11_get_device();
}

// Attr: [inline]
inline voidptr sokol__sapp__d3d11_get_device_context() {
	return sapp_d3d11_get_device_context();
}

// Attr: [inline]
inline voidptr sokol__sapp__d3d11_get_render_target_view() {
	return sapp_d3d11_get_render_target_view();
}

// Attr: [inline]
inline voidptr sokol__sapp__d3d11_get_depth_stencil_view() {
	return sapp_d3d11_get_depth_stencil_view();
}

// Attr: [inline]
inline voidptr sokol__sapp__win32_get_hwnd() {
	return sapp_win32_get_hwnd();
}

// Attr: [inline]
inline voidptr sokol__sapp__android_get_native_activity() {
	return sapp_android_get_native_activity();
}

string C__sapp_event_str(struct sapp_event* e) {
	return _STR("evt: frame_count=%"PRIu64"\000, type=%.*s", 2, e->frame_count, sokol__sapp__EventType_str(e->type));
}

// Attr: [inline]
inline struct FONScontext* fontstash__create_internal(struct FONSparams* params) {
	return fonsCreateInternal(params);
}

// Attr: [inline]
inline void fontstash__delete_internal(struct FONScontext* s) {
	fonsDeleteInternal(s);
}

// Attr: [inline]
inline void C__FONScontext_set_error_callback(struct FONScontext* s, void (*callback)(voidptr uptr, int v_error, int val), voidptr uptr) {
	fonsSetErrorCallback(s, callback, uptr);
}

// Attr: [inline]
inline void C__FONScontext_get_atlas_size(struct FONScontext* s, int* width, int* height) {
	fonsGetAtlasSize(s, width, height);
}

// Attr: [inline]
inline int C__FONScontext_expand_atlas(struct FONScontext* s, int width, int height) {
	return fonsExpandAtlas(s, width, height);
}

// Attr: [inline]
inline int C__FONScontext_reset_atlas(struct FONScontext* s, int width, int height) {
	return fonsResetAtlas(s, width, height);
}

// Attr: [inline]
inline int C__FONScontext_get_font_by_name(struct FONScontext* s, byteptr name) {
	return fonsGetFontByName(s, name);
}

// Attr: [inline]
inline int C__FONScontext_add_fallback_font(struct FONScontext* s, int base, int fallback) {
	return fonsAddFallbackFont(s, base, fallback);
}

// Attr: [inline]
inline int C__FONScontext_add_font_mem(struct FONScontext* s, byteptr name, byteptr data, int data_size, int free_data) {
	return fonsAddFontMem(s, name, data, data_size, free_data);
}

// Attr: [inline]
inline void C__FONScontext_push_state(struct FONScontext* s) {
	fonsPushState(s);
}

// Attr: [inline]
inline void C__FONScontext_pop_state(struct FONScontext* s) {
	fonsPopState(s);
}

// Attr: [inline]
inline void C__FONScontext_clear_state(struct FONScontext* s) {
	fonsClearState(s);
}

// Attr: [inline]
inline void C__FONScontext_set_size(struct FONScontext* s, f32 size) {
	fonsSetSize(s, size);
}

// Attr: [inline]
inline void C__FONScontext_set_color(struct FONScontext* s, u32 color) {
	fonsSetColor(s, color);
}

// Attr: [inline]
inline void C__FONScontext_set_spacing(struct FONScontext* s, f32 spacing) {
	fonsSetSpacing(s, spacing);
}

// Attr: [inline]
inline void C__FONScontext_set_blur(struct FONScontext* s, f32 blur) {
	fonsSetBlur(s, blur);
}

// Attr: [inline]
inline void C__FONScontext_set_align(struct FONScontext* s, int align) {
	fonsSetAlign(s, align);
}

// Attr: [inline]
inline void C__FONScontext_set_font(struct FONScontext* s, int font) {
	fonsSetFont(s, font);
}

// Attr: [inline]
inline f32 C__FONScontext_draw_text(struct FONScontext* s, f32 x, f32 y, byteptr str, byteptr end) {
	return fonsDrawText(s, x, y, str, end);
}

// Attr: [inline]
inline f32 C__FONScontext_text_bounds(struct FONScontext* s, f32 x, f32 y, byteptr str, byteptr end, f32* bounds) {
	return fonsTextBounds(s, x, y, str, end, bounds);
}

// Attr: [inline]
inline void C__FONScontext_line_bounds(struct FONScontext* s, f32 y, f32* miny, f32* maxy) {
	fonsLineBounds(s, y, miny, maxy);
}

// Attr: [inline]
inline void C__FONScontext_vert_metrics(struct FONScontext* s, f32* ascender, f32* descender, f32* lineh) {
	fonsVertMetrics(s, ascender, descender, lineh);
}

// Attr: [inline]
inline int C__FONScontext_text_iter_init(struct FONScontext* s, struct FONStextIter* iter, f32 x, f32 y, byteptr str, byteptr end) {
	return fonsTextIterInit(s, iter, x, y, str, end);
}

// Attr: [inline]
inline int C__FONScontext_text_iter_next(struct FONScontext* s, struct FONStextIter* iter, struct FONSquad* quad) {
	return fonsTextIterNext(s, iter, quad);
}

// Attr: [inline]
inline byteptr C__FONScontext_get_texture_data(struct FONScontext* s, int* width, int* height) {
	return fonsGetTextureData(s, width, height);
}

// Attr: [inline]
inline int C__FONScontext_validate_texture(struct FONScontext* s, int* dirty) {
	return fonsValidateTexture(s, dirty);
}

// Attr: [inline]
inline void C__FONScontext_draw_debug(struct FONScontext* s, f32 x, f32 y) {
	fonsDrawDebug(s, x, y);
}

// Attr: [inline]
inline void sokol__gfx__setup(struct sg_desc* desc) {
	sg_setup(desc);
}

// Attr: [inline]
inline void sokol__gfx__shutdown() {
	sg_shutdown();
}

// Attr: [inline]
inline void sokol__gfx__reset_state_cache() {
	sg_reset_state_cache();
}

// Attr: [inline]
inline struct sg_buffer sokol__gfx__make_buffer(struct sg_buffer_desc* desc) {
	return sg_make_buffer(desc);
}

// Attr: [inline]
inline struct sg_image sokol__gfx__make_image(struct sg_image_desc* desc) {
	return sg_make_image(desc);
}

// Attr: [inline]
inline struct sg_shader sokol__gfx__make_shader(struct sg_shader_desc* desc) {
	return sg_make_shader(desc);
}

// Attr: [inline]
inline struct sg_pipeline sokol__gfx__make_pipeline(struct sg_pipeline_desc* desc) {
	return sg_make_pipeline(desc);
}

// Attr: [inline]
inline struct sg_pass sokol__gfx__make_pass(struct sg_pass_desc* desc) {
	return sg_make_pass(desc);
}

// Attr: [inline]
inline void sokol__gfx__destroy_buffer(struct sg_buffer buf) {
	sg_destroy_buffer(buf);
}

// Attr: [inline]
inline void sokol__gfx__destroy_image(struct sg_image img) {
	sg_destroy_image(img);
}

// Attr: [inline]
inline void sokol__gfx__destroy_shader(struct sg_shader shd) {
	sg_destroy_shader(shd);
}

// Attr: [inline]
inline void sokol__gfx__destroy_pipeline(struct sg_pipeline pip) {
	sg_destroy_pipeline(pip);
}

// Attr: [inline]
inline void sokol__gfx__destroy_pass(struct sg_pass pass) {
	sg_destroy_pass(pass);
}

// Attr: [inline]
inline void sokol__gfx__update_buffer(struct sg_buffer buf, voidptr ptr, int num_bytes) {
	sg_update_buffer(buf, ptr, num_bytes);
}

// Attr: [inline]
inline void sokol__gfx__update_image(struct sg_image img, struct sg_image_content* content) {
	sg_update_image(img, content);
}

// Attr: [inline]
inline int sokol__gfx__append_buffer(struct sg_buffer buf, voidptr ptr, int num_bytes) {
	return sg_append_buffer(buf, ptr, num_bytes);
}

// Attr: [inline]
inline bool sokol__gfx__query_buffer_overflow(struct sg_buffer buf) {
	return sg_query_buffer_overflow(buf);
}

// Attr: [inline]
inline void sokol__gfx__begin_default_pass(struct sg_pass_action* actions, int width, int height) {
	sg_begin_default_pass(actions, width, height);
}

// Attr: [inline]
inline void sokol__gfx__begin_pass(struct sg_pass pass, struct sg_pass_action* actions) {
	sg_begin_pass(pass, actions);
}

// Attr: [inline]
inline void sokol__gfx__apply_viewport(int x, int y, int width, int height, bool origin_top_left) {
	sg_apply_viewport(x, y, width, height, origin_top_left);
}

// Attr: [inline]
inline void sokol__gfx__apply_scissor_rect(int x, int y, int width, int height, bool origin_top_left) {
	sg_apply_scissor_rect(x, y, width, height, origin_top_left);
}

// Attr: [inline]
inline void sokol__gfx__apply_pipeline(struct sg_pipeline pip) {
	sg_apply_pipeline(pip);
}

// Attr: [inline]
inline void sokol__gfx__apply_bindings(struct sg_bindings* bindings) {
	sg_apply_bindings(bindings);
}

// Attr: [inline]
inline void sokol__gfx__apply_uniforms(int stage, int ub_index, voidptr data, int num_bytes) {
	sg_apply_uniforms(stage, ub_index, data, num_bytes);
}

// Attr: [inline]
inline void sokol__gfx__draw(int base_element, int num_elements, int num_instances) {
	sg_draw(base_element, num_elements, num_instances);
}

// Attr: [inline]
inline void sokol__gfx__end_pass() {
	sg_end_pass();
}

// Attr: [inline]
inline void sokol__gfx__commit() {
	sg_commit();
}

// Attr: [inline]
inline struct sg_desc sokol__gfx__query_desc() {
	return sg_query_desc();
}

// Attr: [inline]
inline sokol__gfx__Backend sokol__gfx__query_backend() {
	return sg_query_backend();
}

// Attr: [inline]
inline struct sg_features sokol__gfx__query_features() {
	return sg_query_features();
}

// Attr: [inline]
inline struct sg_limits sokol__gfx__query_limits() {
	return sg_query_limits();
}

// Attr: [inline]
inline struct sg_pixelformat_info sokol__gfx__query_pixelformat(sokol__gfx__PixelFormat fmt) {
	return sg_query_pixelformat(fmt);
}

// Attr: [inline]
inline sg_resource_state sokol__gfx__query_buffer_state(struct sg_buffer buf) {
	return sg_query_buffer_state(buf);
}

// Attr: [inline]
inline sg_resource_state sokol__gfx__query_image_state(struct sg_image img) {
	return sg_query_image_state(img);
}

// Attr: [inline]
inline sg_resource_state sokol__gfx__query_shader_state(struct sg_shader shd) {
	return sg_query_shader_state(shd);
}

// Attr: [inline]
inline sg_resource_state sokol__gfx__query_pipeline_state(struct sg_pipeline pip) {
	return sg_query_pipeline_state(pip);
}

// Attr: [inline]
inline sg_resource_state sokol__gfx__query_pass_state(struct sg_pass pass) {
	return sg_query_pass_state(pass);
}

// Attr: [inline]
inline struct sg_buffer_info sokol__gfx__query_buffer_info(struct sg_buffer buf) {
	return sg_query_buffer_info(buf);
}

// Attr: [inline]
inline struct sg_image_info sokol__gfx__query_image_info(struct sg_image img) {
	return sg_query_image_info(img);
}

// Attr: [inline]
inline struct sg_shader_info sokol__gfx__query_shader_info(struct sg_shader shd) {
	return sg_query_shader_info(shd);
}

// Attr: [inline]
inline struct sg_pipeline_info sokol__gfx__query_pipeline_info(struct sg_pipeline pip) {
	return sg_query_pipeline_info(pip);
}

// Attr: [inline]
inline struct sg_pass_info sokol__gfx__query_pass_info(struct sg_pass pass) {
	return sg_query_pass_info(pass);
}

// Attr: [inline]
inline struct sg_buffer_desc sokol__gfx__query_buffer_defaults(struct sg_buffer* desc) {
	return sg_query_buffer_defaults(desc);
}

// Attr: [inline]
inline struct sg_image_desc sokol__gfx__query_image_defaults(struct sg_image* desc) {
	return sg_query_image_defaults(desc);
}

// Attr: [inline]
inline struct sg_shader_desc sokol__gfx__query_shader_defaults(struct sg_shader* desc) {
	return sg_query_shader_defaults(desc);
}

// Attr: [inline]
inline struct sg_pipeline_desc sokol__gfx__query_pipeline_defaults(struct sg_pipeline* desc) {
	return sg_query_pipeline_defaults(desc);
}

// Attr: [inline]
inline struct sg_pass_desc sokol__gfx__query_pass_defaults(struct sg_pass* desc) {
	return sg_query_pass_defaults(desc);
}

// Attr: [inline]
inline struct sg_context sokol__gfx__setup_context() {
	return sg_setup_context();
}

// Attr: [inline]
inline void sokol__gfx__activate_context(struct sg_context ctx_id) {
	sg_activate_context(ctx_id);
}

// Attr: [inline]
inline void sokol__gfx__discard_context(struct sg_context ctx_id) {
	sg_discard_context(ctx_id);
}

void C__sg_pipeline_free(struct sg_pipeline p) {
	sg_destroy_pipeline(p);
}

void C__sg_bindings_set_vert_image(struct sg_bindings* b, int index, struct sg_image img) {
	b->vs_images[index] = img;
}

void C__sg_bindings_set_frag_image(struct sg_bindings* b, int index, struct sg_image img) {
	b->fs_images[index] = img;
}

void C__sg_bindings_update_vert_buffer(struct sg_bindings* b, int index, voidptr data, int element_size, int element_count) {
	sg_update_buffer(b->vertex_buffers[index], data, element_size * element_count);
}

int C__sg_bindings_append_vert_buffer(struct sg_bindings* b, int index, voidptr data, int element_size, int element_count) {
	return sg_append_buffer(b->vertex_buffers[index], data, element_size * element_count);
}

void C__sg_bindings_update_index_buffer(struct sg_bindings* b, voidptr data, int element_size, int element_count) {
	sg_update_buffer(b->index_buffer, data, element_size * element_count);
}

int C__sg_bindings_append_index_buffer(struct sg_bindings* b, voidptr data, int element_size, int element_count) {
	return sg_append_buffer(b->index_buffer, data, element_size * element_count);
}

struct sg_shader_desc* C__sg_shader_desc_set_vert_src(struct sg_shader_desc* desc, string src) {
	desc->vs.source = src.str;
	return desc;
}

struct sg_shader_desc* C__sg_shader_desc_set_frag_src(struct sg_shader_desc* desc, string src) {
	desc->fs.source = src.str;
	return desc;
}

struct sg_shader_desc* C__sg_shader_desc_set_vert_image(struct sg_shader_desc* desc, int index, string name) {
	desc->vs.images[index].name = name.str;
	desc->vs.images[index].type = sokol__gfx__ImageType__2d;
	return desc;
}

struct sg_shader_desc* C__sg_shader_desc_set_frag_image(struct sg_shader_desc* desc, int index, string name) {
	desc->fs.images[index].name = name.str;
	desc->fs.images[index].type = sokol__gfx__ImageType__2d;
	return desc;
}

struct sg_shader_desc* C__sg_shader_desc_set_vert_uniform_block_size(struct sg_shader_desc* desc, int block_index, int size) {
	desc->vs.uniform_blocks[block_index].size = size;
	return desc;
}

struct sg_shader_desc* C__sg_shader_desc_set_frag_uniform_block_size(struct sg_shader_desc* desc, int block_index, int size) {
	desc->fs.uniform_blocks[block_index].size = size;
	return desc;
}

struct sg_shader_desc* C__sg_shader_desc_set_vert_uniform(struct sg_shader_desc* desc, int block_index, int uniform_index, string name, sokol__gfx__UniformType type, int array_count) {
	desc->vs.uniform_blocks[block_index].uniforms[uniform_index].name = name.str;
	desc->vs.uniform_blocks[block_index].uniforms[uniform_index].type = type;
	return desc;
}

struct sg_shader_desc* C__sg_shader_desc_set_frag_uniform(struct sg_shader_desc* desc, int block_index, int uniform_index, string name, sokol__gfx__UniformType type, int array_count) {
	desc->fs.uniform_blocks[block_index].uniforms[uniform_index].name = name.str;
	desc->fs.uniform_blocks[block_index].uniforms[uniform_index].type = type;
	return desc;
}

struct sg_shader C__sg_shader_desc_make_shader(struct sg_shader_desc* desc) {
	return sg_make_shader(desc);
}

struct sg_shader_stage_desc C__sg_shader_stage_desc_set_image(struct sg_shader_stage_desc* desc, int index, string name) {
	desc->images[index].name = name.str;
	desc->images[index].type = sokol__gfx__ImageType__2d;
	return *desc;
}

void C__sg_shader_free(struct sg_shader s) {
	sg_destroy_shader(s);
}

void C__sg_pass_free(struct sg_pass p) {
	sg_destroy_pass(p);
}

void C__sg_buffer_free(struct sg_buffer b) {
	sg_destroy_buffer(b);
}

void C__sg_image_free(struct sg_image i) {
	sg_destroy_image(i);
}

struct sg_pass_action sokol__gfx__create_clear_pass(f32 r, f32 g, f32 b, f32 a) {
	struct sg_color_attachment_action color_action = (struct sg_color_attachment_action){.action = SG_ACTION_CLEAR,.val = {0},};
	color_action.val[0] = r;
	color_action.val[1] = g;
	color_action.val[2] = b;
	color_action.val[3] = a;
	struct sg_pass_action pass_action = (struct sg_pass_action){._start_canary = 0,.colors = {0},.depth = {0},.stencil = {0},._end_canary = 0,};
	pass_action.colors[0] = color_action;
	return pass_action;
}

static void stbi__init() {
	stbi__set_flip_vertically_on_load(false);
}

Option_stbi__Image stbi__load(string path) {
	string ext = string_all_after_last(path, tos_lit("."));
	stbi__Image res = (stbi__Image){.width = 0,.height = 0,.nr_channels = 0,.ok = true,.data = 0,.ext = ext,};
	int flag = (string_eq(ext, tos_lit("png")) ? (STBI_rgb_alpha) : (0));
	res.data = stbi_load(path.str, &res.width, &res.height, &res.nr_channels, flag);
	if (isnil(res.data)) {
		Option _t237 = v_error(_STR("stbi image failed to load from \"%.*s\000\"", 2, path));
		return *(Option_stbi__Image*)&_t237;
	}
	Option_stbi__Image _t238;
	opt_ok2(&(stbi__Image[]) { res }, (OptionBase*)(&_t238), sizeof(stbi__Image));
	return _t238;
}

Option_stbi__Image stbi__load_from_memory(byteptr buf, int bufsize) {
	stbi__Image res = (stbi__Image){.width = 0,.height = 0,.nr_channels = 0,.ok = true,.data = 0,.ext = (string){.str=(byteptr)""},};
	int flag = STBI_rgb_alpha;
	res.data = stbi_load_from_memory(buf, bufsize, &res.width, &res.height, &res.nr_channels, flag);
	if (isnil(res.data)) {
		Option _t239 = v_error(tos_lit("stbi image failed to load from memory"));
		return *(Option_stbi__Image*)&_t239;
	}
	Option_stbi__Image _t240;
	opt_ok2(&(stbi__Image[]) { res }, (OptionBase*)(&_t240), sizeof(stbi__Image));
	return _t240;
}

void stbi__Image_free(stbi__Image img) {
	stbi_image_free(img.data);
}

void stbi__set_flip_vertically_on_load(bool val) {
	stbi_set_flip_vertically_on_load(val);
}

gx__Color gx__hex(int color) {
	return (gx__Color){.r = ((byte)(((color >> 24) & 0xFF))),.g = ((byte)(((color >> 16) & 0xFF))),.b = ((byte)(((color >> 8) & 0xFF))),.a = ((byte)(((color) & 0xFF))),};
}

gx__Color gx__rgb(byte r, byte g, byte b) {
	return (gx__Color){.r = r,.g = g,.b = b,.a = 255,};
}

gx__Color gx__rgba(byte r, byte g, byte b, byte a) {
	return (gx__Color){.r = r,.g = g,.b = b,.a = a,};
}

gx__Color gx__Color__plus(gx__Color c, gx__Color c2) {
	return (gx__Color){.r = c.r + c2.r,.g = c.g + c2.g,.b = c.b + c2.b,.a = c.b + c2.a,};
}

gx__Color gx__Color__minus(gx__Color c, gx__Color c2) {
	return (gx__Color){.r = c.r - c2.r,.g = c.g - c2.g,.b = c.b - c2.b,.a = c.b - c2.a,};
}

gx__Color gx__Color__mult(gx__Color c, gx__Color c2) {
	return (gx__Color){.r = c.r * c2.r,.g = c.g * c2.g,.b = c.b * c2.b,.a = c.b * c2.a,};
}

gx__Color gx__Color__div(gx__Color c, gx__Color c2) {
	return (gx__Color){.r = c.r / c2.r,.g = c.g / c2.g,.b = c.b / c2.b,.a = c.b / c2.a,};
}

bool gx__Color_eq(gx__Color c, gx__Color c2) {
	return c.r == c2.r && c.g == c2.g && c.b == c2.b && c.a == c2.a;
}

string gx__Color_str(gx__Color c) {
	return _STR("Color{%"PRIu8"\000, %"PRIu8"\000, %"PRIu8"\000, %"PRIu8"\000}", 5, c.r, c.g, c.b, c.a);
}

gx__Color gx__color_from_string(string s) {
	return (*(gx__Color*)map_get(_const_gx__string_colors, s, &(gx__Color[]){ {0} }));
}

bool gx__Image_is_empty(gx__Image i) {
	return isnil(i.obj);
}

// Attr: [inline]
inline void sokol__sgl__setup(struct sgl_desc_t* desc) {
	sgl_setup(desc);
}

// Attr: [inline]
inline void sokol__sgl__shutdown() {
	sgl_shutdown();
}

// Attr: [inline]
inline sgl_error_t sokol__sgl__error() {
	return sgl_error();
}

// Attr: [inline]
inline void sokol__sgl__defaults() {
	sgl_defaults();
}

// Attr: [inline]
inline f32 sokol__sgl__rad(f32 deg) {
	return sgl_rad(deg);
}

// Attr: [inline]
inline f32 sokol__sgl__deg(f32 rad) {
	return sgl_deg(rad);
}

// Attr: [inline]
inline struct sgl_pipeline sokol__sgl__make_pipeline(struct sg_pipeline_desc* desc) {
	return sgl_make_pipeline(desc);
}

// Attr: [inline]
inline void sokol__sgl__destroy_pipeline(struct sgl_pipeline pip) {
	sgl_destroy_pipeline(pip);
}

// Attr: [inline]
inline void sokol__sgl__viewport(int x, int y, int w, int h, bool origin_top_left) {
	sgl_viewport(x, y, w, h, origin_top_left);
}

// Attr: [inline]
inline void sokol__sgl__scissor_rect(int x, int y, int w, int h, bool origin_top_left) {
	sgl_scissor_rect(x, y, w, h, origin_top_left);
}

// Attr: [inline]
inline void sokol__sgl__enable_texture() {
	sgl_enable_texture();
}

// Attr: [inline]
inline void sokol__sgl__disable_texture() {
	sgl_disable_texture();
}

// Attr: [inline]
inline void sokol__sgl__texture(struct sg_image img) {
	sgl_texture(img);
}

// Attr: [inline]
inline void sokol__sgl__default_pipeline() {
	sgl_default_pipeline();
}

// Attr: [inline]
inline void sokol__sgl__load_pipeline(struct sgl_pipeline pip) {
	sgl_load_pipeline(pip);
}

// Attr: [inline]
inline void sokol__sgl__push_pipeline() {
	sgl_push_pipeline();
}

// Attr: [inline]
inline void sokol__sgl__pop_pipeline() {
	sgl_pop_pipeline();
}

// Attr: [inline]
inline void sokol__sgl__matrix_mode_modelview() {
	sgl_matrix_mode_modelview();
}

// Attr: [inline]
inline void sokol__sgl__matrix_mode_projection() {
	sgl_matrix_mode_projection();
}

// Attr: [inline]
inline void sokol__sgl__matrix_mode_texture() {
	sgl_matrix_mode_texture();
}

// Attr: [inline]
inline void sokol__sgl__load_identity() {
	sgl_load_identity();
}

// Attr: [inline]
inline void sokol__sgl__load_matrix(array_f32 m) {
	sgl_load_matrix(m.data);
}

// Attr: [inline]
inline void sokol__sgl__load_transpose_matrix(array_f32 m) {
	sgl_load_transpose_matrix(m.data);
}

// Attr: [inline]
inline void sokol__sgl__mult_matrix(array_f32 m) {
	sgl_mult_matrix(m.data);
}

// Attr: [inline]
inline void sokol__sgl__mult_transpose_matrix(array_f32 m) {
	sgl_mult_transpose_matrix(m.data);
}

// Attr: [inline]
inline void sokol__sgl__rotate(f32 angle_rad, f32 x, f32 y, f32 z) {
	sgl_rotate(angle_rad, x, y, z);
}

// Attr: [inline]
inline void sokol__sgl__scale(f32 x, f32 y, f32 z) {
	sgl_scale(x, y, z);
}

// Attr: [inline]
inline void sokol__sgl__translate(f32 x, f32 y, f32 z) {
	sgl_translate(x, y, z);
}

// Attr: [inline]
inline void sokol__sgl__frustum(f32 l, f32 r, f32 b, f32 t, f32 n, f32 f) {
	sgl_frustum(l, r, b, t, n, f);
}

// Attr: [inline]
inline void sokol__sgl__ortho(f32 l, f32 r, f32 b, f32 t, f32 n, f32 f) {
	sgl_ortho(l, r, b, t, n, f);
}

// Attr: [inline]
inline void sokol__sgl__perspective(f32 fov_y, f32 aspect, f32 z_near, f32 z_far) {
	sgl_perspective(fov_y, aspect, z_near, z_far);
}

// Attr: [inline]
inline void sokol__sgl__lookat(f32 eye_x, f32 eye_y, f32 eye_z, f32 center_x, f32 center_y, f32 center_z, f32 up_x, f32 up_y, f32 up_z) {
	sgl_lookat(eye_x, eye_y, eye_z, center_x, center_y, center_z, up_x, up_y, up_z);
}

// Attr: [inline]
inline void sokol__sgl__push_matrix() {
	sgl_push_matrix();
}

// Attr: [inline]
inline void sokol__sgl__pop_matrix() {
	sgl_pop_matrix();
}

// Attr: [inline]
inline void sokol__sgl__t2f(f32 u, f32 v) {
	sgl_t2f(u, v);
}

// Attr: [inline]
inline void sokol__sgl__c3f(f32 r, f32 g, f32 b) {
	sgl_c3f(r, g, b);
}

// Attr: [inline]
inline void sokol__sgl__c4f(f32 r, f32 g, f32 b, f32 a) {
	sgl_c4f(r, g, b, a);
}

// Attr: [inline]
inline void sokol__sgl__c3b(byte r, byte g, byte b) {
	sgl_c3b(r, g, b);
}

// Attr: [inline]
inline void sokol__sgl__c4b(byte r, byte g, byte b, byte a) {
	sgl_c4b(r, g, b, a);
}

// Attr: [inline]
inline void sokol__sgl__c1i(u32 rgba) {
	sgl_c1i(rgba);
}

// Attr: [inline]
inline void sokol__sgl__begin_points() {
	sgl_begin_points();
}

// Attr: [inline]
inline void sokol__sgl__begin_lines() {
	sgl_begin_lines();
}

// Attr: [inline]
inline void sokol__sgl__begin_line_strip() {
	sgl_begin_line_strip();
}

// Attr: [inline]
inline void sokol__sgl__begin_triangles() {
	sgl_begin_triangles();
}

// Attr: [inline]
inline void sokol__sgl__begin_triangle_strip() {
	sgl_begin_triangle_strip();
}

// Attr: [inline]
inline void sokol__sgl__begin_quads() {
	sgl_begin_quads();
}

// Attr: [inline]
inline void sokol__sgl__v2f(f32 x, f32 y) {
	sgl_v2f(x, y);
}

// Attr: [inline]
inline void sokol__sgl__v3f(f32 x, f32 y, f32 z) {
	sgl_v3f(x, y, z);
}

// Attr: [inline]
inline void sokol__sgl__v2f_t2f(f32 x, f32 y, f32 u, f32 v) {
	sgl_v2f_t2f(x, y, u, v);
}

// Attr: [inline]
inline void sokol__sgl__v3f_t2f(f32 x, f32 y, f32 z, f32 u, f32 v) {
	sgl_v3f_t2f(x, y, z, u, v);
}

// Attr: [inline]
inline void sokol__sgl__v2f_c3f(f32 x, f32 y, f32 r, f32 g, f32 b) {
	sgl_v2f_c3f(x, y, r, g, b);
}

// Attr: [inline]
inline void sokol__sgl__v2f_c3b(f32 x, f32 y, byte r, byte g, byte b) {
	sgl_v2f_c3b(x, y, r, g, b);
}

// Attr: [inline]
inline void sokol__sgl__v2f_c4f(f32 x, f32 y, f32 r, f32 g, f32 b, f32 a) {
	sgl_v2f_c4f(x, y, r, g, b, a);
}

// Attr: [inline]
inline void sokol__sgl__v2f_c4b(f32 x, f32 y, byte r, byte g, byte b, byte a) {
	sgl_v2f_c4b(x, y, r, g, b, a);
}

// Attr: [inline]
inline void sokol__sgl__v2f_c1i(f32 x, f32 y, u32 rgba) {
	sgl_v2f_c1i(x, y, rgba);
}

// Attr: [inline]
inline void sokol__sgl__v3f_c3f(f32 x, f32 y, f32 z, f32 r, f32 g, f32 b) {
	sgl_v3f_c3f(x, y, z, r, g, b);
}

// Attr: [inline]
inline void sokol__sgl__v3f_c3b(f32 x, f32 y, f32 z, byte r, byte g, byte b) {
	sgl_v3f_c3b(x, y, z, r, g, b);
}

// Attr: [inline]
inline void sokol__sgl__v3f_c4f(f32 x, f32 y, f32 z, f32 r, f32 g, f32 b, f32 a) {
	sgl_v3f_c4f(x, y, z, r, g, b, a);
}

// Attr: [inline]
inline void sokol__sgl__v3f_c4b(f32 x, f32 y, f32 z, byte r, byte g, byte b, byte a) {
	sgl_v3f_c4b(x, y, z, r, g, b, a);
}

// Attr: [inline]
inline void sokol__sgl__v3f_c1i(f32 x, f32 y, f32 z, u32 rgba) {
	sgl_v3f_c1i(x, y, z, rgba);
}

// Attr: [inline]
inline void sokol__sgl__v2f_t2f_c3f(f32 x, f32 y, f32 u, f32 v, f32 r, f32 g, f32 b) {
	sgl_v2f_t2f_c3f(x, y, u, v, r, g, b);
}

// Attr: [inline]
inline void sokol__sgl__v2f_t2f_c3b(f32 x, f32 y, f32 u, f32 v, byte r, byte g, byte b) {
	sgl_v2f_t2f_c3b(x, y, u, v, r, g, b);
}

// Attr: [inline]
inline void sokol__sgl__v2f_t2f_c4f(f32 x, f32 y, f32 u, f32 v, f32 r, f32 g, f32 b, f32 a) {
	sgl_v2f_t2f_c4f(x, y, u, v, r, g, b, a);
}

// Attr: [inline]
inline void sokol__sgl__v2f_t2f_c4b(f32 x, f32 y, f32 u, f32 v, byte r, byte g, byte b, byte a) {
	sgl_v2f_t2f_c4b(x, y, u, v, r, g, b, a);
}

// Attr: [inline]
inline void sokol__sgl__v2f_t2f_c1i(f32 x, f32 y, f32 u, f32 v, u32 rgba) {
	sgl_v2f_t2f_c1i(x, y, u, v, rgba);
}

// Attr: [inline]
inline void sokol__sgl__v3f_t2f_c3f(f32 x, f32 y, f32 z, f32 u, f32 v, f32 r, f32 g, f32 b) {
	sgl_v3f_t2f_c3f(x, y, z, u, v, r, g, b);
}

// Attr: [inline]
inline void sokol__sgl__v3f_t2f_c3b(f32 x, f32 y, f32 z, f32 u, f32 v, byte r, byte g, byte b) {
	sgl_v3f_t2f_c3b(x, y, z, u, v, r, g, b);
}

// Attr: [inline]
inline void sokol__sgl__v3f_t2f_c4f(f32 x, f32 y, f32 z, f32 u, f32 v, f32 r, f32 g, f32 b, f32 a) {
	sgl_v3f_t2f_c4f(x, y, z, u, v, r, g, b, a);
}

// Attr: [inline]
inline void sokol__sgl__v3f_t2f_c4b(f32 x, f32 y, f32 z, f32 u, f32 v, byte r, byte g, byte b, byte a) {
	sgl_v3f_t2f_c4b(x, y, z, u, v, r, g, b, a);
}

// Attr: [inline]
inline void sokol__sgl__v3f_t2f_c1i(f32 x, f32 y, f32 z, f32 u, f32 v, u32 rgba) {
	sgl_v3f_t2f_c1i(x, y, z, u, v, rgba);
}

// Attr: [inline]
inline void sokol__sgl__end() {
	sgl_end();
}

// Attr: [inline]
inline void sokol__sgl__draw() {
	sgl_draw();
}

// Attr: [inline]
inline struct FONScontext* sokol__sfons__create(int width, int height, int flags) {
	return sfons_create(width, height, flags);
}

// Attr: [inline]
inline void sokol__sfons__destroy(struct FONScontext* ctx) {
	sfons_destroy(ctx);
}

// Attr: [inline]
inline u32 sokol__sfons__rgba(byte r, byte g, byte b, byte a) {
	return sfons_rgba(r, g, b, a);
}

// Attr: [inline]
inline void sokol__sfons__flush(struct FONScontext* ctx) {
	sfons_flush(ctx);
}

int runtime__nr_jobs() {
	int cpus = runtime__nr_cpus();
	int vjobs = string_int(os__getenv(tos_lit("VJOBS")));
	if (vjobs > 0) {
		cpus = vjobs;
	}
	return cpus;
}

bool runtime__is_32bit() {
	#if defined(TARGET_IS_32BIT)
	{
		return true;
	}
	#endif
	return false;
}

bool runtime__is_64bit() {
	#if defined(TARGET_IS_64BIT)
	{
		return true;
	}
	#endif
	return false;
}

bool runtime__is_little_endian() {
	#if defined(TARGET_ORDER_IS_LITTLE)
	{
		return true;
	}
	#endif
	return false;
}

bool runtime__is_big_endian() {
	#if defined(TARGET_ORDER_IS_BIG)
	{
		return true;
	}
	#endif
	return false;
}

int runtime__nr_cpus() {
	#if defined(__linux__)
	{
		return ((int)(sysconf(_SC_NPROCESSORS_ONLN)));
	}
	#endif
	#if defined(__APPLE__)
	{
	}
	#endif
	#if defined(__sun)
	{
	}
	#endif
	return 1;
}

// Attr: [inline]
inline static u32 rand__util__nr_next(u32 prev) {
	return prev * 1664525 + 1013904223;
}

// Attr: [inline]
inline array_u32 rand__util__time_seed_array(int count) {
	time__Time ctime = time__now();
	u32 seed = ((u32)((time__Time_unix_time(ctime) ^ ctime.microsecond)));
	array_u32 seed_data = __new_array_with_default(0, count, sizeof(u32), 0);
	for (int _t241 = 0; _t241 < count; ++_t241) {
		seed = rand__util__nr_next(seed);
		array_push(&seed_data, _MOV((u32[]){ rand__util__nr_next(seed) }));
	}
	return seed_data;
}

// Attr: [inline]
inline u32 rand__util__time_seed_32() {
	return (*(u32*)array_get(rand__util__time_seed_array(1), 0));
}

// Attr: [inline]
inline u64 rand__util__time_seed_64() {
	array_u32 seed_data = rand__util__time_seed_array(2);
	u64 lower = ((u64)((*(u32*)array_get(seed_data, 0))));
	u64 upper = ((u64)((*(u32*)array_get(seed_data, 1))));
	return (lower | (upper << 32));
}

void rand__wyrand__WyRandRNG_seed(rand__wyrand__WyRandRNG* rng, array_u32 seed_data) {
	if (seed_data.len != 2) {
		eprintln(tos_lit("WyRandRNG needs 2 32-bit unsigned integers as the seed."));
		v_exit(1);
	}
	rng->state = ((*(u32*)array_get(seed_data, 0)) | (((u64)((*(u32*)array_get(seed_data, 1)))) << 32));
	rng->has_extra = false;
}

// Attr: [inline]
inline u32 rand__wyrand__WyRandRNG_u32(rand__wyrand__WyRandRNG* rng) {
	if (rng->has_extra) {
		rng->has_extra = false;
		return rng->extra;
	}
	u64 full_value = rand__wyrand__WyRandRNG_u64(rng);
	u32 lower = ((u32)((full_value & _const_rand__util__lower_mask)));
	u32 upper = ((u32)(full_value >> 32));
	rng->extra = upper;
	rng->has_extra = true;
	return lower;
}

// Attr: [inline]
inline u64 rand__wyrand__WyRandRNG_u64(rand__wyrand__WyRandRNG* rng) {
	{ // Unsafe block
		u64 seed1 = rng->state;
		seed1 += _const_rand__wyrand__wyp0;
		rng->state = seed1;
		return hash__wymum((seed1 ^ _const_rand__wyrand__wyp1), seed1);
	}
	return 0;
}

// Attr: [inline]
inline u32 rand__wyrand__WyRandRNG_u32n(rand__wyrand__WyRandRNG* rng, u32 max) {
	if (max == 0) {
		eprintln(tos_lit("max must be positive integer"));
		v_exit(1);
	}
	int bit_len = math__bits__len_32(max);
	if (bit_len == 32) {
		for (;;) {
			u32 value = rand__wyrand__WyRandRNG_u32(rng);
			if (value < max) {
				return value;
			}
		}
	} else {
		u32 mask = (((u32)(1U)) << (bit_len + 1)) - 1;
		for (;;) {
			u32 value = (rand__wyrand__WyRandRNG_u32(rng) & mask);
			if (value < max) {
				return value;
			}
		}
	}
	return ((u32)(0U));
}

// Attr: [inline]
inline u64 rand__wyrand__WyRandRNG_u64n(rand__wyrand__WyRandRNG* rng, u64 max) {
	if (max == 0) {
		eprintln(tos_lit("max must be positive integer"));
		v_exit(1);
	}
	int bit_len = math__bits__len_64(max);
	if (bit_len == 64) {
		for (;;) {
			u64 value = rand__wyrand__WyRandRNG_u64(rng);
			if (value < max) {
				return value;
			}
		}
	} else {
		u64 mask = (((u64)(1U)) << (bit_len + 1)) - 1;
		for (;;) {
			u64 value = (rand__wyrand__WyRandRNG_u64(rng) & mask);
			if (value < max) {
				return value;
			}
		}
	}
	return ((u64)(0U));
}

// Attr: [inline]
inline u32 rand__wyrand__WyRandRNG_u32_in_range(rand__wyrand__WyRandRNG* rng, u32 min, u32 max) {
	if (max <= min) {
		eprintln(tos_lit("max must be greater than min"));
		v_exit(1);
	}
	return min + rand__wyrand__WyRandRNG_u32n(rng, max - min);
}

// Attr: [inline]
inline u64 rand__wyrand__WyRandRNG_u64_in_range(rand__wyrand__WyRandRNG* rng, u64 min, u64 max) {
	if (max <= min) {
		eprintln(tos_lit("max must be greater than min"));
		v_exit(1);
	}
	return min + rand__wyrand__WyRandRNG_u64n(rng, max - min);
}

// Attr: [inline]
inline int rand__wyrand__WyRandRNG_int(rand__wyrand__WyRandRNG* rng) {
	return ((int)(rand__wyrand__WyRandRNG_u32(rng)));
}

// Attr: [inline]
inline i64 rand__wyrand__WyRandRNG_i64(rand__wyrand__WyRandRNG* rng) {
	return ((i64)(rand__wyrand__WyRandRNG_u64(rng)));
}

// Attr: [inline]
inline int rand__wyrand__WyRandRNG_int31(rand__wyrand__WyRandRNG* rng) {
	return ((int)((rand__wyrand__WyRandRNG_u32(rng) & _const_rand__util__u31_mask)));
}

// Attr: [inline]
inline i64 rand__wyrand__WyRandRNG_int63(rand__wyrand__WyRandRNG* rng) {
	return ((i64)((rand__wyrand__WyRandRNG_u64(rng) & _const_rand__util__u63_mask)));
}

// Attr: [inline]
inline int rand__wyrand__WyRandRNG_intn(rand__wyrand__WyRandRNG* rng, int max) {
	if (max <= 0) {
		eprintln(tos_lit("max has to be positive."));
		v_exit(1);
	}
	return ((int)(rand__wyrand__WyRandRNG_u32n(rng, ((u32)(max)))));
}

// Attr: [inline]
inline i64 rand__wyrand__WyRandRNG_i64n(rand__wyrand__WyRandRNG* rng, i64 max) {
	if (max <= 0) {
		eprintln(tos_lit("max has to be positive."));
		v_exit(1);
	}
	return ((i64)(rand__wyrand__WyRandRNG_u64n(rng, ((u64)(max)))));
}

// Attr: [inline]
inline int rand__wyrand__WyRandRNG_int_in_range(rand__wyrand__WyRandRNG* rng, int min, int max) {
	if (max <= min) {
		eprintln(tos_lit("max must be greater than min"));
		v_exit(1);
	}
	return min + rand__wyrand__WyRandRNG_intn(rng, max - min);
}

// Attr: [inline]
inline i64 rand__wyrand__WyRandRNG_i64_in_range(rand__wyrand__WyRandRNG* rng, i64 min, i64 max) {
	if (max <= min) {
		eprintln(tos_lit("max must be greater than min"));
		v_exit(1);
	}
	return min + rand__wyrand__WyRandRNG_i64n(rng, max - min);
}

// Attr: [inline]
inline f32 rand__wyrand__WyRandRNG_f32(rand__wyrand__WyRandRNG* rng) {
	return ((f32)(rand__wyrand__WyRandRNG_u32(rng))) / _const_rand__util__max_u32_as_f32;
}

// Attr: [inline]
inline f64 rand__wyrand__WyRandRNG_f64(rand__wyrand__WyRandRNG* rng) {
	return ((f64)(rand__wyrand__WyRandRNG_u64(rng))) / _const_rand__util__max_u64_as_f64;
}

// Attr: [inline]
inline f32 rand__wyrand__WyRandRNG_f32n(rand__wyrand__WyRandRNG* rng, f32 max) {
	if (max <= 0) {
		eprintln(tos_lit("max has to be positive."));
		v_exit(1);
	}
	return rand__wyrand__WyRandRNG_f32(rng) * max;
}

// Attr: [inline]
inline f64 rand__wyrand__WyRandRNG_f64n(rand__wyrand__WyRandRNG* rng, f64 max) {
	if (max <= 0) {
		eprintln(tos_lit("max has to be positive."));
		v_exit(1);
	}
	return rand__wyrand__WyRandRNG_f64(rng) * max;
}

// Attr: [inline]
inline f32 rand__wyrand__WyRandRNG_f32_in_range(rand__wyrand__WyRandRNG* rng, f32 min, f32 max) {
	if (max <= min) {
		eprintln(tos_lit("max must be greater than min"));
		v_exit(1);
	}
	return min + rand__wyrand__WyRandRNG_f32n(rng, max - min);
}

// Attr: [inline]
inline f64 rand__wyrand__WyRandRNG_f64_in_range(rand__wyrand__WyRandRNG* rng, f64 min, f64 max) {
	if (max <= min) {
		eprintln(tos_lit("max must be greater than min"));
		v_exit(1);
	}
	return min + rand__wyrand__WyRandRNG_f64n(rng, max - min);
}

// TypeDecl
// TypeDecl
// TypeDecl
// TypeDecl
// TypeDecl
// TypeDecl
static void gg__gg_init_sokol_window(voidptr user_data) {
	gg__Context* g = ((gg__Context*)(user_data));
	struct sg_desc desc = sokol__sapp__create_desc();
	sokol__gfx__setup(&desc);
	struct sgl_desc_t sgl_desc = (struct sgl_desc_t){.max_vertices = 0,.max_commands = 0,.pipeline_pool_size = 0,.color_format = 0,.depth_format = 0,.sample_count = 0,.face_winding = 0,};
	sokol__sgl__setup(&sgl_desc);
	g->scale = sokol__sapp__dpi_scale();
	if (g->scale < 0.1) {
		g->scale = 1.0;
	}
	#if !defined(__ANDROID__)
	bool exists = os__is_file(g->config.font_path);
	#else
	#endif;
	if ((g->config.font_path).len != 0 && exists) {
		Option_gg__FT_ptr _t243 = gg__new_ft((gg__FTConfig){.font_path = g->config.font_path,.scale = sokol__sapp__dpi_scale(),.font_size = 0,});
		if (!_t243.ok) {
			string err = _t243.v_error;
			int errcode = _t243.ecode;
			v_panic(err);
		}
 		g->ft = *(gg__FT**) _t243.data;
		g->font_inited = true;
	}
	struct sg_pipeline_desc pipdesc = (struct sg_pipeline_desc){._start_canary = 0,.layout = {0},.shader = {0},.primitive_type = 0,.index_type = 0,.depth_stencil = {0},.blend = {0},.rasterizer = {0},.label = 0,._end_canary = 0,};
	memset(&pipdesc, 0, /*SizeOfVar*/ sizeof(pipdesc));
	pipdesc.blend.enabled = true;
	pipdesc.blend.src_factor_rgb = SG_BLENDFACTOR_SRC_ALPHA;
	pipdesc.blend.dst_factor_rgb = SG_BLENDFACTOR_ONE_MINUS_SRC_ALPHA;
	g->timage_pip = sokol__sgl__make_pipeline(&pipdesc);
	if (g->config.init_fn != ((voidptr)(0))) {
		g->config.init_fn(g->config.user_data);
	}
	for (int i = 0; i < g->image_cache.len; ++i) {
		gg__Image_init_sokol_image(&(*(gg__Image*)array_get(g->image_cache, i)));
	}
}

static void gg__gg_frame_fn(voidptr user_data) {
	gg__Context* g = ((gg__Context*)(user_data));
	if (g->config.frame_fn != ((voidptr)(0))) {
		g->config.frame_fn(g->config.user_data);
	}
}

static void gg__gg_event_fn(struct sapp_event* ce, voidptr user_data) {
	sokol__sapp__Event* e = ((sokol__sapp__Event*)(ce));
	gg__Context* g = ((gg__Context*)(user_data));
	if (g->config.event_fn != ((voidptr)(0))) {
		g->config.event_fn(e, g->config.user_data);
	}
	sokol__sapp__EventType _t244 = e->typ;
	if (_t244 == sokol__sapp__EventType_key_down) {
		if (g->config.keydown_fn != ((voidptr)(0))) {
			void (*kdfn) (sokol__sapp__KeyCode c, sokol__sapp__Modifier m, voidptr x) = g->config.keydown_fn;
			kdfn(e->key_code, e->modifiers, g->config.user_data);
		}
	} else if (_t244 == sokol__sapp__EventType_char) {
		if (g->config.char_fn != ((voidptr)(0))) {
			void (*cfn) (u32 c, voidptr x) = g->config.char_fn;
			cfn(e->char_code, g->config.user_data);
		}
	} else if (_t244 == sokol__sapp__EventType_mouse_move) {
		if (g->config.move_fn != ((voidptr)(0))) {
			void (*cfn) (f32 x, f32 y, voidptr z) = g->config.move_fn;
			cfn(e->mouse_x / g->scale, e->mouse_y / g->scale, g->config.user_data);
		}
	} else if (_t244 == sokol__sapp__EventType_mouse_down) {
		if (g->config.click_fn != ((voidptr)(0))) {
			void (*cfn) (f32 x, f32 y, voidptr z) = g->config.click_fn;
			cfn(e->mouse_x / g->scale, e->mouse_y / g->scale, g->config.user_data);
		}
	} else {
	};
}

static void gg__gg_cleanup_fn(voidptr user_data) {
	gg__Context* g = ((gg__Context*)(user_data));
	if (g->config.cleanup_fn != ((voidptr)(0))) {
		g->config.cleanup_fn(g->config.user_data);
	}
}

static void gg__gg_fail_fn(charptr msg, voidptr user_data) {
	gg__Context* g = ((gg__Context*)(user_data));
	string vmsg = tos3(msg);
	if (g->config.fail_fn != ((voidptr)(0))) {
		g->config.fail_fn(vmsg, g->config.user_data);
	} else {
		eprintln(_STR("gg error: %.*s", 1, vmsg));
	}
}

gg__Context* gg__new_context(gg__Config cfg) {
	gg__Context* g = (gg__Context*)memdup(&(gg__Context){.render_text = (cfg.font_path).len != 0,.image_cache = __new_array(0, 1, sizeof(gg__Image)),.scale = 1.0,.width = cfg.width,.height = cfg.height,.clear_pass = {0},.window = {0},.timage_pip = {0},.config = cfg,.ft = 0,.font_inited = 0,}, sizeof(gg__Context));
	gg__Context_set_bg_color(g, cfg.bg_color);
	struct sapp_desc window = (struct sapp_desc){
		.init_cb = 0,
		.frame_cb = 0,
		.cleanup_cb = 0,
		.event_cb = 0,
		.fail_cb = 0,
		.user_data = g,
		.init_userdata_cb = gg__gg_init_sokol_window,
		.frame_userdata_cb = gg__gg_frame_fn,
		.cleanup_userdata_cb = gg__gg_cleanup_fn,
		.event_userdata_cb = gg__gg_event_fn,
		.fail_userdata_cb = gg__gg_fail_fn,
		.width = cfg.width,
		.height = cfg.height,
		.sample_count = 0,
		.swap_interval = 0,
		.high_dpi = true,
		.fullscreen = cfg.fullscreen,
		.alpha = 0,
		.window_title = cfg.window_title.str,
		.user_cursor = 0,
		.enable_clipboard = 0,
		.clipboard_size = 0,
		.html5_canvas_name = cfg.window_title.str,
		.html5_canvas_resize = 0,
		.html5_preserve_drawing_buffer = 0,
		.html5_premultiplied_alpha = 0,
		.html5_ask_leave_site = 0,
		.ios_keyboard_resizes_canvas = 0,
		.gl_force_gles2 = 0,
	};
	if (cfg.use_ortho) {
	} else {
	}
	g->window = window;
	return g;
}

void gg__Context_run(gg__Context* gg) {
	sokol__sapp__run(&gg->window);
}

void gg__Context_set_bg_color(gg__Context* ctx, gx__Color c) {
	ctx->clear_pass = sokol__gfx__create_clear_pass(((f32)(c.r)) / 255.0, ((f32)(c.g)) / 255.0, ((f32)(c.b)) / 255.0, ((f32)(c.a)) / 255.0);
}

void gg__Context_draw_rect(gg__Context* ctx, f32 x, f32 y, f32 w, f32 h, gx__Color c) {
	if (c.a != 255) {
		sokol__sgl__load_pipeline(ctx->timage_pip);
	}
	sokol__sgl__c4b(c.r, c.g, c.b, c.a);
	sokol__sgl__begin_quads();
	sokol__sgl__v2f(x * ctx->scale, y * ctx->scale);
	sokol__sgl__v2f((x + w) * ctx->scale, y * ctx->scale);
	sokol__sgl__v2f((x + w) * ctx->scale, (y + h) * ctx->scale);
	sokol__sgl__v2f(x * ctx->scale, (y + h) * ctx->scale);
	sokol__sgl__end();
}

void gg__Context_draw_triangle(gg__Context* ctx, f32 x, f32 y, f32 x2, f32 y2, f32 x3, f32 y3, gx__Color c) {
	if (c.a != 255) {
		sokol__sgl__load_pipeline(ctx->timage_pip);
	}
	sokol__sgl__c4b(c.r, c.g, c.b, c.a);
	sokol__sgl__begin_quads();
	sokol__sgl__v2f(x * ctx->scale, y * ctx->scale);
	sokol__sgl__v2f(x2 * ctx->scale, y2 * ctx->scale);
	sokol__sgl__v2f(x3 * ctx->scale, y3 * ctx->scale);
	sokol__sgl__end();
}

void gg__Context_draw_empty_rect(gg__Context* ctx, f32 x, f32 y, f32 w, f32 h, gx__Color c) {
	if (c.a != 255) {
		sokol__sgl__load_pipeline(ctx->timage_pip);
	}
	sokol__sgl__c4b(c.r, c.g, c.b, c.a);
	sokol__sgl__begin_line_strip();
	if (ctx->scale == 1) {
		sokol__sgl__v2f(x, y);
		sokol__sgl__v2f(x + w, y);
		sokol__sgl__v2f(x + w, y + h);
		sokol__sgl__v2f(x, y + h);
		sokol__sgl__v2f(x, y);
	} else {
		sokol__sgl__v2f(x * ctx->scale, y * ctx->scale);
		sokol__sgl__v2f((x + w) * ctx->scale, y * ctx->scale);
		sokol__sgl__v2f((x + w) * ctx->scale, (y + h) * ctx->scale);
		sokol__sgl__v2f(x * ctx->scale, (y + h) * ctx->scale);
		sokol__sgl__v2f(x * ctx->scale, y * ctx->scale);
	}
	sokol__sgl__end();
}

void gg__Context_draw_circle_line(gg__Context* ctx, f32 x, f32 y, int r, int segments, gx__Color c) {
	if (c.a != 255) {
		sokol__sgl__load_pipeline(ctx->timage_pip);
	}
	sokol__sgl__c4b(c.r, c.g, c.b, c.a);
	f32 theta = ((f32)(0));
	f32 xx = ((f32)(0));
	f32 yy = ((f32)(0));
	sokol__sgl__begin_line_strip();
	for (int i = 0; i < segments + 1; i++) {
		theta = 2.0 * ((f32)(_const_math__pi)) * ((f32)(i)) / ((f32)(segments));
		xx = r * math__cosf(theta);
		yy = r * math__sinf(theta);
		sokol__sgl__v2f(xx + x, yy + y);
	}
	sokol__sgl__end();
}

void gg__Context_draw_circle(gg__Context* ctx, f32 x, f32 y, int r, gx__Color c) {
	gg__Context_draw_circle_with_segments(ctx, x, y, r, 10, c);
}

void gg__Context_draw_circle_with_segments(gg__Context* ctx, f32 x, f32 y, int r, int segments, gx__Color c) {
	if (c.a != 255) {
		sokol__sgl__load_pipeline(ctx->timage_pip);
	}
	sokol__sgl__c4b(c.r, c.g, c.b, c.a);
	f32 theta = ((f32)(0));
	f32 xx = ((f32)(0));
	f32 yy = ((f32)(0));
	sokol__sgl__begin_triangle_strip();
	for (int i = 0; i < segments + 1; i++) {
		theta = 2.0 * ((f32)(_const_math__pi)) * ((f32)(i)) / ((f32)(segments));
		xx = r * math__cosf(theta);
		yy = r * math__sinf(theta);
		sokol__sgl__v2f(xx + x, yy + y);
		sokol__sgl__v2f(x, y);
	}
	sokol__sgl__end();
}

void gg__Context_draw_arc_line(gg__Context* ctx, f32 x, f32 y, int r, f32 start_angle, f32 arc_angle, int segments, gx__Color c) {
	if (c.a != 255) {
		sokol__sgl__load_pipeline(ctx->timage_pip);
	}
	sokol__sgl__c4b(c.r, c.g, c.b, c.a);
	f32 theta = ((f32)(arc_angle / ((f32)(segments))));
	f32 tan_factor = math__tanf(theta);
	f32 rad_factor = math__cosf(theta);
	f32 xx = ((f32)(r * math__cosf(start_angle)));
	f32 yy = ((f32)(r * math__sinf(start_angle)));
	sokol__sgl__begin_line_strip();
	for (int i = 0; i < segments + 1; i++) {
		sokol__sgl__v2f(xx + x, yy + y);
		f32 tx = -yy;
		f32 ty = xx;
		xx += tx * tan_factor;
		yy += ty * tan_factor;
		xx *= rad_factor;
		yy *= rad_factor;
	}
	sokol__sgl__end();
}

void gg__Context_draw_arc(gg__Context* ctx, f32 x, f32 y, int r, f32 start_angle, f32 arc_angle, int segments, gx__Color c) {
	if (c.a != 255) {
		sokol__sgl__load_pipeline(ctx->timage_pip);
	}
	sokol__sgl__c4b(c.r, c.g, c.b, c.a);
	f32 theta = ((f32)(arc_angle / ((f32)(segments))));
	f32 tan_factor = math__tanf(theta);
	f32 rad_factor = math__cosf(theta);
	f32 xx = ((f32)(r * math__cosf(start_angle)));
	f32 yy = ((f32)(r * math__sinf(start_angle)));
	sokol__sgl__begin_triangle_strip();
	for (int i = 0; i < segments + 1; i++) {
		sokol__sgl__v2f(xx + x, yy + y);
		sokol__sgl__v2f(x, y);
		f32 tx = -yy;
		f32 ty = xx;
		xx += tx * tan_factor;
		yy += ty * tan_factor;
		xx *= rad_factor;
		yy *= rad_factor;
	}
	sokol__sgl__end();
}

void gg__Context_begin(gg__Context* gg) {
	if (gg->render_text && gg->font_inited) {
		gg__FT_flush(gg->ft);
	}
	sokol__sgl__defaults();
	sokol__sgl__matrix_mode_projection();
	sokol__sgl__ortho(0.0, ((f32)(sokol__sapp__width())), ((f32)(sokol__sapp__height())), 0.0, -1.0, 1.0);
}

void gg__Context_end(gg__Context* gg) {
	sokol__gfx__begin_default_pass((voidptr)&/*qq*/gg->clear_pass, sokol__sapp__width(), sokol__sapp__height());
	sokol__sgl__draw();
	sokol__gfx__end_pass();
	sokol__gfx__commit();
	if (gg->config.wait_events) {
		gg__wait_events();
	}
}

static f32 gg__abs(f32 a) {
	if (a >= 0) {
		return a;
	}
	return -a;
}

void gg__Context_draw_line(gg__Context* ctx, f32 x, f32 y, f32 x2, f32 y2, gx__Color c) {
	if (c.a != 255) {
		sokol__sgl__load_pipeline(ctx->timage_pip);
	}
	if (ctx->scale > 1) {
		f32 width = gg__abs(x2 - x);
		f32 height = gg__abs(y2 - y);
		if (width == 0) {
			width = 1;
		} else if (height == 0) {
			height = 1;
		}
		gg__Context_draw_rect(ctx, x, y, width, height, c);
		return;
	}
	sokol__sgl__c4b(c.r, c.g, c.b, c.a);
	sokol__sgl__begin_line_strip();
	sokol__sgl__v2f(x * ctx->scale, y * ctx->scale);
	sokol__sgl__v2f(x2 * ctx->scale, y2 * ctx->scale);
	sokol__sgl__end();
}

void gg__Context_draw_rounded_rect(gg__Context* ctx, f32 x, f32 y, f32 width, f32 height, f32 radius, gx__Color color) {
}

void gg__Context_draw_empty_rounded_rect(gg__Context* ctx, f32 x, f32 y, f32 width, f32 height, f32 radius, gx__Color border_color) {
}

void gg__wait_events() {
	{ // Unsafe block
		#if defined(__APPLE__)
		{
		}
		#endif
		#if defined(_WIN32)
		{
		}
		#endif
	}
}

gg__Image gg__Context_create_image(gg__Context* ctx, string file) {
	if (!sg_isvalid()) {
		Option_stbi__Image _t245 = stbi__load(file);
		if (!_t245.ok) {
			string err = _t245.v_error;
			int errcode = _t245.ecode;
			return (gg__Image){.id = 0,.width = 0,.height = 0,.nr_channels = 0,.ok = 0,.data = 0,.ext = (string){.str=(byteptr)""},.simg_ok = 0,.simg = {0},.path = (string){.str=(byteptr)""},};
		}
 		stbi__Image stb_img = *(stbi__Image*) _t245.data;
		gg__Image img = (gg__Image){
			.id = ctx->image_cache.len,
			.width = stb_img.width,
			.height = stb_img.height,
			.nr_channels = stb_img.nr_channels,
			.ok = false,
			.data = stb_img.data,
			.ext = stb_img.ext,
			.simg_ok = 0,
			.simg = {0},
			.path = file,
		};
		array_push(&ctx->image_cache, _MOV((gg__Image[]){ img }));
		return img;
	}
	gg__Image img = gg__create_image(file);
	img.id = ctx->image_cache.len;
	array_push(&ctx->image_cache, _MOV((gg__Image[]){ img }));
	return img;
}

static gg__Image gg__create_image(string file) {
	if (!os__exists(file)) {
		println(_STR("gg.create_image(): file not found: %.*s", 1, file));
		return (gg__Image){.id = 0,.width = 0,.height = 0,.nr_channels = 0,.ok = 0,.data = 0,.ext = (string){.str=(byteptr)""},.simg_ok = 0,.simg = {0},.path = (string){.str=(byteptr)""},};
	}
	Option_stbi__Image _t248 = stbi__load(file);
	if (!_t248.ok) {
		string err = _t248.v_error;
		int errcode = _t248.ecode;
		return (gg__Image){.id = 0,.width = 0,.height = 0,.nr_channels = 0,.ok = 0,.data = 0,.ext = (string){.str=(byteptr)""},.simg_ok = 0,.simg = {0},.path = (string){.str=(byteptr)""},};
	}
 	stbi__Image stb_img = *(stbi__Image*) _t248.data;
	gg__Image img = (gg__Image){
		.id = 0,
		.width = stb_img.width,
		.height = stb_img.height,
		.nr_channels = stb_img.nr_channels,
		.ok = stb_img.ok,
		.data = stb_img.data,
		.ext = stb_img.ext,
		.simg_ok = 0,
		.simg = {0},
		.path = file,
	};
	gg__Image_init_sokol_image(&img);
	return img;
}

gg__Image gg__create_image_from_memory(byteptr buf, int bufsize) {
	Option_stbi__Image _t249 = stbi__load_from_memory(buf, bufsize);
	if (!_t249.ok) {
		string err = _t249.v_error;
		int errcode = _t249.ecode;
		return (gg__Image){.id = 0,.width = 0,.height = 0,.nr_channels = 0,.ok = 0,.data = 0,.ext = (string){.str=(byteptr)""},.simg_ok = 0,.simg = {0},.path = (string){.str=(byteptr)""},};
	}
 	stbi__Image stb_img = *(stbi__Image*) _t249.data;
	gg__Image img = (gg__Image){
		.id = 0,
		.width = stb_img.width,
		.height = stb_img.height,
		.nr_channels = stb_img.nr_channels,
		.ok = stb_img.ok,
		.data = stb_img.data,
		.ext = stb_img.ext,
		.simg_ok = 0,
		.simg = {0},
		.path = (string){.str=(byteptr)""},
	};
	return img;
}

gg__Image gg__create_image_from_byte_array(array_byte b) {
	return gg__create_image_from_memory(b.data, b.len);
}

gg__Image* gg__Image_init_sokol_image(gg__Image* img) {
	struct sg_image_desc img_desc = (struct sg_image_desc){
		._start_canary = 0,
		.type = 0,
		.render_target = 0,
		.width = img->width,
		.height = img->height,
		.depth = {0},
		.num_mipmaps = 0,
		.usage = 0,
		.pixel_format = 0,
		.sample_count = 0,
		.min_filter = 0,
		.mag_filter = 0,
		.wrap_u = sokol__gfx__Wrap_clamp_to_edge,
		.wrap_v = sokol__gfx__Wrap_clamp_to_edge,
		.wrap_w = 0,
		.border_color = 0,
		.max_anisotropy = 0,
		.min_lod = 0,
		.max_lod = 0,
		.content = {0},
		.label = ((byte*)(0)),
		.gl_textures = {0},
		.mtl_textures = {0},
		.d3d11_texture = 0,
		._end_canary = 0,
	};
	img_desc.content.subimage[0][0] = (struct sg_subimage_content){.ptr = img->data,.size = img->nr_channels * img->width * img->height,};
	img->simg = sg_make_image(&img_desc);
	img->simg_ok = true;
	img->ok = true;
	return img;
}

void gg__Context_draw_image(gg__Context* ctx, f32 x, f32 y, f32 width, f32 height, gg__Image* img_) {
	if (img_->id >= ctx->image_cache.len) {
		eprintln(_STR("gg: draw_image() bad img id %"PRId32"\000 (img cache len = %"PRId32"\000)", 3, img_->id, ctx->image_cache.len));
		return;
	}
	gg__Image img = (*(gg__Image*)array_get(ctx->image_cache, img_->id));
	if (!img.simg_ok) {
		return;
	}
	f32 u0 = ((f32)(0.0));
	f32 v0 = ((f32)(0.0));
	f32 u1 = ((f32)(1.0));
	f32 v1 = ((f32)(1.0));
	f32 x0 = ((f32)(x)) * ctx->scale;
	f32 y0 = ((f32)(y)) * ctx->scale;
	f32 x1 = ((f32)(x + width)) * ctx->scale;
	f32 y1 = ((f32)(y + height)) * ctx->scale;
	sokol__sgl__load_pipeline(ctx->timage_pip);
	sokol__sgl__enable_texture();
	sokol__sgl__texture(img.simg);
	sokol__sgl__begin_quads();
	sokol__sgl__c4b(255, 255, 255, 255);
	sokol__sgl__v2f_t2f(x0, y0, u0, v0);
	sokol__sgl__v2f_t2f(x1, y0, u1, v0);
	sokol__sgl__v2f_t2f(x1, y1, u1, v1);
	sokol__sgl__v2f_t2f(x0, y1, u0, v1);
	sokol__sgl__end();
	sokol__sgl__disable_texture();
}

void gg__Context_draw_image_flipped(gg__Context* ctx, f32 x, f32 y, f32 width, f32 height, gg__Image* img_) {
	if (img_->id >= ctx->image_cache.len) {
		eprintln(_STR("gg: draw_image() bad img id %"PRId32"\000 (img cache len = %"PRId32"\000)", 3, img_->id, ctx->image_cache.len));
		return;
	}
	gg__Image img = (*(gg__Image*)array_get(ctx->image_cache, img_->id));
	if (!img.simg_ok) {
		return;
	}
	f32 u0 = ((f32)(0.0));
	f32 v0 = ((f32)(0.0));
	f32 u1 = ((f32)(1.0));
	f32 v1 = ((f32)(1.0));
	f32 x0 = ((f32)(x)) * ctx->scale;
	f32 y0 = ((f32)(y)) * ctx->scale;
	f32 x1 = ((f32)(x + width)) * ctx->scale;
	f32 y1 = ((f32)(y + height)) * ctx->scale;
	sokol__sgl__load_pipeline(ctx->timage_pip);
	sokol__sgl__enable_texture();
	sokol__sgl__texture(img.simg);
	sokol__sgl__begin_quads();
	sokol__sgl__c4b(255, 255, 255, 255);
	sokol__sgl__v2f_t2f(x0, y0, u1, v0);
	sokol__sgl__v2f_t2f(x1, y0, u0, v0);
	sokol__sgl__v2f_t2f(x1, y1, u0, v1);
	sokol__sgl__v2f_t2f(x0, y1, u1, v1);
	sokol__sgl__end();
	sokol__sgl__disable_texture();
}

void gg__Context_draw_image_by_id(gg__Context* ctx, f32 x, f32 y, f32 width, f32 height, int id) {
	gg__Image img = (*(gg__Image*)array_get(ctx->image_cache, id));
	gg__Context_draw_image(ctx, x, y, width, height, (voidptr)&/*qq*/img);
}

static Option_gg__FT_ptr gg__new_ft(gg__FTConfig c) {
	if ((c.font_path).len == 0) {
	}
	#if !defined(__ANDROID__)
	{
		if ((c.font_path).len == 0 || !os__exists(c.font_path)) {
			println(_STR("failed to load font \"%.*s\000\"", 2, c.font_path));
			Option _t250 = opt_none();
			return *(Option_gg__FT_ptr*)&_t250;
		}
	}
	#endif
	array_byte bytes = __new_array_with_default(0, 0, sizeof(byte), 0);
	#if defined(__ANDROID__)
	{
	}
	#else
	{
		Option_array_byte _t251 = os__read_bytes(c.font_path);
		if (!_t251.ok) {
			string err = _t251.v_error;
			int errcode = _t251.ecode;
			println(_STR("failed to load font \"%.*s\000\"", 2, c.font_path));
			Option _t252 = opt_none();
			return *(Option_gg__FT_ptr*)&_t252;
		}
 		bytes = *(array_byte*) _t251.data;
	}
	#endif
	string bold_path = gg__get_font_path_variant(c.font_path, gg__FontVariant_bold);
	Option_array_byte _t253 = os__read_bytes(bold_path);
	if (!_t253.ok) {
		string err = _t253.v_error;
		int errcode = _t253.ecode;
		gg__debug_font_println(_STR("failed to load font \"%.*s\000\"", 2, bold_path));
		*(array_byte*) _t253.data = bytes;
	}
 	array_byte bytes_bold = *(array_byte*) _t253.data;
	string mono_path = gg__get_font_path_variant(c.font_path, gg__FontVariant_mono);
	Option_array_byte _t254 = os__read_bytes(mono_path);
	if (!_t254.ok) {
		string err = _t254.v_error;
		int errcode = _t254.ecode;
		gg__debug_font_println(_STR("failed to load font \"%.*s\000\"", 2, mono_path));
		*(array_byte*) _t254.data = bytes;
	}
 	array_byte bytes_mono = *(array_byte*) _t254.data;
	string italic_path = gg__get_font_path_variant(c.font_path, gg__FontVariant_italic);
	Option_array_byte _t255 = os__read_bytes(italic_path);
	if (!_t255.ok) {
		string err = _t255.v_error;
		int errcode = _t255.ecode;
		gg__debug_font_println(_STR("failed to load font \"%.*s\000\"", 2, italic_path));
		*(array_byte*) _t255.data = bytes;
	}
 	array_byte bytes_italic = *(array_byte*) _t255.data;
	struct FONScontext* fons = sokol__sfons__create(512, 512, 1);
	Option_gg__FT_ptr _t256;
	opt_ok2(&(gg__FT*[]) { (gg__FT*)memdup(&(gg__FT){.fons = fons,
		.font_normal = fonsAddFontMem(fons, "sans", bytes.data, bytes.len, false),
		.font_bold = fonsAddFontMem(fons, "sans", bytes_bold.data, bytes_bold.len, false),
		.font_mono = fonsAddFontMem(fons, "sans", bytes_mono.data, bytes_mono.len, false),
		.font_italic = fonsAddFontMem(fons, "sans", bytes_italic.data, bytes_italic.len, false),
		.scale = c.scale,
	}, sizeof(gg__FT)) }, (OptionBase*)(&_t256), sizeof(gg__FT*));
	return _t256;
}

static void gg__Context_set_cfg(gg__Context* ctx, gx__TextCfg cfg) {
	if (!ctx->font_inited) {
		return;
	}
	if (cfg.bold) {
		C__FONScontext_set_font(ctx->ft->fons, ctx->ft->font_bold);
	} else if (cfg.mono) {
		C__FONScontext_set_font(ctx->ft->fons, ctx->ft->font_mono);
	} else if (cfg.italic) {
		C__FONScontext_set_font(ctx->ft->fons, ctx->ft->font_italic);
	} else {
		C__FONScontext_set_font(ctx->ft->fons, ctx->ft->font_normal);
	}
	f32 scale = (ctx->ft->scale == 0 ? (((f32)(1))) : (ctx->ft->scale));
	int size = (cfg.mono ? (cfg.size - 2) : (cfg.size));
	C__FONScontext_set_size(ctx->ft->fons, scale * ((f32)(size)));
	fonsSetAlign(ctx->ft->fons, (((int)(cfg.align)) | ((int)(cfg.vertical_align))));
	u32 color = sfons_rgba(cfg.color.r, cfg.color.g, cfg.color.b, cfg.color.a);
	if (cfg.color.a != 255) {
		sokol__sgl__load_pipeline(ctx->timage_pip);
	}
	fonsSetColor(ctx->ft->fons, color);
	f32 ascender = ((f32)(0.0));
	f32 descender = ((f32)(0.0));
	f32 lh = ((f32)(0.0));
	C__FONScontext_vert_metrics(ctx->ft->fons, &ascender, &descender, &lh);
}

void gg__Context_draw_text(gg__Context* ctx, int x, int y, string text_, gx__TextCfg cfg) {
	if (!ctx->font_inited) {
		eprintln(tos_lit("gg: draw_text(): font not initialized"));
		return;
	}
	string text = text_;
	if (string_contains(text, tos_lit("\t"))) {
		text = string_replace(text, tos_lit("\t"), tos_lit("    "));
	}
	gg__Context_set_cfg(ctx, cfg);
	f32 scale = (ctx->ft->scale == 0 ? (((f32)(1))) : (ctx->ft->scale));
	fonsDrawText(ctx->ft->fons, x * scale, y * scale, text.str, 0);
}

void gg__Context_draw_text_def(gg__Context* ctx, int x, int y, string text) {
	gg__Context_draw_text(ctx, x, y, text, (gx__TextCfg){.color = _const_gx__black,.size = 16,.align = gx__HorizontalAlign_left,.vertical_align = gx__VerticalAlign_top,.max_width = 0,.family = (string){.str=(byteptr)""},.bold = 0,.mono = 0,.italic = 0,});
}

void gg__FT_flush(gg__FT* ft) {
	sokol__sfons__flush(ft->fons);
}

int gg__Context_text_width(gg__Context* ctx, string s) {
	if (!ctx->font_inited) {
		return 0;
	}
	array_fixed_f32_4 buf = {0};
	fonsTextBounds(ctx->ft->fons, 0, 0, s.str, 0, buf);
	if (string_ends_with(s, tos_lit(" "))) {
		return ((int)((buf[2] - buf[0]) / ctx->scale)) + gg__Context_text_width(ctx, tos_lit("i"));
	}
	return ((int)((buf[2] - buf[0]) / ctx->scale));
}

int gg__Context_text_height(gg__Context* ctx, string s) {
	if (!ctx->font_inited) {
		return 0;
	}
	array_fixed_f32_4 buf = {0};
	fonsTextBounds(ctx->ft->fons, 0, 0, s.str, 0, buf);
	return ((int)((buf[3] - buf[1]) / ctx->scale));
}

multi_return_int_int gg__Context_text_size(gg__Context* ctx, string s) {
	if (!ctx->font_inited) {
		return (multi_return_int_int){.arg0=0, .arg1=0};
	}
	array_fixed_f32_4 buf = {0};
	fonsTextBounds(ctx->ft->fons, 0, 0, s.str, 0, buf);
	return (multi_return_int_int){.arg0=((int)((buf[2] - buf[0]) / ctx->scale)), .arg1=((int)((buf[3] - buf[1]) / ctx->scale))};
}

string gg__system_font_path() {
	string env_font = os__getenv(tos_lit("VUI_FONT"));
	if ((env_font).len != 0 && os__exists(env_font)) {
		return env_font;
	}
	#if defined(_WIN32)
	{
	}
	#endif
	array_string fonts = new_array_from_c_array(6, 6, sizeof(string), _MOV((string[6]){tos_lit("Ubuntu-R.ttf"), tos_lit("Arial.ttf"), tos_lit("LiberationSans-Regular.ttf"), tos_lit("NotoSans-Regular.ttf"), tos_lit("FreeSans.ttf"), tos_lit("DejaVuSans.ttf")}));
	#if defined(__APPLE__)
	{
	}
	#endif
	Option_os__Result _t257 = os__exec(tos_lit("fc-list"));
	if (!_t257.ok) {
		string err = _t257.v_error;
		int errcode = _t257.ecode;
		v_panic(tos_lit("failed to fetch system fonts"));
	}
 	os__Result s = *(os__Result*) _t257.data;
	array_string system_fonts = string_split(s.output, tos_lit("\n"));
	// FOR IN array
	array _t258 = system_fonts;
	for (int _t259 = 0; _t259 < _t258.len; ++_t259) {
		string line = ((string*)_t258.data)[_t259];
		// FOR IN array
		array _t260 = fonts;
		for (int _t261 = 0; _t261 < _t260.len; ++_t261) {
			string font = ((string*)_t260.data)[_t261];
			if (string_contains(line, font) && string_contains(line, tos_lit(":"))) {
				string res = string_all_before(line, tos_lit(":"));
				println(_STR("Using font %.*s", 1, res));
				return res;
			}
		}
	}
	v_panic(tos_lit("failed to init the font"));
	return (string){.str=(byteptr)""};
}

static string gg__get_font_path_variant(string font_path, gg__FontVariant variant) {
	string fpath = string_replace(font_path, tos_lit(".ttf"), tos_lit(""));
	gg__FontVariant _t262 = variant;
	if (_t262 == gg__FontVariant_normal) {
	} else if (_t262 == gg__FontVariant_bold) {
		if (string_ends_with(fpath, tos_lit("-Regular"))) {
			fpath = string_replace(fpath, tos_lit("-Regular"), tos_lit("-Bold"));
		} else if (string_starts_with(fpath, tos_lit("DejaVuSans"))) {
			fpath = /*f*/string_add(fpath, tos_lit("-Bold"));
		} else if (string_starts_with(string_to_lower(fpath), tos_lit("arial"))) {
			fpath = /*f*/string_add(fpath, tos_lit("bd"));
		} else {
			fpath = /*f*/string_add(fpath, tos_lit("-bold"));
		}
	} else if (_t262 == gg__FontVariant_italic) {
		if (string_ends_with(fpath, tos_lit("-Regular"))) {
			fpath = string_replace(fpath, tos_lit("-Regular"), tos_lit("-Italic"));
		} else if (string_starts_with(fpath, tos_lit("DejaVuSans"))) {
			fpath = /*f*/string_add(fpath, tos_lit("-Oblique"));
		} else if (string_starts_with(string_to_lower(fpath), tos_lit("arial"))) {
			fpath = /*f*/string_add(fpath, tos_lit("i"));
		} else {
			fpath = /*f*/string_add(fpath, tos_lit("Italic"));
		}
	} else if (_t262 == gg__FontVariant_mono) {
		if (!string_ends_with(fpath, tos_lit("Mono-Regular")) && string_ends_with(fpath, tos_lit("-Regular"))) {
			fpath = string_replace(fpath, tos_lit("-Regular"), tos_lit("Mono-Regular"));
		} else if (string_starts_with(string_to_lower(fpath), tos_lit("arial"))) {
		} else {
			fpath = /*f*/string_add(fpath, tos_lit("Mono"));
		}
	};
	return string_add(fpath, tos_lit(".ttf"));
}

static void gg__debug_font_println(string s) {
	#if defined(CUSTOM_DEFINE_debug_font)
	{
	}
	#endif
}

static void rand__init() {
	default_rng = rand__new_default((rand__PRNGConfigStruct){.seed = rand__util__time_seed_array(2),});
}

rand__wyrand__WyRandRNG* rand__new_default(rand__PRNGConfigStruct config) {
	rand__wyrand__WyRandRNG* rng = (rand__wyrand__WyRandRNG*)memdup(&(rand__wyrand__WyRandRNG){.state = rand__util__time_seed_64(),.has_extra = 0,.extra = 0,}, sizeof(rand__wyrand__WyRandRNG));
	rand__wyrand__WyRandRNG_seed(rng, config.seed);
	return rng;
}

void rand__seed(array_u32 seed) {
	rand__wyrand__WyRandRNG_seed(default_rng, seed);
}

u32 rand__u32() {
	return rand__wyrand__WyRandRNG_u32(default_rng);
}

u64 rand__u64() {
	return rand__wyrand__WyRandRNG_u64(default_rng);
}

u32 rand__u32n(u32 max) {
	return rand__wyrand__WyRandRNG_u32n(default_rng, max);
}

u64 rand__u64n(u64 max) {
	return rand__wyrand__WyRandRNG_u64n(default_rng, max);
}

u32 rand__u32_in_range(u32 min, u32 max) {
	return rand__wyrand__WyRandRNG_u32_in_range(default_rng, min, max);
}

u64 rand__u64_in_range(u64 min, u64 max) {
	return rand__wyrand__WyRandRNG_u64_in_range(default_rng, min, max);
}

int rand__int() {
	return rand__wyrand__WyRandRNG_int(default_rng);
}

int rand__intn(int max) {
	return rand__wyrand__WyRandRNG_intn(default_rng, max);
}

int rand__int_in_range(int min, int max) {
	return rand__wyrand__WyRandRNG_int_in_range(default_rng, min, max);
}

int rand__int31() {
	return rand__wyrand__WyRandRNG_int31(default_rng);
}

i64 rand__i64() {
	return rand__wyrand__WyRandRNG_i64(default_rng);
}

i64 rand__i64n(i64 max) {
	return rand__wyrand__WyRandRNG_i64n(default_rng, max);
}

i64 rand__i64_in_range(i64 min, i64 max) {
	return rand__wyrand__WyRandRNG_i64_in_range(default_rng, min, max);
}

i64 rand__int63() {
	return rand__wyrand__WyRandRNG_int63(default_rng);
}

f32 rand__f32() {
	return rand__wyrand__WyRandRNG_f32(default_rng);
}

f64 rand__f64() {
	return rand__wyrand__WyRandRNG_f64(default_rng);
}

f32 rand__f32n(f32 max) {
	return rand__wyrand__WyRandRNG_f32n(default_rng, max);
}

f64 rand__f64n(f64 max) {
	return rand__wyrand__WyRandRNG_f64n(default_rng, max);
}

f32 rand__f32_in_range(f32 min, f32 max) {
	return rand__wyrand__WyRandRNG_f32_in_range(default_rng, min, max);
}

f64 rand__f64_in_range(f64 min, f64 max) {
	return rand__wyrand__WyRandRNG_f64_in_range(default_rng, min, max);
}

string rand__string(int len) {
	byteptr buf = v_malloc(len);
	for (int i = 0; i < len; ++i) {
		{ // Unsafe block
			buf[i] = string_at(_const_rand__chars, rand__intn(_const_rand__chars.len));
		}
	}
	return byteptr_vstring_with_len(buf, len);
}

string rand__uuid_v4() {
	int buflen = 36;
	byteptr buf = v_malloc(37);
	int i_buf = 0;
	u64 x = ((u64)(0U));
	byte d = ((byte)(0));
	for (;;) {
		if (!(i_buf < buflen)) break;
		int c = 0;
		x = rand__wyrand__WyRandRNG_u64(default_rng);
		x &= 0x0F0F0F0F0F0F0F0F;
		x += 0x3030303030303030;
		for (;;) {
			if (!(c < 8 && i_buf < buflen)) break;
			d = ((byte)(x));
			{ // Unsafe block
				buf[i_buf] = (d > 0x39 ? (d + 0x27) : (d));
			}
			i_buf++;
			c++;
			x = x >> 8;
		}
	}
	x = x >> 8;
	d = ((byte)(x));
	{ // Unsafe block
		buf[19] = (d > 0x39 ? (d + 0x27) : (d));
		buf[8] = '-';
		buf[13] = '-';
		buf[18] = '-';
		buf[23] = '-';
		buf[14] = '4';
		buf[buflen] = 0;
	}
	return byteptr_vstring_with_len(buf, buflen);
}

string rand__ulid() {
	return rand__ulid_at_millisecond(time__Time_unix_time_milli(time__utc()));
}

string rand__ulid_at_millisecond(u64 unix_time_milli) {
	int buflen = 26;
	byteptr buf = v_malloc(27);
	u64 t = unix_time_milli;
	int i = 9;
	for (;;) {
		if (!(i >= 0)) break;
		{ // Unsafe block
			buf[i] = string_at(_const_rand__ulid_encoding, (t & 0x1F));
		}
		t = t >> 5;
		i--;
	}
	u64 x = rand__wyrand__WyRandRNG_u64(default_rng);
	i = 10;
	for (;;) {
		if (!(i < 19)) break;
		{ // Unsafe block
			buf[i] = string_at(_const_rand__ulid_encoding, (x & 0x1F));
		}
		x = x >> 5;
		i++;
	}
	x = rand__wyrand__WyRandRNG_u64(default_rng);
	for (;;) {
		if (!(i < 26)) break;
		{ // Unsafe block
			buf[i] = string_at(_const_rand__ulid_encoding, (x & 0x1F));
		}
		x = x >> 5;
		i++;
	}
	{ // Unsafe block
		buf[26] = 0;
	}
	return byteptr_vstring_with_len(buf, buflen);
}

#if defined(__linux__)
	#if defined(__TINYC__)
	#endif
#endif

static sync__Channel* sync__new_channel_st(u32 n, u32 st) {
	u32 wsem = (n > 0 ? (n) : (1));
	u32 rsem = (n > 0 ? (((u32)(0U))) : (1));
	byteptr rbuf = (n > 0 ? (v_malloc(((int)(n * st)))) : (((byteptr)(0))));
	byteptr sbuf = (n > 0 ? (vcalloc(((int)(n * 2)))) : (((byteptr)(0))));
	return (sync__Channel*)memdup(&(sync__Channel){.writesem = sync__new_semaphore_init(wsem),
		.readsem = sync__new_semaphore_init(rsem),
		.writesem_im = sync__new_semaphore(),
		.readsem_im = sync__new_semaphore(),
		.ringbuf = rbuf,
		.statusbuf = sbuf,
		.objsize = st,
		.write_adr = 0,
		.read_adr = 0,
		.adr_read = 0,
		.adr_written = 0,
		.write_free = n,
		.read_avail = 0,
		.buf_elem_write_idx = 0,
		.buf_elem_read_idx = 0,
		.write_subscriber = 0,
		.read_subscriber = 0,
		.write_sub_mtx = 0,
		.read_sub_mtx = 0,
		.closed = 0,
		.cap = n,
	}, sizeof(sync__Channel));
}

void sync__Channel_close(sync__Channel* ch) {
	atomic_store_u16(&ch->closed, 1);
	voidptr nulladr = ((voidptr)(0));
	for (;;) {
		if (!(!atomic_compare_exchange_weak_ptr(&ch->adr_written, &nulladr, ((voidptr)(-1))))) break;
		nulladr = ((voidptr)(0));
	}
	sync__Semaphore_post(ch->readsem_im);
	sync__Semaphore_post(ch->readsem);
	u16 null16 = ((u16)(0U));
	for (;;) {
		if (!(!atomic_compare_exchange_weak_u16(&ch->read_sub_mtx, &null16, ((u16)(1U))))) break;
		null16 = ((u16)(0U));
	}
	if (ch->read_subscriber != ((voidptr)(0))) {
		sync__Semaphore_post(ch->read_subscriber->sem);
	}
	atomic_store_u16(&ch->read_sub_mtx, ((u16)(0U)));
	null16 = ((u16)(0U));
	for (;;) {
		if (!(!atomic_compare_exchange_weak_u16(&ch->write_sub_mtx, &null16, ((u16)(1U))))) break;
		null16 = ((u16)(0U));
	}
	if (ch->write_subscriber != ((voidptr)(0))) {
		sync__Semaphore_post(ch->write_subscriber->sem);
	}
	atomic_store_u16(&ch->write_sub_mtx, ((u16)(0U)));
}

// Attr: [inline]
inline int sync__Channel_len(sync__Channel* ch) {
	return ((int)(atomic_load_u32(&ch->read_avail)));
}

// Attr: [inline]
inline void sync__Channel_push(sync__Channel* ch, voidptr src) {
	if (sync__Channel_try_push_priv(ch, src, false) == ChanState_closed) {
		v_panic(tos_lit("push on closed channel"));
	}
}

// Attr: [inline]
inline ChanState sync__Channel_try_push(sync__Channel* ch, voidptr src) {
	return sync__Channel_try_push_priv(ch, src, true);
}

static ChanState sync__Channel_try_push_priv(sync__Channel* ch, voidptr src, bool no_block) {
	if (atomic_load_u16(&ch->closed) != 0) {
		return ChanState_closed;
	}
	multi_return_any_int_any_int mr_5296 = (no_block ? ((multi_return_any_int_any_int){.arg0=1,.arg1=1}) : ((multi_return_any_int_any_int){.arg0=_const_sync__spinloops,.arg1=_const_sync__spinloops_sem}));
	int spinloops_sem_ = mr_5296.arg0;
	int spinloops_ = mr_5296.arg1;
	bool have_swapped = false;
	for (;;) {
		bool got_sem = false;
		voidptr wradr = atomic_load_ptr(&ch->write_adr);
		for (;;) {
			if (!(wradr != NULL)) break;
			if (atomic_compare_exchange_strong_ptr(&ch->write_adr, &wradr, ((voidptr)(0)))) {
				memcpy(wradr, src, ch->objsize);
				voidptr nulladr = ((voidptr)(0));
				for (;;) {
					if (!(!atomic_compare_exchange_weak_ptr(&ch->adr_written, &nulladr, wradr))) break;
					nulladr = ((voidptr)(0));
				}
				sync__Semaphore_post(ch->readsem_im);
				return ChanState_success;
			}
		}
		if (no_block && ch->cap == 0) {
			return ChanState_not_ready;
		}
		for (int _t263 = 0; _t263 < spinloops_sem_; ++_t263) {
			if (got_sem) {
				break;
			}
			got_sem = sync__Semaphore_try_wait(ch->writesem);
		}
		if (!got_sem) {
			if (no_block) {
				return ChanState_not_ready;
			}
			sync__Semaphore_wait(ch->writesem);
		}
		if (ch->cap == 0) {
			bool read_in_progress = false;
			atomic_store_ptr(&ch->read_adr, src);
			wradr = atomic_load_ptr(&ch->write_adr);
			if (wradr != NULL) {
				voidptr src2 = src;
				if (atomic_compare_exchange_strong_ptr(&ch->read_adr, &src2, ((voidptr)(0)))) {
					sync__Semaphore_post(ch->writesem);
					continue;
				} else {
					read_in_progress = true;
				}
			}
			if (!read_in_progress) {
				u16 null16 = ((u16)(0U));
				for (;;) {
					if (!(!atomic_compare_exchange_weak_u16(&ch->read_sub_mtx, &null16, ((u16)(1U))))) break;
					null16 = ((u16)(0U));
				}
				if (ch->read_subscriber != ((voidptr)(0))) {
					sync__Semaphore_post(ch->read_subscriber->sem);
				}
				atomic_store_u16(&ch->read_sub_mtx, ((u16)(0U)));
			}
			voidptr src2 = src;
			for (u32 sp = ((u32)(0U)); _us32_lt(sp,spinloops_) || read_in_progress; sp++) {
				if (atomic_compare_exchange_strong_ptr(&ch->adr_read, &src2, ((voidptr)(0)))) {
					have_swapped = true;
					read_in_progress = true;
					break;
				}
				src2 = src;
			}
			bool got_im_sem = false;
			for (u32 sp = ((u32)(0U)); _us32_lt(sp,spinloops_sem_) || read_in_progress; sp++) {
				got_im_sem = sync__Semaphore_try_wait(ch->writesem_im);
				if (got_im_sem) {
					break;
				}
			}
			for (;;) {
				if (got_im_sem) {
					got_im_sem = false;
				} else {
					sync__Semaphore_wait(ch->writesem_im);
				}
				if (have_swapped || atomic_compare_exchange_strong_ptr(&ch->adr_read, &src2, ((voidptr)(0)))) {
					sync__Semaphore_post(ch->writesem);
					break;
				} else {
					sync__Semaphore_post(ch->writesem_im);
					if (src2 == ((voidptr)(-1))) {
						sync__Semaphore_post(ch->readsem);
						return ChanState_closed;
					}
					src2 = src;
				}
			}
			return ChanState_success;
		} else {
			bool space_in_queue = false;
			u32 wr_free = atomic_load_u32(&ch->write_free);
			for (;;) {
				if (!(wr_free > 0)) break;
				space_in_queue = atomic_compare_exchange_weak_u32(&ch->write_free, &wr_free, wr_free - 1);
				if (space_in_queue) {
					break;
				}
			}
			if (space_in_queue) {
				u32 wr_idx = atomic_load_u32(&ch->buf_elem_write_idx);
				for (;;) {
					u32 new_wr_idx = wr_idx + 1;
					for (;;) {
						if (!(new_wr_idx >= ch->cap)) break;
						new_wr_idx -= ch->cap;
					}
					if (atomic_compare_exchange_strong_u32(&ch->buf_elem_write_idx, &wr_idx, new_wr_idx)) {
						break;
					}
				}
				byteptr wr_ptr = ch->ringbuf;
				byteptr status_adr = ch->statusbuf;
				{ // Unsafe block
					wr_ptr += wr_idx * ch->objsize;
					status_adr += wr_idx * /*SizeOfType*/ sizeof(u16);
				}
				u16 expected_status = ((u16)(sync__BufferElemStat_unused));
				for (;;) {
					if (!(!atomic_compare_exchange_weak_u16(status_adr, &expected_status, ((u16)(sync__BufferElemStat_writing))))) break;
					expected_status = ((u16)(sync__BufferElemStat_unused));
				}
				memcpy(wr_ptr, src, ch->objsize);
				atomic_store_u16(status_adr, ((u16)(sync__BufferElemStat_written)));
				u32 old_read_avail = atomic_fetch_add_u32(&ch->read_avail, 1);
				sync__Semaphore_post(ch->readsem);
				if (old_read_avail == 0) {
					u16 null16 = ((u16)(0U));
					for (;;) {
						if (!(!atomic_compare_exchange_weak_u16(&ch->read_sub_mtx, &null16, ((u16)(1U))))) break;
						null16 = ((u16)(0U));
					}
					if (ch->read_subscriber != ((voidptr)(0))) {
						sync__Semaphore_post(ch->read_subscriber->sem);
					}
					atomic_store_u16(&ch->read_sub_mtx, ((u16)(0U)));
				}
				return ChanState_success;
			} else {
				if (no_block) {
					return ChanState_not_ready;
				}
				sync__Semaphore_post(ch->writesem);
			}
		}
	}
	return 0;
}

// Attr: [inline]
inline bool sync__Channel_pop(sync__Channel* ch, voidptr dest) {
	return sync__Channel_try_pop_priv(ch, dest, false) == ChanState_success;
}

// Attr: [inline]
inline ChanState sync__Channel_try_pop(sync__Channel* ch, voidptr dest) {
	return sync__Channel_try_pop_priv(ch, dest, true);
}

static ChanState sync__Channel_try_pop_priv(sync__Channel* ch, voidptr dest, bool no_block) {
	multi_return_any_int_any_int mr_9606 = (no_block ? ((multi_return_any_int_any_int){.arg0=1,.arg1=1}) : ((multi_return_any_int_any_int){.arg0=_const_sync__spinloops,.arg1=_const_sync__spinloops_sem}));
	int spinloops_sem_ = mr_9606.arg0;
	int spinloops_ = mr_9606.arg1;
	bool have_swapped = false;
	bool write_in_progress = false;
	for (;;) {
		bool got_sem = false;
		if (ch->cap == 0) {
			voidptr rdadr = atomic_load_ptr(&ch->read_adr);
			for (;;) {
				if (!(rdadr != NULL)) break;
				if (atomic_compare_exchange_strong_ptr(&ch->read_adr, &rdadr, ((voidptr)(0)))) {
					memcpy(dest, rdadr, ch->objsize);
					voidptr nulladr = ((voidptr)(0));
					for (;;) {
						if (!(!atomic_compare_exchange_weak_ptr(&ch->adr_read, &nulladr, rdadr))) break;
						nulladr = ((voidptr)(0));
					}
					sync__Semaphore_post(ch->writesem_im);
					return ChanState_success;
				}
			}
			if (no_block) {
				if (atomic_load_u16(&ch->closed) == 0) {
					return ChanState_not_ready;
				} else {
					return ChanState_closed;
				}
			}
		}
		for (int _t264 = 0; _t264 < spinloops_sem_; ++_t264) {
			if (got_sem) {
				break;
			}
			got_sem = sync__Semaphore_try_wait(ch->readsem);
		}
		if (!got_sem) {
			if (no_block) {
				if (atomic_load_u16(&ch->closed) == 0) {
					return ChanState_not_ready;
				} else {
					return ChanState_closed;
				}
			}
			sync__Semaphore_wait(ch->readsem);
		}
		if (ch->cap > 0) {
			bool obj_in_queue = false;
			u32 rd_avail = atomic_load_u32(&ch->read_avail);
			for (;;) {
				if (!(rd_avail > 0)) break;
				obj_in_queue = atomic_compare_exchange_weak_u32(&ch->read_avail, &rd_avail, rd_avail - 1);
				if (obj_in_queue) {
					break;
				}
			}
			if (obj_in_queue) {
				u32 rd_idx = atomic_load_u32(&ch->buf_elem_read_idx);
				for (;;) {
					u32 new_rd_idx = rd_idx + 1;
					for (;;) {
						if (!(new_rd_idx >= ch->cap)) break;
						new_rd_idx -= ch->cap;
					}
					if (atomic_compare_exchange_weak_u32(&ch->buf_elem_read_idx, &rd_idx, new_rd_idx)) {
						break;
					}
				}
				byteptr rd_ptr = ch->ringbuf;
				byteptr status_adr = ch->statusbuf;
				{ // Unsafe block
					rd_ptr += rd_idx * ch->objsize;
					status_adr += rd_idx * /*SizeOfType*/ sizeof(u16);
				}
				u16 expected_status = ((u16)(sync__BufferElemStat_written));
				for (;;) {
					if (!(!atomic_compare_exchange_weak_u16(status_adr, &expected_status, ((u16)(sync__BufferElemStat_reading))))) break;
					expected_status = ((u16)(sync__BufferElemStat_written));
				}
				memcpy(dest, rd_ptr, ch->objsize);
				atomic_store_u16(status_adr, ((u16)(sync__BufferElemStat_unused)));
				u32 old_write_free = atomic_fetch_add_u32(&ch->write_free, 1);
				sync__Semaphore_post(ch->writesem);
				if (old_write_free == 0) {
					u16 null16 = ((u16)(0U));
					for (;;) {
						if (!(!atomic_compare_exchange_weak_u16(&ch->write_sub_mtx, &null16, ((u16)(1U))))) break;
						null16 = ((u16)(0U));
					}
					if (ch->write_subscriber != ((voidptr)(0))) {
						sync__Semaphore_post(ch->write_subscriber->sem);
					}
					atomic_store_u16(&ch->write_sub_mtx, ((u16)(0U)));
				}
				return ChanState_success;
			}
		}
		atomic_store_ptr(&ch->write_adr, dest);
		if (ch->cap == 0) {
			voidptr rdadr = atomic_load_ptr(&ch->read_adr);
			if (rdadr != NULL) {
				voidptr dest2 = dest;
				if (atomic_compare_exchange_strong_ptr(&ch->write_adr, &dest2, ((voidptr)(0)))) {
					sync__Semaphore_post(ch->readsem);
					continue;
				} else {
					write_in_progress = true;
				}
			}
		}
		if (ch->cap == 0 && !write_in_progress) {
			u16 null16 = ((u16)(0U));
			for (;;) {
				if (!(!atomic_compare_exchange_weak_u16(&ch->write_sub_mtx, &null16, ((u16)(1U))))) break;
				null16 = ((u16)(0U));
			}
			if (ch->write_subscriber != ((voidptr)(0))) {
				sync__Semaphore_post(ch->write_subscriber->sem);
			}
			atomic_store_u16(&ch->write_sub_mtx, ((u16)(0U)));
		}
		voidptr dest2 = dest;
		for (u32 sp = ((u32)(0U)); _us32_lt(sp,spinloops_) || write_in_progress; sp++) {
			if (atomic_compare_exchange_strong_ptr(&ch->adr_written, &dest2, ((voidptr)(0)))) {
				have_swapped = true;
				break;
			} else if (dest2 == ((voidptr)(-1))) {
				sync__Semaphore_post(ch->readsem);
				return ChanState_closed;
			}
			dest2 = dest;
		}
		bool got_im_sem = false;
		for (u32 sp = ((u32)(0U)); _us32_lt(sp,spinloops_sem_) || write_in_progress; sp++) {
			got_im_sem = sync__Semaphore_try_wait(ch->readsem_im);
			if (got_im_sem) {
				break;
			}
		}
		for (;;) {
			if (got_im_sem) {
				got_im_sem = false;
			} else {
				sync__Semaphore_wait(ch->readsem_im);
			}
			if (have_swapped || atomic_compare_exchange_strong_ptr(&ch->adr_written, &dest2, ((voidptr)(0)))) {
				sync__Semaphore_post(ch->readsem);
				break;
			} else {
				sync__Semaphore_post(ch->readsem_im);
				if (dest2 == ((voidptr)(-1))) {
					sync__Semaphore_post(ch->readsem);
					return ChanState_closed;
				}
				dest2 = dest;
			}
		}
		return ChanState_success;
	}
	return 0;
}

int sync__channel_select(array_sync__Channel_ptr* channels, array_sync__Direction dir, array_voidptr* objrefs, time__Duration timeout) {
	// assert
	if (channels->len == dir.len) {} else {
		VAssertMetaInfo v_assert_meta_info__t265;
		memset(&v_assert_meta_info__t265, 0, sizeof(VAssertMetaInfo));
		v_assert_meta_info__t265.fpath = tos_lit("/home/fofsan/.local/bin/v/vlib/sync/channels.v");
		v_assert_meta_info__t265.line_nr = 508;
		v_assert_meta_info__t265.fn_name = tos_lit("sync.channel_select");
		v_assert_meta_info__t265.src = tos_lit("channels.len == dir.len");
		v_assert_meta_info__t265.op = tos_lit("==");
		v_assert_meta_info__t265.llabel = tos_lit("channels.len");
		v_assert_meta_info__t265.rlabel = tos_lit("dir.len");
		v_assert_meta_info__t265.lvalue = int_str(channels->len) /* typeof: v.ast.SelectorExpr type: 7 */ ;
		v_assert_meta_info__t265.rvalue = int_str(dir.len) /* typeof: v.ast.SelectorExpr type: 7 */ ;
		__print_assert_failure(&v_assert_meta_info__t265);
		v_panic(tos_lit("Assertion failed..."));
		exit(1);
	}
	// assert
	if (dir.len == objrefs->len) {} else {
		VAssertMetaInfo v_assert_meta_info__t266;
		memset(&v_assert_meta_info__t266, 0, sizeof(VAssertMetaInfo));
		v_assert_meta_info__t266.fpath = tos_lit("/home/fofsan/.local/bin/v/vlib/sync/channels.v");
		v_assert_meta_info__t266.line_nr = 509;
		v_assert_meta_info__t266.fn_name = tos_lit("sync.channel_select");
		v_assert_meta_info__t266.src = tos_lit("dir.len == objrefs.len");
		v_assert_meta_info__t266.op = tos_lit("==");
		v_assert_meta_info__t266.llabel = tos_lit("dir.len");
		v_assert_meta_info__t266.rlabel = tos_lit("objrefs.len");
		v_assert_meta_info__t266.lvalue = int_str(dir.len) /* typeof: v.ast.SelectorExpr type: 7 */ ;
		v_assert_meta_info__t266.rvalue = int_str(objrefs->len) /* typeof: v.ast.SelectorExpr type: 7 */ ;
		__print_assert_failure(&v_assert_meta_info__t266);
		v_panic(tos_lit("Assertion failed..."));
		exit(1);
	}
	array_sync__Subscription subscr = __new_array_with_default(channels->len, 0, sizeof(sync__Subscription), 0);
	sync__Semaphore sem = sync__new_semaphore();
	// FOR IN array
	array * _t267 = channels;
	for (int i = 0; i < _t267->len; ++i) {
		sync__Channel* ch = ((sync__Channel**)_t267->data)[i];
		if ((*(sync__Direction*)array_get(dir, i)) == sync__Direction_push) {
			u16 null16 = ((u16)(0U));
			for (;;) {
				if (!(!atomic_compare_exchange_weak_u16(&ch->write_sub_mtx, &null16, ((u16)(1U))))) break;
				null16 = ((u16)(0U));
			}
			(*(sync__Subscription*)array_get(subscr, i)).sem = sem;
			(*(sync__Subscription*)array_get(subscr, i)).prev = &ch->write_subscriber;
			{ // Unsafe block
				(*(sync__Subscription*)array_get(subscr, i)).nxt = atomic_exchange_ptr(&ch->write_subscriber, &(*(sync__Subscription*)array_get(subscr, i)));
			}
			if (((voidptr)((*(sync__Subscription*)array_get(subscr, i)).nxt)) != ((voidptr)(0))) {
				{ // Unsafe block
					(*(sync__Subscription*)array_get(subscr, i)).nxt->prev = &(*(sync__Subscription*)array_get(subscr, i));
				}
			}
			atomic_store_u16(&ch->write_sub_mtx, ((u16)(0U)));
		} else {
			u16 null16 = ((u16)(0U));
			for (;;) {
				if (!(!atomic_compare_exchange_weak_u16(&ch->read_sub_mtx, &null16, ((u16)(1U))))) break;
				null16 = ((u16)(0U));
			}
			(*(sync__Subscription*)array_get(subscr, i)).sem = sem;
			(*(sync__Subscription*)array_get(subscr, i)).prev = &ch->read_subscriber;
			{ // Unsafe block
				(*(sync__Subscription*)array_get(subscr, i)).nxt = atomic_exchange_ptr(&ch->read_subscriber, &(*(sync__Subscription*)array_get(subscr, i)));
			}
			if (((voidptr)((*(sync__Subscription*)array_get(subscr, i)).nxt)) != ((voidptr)(0))) {
				{ // Unsafe block
					(*(sync__Subscription*)array_get(subscr, i)).nxt->prev = &(*(sync__Subscription*)array_get(subscr, i));
				}
			}
			atomic_store_u16(&ch->read_sub_mtx, ((u16)(0U)));
		}
	}
	time__StopWatch stopwatch = (timeout <= 0 ? ((time__StopWatch){.elapsed = 0,.start = 0,.end = 0,}) : (time__new_stopwatch((time__StopWatchOptions){.auto_start = true,})));
	int event_idx = -1;
	for (;;) {
		u32 rnd = rand__u32_in_range(0, ((u32)(channels->len)));
		int num_closed = 0;
		// FOR IN array
		array * _t268 = channels;
		for (int j = 0; j < _t268->len; ++j) {
			int i = j + ((int)(rnd));
			if (i >= channels->len) {
				i -= channels->len;
			}
			if ((*(sync__Direction*)array_get(dir, i)) == sync__Direction_push) {
				ChanState stat = sync__Channel_try_push_priv((*(sync__Channel**)array_get(*channels, i)), (*(voidptr*)array_get(*objrefs, i)), true);
				if (stat == ChanState_success) {
					event_idx = i;
					goto restore;
				} else if (stat == ChanState_closed) {
					num_closed++;
				}
			} else {
				ChanState stat = sync__Channel_try_pop_priv((*(sync__Channel**)array_get(*channels, i)), (*(voidptr*)array_get(*objrefs, i)), true);
				if (stat == ChanState_success) {
					event_idx = i;
					goto restore;
				} else if (stat == ChanState_closed) {
					num_closed++;
				}
			}
		}
		if (num_closed == channels->len) {
			event_idx = -2;
			goto restore;
		}
		if (timeout == 0) {
			goto restore;
		} else if (timeout > 0) {
			i64 remaining = timeout - time__StopWatch_elapsed(stopwatch);
			if (!sync__Semaphore_timed_wait(sem, remaining)) {
				goto restore;
			}
		} else {
			sync__Semaphore_wait(sem);
		}
	}
	restore: {}
	// FOR IN array
	array * _t269 = channels;
	for (int i = 0; i < _t269->len; ++i) {
		sync__Channel* ch = ((sync__Channel**)_t269->data)[i];
		if ((*(sync__Direction*)array_get(dir, i)) == sync__Direction_push) {
			u16 null16 = ((u16)(0U));
			for (;;) {
				if (!(!atomic_compare_exchange_weak_u16(&ch->write_sub_mtx, &null16, ((u16)(1U))))) break;
				null16 = ((u16)(0U));
			}
			(*(sync__Subscription*)array_get(subscr, i)).prev = (*(sync__Subscription*)array_get(subscr, i)).nxt;
			if ((*(sync__Subscription*)array_get(subscr, i)).nxt != 0) {
				sync__Semaphore_post((*(sync__Subscription*)array_get(subscr, i)).nxt->sem);
			}
			atomic_store_u16(&ch->write_sub_mtx, ((u16)(0U)));
		} else {
			u16 null16 = ((u16)(0U));
			for (;;) {
				if (!(!atomic_compare_exchange_weak_u16(&ch->read_sub_mtx, &null16, ((u16)(1U))))) break;
				null16 = ((u16)(0U));
			}
			(*(sync__Subscription*)array_get(subscr, i)).prev = (*(sync__Subscription*)array_get(subscr, i)).nxt;
			if ((*(sync__Subscription*)array_get(subscr, i)).nxt != 0) {
				sync__Semaphore_post((*(sync__Subscription*)array_get(subscr, i)).nxt->sem);
			}
			atomic_store_u16(&ch->read_sub_mtx, ((u16)(0U)));
		}
	}
	sync__Semaphore_destroy(sem);
	return event_idx;
}

// TypeDecl
sync__PoolProcessor* sync__new_pool_processor(sync__PoolProcessorConfig context) {
	if (isnil(context.callback)) {
		v_panic(tos_lit("You need to pass a valid callback to new_pool_processor."));
	}
	runtime__nr_jobs();
	sync__PoolProcessor* pool = (sync__PoolProcessor*)memdup(&(sync__PoolProcessor){.thread_cb = ((voidptr)(context.callback)),
		.njobs = context.maxjobs,
		.items = __new_array_with_default(0, 0, sizeof(voidptr), 0),
		.results = __new_array_with_default(0, 0, sizeof(voidptr), 0),
		.ntask = 0,
		.ntask_mtx = sync__new_mutex(),
		.waitgroup = sync__new_waitgroup(),
		.shared_context = ((voidptr)(0)),
		.thread_contexts = __new_array_with_default(0, 0, sizeof(voidptr), 0),
	}, sizeof(sync__PoolProcessor));
	return pool;
}

void sync__PoolProcessor_set_max_jobs(sync__PoolProcessor* pool, int njobs) {
	pool->njobs = njobs;
}

void sync__PoolProcessor_work_on_pointers(sync__PoolProcessor* pool, array_voidptr items) {
	int njobs = runtime__nr_jobs();
	if (pool->njobs > 0) {
		njobs = pool->njobs;
	}
	pool->items = __new_array_with_default(0, 0, sizeof(voidptr), 0);
	pool->results = __new_array_with_default(0, 0, sizeof(voidptr), 0);
	pool->thread_contexts = __new_array_with_default(0, 0, sizeof(voidptr), 0);
	_PUSH_MANY(&pool->items, (items), _t270, array_voidptr);
	pool->results = __new_array_with_default((pool->items.len), 0, sizeof(voidptr), 0);
	_PUSH_MANY(&pool->thread_contexts, (__new_array_with_default((pool->items.len), 0, sizeof(voidptr), 0)), _t271, array_voidptr);
	sync__WaitGroup_add(pool->waitgroup, njobs);
	for (int i = 0; i < njobs; i++) {
		if (njobs > 1) {
			// go
			thread_arg_sync__process_in_thread *arg__t272 = malloc(sizeof(thread_arg_sync__process_in_thread));
			arg__t272->arg1 = pool;
			arg__t272->arg2 = i;
			pthread_t thread__t272;
			pthread_create(&thread__t272, NULL, (void*)sync__process_in_thread_thread_wrapper, arg__t272);
			// endgo

		} else {
			sync__process_in_thread(pool, i);
		}
	}
	sync__WaitGroup_wait(pool->waitgroup);
}

static void sync__process_in_thread(sync__PoolProcessor* pool, int task_id) {
	voidptr (*cb) (sync__PoolProcessor* p, int idx, int task_id) = ((sync__ThreadCB)(pool->thread_cb));
	int idx = 0;
	int ilen = pool->items.len;
	for (;;) {
		if (pool->ntask >= ilen) {
			break;
		}
		sync__Mutex_m_lock(pool->ntask_mtx);
		idx = pool->ntask;
		pool->ntask++;
		sync__Mutex_unlock(pool->ntask_mtx);
		if (idx >= ilen) {
			break;
		}
		(*(voidptr*)array_get(pool->results, idx)) = cb(pool, idx, task_id);
	}
	sync__WaitGroup_done(pool->waitgroup);
}

string sync__PoolProcessor_get_string_item(sync__PoolProcessor* pool, int idx) {
	return *(((string*)((*(voidptr*)array_get(pool->items, idx)))));
}

int sync__PoolProcessor_get_int_item(sync__PoolProcessor* pool, int idx) {
	voidptr item = (*(voidptr*)array_get(pool->items, idx));
	return *(((int*)(item)));
}

void sync__PoolProcessor_set_shared_context(sync__PoolProcessor* pool, voidptr context) {
	pool->shared_context = context;
}

voidptr sync__PoolProcessor_get_shared_context(sync__PoolProcessor* pool) {
	return pool->shared_context;
}

void sync__PoolProcessor_set_thread_context(sync__PoolProcessor* pool, int idx, voidptr context) {
	(*(voidptr*)array_get(pool->thread_contexts, idx)) = context;
}

voidptr sync__PoolProcessor_get_thread_context(sync__PoolProcessor* pool, int idx) {
	return (*(voidptr*)array_get(pool->thread_contexts, idx));
}

void sync__PoolProcessor_work_on_items_s(sync__PoolProcessor* pool, array_string items) {
	sync__PoolProcessor_work_on_pointers(pool, array_pointers(items));
}

void sync__PoolProcessor_work_on_items_i(sync__PoolProcessor* pool, array_int items) {
	sync__PoolProcessor_work_on_pointers(pool, array_pointers(items));
}

array_sync__SResult sync__PoolProcessor_get_results_s(sync__PoolProcessor* pool) {
	array_sync__SResult res = __new_array_with_default(0, 0, sizeof(sync__SResult), 0);
	for (int i = 0; i < pool->results.len; ++i) {
		array_push(&res, _MOV((sync__SResult[]){ *(((sync__SResult*)((*(voidptr*)array_get(pool->results, i))))) }));
	}
	return res;
}

array_sync__IResult sync__PoolProcessor_get_results_i(sync__PoolProcessor* pool) {
	array_sync__IResult res = __new_array_with_default(0, 0, sizeof(sync__IResult), 0);
	for (int i = 0; i < pool->results.len; ++i) {
		array_push(&res, _MOV((sync__IResult[]){ *(((sync__IResult*)((*(voidptr*)array_get(pool->results, i))))) }));
	}
	return res;
}

#if defined(__APPLE__)
#endif
sync__Mutex* sync__new_mutex() {
	sync__Mutex* m = (sync__Mutex*)memdup(&(sync__Mutex){.mutex = 0,}, sizeof(sync__Mutex));
	pthread_mutex_init(&m->mutex, NULL);
	return m;
}

sync__RwMutex* sync__new_rwmutex() {
	sync__RwMutex* m = (sync__RwMutex*)memdup(&(sync__RwMutex){.mutex = 0,}, sizeof(sync__RwMutex));
	sync__RwMutexAttr* a = (sync__RwMutexAttr*)memdup(&(sync__RwMutexAttr){.attr = 0,}, sizeof(sync__RwMutexAttr));
	pthread_rwlockattr_init(&a->attr);
	pthread_rwlockattr_setkind_np(&a->attr, PTHREAD_RWLOCK_PREFER_WRITER_NONRECURSIVE_NP);
	pthread_rwlockattr_setpshared(&a->attr, PTHREAD_PROCESS_PRIVATE);
	pthread_rwlock_init(&m->mutex, &a->attr);
	return m;
}

void sync__Mutex_m_lock(sync__Mutex* m) {
	pthread_mutex_lock(&m->mutex);
}

void sync__Mutex_unlock(sync__Mutex* m) {
	pthread_mutex_unlock(&m->mutex);
}

void sync__RwMutex_r_lock(sync__RwMutex* m) {
	pthread_rwlock_rdlock(&m->mutex);
}

void sync__RwMutex_w_lock(sync__RwMutex* m) {
	pthread_rwlock_wrlock(&m->mutex);
}

void sync__RwMutex_r_unlock(sync__RwMutex* m) {
	pthread_rwlock_unlock(&m->mutex);
}

void sync__RwMutex_w_unlock(sync__RwMutex* m) {
	pthread_rwlock_unlock(&m->mutex);
}

// Attr: [inline]
inline sync__Semaphore sync__new_semaphore() {
	return sync__new_semaphore_init(0);
}

sync__Semaphore sync__new_semaphore_init(u32 n) {
	#if defined(__APPLE__)
	{
	}
	#else
	{
		sync__Semaphore s = (sync__Semaphore){.sem = (sync__PosixSemaphore*)memdup(&(sync__PosixSemaphore){.sem = 0,}, sizeof(sync__PosixSemaphore)),};
		sem_init(&((sync__PosixSemaphore*)(s.sem))->sem, 0, n);
		return s;
	}
	#endif
	return (sync__Semaphore){0};
}

void sync__Semaphore_post(sync__Semaphore s) {
	#if defined(__APPLE__)
	{
	}
	#else
	{
		sem_post(&((sync__PosixSemaphore*)(s.sem))->sem);
	}
	#endif
}

void sync__Semaphore_wait(sync__Semaphore s) {
	#if defined(__APPLE__)
	{
	}
	#else
	{
		sem_wait(&((sync__PosixSemaphore*)(s.sem))->sem);
	}
	#endif
}

bool sync__Semaphore_try_wait(sync__Semaphore s) {
	#if defined(__APPLE__)
	{
	}
	#else
	{
		return sem_trywait(&((sync__PosixSemaphore*)(s.sem))->sem) == 0;
	}
	#endif
	return 0;
}

bool sync__Semaphore_timed_wait(sync__Semaphore s, time__Duration timeout) {
	#if defined(__APPLE__)
	{
	}
	#else
	{
		struct timespec t_spec = time__Duration_timespec(timeout);
		return sem_timedwait(&((sync__PosixSemaphore*)(s.sem))->sem, &t_spec) == 0;
	}
	#endif
	return 0;
}

bool sync__Semaphore_destroy(sync__Semaphore s) {
	#if defined(__APPLE__)
	{
	}
	#else
	{
		return sem_destroy(&((sync__PosixSemaphore*)(s.sem))->sem) == 0;
	}
	#endif
	return 0;
}

void sync__Waiter_wait(sync__Waiter* w) {
	sync__Mutex_m_lock(w->mx);
}

void sync__Waiter_stop(sync__Waiter* w) {
	sync__Mutex_unlock(w->mx);
}

sync__Waiter* sync__new_waiter() {
	sync__Waiter* w = (sync__Waiter*)memdup(&(sync__Waiter){.mx = sync__new_mutex(),}, sizeof(sync__Waiter));
	return w;
}

sync__WaitGroup* sync__new_waitgroup() {
	return (sync__WaitGroup*)memdup(&(sync__WaitGroup){.task_count = 0,.task_count_mutex = sync__new_mutex(),.wait_blocker = sync__new_waiter(),}, sizeof(sync__WaitGroup));
}

void sync__WaitGroup_add(sync__WaitGroup* wg, int delta) {
	sync__Mutex_m_lock(wg->task_count_mutex);
	if (wg->task_count == 0) {
		sync__Waiter_wait(wg->wait_blocker);
	}
	wg->task_count += delta;
	if (wg->task_count < 0) {
		v_panic(tos_lit("Negative number of jobs in waitgroup"));
	}
	if (wg->task_count == 0) {
		sync__Waiter_stop(wg->wait_blocker);
	}
// Defer begin
sync__Mutex_unlock(wg->task_count_mutex);
// Defer end
}

void sync__WaitGroup_done(sync__WaitGroup* wg) {
	sync__WaitGroup_add(wg, -1);
}

void sync__WaitGroup_wait(sync__WaitGroup* wg) {
	sync__Waiter_wait(wg->wait_blocker);
	sync__Waiter_stop(wg->wait_blocker);
}

clipboard__Clipboard* clipboard__new() {
	return clipboard__new_clipboard();
}

bool clipboard__Clipboard_copy(clipboard__Clipboard* cb, string text) {
	return clipboard__Clipboard_set_text(cb, text);
}

string clipboard__Clipboard_paste(clipboard__Clipboard* cb) {
	return clipboard__Clipboard_get_text(cb);
}

void clipboard__Clipboard_clear_all(clipboard__Clipboard* cb) {
	clipboard__Clipboard_clear(cb);
}

void clipboard__Clipboard_destroy(clipboard__Clipboard* cb) {
	clipboard__Clipboard_free(cb);
}

bool clipboard__Clipboard_check_ownership(clipboard__Clipboard cb) {
	return clipboard__Clipboard_has_ownership(&cb);
}

bool clipboard__Clipboard_is_available(clipboard__Clipboard* cb) {
	return clipboard__Clipboard_check_availability(cb);
}

static void clipboard__todo_del() {
}

static clipboard__Clipboard* clipboard__new_clipboard() {
	return clipboard__new_x11_clipboard(clipboard__AtomType_clipboard);
}

static clipboard__Clipboard* clipboard__new_x11_clipboard(clipboard__AtomType selection) {
	if (!(selection == clipboard__AtomType_clipboard || selection == clipboard__AtomType_primary || selection == clipboard__AtomType_secondary)) {
		v_panic(tos_lit("Wrong AtomType. Must be one of .primary, .secondary or .clipboard."));
	}
	int status = XInitThreads();
	if (status == 0) {
		println(tos_lit("WARN: this system does not support threads; clipboard will cause the program to lock."));
	}
	Display* display = clipboard__new_display();
	if (display == NULL) {
		println(tos_lit("ERROR: No X Server running. Clipboard cannot be used."));
		return (clipboard__Clipboard*)memdup(&(clipboard__Clipboard){.display = 0,.selection = {0},.window = {0},.atoms = __new_array(0, 1, sizeof(Atom)),.mutex = sync__new_mutex(),.text = (string){.str=(byteptr)""},.got_text = 0,.is_owner = 0,}, sizeof(clipboard__Clipboard));
	}
	clipboard__Clipboard* cb = (clipboard__Clipboard*)memdup(&(clipboard__Clipboard){.display = display,.selection = {0},.window = clipboard__create_xwindow(display),.atoms = __new_array(0, 1, sizeof(Atom)),.mutex = sync__new_mutex(),.text = (string){.str=(byteptr)""},.got_text = 0,.is_owner = 0,}, sizeof(clipboard__Clipboard));
	clipboard__Clipboard_intern_atoms(cb);
	cb->selection = clipboard__Clipboard_get_atom(cb, selection);
	// go
	thread_arg_clipboard__Clipboard_start_listener *arg__t275 = malloc(sizeof(thread_arg_clipboard__Clipboard_start_listener));
	arg__t275->arg0 = cb;
	pthread_t thread__t275;
	pthread_create(&thread__t275, NULL, (void*)clipboard__Clipboard_start_listener_thread_wrapper, arg__t275);
	// endgo

	return cb;
}

static bool clipboard__Clipboard_check_availability(clipboard__Clipboard* cb) {
	return cb->display != NULL;
}

static void clipboard__Clipboard_free(clipboard__Clipboard* cb) {
	XDestroyWindow(cb->display, cb->window);
	cb->window = ((Window)(None));
}

static void clipboard__Clipboard_clear(clipboard__Clipboard* cb) {
	sync__Mutex_m_lock(cb->mutex);
	XSetSelectionOwner(cb->display, cb->selection, ((Window)(None)), CurrentTime);
	XFlush(cb->display);
	cb->is_owner = false;
	cb->text = tos_lit("");
	sync__Mutex_unlock(cb->mutex);
}

static bool clipboard__Clipboard_has_ownership(clipboard__Clipboard* cb) {
	return cb->is_owner;
}

static void clipboard__Clipboard_take_ownership(clipboard__Clipboard* cb) {
	XSetSelectionOwner(cb->display, cb->selection, cb->window, CurrentTime);
	XFlush(cb->display);
}

static bool clipboard__Clipboard_set_text(clipboard__Clipboard* cb, string text) {
	if (cb->window == ((Window)(None))) {
		return false;
	}
	sync__Mutex_m_lock(cb->mutex);
	cb->text = text;
	cb->is_owner = true;
	clipboard__Clipboard_take_ownership(cb);
	XFlush(cb->display);
	sync__Mutex_unlock(cb->mutex);
	time__sleep(1);
	return cb->is_owner;
}

static string clipboard__Clipboard_get_text(clipboard__Clipboard* cb) {
	if (cb->window == ((Window)(None))) {
		return tos_lit("");
	}
	if (cb->is_owner) {
		return cb->text;
	}
	cb->got_text = false;
	XConvertSelection(cb->display, cb->selection, clipboard__Clipboard_get_atom(cb, clipboard__AtomType_targets), cb->selection, cb->window, CurrentTime);
	int retries = 5;
	for (;;) {
		if (cb->got_text || retries == 0) {
			break;
		}
		time__usleep(50000);
		retries--;
	}
	return cb->text;
}

static bool clipboard__Clipboard_transmit_selection(clipboard__Clipboard* cb, XSelectionEvent* xse) {
	if (xse->target == clipboard__Clipboard_get_atom(cb, clipboard__AtomType_targets)) {
		array_C__Atom targets = clipboard__Clipboard_get_supported_targets(cb);
		XChangeProperty(xse->display, xse->requestor, xse->property, clipboard__Clipboard_get_atom(cb, clipboard__AtomType_xa_atom), 32, PropModeReplace, targets.data, targets.len);
	} else if (clipboard__Clipboard_is_supported_target(cb, xse->target) && cb->is_owner && (cb->text).len != 0) {
		sync__Mutex_m_lock(cb->mutex);
		XChangeProperty(xse->display, xse->requestor, xse->property, xse->target, 8, PropModeReplace, cb->text.str, cb->text.len);
		sync__Mutex_unlock(cb->mutex);
	} else {
		return false;
	}
	return true;
}

static void clipboard__Clipboard_start_listener(clipboard__Clipboard* cb) {
	XEvent event = (XEvent){
#ifndef __cplusplus
0
#endif
};
	bool sent_request = false;
	Atom to_be_requested = ((Atom)(0));
	for (;;) {
		XNextEvent(cb->display, &event);
		if (event.type == 0) {
			println(tos_lit("error"));
			continue;
		}
		int _t276 = event.type;
		if (_t276 == DestroyNotify) {
			if (event.xdestroywindow.window == cb->window) {
				return;
			}
		} else if (_t276 == SelectionClear) {
			if (event.xselectionclear.window == cb->window && event.xselectionclear.selection == cb->selection) {
				sync__Mutex_m_lock(cb->mutex);
				cb->is_owner = false;
				cb->text = tos_lit("");
				sync__Mutex_unlock(cb->mutex);
			}
		} else if (_t276 == SelectionRequest) {
			if (event.xselectionrequest.selection == cb->selection) {
				XSelectionRequestEvent* xsre = (XSelectionRequestEvent*)memdup(&(XSelectionRequestEvent){.display = 0,.owner = {0},.requestor = {0},.selection = {0},.target = {0},.property = {0},.time = 0,}, sizeof(XSelectionRequestEvent));
				xsre = &event.xselectionrequest;
				XSelectionEvent xse = (XSelectionEvent){
					.type = SelectionNotify,
					.display = xsre->display,
					.requestor = xsre->requestor,
					.selection = xsre->selection,
					.target = xsre->target,
					.property = xsre->property,
					.time = xsre->time,
				};
				if (!clipboard__Clipboard_transmit_selection(cb, &xse)) {
					xse.property = *clipboard__new_atom(None);
				}
				XSendEvent(cb->display, xse.requestor, 0, PropertyChangeMask, ((voidptr)(&xse)));
				XFlush(cb->display);
			}
		} else if (_t276 == SelectionNotify) {
			if (event.xselection.selection == cb->selection && event.xselection.property != ((Atom)(None))) {
				if (event.xselection.target == clipboard__Clipboard_get_atom(cb, clipboard__AtomType_targets) && !sent_request) {
					sent_request = true;
					clipboard__Property prop = clipboard__read_property(cb->display, cb->window, cb->selection);
					to_be_requested = clipboard__Clipboard_pick_target(cb, prop);
					if (to_be_requested != ((Atom)(0))) {
						XConvertSelection(cb->display, cb->selection, to_be_requested, cb->selection, cb->window, CurrentTime);
					}
				} else if (event.xselection.target == to_be_requested) {
					sent_request = false;
					to_be_requested = ((Atom)(0));
					sync__Mutex_m_lock(cb->mutex);
					clipboard__Property prop = clipboard__read_property(event.xselection.display, event.xselection.requestor, event.xselection.property);
					XDeleteProperty(event.xselection.display, event.xselection.requestor, event.xselection.property);
					if (clipboard__Clipboard_is_supported_target(cb, prop.actual_type)) {
						cb->got_text = true;
						{ // Unsafe block
							cb->text = byteptr_vstring(((byteptr)(prop.data)));
						}
					}
					sync__Mutex_unlock(cb->mutex);
				}
			}
		} else if (_t276 == PropertyNotify) {
		} else {
		};
	}
}

static void clipboard__Clipboard_intern_atoms(clipboard__Clipboard* cb) {
	array_push(&cb->atoms, _MOV((Atom[]){ ((Atom)(4)) }));
	array_push(&cb->atoms, _MOV((Atom[]){ ((Atom)(31)) }));
	// FOR IN array
	array _t279 = _const_clipboard__atom_names;
	for (int i = 0; i < _t279.len; ++i) {
		string name = ((string*)_t279.data)[i];
		int only_if_exists = (i == ((int)(clipboard__AtomType_utf8_string)) ? (1) : (0));
		array_push(&cb->atoms, _MOV((Atom[]){ XInternAtom(cb->display, name.str, only_if_exists) }));
		if (i == ((int)(clipboard__AtomType_utf8_string)) && (*(Atom*)array_get(cb->atoms, i)) == ((Atom)(None))) {
			(*(Atom*)array_get(cb->atoms, i)) = clipboard__Clipboard_get_atom(cb, clipboard__AtomType_xa_string);
		}
	}
}

static clipboard__Property clipboard__read_property(Display* d, Window w, Atom p) {
	Atom actual_type = ((Atom)(0));
	int actual_format = 0;
	u64 nitems = ((u64)(0U));
	u64 bytes_after = ((u64)(0U));
	byteptr ret = ((byteptr)(0));
	int read_bytes = 1024;
	for (;;) {
		if (ret != 0) {
			XFree(ret);
		}
		XGetWindowProperty(d, w, p, 0, read_bytes, 0, AnyPropertyType, &actual_type, &actual_format, &nitems, &bytes_after, &ret);
		read_bytes *= 2;
		if (bytes_after == 0) {
			break;
		}
	}
	return (clipboard__Property){.actual_type = actual_type,.actual_format = actual_format,.nitems = nitems,.data = ret,};
}

static Atom clipboard__Clipboard_pick_target(clipboard__Clipboard* cb, clipboard__Property prop) {
	if ((prop.actual_type != clipboard__Clipboard_get_atom(cb, clipboard__AtomType_xa_atom) && prop.actual_type != clipboard__Clipboard_get_atom(cb, clipboard__AtomType_targets)) || prop.actual_format != 32) {
		return clipboard__Clipboard_get_atom(cb, clipboard__AtomType_xa_string);
	} else {
		Atom* atom_list = ((Atom*)(prop.data));
		Atom to_be_requested = ((Atom)(0));
		int priority = _const_math__max_i32;
		for (int i = 0; i < prop.nitems; ++i) {
			Atom target = atom_list[i];
			if (clipboard__Clipboard_is_supported_target(cb, target)) {
				int index = clipboard__Clipboard_get_target_index(cb, target);
				if (priority > index && index >= 0) {
					priority = index;
					to_be_requested = target;
				}
			}
		}
		return to_be_requested;
	}
	return (Atom){0};
}

static array_C__Atom clipboard__Clipboard_get_atoms(clipboard__Clipboard* cb, varg_clipboard__AtomType types) {
	array_C__Atom atoms = __new_array_with_default(0, 0, sizeof(Atom), 0);
	// FOR IN cond_type/variadic
	for (int _t281 = 0; _t281 < types.len; ++_t281) {
		clipboard__AtomType typ = types.args[_t281];
		array_push(&atoms, _MOV((Atom[]){ (*(Atom*)array_get(cb->atoms, typ)) }));
	}
	return atoms;
}

static Atom clipboard__Clipboard_get_atom(clipboard__Clipboard* cb, clipboard__AtomType typ) {
	return (*(Atom*)array_get(cb->atoms, typ));
}

static bool clipboard__Clipboard_is_supported_target(clipboard__Clipboard* cb, Atom target) {
	return clipboard__Clipboard_get_target_index(cb, target) >= 0;
}

static int clipboard__Clipboard_get_target_index(clipboard__Clipboard* cb, Atom target) {
	// FOR IN array
	array _t283 = clipboard__Clipboard_get_supported_targets(cb);
	for (int i = 0; i < _t283.len; ++i) {
		Atom atom = ((Atom*)_t283.data)[i];
		if (atom == target) {
			return i;
		}
	}
	return -1;
}

static array_C__Atom clipboard__Clipboard_get_supported_targets(clipboard__Clipboard* cb) {
	return clipboard__Clipboard_get_atoms(cb, (varg_clipboard__AtomType){.len=5,.args={clipboard__AtomType_utf8_string, clipboard__AtomType_xa_string, clipboard__AtomType_text, clipboard__AtomType_text_plain, clipboard__AtomType_text_html}});
}

static Atom* clipboard__new_atom(int value) {
	Atom* atom = (Atom*)memdup(&(Atom){
#ifndef __cplusplus
0
#endif
}, sizeof(Atom));
	atom = value;
	return atom;
}

static Window clipboard__create_xwindow(Display* display) {
	int n = DefaultScreen(display);
	return XCreateSimpleWindow(display, RootWindow(display, n), 0, 0, 1, 1, 0, BlackPixel(display, n), WhitePixel(display, n));
}

static Display* clipboard__new_display() {
	return XOpenDisplay(NULL);
}

clipboard__Clipboard* clipboard__new_primary() {
	return clipboard__new_x11_clipboard(clipboard__AtomType_primary);
}

// TypeDecl
static void ui__Button_init(ui__Button* b, ui__Layout parent) {
	b->parent = parent;
	ui__UI* ui = ui__Layout_name_table[parent._interface_idx].get_ui(parent._object);
	b->ui = ui;
	if (b->use_icon) {
		b->image = gg__Context_create_image(b->ui->gg, b->icon_path);
	}
	eventbus__Subscriber* subscriber = ui__Layout_name_table[parent._interface_idx].get_subscriber(parent._object);
	eventbus__Subscriber_subscribe_method(subscriber, _const_ui__events.on_click, ui__btn_click, b);
}

ui__Button* ui__button(ui__ButtonConfig c) {
	ui__Button* b = (ui__Button*)memdup(&(ui__Button){.text_width = 0,
		.text_height = 0,
		.state = 0,
		.height = c.height,
		.width = c.width,
		.x = 0,
		.y = 0,
		.parent = {0},
		.is_focused = 0,
		.ui = 0,
		.onclick = c.onclick,
		.text = c.text,
		.icon_path = c.icon_path,
		.image = {0},
		.use_icon = (c.icon_path).len != 0,
	}, sizeof(ui__Button));
	if (b->use_icon && !os__exists(c.icon_path)) {
		println(_STR("Invalid icon path \"%.*s\000\". The alternate text will be used.", 2, c.icon_path));
		b->use_icon = false;
	}
	return b;
}

static void ui__btn_click(ui__Button* b, ui__MouseEvent* e, ui__Window* window) {
	if (ui__Button_point_inside(b, e->x, e->y)) {
		if (e->action == ui__MouseAction_down) {
			b->state = ui__ButtonState_pressed;
		} else if (e->action == 0) {
			b->state = ui__ButtonState_normal;
			if (b->onclick != ((voidptr)(0))) {
				b->onclick(window->state, b);
			}
		}
	}
}

static void ui__Button_set_pos(ui__Button* b, int x, int y) {
	b->x = x;
	b->y = y;
}

static multi_return_int_int ui__Button_size(ui__Button* b) {
	return (multi_return_int_int){.arg0=b->width, .arg1=b->height};
}

static multi_return_int_int ui__Button_propose_size(ui__Button* b, int w, int h) {
	return (multi_return_int_int){.arg0=b->width, .arg1=b->height};
}

static void ui__Button_draw(ui__Button* b) {
	if (b->use_icon) {
		b->width = b->image.width;
		b->height = b->image.height;
	} else if (b->text_width == 0 || b->text_height == 0) {
		multi_return_int_int mr_2532 = gg__Context_text_size(b->ui->gg, b->text);
		b->text_width = mr_2532.arg0;
		b->text_height = mr_2532.arg1;
		b->width = b->text_width + _const_ui__button_horizontal_padding;
		b->height = b->text_height + _const_ui__button_vertical_padding;
	}
	int w2 = b->text_width / 2;
	int h2 = b->text_height / 2;
	int bcenter_x = b->x + b->width / 2;
	int bcenter_y = b->y + b->height / 2;
	gx__Color bg_color = (b->state == ui__ButtonState_normal ? (_const_gx__white) : (_const_ui__progress_bar_background_color));
	gg__Context_draw_rect(b->ui->gg, b->x, b->y, b->width, b->height, bg_color);
	gg__Context_draw_empty_rect(b->ui->gg, b->x, b->y, b->width, b->height, _const_ui__button_border_color);
	int y = bcenter_y - h2 - 1;
	#if defined(__APPLE__)
	{
	}
	#endif
	if (b->use_icon) {
		gg__Context_draw_image(b->ui->gg, b->x, b->y, b->width, b->height, (voidptr)&/*qq*/b->image);
	} else {
		gg__Context_draw_text(b->ui->gg, bcenter_x - w2, y, b->text, _const_ui__btn_text_cfg);
	}
}

static bool ui__Button_point_inside(ui__Button* b, f64 x, f64 y) {
	return x >= b->x && x <= b->x + b->width && y >= b->y && y <= b->y + b->height;
}

static void ui__Button_focus(ui__Button* b) {
	b->is_focused = true;
}

static void ui__Button_unfocus(ui__Button* b) {
	b->is_focused = false;
	b->state = ui__ButtonState_normal;
}

static bool ui__Button_is_focused(ui__Button* b) {
	return b->is_focused;
}

static void ui__Canvas_init(ui__Canvas* c, ui__Layout parent) {
	c->parent = parent;
	c->gg = ui__Layout_name_table[parent._interface_idx].get_ui(parent._object)->gg;
}

ui__Canvas* ui__canvas(ui__CanvasConfig c) {
	ui__Canvas* canvas = (ui__Canvas*)memdup(&(ui__Canvas){.width = c.width,.height = c.height,.x = 0,.y = 0,.parent = {0},.draw_fn = c.draw_fn,.gg = 0,}, sizeof(ui__Canvas));
	return canvas;
}

static void ui__Canvas_set_pos(ui__Canvas* c, int x, int y) {
	c->x = x;
	c->y = y;
}

static multi_return_int_int ui__Canvas_size(ui__Canvas* c) {
	return (multi_return_int_int){.arg0=c->width, .arg1=c->height};
}

static multi_return_int_int ui__Canvas_propose_size(ui__Canvas* c, int w, int h) {
	if (c->width == 0) {
		c->width = w;
	}
	return (multi_return_int_int){.arg0=c->width, .arg1=c->height};
}

static void ui__Canvas_draw(ui__Canvas* c) {
	ui__Layout parent = c->parent;
	voidptr state = ui__Layout_name_table[parent._interface_idx].get_state(parent._object);
	if (c->draw_fn != ((voidptr)(0))) {
		c->draw_fn(c->gg, state);
	}
}

static void ui__Canvas_focus(ui__Canvas* c) {
}

static bool ui__Canvas_is_focused(ui__Canvas* c) {
	return false;
}

static void ui__Canvas_unfocus(ui__Canvas* c) {
}

static bool ui__Canvas_point_inside(ui__Canvas* c, f64 x, f64 y) {
	return false;
}

// TypeDecl
static void ui__CheckBox_init(ui__CheckBox* cb, ui__Layout parent) {
	cb->parent = parent;
	ui__UI* ui = ui__Layout_name_table[parent._interface_idx].get_ui(parent._object);
	cb->ui = ui;
	cb->width = gg__Context_text_width(cb->ui->gg, cb->text) + 5 + _const_ui__check_mark_size;
	eventbus__Subscriber* subscriber = ui__Layout_name_table[parent._interface_idx].get_subscriber(parent._object);
	eventbus__Subscriber_subscribe_method(subscriber, _const_ui__events.on_click, ui__cb_click, cb);
}

ui__CheckBox* ui__checkbox(ui__CheckBoxConfig c) {
	ui__CheckBox* cb = (ui__CheckBox*)memdup(&(ui__CheckBox){.height = 20,
		.width = 0,
		.x = 0,
		.y = 0,
		.parent = {0},
		.is_focused = 0,
		.checked = c.checked,
		.ui = 0,
		.on_check_changed = c.on_check_changed,
		.text = c.text,
		.disabled = c.disabled,
	}, sizeof(ui__CheckBox));
	return cb;
}

static void ui__cb_click(ui__CheckBox* cb, ui__MouseEvent* e, ui__Window* window) {
	if (ui__CheckBox_point_inside(cb, e->x, e->y)) {
		cb->checked = !cb->checked;
		if (cb->on_check_changed != ((voidptr)(0))) {
			cb->on_check_changed(window->state, cb->checked);
		}
	}
}

static void ui__CheckBox_set_pos(ui__CheckBox* cb, int x, int y) {
	cb->x = x;
	cb->y = y;
}

static multi_return_int_int ui__CheckBox_size(ui__CheckBox* cb) {
	return (multi_return_int_int){.arg0=cb->width, .arg1=cb->height};
}

static multi_return_int_int ui__CheckBox_propose_size(ui__CheckBox* cb, int w, int h) {
	return (multi_return_int_int){.arg0=cb->width, .arg1=_const_ui__check_mark_size};
}

static void ui__CheckBox_draw(ui__CheckBox* cb) {
	gg__Context_draw_rect(cb->ui->gg, cb->x, cb->y, _const_ui__check_mark_size, _const_ui__check_mark_size, _const_gx__white);
	ui__draw_inner_border(false, cb->ui->gg, cb->x, cb->y, _const_ui__check_mark_size, _const_ui__check_mark_size, false);
	if (cb->checked) {
		gg__Context_draw_rect(cb->ui->gg, cb->x + 3, cb->y + 3, 2, 2, _const_gx__black);
		gg__Context_draw_image(cb->ui->gg, cb->x + 3, cb->y + 3, 8, 8, (voidptr)&/*qq*/cb->ui->cb_image);
	}
	gg__Context_draw_text(cb->ui->gg, cb->x + _const_ui__check_mark_size + 5, cb->y, cb->text, _const_ui__btn_text_cfg);
}

static bool ui__CheckBox_point_inside(ui__CheckBox* cb, f64 x, f64 y) {
	return x >= cb->x && x <= cb->x + cb->width && y >= cb->y && y <= cb->y + cb->height;
}

static void ui__CheckBox_mouse_move(ui__CheckBox* cb, ui__MouseEvent e) {
}

static void ui__CheckBox_focus(ui__CheckBox* cb) {
	cb->is_focused = true;
}

static void ui__CheckBox_unfocus(ui__CheckBox* cb) {
	cb->is_focused = false;
}

static bool ui__CheckBox_is_focused(ui__CheckBox* cb) {
	return cb->is_focused;
}

ui__Stack* ui__column(ui__ColumnConfig c, array_ui__Widget children) {
	return ui__stack((ui__StackConfig){
		.width = c.width,
		.height = 0,
		.vertical_alignment = 0,
		.horizontal_alignment = c.alignment,
		.spacing = c.spacing,
		.stretch = c.stretch,
		.direction = ui__Direction_column,
		.margin = c.margin,
	}, children);
}

// TypeDecl
static void ui__Dropdown_init(ui__Dropdown* dd, ui__Layout parent) {
	dd->parent = parent;
	ui__UI* ui = ui__Layout_name_table[parent._interface_idx].get_ui(parent._object);
	dd->ui = ui;
	eventbus__Subscriber* subscriber = ui__Layout_name_table[parent._interface_idx].get_subscriber(parent._object);
	eventbus__Subscriber_subscribe_method(subscriber, _const_ui__events.on_click, ui__dd_click, dd);
	eventbus__Subscriber_subscribe_method(subscriber, _const_ui__events.on_key_down, ui__dd_key_down, dd);
	eventbus__Subscriber_subscribe_method(subscriber, _const_ui__events.on_mouse_move, ui__dd_mouse_move, dd);
}

ui__Dropdown* ui__dropdown(ui__DropdownConfig c, array_ui__DropdownItem items) {
	ui__Dropdown* dd = (ui__Dropdown*)memdup(&(ui__Dropdown){.def_text = c.def_text,
		.width = c.width,
		.parent = {0},
		.x = 0,
		.y = 0,
		.ui = 0,
		.items = items,
		.open = 0,
		.selected_index = c.selected_index,
		.hover_index = 0,
		.is_focused = 0,
		.on_selection_changed = c.on_selection_changed,
	}, sizeof(ui__Dropdown));
	return dd;
}

static void ui__Dropdown_set_pos(ui__Dropdown* dd, int x, int y) {
	dd->x = x;
	dd->y = y;
}

static multi_return_int_int ui__Dropdown_size(ui__Dropdown* dd) {
	return (multi_return_int_int){.arg0=dd->width, .arg1=_const_ui__dropdown_height};
}

static multi_return_int_int ui__Dropdown_propose_size(ui__Dropdown* dd, int w, int h) {
	dd->width = w;
	return (multi_return_int_int){.arg0=w, .arg1=_const_ui__dropdown_height};
}

static void ui__Dropdown_draw(ui__Dropdown* dd) {
	gg__Context* gg = dd->ui->gg;
	gg__Context_draw_rect(gg, dd->x, dd->y, dd->width, _const_ui__dropdown_height, _const_ui__dropdown_color);
	gg__Context_draw_empty_rect(gg, dd->x, dd->y, dd->width, _const_ui__dropdown_height, _const_ui__border_color);
	if (dd->selected_index >= 0) {
		gg__Context_draw_text_def(gg, dd->x + 5, dd->y + 5, (*(ui__DropdownItem*)array_get(dd->items, dd->selected_index)).text);
	} else {
		gg__Context_draw_text_def(gg, dd->x + 5, dd->y + 5, dd->def_text);
	}
	if (dd->open) {
		gg__Context_draw_rect(gg, dd->x, dd->y + _const_ui__dropdown_height, dd->width, dd->items.len * _const_ui__dropdown_height, _const_ui__drawer_color);
		gg__Context_draw_empty_rect(gg, dd->x, dd->y + _const_ui__dropdown_height, dd->width, dd->items.len * _const_ui__dropdown_height, _const_ui__border_color);
		int y = dd->y + _const_ui__dropdown_height;
		// FOR IN array
		array _t284 = dd->items;
		for (int i = 0; i < _t284.len; ++i) {
			ui__DropdownItem item = ((ui__DropdownItem*)_t284.data)[i];
			gx__Color color = (i == dd->hover_index ? (_const_ui__border_color) : (_const_ui__drawer_color));
			gg__Context_draw_rect(gg, dd->x, y + i * _const_ui__dropdown_height, dd->width, _const_ui__dropdown_height, color);
			gg__Context_draw_empty_rect(gg, dd->x, y + i * _const_ui__dropdown_height, dd->width, _const_ui__dropdown_height, _const_ui__border_color);
			gg__Context_draw_text_def(gg, dd->x + 5, y + i * _const_ui__dropdown_height + 5, item.text);
		}
	}
	gg__Context_draw_image(gg, dd->x + (dd->width - 28), dd->y - 3, 28, 28, (voidptr)&/*qq*/dd->ui->down_arrow);
}

void ui__Dropdown_add_item(ui__Dropdown* dd, string text) {
	array_push(&dd->items, _MOV((ui__DropdownItem[]){ (ui__DropdownItem){.text = text,} }));
}

static void ui__dd_key_down(ui__Dropdown* dd, ui__KeyEvent* e, voidptr zzz) {
	if (dd->hover_index < 0) {
		dd->hover_index = 0;
		return;
	}
	ui__Key _t286 = e->key;
	if (_t286 == ui__Key_down) {
		if (!dd->open) {
			ui__Dropdown_open_drawer(dd);
			return;
		}
		if (dd->hover_index < dd->items.len - 1) {
			dd->hover_index++;
		}
	} else if (_t286 == ui__Key_escape) {
		ui__Dropdown_unfocus(dd);
	} else if (_t286 == ui__Key_up) {
		if (dd->hover_index > 0) {
			dd->hover_index--;
		}
	} else if (_t286 == ui__Key_enter) {
		dd->selected_index = dd->hover_index;
		ui__Dropdown_unfocus(dd);
	} else {
	};
}

static void ui__dd_click(ui__Dropdown* dd, ui__MouseEvent* e, voidptr zzz) {
	if (!ui__Dropdown_point_inside(dd, e->x, e->y) || e->action == 1) {
		return;
	}
	if (e->y >= dd->y && e->y <= dd->y + _const_ui__dropdown_height && e->x >= dd->x && e->x <= dd->x + dd->width) {
		ui__Dropdown_open_drawer(dd);
	} else if (dd->open) {
		int th = dd->y + (dd->items.len * _const_ui__dropdown_height);
		int index = ((e->y * dd->items.len) / th) - 1;
		dd->selected_index = index;
		if (dd->on_selection_changed != ((voidptr)(0))) {
			ui__Layout parent = dd->parent;
			voidptr state = ui__Layout_name_table[parent._interface_idx].get_state(parent._object);
			dd->on_selection_changed(state, dd);
		}
		ui__Dropdown_unfocus(dd);
	}
}

static void ui__dd_mouse_move(ui__Dropdown* dd, ui__MouseEvent* e, voidptr zzz) {
	if (dd->open) {
		int th = dd->y + (dd->items.len * _const_ui__dropdown_height);
		int index = ((e->y * dd->items.len) / th) - 1;
		dd->hover_index = index;
	}
}

static void ui__Dropdown_focus(ui__Dropdown* dd) {
	dd->is_focused = true;
}

static void ui__Dropdown_open_drawer(ui__Dropdown* dd) {
	dd->open = !dd->open;
	if (!dd->open) {
		dd->hover_index = dd->selected_index;
	}
	ui__Dropdown_focus(dd);
}

static bool ui__Dropdown_is_focused(ui__Dropdown* dd) {
	return dd->is_focused;
}

static void ui__Dropdown_unfocus(ui__Dropdown* dd) {
	dd->open = false;
	dd->is_focused = false;
}

static bool ui__Dropdown_point_inside(ui__Dropdown* dd, f64 x, f64 y) {
	return y >= dd->y && y <= dd->y + (dd->items.len * _const_ui__dropdown_height) + _const_ui__dropdown_height && x >= dd->x && x <= dd->x + dd->width;
}

// TypeDecl
static f64 ui__linear(f64 x) {
	return x;
}

static f64 ui__ease_in_quad(f64 x) {
	return x * x;
}

static f64 ui__ease_out_quad(f64 x) {
	return x * (2.0 - x);
}

static f64 ui__ease_in_out_quad(f64 x) {
	return (x < .5 ? (2.0 * x * x) : (-1.0 + (4.0 - 2.0 * x) * x));
}

static f64 ui__ease_in_cubic(f64 x) {
	return x * x * x;
}

static f64 ui__ease_out_cubic(f64 x) {
	return (x - 1.0) * (x - 1.0) * (x - 1.0) + 1;
}

static f64 ui__ease_in_out_cubic(f64 x) {
	return (x < .5 ? (4.0 * x * x * x) : ((x - 1.0) * (2.0 * x - 2.0) * (2.0 * x - 2.0) + 1.0));
}

static f64 ui__ease_in_quart(f64 x) {
	return x * x * x * x;
}

static f64 ui__ease_out_quart(f64 x) {
	return 1.0 - (x - 1.0) * (x - 1.0) * (x - 1.0) * (x - 1.0);
}

static f64 ui__ease_in_out_quart(f64 x) {
	return (x < 0.5 ? (8.0 * x * x * x * x) : (1.0 - 8.0 * (x - 1.0) * (x - 1.0) * (x - 1.0) * (x - 1.0)));
}

static f64 ui__ease_in_quint(f64 x) {
	return x * x * x * x * x;
}

static f64 ui__ease_out_quint(f64 x) {
	return 1.0 + (x - 1.0) * (x - 1.0) * (x - 1.0) * (x - 1.0) * (x - 1.0);
}

static f64 ui__ease_in_out_quint(f64 x) {
	return (x < 0.5 ? (16.0 * x * x * x * x * x) : (1.0 + 16.0 * (x - 1.0) * (x - 1.0) * (x - 1.0) * (x - 1.0) * (x - 1.0)));
}

ui__EasingFunction ui__easing(ui__EasingType easingtype) {
	ui__EasingType _t287 = easingtype;
	if (_t287 == ui__EasingType_linear) {
		return ui__linear;
	} else if (_t287 == ui__EasingType_ease_in_quad) {
		return ui__ease_in_quad;
	} else if (_t287 == ui__EasingType_ease_out_quad) {
		return ui__ease_out_quad;
	} else if (_t287 == ui__EasingType_ease_in_out_quad) {
		return ui__ease_in_out_quad;
	} else if (_t287 == ui__EasingType_ease_in_cubic) {
		return ui__ease_in_cubic;
	} else if (_t287 == ui__EasingType_ease_out_cubic) {
		return ui__ease_out_cubic;
	} else if (_t287 == ui__EasingType_ease_in_out_cubic) {
		return ui__ease_in_out_cubic;
	} else if (_t287 == ui__EasingType_ease_in_quart) {
		return ui__ease_in_quart;
	} else if (_t287 == ui__EasingType_ease_out_quart) {
		return ui__ease_out_quart;
	} else if (_t287 == ui__EasingType_ease_in_out_quart) {
		return ui__ease_in_out_quart;
	} else if (_t287 == ui__EasingType_ease_in_quint) {
		return ui__ease_in_quint;
	} else if (_t287 == ui__EasingType_ease_out_quint) {
		return ui__ease_out_quint;
	} else if (_t287 == ui__EasingType_ease_in_out_quint) {
		return ui__ease_in_out_quint;
	};
	return 0;
}

static void ui__Group_init(ui__Group* g, ui__Layout parent) {
	g->parent = parent;
	ui__UI* ui = ui__Layout_name_table[parent._interface_idx].get_ui(parent._object);
	g->ui = ui;
	// FOR IN array
	array _t288 = g->children;
	for (int _t289 = 0; _t289 < _t288.len; ++_t289) {
		ui__Widget child = ((ui__Widget*)_t288.data)[_t289];
		ui__Widget_name_table[child._interface_idx].init(child._object, I_ui__Group_to_Interface_ui__Layout(g));
	}
	ui__Group_calculate_child_positions(g);
}

ui__Group* ui__group(ui__GroupConfig c, array_ui__Widget children) {
	ui__Group* g = (ui__Group*)memdup(&(ui__Group){.title = c.title,
		.height = c.height,
		.width = c.width,
		.x = c.x,
		.y = c.y,
		.parent = {0},
		.ui = 0,
		.children = children,
		.margin_left = 5,
		.margin_top = 10,
		.margin_right = 5,
		.margin_bottom = 5,
		.spacing = 5,
	}, sizeof(ui__Group));
	return g;
}

static void ui__Group_set_pos(ui__Group* g, int x, int y) {
	g->x = x;
	g->y = y;
	ui__Group_calculate_child_positions(g);
}

static void ui__Group_calculate_child_positions(ui__Group* g) {
	array_ui__Widget widgets = g->children;
	int start_x = g->x + g->margin_left;
	int start_y = g->y + g->margin_top;
	// FOR IN array
	array _t290 = widgets;
	for (int _t291 = 0; _t291 < _t290.len; ++_t291) {
		ui__Widget widget = ((ui__Widget*)_t290.data)[_t291];
		multi_return_int_int mr_1268 = ui__Widget_name_table[widget._interface_idx].size(widget._object);
		int wid_w = mr_1268.arg0;
		int wid_h = mr_1268.arg1;
		ui__Widget_name_table[widget._interface_idx].set_pos(widget._object, start_x, start_y);
		start_y = start_y + wid_h + g->spacing;
		if (wid_w > g->width - g->margin_left - g->margin_right) {
			g->width = wid_w + g->margin_left + g->margin_right;
		}
		if (start_y + g->margin_bottom > g->height) {
			g->height = start_y - wid_h;
		}
	}
}

static multi_return_int_int ui__Group_propose_size(ui__Group* g, int w, int h) {
	g->width = w;
	g->height = h;
	return (multi_return_int_int){.arg0=g->width, .arg1=g->height};
}

static void ui__Group_draw(ui__Group* g) {
	gg__Context_draw_empty_rect(g->ui->gg, g->x, g->y, g->width, g->height, _const_gx__gray);
	string title = g->title;
	int text_width = gg__Context_text_width(g->ui->gg, title);
	if (text_width > (g->width - _const_ui__check_mark_size - 3)) {
		f32 proportion = ((f32)(g->width)) / ((f32)(text_width));
		int target_len = ((int)(math__floor(title.len * proportion))) - 5;
		title = (target_len < 0 ? (tos_lit("")) : (string_add(string_substr(title, 0, target_len), tos_lit(".."))));
		text_width = gg__Context_text_width(g->ui->gg, title);
	}
	gg__Context_draw_rect(g->ui->gg, g->x + _const_ui__check_mark_size, g->y - 5, text_width + 5, 10, g->ui->window->bg_color);
	gg__Context_draw_text_def(g->ui->gg, g->x + _const_ui__check_mark_size + 3, g->y - 7, title);
	// FOR IN array
	array _t292 = g->children;
	for (int _t293 = 0; _t293 < _t292.len; ++_t293) {
		ui__Widget child = ((ui__Widget*)_t292.data)[_t293];
		ui__Widget_name_table[child._interface_idx].draw(child._object);
	}
}

static bool ui__Group_point_inside(ui__Group* g, f64 x, f64 y) {
	return x >= g->x && x <= g->x + g->width && y >= g->y && y <= g->y + g->height;
}

static void ui__Group_focus(ui__Group* g) {
}

static void ui__Group_unfocus(ui__Group* g) {
}

static bool ui__Group_is_focused(ui__Group* g) {
	return false;
}

static ui__UI* ui__Group_get_ui(ui__Group* g) {
	return g->ui;
}

static void ui__Group_unfocus_all(ui__Group* g) {
	// FOR IN array
	array _t294 = g->children;
	for (int _t295 = 0; _t295 < _t294.len; ++_t295) {
		ui__Widget child = ((ui__Widget*)_t294.data)[_t295];
		ui__Widget_name_table[child._interface_idx].unfocus(child._object);
	}
}

static void ui__Group_resize(ui__Group* g, int width, int height) {
}

static voidptr ui__Group_get_state(ui__Group* g) {
	ui__Layout parent = g->parent;
	return ui__Layout_name_table[parent._interface_idx].get_state(parent._object);
}

static eventbus__Subscriber* ui__Group_get_subscriber(ui__Group* g) {
	ui__Layout parent = g->parent;
	return ui__Layout_name_table[parent._interface_idx].get_subscriber(parent._object);
}

static multi_return_int_int ui__Group_size(ui__Group* g) {
	return (multi_return_int_int){.arg0=g->width, .arg1=g->height};
}

static void ui__Label_init(ui__Label* l, ui__Layout parent) {
	ui__UI* ui = ui__Layout_name_table[parent._interface_idx].get_ui(parent._object);
	l->ui = ui;
}

ui__Label* ui__label(ui__LabelConfig c) {
	ui__Label* lbl = (ui__Label*)memdup(&(ui__Label){.text = c.text,.parent = {0},.x = 0,.y = 0,.ui = 0,}, sizeof(ui__Label));
	return lbl;
}

static void ui__Label_set_pos(ui__Label* l, int x, int y) {
	l->x = x;
	l->y = y;
}

static multi_return_int_int ui__Label_size(ui__Label* l) {
	multi_return_int_int mr_595 = gg__Context_text_size(l->ui->gg, l->text);
	int w = mr_595.arg0;
	int h = mr_595.arg1;
	return (multi_return_int_int){.arg0=w, .arg1=h * string_split(l->text, tos_lit("\n")).len};
}

static multi_return_int_int ui__Label_propose_size(ui__Label* l, int w, int h) {
	multi_return_int_int mr_800 = gg__Context_text_size(l->ui->gg, l->text);
	int ww = mr_800.arg0;
	int hh = mr_800.arg1;
	return (multi_return_int_int){.arg0=ww, .arg1=hh * string_split(l->text, tos_lit("\n")).len};
}

static void ui__Label_draw(ui__Label* l) {
	array_string splits = string_split(l->text, tos_lit("\n"));
	int height = gg__Context_text_height(l->ui->gg, tos_lit("W"));
	// FOR IN array
	array _t296 = splits;
	for (int i = 0; i < _t296.len; ++i) {
		string split = ((string*)_t296.data)[i];
		gg__Context_draw_text(l->ui->gg, l->x, l->y + (height * i), split, _const_ui__btn_text_cfg);
	}
}

static void ui__Label_focus(ui__Label* l) {
}

static bool ui__Label_is_focused(ui__Label* l) {
	return false;
}

static void ui__Label_unfocus(ui__Label* l) {
}

static bool ui__Label_point_inside(ui__Label* l, f64 x, f64 y) {
	return false;
}

void ui__Label_set_text(ui__Label* l, string s) {
	l->text = s;
}

// TypeDecl
ui__ListBox* ui__listbox(ui__ListBoxConfig c, map_string_string items) {
	ui__ListBox* list = (ui__ListBox*)memdup(&(ui__ListBox){.height = c.height,
		.width = c.width,
		.x = (c.draw_lines ? (c.x) : (c.x - 1)),
		.y = (c.draw_lines ? (c.y) : (c.y - 1)),
		.parent = {0},
		.ui = 0,
		.items = __new_array(0, 1, sizeof(ui__ListItem)),
		.selection = -1,
		.draw_count = 0,
		.clbk = c.callback,
		.focused = 0,
		.draw_lines = c.draw_lines,
		.col_bkgrnd = c.col_bkgrnd,
		.col_selected = c.col_selected,
		.col_border = c.col_border,
		.item_height = c.item_height,
		.text_offset_y = c.text_offset_y,
		.id = c.id,
	}, sizeof(ui__ListBox));
	// FOR IN map
	map_string_string _t299 = items;
	array_string keys__t297 = map_keys(&_t299);
	for (int _t298 = 0; _t298 < keys__t297.len; ++_t298) {
		string id = /*kkkk*/ string_clone( ((string*)keys__t297.data)[_t298] );
		string text = (*(string*)map_get(_t299, id, &(string[]){ (string){.str=(byteptr)""} }));
		ui__ListBox_append_item(list, id, text, 0);
	}
	/*for in map cleanup*/
	for (int _t298 = 0; _t298 < keys__t297.len; ++_t298) { string_free(&((string*)keys__t297.data)[_t298]); }
	array_free(&keys__t297);
	return list;
}

void ui__ListBox_add_item(ui__ListBox* list, string id, string text) {
	ui__ListBox_append_item(list, id, text, ui__ListBox_get_draw_to(list, text));
}

static int ui__ListBox_get_draw_to(ui__ListBox* lb, string text) {
	int width = gg__Context_text_width(lb->ui->gg, text);
	int real_w = lb->width - _const_ui___text_offset_x * 2;
	int draw_to = text.len;
	if (width >= real_w) {
		draw_to = ((int)(((f32)(text.len)) * (((f32)(real_w)) / ((f32)(width)))));
		for (;;) {
			if (!(draw_to > 1 && gg__Context_text_width(lb->ui->gg, string_substr(text, 0, draw_to)) > real_w)) break;
			draw_to--;
		}
	}
	return draw_to;
}

static void ui__ListBox_append_item(ui__ListBox* lb, string id, string text, int draw_to) {
	array_push(&lb->items, _MOV((ui__ListItem[]){ (ui__ListItem){
		.x = lb->x,
		.id = id,
		.list = lb,
		.y = lb->y + lb->item_height * lb->items.len,
		.text = text,
		.draw_text = string_substr(text, 0, draw_to),
	} }));
}

bool ui__ListBox_is_selected(ui__ListBox* lb) {
	if (lb->selection < 0 || lb->selection >= lb->items.len) {
		return false;
	}
	return true;
}

Option_multi_return_string_string ui__ListBox_selected(ui__ListBox* lb) {
	if (!ui__ListBox_is_selected(lb)) {
		Option _t301 = v_error(tos_lit("Nothing is selected"));
		return *(Option_multi_return_string_string*)&_t301;
	}
	Option_multi_return_string_string _t302;
	opt_ok2(&(multi_return_string_string/*X*/[]) { (multi_return_string_string){.arg0=(*(ui__ListItem*)array_get(lb->items, lb->selection)).id, .arg1=(*(ui__ListItem*)array_get(lb->items, lb->selection)).text} }, (OptionBase*)(&_t302), sizeof(multi_return_string_string));
	return _t302;
}

Option_int ui__ListBox_selected_inx(ui__ListBox* lb) {
	if (!ui__ListBox_is_selected(lb)) {
		Option _t303 = v_error(tos_lit("Nothing is selected"));
		return *(Option_int*)&_t303;
	}
	Option_int _t304;
	opt_ok2(&(int[]) { lb->selection }, (OptionBase*)(&_t304), sizeof(int));
	return _t304;
}

void ui__ListBox_set_text(ui__ListBox* lb, string id, string text) {
	for (int i = 0; i < lb->items.len; ++i) {
		if (string_eq((*(ui__ListItem*)array_get(lb->items, i)).id, id)) {
			(*(ui__ListItem*)array_get(lb->items, i)).text = text;
			(*(ui__ListItem*)array_get(lb->items, i)).draw_text = string_substr(text, 0, ui__ListBox_get_draw_to(lb, text));
			break;
		}
	}
}

void ui__ListBox_remove_item(ui__ListBox* lb, string id) {
	for (int i = 0; i < lb->items.len; ++i) {
		if (string_eq((*(ui__ListItem*)array_get(lb->items, i)).id, id)) {
			ui__ListBox_remove_inx(lb, i);
			break;
		}
	}
}

void ui__ListBox_remove_inx(ui__ListBox* lb, int i) {
	if (i < 0 || i >= lb->items.len) {
		return;
	}
	for (int j = (i + 1); j < lb->items.len; ++j) {
		(*(ui__ListItem*)array_get(lb->items, j)).y -= lb->item_height;
	}
	array_delete(&lb->items, i);
}

void ui__ListBox_clear(ui__ListBox* lb) {
	array_clear(&lb->items);
	lb->selection = -1;
}

static void ui__ListBox_draw_item(ui__ListBox* lb, ui__ListItem li, bool selected) {
	gx__Color col = (selected ? (lb->col_selected) : (lb->col_bkgrnd));
	gg__Context_draw_rect(lb->ui->gg, li.x, li.y, lb->width, lb->item_height, col);
	gg__Context_draw_text_def(lb->ui->gg, li.x + _const_ui___text_offset_x, li.y + lb->text_offset_y, li.draw_text);
	if (lb->draw_lines) {
		gg__Context_draw_empty_rect(lb->ui->gg, li.x, li.y, lb->width, lb->item_height, lb->col_border);
	}
}

static void ui__ListBox_init(ui__ListBox* lb, ui__Layout parent) {
	lb->parent = parent;
	lb->ui = ui__Layout_name_table[parent._interface_idx].get_ui(parent._object);
	lb->draw_count = lb->height / lb->item_height;
	lb->text_offset_y = (lb->item_height - gg__Context_text_height(lb->ui->gg, tos_lit("W"))) / 2;
	if (lb->text_offset_y < 0) {
		lb->text_offset_y = 0;
	}
	// FOR IN array
	array _t305 = lb->items;
	for (int i = 0; i < _t305.len; ++i) {
		ui__ListItem item = ((ui__ListItem*)_t305.data)[i];
		(*(ui__ListItem*)array_get(lb->items, i)).draw_text = string_substr(item.text, 0, ui__ListBox_get_draw_to(lb, item.text));
	}
	eventbus__Subscriber* subscriber = ui__Layout_name_table[parent._interface_idx].get_subscriber(parent._object);
	eventbus__Subscriber_subscribe_method(subscriber, _const_ui__events.on_click, ui__on_click, lb);
	eventbus__Subscriber_subscribe_method(subscriber, _const_ui__events.on_key_up, ui__on_key_up, lb);
}

static void ui__ListBox_draw(ui__ListBox* lb) {
	gg__Context_draw_rect(lb->ui->gg, lb->x, lb->y, lb->width, lb->height, lb->col_bkgrnd);
	if (!lb->draw_lines) {
		gg__Context_draw_empty_rect(lb->ui->gg, lb->x, lb->y, lb->width + 1, lb->height + 1, lb->col_border);
	}
	// FOR IN array
	array _t306 = lb->items;
	for (int inx = 0; inx < _t306.len; ++inx) {
		ui__ListItem item = ((ui__ListItem*)_t306.data)[inx];
		if (inx >= lb->draw_count) {
			break;
		}
		ui__ListBox_draw_item(lb, item, inx == lb->selection);
	}
}

static bool ui__ListBox_point_inside(ui__ListBox* lb, f64 x, f64 y) {
	return x >= lb->x && x <= lb->x + lb->width && y >= lb->y && y <= lb->y + lb->height;
}

static bool ui__ListItem_point_inside(ui__ListItem* li, f64 x, f64 y) {
	return x >= li->x && x <= li->x + li->list->width && y >= li->y && y <= li->y + li->list->item_height;
}

static void ui__on_click(ui__ListBox* lb, ui__MouseEvent* e, ui__Window* window) {
	if (e->action != 1) {
		return;
	}
	if (!ui__ListBox_point_inside(lb, e->x, e->y)) {
		ui__ListBox_unfocus(lb);
		return;
	}
	ui__ListBox_focus(lb);
	// FOR IN array
	array _t307 = lb->items;
	for (int inx = 0; inx < _t307.len; ++inx) {
		ui__ListItem item = ((ui__ListItem*)_t307.data)[inx];
		if (inx >= lb->draw_count) {
			break;
		}
		if (ui__ListItem_point_inside(&item, e->x, e->y)) {
			if (lb->selection != inx) {
				lb->selection = inx;
				if (lb->clbk != ((voidptr)(0))) {
					lb->clbk(window->state, lb);
				}
			}
			break;
		}
	}
}

static void ui__on_key_up(ui__ListBox* lb, ui__KeyEvent* e, ui__Window* window) {
	if (!lb->focused) {
		return;
	}
	ui__Key _t308 = e->key;
	if (_t308 == ui__Key_down) {
		if (lb->selection >= lb->draw_count - 1) {
			return;
		}
		if (lb->selection >= lb->items.len - 1) {
			return;
		}
		lb->selection++;
	} else if (_t308 == ui__Key_up) {
		if (lb->selection <= 0) {
			return;
		}
		lb->selection--;
	} else {
		return;
	};
	if (lb->clbk != ((voidptr)(0))) {
		lb->clbk(window->state, lb);
	}
}

static void ui__ListBox_set_pos(ui__ListBox* lb, int x, int y) {
	lb->x = x;
	lb->y = y;
}

static void ui__ListBox_focus(ui__ListBox* lb) {
	lb->focused = true;
}

static void ui__ListBox_unfocus(ui__ListBox* lb) {
	lb->focused = false;
}

static bool ui__ListBox_is_focused(ui__ListBox* lb) {
	return lb->focused;
}

static ui__UI* ui__ListBox_get_ui(ui__ListBox* lb) {
	return lb->ui;
}

static void ui__ListBox_unfocus_all(ui__ListBox* lb) {
	lb->focused = false;
}

static void ui__ListBox_resize(ui__ListBox* lb, int width, int height) {
	lb->width = width;
	lb->height = height;
	lb->draw_count = lb->height / lb->item_height;
}

static voidptr ui__ListBox_get_state(ui__ListBox* lb) {
	ui__Layout parent = lb->parent;
	return ui__Layout_name_table[parent._interface_idx].get_state(parent._object);
}

static eventbus__Subscriber* ui__ListBox_get_subscriber(ui__ListBox* lb) {
	ui__Layout parent = lb->parent;
	return ui__Layout_name_table[parent._interface_idx].get_subscriber(parent._object);
}

static multi_return_int_int ui__ListBox_size(ui__ListBox* lb) {
	return (multi_return_int_int){.arg0=lb->width, .arg1=lb->height};
}

static multi_return_int_int ui__ListBox_propose_size(ui__ListBox* lb, int w, int h) {
	ui__ListBox_resize(lb, w, h);
	return (multi_return_int_int){.arg0=lb->width, .arg1=lb->height};
}

// TypeDecl
static void ui__Menu_init(ui__Menu* m, ui__Layout parent) {
	ui__UI* ui = ui__Layout_name_table[parent._interface_idx].get_ui(parent._object);
	m->ui = ui;
}

ui__Menu* ui__menu(ui__MenuConfig c) {
	return (ui__Menu*)memdup(&(ui__Menu){.text = c.text,.parent = {0},.x = 0,.y = 0,.ui = 0,.items = c.items,.visible = 0,}, sizeof(ui__Menu));
}

static void ui__Menu_set_pos(ui__Menu* m, int x, int y) {
	m->x = x;
	m->y = y;
}

static multi_return_int_int ui__Menu_size(ui__Menu* m) {
	return (multi_return_int_int){.arg0=0, .arg1=0};
}

static multi_return_int_int ui__Menu_propose_size(ui__Menu* m, int w, int h) {
	return (multi_return_int_int){.arg0=0, .arg1=0};
}

static void ui__Menu_draw(ui__Menu* m) {
	if (!m->visible) {
		return;
	}
	gg__Context* gg = m->ui->gg;
	gg__Context_draw_rect(gg, m->x, m->y, 150, m->items.len * _const_ui__menu_height, _const_ui__menu_color);
	gg__Context_draw_empty_rect(gg, m->x, m->y, 150, m->items.len * _const_ui__menu_height, _const_ui__menu_border_color);
	// FOR IN array
	array _t309 = m->items;
	for (int i = 0; i < _t309.len; ++i) {
		ui__MenuItem item = ((ui__MenuItem*)_t309.data)[i];
		gg__Context_draw_text_def(m->ui->gg, m->x + 10, m->y + i * _const_ui__menu_height + 10, item.text);
	}
}

void ui__Menu_add_item(ui__Menu* m, string text, ui__MenuFn action) {
	array_push(&m->items, _MOV((ui__MenuItem[]){ (ui__MenuItem){.text = text,.action = action,} }));
}

static void ui__Menu_focus(ui__Menu* m) {
}

static bool ui__Menu_is_focused(ui__Menu* m) {
	return false;
}

static void ui__Menu_unfocus(ui__Menu* m) {
}

static bool ui__Menu_point_inside(ui__Menu* m, f64 x, f64 y) {
	return false;
}

void ui__Menu_set_text(ui__Menu* m, string s) {
	m->text = s;
}

// TypeDecl
static void ui__Picture_init(ui__Picture* pic, ui__Layout parent) {
	ui__UI* ui = ui__Layout_name_table[parent._interface_idx].get_ui(parent._object);
	pic->ui = ui;
	eventbus__Subscriber* subscriber = ui__Layout_name_table[parent._interface_idx].get_subscriber(parent._object);
	eventbus__Subscriber_subscribe_method(subscriber, _const_ui__events.on_click, ui__pic_click, pic);
	if (!pic->use_cache && _IN_MAP(pic->path, ui->resource_cache)) {
		pic->image = (*(gg__Image*)map_get(ui->resource_cache, pic->path, &(gg__Image[]){ {0} }));
	} else {
		pic->image = gg__Context_create_image(pic->ui->gg, pic->path);
		(*(gg__Image*)map_get_and_set(&ui->resource_cache, pic->path, &(gg__Image[]){ {0} })) = pic->image;
	}
	if (pic->width == 0 || pic->height == 0) {
		pic->width = pic->image.width;
		pic->height = pic->image.height;
	}
}

ui__Picture* ui__picture(ui__PictureConfig c) {
	if (!os__exists(c.path)) {
		eprintln(_STR("V UI: picture file \"%.*s\000\" not found", 2, c.path));
	}
	ui__Picture* pic = (ui__Picture*)memdup(&(ui__Picture){.offset_x = 0,
		.offset_y = 0,
		.text = (string){.str=(byteptr)""},
		.parent = {0},
		.x = 0,
		.y = 0,
		.width = c.width,
		.height = c.height,
		.path = c.path,
		.ui = 0,
		.image = c.image,
		.on_click = c.on_click,
		.use_cache = c.use_cache,
	}, sizeof(ui__Picture));
	return pic;
}

static void ui__pic_click(ui__Picture* pic, ui__MouseEvent* e, ui__Window* window) {
	if (ui__Picture_point_inside(pic, e->x, e->y)) {
		if (e->action == 0) {
			if (pic->on_click != ((voidptr)(0))) {
				pic->on_click(window->state, pic);
			}
		}
	}
}

static void ui__Picture_set_pos(ui__Picture* pic, int x, int y) {
	pic->x = x + pic->offset_x;
	pic->y = y + pic->offset_y;
}

static multi_return_int_int ui__Picture_size(ui__Picture* pic) {
	return (multi_return_int_int){.arg0=pic->width, .arg1=pic->height};
}

static multi_return_int_int ui__Picture_propose_size(ui__Picture* pic, int w, int h) {
	return (multi_return_int_int){.arg0=pic->width, .arg1=pic->height};
}

static void ui__Picture_draw(ui__Picture* pic) {
	gg__Context_draw_image(pic->ui->gg, pic->x, pic->y, pic->width, pic->height, (voidptr)&/*qq*/pic->image);
}

static void ui__Picture_focus(ui__Picture* pic) {
}

static bool ui__Picture_is_focused(ui__Picture* pic) {
	return false;
}

static void ui__Picture_unfocus(ui__Picture* pic) {
}

static bool ui__Picture_point_inside(ui__Picture* pic, f64 x, f64 y) {
	return x >= pic->x && x <= pic->x + pic->width && y >= pic->y && y <= pic->y + pic->height;
}

static void ui__ProgressBar_init(ui__ProgressBar* pb, ui__Layout parent) {
	pb->parent = parent;
	ui__UI* ui = ui__Layout_name_table[parent._interface_idx].get_ui(parent._object);
	pb->ui = ui;
}

ui__ProgressBar* ui__progressbar(ui__ProgressBarConfig c) {
	ui__ProgressBar* pb = (ui__ProgressBar*)memdup(&(ui__ProgressBar){.height = c.height,
		.width = c.width,
		.x = 0,
		.y = 0,
		.parent = {0},
		.ui = 0,
		.val = c.val,
		.min = c.min,
		.max = c.max,
		.is_focused = 0,
	}, sizeof(ui__ProgressBar));
	return pb;
}

static void ui__ProgressBar_set_pos(ui__ProgressBar* pb, int x, int y) {
	pb->x = x;
	pb->y = y;
}

static multi_return_int_int ui__ProgressBar_size(ui__ProgressBar* pb) {
	return (multi_return_int_int){.arg0=pb->width, .arg1=pb->height};
}

static multi_return_int_int ui__ProgressBar_propose_size(ui__ProgressBar* pb, int w, int h) {
	if (pb->width == 0) {
		pb->width = w;
	}
	return (multi_return_int_int){.arg0=pb->width, .arg1=pb->height};
}

static void ui__ProgressBar_draw(ui__ProgressBar* pb) {
	gg__Context_draw_rect(pb->ui->gg, pb->x, pb->y, pb->width, pb->height, _const_ui__progress_bar_background_color);
	gg__Context_draw_empty_rect(pb->ui->gg, pb->x, pb->y, pb->width, pb->height, _const_ui__progress_bar_background_border_color);
	int width = ((int)(((f64)(pb->width)) * (((f64)(pb->val)) / ((f64)(pb->max)))));
	gg__Context_draw_empty_rect(pb->ui->gg, pb->x, pb->y, width, pb->height, _const_ui__progress_bar_border_color);
	gg__Context_draw_rect(pb->ui->gg, pb->x, pb->y, width, pb->height, _const_ui__progress_bar_color);
}

static bool ui__ProgressBar_point_inside(ui__ProgressBar* pb, f64 x, f64 y) {
	return false;
}

static void ui__ProgressBar_focus(ui__ProgressBar* pb) {
}

static bool ui__ProgressBar_is_focused(ui__ProgressBar* pb) {
	return pb->is_focused;
}

static void ui__ProgressBar_unfocus(ui__ProgressBar* pb) {
}

// TypeDecl
static void ui__Radio_init(ui__Radio* r, ui__Layout parent) {
	r->parent = parent;
	ui__UI* ui = ui__Layout_name_table[parent._interface_idx].get_ui(parent._object);
	r->ui = ui;
	if (r->width == 0) {
		int max = 0;
		// FOR IN array
		array _t311 = r->values;
		for (int _t312 = 0; _t312 < _t311.len; ++_t312) {
			string value = ((string*)_t311.data)[_t312];
			int width = gg__Context_text_width(r->ui->gg, value);
			if (width > max) {
				max = width;
			}
		}
		r->width = max + _const_ui__check_mark_size + 10;
	}
	eventbus__Subscriber* subscriber = ui__Layout_name_table[parent._interface_idx].get_subscriber(parent._object);
	eventbus__Subscriber_subscribe_method(subscriber, _const_ui__events.on_click, ui__radio_click, r);
}

ui__Radio* ui__radio(ui__RadioConfig c) {
	ui__Radio* r = (ui__Radio*)memdup(&(ui__Radio){.selected_index = 0,.values = c.values,.title = c.title,.height = 20,.width = c.width,.x = 0,.y = 0,.parent = {0},.is_focused = 0,.is_checked = 0,.ui = 0,}, sizeof(ui__Radio));
	return r;
}

static void ui__Radio_set_pos(ui__Radio* r, int x, int y) {
	r->x = x;
	r->y = y;
}

static multi_return_int_int ui__Radio_size(ui__Radio* r) {
	return (multi_return_int_int){.arg0=r->width, .arg1=r->height};
}

static multi_return_int_int ui__Radio_propose_size(ui__Radio* r, int w, int h) {
	return (multi_return_int_int){.arg0=r->width, .arg1=r->values.len * (r->height + 5)};
}

static void ui__Radio_draw(ui__Radio* r) {
	gg__Context_draw_empty_rect(r->ui->gg, r->x, r->y, r->width, r->values.len * (r->height + 5), _const_gx__gray);
	gg__Context_draw_rect(r->ui->gg, r->x + _const_ui__check_mark_size, r->y - 5, gg__Context_text_width(r->ui->gg, r->title) + 5, 10, _const_ui__default_window_color);
	gg__Context_draw_text_def(r->ui->gg, r->x + _const_ui__check_mark_size + 3, r->y - 7, r->title);
	// FOR IN array
	array _t313 = r->values;
	for (int i = 0; i < _t313.len; ++i) {
		string val = ((string*)_t313.data)[i];
		int y = r->y + r->height * i + 15;
		int x = r->x + 5;
		gg__Context_draw_image(r->ui->gg, x, y - 1, 16, 16, (voidptr)&/*qq*/r->ui->selected_radio_image);
		if (i != r->selected_index) {
			gg__Context_draw_rect(r->ui->gg, x + 4, y + 3, 8, 8, _const_gx__white);
		}
		gg__Context_draw_text(r->ui->gg, r->x + _const_ui__check_mark_size + 10, y, val, _const_ui__btn_text_cfg);
	}
}

static bool ui__Radio_point_inside(ui__Radio* r, f64 x, f64 y) {
	return x >= r->x && x <= r->x + r->width && y >= r->y && y <= r->y + (r->height + 5) * r->values.len;
}

static void ui__radio_click(ui__Radio* r, ui__MouseEvent* e, voidptr zzz) {
	if (!ui__Radio_point_inside(r, e->x, e->y)) {
		return;
	}
	int y = e->y - r->y;
	r->selected_index = (y) / (r->height + 5);
	if (r->selected_index == r->values.len) {
		r->selected_index = r->values.len - 1;
	}
}

static void ui__Radio_focus(ui__Radio* r) {
	r->is_focused = true;
}

static void ui__Radio_unfocus(ui__Radio* r) {
	r->is_focused = false;
}

string ui__Radio_selected_value(ui__Radio* r) {
	return (*(string*)array_get(r->values, r->selected_index));
}

static bool ui__Radio_is_focused(ui__Radio* r) {
	return r->is_focused;
}

static void ui__Rectangle_init(ui__Rectangle* r, ui__Layout parent) {
	ui__UI* ui = ui__Layout_name_table[parent._interface_idx].get_ui(parent._object);
	r->ui = ui;
}

ui__Rectangle* ui__rectangle(ui__RectangleConfig c) {
	ui__Rectangle* rect = (ui__Rectangle*)memdup(&(ui__Rectangle){.color = c.color,
		.text = c.text,
		.parent = {0},
		.x = c.x,
		.y = c.y,
		.height = c.height,
		.width = c.width,
		.radius = c.radius,
		.border = c.border,
		.border_color = c.border_color,
		.ui = 0,
	}, sizeof(ui__Rectangle));
	return rect;
}

static void ui__Rectangle_set_pos(ui__Rectangle* r, int x, int y) {
	r->x = x;
	r->y = y;
}

static multi_return_int_int ui__Rectangle_size(ui__Rectangle* r) {
	return (multi_return_int_int){.arg0=r->width, .arg1=r->height};
}

static multi_return_int_int ui__Rectangle_propose_size(ui__Rectangle* r, int w, int h) {
	return (multi_return_int_int){.arg0=r->width, .arg1=r->height};
}

static void ui__Rectangle_draw(ui__Rectangle* r) {
	if (r->radius > 0) {
		gg__Context_draw_rounded_rect(r->ui->gg, r->x, r->y, r->width, r->height, r->radius, r->color);
		if (r->border) {
			gg__Context_draw_empty_rounded_rect(r->ui->gg, r->x, r->y, r->width, r->height, r->radius, r->border_color);
		}
	} else {
		gg__Context_draw_rect(r->ui->gg, r->x, r->y, r->width, r->height, r->color);
		if (r->border) {
			gg__Context_draw_empty_rect(r->ui->gg, r->x, r->y, r->width, r->height, r->border_color);
		}
	}
	gx__TextCfg text_cfg = (gx__TextCfg){.color = _const_gx__red,.size = 16,.align = _const_gx__align_left,.vertical_align = gx__VerticalAlign_top,.max_width = r->x + r->width,.family = (string){.str=(byteptr)""},.bold = 0,.mono = 0,.italic = 0,};
	if ((r->text).len != 0) {
		multi_return_int_int mr_1819 = gg__Context_text_size(r->ui->gg, r->text);
		int text_width = mr_1819.arg0;
		int text_height = mr_1819.arg1;
		int dx = (r->width - text_width) / 2;
		int dy = (r->height - text_height) / 2;
		if (dx < 0) {
			dx = 0;
		}
		if (dy < 0) {
			dy = 0;
		}
		gg__Context_draw_text(r->ui->gg, r->x + dx, r->y + dy, r->text, text_cfg);
	}
}

static void ui__Rectangle_focus(ui__Rectangle* r) {
}

static bool ui__Rectangle_is_focused(ui__Rectangle* r) {
	return false;
}

static void ui__Rectangle_unfocus(ui__Rectangle* r) {
}

static bool ui__Rectangle_point_inside(ui__Rectangle* r, f64 x, f64 y) {
	return false;
}

ui__Stack* ui__row(ui__RowConfig c, array_ui__Widget children) {
	return ui__stack((ui__StackConfig){
		.width = 0,
		.height = c.height,
		.vertical_alignment = c.alignment,
		.horizontal_alignment = 0,
		.spacing = c.spacing,
		.stretch = c.stretch,
		.direction = ui__Direction_row,
		.margin = c.margin,
	}, children);
}

// TypeDecl
static void ui__Slider_init(ui__Slider* s, ui__Layout parent) {
	s->parent = parent;
	ui__UI* ui = ui__Layout_name_table[parent._interface_idx].get_ui(parent._object);
	s->ui = ui;
	eventbus__Subscriber* subscriber = ui__Layout_name_table[parent._interface_idx].get_subscriber(parent._object);
	eventbus__Subscriber_subscribe_method(subscriber, _const_ui__events.on_click, ui__slider_click, s);
	eventbus__Subscriber_subscribe_method(subscriber, _const_ui__events.on_key_down, ui__slider_key_down, s);
	eventbus__Subscriber_subscribe_method(subscriber, _const_ui__events.on_mouse_move, ui__slider_mouse_move, s);
}

ui__Slider* ui__slider(ui__SliderConfig c) {
	ui__Slider* s = (ui__Slider*)memdup(&(ui__Slider){.track_height = c.height,
		.track_width = c.width,
		.thumb_width = 0,
		.thumb_height = 0,
		.orientation = c.orientation,
		.x = 0,
		.y = 0,
		.parent = {0},
		.ui = 0,
		.val = c.val,
		.min = c.min,
		.max = c.max,
		.is_focused = 0,
		.dragging = 0,
		.on_value_changed = c.on_value_changed,
		.focus_on_thumb_only = c.focus_on_thumb_only,
		.rev_min_max_pos = c.rev_min_max_pos,
		.thumb_in_track = c.thumb_in_track,
		.track_line_displayed = c.track_line_displayed,
	}, sizeof(ui__Slider));
	if (!c.thumb_in_track) {
		s->thumb_height = (s->orientation == ui__Orientation_horizontal ? (s->track_height + 10) : (10));
		s->thumb_width = (s->orientation == ui__Orientation_horizontal ? (10) : (s->track_width + 10));
	} else {
		s->thumb_height = (s->orientation == ui__Orientation_horizontal ? (s->track_height - 3) : (10));
		s->thumb_width = (s->orientation == ui__Orientation_horizontal ? (10) : (s->track_width - 3));
	}
	if (s->min > s->max) {
		int tmp = s->max;
		s->max = s->min;
		s->min = tmp;
	}
	return s;
}

static void ui__Slider_draw_thumb(ui__Slider* s) {
	int axis = (s->orientation == ui__Orientation_horizontal ? (s->x) : (s->y));
	int rev_axis = (s->orientation == ui__Orientation_horizontal ? (s->y) : (s->x));
	int rev_dim = (s->orientation == ui__Orientation_horizontal ? (s->track_height) : (s->track_width));
	int rev_thumb_dim = (s->orientation == ui__Orientation_horizontal ? (s->thumb_height) : (s->thumb_width));
	int dim = (s->orientation == ui__Orientation_horizontal ? (s->track_width) : (s->track_height));
	f32 pos = ((f32)(dim)) * ((s->val - ((f32)(s->min))) / ((f32)(s->max - s->min)));
	if (s->rev_min_max_pos) {
		pos = -pos + ((f32)(dim));
	}
	pos += ((f32)(axis));
	if (pos > axis + dim) {
		pos = ((f32)(dim)) + ((f32)(axis));
	}
	if (pos < axis) {
		pos = ((f32)(axis));
	}
	f32 middle = ((f32)(rev_axis)) - (((f32)(rev_thumb_dim - rev_dim)) / 2);
	if (s->orientation == ui__Orientation_horizontal) {
		gg__Context_draw_rect(s->ui->gg, pos - ((f32)(s->thumb_width)) / 2, middle, s->thumb_width, s->thumb_height, _const_ui__thumb_color);
	} else {
		gg__Context_draw_rect(s->ui->gg, middle, pos - ((f32)(s->thumb_height)) / 2, s->thumb_width, s->thumb_height, _const_ui__thumb_color);
	}
}

static void ui__Slider_set_pos(ui__Slider* s, int x, int y) {
	s->x = x;
	s->y = y;
}

static multi_return_int_int ui__Slider_size(ui__Slider* s) {
	if (s->orientation == ui__Orientation_horizontal) {
		return (multi_return_int_int){.arg0=s->track_width, .arg1=s->thumb_height};
	} else {
		return (multi_return_int_int){.arg0=s->thumb_width, .arg1=s->track_height};
	}
	return (multi_return_int_int){0};
}

static multi_return_int_int ui__Slider_propose_size(ui__Slider* s, int w, int h) {
	if (s->orientation == ui__Orientation_horizontal) {
		return (multi_return_int_int){.arg0=s->track_width, .arg1=s->thumb_height};
	} else {
		return (multi_return_int_int){.arg0=s->thumb_width, .arg1=s->track_height};
	}
	return (multi_return_int_int){0};
}

static void ui__Slider_draw(ui__Slider* s) {
	gg__Context_draw_rect(s->ui->gg, s->x, s->y, s->track_width, s->track_height, _const_ui__slider_background_color);
	if (s->track_line_displayed) {
		if (s->orientation == ui__Orientation_horizontal) {
			gg__Context_draw_line(s->ui->gg, s->x + 2, s->y + s->track_height / 2, s->x + s->track_width - 4, s->y + s->track_height / 2, gx__rgb(0, 0, 0));
		} else {
			gg__Context_draw_line(s->ui->gg, s->x + s->track_width / 2, s->y + 2, s->x + s->track_width / 2, s->y + s->track_height - 4, gx__rgb(0, 0, 0));
		}
	}
	if (!s->is_focused) {
		gg__Context_draw_empty_rect(s->ui->gg, s->x, s->y, s->track_width, s->track_height, _const_ui__slider_background_border_color);
	} else {
		gg__Context_draw_empty_rect(s->ui->gg, s->x, s->y, s->track_width, s->track_height, _const_ui__slider_focused_background_border_color);
	}
	ui__Slider_draw_thumb(s);
}

static void ui__slider_key_down(ui__Slider* s, ui__KeyEvent* e, voidptr zzz) {
	if (!s->is_focused) {
		return;
	}
	ui__Key _t314 = e->key;
	if (_t314 == ui__Key_up || _t314 == ui__Key_left) {
		if (!s->rev_min_max_pos) {
			if (((int)(s->val)) > s->min) {
				s->val--;
			}
		} else {
			if (((int)(s->val)) < s->max) {
				s->val++;
			}
		}
	} else if (_t314 == ui__Key_down || _t314 == ui__Key_right) {
		if (!s->rev_min_max_pos) {
			if (((int)(s->val)) < s->max) {
				s->val++;
			}
		} else {
			if (((int)(s->val)) > s->min) {
				s->val--;
			}
		}
	} else {
	};
	if (s->on_value_changed != ((voidptr)(0))) {
		ui__Layout parent = s->parent;
		voidptr state = ui__Layout_name_table[parent._interface_idx].get_state(parent._object);
		s->on_value_changed(state, s);
	}
}

static bool ui__Slider_point_inside(ui__Slider* s, f64 x, f64 y) {
	return x >= s->x && x <= s->x + s->track_width && y >= s->y && y <= s->y + s->track_height;
}

static void ui__slider_click(ui__Slider* s, ui__MouseEvent* e, voidptr zzz) {
	if (!ui__Slider_point_inside_thumb(s, e->x, e->y) && (!ui__Slider_point_inside(s, e->x, e->y) || s->focus_on_thumb_only)) {
		s->dragging = false;
		s->is_focused = false;
		return;
	}
	if (!s->focus_on_thumb_only) {
		ui__Slider_change_value(s, e->x, e->y);
	}
	s->is_focused = true;
	s->dragging = e->action == 1;
}

static void ui__slider_mouse_move(ui__Slider* s, ui__MouseEvent* e, voidptr zzz) {
	if (s->dragging) {
		ui__Slider_change_value(s, e->x, e->y);
	}
}

static void ui__Slider_change_value(ui__Slider* s, int x, int y) {
	int dim = (s->orientation == ui__Orientation_horizontal ? (s->track_width) : (s->track_height));
	int axis = (s->orientation == ui__Orientation_horizontal ? (s->x) : (s->y));
	int pos = (s->orientation == ui__Orientation_horizontal ? (x) : (y));
	pos -= axis;
	if (s->rev_min_max_pos) {
		pos = -pos + dim;
	}
	s->val = ((f32)(s->min)) + (((f32)(pos)) * ((f32)(s->max - s->min))) / ((f32)(dim));
	if (((int)(s->val)) < s->min) {
		s->val = ((f32)(s->min));
	} else if (((int)(s->val)) > s->max) {
		s->val = ((f32)(s->max));
	}
	if (s->on_value_changed != ((voidptr)(0))) {
		ui__Layout parent = s->parent;
		voidptr state = ui__Layout_name_table[parent._interface_idx].get_state(parent._object);
		s->on_value_changed(state, s);
	}
}

static void ui__Slider_focus(ui__Slider* s) {
	ui__Layout parent = s->parent;
	ui__Layout_name_table[parent._interface_idx].unfocus_all(parent._object);
	s->is_focused = true;
}

static bool ui__Slider_is_focused(ui__Slider* s) {
	return s->is_focused;
}

static void ui__Slider_unfocus(ui__Slider* s) {
	s->is_focused = false;
}

static bool ui__Slider_point_inside_thumb(ui__Slider* s, f64 x, f64 y) {
	int axis = (s->orientation == ui__Orientation_horizontal ? (s->x) : (s->y));
	int rev_axis = (s->orientation == ui__Orientation_horizontal ? (s->y) : (s->x));
	int rev_dim = (s->orientation == ui__Orientation_horizontal ? (s->track_height) : (s->track_width));
	int rev_thumb_dim = (s->orientation == ui__Orientation_horizontal ? (s->thumb_height) : (s->thumb_width));
	int dim = (s->orientation == ui__Orientation_horizontal ? (s->track_width) : (s->track_height));
	f32 pos = ((f32)(dim)) * ((s->val - ((f32)(s->min))) / ((f32)(s->max - s->min)));
	if (s->rev_min_max_pos) {
		pos = -pos + ((f32)(dim));
	}
	pos += ((f32)(axis));
	if (pos > axis + dim) {
		pos = ((f32)(dim)) + ((f32)(axis));
	}
	if (pos < axis) {
		pos = ((f32)(axis));
	}
	f32 middle = ((f32)(rev_axis)) - (((f32)(rev_thumb_dim - rev_dim)) / 2);
	if (s->orientation == ui__Orientation_horizontal) {
		f32 t_x = pos - ((f32)(s->thumb_width)) / 2;
		f32 t_y = middle;
		return x >= t_x && x <= t_x + ((f32)(s->thumb_width)) && y >= t_y && y <= t_y + ((f32)(s->thumb_height));
	} else {
		f32 t_x = middle;
		f32 t_y = pos - ((f32)(s->thumb_height)) / 2;
		return x >= t_x && x <= t_x + ((f32)(s->thumb_width)) && y >= t_y && y <= t_y + ((f32)(s->thumb_height));
	}
	return 0;
}

static void ui__Stack_init(ui__Stack* s, ui__Layout parent) {
	s->parent = parent;
	ui__UI* ui = ui__Layout_name_table[parent._interface_idx].get_ui(parent._object);
	multi_return_int_int mr_1214 = ui__Layout_name_table[parent._interface_idx].size(parent._object);
	int w = mr_1214.arg0;
	int h = mr_1214.arg1;
	s->ui = ui;
	if (s->stretch) {
		s->height = h;
		s->width = w;
	} else {
		if (s->direction == ui__Direction_column) {
			s->height = h;
		} else {
			s->width = w;
		}
	}
	s->height -= s->margin.top + s->margin.bottom;
	s->width -= s->margin.left + s->margin.right;
	ui__Stack_set_pos(s, s->x, s->y);
	// FOR IN array
	array _t315 = s->children;
	for (int _t316 = 0; _t316 < _t315.len; ++_t316) {
		ui__Widget child = ((ui__Widget*)_t315.data)[_t316];
		ui__Widget_name_table[child._interface_idx].init(child._object, I_ui__Stack_to_Interface_ui__Layout(s));
	}
}

static ui__Stack* ui__stack(ui__StackConfig c, array_ui__Widget children) {
	ui__Stack* s = (ui__Stack*)memdup(&(ui__Stack){.x = 0,
		.y = 0,
		.width = c.width,
		.height = c.height,
		.children = children,
		.parent = {0},
		.ui = 0,
		.vertical_alignment = c.vertical_alignment,
		.horizontal_alignment = c.horizontal_alignment,
		.spacing = c.spacing,
		.stretch = c.stretch,
		.direction = c.direction,
		.margin = c.margin,
	}, sizeof(ui__Stack));
	return s;
}

static void ui__Stack_set_pos(ui__Stack* s, int x, int y) {
	s->x = x + s->margin.left;
	s->y = y + s->margin.top;
}

static eventbus__Subscriber* ui__Stack_get_subscriber(ui__Stack* s) {
	ui__Layout parent = s->parent;
	return ui__Layout_name_table[parent._interface_idx].get_subscriber(parent._object);
}

static multi_return_int_int ui__Stack_propose_size(ui__Stack* s, int w, int h) {
	if (s->stretch) {
		s->width = w;
		s->height = h;
	}
	return (multi_return_int_int){.arg0=s->width, .arg1=s->height};
}

static multi_return_int_int ui__Stack_size(ui__Stack* c) {
	return (multi_return_int_int){.arg0=c->width, .arg1=c->height};
}

static void ui__Stack_draw(ui__Stack* s) {
	int child_len = s->children.len;
	int total_spacing = (child_len - 1) * s->spacing;
	int per_child_height = (child_len > 0 ? ((ui__Stack_get_oriented_height(s) - total_spacing) / child_len) : (0));
	int pos_y = ui__Stack_get_oriented_y_axis(s);
	int size_x = 0;
	// FOR IN array
	array _t317 = s->children;
	for (int _t318 = 0; _t318 < _t317.len; ++_t318) {
		ui__Widget child = ((ui__Widget*)_t317.data)[_t318];
		int w = 0;
		int h = 0;
		if (s->direction == ui__Direction_column) {
			multi_return_int_int mr_2613 = ui__Widget_name_table[child._interface_idx].propose_size(child._object, s->width, per_child_height);
			w = mr_2613.arg0;
			h = mr_2613.arg1;
			ui__Widget_name_table[child._interface_idx].set_pos(child._object, ui__Stack_align(s, w), pos_y);
		} else {
			multi_return_int_int mr_2716 = ui__Widget_name_table[child._interface_idx].propose_size(child._object, per_child_height, s->height);
			h = mr_2716.arg0;
			w = mr_2716.arg1;
			ui__Widget_name_table[child._interface_idx].set_pos(child._object, pos_y, ui__Stack_align(s, w));
		}
		if (w > size_x) {
			size_x = w;
		}
		ui__Widget_name_table[child._interface_idx].draw(child._object);
		pos_y += h + s->spacing;
	}
	if (s->stretch) {
		return;
	}
	pos_y -= s->spacing;
	ui__Stack_set_oriented_height(s, pos_y - ui__Stack_get_oriented_y_axis(s));
	int w = ui__Stack_get_oriented_width(s);
	if (w == 0 || w < size_x) {
		ui__Stack_set_oriented_width(s, size_x);
	}
}

static int ui__Stack_align(ui__Stack* s, int size) {
	int align = (s->direction == ui__Direction_column ? (((int)(s->horizontal_alignment))) : (((int)(s->vertical_alignment))));
	int _t319 = align;
	if (_t319 == 0) {
		return ui__Stack_get_oriented_x_axis(s);
	} else if (_t319 == 1) {
		return ui__Stack_get_oriented_x_axis(s) + ((ui__Stack_get_oriented_width(s) - size) / 2);
	} else if (_t319 == 2) {
		return (ui__Stack_get_oriented_x_axis(s) + ui__Stack_get_oriented_width(s)) - size;
	} else {
		return ui__Stack_get_oriented_x_axis(s);
	};
	return 0;
}

static ui__UI* ui__Stack_get_ui(ui__Stack* s) {
	return s->ui;
}

static void ui__Stack_unfocus_all(ui__Stack* s) {
	// FOR IN array
	array _t320 = s->children;
	for (int _t321 = 0; _t321 < _t320.len; ++_t321) {
		ui__Widget child = ((ui__Widget*)_t320.data)[_t321];
		ui__Widget_name_table[child._interface_idx].unfocus(child._object);
	}
}

static voidptr ui__Stack_get_state(ui__Stack* s) {
	ui__Layout parent = s->parent;
	return ui__Layout_name_table[parent._interface_idx].get_state(parent._object);
}

static bool ui__Stack_point_inside(ui__Stack* s, f64 x, f64 y) {
	return false;
}

static void ui__Stack_focus(ui__Stack* s) {
}

static void ui__Stack_unfocus(ui__Stack* s) {
}

static bool ui__Stack_is_focused(ui__Stack* s) {
	return false;
}

static void ui__Stack_resize(ui__Stack* s, int width, int height) {
}

static int ui__Stack_get_oriented_height(ui__Stack* s) {
	return (s->direction == ui__Direction_column ? (s->height) : (s->width));
}

static int ui__Stack_get_oriented_width(ui__Stack* s) {
	return (s->direction == ui__Direction_column ? (s->width) : (s->height));
}

static int ui__Stack_get_oriented_y_axis(ui__Stack* s) {
	return (s->direction == ui__Direction_column ? (s->y) : (s->x));
}

static int ui__Stack_get_oriented_x_axis(ui__Stack* s) {
	return (s->direction == ui__Direction_column ? (s->x) : (s->y));
}

static int ui__Stack_set_oriented_height(ui__Stack* s, int h) {
	if (s->direction == ui__Direction_column) {
		s->height = h;
	} else {
		s->width = h;
	}
	return h;
}

static int ui__Stack_set_oriented_width(ui__Stack* s, int w) {
	if (s->direction == ui__Direction_column) {
		s->width = w;
	} else {
		s->height = w;
	}
	return w;
}

// TypeDecl
static void ui__Switch_init(ui__Switch* s, ui__Layout parent) {
	s->parent = parent;
	ui__UI* ui = ui__Layout_name_table[parent._interface_idx].get_ui(parent._object);
	s->ui = ui;
	eventbus__Subscriber* subscriber = ui__Layout_name_table[parent._interface_idx].get_subscriber(parent._object);
	eventbus__Subscriber_subscribe_method(subscriber, _const_ui__events.on_click, ui__sw_click, s);
}

ui__Switch* ui__switcher(ui__SwitchConfig c) {
	ui__Switch* s = (ui__Switch*)memdup(&(ui__Switch){.idx = 0,.height = _const_ui__sw_height,.width = _const_ui__sw_width,.x = 0,.y = 0,.parent = {0},.is_focused = 0,.open = c.open,.ui = 0,.onclick = c.onclick,}, sizeof(ui__Switch));
	return s;
}

static void ui__Switch_set_pos(ui__Switch* s, int x, int y) {
	s->x = x;
	s->y = y;
}

static multi_return_int_int ui__Switch_size(ui__Switch* s) {
	return (multi_return_int_int){.arg0=s->width, .arg1=s->height};
}

static multi_return_int_int ui__Switch_propose_size(ui__Switch* s, int w, int h) {
	return (multi_return_int_int){.arg0=s->width, .arg1=s->height};
}

static void ui__Switch_draw(ui__Switch* s) {
	int padding = (s->height - _const_ui__sw_dot_size) / 2;
	if (s->open) {
		gg__Context_draw_rect(s->ui->gg, s->x, s->y, s->width, s->height, _const_ui__sw_open_bg_color);
		gg__Context_draw_rect(s->ui->gg, s->x - padding + s->width - _const_ui__sw_dot_size, s->y + padding, _const_ui__sw_dot_size, _const_ui__sw_dot_size, _const_gx__white);
	} else {
		gg__Context_draw_rect(s->ui->gg, s->x, s->y, s->width, s->height, _const_ui__sw_close_bg_color);
		gg__Context_draw_rect(s->ui->gg, s->x + padding, s->y + padding, _const_ui__sw_dot_size, _const_ui__sw_dot_size, _const_gx__white);
	}
}

static bool ui__Switch_point_inside(ui__Switch* s, f64 x, f64 y) {
	return x >= s->x && x <= s->x + s->width && y >= s->y && y <= s->y + s->height;
}

static void ui__sw_click(ui__Switch* s, ui__MouseEvent* e, ui__Window* w) {
	if (!ui__Switch_point_inside(s, e->x, e->y)) {
		return;
	}
	if (e->action == 0) {
		s->open = !s->open;
		if (s->onclick != ((voidptr)(0))) {
			s->onclick(w->state, s);
		}
	}
}

static void ui__Switch_focus(ui__Switch* s) {
	s->is_focused = true;
}

static void ui__Switch_unfocus(ui__Switch* s) {
	s->is_focused = false;
}

static bool ui__Switch_is_focused(ui__Switch* s) {
	return s->is_focused;
}

// TypeDecl
// TypeDecl
// TypeDecl
static void ui__TextBox_init(ui__TextBox* tb, ui__Layout parent) {
	tb->parent = parent;
	ui__UI* ui = ui__Layout_name_table[parent._interface_idx].get_ui(parent._object);
	tb->ui = ui;
	eventbus__Subscriber* subscriber = ui__Layout_name_table[parent._interface_idx].get_subscriber(parent._object);
	eventbus__Subscriber_subscribe_method(subscriber, _const_ui__events.on_click, ui__tb_click, tb);
	eventbus__Subscriber_subscribe_method(subscriber, _const_ui__events.on_key_down, ui__tb_key_down, tb);
	eventbus__Subscriber_subscribe_method(subscriber, _const_ui__events.on_key_up, ui__tb_key_up, tb);
	eventbus__Subscriber_subscribe_method(subscriber, _const_ui__events.on_mouse_move, ui__tb_mouse_move, tb);
}

ui__TextBox* ui__textbox(ui__TextBoxConfig c) {
	ui__TextBox* tb = (ui__TextBox*)memdup(&(ui__TextBox){.height = c.height,
		.width = (c.width < 30 ? (30) : (c.width)),
		.x = 0,
		.y = 0,
		.parent = {0},
		.is_focused = c.is_focused,
		.ui = 0,
		.text = c.text,
		.max_len = c.max_len,
		.is_multi = 0,
		.placeholder = c.placeholder,
		.placeholder_bind = c.placeholder_bind,
		.cursor_pos = 0,
		.is_numeric = c.is_numeric,
		.is_password = c.is_password,
		.sel_start = 0,
		.sel_end = 0,
		.last_x = 0,
		.read_only = c.read_only,
		.borderless = c.borderless,
		.on_key_down = c.on_key_down,
		.on_key_up = c.on_key_up,
		.dragging = 0,
		.sel_direction = 0,
		.border_accentuated = c.border_accentuated,
		.is_error = c.is_error,
		.on_change = c.on_change,
		.is_typing = 0,
	}, sizeof(ui__TextBox));
	if (c.text == 0) {
		v_panic(tos_lit("textbox.text binding is not set"));
	}
	return tb;
}

static void ui__draw_inner_border(bool border_accentuated, gg__Context* gg, int x, int y, int width, int height, bool is_error) {
	if (!border_accentuated) {
		gx__Color color = (is_error ? (gx__rgb(255, 0, 0)) : (_const_ui__text_border_color));
		gg__Context_draw_empty_rect(gg, x, y, width, height, color);
		gg__Context_draw_empty_rect(gg, 0.5 + ((f32)(x)), 0.5 + ((f32)(y)), width - 1, height - 1, _const_ui__text_inner_border_color);
	} else {
		gg__Context_draw_empty_rect(gg, x, y, width, height, _const_ui__text_border_accentuated_color);
		gg__Context_draw_empty_rect(gg, 1.5 + ((f32)(x)), 1.5 + ((f32)(y)), width - 3, height - 3, _const_ui__text_border_accentuated_color);
	}
}

static void ui__TextBox_set_pos(ui__TextBox* tb, int x, int y) {
	tb->x = x;
	tb->y = y;
}

static multi_return_int_int ui__TextBox_size(ui__TextBox* tb) {
	return (multi_return_int_int){.arg0=tb->width, .arg1=tb->height};
}

static multi_return_int_int ui__TextBox_propose_size(ui__TextBox* tb, int w, int h) {
	return (multi_return_int_int){.arg0=tb->width, .arg1=tb->height};
}

static void ui__TextBox_draw(ui__TextBox* tb) {
	string text = *(tb->text);
	string placeholder = tb->placeholder;
	if (tb->placeholder_bind != 0) {
		placeholder = *(tb->placeholder_bind);
	}
	gg__Context_draw_rect(tb->ui->gg, tb->x, tb->y, tb->width, tb->height, _const_gx__white);
	if (!tb->borderless) {
		ui__draw_inner_border(tb->border_accentuated, tb->ui->gg, tb->x, tb->y, tb->width, tb->height, tb->is_error != 0 && *tb->is_error);
	}
	int width = (text.len == 0 ? (0) : (gg__Context_text_width(tb->ui->gg, text)));
	int text_y = tb->y + 2;
	int skip_idx = 0;
	if ((text).len == 0 && (placeholder).len != 0) {
		gg__Context_draw_text(tb->ui->gg, tb->x + _const_ui__textbox_padding, text_y, placeholder, _const_ui__placeholder_cfg);
	} else {
		ustring ustr = string_ustring(text);
		if (tb->sel_start < tb->sel_end && tb->sel_start < ustr.len) {
			string left = ustring_left(ustr, tb->sel_start);
			string right = ustring_right(ustr, tb->sel_end);
			int sel_width = width - gg__Context_text_width(tb->ui->gg, right) - gg__Context_text_width(tb->ui->gg, left);
			int x = gg__Context_text_width(tb->ui->gg, left) + tb->x + _const_ui__textbox_padding;
			gg__Context_draw_rect(tb->ui->gg, x, tb->y + 3, sel_width, tb->height - 6, _const_ui__selection_color);
		}
		if (width > tb->width) {
			for (int i = text.len - 1; i >= 0; i--) {
				if (i >= text.len) {
					continue;
				}
				if (gg__Context_text_width(tb->ui->gg, string_substr(text, i, text.len)) > tb->width) {
					skip_idx = i + 3;
					break;
				}
			}
			gg__Context_draw_text_def(tb->ui->gg, tb->x + _const_ui__textbox_padding, text_y, string_substr(text, skip_idx, text.len));
		} else {
			if (tb->is_password) {
				gg__Context_draw_text_def(tb->ui->gg, tb->x + _const_ui__textbox_padding, text_y, strings__repeat('*', text.len));
			} else {
				gg__Context_draw_text_def(tb->ui->gg, tb->x + _const_ui__textbox_padding, text_y, text);
			}
		}
	}
	if (tb->is_focused && !tb->read_only && tb->ui->show_cursor && tb->sel_start == 0 && tb->sel_end == 0) {
		int cursor_x = tb->x + _const_ui__textbox_padding;
		if (tb->is_password) {
			cursor_x += gg__Context_text_width(tb->ui->gg, strings__repeat('*', tb->cursor_pos));
		} else if (skip_idx > 0) {
			cursor_x += gg__Context_text_width(tb->ui->gg, string_substr(text, skip_idx, text.len));
		} else if (text.len > 0) {
			string left = ustring_left(string_ustring(text), tb->cursor_pos);
			cursor_x += gg__Context_text_width(tb->ui->gg, left);
		}
		if (text.len == 0) {
			cursor_x = tb->x + _const_ui__textbox_padding;
		}
		gg__Context_draw_rect(tb->ui->gg, cursor_x, tb->y + 3, 1, tb->height - 6, _const_gx__black);
	}
}

static void ui__tb_key_up(ui__TextBox* tb, ui__KeyEvent* e, ui__Window* window) {
	if (!tb->is_focused) {
		return;
	}
	if (tb->on_key_up != ((voidptr)(0))) {
		tb->on_key_up(window->state, tb, e->codepoint);
	}
}

static void ui__tb_key_down(ui__TextBox* tb, ui__KeyEvent* e, ui__Window* window) {
	string text = *tb->text;
	if (!tb->is_focused) {
		return;
	}
	if (tb->is_error != ((voidptr)(0))) {
		{ // Unsafe block
			*tb->is_error = false;
		}
	}
	tb->is_typing = true;
	if (tb->on_key_down != ((voidptr)(0))) {
		tb->on_key_down(window->state, tb, e->codepoint);
	}
	tb->ui->last_type_time = time__ticks();
	if (e->codepoint != 0) {
		if (tb->read_only) {
			return;
		}
		if (tb->max_len > 0 && text.len >= tb->max_len) {
			return;
		}
		if ((((byte)(e->codepoint)) == '\t' || ((byte)(e->codepoint)) == 127)) {
			return;
		}
		string s = utf32_to_str(e->codepoint);
		if (tb->is_numeric && (s.len > 1 || (!byte_is_digit(string_at(s, 0)) && ((string_at(s, 0) != '-') || ((text.len > 0) && (tb->cursor_pos > 0)))))) {
			return;
		}
		ui__TextBox_insert(tb, s);
		if (tb->on_change != ((ui__TextBoxChangeFn)(0))) {
			tb->on_change(*tb->text, window->state);
		}
		return;
	}
	ui__Key _t322 = e->key;
	if (_t322 == ui__Key_backspace) {
		tb->ui->show_cursor = true;
		if ((text).len != 0) {
			if (tb->cursor_pos == 0) {
				return;
			}
			ustring u = string_ustring(text);
			if (tb->sel_start < tb->sel_end) {
				{ // Unsafe block
					*tb->text = string_add(ustring_left(u, tb->sel_start), ustring_right(u, tb->sel_end));
				}
				tb->cursor_pos = tb->sel_start;
				tb->sel_start = 0;
				tb->sel_end = 0;
			} else if ((e->mods == ui__KeyMod_super || e->mods == ui__KeyMod_ctrl)) {
				int i = tb->cursor_pos;
				for (;;) {
					if (i > 0) {
						i--;
					}
					if (byte_is_space(string_at(text, i)) || i == 0) {
						{ // Unsafe block
						}
						break;
					}
				}
				tb->cursor_pos = i;
			} else {
				{ // Unsafe block
					*tb->text = string_add(ustring_left(u, tb->cursor_pos - 1), ustring_right(u, tb->cursor_pos));
				}
				tb->cursor_pos--;
			}
		}
		if (tb->on_change != ((ui__TextBoxChangeFn)(0))) {
		}
	} else if (_t322 == ui__Key_delete) {
		tb->ui->show_cursor = true;
		if (tb->cursor_pos == text.len || (text).len == 0) {
			return;
		}
		ustring u = string_ustring(text);
		{ // Unsafe block
			*tb->text = string_add(ustring_left(u, tb->cursor_pos), ustring_right(u, tb->cursor_pos + 1));
		}
		if (tb->on_change != ((ui__TextBoxChangeFn)(0))) {
		}
	} else if (_t322 == ui__Key_left) {
		if (ui__TextBox_sel(tb, e->mods, e->key)) {
			return;
		}
		if (tb->sel_end > 0) {
			tb->cursor_pos = tb->sel_start + 1;
		}
		tb->sel_start = 0;
		tb->sel_end = 0;
		tb->ui->show_cursor = true;
		tb->cursor_pos--;
		if (tb->cursor_pos <= 0) {
			tb->cursor_pos = 0;
		}
	} else if (_t322 == ui__Key_right) {
		if (ui__TextBox_sel(tb, e->mods, e->key)) {
			return;
		}
		if (tb->sel_start > 0) {
			tb->cursor_pos = tb->sel_end - 1;
		}
		tb->sel_end = 0;
		tb->sel_start = 0;
		tb->ui->show_cursor = true;
		tb->cursor_pos++;
		if (tb->cursor_pos > text.len) {
			tb->cursor_pos = text.len;
		}
	} else if (_t322 == ui__Key_a) {
		if ((e->mods == ui__KeyMod_super || e->mods == ui__KeyMod_ctrl)) {
			tb->sel_start = 0;
			tb->sel_end = string_ustring(text).len - 1;
		}
	} else if (_t322 == ui__Key_v) {
		if ((e->mods == ui__KeyMod_super || e->mods == ui__KeyMod_ctrl)) {
			ui__TextBox_insert(tb, clipboard__Clipboard_paste(tb->ui->clipboard));
		}
	} else if (_t322 == ui__Key_tab) {
		tb->ui->show_cursor = true;
	} else {
	};
}

static void ui__TextBox_set_sel(ui__TextBox* tb, int sel_start, int sel_end, ui__Key key) {
	if (tb->sel_direction == ui__SelectionDirection_right_to_left) {
		tb->sel_start = sel_start;
		tb->sel_end = sel_end;
	} else {
		tb->sel_start = sel_end;
		tb->sel_end = sel_start;
	}
}

static bool ui__TextBox_sel(ui__TextBox* tb, ui__KeyMod mods, ui__Key key) {
	int sel_start = (tb->sel_direction == ui__SelectionDirection_right_to_left ? (tb->sel_start) : (tb->sel_end));
	int sel_end = (tb->sel_direction == ui__SelectionDirection_right_to_left ? (tb->sel_end) : (tb->sel_start));
	string text = *tb->text;
	if (mods == ((int)(ui__KeyMod_shift)) + ((int)(ui__KeyMod_ctrl))) {
		int i = tb->cursor_pos;
		if (sel_start > 0) {
			i = (key == ui__Key_left ? (sel_start - 1) : (sel_start + 1));
		} else if (sel_start == 0 && sel_end > 0) {
			i = 0;
		} else {
			tb->sel_direction = (key == ui__Key_left ? (ui__SelectionDirection_right_to_left) : (ui__SelectionDirection_left_to_right));
		}
		sel_end = tb->cursor_pos;
		for (;;) {
			if (key == ui__Key_left && i > 0) {
				i--;
			} else if (key == ui__Key_right && i < tb->text->len) {
				i++;
			}
			if (i == 0) {
				sel_start = 0;
				break;
			} else if (i == text.len) {
				sel_start = tb->text->len;
				break;
			} else if (byte_is_space(string_at(text, i))) {
				sel_start = (tb->sel_direction == ui__SelectionDirection_right_to_left ? (i + 1) : (i));
				break;
			}
		}
		ui__TextBox_set_sel(tb, sel_start, sel_end, key);
		return true;
	}
	if (mods == ui__KeyMod_shift) {
		if ((tb->sel_direction == ui__SelectionDirection_right_to_left && sel_start == 0 && sel_end > 0) || (tb->sel_direction == ui__SelectionDirection_left_to_right && sel_end == tb->text->len)) {
			return true;
		}
		if (sel_start <= 0) {
			sel_end = tb->cursor_pos;
			sel_start = (key == ui__Key_left ? (tb->cursor_pos - 1) : (tb->cursor_pos + 1));
			tb->sel_direction = (key == ui__Key_left ? (ui__SelectionDirection_right_to_left) : (ui__SelectionDirection_left_to_right));
		} else {
			sel_start = (key == ui__Key_left ? (sel_start - 1) : (sel_start + 1));
		}
		ui__TextBox_set_sel(tb, sel_start, sel_end, key);
		return true;
	}
	return false;
}

static bool ui__TextBox_point_inside(ui__TextBox* tb, f64 x, f64 y) {
	return x >= tb->x && x <= tb->x + tb->width && y >= tb->y && y <= tb->y + tb->height;
}

static void ui__tb_mouse_move(ui__TextBox* tb, ui__MouseEvent* e, voidptr zzz) {
	if (!ui__TextBox_point_inside(tb, e->x, e->y)) {
		return;
	}
	if (tb->dragging) {
		int x = e->x - tb->x - _const_ui__textbox_padding;
		bool reverse = x - tb->last_x < 0;
		if (tb->sel_start <= 0) {
			tb->sel_start = tb->cursor_pos;
		}
		tb->last_x = x;
		int prev_width = 0;
		ustring ustr = string_ustring(/*rec*/*tb->text);
		for (int i = 1; i < ustr.len; ++i) {
			int width = gg__Context_text_width(tb->ui->gg, ustring_left(ustr, i));
			if (prev_width <= x && x <= width) {
				if (i < tb->sel_start && tb->sel_end < tb->sel_start) {
					tb->sel_end = tb->sel_start;
					tb->sel_start = i;
					return;
				}
				if (reverse) {
					tb->sel_start = i;
				} else {
					tb->sel_end = i;
				}
				return;
			}
			prev_width = width;
		}
		if (reverse) {
			tb->sel_start = 0;
		} else {
			tb->sel_end = tb->text->len;
		}
	}
}

static void ui__tb_click(ui__TextBox* tb, ui__MouseEvent* e, voidptr zzz) {
	if (!ui__TextBox_point_inside(tb, e->x, e->y)) {
		tb->dragging = false;
		return;
	}
	if (!tb->dragging && e->action == 1) {
		tb->sel_start = 0;
		tb->sel_end = 0;
	}
	tb->dragging = e->action == 1;
	tb->ui->show_cursor = true;
	ui__TextBox_focus(tb);
	if ((*tb->text).len == 0) {
		return;
	}
	int x = e->x - tb->x - _const_ui__textbox_padding;
	if (x <= 0) {
		tb->cursor_pos = 0;
		return;
	}
	int prev_width = 0;
	ustring ustr = string_ustring(/*rec*/*tb->text);
	for (int i = 1; i < ustr.len; ++i) {
		int width = gg__Context_text_width(tb->ui->gg, ustring_left(ustr, i));
		if (prev_width <= x && x <= width) {
			tb->cursor_pos = i;
			return;
		}
		prev_width = width;
	}
	tb->cursor_pos = tb->text->len;
}

void ui__TextBox_focus(ui__TextBox* tb) {
	if (tb->is_focused) {
		return;
	}
	ui__Layout parent = tb->parent;
	ui__Layout_name_table[parent._interface_idx].unfocus_all(parent._object);
	tb->is_focused = true;
}

static bool ui__TextBox_is_focused(ui__TextBox* tb) {
	return tb->is_focused;
}

static void ui__TextBox_unfocus(ui__TextBox* tb) {
	tb->is_focused = false;
	tb->sel_start = 0;
	tb->sel_end = 0;
}

static void ui__TextBox_update(ui__TextBox* tb) {
	tb->cursor_pos = string_ustring(/*rec*/*tb->text).len;
}

void ui__TextBox_hide(ui__TextBox* tb) {
}

void ui__TextBox_set_text(ui__TextBox* tb, string s) {
}

void ui__TextBox_on_return(ui__TextBox* tb, voidptr func) {
}

void ui__TextBox_insert(ui__TextBox* tb, string s) {
	ustring ustr = string_ustring(/*rec*/*tb->text);
	int old_len = ustr.len;
	if (tb->sel_start < tb->sel_end) {
		{ // Unsafe block
			*tb->text = string_add(string_add(ustring_left(ustr, tb->sel_start), s), ustring_right(ustr, tb->sel_end + 1));
		}
	} else {
		{ // Unsafe block
			*tb->text = string_add(string_add(ustring_left(ustr, tb->cursor_pos), s), ustring_right(ustr, tb->cursor_pos));
		}
		ustr = string_ustring(/*rec*/*tb->text);
		if (tb->max_len > 0 && ustr.len >= tb->max_len) {
			{ // Unsafe block
				*tb->text = ustring_left(ustr, tb->max_len);
			}
			ustr = string_ustring(/*rec*/*tb->text);
		}
	}
	tb->cursor_pos += ustr.len - old_len;
	tb->sel_start = 0;
	tb->sel_end = 0;
}

static void ui__Transition_init(ui__Transition* t, ui__Layout parent) {
	t->parent = parent;
	ui__UI* ui = ui__Layout_name_table[parent._interface_idx].get_ui(parent._object);
	t->ui = ui;
}

ui__Transition* ui__transition(ui__TransitionConfig config) {
	ui__Transition* transition = (ui__Transition*)memdup(&(ui__Transition){.last_draw_time = time__ticks(),
		.started_time = 0,
		.duration = config.duration,
		.animating = false,
		.easing = config.easing,
		.parent = {0},
		.start_value = 0,
		.last_draw_target = 0,
		.ui = 0,
		.target_value = 0,
		.animated_value = 0,
	}, sizeof(ui__Transition));
	return transition;
}

void ui__Transition_set_value(ui__Transition* t, int* animated_value) {
	t->animated_value = animated_value;
	t->start_value = *animated_value;
	t->target_value = *animated_value;
	t->last_draw_target = *animated_value;
}

static void ui__Transition_set_pos(ui__Transition* t, int x, int y) {
}

static multi_return_int_int ui__Transition_propose_size(ui__Transition* t, int w, int h) {
	return (multi_return_int_int){.arg0=0, .arg1=0};
}

static multi_return_int_int ui__Transition_size(ui__Transition* t) {
	return (multi_return_int_int){.arg0=0, .arg1=0};
}

static void ui__Transition_draw(ui__Transition* t) {
	if (t->animated_value == 0) {
		return;
	}
	if (t->target_value != *t->animated_value && !t->animating) {
		t->started_time = time__ticks();
		t->start_value = *t->animated_value;
		t->animating = true;
	} else if (t->animating && t->target_value != t->last_draw_target) {
		t->started_time = time__ticks();
		t->start_value = *t->animated_value;
	}
	if (t->animating) {
		f32 x = ((f32)(time__ticks() - t->started_time + 1)) / ((f32)(t->duration));
		int mapped = t->start_value + ((int)(t->easing(x) * ((f64)(t->target_value - t->start_value))));
		if (x >= 1) {
			t->animating = false;
			mapped = t->target_value;
		}
		(*t->animated_value) = mapped;
		t->ui->redraw_requested = true;
		t->last_draw_target = t->target_value;
		t->last_draw_time = time__ticks();
	}
}

static void ui__Transition_focus(ui__Transition* t) {
}

static bool ui__Transition_is_focused(ui__Transition* t) {
	return false;
}

static void ui__Transition_unfocus(ui__Transition* t) {
}

static bool ui__Transition_point_inside(ui__Transition* t, f64 x, f64 y) {
	return false;
}

ui__Layout ui__ilayout(ui__Layout x) {
	return x;
}

static void ui__UI_idle_loop(ui__UI* ui) {
	for (;;) {
		if (time__ticks() - ui->last_type_time < _const_ui__cursor_show_delay) {
			ui->show_cursor = true;
		} else {
			ui->show_cursor = !ui->show_cursor;
		}
		ui->needs_refresh = true;
		ui->ticks = 0;
		for (int i = 0; i < 50; i++) {
			time__sleep_ms(10);
			if (ui->closed) {
				return;
			}
		}
	}
}

void ui__run(ui__Window* window) {
	ui__UI* ui = window->ui;
	ui->window = window;
	// go
	thread_arg_ui__UI_idle_loop *arg__t323 = malloc(sizeof(thread_arg_ui__UI_idle_loop));
	arg__t323->arg0 = ui;
	pthread_t thread__t323;
	pthread_create(&thread__t323, NULL, (void*)ui__UI_idle_loop_thread_wrapper, arg__t323);
	// endgo

	gg__Context_run(ui->gg);
	ui->closed = true;
	time__sleep_ms(20);
}

static void ui__UI_load_icos(ui__UI* ui) {
	ui->cb_image = gg__create_image_from_memory((voidptr)&/*qq*/_const_ui__bytes_check_png, _const_ui__bytes_check_png_len);
	ui->down_arrow = gg__create_image_from_memory((voidptr)&/*qq*/_const_ui__bytes_arrow_png, _const_ui__bytes_arrow_png_len);
	ui->selected_radio_image = gg__create_image_from_memory((voidptr)&/*qq*/_const_ui__bytes_selected_radio_png, _const_ui__bytes_selected_radio_png_len);
}

void ui__open_url(string url) {
	if (!string_starts_with(url, tos_lit("https://")) && !string_starts_with(url, tos_lit("http://"))) {
		return;
	}
	#if defined(__APPLE__)
	{
	}
	#endif
	#if defined(__linux__)
	{
		os__exec(_STR("xdg-open \"%.*s\000\"", 2, url));
	}
	#endif
}

bool ui__confirm(string s) {
	return false;
}

void ui__message_box(string s) {
	ui__MessageApp* message_app = (ui__MessageApp*)memdup(&(ui__MessageApp){.window = 0,.waitgroup = sync__new_waitgroup(),}, sizeof(ui__MessageApp));
	sync__WaitGroup_add(message_app->waitgroup, 1);
	// go
	thread_arg_ui__run_message_dialog *arg__t324 = malloc(sizeof(thread_arg_ui__run_message_dialog));
	arg__t324->arg1 = message_app;
	arg__t324->arg2 = s;
	pthread_t thread__t324;
	pthread_create(&thread__t324, NULL, (void*)ui__run_message_dialog_thread_wrapper, arg__t324);
	// endgo

	sync__WaitGroup_wait(message_app->waitgroup);
}

static void ui__run_message_dialog(ui__MessageApp* message_app, string s) {
	array_string text_lines = ui__word_wrap_to_lines(s, 70);
	int height = 40;
	array_ui__Widget widgets = __new_array_with_default(0, 0, sizeof(ui__Widget), 0);
	widgets = new_array_from_c_array(1, 1, sizeof(ui__Widget), _MOV((ui__Widget[1]){I_ui__Label_to_Interface_ui__Widget(ui__label((ui__LabelConfig){.text = tos_lit(""),}))}));
	// FOR IN array
	array _t325 = text_lines;
	for (int _t326 = 0; _t326 < _t325.len; ++_t326) {
		string tline = ((string*)_t325.data)[_t326];
		array_push(&widgets, _MOV((ui__Widget[]){ I_ui__Label_to_Interface_ui__Widget(ui__label((ui__LabelConfig){.text = tline,})) }));
		height += 14;
	}
	array_push(&widgets, _MOV((ui__Widget[]){ I_ui__Label_to_Interface_ui__Widget(ui__label((ui__LabelConfig){.text = tos_lit(" "),})) }));
	array_push(&widgets, _MOV((ui__Widget[]){ I_ui__Button_to_Interface_ui__Widget(ui__button((ui__ButtonConfig){.text = tos_lit("OK"),.icon_path = (string){.str=(byteptr)""},.onclick = 0,.height = 20,.width = 0,})) }));
	message_app->window = ui__window((ui__WindowConfig){.width = 400,.height = height,.resizable = 0,.title = tos_lit("Message box"),.always_on_top = 0,.state = message_app,.draw_fn = 0,.bg_color = _const_ui__default_window_color,.on_click = 0,.on_mouse_down = 0,.on_mouse_up = 0,.on_key_down = 0,.on_scroll = 0,.on_mouse_move = 0,.children = __new_array(0, 1, sizeof(ui__Widget)),.font_path = (string){.str=(byteptr)""},}, new_array_from_c_array(1, 1, sizeof(ui__Widget), _MOV((ui__Widget[1]){I_ui__Stack_to_Interface_ui__Widget(ui__column((ui__ColumnConfig){.width = 0,.alignment = ui__HorizontalAlignment_center,.spacing = 0,.stretch = true,.margin = (ui__MarginConfig){.top = 5,.left = 5,.right = 5,.bottom = 5,},}, widgets))})));
	eventbus__Subscriber* subscriber = ui__Window_get_subscriber(message_app->window);
	eventbus__Subscriber_subscribe_method(subscriber, _const_ui__events.on_key_down, ui__msgbox_on_key_down, message_app);
	ui__run(message_app->window);
	sync__WaitGroup_done(message_app->waitgroup);
}

static void ui__msgbox_on_key_down(ui__MessageApp* app, ui__KeyEvent* e, ui__Window* window) {
	ui__Key _t330 = e->key;
	if (_t330 == ui__Key_enter || _t330 == ui__Key_escape || _t330 == ui__Key_space) {
	} else {
	};
}

static void ui__msgbox_btn_ok_click(ui__MessageApp* app) {
}

static array_string ui__word_wrap_to_lines(string s, int max_line_length) {
	array_string words = string_split(s, tos_lit(" "));
	array_string line = __new_array_with_default(0, 0, sizeof(string), 0);
	int line_len = 0;
	array_string text_lines = __new_array_with_default(0, 0, sizeof(string), 0);
	// FOR IN array
	array _t331 = words;
	for (int _t332 = 0; _t332 < _t331.len; ++_t332) {
		string word = ((string*)_t331.data)[_t332];
		if (line_len + word.len < max_line_length) {
			array_push(&line, _MOV((string[]){ word }));
			line_len += word.len + 1;
			continue;
		} else {
			array_push(&text_lines, _MOV((string[]){ array_string_join(line, tos_lit(" ")) }));
			line = __new_array_with_default(0, 0, sizeof(string), 0);
			line_len = 0;
		}
	}
	if (line_len > 0) {
		array_push(&text_lines, _MOV((string[]){ array_string_join(line, tos_lit(" ")) }));
	}
	return text_lines;
}

// TypeDecl
// TypeDecl
// TypeDecl
// TypeDecl
// TypeDecl
static void ui__on_event(sokol__sapp__Event* e, ui__Window* window) {
	window->ui->needs_refresh = true;
	window->ui->ticks = 0;
	sokol__sapp__EventType _t336 = e->typ;
	if (_t336 == sokol__sapp__EventType_mouse_up) {
		ui__window_mouse_up(*e, window->ui);
		ui__window_click(*e, window->ui);
	} else if (_t336 == sokol__sapp__EventType_mouse_down) {
		ui__window_mouse_down(*e, window->ui);
	} else if (_t336 == sokol__sapp__EventType_key_down) {
		println(tos_lit("key down"));
		ui__window_key_down(*e, window->ui);
	} else if (_t336 == sokol__sapp__EventType_char) {
		println(tos_lit("char"));
		ui__window_char(*e, window->ui);
	} else if (_t336 == sokol__sapp__EventType_mouse_scroll) {
		ui__window_scroll(*e, window->ui);
	} else if (_t336 == sokol__sapp__EventType_mouse_move) {
		ui__window_mouse_move(*e, window->ui);
	} else {
	};
}

static void ui__gg_init(ui__Window* window) {
	// FOR IN array
	array _t337 = window->children;
	for (int _t338 = 0; _t338 < _t337.len; ++_t338) {
		ui__Widget child = ((ui__Widget*)_t337.data)[_t338];
		ui__Widget_name_table[child._interface_idx].init(child._object, I_ui__Window_to_Interface_ui__Layout(window));
	}
}

ui__Window* ui__window(ui__WindowConfig cfg, array_ui__Widget children) {
	ui__Window* window = (ui__Window*)memdup(&(ui__Window){.ui = ((voidptr)(0)),
		.children = children,
		.child_window = ((voidptr)(0)),
		.parent_window = ((voidptr)(0)),
		.has_textbox = 0,
		.tab_index = 0,
		.just_tabbed = 0,
		.state = cfg.state,
		.draw_fn = cfg.draw_fn,
		.title = cfg.title,
		.mx = 0,
		.my = 0,
		.width = cfg.width,
		.height = cfg.height,
		.bg_color = cfg.bg_color,
		.click_fn = cfg.on_click,
		.mouse_down_fn = cfg.on_mouse_down,
		.mouse_up_fn = cfg.on_mouse_up,
		.scroll_fn = cfg.on_scroll,
		.key_down_fn = cfg.on_key_down,
		.char_fn = 0,
		.mouse_move_fn = cfg.on_mouse_move,
		.eventbus = eventbus__new(),
	}, sizeof(ui__Window));
	gg__Context* gcontext = gg__new_context((gg__Config){
		.width = cfg.width,
		.height = cfg.height,
		.use_ortho = true,
		.retina = 0,
		.resizable = cfg.resizable,
		.user_data = window,
		.font_size = 0,
		.create_window = true,
		.window_title = cfg.title,
		.borderless_window = 0,
		.always_on_top = 0,
		.bg_color = cfg.bg_color,
		.init_fn = ui__gg_init,
		.frame_fn = ui__frame,
		.cleanup_fn = ((voidptr)(0)),
		.fail_fn = ((voidptr)(0)),
		.event_fn = ui__on_event,
		.keydown_fn = ((voidptr)(0)),
		.char_fn = ((voidptr)(0)),
		.move_fn = ((voidptr)(0)),
		.click_fn = ((voidptr)(0)),
		.wait_events = 0,
		.fullscreen = 0,
		.scale = 1.0,
		.font_path = ((cfg.font_path).len == 0 ? (gg__system_font_path()) : (cfg.font_path)),
	});
	ui__UI* ui_ctx = (ui__UI*)memdup(&(ui__UI){.gg = gcontext,.window = ((voidptr)(0)),.show_cursor = 0,.last_type_time = 0,.cb_image = {0},.radio_image = {0},.selected_radio_image = {0},.down_arrow = {0},.clipboard = clipboard__new(),.redraw_requested = 0,.resource_cache = new_map_1(sizeof(gg__Image)),.closed = 0,.needs_refresh = true,.ticks = 0,}, sizeof(ui__UI));
	ui__UI_load_icos(ui_ctx);
	window->ui = ui_ctx;
	return window;
}

ui__Window* ui__child_window(ui__WindowConfig cfg, ui__Window* parent_window, array_ui__Widget children) {
	ui__Window* window = (ui__Window*)memdup(&(ui__Window){.ui = parent_window->ui,
		.children = children,
		.child_window = ((voidptr)(0)),
		.parent_window = parent_window,
		.has_textbox = 0,
		.tab_index = 0,
		.just_tabbed = 0,
		.state = cfg.state,
		.draw_fn = cfg.draw_fn,
		.title = cfg.title,
		.mx = 0,
		.my = 0,
		.width = cfg.width,
		.height = cfg.height,
		.bg_color = cfg.bg_color,
		.click_fn = cfg.on_click,
		.mouse_down_fn = 0,
		.mouse_up_fn = 0,
		.scroll_fn = 0,
		.key_down_fn = 0,
		.char_fn = 0,
		.mouse_move_fn = 0,
		.eventbus = eventbus__new(),
	}, sizeof(ui__Window));
	parent_window->child_window = window;
	// FOR IN array
	array _t339 = window->children;
	for (int _t340 = 0; _t340 < _t339.len; ++_t340) {
		ui__Widget child = ((ui__Widget*)_t339.data)[_t340];
		ui__Widget_name_table[child._interface_idx].init(child._object, I_ui__Window_to_Interface_ui__Layout(parent_window));
	}
	return window;
}

static void ui__window_mouse_move(sokol__sapp__Event event, ui__UI* ui) {
	ui__Window* window = ui->window;
	ui__MouseMoveEvent e = (ui__MouseMoveEvent){.x = event.mouse_x / ui->gg->scale,.y = event.mouse_y / ui->gg->scale,};
	if (window->mouse_move_fn != ((voidptr)(0))) {
		window->mouse_move_fn(e, window);
	}
	eventbus__EventBus_publish(window->eventbus, _const_ui__events.on_mouse_move, window, (voidptr)&/*qq*/e);
}

static void ui__window_scroll(sokol__sapp__Event event, ui__UI* ui) {
	ui__Window* window = ui->window;
	ui__ScrollEvent e = (ui__ScrollEvent){.x = event.scroll_x,.y = event.scroll_y,};
	if (window->scroll_fn != ((voidptr)(0))) {
		window->scroll_fn(e, window);
	}
	eventbus__EventBus_publish(window->eventbus, _const_ui__events.on_scroll, window, (voidptr)&/*qq*/e);
}

static void ui__window_mouse_down(sokol__sapp__Event event, ui__UI* ui) {
	ui__Window* window = ui->window;
	ui__MouseEvent e = (ui__MouseEvent){.x = ((int)(event.mouse_x / ui->gg->scale)),.y = ((int)(event.mouse_y / ui->gg->scale)),.button = 0,.action = ui__MouseAction_down,.mods = 0,};
	if (window->mouse_down_fn != ((voidptr)(0))) {
		window->mouse_down_fn(e, window);
	}
	if (window->child_window != 0) {
		eventbus__EventBus_publish(window->eventbus, _const_ui__events.on_mouse_down, window->child_window, (voidptr)&/*qq*/e);
	} else {
		eventbus__EventBus_publish(window->eventbus, _const_ui__events.on_mouse_down, window, (voidptr)&/*qq*/e);
	}
}

static void ui__window_mouse_up(sokol__sapp__Event event, ui__UI* ui) {
	ui__Window* window = ui->window;
	ui__MouseEvent e = (ui__MouseEvent){.x = ((int)(event.mouse_x / ui->gg->scale)),.y = ((int)(event.mouse_y / ui->gg->scale)),.button = 0,.action = ui__MouseAction_up,.mods = 0,};
	if (window->mouse_up_fn != ((voidptr)(0))) {
		window->mouse_up_fn(e, window);
	}
	if (window->child_window != 0) {
		eventbus__EventBus_publish(window->eventbus, _const_ui__events.on_mouse_up, window->child_window, (voidptr)&/*qq*/e);
	} else {
		eventbus__EventBus_publish(window->eventbus, _const_ui__events.on_mouse_up, window, (voidptr)&/*qq*/e);
	}
}

static void ui__window_click(sokol__sapp__Event event, ui__UI* ui) {
	ui__Window* window = ui->window;
	ui__MouseEvent e = (ui__MouseEvent){.x = ((int)(event.mouse_x / ui->gg->scale)),.y = ((int)(event.mouse_y / ui->gg->scale)),.button = 0,.action = (event.typ == sokol__sapp__EventType_mouse_up ? (ui__MouseAction_up) : (ui__MouseAction_down)),.mods = 0,};
	if (window->click_fn != ((voidptr)(0))) {
		window->click_fn(e, window);
	}
	if (window->child_window != 0) {
		eventbus__EventBus_publish(window->eventbus, _const_ui__events.on_click, window->child_window, (voidptr)&/*qq*/e);
	} else {
		eventbus__EventBus_publish(window->eventbus, _const_ui__events.on_click, window, (voidptr)&/*qq*/e);
	}
}

static void ui__window_key_down(sokol__sapp__Event event, ui__UI* ui) {
	ui__Window* window = ui->window;
	ui__KeyEvent e = (ui__KeyEvent){.key = ((ui__Key)(event.key_code)),.action = 0,.code = 0,.mods = ((ui__KeyMod)(event.modifiers)),.codepoint = 0,};
	if (e.key == ui__Key_escape) {
		println(tos_lit("escape"));
	}
	if (e.key == ui__Key_escape && window->child_window != 0) {
		window->child_window = 0;
	}
	if (window->key_down_fn != ((voidptr)(0))) {
		window->key_down_fn(e, window->state);
	}
	if (true) {
		eventbus__EventBus_publish(window->eventbus, _const_ui__events.on_key_down, window, (voidptr)&/*qq*/e);
	} else {
		eventbus__EventBus_publish(window->eventbus, _const_ui__events.on_key_up, window, (voidptr)&/*qq*/e);
	}
}

static void ui__window_char(sokol__sapp__Event event, ui__UI* ui) {
	ui__Window* window = ui->window;
	ui__KeyEvent e = (ui__KeyEvent){.key = 0,.action = 0,.code = 0,.mods = 0,.codepoint = event.char_code,};
	if (window->key_down_fn != ((voidptr)(0))) {
		window->key_down_fn(e, window->state);
	}
	eventbus__EventBus_publish(window->eventbus, _const_ui__events.on_key_down, window, (voidptr)&/*qq*/e);
}

static void ui__Window_focus_next(ui__Window* w) {
	bool doit = false;
	// FOR IN array
	array _t341 = w->children;
	for (int _t342 = 0; _t342 < _t341.len; ++_t342) {
		ui__Widget child = ((ui__Widget*)_t341.data)[_t342];
		if (doit) {
			ui__Widget_name_table[child._interface_idx].focus(child._object);
			break;
		}
		bool is_focused = ui__Widget_name_table[child._interface_idx].is_focused(child._object);
		if (is_focused) {
			doit = true;
		}
	}
	w->just_tabbed = true;
}

static void ui__Window_focus_previous(ui__Window* w) {
	// FOR IN array
	array _t343 = w->children;
	for (int i = 0; i < _t343.len; ++i) {
		ui__Widget child = ((ui__Widget*)_t343.data)[i];
		bool is_focused = ui__Widget_name_table[child._interface_idx].is_focused(child._object);
		if (is_focused && i > 0) {
			ui__Widget prev = (*(ui__Widget*)array_get(w->children, i - 1));
			ui__Widget_name_table[prev._interface_idx].focus(prev._object);
		}
	}
}

void ui__Window_set_cursor(ui__Window* w, ui__Cursor cursor) {
}

void ui__Window_close(ui__Window* w) {
}

void ui__Window_refresh(ui__Window* w) {
	w->ui->needs_refresh = true;
}

void ui__Window_onmousedown(ui__Window* w, voidptr cb) {
}

void ui__Window_onkeydown(ui__Window* w, voidptr cb) {
}

void ui__Window_on_click(ui__Window* w, ui__ClickFn func) {
	w->click_fn = func;
}

void ui__Window_on_mousemove(ui__Window* w, ui__MouseMoveFn func) {
	w->mouse_move_fn = func;
}

void ui__Window_on_scroll(ui__Window* w, ui__ScrollFn func) {
	w->scroll_fn = func;
}

bool ui__Window_mouse_inside(ui__Window* w, int x, int y, int width, int height) {
	return false;
}

void ui__Window_focus(ui__Window* w) {
}

void ui__Window_always_on_top(ui__Window* w, bool val) {
}

static void ui__foo(ui__Widget w) {
}

static void ui__foo2(ui__Layout l) {
}

static void ui__bar() {
	ui__foo(I_ui__TextBox_to_Interface_ui__Widget((ui__TextBox*)memdup(&(ui__TextBox){.height = 0,.width = 0,.x = 0,.y = 0,.parent = {0},.is_focused = 0,.ui = 0,.text = ((voidptr)(0)),.max_len = 0,.is_multi = 0,.placeholder = (string){.str=(byteptr)""},.placeholder_bind = ((voidptr)(0)),.cursor_pos = 0,.is_numeric = 0,.is_password = 0,.sel_start = 0,.sel_end = 0,.last_x = 0,.read_only = 0,.borderless = 0,.on_key_down = ((ui__KeyDownFn)(0)),.on_key_up = ((ui__KeyUpFn)(0)),.dragging = 0,.sel_direction = 0,.border_accentuated = 0,.is_error = ((voidptr)(0)),.on_change = ((ui__TextBoxChangeFn)(0)),.is_typing = 0,}, sizeof(ui__TextBox))));
	ui__foo(I_ui__Button_to_Interface_ui__Widget((ui__Button*)memdup(&(ui__Button){.text_width = 0,.text_height = 0,.state = 0,.height = 0,.width = 0,.x = 0,.y = 0,.parent = {0},.is_focused = 0,.ui = 0,.onclick = 0,.text = (string){.str=(byteptr)""},.icon_path = (string){.str=(byteptr)""},.image = {0},.use_icon = 0,}, sizeof(ui__Button))));
	ui__foo(I_ui__ProgressBar_to_Interface_ui__Widget((ui__ProgressBar*)memdup(&(ui__ProgressBar){.height = 0,.width = 0,.x = 0,.y = 0,.parent = {0},.ui = 0,.val = 0,.min = 0,.max = 0,.is_focused = 0,}, sizeof(ui__ProgressBar))));
	ui__foo(I_ui__Slider_to_Interface_ui__Widget((ui__Slider*)memdup(&(ui__Slider){.track_height = 0,.track_width = 0,.thumb_width = 0,.thumb_height = 0,.orientation = ui__Orientation_horizontal,.x = 0,.y = 0,.parent = {0},.ui = 0,.val = 0,.min = 0,.max = 100,.is_focused = 0,.dragging = 0,.on_value_changed = 0,.focus_on_thumb_only = 0,.rev_min_max_pos = 0,.thumb_in_track = 0,.track_line_displayed = 0,}, sizeof(ui__Slider))));
	ui__foo(I_ui__CheckBox_to_Interface_ui__Widget((ui__CheckBox*)memdup(&(ui__CheckBox){.height = 0,.width = 0,.x = 0,.y = 0,.parent = {0},.is_focused = 0,.checked = 0,.ui = 0,.on_check_changed = 0,.text = (string){.str=(byteptr)""},.disabled = 0,}, sizeof(ui__CheckBox))));
	ui__foo(I_ui__Label_to_Interface_ui__Widget((ui__Label*)memdup(&(ui__Label){.text = (string){.str=(byteptr)""},.parent = {0},.x = 0,.y = 0,.ui = 0,}, sizeof(ui__Label))));
	ui__foo(I_ui__Radio_to_Interface_ui__Widget((ui__Radio*)memdup(&(ui__Radio){.selected_index = 0,.values = __new_array(0, 1, sizeof(string)),.title = (string){.str=(byteptr)""},.height = 0,.width = 0,.x = 0,.y = 0,.parent = {0},.is_focused = 0,.is_checked = 0,.ui = 0,}, sizeof(ui__Radio))));
	ui__foo(I_ui__Picture_to_Interface_ui__Widget((ui__Picture*)memdup(&(ui__Picture){.offset_x = 0,.offset_y = 0,.text = (string){.str=(byteptr)""},.parent = {0},.x = 0,.y = 0,.width = 0,.height = 0,.path = (string){.str=(byteptr)""},.ui = 0,.image = {0},.on_click = 0,.use_cache = 0,}, sizeof(ui__Picture))));
	ui__foo(I_ui__Canvas_to_Interface_ui__Widget((ui__Canvas*)memdup(&(ui__Canvas){.width = 0,.height = 0,.x = 0,.y = 0,.parent = {0},.draw_fn = ((voidptr)(0)),.gg = 0,}, sizeof(ui__Canvas))));
	ui__foo(I_ui__Menu_to_Interface_ui__Widget((ui__Menu*)memdup(&(ui__Menu){.text = (string){.str=(byteptr)""},.parent = {0},.x = 0,.y = 0,.ui = 0,.items = __new_array(0, 1, sizeof(ui__MenuItem)),.visible = 0,}, sizeof(ui__Menu))));
	ui__foo(I_ui__Dropdown_to_Interface_ui__Widget((ui__Dropdown*)memdup(&(ui__Dropdown){.def_text = (string){.str=(byteptr)""},.width = 150,.parent = {0},.x = 0,.y = 0,.ui = 0,.items = __new_array(0, 1, sizeof(ui__DropdownItem)),.open = 0,.selected_index = 0,.hover_index = 0,.is_focused = 0,.on_selection_changed = 0,}, sizeof(ui__Dropdown))));
	ui__foo(I_ui__Transition_to_Interface_ui__Widget((ui__Transition*)memdup(&(ui__Transition){.last_draw_time = 0,.started_time = 0,.duration = 0,.animating = 0,.easing = 0,.parent = {0},.start_value = 0,.last_draw_target = 0,.ui = 0,.target_value = 0,.animated_value = 0,}, sizeof(ui__Transition))));
	ui__foo(I_ui__Stack_to_Interface_ui__Widget((ui__Stack*)memdup(&(ui__Stack){.x = 0,.y = 0,.width = 0,.height = 0,.children = __new_array(0, 1, sizeof(ui__Widget)),.parent = {0},.ui = 0,.vertical_alignment = 0,.horizontal_alignment = 0,.spacing = 0,.stretch = 0,.direction = 0,.margin = {0},}, sizeof(ui__Stack))));
	ui__foo(I_ui__Switch_to_Interface_ui__Widget((ui__Switch*)memdup(&(ui__Switch){.idx = 0,.height = 0,.width = 0,.x = 0,.y = 0,.parent = {0},.is_focused = 0,.open = 0,.ui = 0,.onclick = 0,}, sizeof(ui__Switch))));
	ui__foo(I_ui__Rectangle_to_Interface_ui__Widget((ui__Rectangle*)memdup(&(ui__Rectangle){.color = {0},.text = (string){.str=(byteptr)""},.parent = {0},.x = 0,.y = 0,.height = 0,.width = 0,.radius = 0,.border = 0,.border_color = {0},.ui = 0,}, sizeof(ui__Rectangle))));
	ui__foo(I_ui__Group_to_Interface_ui__Widget((ui__Group*)memdup(&(ui__Group){.title = (string){.str=(byteptr)""},.height = 0,.width = 0,.x = 0,.y = 0,.parent = {0},.ui = 0,.children = __new_array(0, 1, sizeof(ui__Widget)),.margin_left = 5,.margin_top = 10,.margin_right = 5,.margin_bottom = 5,.spacing = 5,}, sizeof(ui__Group))));
}

static void ui__bar2() {
	ui__foo2(I_ui__Window_to_Interface_ui__Layout((ui__Window*)memdup(&(ui__Window){.ui = 0,.children = __new_array(0, 1, sizeof(ui__Widget)),.child_window = ((voidptr)(0)),.parent_window = ((voidptr)(0)),.has_textbox = 0,.tab_index = 0,.just_tabbed = 0,.state = 0,.draw_fn = 0,.title = (string){.str=(byteptr)""},.mx = 0,.my = 0,.width = 0,.height = 0,.bg_color = {0},.click_fn = 0,.mouse_down_fn = 0,.mouse_up_fn = 0,.scroll_fn = 0,.key_down_fn = 0,.char_fn = 0,.mouse_move_fn = 0,.eventbus = eventbus__new(),}, sizeof(ui__Window))));
	ui__foo2(I_ui__Stack_to_Interface_ui__Layout((ui__Stack*)memdup(&(ui__Stack){.x = 0,.y = 0,.width = 0,.height = 0,.children = __new_array(0, 1, sizeof(ui__Widget)),.parent = {0},.ui = 0,.vertical_alignment = 0,.horizontal_alignment = 0,.spacing = 0,.stretch = 0,.direction = 0,.margin = {0},}, sizeof(ui__Stack))));
}

static void ui__Window_draw(ui__Window* w) {
}

static void ui__frame(ui__Window* w) {
	if (!w->ui->needs_refresh) {
		w->ui->ticks++;
		if (w->ui->ticks > 3) {
			return;
		}
	}
	gg__Context_begin(w->ui->gg);
	if (w->child_window == 0) {
		// FOR IN array
		array _t344 = w->children;
		for (int _t345 = 0; _t345 < _t344.len; ++_t345) {
			ui__Widget child = ((ui__Widget*)_t344.data)[_t345];
			ui__Widget_name_table[child._interface_idx].draw(child._object);
		}
	} else if (w->child_window != 0) {
		// FOR IN array
		array _t346 = w->child_window->children;
		for (int _t347 = 0; _t347 < _t346.len; ++_t347) {
			ui__Widget child = ((ui__Widget*)_t346.data)[_t347];
			ui__Widget_name_table[child._interface_idx].draw(child._object);
		}
	}
	gg__Context_end(w->ui->gg);
	w->ui->needs_refresh = false;
}

void ui__Window_set_title(ui__Window* w, string title) {
	w->title = title;
	sapp_set_window_title(title.str);
}

static ui__UI* ui__Window_get_ui(ui__Window* w) {
	return w->ui;
}

static voidptr ui__Window_get_state(ui__Window* w) {
	return w->state;
}

eventbus__Subscriber* ui__Window_get_subscriber(ui__Window* w) {
	return w->eventbus->subscriber;
}

static multi_return_int_int ui__Window_size(ui__Window* w) {
	return (multi_return_int_int){.arg0=w->width, .arg1=w->height};
}

static void ui__Window_resize(ui__Window* window, int width, int height) {
}

static void ui__Window_unfocus_all(ui__Window* window) {
	// FOR IN array
	array _t348 = window->children;
	for (int _t349 = 0; _t349 < _t348.len; ++_t349) {
		ui__Widget child = ((ui__Widget*)_t348.data)[_t349];
		ui__Widget_name_table[child._interface_idx].unfocus(child._object);
	}
}

static void vuipy__main() {
	vuipy__run();
}

void vuipy__run() {
	vuipy__App* app = (vuipy__App*)memdup(&(vuipy__App){.counter = tos_lit("0"),.window = 0,}, sizeof(vuipy__App));
	app->window = ui__window((ui__WindowConfig){.width = _const_vuipy__win_width,.height = _const_vuipy__win_height,.resizable = 0,.title = tos_lit("Counter"),.always_on_top = 0,.state = app,.draw_fn = 0,.bg_color = _const_ui__default_window_color,.on_click = 0,.on_mouse_down = 0,.on_mouse_up = 0,.on_key_down = 0,.on_scroll = 0,.on_mouse_move = 0,.children = __new_array(0, 1, sizeof(ui__Widget)),.font_path = (string){.str=(byteptr)""},}, new_array_from_c_array(1, 1, sizeof(ui__Widget), _MOV((ui__Widget[1]){I_ui__Stack_to_Interface_ui__Widget(ui__row((ui__RowConfig){.height = 0,.alignment = ui__VerticalAlignment_center,.spacing = 10,.stretch = true,.margin = (ui__MarginConfig){.top = 5,.left = 5,.right = 5,.bottom = 5,},.children = __new_array(0, 1, sizeof(ui__Widget)),}, new_array_from_c_array(3, 3, sizeof(ui__Widget), _MOV((ui__Widget[3]){I_ui__Stack_to_Interface_ui__Widget(ui__column((ui__ColumnConfig){.width = 200,.alignment = ui__HorizontalAlignment_center,.spacing = 20,.stretch = 0,.margin = {0},}, new_array_from_c_array(3, 3, sizeof(ui__Widget), _MOV((ui__Widget[3]){I_ui__Label_to_Interface_ui__Widget(ui__label((ui__LabelConfig){.text = tos_lit("hello"),})), I_ui__Label_to_Interface_ui__Widget(ui__label((ui__LabelConfig){.text = tos_lit("hello"),})), I_ui__Label_to_Interface_ui__Widget(ui__label((ui__LabelConfig){.text = tos_lit("hello"),}))})))), I_ui__TextBox_to_Interface_ui__Widget(ui__textbox((ui__TextBoxConfig){.width = 0,.height = 22,.min = 0,.max = 0,.val = 0,.placeholder = (string){.str=(byteptr)""},.placeholder_bind = ((voidptr)(0)),.max_len = 20,.is_numeric = true,.is_password = 0,.read_only = true,.is_multi = 0,.text = &app->counter,.is_error = ((voidptr)(0)),.is_focused = 0,.borderless = 0,.on_key_down = 0,.on_key_up = 0,.on_change = 0,.on_return = 0,.border_accentuated = 0,})), I_ui__Button_to_Interface_ui__Widget(ui__button((ui__ButtonConfig){.text = tos_lit("press me"),.icon_path = (string){.str=(byteptr)""},.onclick = vuipy__btn_count_click,.height = 75,.width = 50,}))}))))})));
	ui__run(app->window);
}

static void vuipy__btn_count_click(vuipy__App* app, ui__Button* btn) {
	app->counter = int_str((string_int(app->counter) + 1));
	println(_STR("clicked! %.*s", 1, app->counter));
}

__attribute__ ((constructor))
void _vinit() {
static bool once = false; if (once) {return;} once = true;
	builtin_init();
	vinit_string_literals();
	// Initializations for module strings :
	// Initializations for module hash :
	_const_hash__wyp0 = ((u64)(0xa0761d6478bd642fU));
	_const_hash__wyp1 = ((u64)(0xe7037ed1a0b428dbU));
	_const_hash__wyp2 = ((u64)(0x8ebc6af09c88c6e3U));
	_const_hash__wyp3 = ((u64)(0x589965cc75374cc3U));
	_const_hash__wyp4 = ((u64)(0x1d8e4e27c47d124fU));
	// Initializations for module math.bits :
	_const_math__bits__de_bruijn32 = ((u32)(0x077CB531U));
	_const_math__bits__de_bruijn32tab = new_array_from_c_array(32, 32, sizeof(byte), _MOV((byte[32]){
		((byte)(0)), 1, 28, 2, 29, 14, 24, 3, 30, 22, 20, 15, 25, 17, 4, 8, 31, 27, 13, 23, 21, 19, 16, 7, 26, 12, 18, 6, 11, 5, 10, 9}));
	_const_math__bits__de_bruijn64 = ((u64)(0x03f79d71b4ca8b09U));
	_const_math__bits__de_bruijn64tab = new_array_from_c_array(64, 64, sizeof(byte), _MOV((byte[64]){
		((byte)(0)), 1, 56, 2, 57, 49, 28, 3, 61, 58, 42, 50, 38, 29, 17, 4, 62, 47, 59, 36, 45, 43, 51, 22, 53, 39, 33, 30, 24, 18, 12, 5, 63, 55, 48, 27, 60, 41, 37, 16, 46, 35, 44, 21, 52, 32, 23, 11, 54, 26, 40, 15, 34, 20, 31, 10, 25, 14, 19, 9, 13, 8, 7, 6}));
	_const_math__bits__m0 = ((u64)(0x5555555555555555U));
	_const_math__bits__m1 = ((u64)(0x3333333333333333U));
	_const_math__bits__m2 = ((u64)(0x0f0f0f0f0f0f0f0fU));
	_const_math__bits__m3 = ((u64)(0x00ff00ff00ff00ffU));
	_const_math__bits__m4 = ((u64)(0x0000ffff0000ffffU));
	_const_math__bits__max_u32 = ((u32)(4294967295U));
	_const_math__bits__max_u64 = ((u64)(18446744073709551615U));
	_const_math__bits__two32 = ((u64)(0x100000000U));
	_const_math__bits__mask32 = _const_math__bits__two32 - 1;
	_const_math__bits__ntz_8_tab = new_array_from_c_array(256, 256, sizeof(byte), _MOV((byte[256]){
		((byte)(0x08)), 0x00, 0x01, 0x00, 0x02, 0x00, 0x01, 0x00, 0x03, 0x00, 0x01, 0x00, 0x02, 0x00, 0x01, 0x00, 0x04, 0x00, 0x01, 0x00, 0x02, 0x00, 0x01, 0x00, 0x03, 0x00, 0x01, 0x00, 0x02, 0x00, 0x01, 0x00, 0x05, 0x00, 0x01, 0x00, 0x02, 0x00, 0x01, 0x00, 0x03, 0x00, 0x01, 0x00, 0x02, 0x00, 0x01, 0x00, 0x04, 0x00, 0x01, 0x00, 0x02, 0x00, 0x01, 0x00, 0x03, 0x00, 0x01, 0x00, 0x02, 0x00, 0x01, 0x00, 0x06, 0x00, 0x01, 0x00, 0x02, 0x00, 0x01, 0x00, 0x03, 0x00, 0x01, 0x00, 0x02, 0x00, 0x01, 0x00, 0x04, 0x00, 0x01, 0x00, 0x02, 0x00, 0x01, 0x00, 0x03, 0x00, 0x01, 0x00, 0x02, 0x00, 0x01, 0x00, 0x05, 0x00, 0x01, 0x00, 0x02, 0x00, 0x01, 0x00, 0x03, 0x00, 0x01, 0x00, 0x02, 0x00, 0x01, 0x00, 0x04, 0x00, 0x01, 0x00, 0x02, 0x00, 0x01, 0x00, 0x03, 0x00, 0x01, 0x00, 0x02, 0x00, 0x01, 0x00, 0x07, 0x00, 0x01, 0x00, 0x02, 0x00, 0x01, 0x00, 0x03, 0x00, 0x01, 0x00, 0x02, 0x00, 0x01, 0x00, 0x04, 0x00, 0x01, 0x00, 0x02, 0x00, 0x01, 0x00, 0x03, 0x00, 0x01, 0x00, 0x02, 0x00, 0x01, 0x00, 0x05, 0x00, 0x01, 0x00, 0x02, 0x00, 0x01, 0x00, 0x03, 0x00, 0x01, 0x00, 0x02, 0x00, 0x01, 0x00, 0x04, 0x00, 0x01, 0x00, 0x02, 0x00, 0x01, 0x00, 0x03, 0x00, 0x01, 0x00, 0x02, 0x00, 0x01, 0x00, 0x06, 0x00, 0x01, 0x00, 0x02, 0x00, 0x01, 0x00, 0x03, 0x00, 0x01, 0x00, 0x02, 0x00, 0x01, 0x00, 0x04, 0x00, 0x01, 0x00, 0x02, 0x00, 0x01, 0x00, 0x03, 0x00, 0x01, 0x00, 0x02, 0x00, 0x01, 0x00, 0x05, 0x00, 0x01, 0x00, 0x02, 0x00, 0x01, 0x00, 0x03, 0x00, 0x01, 0x00, 0x02, 0x00, 0x01, 0x00, 0x04, 0x00, 0x01, 0x00, 0x02, 0x00, 0x01, 0x00, 0x03, 0x00, 0x01, 0x00, 0x02, 0x00, 0x01, 0x00}));
	_const_math__bits__pop_8_tab = new_array_from_c_array(256, 256, sizeof(byte), _MOV((byte[256]){
		((byte)(0x00)), 0x01, 0x01, 0x02, 0x01, 0x02, 0x02, 0x03, 0x01, 0x02, 0x02, 0x03, 0x02, 0x03, 0x03, 0x04, 0x01, 0x02, 0x02, 0x03, 0x02, 0x03, 0x03, 0x04, 0x02, 0x03, 0x03, 0x04, 0x03, 0x04, 0x04, 0x05, 0x01, 0x02, 0x02, 0x03, 0x02, 0x03, 0x03, 0x04, 0x02, 0x03, 0x03, 0x04, 0x03, 0x04, 0x04, 0x05, 0x02, 0x03, 0x03, 0x04, 0x03, 0x04, 0x04, 0x05, 0x03, 0x04, 0x04, 0x05, 0x04, 0x05, 0x05, 0x06, 0x01, 0x02, 0x02, 0x03, 0x02, 0x03, 0x03, 0x04, 0x02, 0x03, 0x03, 0x04, 0x03, 0x04, 0x04, 0x05, 0x02, 0x03, 0x03, 0x04, 0x03, 0x04, 0x04, 0x05, 0x03, 0x04, 0x04, 0x05, 0x04, 0x05, 0x05, 0x06, 0x02, 0x03, 0x03, 0x04, 0x03, 0x04, 0x04, 0x05, 0x03, 0x04, 0x04, 0x05, 0x04, 0x05, 0x05, 0x06, 0x03, 0x04, 0x04, 0x05, 0x04, 0x05, 0x05, 0x06, 0x04, 0x05, 0x05, 0x06, 0x05, 0x06, 0x06, 0x07, 0x01, 0x02, 0x02, 0x03, 0x02, 0x03, 0x03, 0x04, 0x02, 0x03, 0x03, 0x04, 0x03, 0x04, 0x04, 0x05, 0x02, 0x03, 0x03, 0x04, 0x03, 0x04, 0x04, 0x05, 0x03, 0x04, 0x04, 0x05, 0x04, 0x05, 0x05, 0x06, 0x02, 0x03, 0x03, 0x04, 0x03, 0x04, 0x04, 0x05, 0x03, 0x04, 0x04, 0x05, 0x04, 0x05, 0x05, 0x06, 0x03, 0x04, 0x04, 0x05, 0x04, 0x05, 0x05, 0x06, 0x04, 0x05, 0x05, 0x06, 0x05, 0x06, 0x06, 0x07, 0x02, 0x03, 0x03, 0x04, 0x03, 0x04, 0x04, 0x05, 0x03, 0x04, 0x04, 0x05, 0x04, 0x05, 0x05, 0x06, 0x03, 0x04, 0x04, 0x05, 0x04, 0x05, 0x05, 0x06, 0x04, 0x05, 0x05, 0x06, 0x05, 0x06, 0x06, 0x07, 0x03, 0x04, 0x04, 0x05, 0x04, 0x05, 0x05, 0x06, 0x04, 0x05, 0x05, 0x06, 0x05, 0x06, 0x06, 0x07, 0x04, 0x05, 0x05, 0x06, 0x05, 0x06, 0x06, 0x07, 0x05, 0x06, 0x06, 0x07, 0x06, 0x07, 0x07, 0x08}));
	_const_math__bits__rev_8_tab = new_array_from_c_array(256, 256, sizeof(byte), _MOV((byte[256]){
		((byte)(0x00)), 0x80, 0x40, 0xc0, 0x20, 0xa0, 0x60, 0xe0, 0x10, 0x90, 0x50, 0xd0, 0x30, 0xb0, 0x70, 0xf0, 0x08, 0x88, 0x48, 0xc8, 0x28, 0xa8, 0x68, 0xe8, 0x18, 0x98, 0x58, 0xd8, 0x38, 0xb8, 0x78, 0xf8, 0x04, 0x84, 0x44, 0xc4, 0x24, 0xa4, 0x64, 0xe4, 0x14, 0x94, 0x54, 0xd4, 0x34, 0xb4, 0x74, 0xf4, 0x0c, 0x8c, 0x4c, 0xcc, 0x2c, 0xac, 0x6c, 0xec, 0x1c, 0x9c, 0x5c, 0xdc, 0x3c, 0xbc, 0x7c, 0xfc, 0x02, 0x82, 0x42, 0xc2, 0x22, 0xa2, 0x62, 0xe2, 0x12, 0x92, 0x52, 0xd2, 0x32, 0xb2, 0x72, 0xf2, 0x0a, 0x8a, 0x4a, 0xca, 0x2a, 0xaa, 0x6a, 0xea, 0x1a, 0x9a, 0x5a, 0xda, 0x3a, 0xba, 0x7a, 0xfa, 0x06, 0x86, 0x46, 0xc6, 0x26, 0xa6, 0x66, 0xe6, 0x16, 0x96, 0x56, 0xd6, 0x36, 0xb6, 0x76, 0xf6, 0x0e, 0x8e, 0x4e, 0xce, 0x2e, 0xae, 0x6e, 0xee, 0x1e, 0x9e, 0x5e, 0xde, 0x3e, 0xbe, 0x7e, 0xfe, 0x01, 0x81, 0x41, 0xc1, 0x21, 0xa1, 0x61, 0xe1, 0x11, 0x91, 0x51, 0xd1, 0x31, 0xb1, 0x71, 0xf1, 0x09, 0x89, 0x49, 0xc9, 0x29, 0xa9, 0x69, 0xe9, 0x19, 0x99, 0x59, 0xd9, 0x39, 0xb9, 0x79, 0xf9, 0x05, 0x85, 0x45, 0xc5, 0x25, 0xa5, 0x65, 0xe5, 0x15, 0x95, 0x55, 0xd5, 0x35, 0xb5, 0x75, 0xf5, 0x0d, 0x8d, 0x4d, 0xcd, 0x2d, 0xad, 0x6d, 0xed, 0x1d, 0x9d, 0x5d, 0xdd, 0x3d, 0xbd, 0x7d, 0xfd, 0x03, 0x83, 0x43, 0xc3, 0x23, 0xa3, 0x63, 0xe3, 0x13, 0x93, 0x53, 0xd3, 0x33, 0xb3, 0x73, 0xf3, 0x0b, 0x8b, 0x4b, 0xcb, 0x2b, 0xab, 0x6b, 0xeb, 0x1b, 0x9b, 0x5b, 0xdb, 0x3b, 0xbb, 0x7b, 0xfb, 0x07, 0x87, 0x47, 0xc7, 0x27, 0xa7, 0x67, 0xe7, 0x17, 0x97, 0x57, 0xd7, 0x37, 0xb7, 0x77, 0xf7, 0x0f, 0x8f, 0x4f, 0xcf, 0x2f, 0xaf, 0x6f, 0xef, 0x1f, 0x9f, 0x5f, 0xdf, 0x3f, 0xbf, 0x7f, 0xff}));
	_const_math__bits__len_8_tab = new_array_from_c_array(256, 256, sizeof(byte), _MOV((byte[256]){
		((byte)(0x00)), 0x01, 0x02, 0x02, 0x03, 0x03, 0x03, 0x03, 0x04, 0x04, 0x04, 0x04, 0x04, 0x04, 0x04, 0x04, 0x05, 0x05, 0x05, 0x05, 0x05, 0x05, 0x05, 0x05, 0x05, 0x05, 0x05, 0x05, 0x05, 0x05, 0x05, 0x05, 0x06, 0x06, 0x06, 0x06, 0x06, 0x06, 0x06, 0x06, 0x06, 0x06, 0x06, 0x06, 0x06, 0x06, 0x06, 0x06, 0x06, 0x06, 0x06, 0x06, 0x06, 0x06, 0x06, 0x06, 0x06, 0x06, 0x06, 0x06, 0x06, 0x06, 0x06, 0x06, 0x07, 0x07, 0x07, 0x07, 0x07, 0x07, 0x07, 0x07, 0x07, 0x07, 0x07, 0x07, 0x07, 0x07, 0x07, 0x07, 0x07, 0x07, 0x07, 0x07, 0x07, 0x07, 0x07, 0x07, 0x07, 0x07, 0x07, 0x07, 0x07, 0x07, 0x07, 0x07, 0x07, 0x07, 0x07, 0x07, 0x07, 0x07, 0x07, 0x07, 0x07, 0x07, 0x07, 0x07, 0x07, 0x07, 0x07, 0x07, 0x07, 0x07, 0x07, 0x07, 0x07, 0x07, 0x07, 0x07, 0x07, 0x07, 0x07, 0x07, 0x07, 0x07, 0x07, 0x07, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08}));
	// Initializations for module strconv :
	_const_strconv__double_plus_zero = ((u64)(0x0000000000000000U));
	_const_strconv__double_minus_zero = ((u64)(0x8000000000000000U));
	_const_strconv__double_plus_infinity = ((u64)(0x7FF0000000000000U));
	_const_strconv__double_minus_infinity = ((u64)(0xFFF0000000000000U));
	_const_strconv__c_ten = ((u32)(10U));
	_const_strconv__pos_exp = new_array_from_c_array(309, 309, sizeof(u64), _MOV((u64[309]){
		((u64)(0x3ff0000000000000U)), ((u64)(0x4024000000000000U)), ((u64)(0x4059000000000000U)), ((u64)(0x408f400000000000U)), ((u64)(0x40c3880000000000U)), ((u64)(0x40f86a0000000000U)), ((u64)(0x412e848000000000U)), ((u64)(0x416312d000000000U)), ((u64)(0x4197d78400000000U)), ((u64)(0x41cdcd6500000000U)), ((u64)(0x4202a05f20000000U)), ((u64)(0x42374876e8000000U)), ((u64)(0x426d1a94a2000000U)), ((u64)(0x42a2309ce5400000U)), ((u64)(0x42d6bcc41e900000U)), ((u64)(0x430c6bf526340000U)), ((u64)(0x4341c37937e08000U)), ((u64)(0x4376345785d8a000U)), ((u64)(0x43abc16d674ec800U)), ((u64)(0x43e158e460913d00U)), ((u64)(0x4415af1d78b58c40U)), ((u64)(0x444b1ae4d6e2ef50U)), ((u64)(0x4480f0cf064dd592U)), ((u64)(0x44b52d02c7e14af6U)), ((u64)(0x44ea784379d99db4U)), ((u64)(0x45208b2a2c280291U)), ((u64)(0x4554adf4b7320335U)), ((u64)(0x4589d971e4fe8402U)), ((u64)(0x45c027e72f1f1281U)), ((u64)(0x45f431e0fae6d721U)), ((u64)(0x46293e5939a08ceaU)), ((u64)(0x465f8def8808b024U)), ((u64)(0x4693b8b5b5056e17U)), ((u64)(0x46c8a6e32246c99cU)), ((u64)(0x46fed09bead87c03U)), ((u64)(0x4733426172c74d82U)), ((u64)(0x476812f9cf7920e3U)), ((u64)(0x479e17b84357691bU)), ((u64)(0x47d2ced32a16a1b1U)), ((u64)(0x48078287f49c4a1dU)), ((u64)(0x483d6329f1c35ca5U)), ((u64)(0x48725dfa371a19e7U)), ((u64)(0x48a6f578c4e0a061U)), ((u64)(0x48dcb2d6f618c879U)), ((u64)(0x4911efc659cf7d4cU)), ((u64)(0x49466bb7f0435c9eU)), ((u64)(0x497c06a5ec5433c6U)), ((u64)(0x49b18427b3b4a05cU)), ((u64)(0x49e5e531a0a1c873U)), ((u64)(0x4a1b5e7e08ca3a8fU)), ((u64)(0x4a511b0ec57e649aU)), ((u64)(0x4a8561d276ddfdc0U)), ((u64)(0x4ababa4714957d30U)), ((u64)(0x4af0b46c6cdd6e3eU)), ((u64)(0x4b24e1878814c9ceU)), ((u64)(0x4b5a19e96a19fc41U)), ((u64)(0x4b905031e2503da9U)), ((u64)(0x4bc4643e5ae44d13U)), ((u64)(0x4bf97d4df19d6057U)), ((u64)(0x4c2fdca16e04b86dU)), ((u64)(0x4c63e9e4e4c2f344U)), ((u64)(0x4c98e45e1df3b015U)), ((u64)(0x4ccf1d75a5709c1bU)), ((u64)(0x4d03726987666191U)), ((u64)(0x4d384f03e93ff9f5U)), ((u64)(0x4d6e62c4e38ff872U)), ((u64)(0x4da2fdbb0e39fb47U)), ((u64)(0x4dd7bd29d1c87a19U)), ((u64)(0x4e0dac74463a989fU)), ((u64)(0x4e428bc8abe49f64U)), ((u64)(0x4e772ebad6ddc73dU)), ((u64)(0x4eacfa698c95390cU)), ((u64)(0x4ee21c81f7dd43a7U)), ((u64)(0x4f16a3a275d49491U)), ((u64)(0x4f4c4c8b1349b9b5U)), ((u64)(0x4f81afd6ec0e1411U)), ((u64)(0x4fb61bcca7119916U)), ((u64)(0x4feba2bfd0d5ff5bU)), ((u64)(0x502145b7e285bf99U)), ((u64)(0x50559725db272f7fU)), ((u64)(0x508afcef51f0fb5fU)), ((u64)(0x50c0de1593369d1bU)), ((u64)(0x50f5159af8044462U)), ((u64)(0x512a5b01b605557bU)), ((u64)(0x516078e111c3556dU)), ((u64)(0x5194971956342ac8U)), ((u64)(0x51c9bcdfabc1357aU)), ((u64)(0x5200160bcb58c16cU)), ((u64)(0x52341b8ebe2ef1c7U)), ((u64)(0x526922726dbaae39U)), ((u64)(0x529f6b0f092959c7U)), ((u64)(0x52d3a2e965b9d81dU)), ((u64)(0x53088ba3bf284e24U)), ((u64)(0x533eae8caef261adU)), ((u64)(0x53732d17ed577d0cU)), ((u64)(0x53a7f85de8ad5c4fU)), ((u64)(0x53ddf67562d8b363U)), ((u64)(0x5412ba095dc7701eU)), ((u64)(0x5447688bb5394c25U)), ((u64)(0x547d42aea2879f2eU)), ((u64)(0x54b249ad2594c37dU)), ((u64)(0x54e6dc186ef9f45cU)), ((u64)(0x551c931e8ab87173U)), ((u64)(0x5551dbf316b346e8U)), ((u64)(0x558652efdc6018a2U)), ((u64)(0x55bbe7abd3781ecaU)), ((u64)(0x55f170cb642b133fU)), ((u64)(0x5625ccfe3d35d80eU)), ((u64)(0x565b403dcc834e12U)), ((u64)(0x569108269fd210cbU)), ((u64)(0x56c54a3047c694feU)), ((u64)(0x56fa9cbc59b83a3dU)), ((u64)(0x5730a1f5b8132466U)), ((u64)(0x5764ca732617ed80U)), ((u64)(0x5799fd0fef9de8e0U)), ((u64)(0x57d03e29f5c2b18cU)), ((u64)(0x58044db473335defU)), ((u64)(0x583961219000356bU)), ((u64)(0x586fb969f40042c5U)), ((u64)(0x58a3d3e2388029bbU)), ((u64)(0x58d8c8dac6a0342aU)), ((u64)(0x590efb1178484135U)), ((u64)(0x59435ceaeb2d28c1U)), ((u64)(0x59783425a5f872f1U)), ((u64)(0x59ae412f0f768fadU)), ((u64)(0x59e2e8bd69aa19ccU)), ((u64)(0x5a17a2ecc414a03fU)), ((u64)(0x5a4d8ba7f519c84fU)), ((u64)(0x5a827748f9301d32U)), ((u64)(0x5ab7151b377c247eU)), ((u64)(0x5aecda62055b2d9eU)), ((u64)(0x5b22087d4358fc82U)), ((u64)(0x5b568a9c942f3ba3U)), ((u64)(0x5b8c2d43b93b0a8cU)), ((u64)(0x5bc19c4a53c4e697U)), ((u64)(0x5bf6035ce8b6203dU)), ((u64)(0x5c2b843422e3a84dU)), ((u64)(0x5c6132a095ce4930U)), ((u64)(0x5c957f48bb41db7cU)), ((u64)(0x5ccadf1aea12525bU)), ((u64)(0x5d00cb70d24b7379U)), ((u64)(0x5d34fe4d06de5057U)), ((u64)(0x5d6a3de04895e46dU)), ((u64)(0x5da066ac2d5daec4U)), ((u64)(0x5dd4805738b51a75U)), ((u64)(0x5e09a06d06e26112U)), ((u64)(0x5e400444244d7cabU)), ((u64)(0x5e7405552d60dbd6U)), ((u64)(0x5ea906aa78b912ccU)), ((u64)(0x5edf485516e7577fU)), ((u64)(0x5f138d352e5096afU)), ((u64)(0x5f48708279e4bc5bU)), ((u64)(0x5f7e8ca3185deb72U)), ((u64)(0x5fb317e5ef3ab327U)), ((u64)(0x5fe7dddf6b095ff1U)), ((u64)(0x601dd55745cbb7edU)), ((u64)(0x6052a5568b9f52f4U)), ((u64)(0x60874eac2e8727b1U)), ((u64)(0x60bd22573a28f19dU)), ((u64)(0x60f2357684599702U)), ((u64)(0x6126c2d4256ffcc3U)), ((u64)(0x615c73892ecbfbf4U)), ((u64)(0x6191c835bd3f7d78U)), ((u64)(0x61c63a432c8f5cd6U)), ((u64)(0x61fbc8d3f7b3340cU)), ((u64)(0x62315d847ad00087U)), ((u64)(0x6265b4e5998400a9U)), ((u64)(0x629b221effe500d4U)), ((u64)(0x62d0f5535fef2084U)), ((u64)(0x630532a837eae8a5U)), ((u64)(0x633a7f5245e5a2cfU)), ((u64)(0x63708f936baf85c1U)), ((u64)(0x63a4b378469b6732U)), ((u64)(0x63d9e056584240feU)), ((u64)(0x64102c35f729689fU)), ((u64)(0x6444374374f3c2c6U)), ((u64)(0x647945145230b378U)), ((u64)(0x64af965966bce056U)), ((u64)(0x64e3bdf7e0360c36U)), ((u64)(0x6518ad75d8438f43U)), ((u64)(0x654ed8d34e547314U)), ((u64)(0x6583478410f4c7ecU)), ((u64)(0x65b819651531f9e8U)), ((u64)(0x65ee1fbe5a7e7861U)), ((u64)(0x6622d3d6f88f0b3dU)), ((u64)(0x665788ccb6b2ce0cU)), ((u64)(0x668d6affe45f818fU)), ((u64)(0x66c262dfeebbb0f9U)), ((u64)(0x66f6fb97ea6a9d38U)), ((u64)(0x672cba7de5054486U)), ((u64)(0x6761f48eaf234ad4U)), ((u64)(0x679671b25aec1d89U)), ((u64)(0x67cc0e1ef1a724ebU)), ((u64)(0x680188d357087713U)), ((u64)(0x6835eb082cca94d7U)), ((u64)(0x686b65ca37fd3a0dU)), ((u64)(0x68a11f9e62fe4448U)), ((u64)(0x68d56785fbbdd55aU)), ((u64)(0x690ac1677aad4ab1U)), ((u64)(0x6940b8e0acac4eafU)), ((u64)(0x6974e718d7d7625aU)), ((u64)(0x69aa20df0dcd3af1U)), ((u64)(0x69e0548b68a044d6U)), ((u64)(0x6a1469ae42c8560cU)), ((u64)(0x6a498419d37a6b8fU)), ((u64)(0x6a7fe52048590673U)), ((u64)(0x6ab3ef342d37a408U)), ((u64)(0x6ae8eb0138858d0aU)), ((u64)(0x6b1f25c186a6f04cU)), ((u64)(0x6b537798f4285630U)), ((u64)(0x6b88557f31326bbbU)), ((u64)(0x6bbe6adefd7f06aaU)), ((u64)(0x6bf302cb5e6f642aU)), ((u64)(0x6c27c37e360b3d35U)), ((u64)(0x6c5db45dc38e0c82U)), ((u64)(0x6c9290ba9a38c7d1U)), ((u64)(0x6cc734e940c6f9c6U)), ((u64)(0x6cfd022390f8b837U)), ((u64)(0x6d3221563a9b7323U)), ((u64)(0x6d66a9abc9424febU)), ((u64)(0x6d9c5416bb92e3e6U)), ((u64)(0x6dd1b48e353bce70U)), ((u64)(0x6e0621b1c28ac20cU)), ((u64)(0x6e3baa1e332d728fU)), ((u64)(0x6e714a52dffc6799U)), ((u64)(0x6ea59ce797fb817fU)), ((u64)(0x6edb04217dfa61dfU)), ((u64)(0x6f10e294eebc7d2cU)), ((u64)(0x6f451b3a2a6b9c76U)), ((u64)(0x6f7a6208b5068394U)), ((u64)(0x6fb07d457124123dU)), ((u64)(0x6fe49c96cd6d16ccU)), ((u64)(0x7019c3bc80c85c7fU)), ((u64)(0x70501a55d07d39cfU)), ((u64)(0x708420eb449c8843U)), ((u64)(0x70b9292615c3aa54U)), ((u64)(0x70ef736f9b3494e9U)), ((u64)(0x7123a825c100dd11U)), ((u64)(0x7158922f31411456U)), ((u64)(0x718eb6bafd91596bU)), ((u64)(0x71c33234de7ad7e3U)), ((u64)(0x71f7fec216198ddcU)), ((u64)(0x722dfe729b9ff153U)), ((u64)(0x7262bf07a143f6d4U)), ((u64)(0x72976ec98994f489U)), ((u64)(0x72cd4a7bebfa31abU)), ((u64)(0x73024e8d737c5f0bU)), ((u64)(0x7336e230d05b76cdU)), ((u64)(0x736c9abd04725481U)), ((u64)(0x73a1e0b622c774d0U)), ((u64)(0x73d658e3ab795204U)), ((u64)(0x740bef1c9657a686U)), ((u64)(0x74417571ddf6c814U)), ((u64)(0x7475d2ce55747a18U)), ((u64)(0x74ab4781ead1989eU)), ((u64)(0x74e10cb132c2ff63U)), ((u64)(0x75154fdd7f73bf3cU)), ((u64)(0x754aa3d4df50af0bU)), ((u64)(0x7580a6650b926d67U)), ((u64)(0x75b4cffe4e7708c0U)), ((u64)(0x75ea03fde214caf1U)), ((u64)(0x7620427ead4cfed6U)), ((u64)(0x7654531e58a03e8cU)), ((u64)(0x768967e5eec84e2fU)), ((u64)(0x76bfc1df6a7a61bbU)), ((u64)(0x76f3d92ba28c7d15U)), ((u64)(0x7728cf768b2f9c5aU)), ((u64)(0x775f03542dfb8370U)), ((u64)(0x779362149cbd3226U)), ((u64)(0x77c83a99c3ec7eb0U)), ((u64)(0x77fe494034e79e5cU)), ((u64)(0x7832edc82110c2f9U)), ((u64)(0x7867a93a2954f3b8U)), ((u64)(0x789d9388b3aa30a5U)), ((u64)(0x78d27c35704a5e67U)), ((u64)(0x79071b42cc5cf601U)), ((u64)(0x793ce2137f743382U)), ((u64)(0x79720d4c2fa8a031U)), ((u64)(0x79a6909f3b92c83dU)), ((u64)(0x79dc34c70a777a4dU)), ((u64)(0x7a11a0fc668aac70U)), ((u64)(0x7a46093b802d578cU)), ((u64)(0x7a7b8b8a6038ad6fU)), ((u64)(0x7ab137367c236c65U)), ((u64)(0x7ae585041b2c477fU)), ((u64)(0x7b1ae64521f7595eU)), ((u64)(0x7b50cfeb353a97dbU)), ((u64)(0x7b8503e602893dd2U)), ((u64)(0x7bba44df832b8d46U)), ((u64)(0x7bf06b0bb1fb384cU)), ((u64)(0x7c2485ce9e7a065fU)), ((u64)(0x7c59a742461887f6U)), ((u64)(0x7c9008896bcf54faU)), ((u64)(0x7cc40aabc6c32a38U)), ((u64)(0x7cf90d56b873f4c7U)), ((u64)(0x7d2f50ac6690f1f8U)), ((u64)(0x7d63926bc01a973bU)), ((u64)(0x7d987706b0213d0aU)), ((u64)(0x7dce94c85c298c4cU)), ((u64)(0x7e031cfd3999f7b0U)), ((u64)(0x7e37e43c8800759cU)), ((u64)(0x7e6ddd4baa009303U)), ((u64)(0x7ea2aa4f4a405be2U)), ((u64)(0x7ed754e31cd072daU)), ((u64)(0x7f0d2a1be4048f90U)), ((u64)(0x7f423a516e82d9baU)), ((u64)(0x7f76c8e5ca239029U)), ((u64)(0x7fac7b1f3cac7433U)), ((u64)(0x7fe1ccf385ebc8a0U))}));
	_const_strconv__neg_exp = new_array_from_c_array(324, 324, sizeof(u64), _MOV((u64[324]){
		((u64)(0x3ff0000000000000U)), ((u64)(0x3fb999999999999aU)), ((u64)(0x3f847ae147ae147bU)), ((u64)(0x3f50624dd2f1a9fcU)), ((u64)(0x3f1a36e2eb1c432dU)), ((u64)(0x3ee4f8b588e368f1U)), ((u64)(0x3eb0c6f7a0b5ed8dU)), ((u64)(0x3e7ad7f29abcaf48U)), ((u64)(0x3e45798ee2308c3aU)), ((u64)(0x3e112e0be826d695U)), ((u64)(0x3ddb7cdfd9d7bdbbU)), ((u64)(0x3da5fd7fe1796495U)), ((u64)(0x3d719799812dea11U)), ((u64)(0x3d3c25c268497682U)), ((u64)(0x3d06849b86a12b9bU)), ((u64)(0x3cd203af9ee75616U)), ((u64)(0x3c9cd2b297d889bcU)), ((u64)(0x3c670ef54646d497U)), ((u64)(0x3c32725dd1d243acU)), ((u64)(0x3bfd83c94fb6d2acU)), ((u64)(0x3bc79ca10c924223U)), ((u64)(0x3b92e3b40a0e9b4fU)), ((u64)(0x3b5e392010175ee6U)), ((u64)(0x3b282db34012b251U)), ((u64)(0x3af357c299a88ea7U)), ((u64)(0x3abef2d0f5da7dd9U)), ((u64)(0x3a88c240c4aecb14U)), ((u64)(0x3a53ce9a36f23c10U)), ((u64)(0x3a1fb0f6be506019U)), ((u64)(0x39e95a5efea6b347U)), ((u64)(0x39b4484bfeebc2a0U)), ((u64)(0x398039d665896880U)), ((u64)(0x3949f623d5a8a733U)), ((u64)(0x3914c4e977ba1f5cU)), ((u64)(0x38e09d8792fb4c49U)), ((u64)(0x38aa95a5b7f87a0fU)), ((u64)(0x38754484932d2e72U)), ((u64)(0x3841039d428a8b8fU)), ((u64)(0x380b38fb9daa78e4U)), ((u64)(0x37d5c72fb1552d83U)), ((u64)(0x37a16c262777579cU)), ((u64)(0x376be03d0bf225c7U)), ((u64)(0x37364cfda3281e39U)), ((u64)(0x3701d7314f534b61U)), ((u64)(0x36cc8b8218854567U)), ((u64)(0x3696d601ad376ab9U)), ((u64)(0x366244ce242c5561U)), ((u64)(0x362d3ae36d13bbceU)), ((u64)(0x35f7624f8a762fd8U)), ((u64)(0x35c2b50c6ec4f313U)), ((u64)(0x358dee7a4ad4b81fU)), ((u64)(0x3557f1fb6f10934cU)), ((u64)(0x352327fc58da0f70U)), ((u64)(0x34eea6608e29b24dU)), ((u64)(0x34b8851a0b548ea4U)), ((u64)(0x34839dae6f76d883U)), ((u64)(0x344f62b0b257c0d2U)), ((u64)(0x34191bc08eac9a41U)), ((u64)(0x33e41633a556e1ceU)), ((u64)(0x33b011c2eaabe7d8U)), ((u64)(0x3379b604aaaca626U)), ((u64)(0x3344919d5556eb52U)), ((u64)(0x3310747ddddf22a8U)), ((u64)(0x32da53fc9631d10dU)), ((u64)(0x32a50ffd44f4a73dU)), ((u64)(0x3270d9976a5d5297U)), ((u64)(0x323af5bf109550f2U)), ((u64)(0x32059165a6ddda5bU)), ((u64)(0x31d1411e1f17e1e3U)), ((u64)(0x319b9b6364f30304U)), ((u64)(0x316615e91d8f359dU)), ((u64)(0x3131ab20e472914aU)), ((u64)(0x30fc45016d841baaU)), ((u64)(0x30c69d9abe034955U)), ((u64)(0x309217aefe690777U)), ((u64)(0x305cf2b1970e7258U)), ((u64)(0x3027288e1271f513U)), ((u64)(0x2ff286d80ec190dcU)), ((u64)(0x2fbda48ce468e7c7U)), ((u64)(0x2f87b6d71d20b96cU)), ((u64)(0x2f52f8ac174d6123U)), ((u64)(0x2f1e5aacf2156838U)), ((u64)(0x2ee8488a5b445360U)), ((u64)(0x2eb36d3b7c36a91aU)), ((u64)(0x2e7f152bf9f10e90U)), ((u64)(0x2e48ddbcc7f40ba6U)), ((u64)(0x2e13e497065cd61fU)), ((u64)(0x2ddfd424d6faf031U)), ((u64)(0x2da97683df2f268dU)), ((u64)(0x2d745ecfe5bf520bU)), ((u64)(0x2d404bd984990e6fU)), ((u64)(0x2d0a12f5a0f4e3e5U)), ((u64)(0x2cd4dbf7b3f71cb7U)), ((u64)(0x2ca0aff95cc5b092U)), ((u64)(0x2c6ab328946f80eaU)), ((u64)(0x2c355c2076bf9a55U)), ((u64)(0x2c0116805effaeaaU)), ((u64)(0x2bcb5733cb32b111U)), ((u64)(0x2b95df5ca28ef40dU)), ((u64)(0x2b617f7d4ed8c33eU)), ((u64)(0x2b2bff2ee48e0530U)), ((u64)(0x2af665bf1d3e6a8dU)), ((u64)(0x2ac1eaff4a98553dU)), ((u64)(0x2a8cab3210f3bb95U)), ((u64)(0x2a56ef5b40c2fc77U)), ((u64)(0x2a225915cd68c9f9U)), ((u64)(0x29ed5b561574765bU)), ((u64)(0x29b77c44ddf6c516U)), ((u64)(0x2982c9d0b1923745U)), ((u64)(0x294e0fb44f50586eU)), ((u64)(0x29180c903f7379f2U)), ((u64)(0x28e33d4032c2c7f5U)), ((u64)(0x28aec866b79e0cbaU)), ((u64)(0x2878a0522c7e7095U)), ((u64)(0x2843b374f06526deU)), ((u64)(0x280f8587e7083e30U)), ((u64)(0x27d9379fec069826U)), ((u64)(0x27a42c7ff0054685U)), ((u64)(0x277023998cd10537U)), ((u64)(0x2739d28f47b4d525U)), ((u64)(0x2704a8729fc3ddb7U)), ((u64)(0x26d086c219697e2cU)), ((u64)(0x269a71368f0f3047U)), ((u64)(0x2665275ed8d8f36cU)), ((u64)(0x2630ec4be0ad8f89U)), ((u64)(0x25fb13ac9aaf4c0fU)), ((u64)(0x25c5a956e225d672U)), ((u64)(0x2591544581b7dec2U)), ((u64)(0x255bba08cf8c979dU)), ((u64)(0x25262e6d72d6dfb0U)), ((u64)(0x24f1bebdf578b2f4U)), ((u64)(0x24bc6463225ab7ecU)), ((u64)(0x2486b6b5b5155ff0U)), ((u64)(0x24522bc490dde65aU)), ((u64)(0x241d12d41afca3c3U)), ((u64)(0x23e7424348ca1c9cU)), ((u64)(0x23b29b69070816e3U)), ((u64)(0x237dc574d80cf16bU)), ((u64)(0x2347d12a4670c123U)), ((u64)(0x23130dbb6b8d674fU)), ((u64)(0x22de7c5f127bd87eU)), ((u64)(0x22a8637f41fcad32U)), ((u64)(0x227382cc34ca2428U)), ((u64)(0x223f37ad21436d0cU)), ((u64)(0x2208f9574dcf8a70U)), ((u64)(0x21d3faac3e3fa1f3U)), ((u64)(0x219ff779fd329cb9U)), ((u64)(0x216992c7fdc216faU)), ((u64)(0x2134756ccb01abfbU)), ((u64)(0x21005df0a267bcc9U)), ((u64)(0x20ca2fe76a3f9475U)), ((u64)(0x2094f31f8832dd2aU)), ((u64)(0x2060c27fa028b0efU)), ((u64)(0x202ad0cc33744e4bU)), ((u64)(0x1ff573d68f903ea2U)), ((u64)(0x1fc1297872d9cbb5U)), ((u64)(0x1f8b758d848fac55U)), ((u64)(0x1f55f7a46a0c89ddU)), ((u64)(0x1f2192e9ee706e4bU)), ((u64)(0x1eec1e43171a4a11U)), ((u64)(0x1eb67e9c127b6e74U)), ((u64)(0x1e81fee341fc585dU)), ((u64)(0x1e4ccb0536608d61U)), ((u64)(0x1e1708d0f84d3de7U)), ((u64)(0x1de26d73f9d764b9U)), ((u64)(0x1dad7becc2f23ac2U)), ((u64)(0x1d779657025b6235U)), ((u64)(0x1d42deac01e2b4f7U)), ((u64)(0x1d0e3113363787f2U)), ((u64)(0x1cd8274291c6065bU)), ((u64)(0x1ca3529ba7d19eafU)), ((u64)(0x1c6eea92a61c3118U)), ((u64)(0x1c38bba884e35a7aU)), ((u64)(0x1c03c9539d82aec8U)), ((u64)(0x1bcfa885c8d117a6U)), ((u64)(0x1b99539e3a40dfb8U)), ((u64)(0x1b6442e4fb671960U)), ((u64)(0x1b303583fc527ab3U)), ((u64)(0x1af9ef3993b72ab8U)), ((u64)(0x1ac4bf6142f8eefaU)), ((u64)(0x1a90991a9bfa58c8U)), ((u64)(0x1a5a8e90f9908e0dU)), ((u64)(0x1a253eda614071a4U)), ((u64)(0x19f0ff151a99f483U)), ((u64)(0x19bb31bb5dc320d2U)), ((u64)(0x1985c162b168e70eU)), ((u64)(0x1951678227871f3eU)), ((u64)(0x191bd8d03f3e9864U)), ((u64)(0x18e6470cff6546b6U)), ((u64)(0x18b1d270cc51055fU)), ((u64)(0x187c83e7ad4e6efeU)), ((u64)(0x1846cfec8aa52598U)), ((u64)(0x18123ff06eea847aU)), ((u64)(0x17dd331a4b10d3f6U)), ((u64)(0x17a75c1508da432bU)), ((u64)(0x1772b010d3e1cf56U)), ((u64)(0x173de6815302e556U)), ((u64)(0x1707eb9aa8cf1ddeU)), ((u64)(0x16d322e220a5b17eU)), ((u64)(0x169e9e369aa2b597U)), ((u64)(0x16687e92154ef7acU)), ((u64)(0x16339874ddd8c623U)), ((u64)(0x15ff5a549627a36cU)), ((u64)(0x15c91510781fb5f0U)), ((u64)(0x159410d9f9b2f7f3U)), ((u64)(0x15600d7b2e28c65cU)), ((u64)(0x1529af2b7d0e0a2dU)), ((u64)(0x14f48c22ca71a1bdU)), ((u64)(0x14c0701bd527b498U)), ((u64)(0x148a4cf9550c5426U)), ((u64)(0x14550a6110d6a9b8U)), ((u64)(0x1420d51a73deee2dU)), ((u64)(0x13eaee90b964b047U)), ((u64)(0x13b58ba6fab6f36cU)), ((u64)(0x13813c85955f2923U)), ((u64)(0x134b9408eefea839U)), ((u64)(0x1316100725988694U)), ((u64)(0x12e1a66c1e139eddU)), ((u64)(0x12ac3d79c9b8fe2eU)), ((u64)(0x12769794a160cb58U)), ((u64)(0x124212dd4de70913U)), ((u64)(0x120ceafbafd80e85U)), ((u64)(0x11d72262f3133ed1U)), ((u64)(0x11a281e8c275cbdaU)), ((u64)(0x116d9ca79d89462aU)), ((u64)(0x1137b08617a104eeU)), ((u64)(0x1102f39e794d9d8bU)), ((u64)(0x10ce5297287c2f45U)), ((u64)(0x1098421286c9bf6bU)), ((u64)(0x1063680ed23aff89U)), ((u64)(0x102f0ce4839198dbU)), ((u64)(0x0ff8d71d360e13e2U)), ((u64)(0x0fc3df4a91a4dcb5U)), ((u64)(0x0f8fcbaa82a16121U)), ((u64)(0x0f596fbb9bb44db4U)), ((u64)(0x0f245962e2f6a490U)), ((u64)(0x0ef047824f2bb6daU)), ((u64)(0x0eba0c03b1df8af6U)), ((u64)(0x0e84d6695b193bf8U)), ((u64)(0x0e50ab877c142ffaU)), ((u64)(0x0e1aac0bf9b9e65cU)), ((u64)(0x0de5566ffafb1eb0U)), ((u64)(0x0db111f32f2f4bc0U)), ((u64)(0x0d7b4feb7eb212cdU)), ((u64)(0x0d45d98932280f0aU)), ((u64)(0x0d117ad428200c08U)), ((u64)(0x0cdbf7b9d9cce00dU)), ((u64)(0x0ca65fc7e170b33eU)), ((u64)(0x0c71e6398126f5cbU)), ((u64)(0x0c3ca38f350b22dfU)), ((u64)(0x0c06e93f5da2824cU)), ((u64)(0x0bd25432b14ecea3U)), ((u64)(0x0b9d53844ee47dd1U)), ((u64)(0x0b677603725064a8U)), ((u64)(0x0b32c4cf8ea6b6ecU)), ((u64)(0x0afe07b27dd78b14U)), ((u64)(0x0ac8062864ac6f43U)), ((u64)(0x0a9338205089f29cU)), ((u64)(0x0a5ec033b40fea93U)), ((u64)(0x0a2899c2f6732210U)), ((u64)(0x09f3ae3591f5b4d9U)), ((u64)(0x09bf7d228322baf5U)), ((u64)(0x098930e868e89591U)), ((u64)(0x0954272053ed4474U)), ((u64)(0x09201f4d0ff10390U)), ((u64)(0x08e9cbae7fe805b3U)), ((u64)(0x08b4a2f1ffecd15cU)), ((u64)(0x0880825b3323dab0U)), ((u64)(0x084a6a2b85062ab3U)), ((u64)(0x081521bc6a6b555cU)), ((u64)(0x07e0e7c9eebc444aU)), ((u64)(0x07ab0c764ac6d3a9U)), ((u64)(0x0775a391d56bdc87U)), ((u64)(0x07414fa7ddefe3a0U)), ((u64)(0x070bb2a62fe638ffU)), ((u64)(0x06d62884f31e93ffU)), ((u64)(0x06a1ba03f5b21000U)), ((u64)(0x066c5cd322b67fffU)), ((u64)(0x0636b0a8e891ffffU)), ((u64)(0x060226ed86db3333U)), ((u64)(0x05cd0b15a491eb84U)), ((u64)(0x05973c115074bc6aU)), ((u64)(0x05629674405d6388U)), ((u64)(0x052dbd86cd6238d9U)), ((u64)(0x04f7cad23de82d7bU)), ((u64)(0x04c308a831868ac9U)), ((u64)(0x048e74404f3daadbU)), ((u64)(0x04585d003f6488afU)), ((u64)(0x04237d99cc506d59U)), ((u64)(0x03ef2f5c7a1a488eU)), ((u64)(0x03b8f2b061aea072U)), ((u64)(0x0383f559e7bee6c1U)), ((u64)(0x034feef63f97d79cU)), ((u64)(0x03198bf832dfdfb0U)), ((u64)(0x02e46ff9c24cb2f3U)), ((u64)(0x02b059949b708f29U)), ((u64)(0x027a28edc580e50eU)), ((u64)(0x0244ed8b04671da5U)), ((u64)(0x0210be08d0527e1dU)), ((u64)(0x01dac9a7b3b7302fU)), ((u64)(0x01a56e1fc2f8f359U)), ((u64)(0x017124e63593f5e1U)), ((u64)(0x013b6e3d22865634U)), ((u64)(0x0105f1ca820511c3U)), ((u64)(0x00d18e3b9b374169U)), ((u64)(0x009c16c5c5253575U)), ((u64)(0x0066789e3750f791U)), ((u64)(0x0031fa182c40c60dU)), ((u64)(0x000730d67819e8d2U)), ((u64)(0x0000b8157268fdafU)), ((u64)(0x000012688b70e62bU)), ((u64)(0x000001d74124e3d1U)), ((u64)(0x0000002f201d49fbU)), ((u64)(0x00000004b6695433U)), ((u64)(0x0000000078a42205U)), ((u64)(0x000000000c1069cdU)), ((u64)(0x000000000134d761U)), ((u64)(0x00000000001ee257U)), ((u64)(0x00000000000316a2U)), ((u64)(0x0000000000004f10U)), ((u64)(0x00000000000007e8U)), ((u64)(0x00000000000000caU)), ((u64)(0x0000000000000014U)), ((u64)(0x0000000000000002U))}));
	_const_strconv__max_u64 = ((u64)(UINT64_MAX));
	_const_strconv__ten_pow_table_32 = new_array_from_c_array(12, 12, sizeof(u32), _MOV((u32[12]){
		((u32)(1U)), ((u32)(10U)), ((u32)(100U)), ((u32)(1000U)), ((u32)(10000U)), ((u32)(100000U)), ((u32)(1000000U)), ((u32)(10000000U)), ((u32)(100000000U)), ((u32)(1000000000U)), ((u32)(10000000000U)), ((u32)(100000000000U))}));
	_const_strconv__mantbits32 = ((u32)(23U));
	_const_strconv__expbits32 = ((u32)(8U));
	_const_strconv__ten_pow_table_64 = new_array_from_c_array(20, 20, sizeof(u64), _MOV((u64[20]){
		((u64)(1U)), ((u64)(10U)), ((u64)(100U)), ((u64)(1000U)), ((u64)(10000U)), ((u64)(100000U)), ((u64)(1000000U)), ((u64)(10000000U)), ((u64)(100000000U)), ((u64)(1000000000U)), ((u64)(10000000000U)), ((u64)(100000000000U)), ((u64)(1000000000000U)), ((u64)(10000000000000U)), ((u64)(100000000000000U)), ((u64)(1000000000000000U)), ((u64)(10000000000000000U)), ((u64)(100000000000000000U)), ((u64)(1000000000000000000U)), ((u64)(10000000000000000000U))}));
	_const_strconv__mantbits64 = ((u32)(52U));
	_const_strconv__expbits64 = ((u32)(11U));
	_const_strconv__dec_round = new_array_from_c_array(20, 20, sizeof(f64), _MOV((f64[20]){
		((f64)(0.44)), 0.044, 0.0044, 0.00044, 0.000044, 0.0000044, 0.00000044, 0.000000044, 0.0000000044, 0.00000000044, 0.000000000044, 0.0000000000044, 0.00000000000044, 0.000000000000044, 0.0000000000000044, 0.00000000000000044, 0.000000000000000044, 0.0000000000000000044, 0.00000000000000000044, 0.000000000000000000044}));
	_const_strconv__powers_of_10 = new_array_from_c_array(18, 18, sizeof(u64), _MOV((u64[18]){
		((u64)(1e0)), ((u64)(1e1)), ((u64)(1e2)), ((u64)(1e3)), ((u64)(1e4)), ((u64)(1e5)), ((u64)(1e6)), ((u64)(1e7)), ((u64)(1e8)), ((u64)(1e9)), ((u64)(1e10)), ((u64)(1e11)), ((u64)(1e12)), ((u64)(1e13)), ((u64)(1e14)), ((u64)(1e15)), ((u64)(1e16)), ((u64)(1e17))}));
	_const_strconv__pow5_split_32 = new_array_from_c_array(47, 47, sizeof(u64), _MOV((u64[47]){
		((u64)(1152921504606846976U)), ((u64)(1441151880758558720U)), ((u64)(1801439850948198400U)), ((u64)(2251799813685248000U)), ((u64)(1407374883553280000U)), ((u64)(1759218604441600000U)), ((u64)(2199023255552000000U)), ((u64)(1374389534720000000U)), ((u64)(1717986918400000000U)), ((u64)(2147483648000000000U)), ((u64)(1342177280000000000U)), ((u64)(1677721600000000000U)), ((u64)(2097152000000000000U)), ((u64)(1310720000000000000U)), ((u64)(1638400000000000000U)), ((u64)(2048000000000000000U)), ((u64)(1280000000000000000U)), ((u64)(1600000000000000000U)), ((u64)(2000000000000000000U)), ((u64)(1250000000000000000U)), ((u64)(1562500000000000000U)), ((u64)(1953125000000000000U)), ((u64)(1220703125000000000U)), ((u64)(1525878906250000000U)), ((u64)(1907348632812500000U)), ((u64)(1192092895507812500U)), ((u64)(1490116119384765625U)), ((u64)(1862645149230957031U)), ((u64)(1164153218269348144U)), ((u64)(1455191522836685180U)), ((u64)(1818989403545856475U)), ((u64)(2273736754432320594U)), ((u64)(1421085471520200371U)), ((u64)(1776356839400250464U)), ((u64)(2220446049250313080U)), ((u64)(1387778780781445675U)), ((u64)(1734723475976807094U)), ((u64)(2168404344971008868U)), ((u64)(1355252715606880542U)), ((u64)(1694065894508600678U)), ((u64)(2117582368135750847U)), ((u64)(1323488980084844279U)), ((u64)(1654361225106055349U)), ((u64)(2067951531382569187U)), ((u64)(1292469707114105741U)), ((u64)(1615587133892632177U)), ((u64)(2019483917365790221U))}));
	_const_strconv__pow5_inv_split_32 = new_array_from_c_array(31, 31, sizeof(u64), _MOV((u64[31]){
		((u64)(576460752303423489U)), ((u64)(461168601842738791U)), ((u64)(368934881474191033U)), ((u64)(295147905179352826U)), ((u64)(472236648286964522U)), ((u64)(377789318629571618U)), ((u64)(302231454903657294U)), ((u64)(483570327845851670U)), ((u64)(386856262276681336U)), ((u64)(309485009821345069U)), ((u64)(495176015714152110U)), ((u64)(396140812571321688U)), ((u64)(316912650057057351U)), ((u64)(507060240091291761U)), ((u64)(405648192073033409U)), ((u64)(324518553658426727U)), ((u64)(519229685853482763U)), ((u64)(415383748682786211U)), ((u64)(332306998946228969U)), ((u64)(531691198313966350U)), ((u64)(425352958651173080U)), ((u64)(340282366920938464U)), ((u64)(544451787073501542U)), ((u64)(435561429658801234U)), ((u64)(348449143727040987U)), ((u64)(557518629963265579U)), ((u64)(446014903970612463U)), ((u64)(356811923176489971U)), ((u64)(570899077082383953U)), ((u64)(456719261665907162U)), ((u64)(365375409332725730U))}));
	_const_strconv__pow5_split_64 = new_array_from_c_array(326, 326, sizeof(strconv__Uint128), _MOV((strconv__Uint128[326]){
		(strconv__Uint128){.lo = ((u64)(0x0000000000000000U)),.hi = ((u64)(0x0100000000000000U)),}, (strconv__Uint128){.lo = ((u64)(0x0000000000000000U)),.hi = ((u64)(0x0140000000000000U)),}, (strconv__Uint128){.lo = ((u64)(0x0000000000000000U)),.hi = ((u64)(0x0190000000000000U)),}, (strconv__Uint128){.lo = ((u64)(0x0000000000000000U)),.hi = ((u64)(0x01f4000000000000U)),}, (strconv__Uint128){.lo = ((u64)(0x0000000000000000U)),.hi = ((u64)(0x0138800000000000U)),}, (strconv__Uint128){.lo = ((u64)(0x0000000000000000U)),.hi = ((u64)(0x0186a00000000000U)),}, (strconv__Uint128){.lo = ((u64)(0x0000000000000000U)),.hi = ((u64)(0x01e8480000000000U)),}, (strconv__Uint128){.lo = ((u64)(0x0000000000000000U)),.hi = ((u64)(0x01312d0000000000U)),}, (strconv__Uint128){.lo = ((u64)(0x0000000000000000U)),.hi = ((u64)(0x017d784000000000U)),}, (strconv__Uint128){.lo = ((u64)(0x0000000000000000U)),.hi = ((u64)(0x01dcd65000000000U)),}, (strconv__Uint128){.lo = ((u64)(0x0000000000000000U)),.hi = ((u64)(0x012a05f200000000U)),}, (strconv__Uint128){.lo = ((u64)(0x0000000000000000U)),.hi = ((u64)(0x0174876e80000000U)),}, (strconv__Uint128){.lo = ((u64)(0x0000000000000000U)),.hi = ((u64)(0x01d1a94a20000000U)),}, (strconv__Uint128){.lo = ((u64)(0x0000000000000000U)),.hi = ((u64)(0x012309ce54000000U)),}, (strconv__Uint128){.lo = ((u64)(0x0000000000000000U)),.hi = ((u64)(0x016bcc41e9000000U)),}, (strconv__Uint128){.lo = ((u64)(0x0000000000000000U)),.hi = ((u64)(0x01c6bf5263400000U)),}, (strconv__Uint128){.lo = ((u64)(0x0000000000000000U)),.hi = ((u64)(0x011c37937e080000U)),}, (strconv__Uint128){.lo = ((u64)(0x0000000000000000U)),.hi = ((u64)(0x016345785d8a0000U)),}, (strconv__Uint128){.lo = ((u64)(0x0000000000000000U)),.hi = ((u64)(0x01bc16d674ec8000U)),}, (strconv__Uint128){.lo = ((u64)(0x0000000000000000U)),.hi = ((u64)(0x01158e460913d000U)),}, (strconv__Uint128){.lo = ((u64)(0x0000000000000000U)),.hi = ((u64)(0x015af1d78b58c400U)),}, (strconv__Uint128){.lo = ((u64)(0x0000000000000000U)),.hi = ((u64)(0x01b1ae4d6e2ef500U)),}, (strconv__Uint128){.lo = ((u64)(0x0000000000000000U)),.hi = ((u64)(0x010f0cf064dd5920U)),}, (strconv__Uint128){.lo = ((u64)(0x0000000000000000U)),.hi = ((u64)(0x0152d02c7e14af68U)),}, (strconv__Uint128){.lo = ((u64)(0x0000000000000000U)),.hi = ((u64)(0x01a784379d99db42U)),}, (strconv__Uint128){.lo = ((u64)(0x4000000000000000U)),.hi = ((u64)(0x0108b2a2c2802909U)),}, (strconv__Uint128){.lo = ((u64)(0x9000000000000000U)),.hi = ((u64)(0x014adf4b7320334bU)),}, (strconv__Uint128){.lo = ((u64)(0x7400000000000000U)),.hi = ((u64)(0x019d971e4fe8401eU)),}, (strconv__Uint128){.lo = ((u64)(0x0880000000000000U)),.hi = ((u64)(0x01027e72f1f12813U)),}, (strconv__Uint128){.lo = ((u64)(0xcaa0000000000000U)),.hi = ((u64)(0x01431e0fae6d7217U)),}, (strconv__Uint128){.lo = ((u64)(0xbd48000000000000U)),.hi = ((u64)(0x0193e5939a08ce9dU)),}, (strconv__Uint128){.lo = ((u64)(0x2c9a000000000000U)),.hi = ((u64)(0x01f8def8808b0245U)),}, (strconv__Uint128){.lo = ((u64)(0x3be0400000000000U)),.hi = ((u64)(0x013b8b5b5056e16bU)),}, (strconv__Uint128){.lo = ((u64)(0x0ad8500000000000U)),.hi = ((u64)(0x018a6e32246c99c6U)),}, (strconv__Uint128){.lo = ((u64)(0x8d8e640000000000U)),.hi = ((u64)(0x01ed09bead87c037U)),}, (strconv__Uint128){.lo = ((u64)(0xb878fe8000000000U)),.hi = ((u64)(0x013426172c74d822U)),}, (strconv__Uint128){.lo = ((u64)(0x66973e2000000000U)),.hi = ((u64)(0x01812f9cf7920e2bU)),}, (strconv__Uint128){.lo = ((u64)(0x403d0da800000000U)),.hi = ((u64)(0x01e17b84357691b6U)),}, (strconv__Uint128){.lo = ((u64)(0xe826288900000000U)),.hi = ((u64)(0x012ced32a16a1b11U)),}, (strconv__Uint128){.lo = ((u64)(0x622fb2ab40000000U)),.hi = ((u64)(0x0178287f49c4a1d6U)),}, (strconv__Uint128){.lo = ((u64)(0xfabb9f5610000000U)),.hi = ((u64)(0x01d6329f1c35ca4bU)),}, (strconv__Uint128){.lo = ((u64)(0x7cb54395ca000000U)),.hi = ((u64)(0x0125dfa371a19e6fU)),}, (strconv__Uint128){.lo = ((u64)(0x5be2947b3c800000U)),.hi = ((u64)(0x016f578c4e0a060bU)),}, (strconv__Uint128){.lo = ((u64)(0x32db399a0ba00000U)),.hi = ((u64)(0x01cb2d6f618c878eU)),}, (strconv__Uint128){.lo = ((u64)(0xdfc9040047440000U)),.hi = ((u64)(0x011efc659cf7d4b8U)),}, (strconv__Uint128){.lo = ((u64)(0x17bb450059150000U)),.hi = ((u64)(0x0166bb7f0435c9e7U)),}, (strconv__Uint128){.lo = ((u64)(0xddaa16406f5a4000U)),.hi = ((u64)(0x01c06a5ec5433c60U)),}, (strconv__Uint128){.lo = ((u64)(0x8a8a4de845986800U)),.hi = ((u64)(0x0118427b3b4a05bcU)),}, (strconv__Uint128){.lo = ((u64)(0xad2ce16256fe8200U)),.hi = ((u64)(0x015e531a0a1c872bU)),}, (strconv__Uint128){.lo = ((u64)(0x987819baecbe2280U)),.hi = ((u64)(0x01b5e7e08ca3a8f6U)),}, (strconv__Uint128){.lo = ((u64)(0x1f4b1014d3f6d590U)),.hi = ((u64)(0x0111b0ec57e6499aU)),}, (strconv__Uint128){.lo = ((u64)(0xa71dd41a08f48af4U)),.hi = ((u64)(0x01561d276ddfdc00U)),}, (strconv__Uint128){.lo = ((u64)(0xd0e549208b31adb1U)),.hi = ((u64)(0x01aba4714957d300U)),}, (strconv__Uint128){.lo = ((u64)(0x828f4db456ff0c8eU)),.hi = ((u64)(0x010b46c6cdd6e3e0U)),}, (strconv__Uint128){.lo = ((u64)(0xa33321216cbecfb2U)),.hi = ((u64)(0x014e1878814c9cd8U)),}, (strconv__Uint128){.lo = ((u64)(0xcbffe969c7ee839eU)),.hi = ((u64)(0x01a19e96a19fc40eU)),}, (strconv__Uint128){.lo = ((u64)(0x3f7ff1e21cf51243U)),.hi = ((u64)(0x0105031e2503da89U)),}, (strconv__Uint128){.lo = ((u64)(0x8f5fee5aa43256d4U)),.hi = ((u64)(0x014643e5ae44d12bU)),}, (strconv__Uint128){.lo = ((u64)(0x7337e9f14d3eec89U)),.hi = ((u64)(0x0197d4df19d60576U)),}, (strconv__Uint128){.lo = ((u64)(0x1005e46da08ea7abU)),.hi = ((u64)(0x01fdca16e04b86d4U)),}, (strconv__Uint128){.lo = ((u64)(0x8a03aec4845928cbU)),.hi = ((u64)(0x013e9e4e4c2f3444U)),}, (strconv__Uint128){.lo = ((u64)(0xac849a75a56f72fdU)),.hi = ((u64)(0x018e45e1df3b0155U)),}, (strconv__Uint128){.lo = ((u64)(0x17a5c1130ecb4fbdU)),.hi = ((u64)(0x01f1d75a5709c1abU)),}, (strconv__Uint128){.lo = ((u64)(0xeec798abe93f11d6U)),.hi = ((u64)(0x013726987666190aU)),}, (strconv__Uint128){.lo = ((u64)(0xaa797ed6e38ed64bU)),.hi = ((u64)(0x0184f03e93ff9f4dU)),}, (strconv__Uint128){.lo = ((u64)(0x1517de8c9c728bdeU)),.hi = ((u64)(0x01e62c4e38ff8721U)),}, (strconv__Uint128){.lo = ((u64)(0xad2eeb17e1c7976bU)),.hi = ((u64)(0x012fdbb0e39fb474U)),}, (strconv__Uint128){.lo = ((u64)(0xd87aa5ddda397d46U)),.hi = ((u64)(0x017bd29d1c87a191U)),}, (strconv__Uint128){.lo = ((u64)(0x4e994f5550c7dc97U)),.hi = ((u64)(0x01dac74463a989f6U)),}, (strconv__Uint128){.lo = ((u64)(0xf11fd195527ce9deU)),.hi = ((u64)(0x0128bc8abe49f639U)),}, (strconv__Uint128){.lo = ((u64)(0x6d67c5faa71c2456U)),.hi = ((u64)(0x0172ebad6ddc73c8U)),}, (strconv__Uint128){.lo = ((u64)(0x88c1b77950e32d6cU)),.hi = ((u64)(0x01cfa698c95390baU)),}, (strconv__Uint128){.lo = ((u64)(0x957912abd28dfc63U)),.hi = ((u64)(0x0121c81f7dd43a74U)),}, (strconv__Uint128){.lo = ((u64)(0xbad75756c7317b7cU)),.hi = ((u64)(0x016a3a275d494911U)),}, (strconv__Uint128){.lo = ((u64)(0x298d2d2c78fdda5bU)),.hi = ((u64)(0x01c4c8b1349b9b56U)),}, (strconv__Uint128){.lo = ((u64)(0xd9f83c3bcb9ea879U)),.hi = ((u64)(0x011afd6ec0e14115U)),}, (strconv__Uint128){.lo = ((u64)(0x50764b4abe865297U)),.hi = ((u64)(0x0161bcca7119915bU)),}, (strconv__Uint128){.lo = ((u64)(0x2493de1d6e27e73dU)),.hi = ((u64)(0x01ba2bfd0d5ff5b2U)),}, (strconv__Uint128){.lo = ((u64)(0x56dc6ad264d8f086U)),.hi = ((u64)(0x01145b7e285bf98fU)),}, (strconv__Uint128){.lo = ((u64)(0x2c938586fe0f2ca8U)),.hi = ((u64)(0x0159725db272f7f3U)),}, (strconv__Uint128){.lo = ((u64)(0xf7b866e8bd92f7d2U)),.hi = ((u64)(0x01afcef51f0fb5efU)),}, (strconv__Uint128){.lo = ((u64)(0xfad34051767bdae3U)),.hi = ((u64)(0x010de1593369d1b5U)),}, (strconv__Uint128){.lo = ((u64)(0x79881065d41ad19cU)),.hi = ((u64)(0x015159af80444623U)),}, (strconv__Uint128){.lo = ((u64)(0x57ea147f49218603U)),.hi = ((u64)(0x01a5b01b605557acU)),}, (strconv__Uint128){.lo = ((u64)(0xb6f24ccf8db4f3c1U)),.hi = ((u64)(0x01078e111c3556cbU)),}, (strconv__Uint128){.lo = ((u64)(0xa4aee003712230b2U)),.hi = ((u64)(0x014971956342ac7eU)),}, (strconv__Uint128){.lo = ((u64)(0x4dda98044d6abcdfU)),.hi = ((u64)(0x019bcdfabc13579eU)),}, (strconv__Uint128){.lo = ((u64)(0xf0a89f02b062b60bU)),.hi = ((u64)(0x010160bcb58c16c2U)),}, (strconv__Uint128){.lo = ((u64)(0xacd2c6c35c7b638eU)),.hi = ((u64)(0x0141b8ebe2ef1c73U)),}, (strconv__Uint128){.lo = ((u64)(0x98077874339a3c71U)),.hi = ((u64)(0x01922726dbaae390U)),}, (strconv__Uint128){.lo = ((u64)(0xbe0956914080cb8eU)),.hi = ((u64)(0x01f6b0f092959c74U)),}, (strconv__Uint128){.lo = ((u64)(0xf6c5d61ac8507f38U)),.hi = ((u64)(0x013a2e965b9d81c8U)),}, (strconv__Uint128){.lo = ((u64)(0x34774ba17a649f07U)),.hi = ((u64)(0x0188ba3bf284e23bU)),}, (strconv__Uint128){.lo = ((u64)(0x01951e89d8fdc6c8U)),.hi = ((u64)(0x01eae8caef261acaU)),}, (strconv__Uint128){.lo = ((u64)(0x40fd3316279e9c3dU)),.hi = ((u64)(0x0132d17ed577d0beU)),}, (strconv__Uint128){.lo = ((u64)(0xd13c7fdbb186434cU)),.hi = ((u64)(0x017f85de8ad5c4edU)),}, (strconv__Uint128){.lo = ((u64)(0x458b9fd29de7d420U)),.hi = ((u64)(0x01df67562d8b3629U)),}, (strconv__Uint128){.lo = ((u64)(0xcb7743e3a2b0e494U)),.hi = ((u64)(0x012ba095dc7701d9U)),}, (strconv__Uint128){.lo = ((u64)(0x3e5514dc8b5d1db9U)),.hi = ((u64)(0x017688bb5394c250U)),}, (strconv__Uint128){.lo = ((u64)(0x4dea5a13ae346527U)),.hi = ((u64)(0x01d42aea2879f2e4U)),}, (strconv__Uint128){.lo = ((u64)(0xb0b2784c4ce0bf38U)),.hi = ((u64)(0x01249ad2594c37ceU)),}, (strconv__Uint128){.lo = ((u64)(0x5cdf165f6018ef06U)),.hi = ((u64)(0x016dc186ef9f45c2U)),}, (strconv__Uint128){.lo = ((u64)(0xf416dbf7381f2ac8U)),.hi = ((u64)(0x01c931e8ab871732U)),}, (strconv__Uint128){.lo = ((u64)(0xd88e497a83137abdU)),.hi = ((u64)(0x011dbf316b346e7fU)),}, (strconv__Uint128){.lo = ((u64)(0xceb1dbd923d8596cU)),.hi = ((u64)(0x01652efdc6018a1fU)),}, (strconv__Uint128){.lo = ((u64)(0xc25e52cf6cce6fc7U)),.hi = ((u64)(0x01be7abd3781eca7U)),}, (strconv__Uint128){.lo = ((u64)(0xd97af3c1a40105dcU)),.hi = ((u64)(0x01170cb642b133e8U)),}, (strconv__Uint128){.lo = ((u64)(0x0fd9b0b20d014754U)),.hi = ((u64)(0x015ccfe3d35d80e3U)),}, (strconv__Uint128){.lo = ((u64)(0xd3d01cde90419929U)),.hi = ((u64)(0x01b403dcc834e11bU)),}, (strconv__Uint128){.lo = ((u64)(0x6462120b1a28ffb9U)),.hi = ((u64)(0x01108269fd210cb1U)),}, (strconv__Uint128){.lo = ((u64)(0xbd7a968de0b33fa8U)),.hi = ((u64)(0x0154a3047c694fddU)),}, (strconv__Uint128){.lo = ((u64)(0x2cd93c3158e00f92U)),.hi = ((u64)(0x01a9cbc59b83a3d5U)),}, (strconv__Uint128){.lo = ((u64)(0x3c07c59ed78c09bbU)),.hi = ((u64)(0x010a1f5b81324665U)),}, (strconv__Uint128){.lo = ((u64)(0x8b09b7068d6f0c2aU)),.hi = ((u64)(0x014ca732617ed7feU)),}, (strconv__Uint128){.lo = ((u64)(0x2dcc24c830cacf34U)),.hi = ((u64)(0x019fd0fef9de8dfeU)),}, (strconv__Uint128){.lo = ((u64)(0xdc9f96fd1e7ec180U)),.hi = ((u64)(0x0103e29f5c2b18beU)),}, (strconv__Uint128){.lo = ((u64)(0x93c77cbc661e71e1U)),.hi = ((u64)(0x0144db473335deeeU)),}, (strconv__Uint128){.lo = ((u64)(0x38b95beb7fa60e59U)),.hi = ((u64)(0x01961219000356aaU)),}, (strconv__Uint128){.lo = ((u64)(0xc6e7b2e65f8f91efU)),.hi = ((u64)(0x01fb969f40042c54U)),}, (strconv__Uint128){.lo = ((u64)(0xfc50cfcffbb9bb35U)),.hi = ((u64)(0x013d3e2388029bb4U)),}, (strconv__Uint128){.lo = ((u64)(0x3b6503c3faa82a03U)),.hi = ((u64)(0x018c8dac6a0342a2U)),}, (strconv__Uint128){.lo = ((u64)(0xca3e44b4f9523484U)),.hi = ((u64)(0x01efb1178484134aU)),}, (strconv__Uint128){.lo = ((u64)(0xbe66eaf11bd360d2U)),.hi = ((u64)(0x0135ceaeb2d28c0eU)),}, (strconv__Uint128){.lo = ((u64)(0x6e00a5ad62c83907U)),.hi = ((u64)(0x0183425a5f872f12U)),}, (strconv__Uint128){.lo = ((u64)(0x0980cf18bb7a4749U)),.hi = ((u64)(0x01e412f0f768fad7U)),}, (strconv__Uint128){.lo = ((u64)(0x65f0816f752c6c8dU)),.hi = ((u64)(0x012e8bd69aa19cc6U)),}, (strconv__Uint128){.lo = ((u64)(0xff6ca1cb527787b1U)),.hi = ((u64)(0x017a2ecc414a03f7U)),}, (strconv__Uint128){.lo = ((u64)(0xff47ca3e2715699dU)),.hi = ((u64)(0x01d8ba7f519c84f5U)),}, (strconv__Uint128){.lo = ((u64)(0xbf8cde66d86d6202U)),.hi = ((u64)(0x0127748f9301d319U)),}, (strconv__Uint128){.lo = ((u64)(0x2f7016008e88ba83U)),.hi = ((u64)(0x017151b377c247e0U)),}, (strconv__Uint128){.lo = ((u64)(0x3b4c1b80b22ae923U)),.hi = ((u64)(0x01cda62055b2d9d8U)),}, (strconv__Uint128){.lo = ((u64)(0x250f91306f5ad1b6U)),.hi = ((u64)(0x012087d4358fc827U)),}, (strconv__Uint128){.lo = ((u64)(0xee53757c8b318623U)),.hi = ((u64)(0x0168a9c942f3ba30U)),}, (strconv__Uint128){.lo = ((u64)(0x29e852dbadfde7acU)),.hi = ((u64)(0x01c2d43b93b0a8bdU)),}, (strconv__Uint128){.lo = ((u64)(0x3a3133c94cbeb0ccU)),.hi = ((u64)(0x0119c4a53c4e6976U)),}, (strconv__Uint128){.lo = ((u64)(0xc8bd80bb9fee5cffU)),.hi = ((u64)(0x016035ce8b6203d3U)),}, (strconv__Uint128){.lo = ((u64)(0xbaece0ea87e9f43eU)),.hi = ((u64)(0x01b843422e3a84c8U)),}, (strconv__Uint128){.lo = ((u64)(0x74d40c9294f238a7U)),.hi = ((u64)(0x01132a095ce492fdU)),}, (strconv__Uint128){.lo = ((u64)(0xd2090fb73a2ec6d1U)),.hi = ((u64)(0x0157f48bb41db7bcU)),}, (strconv__Uint128){.lo = ((u64)(0x068b53a508ba7885U)),.hi = ((u64)(0x01adf1aea12525acU)),}, (strconv__Uint128){.lo = ((u64)(0x8417144725748b53U)),.hi = ((u64)(0x010cb70d24b7378bU)),}, (strconv__Uint128){.lo = ((u64)(0x651cd958eed1ae28U)),.hi = ((u64)(0x014fe4d06de5056eU)),}, (strconv__Uint128){.lo = ((u64)(0xfe640faf2a8619b2U)),.hi = ((u64)(0x01a3de04895e46c9U)),}, (strconv__Uint128){.lo = ((u64)(0x3efe89cd7a93d00fU)),.hi = ((u64)(0x01066ac2d5daec3eU)),}, (strconv__Uint128){.lo = ((u64)(0xcebe2c40d938c413U)),.hi = ((u64)(0x014805738b51a74dU)),}, (strconv__Uint128){.lo = ((u64)(0x426db7510f86f518U)),.hi = ((u64)(0x019a06d06e261121U)),}, (strconv__Uint128){.lo = ((u64)(0xc9849292a9b4592fU)),.hi = ((u64)(0x0100444244d7cab4U)),}, (strconv__Uint128){.lo = ((u64)(0xfbe5b73754216f7aU)),.hi = ((u64)(0x01405552d60dbd61U)),}, (strconv__Uint128){.lo = ((u64)(0x7adf25052929cb59U)),.hi = ((u64)(0x01906aa78b912cbaU)),}, (strconv__Uint128){.lo = ((u64)(0x1996ee4673743e2fU)),.hi = ((u64)(0x01f485516e7577e9U)),}, (strconv__Uint128){.lo = ((u64)(0xaffe54ec0828a6ddU)),.hi = ((u64)(0x0138d352e5096af1U)),}, (strconv__Uint128){.lo = ((u64)(0x1bfdea270a32d095U)),.hi = ((u64)(0x018708279e4bc5aeU)),}, (strconv__Uint128){.lo = ((u64)(0xa2fd64b0ccbf84baU)),.hi = ((u64)(0x01e8ca3185deb719U)),}, (strconv__Uint128){.lo = ((u64)(0x05de5eee7ff7b2f4U)),.hi = ((u64)(0x01317e5ef3ab3270U)),}, (strconv__Uint128){.lo = ((u64)(0x0755f6aa1ff59fb1U)),.hi = ((u64)(0x017dddf6b095ff0cU)),}, (strconv__Uint128){.lo = ((u64)(0x092b7454a7f3079eU)),.hi = ((u64)(0x01dd55745cbb7ecfU)),}, (strconv__Uint128){.lo = ((u64)(0x65bb28b4e8f7e4c3U)),.hi = ((u64)(0x012a5568b9f52f41U)),}, (strconv__Uint128){.lo = ((u64)(0xbf29f2e22335ddf3U)),.hi = ((u64)(0x0174eac2e8727b11U)),}, (strconv__Uint128){.lo = ((u64)(0x2ef46f9aac035570U)),.hi = ((u64)(0x01d22573a28f19d6U)),}, (strconv__Uint128){.lo = ((u64)(0xdd58c5c0ab821566U)),.hi = ((u64)(0x0123576845997025U)),}, (strconv__Uint128){.lo = ((u64)(0x54aef730d6629ac0U)),.hi = ((u64)(0x016c2d4256ffcc2fU)),}, (strconv__Uint128){.lo = ((u64)(0x29dab4fd0bfb4170U)),.hi = ((u64)(0x01c73892ecbfbf3bU)),}, (strconv__Uint128){.lo = ((u64)(0xfa28b11e277d08e6U)),.hi = ((u64)(0x011c835bd3f7d784U)),}, (strconv__Uint128){.lo = ((u64)(0x38b2dd65b15c4b1fU)),.hi = ((u64)(0x0163a432c8f5cd66U)),}, (strconv__Uint128){.lo = ((u64)(0xc6df94bf1db35de7U)),.hi = ((u64)(0x01bc8d3f7b3340bfU)),}, (strconv__Uint128){.lo = ((u64)(0xdc4bbcf772901ab0U)),.hi = ((u64)(0x0115d847ad000877U)),}, (strconv__Uint128){.lo = ((u64)(0xd35eac354f34215cU)),.hi = ((u64)(0x015b4e5998400a95U)),}, (strconv__Uint128){.lo = ((u64)(0x48365742a30129b4U)),.hi = ((u64)(0x01b221effe500d3bU)),}, (strconv__Uint128){.lo = ((u64)(0x0d21f689a5e0ba10U)),.hi = ((u64)(0x010f5535fef20845U)),}, (strconv__Uint128){.lo = ((u64)(0x506a742c0f58e894U)),.hi = ((u64)(0x01532a837eae8a56U)),}, (strconv__Uint128){.lo = ((u64)(0xe4851137132f22b9U)),.hi = ((u64)(0x01a7f5245e5a2cebU)),}, (strconv__Uint128){.lo = ((u64)(0x6ed32ac26bfd75b4U)),.hi = ((u64)(0x0108f936baf85c13U)),}, (strconv__Uint128){.lo = ((u64)(0x4a87f57306fcd321U)),.hi = ((u64)(0x014b378469b67318U)),}, (strconv__Uint128){.lo = ((u64)(0x5d29f2cfc8bc07e9U)),.hi = ((u64)(0x019e056584240fdeU)),}, (strconv__Uint128){.lo = ((u64)(0xfa3a37c1dd7584f1U)),.hi = ((u64)(0x0102c35f729689eaU)),}, (strconv__Uint128){.lo = ((u64)(0xb8c8c5b254d2e62eU)),.hi = ((u64)(0x014374374f3c2c65U)),}, (strconv__Uint128){.lo = ((u64)(0x26faf71eea079fb9U)),.hi = ((u64)(0x01945145230b377fU)),}, (strconv__Uint128){.lo = ((u64)(0xf0b9b4e6a48987a8U)),.hi = ((u64)(0x01f965966bce055eU)),}, (strconv__Uint128){.lo = ((u64)(0x5674111026d5f4c9U)),.hi = ((u64)(0x013bdf7e0360c35bU)),}, (strconv__Uint128){.lo = ((u64)(0x2c111554308b71fbU)),.hi = ((u64)(0x018ad75d8438f432U)),}, (strconv__Uint128){.lo = ((u64)(0xb7155aa93cae4e7aU)),.hi = ((u64)(0x01ed8d34e547313eU)),}, (strconv__Uint128){.lo = ((u64)(0x326d58a9c5ecf10cU)),.hi = ((u64)(0x013478410f4c7ec7U)),}, (strconv__Uint128){.lo = ((u64)(0xff08aed437682d4fU)),.hi = ((u64)(0x01819651531f9e78U)),}, (strconv__Uint128){.lo = ((u64)(0x3ecada89454238a3U)),.hi = ((u64)(0x01e1fbe5a7e78617U)),}, (strconv__Uint128){.lo = ((u64)(0x873ec895cb496366U)),.hi = ((u64)(0x012d3d6f88f0b3ceU)),}, (strconv__Uint128){.lo = ((u64)(0x290e7abb3e1bbc3fU)),.hi = ((u64)(0x01788ccb6b2ce0c2U)),}, (strconv__Uint128){.lo = ((u64)(0xb352196a0da2ab4fU)),.hi = ((u64)(0x01d6affe45f818f2U)),}, (strconv__Uint128){.lo = ((u64)(0xb0134fe24885ab11U)),.hi = ((u64)(0x01262dfeebbb0f97U)),}, (strconv__Uint128){.lo = ((u64)(0x9c1823dadaa715d6U)),.hi = ((u64)(0x016fb97ea6a9d37dU)),}, (strconv__Uint128){.lo = ((u64)(0x031e2cd19150db4bU)),.hi = ((u64)(0x01cba7de5054485dU)),}, (strconv__Uint128){.lo = ((u64)(0x21f2dc02fad2890fU)),.hi = ((u64)(0x011f48eaf234ad3aU)),}, (strconv__Uint128){.lo = ((u64)(0xaa6f9303b9872b53U)),.hi = ((u64)(0x01671b25aec1d888U)),}, (strconv__Uint128){.lo = ((u64)(0xd50b77c4a7e8f628U)),.hi = ((u64)(0x01c0e1ef1a724eaaU)),}, (strconv__Uint128){.lo = ((u64)(0xc5272adae8f199d9U)),.hi = ((u64)(0x01188d357087712aU)),}, (strconv__Uint128){.lo = ((u64)(0x7670f591a32e004fU)),.hi = ((u64)(0x015eb082cca94d75U)),}, (strconv__Uint128){.lo = ((u64)(0xd40d32f60bf98063U)),.hi = ((u64)(0x01b65ca37fd3a0d2U)),}, (strconv__Uint128){.lo = ((u64)(0xc4883fd9c77bf03eU)),.hi = ((u64)(0x0111f9e62fe44483U)),}, (strconv__Uint128){.lo = ((u64)(0xb5aa4fd0395aec4dU)),.hi = ((u64)(0x0156785fbbdd55a4U)),}, (strconv__Uint128){.lo = ((u64)(0xe314e3c447b1a760U)),.hi = ((u64)(0x01ac1677aad4ab0dU)),}, (strconv__Uint128){.lo = ((u64)(0xaded0e5aaccf089cU)),.hi = ((u64)(0x010b8e0acac4eae8U)),}, (strconv__Uint128){.lo = ((u64)(0xd96851f15802cac3U)),.hi = ((u64)(0x014e718d7d7625a2U)),}, (strconv__Uint128){.lo = ((u64)(0x8fc2666dae037d74U)),.hi = ((u64)(0x01a20df0dcd3af0bU)),}, (strconv__Uint128){.lo = ((u64)(0x39d980048cc22e68U)),.hi = ((u64)(0x010548b68a044d67U)),}, (strconv__Uint128){.lo = ((u64)(0x084fe005aff2ba03U)),.hi = ((u64)(0x01469ae42c8560c1U)),}, (strconv__Uint128){.lo = ((u64)(0x4a63d8071bef6883U)),.hi = ((u64)(0x0198419d37a6b8f1U)),}, (strconv__Uint128){.lo = ((u64)(0x9cfcce08e2eb42a4U)),.hi = ((u64)(0x01fe52048590672dU)),}, (strconv__Uint128){.lo = ((u64)(0x821e00c58dd309a7U)),.hi = ((u64)(0x013ef342d37a407cU)),}, (strconv__Uint128){.lo = ((u64)(0xa2a580f6f147cc10U)),.hi = ((u64)(0x018eb0138858d09bU)),}, (strconv__Uint128){.lo = ((u64)(0x8b4ee134ad99bf15U)),.hi = ((u64)(0x01f25c186a6f04c2U)),}, (strconv__Uint128){.lo = ((u64)(0x97114cc0ec80176dU)),.hi = ((u64)(0x0137798f428562f9U)),}, (strconv__Uint128){.lo = ((u64)(0xfcd59ff127a01d48U)),.hi = ((u64)(0x018557f31326bbb7U)),}, (strconv__Uint128){.lo = ((u64)(0xfc0b07ed7188249aU)),.hi = ((u64)(0x01e6adefd7f06aa5U)),}, (strconv__Uint128){.lo = ((u64)(0xbd86e4f466f516e0U)),.hi = ((u64)(0x01302cb5e6f642a7U)),}, (strconv__Uint128){.lo = ((u64)(0xace89e3180b25c98U)),.hi = ((u64)(0x017c37e360b3d351U)),}, (strconv__Uint128){.lo = ((u64)(0x1822c5bde0def3beU)),.hi = ((u64)(0x01db45dc38e0c826U)),}, (strconv__Uint128){.lo = ((u64)(0xcf15bb96ac8b5857U)),.hi = ((u64)(0x01290ba9a38c7d17U)),}, (strconv__Uint128){.lo = ((u64)(0xc2db2a7c57ae2e6dU)),.hi = ((u64)(0x01734e940c6f9c5dU)),}, (strconv__Uint128){.lo = ((u64)(0x3391f51b6d99ba08U)),.hi = ((u64)(0x01d022390f8b8375U)),}, (strconv__Uint128){.lo = ((u64)(0x403b393124801445U)),.hi = ((u64)(0x01221563a9b73229U)),}, (strconv__Uint128){.lo = ((u64)(0x904a077d6da01956U)),.hi = ((u64)(0x016a9abc9424feb3U)),}, (strconv__Uint128){.lo = ((u64)(0x745c895cc9081facU)),.hi = ((u64)(0x01c5416bb92e3e60U)),}, (strconv__Uint128){.lo = ((u64)(0x48b9d5d9fda513cbU)),.hi = ((u64)(0x011b48e353bce6fcU)),}, (strconv__Uint128){.lo = ((u64)(0x5ae84b507d0e58beU)),.hi = ((u64)(0x01621b1c28ac20bbU)),}, (strconv__Uint128){.lo = ((u64)(0x31a25e249c51eeeeU)),.hi = ((u64)(0x01baa1e332d728eaU)),}, (strconv__Uint128){.lo = ((u64)(0x5f057ad6e1b33554U)),.hi = ((u64)(0x0114a52dffc67992U)),}, (strconv__Uint128){.lo = ((u64)(0xf6c6d98c9a2002aaU)),.hi = ((u64)(0x0159ce797fb817f6U)),}, (strconv__Uint128){.lo = ((u64)(0xb4788fefc0a80354U)),.hi = ((u64)(0x01b04217dfa61df4U)),}, (strconv__Uint128){.lo = ((u64)(0xf0cb59f5d8690214U)),.hi = ((u64)(0x010e294eebc7d2b8U)),}, (strconv__Uint128){.lo = ((u64)(0x2cfe30734e83429aU)),.hi = ((u64)(0x0151b3a2a6b9c767U)),}, (strconv__Uint128){.lo = ((u64)(0xf83dbc9022241340U)),.hi = ((u64)(0x01a6208b50683940U)),}, (strconv__Uint128){.lo = ((u64)(0x9b2695da15568c08U)),.hi = ((u64)(0x0107d457124123c8U)),}, (strconv__Uint128){.lo = ((u64)(0xc1f03b509aac2f0aU)),.hi = ((u64)(0x0149c96cd6d16cbaU)),}, (strconv__Uint128){.lo = ((u64)(0x726c4a24c1573acdU)),.hi = ((u64)(0x019c3bc80c85c7e9U)),}, (strconv__Uint128){.lo = ((u64)(0xe783ae56f8d684c0U)),.hi = ((u64)(0x0101a55d07d39cf1U)),}, (strconv__Uint128){.lo = ((u64)(0x616499ecb70c25f0U)),.hi = ((u64)(0x01420eb449c8842eU)),}, (strconv__Uint128){.lo = ((u64)(0xf9bdc067e4cf2f6cU)),.hi = ((u64)(0x019292615c3aa539U)),}, (strconv__Uint128){.lo = ((u64)(0x782d3081de02fb47U)),.hi = ((u64)(0x01f736f9b3494e88U)),}, (strconv__Uint128){.lo = ((u64)(0x4b1c3e512ac1dd0cU)),.hi = ((u64)(0x013a825c100dd115U)),}, (strconv__Uint128){.lo = ((u64)(0x9de34de57572544fU)),.hi = ((u64)(0x018922f31411455aU)),}, (strconv__Uint128){.lo = ((u64)(0x455c215ed2cee963U)),.hi = ((u64)(0x01eb6bafd91596b1U)),}, (strconv__Uint128){.lo = ((u64)(0xcb5994db43c151deU)),.hi = ((u64)(0x0133234de7ad7e2eU)),}, (strconv__Uint128){.lo = ((u64)(0x7e2ffa1214b1a655U)),.hi = ((u64)(0x017fec216198ddbaU)),}, (strconv__Uint128){.lo = ((u64)(0x1dbbf89699de0febU)),.hi = ((u64)(0x01dfe729b9ff1529U)),}, (strconv__Uint128){.lo = ((u64)(0xb2957b5e202ac9f3U)),.hi = ((u64)(0x012bf07a143f6d39U)),}, (strconv__Uint128){.lo = ((u64)(0x1f3ada35a8357c6fU)),.hi = ((u64)(0x0176ec98994f4888U)),}, (strconv__Uint128){.lo = ((u64)(0x270990c31242db8bU)),.hi = ((u64)(0x01d4a7bebfa31aaaU)),}, (strconv__Uint128){.lo = ((u64)(0x5865fa79eb69c937U)),.hi = ((u64)(0x0124e8d737c5f0aaU)),}, (strconv__Uint128){.lo = ((u64)(0xee7f791866443b85U)),.hi = ((u64)(0x016e230d05b76cd4U)),}, (strconv__Uint128){.lo = ((u64)(0x2a1f575e7fd54a66U)),.hi = ((u64)(0x01c9abd04725480aU)),}, (strconv__Uint128){.lo = ((u64)(0x5a53969b0fe54e80U)),.hi = ((u64)(0x011e0b622c774d06U)),}, (strconv__Uint128){.lo = ((u64)(0xf0e87c41d3dea220U)),.hi = ((u64)(0x01658e3ab7952047U)),}, (strconv__Uint128){.lo = ((u64)(0xed229b5248d64aa8U)),.hi = ((u64)(0x01bef1c9657a6859U)),}, (strconv__Uint128){.lo = ((u64)(0x3435a1136d85eea9U)),.hi = ((u64)(0x0117571ddf6c8138U)),}, (strconv__Uint128){.lo = ((u64)(0x4143095848e76a53U)),.hi = ((u64)(0x015d2ce55747a186U)),}, (strconv__Uint128){.lo = ((u64)(0xd193cbae5b2144e8U)),.hi = ((u64)(0x01b4781ead1989e7U)),}, (strconv__Uint128){.lo = ((u64)(0xe2fc5f4cf8f4cb11U)),.hi = ((u64)(0x0110cb132c2ff630U)),}, (strconv__Uint128){.lo = ((u64)(0x1bbb77203731fdd5U)),.hi = ((u64)(0x0154fdd7f73bf3bdU)),}, (strconv__Uint128){.lo = ((u64)(0x62aa54e844fe7d4aU)),.hi = ((u64)(0x01aa3d4df50af0acU)),}, (strconv__Uint128){.lo = ((u64)(0xbdaa75112b1f0e4eU)),.hi = ((u64)(0x010a6650b926d66bU)),}, (strconv__Uint128){.lo = ((u64)(0xad15125575e6d1e2U)),.hi = ((u64)(0x014cffe4e7708c06U)),}, (strconv__Uint128){.lo = ((u64)(0x585a56ead360865bU)),.hi = ((u64)(0x01a03fde214caf08U)),}, (strconv__Uint128){.lo = ((u64)(0x37387652c41c53f8U)),.hi = ((u64)(0x010427ead4cfed65U)),}, (strconv__Uint128){.lo = ((u64)(0x850693e7752368f7U)),.hi = ((u64)(0x014531e58a03e8beU)),}, (strconv__Uint128){.lo = ((u64)(0x264838e1526c4334U)),.hi = ((u64)(0x01967e5eec84e2eeU)),}, (strconv__Uint128){.lo = ((u64)(0xafda4719a7075402U)),.hi = ((u64)(0x01fc1df6a7a61ba9U)),}, (strconv__Uint128){.lo = ((u64)(0x0de86c7008649481U)),.hi = ((u64)(0x013d92ba28c7d14aU)),}, (strconv__Uint128){.lo = ((u64)(0x9162878c0a7db9a1U)),.hi = ((u64)(0x018cf768b2f9c59cU)),}, (strconv__Uint128){.lo = ((u64)(0xb5bb296f0d1d280aU)),.hi = ((u64)(0x01f03542dfb83703U)),}, (strconv__Uint128){.lo = ((u64)(0x5194f9e568323906U)),.hi = ((u64)(0x01362149cbd32262U)),}, (strconv__Uint128){.lo = ((u64)(0xe5fa385ec23ec747U)),.hi = ((u64)(0x0183a99c3ec7eafaU)),}, (strconv__Uint128){.lo = ((u64)(0x9f78c67672ce7919U)),.hi = ((u64)(0x01e494034e79e5b9U)),}, (strconv__Uint128){.lo = ((u64)(0x03ab7c0a07c10bb0U)),.hi = ((u64)(0x012edc82110c2f94U)),}, (strconv__Uint128){.lo = ((u64)(0x04965b0c89b14e9cU)),.hi = ((u64)(0x017a93a2954f3b79U)),}, (strconv__Uint128){.lo = ((u64)(0x45bbf1cfac1da243U)),.hi = ((u64)(0x01d9388b3aa30a57U)),}, (strconv__Uint128){.lo = ((u64)(0x8b957721cb92856aU)),.hi = ((u64)(0x0127c35704a5e676U)),}, (strconv__Uint128){.lo = ((u64)(0x2e7ad4ea3e7726c4U)),.hi = ((u64)(0x0171b42cc5cf6014U)),}, (strconv__Uint128){.lo = ((u64)(0x3a198a24ce14f075U)),.hi = ((u64)(0x01ce2137f7433819U)),}, (strconv__Uint128){.lo = ((u64)(0xc44ff65700cd1649U)),.hi = ((u64)(0x0120d4c2fa8a030fU)),}, (strconv__Uint128){.lo = ((u64)(0xb563f3ecc1005bdbU)),.hi = ((u64)(0x016909f3b92c83d3U)),}, (strconv__Uint128){.lo = ((u64)(0xa2bcf0e7f14072d2U)),.hi = ((u64)(0x01c34c70a777a4c8U)),}, (strconv__Uint128){.lo = ((u64)(0x65b61690f6c847c3U)),.hi = ((u64)(0x011a0fc668aac6fdU)),}, (strconv__Uint128){.lo = ((u64)(0xbf239c35347a59b4U)),.hi = ((u64)(0x016093b802d578bcU)),}, (strconv__Uint128){.lo = ((u64)(0xeeec83428198f021U)),.hi = ((u64)(0x01b8b8a6038ad6ebU)),}, (strconv__Uint128){.lo = ((u64)(0x7553d20990ff9615U)),.hi = ((u64)(0x01137367c236c653U)),}, (strconv__Uint128){.lo = ((u64)(0x52a8c68bf53f7b9aU)),.hi = ((u64)(0x01585041b2c477e8U)),}, (strconv__Uint128){.lo = ((u64)(0x6752f82ef28f5a81U)),.hi = ((u64)(0x01ae64521f7595e2U)),}, (strconv__Uint128){.lo = ((u64)(0x8093db1d57999890U)),.hi = ((u64)(0x010cfeb353a97dadU)),}, (strconv__Uint128){.lo = ((u64)(0xe0b8d1e4ad7ffeb4U)),.hi = ((u64)(0x01503e602893dd18U)),}, (strconv__Uint128){.lo = ((u64)(0x18e7065dd8dffe62U)),.hi = ((u64)(0x01a44df832b8d45fU)),}, (strconv__Uint128){.lo = ((u64)(0x6f9063faa78bfefdU)),.hi = ((u64)(0x0106b0bb1fb384bbU)),}, (strconv__Uint128){.lo = ((u64)(0x4b747cf9516efebcU)),.hi = ((u64)(0x01485ce9e7a065eaU)),}, (strconv__Uint128){.lo = ((u64)(0xde519c37a5cabe6bU)),.hi = ((u64)(0x019a742461887f64U)),}, (strconv__Uint128){.lo = ((u64)(0x0af301a2c79eb703U)),.hi = ((u64)(0x01008896bcf54f9fU)),}, (strconv__Uint128){.lo = ((u64)(0xcdafc20b798664c4U)),.hi = ((u64)(0x0140aabc6c32a386U)),}, (strconv__Uint128){.lo = ((u64)(0x811bb28e57e7fdf5U)),.hi = ((u64)(0x0190d56b873f4c68U)),}, (strconv__Uint128){.lo = ((u64)(0xa1629f31ede1fd72U)),.hi = ((u64)(0x01f50ac6690f1f82U)),}, (strconv__Uint128){.lo = ((u64)(0xa4dda37f34ad3e67U)),.hi = ((u64)(0x013926bc01a973b1U)),}, (strconv__Uint128){.lo = ((u64)(0x0e150c5f01d88e01U)),.hi = ((u64)(0x0187706b0213d09eU)),}, (strconv__Uint128){.lo = ((u64)(0x919a4f76c24eb181U)),.hi = ((u64)(0x01e94c85c298c4c5U)),}, (strconv__Uint128){.lo = ((u64)(0x7b0071aa39712ef1U)),.hi = ((u64)(0x0131cfd3999f7afbU)),}, (strconv__Uint128){.lo = ((u64)(0x59c08e14c7cd7aadU)),.hi = ((u64)(0x017e43c8800759baU)),}, (strconv__Uint128){.lo = ((u64)(0xf030b199f9c0d958U)),.hi = ((u64)(0x01ddd4baa0093028U)),}, (strconv__Uint128){.lo = ((u64)(0x961e6f003c1887d7U)),.hi = ((u64)(0x012aa4f4a405be19U)),}, (strconv__Uint128){.lo = ((u64)(0xfba60ac04b1ea9cdU)),.hi = ((u64)(0x01754e31cd072d9fU)),}, (strconv__Uint128){.lo = ((u64)(0xfa8f8d705de65440U)),.hi = ((u64)(0x01d2a1be4048f907U)),}, (strconv__Uint128){.lo = ((u64)(0xfc99b8663aaff4a8U)),.hi = ((u64)(0x0123a516e82d9ba4U)),}, (strconv__Uint128){.lo = ((u64)(0x3bc0267fc95bf1d2U)),.hi = ((u64)(0x016c8e5ca239028eU)),}, (strconv__Uint128){.lo = ((u64)(0xcab0301fbbb2ee47U)),.hi = ((u64)(0x01c7b1f3cac74331U)),}, (strconv__Uint128){.lo = ((u64)(0x1eae1e13d54fd4ecU)),.hi = ((u64)(0x011ccf385ebc89ffU)),}, (strconv__Uint128){.lo = ((u64)(0xe659a598caa3ca27U)),.hi = ((u64)(0x01640306766bac7eU)),}, (strconv__Uint128){.lo = ((u64)(0x9ff00efefd4cbcb1U)),.hi = ((u64)(0x01bd03c81406979eU)),}, (strconv__Uint128){.lo = ((u64)(0x23f6095f5e4ff5efU)),.hi = ((u64)(0x0116225d0c841ec3U)),}, (strconv__Uint128){.lo = ((u64)(0xecf38bb735e3f36aU)),.hi = ((u64)(0x015baaf44fa52673U)),}, (strconv__Uint128){.lo = ((u64)(0xe8306ea5035cf045U)),.hi = ((u64)(0x01b295b1638e7010U)),}, (strconv__Uint128){.lo = ((u64)(0x911e4527221a162bU)),.hi = ((u64)(0x010f9d8ede39060aU)),}, (strconv__Uint128){.lo = ((u64)(0x3565d670eaa09bb6U)),.hi = ((u64)(0x015384f295c7478dU)),}, (strconv__Uint128){.lo = ((u64)(0x82bf4c0d2548c2a3U)),.hi = ((u64)(0x01a8662f3b391970U)),}, (strconv__Uint128){.lo = ((u64)(0x51b78f88374d79a6U)),.hi = ((u64)(0x01093fdd8503afe6U)),}, (strconv__Uint128){.lo = ((u64)(0xe625736a4520d810U)),.hi = ((u64)(0x014b8fd4e6449bdfU)),}, (strconv__Uint128){.lo = ((u64)(0xdfaed044d6690e14U)),.hi = ((u64)(0x019e73ca1fd5c2d7U)),}, (strconv__Uint128){.lo = ((u64)(0xebcd422b0601a8ccU)),.hi = ((u64)(0x0103085e53e599c6U)),}, (strconv__Uint128){.lo = ((u64)(0xa6c092b5c78212ffU)),.hi = ((u64)(0x0143ca75e8df0038U)),}, (strconv__Uint128){.lo = ((u64)(0xd070b763396297bfU)),.hi = ((u64)(0x0194bd136316c046U)),}, (strconv__Uint128){.lo = ((u64)(0x848ce53c07bb3dafU)),.hi = ((u64)(0x01f9ec583bdc7058U)),}, (strconv__Uint128){.lo = ((u64)(0x52d80f4584d5068dU)),.hi = ((u64)(0x013c33b72569c637U)),}, (strconv__Uint128){.lo = ((u64)(0x278e1316e60a4831U)),.hi = ((u64)(0x018b40a4eec437c5U)),}}));
	_const_strconv__pow5_inv_split_64 = new_array_from_c_array(292, 292, sizeof(strconv__Uint128), _MOV((strconv__Uint128[292]){
		(strconv__Uint128){.lo = ((u64)(0x0000000000000001U)),.hi = ((u64)(0x0400000000000000U)),}, (strconv__Uint128){.lo = ((u64)(0x3333333333333334U)),.hi = ((u64)(0x0333333333333333U)),}, (strconv__Uint128){.lo = ((u64)(0x28f5c28f5c28f5c3U)),.hi = ((u64)(0x028f5c28f5c28f5cU)),}, (strconv__Uint128){.lo = ((u64)(0xed916872b020c49cU)),.hi = ((u64)(0x020c49ba5e353f7cU)),}, (strconv__Uint128){.lo = ((u64)(0xaf4f0d844d013a93U)),.hi = ((u64)(0x0346dc5d63886594U)),}, (strconv__Uint128){.lo = ((u64)(0x8c3f3e0370cdc876U)),.hi = ((u64)(0x029f16b11c6d1e10U)),}, (strconv__Uint128){.lo = ((u64)(0xd698fe69270b06c5U)),.hi = ((u64)(0x0218def416bdb1a6U)),}, (strconv__Uint128){.lo = ((u64)(0xf0f4ca41d811a46eU)),.hi = ((u64)(0x035afe535795e90aU)),}, (strconv__Uint128){.lo = ((u64)(0xf3f70834acdae9f1U)),.hi = ((u64)(0x02af31dc4611873bU)),}, (strconv__Uint128){.lo = ((u64)(0x5cc5a02a23e254c1U)),.hi = ((u64)(0x0225c17d04dad296U)),}, (strconv__Uint128){.lo = ((u64)(0xfad5cd10396a2135U)),.hi = ((u64)(0x036f9bfb3af7b756U)),}, (strconv__Uint128){.lo = ((u64)(0xfbde3da69454e75eU)),.hi = ((u64)(0x02bfaffc2f2c92abU)),}, (strconv__Uint128){.lo = ((u64)(0x2fe4fe1edd10b918U)),.hi = ((u64)(0x0232f33025bd4223U)),}, (strconv__Uint128){.lo = ((u64)(0x4ca19697c81ac1bfU)),.hi = ((u64)(0x0384b84d092ed038U)),}, (strconv__Uint128){.lo = ((u64)(0x3d4e1213067bce33U)),.hi = ((u64)(0x02d09370d4257360U)),}, (strconv__Uint128){.lo = ((u64)(0x643e74dc052fd829U)),.hi = ((u64)(0x024075f3dceac2b3U)),}, (strconv__Uint128){.lo = ((u64)(0x6d30baf9a1e626a7U)),.hi = ((u64)(0x039a5652fb113785U)),}, (strconv__Uint128){.lo = ((u64)(0x2426fbfae7eb5220U)),.hi = ((u64)(0x02e1dea8c8da92d1U)),}, (strconv__Uint128){.lo = ((u64)(0x1cebfcc8b9890e80U)),.hi = ((u64)(0x024e4bba3a487574U)),}, (strconv__Uint128){.lo = ((u64)(0x94acc7a78f41b0ccU)),.hi = ((u64)(0x03b07929f6da5586U)),}, (strconv__Uint128){.lo = ((u64)(0xaa23d2ec729af3d7U)),.hi = ((u64)(0x02f394219248446bU)),}, (strconv__Uint128){.lo = ((u64)(0xbb4fdbf05baf2979U)),.hi = ((u64)(0x025c768141d369efU)),}, (strconv__Uint128){.lo = ((u64)(0xc54c931a2c4b758dU)),.hi = ((u64)(0x03c7240202ebdcb2U)),}, (strconv__Uint128){.lo = ((u64)(0x9dd6dc14f03c5e0bU)),.hi = ((u64)(0x0305b66802564a28U)),}, (strconv__Uint128){.lo = ((u64)(0x4b1249aa59c9e4d6U)),.hi = ((u64)(0x026af8533511d4edU)),}, (strconv__Uint128){.lo = ((u64)(0x44ea0f76f60fd489U)),.hi = ((u64)(0x03de5a1ebb4fbb15U)),}, (strconv__Uint128){.lo = ((u64)(0x6a54d92bf80caa07U)),.hi = ((u64)(0x0318481895d96277U)),}, (strconv__Uint128){.lo = ((u64)(0x21dd7a89933d54d2U)),.hi = ((u64)(0x0279d346de4781f9U)),}, (strconv__Uint128){.lo = ((u64)(0x362f2a75b8622150U)),.hi = ((u64)(0x03f61ed7ca0c0328U)),}, (strconv__Uint128){.lo = ((u64)(0xf825bb91604e810dU)),.hi = ((u64)(0x032b4bdfd4d668ecU)),}, (strconv__Uint128){.lo = ((u64)(0xc684960de6a5340bU)),.hi = ((u64)(0x0289097fdd7853f0U)),}, (strconv__Uint128){.lo = ((u64)(0xd203ab3e521dc33cU)),.hi = ((u64)(0x02073accb12d0ff3U)),}, (strconv__Uint128){.lo = ((u64)(0xe99f7863b696052cU)),.hi = ((u64)(0x033ec47ab514e652U)),}, (strconv__Uint128){.lo = ((u64)(0x87b2c6b62bab3757U)),.hi = ((u64)(0x02989d2ef743eb75U)),}, (strconv__Uint128){.lo = ((u64)(0xd2f56bc4efbc2c45U)),.hi = ((u64)(0x0213b0f25f69892aU)),}, (strconv__Uint128){.lo = ((u64)(0x1e55793b192d13a2U)),.hi = ((u64)(0x0352b4b6ff0f41deU)),}, (strconv__Uint128){.lo = ((u64)(0x4b77942f475742e8U)),.hi = ((u64)(0x02a8909265a5ce4bU)),}, (strconv__Uint128){.lo = ((u64)(0xd5f9435905df68baU)),.hi = ((u64)(0x022073a8515171d5U)),}, (strconv__Uint128){.lo = ((u64)(0x565b9ef4d6324129U)),.hi = ((u64)(0x03671f73b54f1c89U)),}, (strconv__Uint128){.lo = ((u64)(0xdeafb25d78283421U)),.hi = ((u64)(0x02b8e5f62aa5b06dU)),}, (strconv__Uint128){.lo = ((u64)(0x188c8eb12cecf681U)),.hi = ((u64)(0x022d84c4eeeaf38bU)),}, (strconv__Uint128){.lo = ((u64)(0x8dadb11b7b14bd9bU)),.hi = ((u64)(0x037c07a17e44b8deU)),}, (strconv__Uint128){.lo = ((u64)(0x7157c0e2c8dd647cU)),.hi = ((u64)(0x02c99fb46503c718U)),}, (strconv__Uint128){.lo = ((u64)(0x8ddfcd823a4ab6caU)),.hi = ((u64)(0x023ae629ea696c13U)),}, (strconv__Uint128){.lo = ((u64)(0x1632e269f6ddf142U)),.hi = ((u64)(0x0391704310a8acecU)),}, (strconv__Uint128){.lo = ((u64)(0x44f581ee5f17f435U)),.hi = ((u64)(0x02dac035a6ed5723U)),}, (strconv__Uint128){.lo = ((u64)(0x372ace584c1329c4U)),.hi = ((u64)(0x024899c4858aac1cU)),}, (strconv__Uint128){.lo = ((u64)(0xbeaae3c079b842d3U)),.hi = ((u64)(0x03a75c6da27779c6U)),}, (strconv__Uint128){.lo = ((u64)(0x6555830061603576U)),.hi = ((u64)(0x02ec49f14ec5fb05U)),}, (strconv__Uint128){.lo = ((u64)(0xb7779c004de6912bU)),.hi = ((u64)(0x0256a18dd89e626aU)),}, (strconv__Uint128){.lo = ((u64)(0xf258f99a163db512U)),.hi = ((u64)(0x03bdcf495a9703ddU)),}, (strconv__Uint128){.lo = ((u64)(0x5b7a614811caf741U)),.hi = ((u64)(0x02fe3f6de212697eU)),}, (strconv__Uint128){.lo = ((u64)(0xaf951aa00e3bf901U)),.hi = ((u64)(0x0264ff8b1b41edfeU)),}, (strconv__Uint128){.lo = ((u64)(0x7f54f7667d2cc19bU)),.hi = ((u64)(0x03d4cc11c5364997U)),}, (strconv__Uint128){.lo = ((u64)(0x32aa5f8530f09ae3U)),.hi = ((u64)(0x0310a3416a91d479U)),}, (strconv__Uint128){.lo = ((u64)(0xf55519375a5a1582U)),.hi = ((u64)(0x0273b5cdeedb1060U)),}, (strconv__Uint128){.lo = ((u64)(0xbbbb5b8bc3c3559dU)),.hi = ((u64)(0x03ec56164af81a34U)),}, (strconv__Uint128){.lo = ((u64)(0x2fc916096969114aU)),.hi = ((u64)(0x03237811d593482aU)),}, (strconv__Uint128){.lo = ((u64)(0x596dab3ababa743cU)),.hi = ((u64)(0x0282c674aadc39bbU)),}, (strconv__Uint128){.lo = ((u64)(0x478aef622efb9030U)),.hi = ((u64)(0x0202385d557cfafcU)),}, (strconv__Uint128){.lo = ((u64)(0xd8de4bd04b2c19e6U)),.hi = ((u64)(0x0336c0955594c4c6U)),}, (strconv__Uint128){.lo = ((u64)(0xad7ea30d08f014b8U)),.hi = ((u64)(0x029233aaaadd6a38U)),}, (strconv__Uint128){.lo = ((u64)(0x24654f3da0c01093U)),.hi = ((u64)(0x020e8fbbbbe454faU)),}, (strconv__Uint128){.lo = ((u64)(0x3a3bb1fc346680ebU)),.hi = ((u64)(0x034a7f92c63a2190U)),}, (strconv__Uint128){.lo = ((u64)(0x94fc8e635d1ecd89U)),.hi = ((u64)(0x02a1ffa89e94e7a6U)),}, (strconv__Uint128){.lo = ((u64)(0xaa63a51c4a7f0ad4U)),.hi = ((u64)(0x021b32ed4baa52ebU)),}, (strconv__Uint128){.lo = ((u64)(0xdd6c3b607731aaedU)),.hi = ((u64)(0x035eb7e212aa1e45U)),}, (strconv__Uint128){.lo = ((u64)(0x1789c919f8f488bdU)),.hi = ((u64)(0x02b22cb4dbbb4b6bU)),}, (strconv__Uint128){.lo = ((u64)(0xac6e3a7b2d906d64U)),.hi = ((u64)(0x022823c3e2fc3c55U)),}, (strconv__Uint128){.lo = ((u64)(0x13e390c515b3e23aU)),.hi = ((u64)(0x03736c6c9e606089U)),}, (strconv__Uint128){.lo = ((u64)(0xdcb60d6a77c31b62U)),.hi = ((u64)(0x02c2bd23b1e6b3a0U)),}, (strconv__Uint128){.lo = ((u64)(0x7d5e7121f968e2b5U)),.hi = ((u64)(0x0235641c8e52294dU)),}, (strconv__Uint128){.lo = ((u64)(0xc8971b698f0e3787U)),.hi = ((u64)(0x0388a02db0837548U)),}, (strconv__Uint128){.lo = ((u64)(0xa078e2bad8d82c6cU)),.hi = ((u64)(0x02d3b357c0692aa0U)),}, (strconv__Uint128){.lo = ((u64)(0xe6c71bc8ad79bd24U)),.hi = ((u64)(0x0242f5dfcd20eee6U)),}, (strconv__Uint128){.lo = ((u64)(0x0ad82c7448c2c839U)),.hi = ((u64)(0x039e5632e1ce4b0bU)),}, (strconv__Uint128){.lo = ((u64)(0x3be023903a356cfaU)),.hi = ((u64)(0x02e511c24e3ea26fU)),}, (strconv__Uint128){.lo = ((u64)(0x2fe682d9c82abd95U)),.hi = ((u64)(0x0250db01d8321b8cU)),}, (strconv__Uint128){.lo = ((u64)(0x4ca4048fa6aac8eeU)),.hi = ((u64)(0x03b4919c8d1cf8e0U)),}, (strconv__Uint128){.lo = ((u64)(0x3d5003a61eef0725U)),.hi = ((u64)(0x02f6dae3a4172d80U)),}, (strconv__Uint128){.lo = ((u64)(0x9773361e7f259f51U)),.hi = ((u64)(0x025f1582e9ac2466U)),}, (strconv__Uint128){.lo = ((u64)(0x8beb89ca6508fee8U)),.hi = ((u64)(0x03cb559e42ad070aU)),}, (strconv__Uint128){.lo = ((u64)(0x6fefa16eb73a6586U)),.hi = ((u64)(0x0309114b688a6c08U)),}, (strconv__Uint128){.lo = ((u64)(0xf3261abef8fb846bU)),.hi = ((u64)(0x026da76f86d52339U)),}, (strconv__Uint128){.lo = ((u64)(0x51d691318e5f3a45U)),.hi = ((u64)(0x03e2a57f3e21d1f6U)),}, (strconv__Uint128){.lo = ((u64)(0x0e4540f471e5c837U)),.hi = ((u64)(0x031bb798fe8174c5U)),}, (strconv__Uint128){.lo = ((u64)(0xd8376729f4b7d360U)),.hi = ((u64)(0x027c92e0cb9ac3d0U)),}, (strconv__Uint128){.lo = ((u64)(0xf38bd84321261effU)),.hi = ((u64)(0x03fa849adf5e061aU)),}, (strconv__Uint128){.lo = ((u64)(0x293cad0280eb4bffU)),.hi = ((u64)(0x032ed07be5e4d1afU)),}, (strconv__Uint128){.lo = ((u64)(0xedca240200bc3cccU)),.hi = ((u64)(0x028bd9fcb7ea4158U)),}, (strconv__Uint128){.lo = ((u64)(0xbe3b50019a3030a4U)),.hi = ((u64)(0x02097b309321cde0U)),}, (strconv__Uint128){.lo = ((u64)(0xc9f88002904d1a9fU)),.hi = ((u64)(0x03425eb41e9c7c9aU)),}, (strconv__Uint128){.lo = ((u64)(0x3b2d3335403daee6U)),.hi = ((u64)(0x029b7ef67ee396e2U)),}, (strconv__Uint128){.lo = ((u64)(0x95bdc291003158b8U)),.hi = ((u64)(0x0215ff2b98b6124eU)),}, (strconv__Uint128){.lo = ((u64)(0x892f9db4cd1bc126U)),.hi = ((u64)(0x035665128df01d4aU)),}, (strconv__Uint128){.lo = ((u64)(0x07594af70a7c9a85U)),.hi = ((u64)(0x02ab840ed7f34aa2U)),}, (strconv__Uint128){.lo = ((u64)(0x6c476f2c0863aed1U)),.hi = ((u64)(0x0222d00bdff5d54eU)),}, (strconv__Uint128){.lo = ((u64)(0x13a57eacda3917b4U)),.hi = ((u64)(0x036ae67966562217U)),}, (strconv__Uint128){.lo = ((u64)(0x0fb7988a482dac90U)),.hi = ((u64)(0x02bbeb9451de81acU)),}, (strconv__Uint128){.lo = ((u64)(0xd95fad3b6cf156daU)),.hi = ((u64)(0x022fefa9db1867bcU)),}, (strconv__Uint128){.lo = ((u64)(0xf565e1f8ae4ef15cU)),.hi = ((u64)(0x037fe5dc91c0a5faU)),}, (strconv__Uint128){.lo = ((u64)(0x911e4e608b725ab0U)),.hi = ((u64)(0x02ccb7e3a7cd5195U)),}, (strconv__Uint128){.lo = ((u64)(0xda7ea51a0928488dU)),.hi = ((u64)(0x023d5fe9530aa7aaU)),}, (strconv__Uint128){.lo = ((u64)(0xf7310829a8407415U)),.hi = ((u64)(0x039566421e7772aaU)),}, (strconv__Uint128){.lo = ((u64)(0x2c2739baed005cdeU)),.hi = ((u64)(0x02ddeb68185f8eefU)),}, (strconv__Uint128){.lo = ((u64)(0xbcec2e2f24004a4bU)),.hi = ((u64)(0x024b22b9ad193f25U)),}, (strconv__Uint128){.lo = ((u64)(0x94ad16b1d333aa11U)),.hi = ((u64)(0x03ab6ac2ae8ecb6fU)),}, (strconv__Uint128){.lo = ((u64)(0xaa241227dc2954dbU)),.hi = ((u64)(0x02ef889bbed8a2bfU)),}, (strconv__Uint128){.lo = ((u64)(0x54e9a81fe35443e2U)),.hi = ((u64)(0x02593a163246e899U)),}, (strconv__Uint128){.lo = ((u64)(0x2175d9cc9eed396aU)),.hi = ((u64)(0x03c1f689ea0b0dc2U)),}, (strconv__Uint128){.lo = ((u64)(0xe7917b0a18bdc788U)),.hi = ((u64)(0x03019207ee6f3e34U)),}, (strconv__Uint128){.lo = ((u64)(0xb9412f3b46fe393aU)),.hi = ((u64)(0x0267a8065858fe90U)),}, (strconv__Uint128){.lo = ((u64)(0xf535185ed7fd285cU)),.hi = ((u64)(0x03d90cd6f3c1974dU)),}, (strconv__Uint128){.lo = ((u64)(0xc42a79e57997537dU)),.hi = ((u64)(0x03140a458fce12a4U)),}, (strconv__Uint128){.lo = ((u64)(0x03552e512e12a931U)),.hi = ((u64)(0x02766e9e0ca4dbb7U)),}, (strconv__Uint128){.lo = ((u64)(0x9eeeb081e3510eb4U)),.hi = ((u64)(0x03f0b0fce107c5f1U)),}, (strconv__Uint128){.lo = ((u64)(0x4bf226ce4f740bc3U)),.hi = ((u64)(0x0326f3fd80d304c1U)),}, (strconv__Uint128){.lo = ((u64)(0xa3281f0b72c33c9cU)),.hi = ((u64)(0x02858ffe00a8d09aU)),}, (strconv__Uint128){.lo = ((u64)(0x1c2018d5f568fd4aU)),.hi = ((u64)(0x020473319a20a6e2U)),}, (strconv__Uint128){.lo = ((u64)(0xf9ccf48988a7fba9U)),.hi = ((u64)(0x033a51e8f69aa49cU)),}, (strconv__Uint128){.lo = ((u64)(0xfb0a5d3ad3b99621U)),.hi = ((u64)(0x02950e53f87bb6e3U)),}, (strconv__Uint128){.lo = ((u64)(0x2f3b7dc8a96144e7U)),.hi = ((u64)(0x0210d8432d2fc583U)),}, (strconv__Uint128){.lo = ((u64)(0xe52bfc7442353b0cU)),.hi = ((u64)(0x034e26d1e1e608d1U)),}, (strconv__Uint128){.lo = ((u64)(0xb756639034f76270U)),.hi = ((u64)(0x02a4ebdb1b1e6d74U)),}, (strconv__Uint128){.lo = ((u64)(0x2c451c735d92b526U)),.hi = ((u64)(0x021d897c15b1f12aU)),}, (strconv__Uint128){.lo = ((u64)(0x13a1c71efc1deea3U)),.hi = ((u64)(0x0362759355e981ddU)),}, (strconv__Uint128){.lo = ((u64)(0x761b05b2634b2550U)),.hi = ((u64)(0x02b52adc44bace4aU)),}, (strconv__Uint128){.lo = ((u64)(0x91af37c1e908eaa6U)),.hi = ((u64)(0x022a88b036fbd83bU)),}, (strconv__Uint128){.lo = ((u64)(0x82b1f2cfdb417770U)),.hi = ((u64)(0x03774119f192f392U)),}, (strconv__Uint128){.lo = ((u64)(0xcef4c23fe29ac5f3U)),.hi = ((u64)(0x02c5cdae5adbf60eU)),}, (strconv__Uint128){.lo = ((u64)(0x3f2a34ffe87bd190U)),.hi = ((u64)(0x0237d7beaf165e72U)),}, (strconv__Uint128){.lo = ((u64)(0x984387ffda5fb5b2U)),.hi = ((u64)(0x038c8c644b56fd83U)),}, (strconv__Uint128){.lo = ((u64)(0xe0360666484c915bU)),.hi = ((u64)(0x02d6d6b6a2abfe02U)),}, (strconv__Uint128){.lo = ((u64)(0x802b3851d3707449U)),.hi = ((u64)(0x024578921bbccb35U)),}, (strconv__Uint128){.lo = ((u64)(0x99dec082ebe72075U)),.hi = ((u64)(0x03a25a835f947855U)),}, (strconv__Uint128){.lo = ((u64)(0xae4bcd358985b391U)),.hi = ((u64)(0x02e8486919439377U)),}, (strconv__Uint128){.lo = ((u64)(0xbea30a913ad15c74U)),.hi = ((u64)(0x02536d20e102dc5fU)),}, (strconv__Uint128){.lo = ((u64)(0xfdd1aa81f7b560b9U)),.hi = ((u64)(0x03b8ae9b019e2d65U)),}, (strconv__Uint128){.lo = ((u64)(0x97daeece5fc44d61U)),.hi = ((u64)(0x02fa2548ce182451U)),}, (strconv__Uint128){.lo = ((u64)(0xdfe258a51969d781U)),.hi = ((u64)(0x0261b76d71ace9daU)),}, (strconv__Uint128){.lo = ((u64)(0x996a276e8f0fbf34U)),.hi = ((u64)(0x03cf8be24f7b0fc4U)),}, (strconv__Uint128){.lo = ((u64)(0xe121b9253f3fcc2aU)),.hi = ((u64)(0x030c6fe83f95a636U)),}, (strconv__Uint128){.lo = ((u64)(0xb41afa8432997022U)),.hi = ((u64)(0x02705986994484f8U)),}, (strconv__Uint128){.lo = ((u64)(0xecf7f739ea8f19cfU)),.hi = ((u64)(0x03e6f5a4286da18dU)),}, (strconv__Uint128){.lo = ((u64)(0x23f99294bba5ae40U)),.hi = ((u64)(0x031f2ae9b9f14e0bU)),}, (strconv__Uint128){.lo = ((u64)(0x4ffadbaa2fb7be99U)),.hi = ((u64)(0x027f5587c7f43e6fU)),}, (strconv__Uint128){.lo = ((u64)(0x7ff7c5dd1925fdc2U)),.hi = ((u64)(0x03feef3fa6539718U)),}, (strconv__Uint128){.lo = ((u64)(0xccc637e4141e649bU)),.hi = ((u64)(0x033258ffb842df46U)),}, (strconv__Uint128){.lo = ((u64)(0xd704f983434b83afU)),.hi = ((u64)(0x028ead9960357f6bU)),}, (strconv__Uint128){.lo = ((u64)(0x126a6135cf6f9c8cU)),.hi = ((u64)(0x020bbe144cf79923U)),}, (strconv__Uint128){.lo = ((u64)(0x83dd685618b29414U)),.hi = ((u64)(0x0345fced47f28e9eU)),}, (strconv__Uint128){.lo = ((u64)(0x9cb12044e08edcddU)),.hi = ((u64)(0x029e63f1065ba54bU)),}, (strconv__Uint128){.lo = ((u64)(0x16f419d0b3a57d7dU)),.hi = ((u64)(0x02184ff405161dd6U)),}, (strconv__Uint128){.lo = ((u64)(0x8b20294dec3bfbfbU)),.hi = ((u64)(0x035a19866e89c956U)),}, (strconv__Uint128){.lo = ((u64)(0x3c19baa4bcfcc996U)),.hi = ((u64)(0x02ae7ad1f207d445U)),}, (strconv__Uint128){.lo = ((u64)(0xc9ae2eea30ca3adfU)),.hi = ((u64)(0x02252f0e5b39769dU)),}, (strconv__Uint128){.lo = ((u64)(0x0f7d17dd1add2afdU)),.hi = ((u64)(0x036eb1b091f58a96U)),}, (strconv__Uint128){.lo = ((u64)(0x3f97464a7be42264U)),.hi = ((u64)(0x02bef48d41913babU)),}, (strconv__Uint128){.lo = ((u64)(0xcc790508631ce850U)),.hi = ((u64)(0x02325d3dce0dc955U)),}, (strconv__Uint128){.lo = ((u64)(0xe0c1a1a704fb0d4dU)),.hi = ((u64)(0x0383c862e3494222U)),}, (strconv__Uint128){.lo = ((u64)(0x4d67b4859d95a43eU)),.hi = ((u64)(0x02cfd3824f6dce82U)),}, (strconv__Uint128){.lo = ((u64)(0x711fc39e17aae9cbU)),.hi = ((u64)(0x023fdc683f8b0b9bU)),}, (strconv__Uint128){.lo = ((u64)(0xe832d2968c44a945U)),.hi = ((u64)(0x039960a6cc11ac2bU)),}, (strconv__Uint128){.lo = ((u64)(0xecf575453d03ba9eU)),.hi = ((u64)(0x02e11a1f09a7bcefU)),}, (strconv__Uint128){.lo = ((u64)(0x572ac4376402fbb1U)),.hi = ((u64)(0x024dae7f3aec9726U)),}, (strconv__Uint128){.lo = ((u64)(0x58446d256cd192b5U)),.hi = ((u64)(0x03af7d985e47583dU)),}, (strconv__Uint128){.lo = ((u64)(0x79d0575123dadbc4U)),.hi = ((u64)(0x02f2cae04b6c4697U)),}, (strconv__Uint128){.lo = ((u64)(0x94a6ac40e97be303U)),.hi = ((u64)(0x025bd5803c569edfU)),}, (strconv__Uint128){.lo = ((u64)(0x8771139b0f2c9e6cU)),.hi = ((u64)(0x03c62266c6f0fe32U)),}, (strconv__Uint128){.lo = ((u64)(0x9f8da948d8f07ebdU)),.hi = ((u64)(0x0304e85238c0cb5bU)),}, (strconv__Uint128){.lo = ((u64)(0xe60aedd3e0c06564U)),.hi = ((u64)(0x026a5374fa33d5e2U)),}, (strconv__Uint128){.lo = ((u64)(0xa344afb9679a3bd2U)),.hi = ((u64)(0x03dd5254c3862304U)),}, (strconv__Uint128){.lo = ((u64)(0xe903bfc78614fca8U)),.hi = ((u64)(0x031775109c6b4f36U)),}, (strconv__Uint128){.lo = ((u64)(0xba6966393810ca20U)),.hi = ((u64)(0x02792a73b055d8f8U)),}, (strconv__Uint128){.lo = ((u64)(0x2a423d2859b4769aU)),.hi = ((u64)(0x03f510b91a22f4c1U)),}, (strconv__Uint128){.lo = ((u64)(0xee9b642047c39215U)),.hi = ((u64)(0x032a73c7481bf700U)),}, (strconv__Uint128){.lo = ((u64)(0xbee2b680396941aaU)),.hi = ((u64)(0x02885c9f6ce32c00U)),}, (strconv__Uint128){.lo = ((u64)(0xff1bc53361210155U)),.hi = ((u64)(0x0206b07f8a4f5666U)),}, (strconv__Uint128){.lo = ((u64)(0x31c6085235019bbbU)),.hi = ((u64)(0x033de73276e5570bU)),}, (strconv__Uint128){.lo = ((u64)(0x27d1a041c4014963U)),.hi = ((u64)(0x0297ec285f1ddf3cU)),}, (strconv__Uint128){.lo = ((u64)(0xeca7b367d0010782U)),.hi = ((u64)(0x021323537f4b18fcU)),}, (strconv__Uint128){.lo = ((u64)(0xadd91f0c8001a59dU)),.hi = ((u64)(0x0351d21f3211c194U)),}, (strconv__Uint128){.lo = ((u64)(0xf17a7f3d3334847eU)),.hi = ((u64)(0x02a7db4c280e3476U)),}, (strconv__Uint128){.lo = ((u64)(0x279532975c2a0398U)),.hi = ((u64)(0x021fe2a3533e905fU)),}, (strconv__Uint128){.lo = ((u64)(0xd8eeb75893766c26U)),.hi = ((u64)(0x0366376bb8641a31U)),}, (strconv__Uint128){.lo = ((u64)(0x7a5892ad42c52352U)),.hi = ((u64)(0x02b82c562d1ce1c1U)),}, (strconv__Uint128){.lo = ((u64)(0xfb7a0ef102374f75U)),.hi = ((u64)(0x022cf044f0e3e7cdU)),}, (strconv__Uint128){.lo = ((u64)(0xc59017e8038bb254U)),.hi = ((u64)(0x037b1a07e7d30c7cU)),}, (strconv__Uint128){.lo = ((u64)(0x37a67986693c8eaaU)),.hi = ((u64)(0x02c8e19feca8d6caU)),}, (strconv__Uint128){.lo = ((u64)(0xf951fad1edca0bbbU)),.hi = ((u64)(0x023a4e198a20abd4U)),}, (strconv__Uint128){.lo = ((u64)(0x28832ae97c76792bU)),.hi = ((u64)(0x03907cf5a9cddfbbU)),}, (strconv__Uint128){.lo = ((u64)(0x2068ef21305ec756U)),.hi = ((u64)(0x02d9fd9154a4b2fcU)),}, (strconv__Uint128){.lo = ((u64)(0x19ed8c1a8d189f78U)),.hi = ((u64)(0x0247fe0ddd508f30U)),}, (strconv__Uint128){.lo = ((u64)(0x5caf4690e1c0ff26U)),.hi = ((u64)(0x03a66349621a7eb3U)),}, (strconv__Uint128){.lo = ((u64)(0x4a25d20d81673285U)),.hi = ((u64)(0x02eb82a11b48655cU)),}, (strconv__Uint128){.lo = ((u64)(0x3b5174d79ab8f537U)),.hi = ((u64)(0x0256021a7c39eab0U)),}, (strconv__Uint128){.lo = ((u64)(0x921bee25c45b21f1U)),.hi = ((u64)(0x03bcd02a605caab3U)),}, (strconv__Uint128){.lo = ((u64)(0xdb498b5169e2818eU)),.hi = ((u64)(0x02fd735519e3bbc2U)),}, (strconv__Uint128){.lo = ((u64)(0x15d46f7454b53472U)),.hi = ((u64)(0x02645c4414b62fcfU)),}, (strconv__Uint128){.lo = ((u64)(0xefba4bed545520b6U)),.hi = ((u64)(0x03d3c6d35456b2e4U)),}, (strconv__Uint128){.lo = ((u64)(0xf2fb6ff110441a2bU)),.hi = ((u64)(0x030fd242a9def583U)),}, (strconv__Uint128){.lo = ((u64)(0x8f2f8cc0d9d014efU)),.hi = ((u64)(0x02730e9bbb18c469U)),}, (strconv__Uint128){.lo = ((u64)(0xb1e5ae015c80217fU)),.hi = ((u64)(0x03eb4a92c4f46d75U)),}, (strconv__Uint128){.lo = ((u64)(0xc1848b344a001accU)),.hi = ((u64)(0x0322a20f03f6bdf7U)),}, (strconv__Uint128){.lo = ((u64)(0xce03a2903b3348a3U)),.hi = ((u64)(0x02821b3f365efe5fU)),}, (strconv__Uint128){.lo = ((u64)(0xd802e873628f6d4fU)),.hi = ((u64)(0x0201af65c518cb7fU)),}, (strconv__Uint128){.lo = ((u64)(0x599e40b89db2487fU)),.hi = ((u64)(0x0335e56fa1c14599U)),}, (strconv__Uint128){.lo = ((u64)(0xe14b66fa17c1d399U)),.hi = ((u64)(0x029184594e3437adU)),}, (strconv__Uint128){.lo = ((u64)(0x81091f2e7967dc7aU)),.hi = ((u64)(0x020e037aa4f692f1U)),}, (strconv__Uint128){.lo = ((u64)(0x9b41cb7d8f0c93f6U)),.hi = ((u64)(0x03499f2aa18a84b5U)),}, (strconv__Uint128){.lo = ((u64)(0xaf67d5fe0c0a0ff8U)),.hi = ((u64)(0x02a14c221ad536f7U)),}, (strconv__Uint128){.lo = ((u64)(0xf2b977fe70080cc7U)),.hi = ((u64)(0x021aa34e7bddc592U)),}, (strconv__Uint128){.lo = ((u64)(0x1df58cca4cd9ae0bU)),.hi = ((u64)(0x035dd2172c9608ebU)),}, (strconv__Uint128){.lo = ((u64)(0xe4c470a1d7148b3cU)),.hi = ((u64)(0x02b174df56de6d88U)),}, (strconv__Uint128){.lo = ((u64)(0x83d05a1b1276d5caU)),.hi = ((u64)(0x022790b2abe5246dU)),}, (strconv__Uint128){.lo = ((u64)(0x9fb3c35e83f1560fU)),.hi = ((u64)(0x0372811ddfd50715U)),}, (strconv__Uint128){.lo = ((u64)(0xb2f635e5365aab3fU)),.hi = ((u64)(0x02c200e4b310d277U)),}, (strconv__Uint128){.lo = ((u64)(0xf591c4b75eaeef66U)),.hi = ((u64)(0x0234cd83c273db92U)),}, (strconv__Uint128){.lo = ((u64)(0xef4fa125644b18a3U)),.hi = ((u64)(0x0387af39371fc5b7U)),}, (strconv__Uint128){.lo = ((u64)(0x8c3fb41de9d5ad4fU)),.hi = ((u64)(0x02d2f2942c196af9U)),}, (strconv__Uint128){.lo = ((u64)(0x3cffc34b2177bdd9U)),.hi = ((u64)(0x02425ba9bce12261U)),}, (strconv__Uint128){.lo = ((u64)(0x94cc6bab68bf9628U)),.hi = ((u64)(0x039d5f75fb01d09bU)),}, (strconv__Uint128){.lo = ((u64)(0x10a38955ed6611b9U)),.hi = ((u64)(0x02e44c5e6267da16U)),}, (strconv__Uint128){.lo = ((u64)(0xda1c6dde5784dafbU)),.hi = ((u64)(0x02503d184eb97b44U)),}, (strconv__Uint128){.lo = ((u64)(0xf693e2fd58d49191U)),.hi = ((u64)(0x03b394f3b128c53aU)),}, (strconv__Uint128){.lo = ((u64)(0xc5431bfde0aa0e0eU)),.hi = ((u64)(0x02f610c2f4209dc8U)),}, (strconv__Uint128){.lo = ((u64)(0x6a9c1664b3bb3e72U)),.hi = ((u64)(0x025e73cf29b3b16dU)),}, (strconv__Uint128){.lo = ((u64)(0x10f9bd6dec5eca4fU)),.hi = ((u64)(0x03ca52e50f85e8afU)),}, (strconv__Uint128){.lo = ((u64)(0xda616457f04bd50cU)),.hi = ((u64)(0x03084250d937ed58U)),}, (strconv__Uint128){.lo = ((u64)(0xe1e783798d09773dU)),.hi = ((u64)(0x026d01da475ff113U)),}, (strconv__Uint128){.lo = ((u64)(0x030c058f480f252eU)),.hi = ((u64)(0x03e19c9072331b53U)),}, (strconv__Uint128){.lo = ((u64)(0x68d66ad906728425U)),.hi = ((u64)(0x031ae3a6c1c27c42U)),}, (strconv__Uint128){.lo = ((u64)(0x8711ef14052869b7U)),.hi = ((u64)(0x027be952349b969bU)),}, (strconv__Uint128){.lo = ((u64)(0x0b4fe4ecd50d75f2U)),.hi = ((u64)(0x03f97550542c242cU)),}, (strconv__Uint128){.lo = ((u64)(0xa2a650bd773df7f5U)),.hi = ((u64)(0x032df7737689b689U)),}, (strconv__Uint128){.lo = ((u64)(0xb551da312c31932aU)),.hi = ((u64)(0x028b2c5c5ed49207U)),}, (strconv__Uint128){.lo = ((u64)(0x5ddb14f4235adc22U)),.hi = ((u64)(0x0208f049e576db39U)),}, (strconv__Uint128){.lo = ((u64)(0x2fc4ee536bc49369U)),.hi = ((u64)(0x034180763bf15ec2U)),}, (strconv__Uint128){.lo = ((u64)(0xbfd0bea92303a921U)),.hi = ((u64)(0x029acd2b63277f01U)),}, (strconv__Uint128){.lo = ((u64)(0x9973cbba8269541aU)),.hi = ((u64)(0x021570ef8285ff34U)),}, (strconv__Uint128){.lo = ((u64)(0x5bec792a6a42202aU)),.hi = ((u64)(0x0355817f373ccb87U)),}, (strconv__Uint128){.lo = ((u64)(0xe3239421ee9b4cefU)),.hi = ((u64)(0x02aacdff5f63d605U)),}, (strconv__Uint128){.lo = ((u64)(0xb5b6101b25490a59U)),.hi = ((u64)(0x02223e65e5e97804U)),}, (strconv__Uint128){.lo = ((u64)(0x22bce691d541aa27U)),.hi = ((u64)(0x0369fd6fd64259a1U)),}, (strconv__Uint128){.lo = ((u64)(0xb563eba7ddce21b9U)),.hi = ((u64)(0x02bb31264501e14dU)),}, (strconv__Uint128){.lo = ((u64)(0xf78322ecb171b494U)),.hi = ((u64)(0x022f5a850401810aU)),}, (strconv__Uint128){.lo = ((u64)(0x259e9e47824f8753U)),.hi = ((u64)(0x037ef73b399c01abU)),}, (strconv__Uint128){.lo = ((u64)(0x1e187e9f9b72d2a9U)),.hi = ((u64)(0x02cbf8fc2e1667bcU)),}, (strconv__Uint128){.lo = ((u64)(0x4b46cbb2e2c24221U)),.hi = ((u64)(0x023cc73024deb963U)),}, (strconv__Uint128){.lo = ((u64)(0x120adf849e039d01U)),.hi = ((u64)(0x039471e6a1645bd2U)),}, (strconv__Uint128){.lo = ((u64)(0xdb3be603b19c7d9aU)),.hi = ((u64)(0x02dd27ebb4504974U)),}, (strconv__Uint128){.lo = ((u64)(0x7c2feb3627b0647cU)),.hi = ((u64)(0x024a865629d9d45dU)),}, (strconv__Uint128){.lo = ((u64)(0x2d197856a5e7072cU)),.hi = ((u64)(0x03aa7089dc8fba2fU)),}, (strconv__Uint128){.lo = ((u64)(0x8a7ac6abb7ec05bdU)),.hi = ((u64)(0x02eec06e4a0c94f2U)),}, (strconv__Uint128){.lo = ((u64)(0xd52f05562cbcd164U)),.hi = ((u64)(0x025899f1d4d6dd8eU)),}, (strconv__Uint128){.lo = ((u64)(0x21e4d556adfae8a0U)),.hi = ((u64)(0x03c0f64fbaf1627eU)),}, (strconv__Uint128){.lo = ((u64)(0xe7ea444557fbed4dU)),.hi = ((u64)(0x0300c50c958de864U)),}, (strconv__Uint128){.lo = ((u64)(0xecbb69d1132ff10aU)),.hi = ((u64)(0x0267040a113e5383U)),}, (strconv__Uint128){.lo = ((u64)(0xadf8a94e851981aaU)),.hi = ((u64)(0x03d8067681fd526cU)),}, (strconv__Uint128){.lo = ((u64)(0x8b2d543ed0e13488U)),.hi = ((u64)(0x0313385ece6441f0U)),}, (strconv__Uint128){.lo = ((u64)(0xd5bddcff0d80f6d3U)),.hi = ((u64)(0x0275c6b23eb69b26U)),}, (strconv__Uint128){.lo = ((u64)(0x892fc7fe7c018aebU)),.hi = ((u64)(0x03efa45064575ea4U)),}, (strconv__Uint128){.lo = ((u64)(0x3a8c9ffec99ad589U)),.hi = ((u64)(0x03261d0d1d12b21dU)),}, (strconv__Uint128){.lo = ((u64)(0xc8707fff07af113bU)),.hi = ((u64)(0x0284e40a7da88e7dU)),}, (strconv__Uint128){.lo = ((u64)(0x39f39998d2f2742fU)),.hi = ((u64)(0x0203e9a1fe2071feU)),}, (strconv__Uint128){.lo = ((u64)(0x8fec28f484b7204bU)),.hi = ((u64)(0x033975cffd00b663U)),}, (strconv__Uint128){.lo = ((u64)(0xd989ba5d36f8e6a2U)),.hi = ((u64)(0x02945e3ffd9a2b82U)),}, (strconv__Uint128){.lo = ((u64)(0x47a161e42bfa521cU)),.hi = ((u64)(0x02104b66647b5602U)),}, (strconv__Uint128){.lo = ((u64)(0x0c35696d132a1cf9U)),.hi = ((u64)(0x034d4570a0c5566aU)),}, (strconv__Uint128){.lo = ((u64)(0x09c454574288172dU)),.hi = ((u64)(0x02a4378d4d6aab88U)),}, (strconv__Uint128){.lo = ((u64)(0xa169dd129ba0128bU)),.hi = ((u64)(0x021cf93dd7888939U)),}, (strconv__Uint128){.lo = ((u64)(0x0242fb50f9001dabU)),.hi = ((u64)(0x03618ec958da7529U)),}, (strconv__Uint128){.lo = ((u64)(0x9b68c90d940017bcU)),.hi = ((u64)(0x02b4723aad7b90edU)),}, (strconv__Uint128){.lo = ((u64)(0x4920a0d7a999ac96U)),.hi = ((u64)(0x0229f4fbbdfc73f1U)),}, (strconv__Uint128){.lo = ((u64)(0x750101590f5c4757U)),.hi = ((u64)(0x037654c5fcc71fe8U)),}, (strconv__Uint128){.lo = ((u64)(0x2a6734473f7d05dfU)),.hi = ((u64)(0x02c5109e63d27fedU)),}, (strconv__Uint128){.lo = ((u64)(0xeeb8f69f65fd9e4cU)),.hi = ((u64)(0x0237407eb641fff0U)),}, (strconv__Uint128){.lo = ((u64)(0xe45b24323cc8fd46U)),.hi = ((u64)(0x038b9a6456cfffe7U)),}, (strconv__Uint128){.lo = ((u64)(0xb6af502830a0ca9fU)),.hi = ((u64)(0x02d6151d123fffecU)),}, (strconv__Uint128){.lo = ((u64)(0xf88c402026e7087fU)),.hi = ((u64)(0x0244ddb0db666656U)),}, (strconv__Uint128){.lo = ((u64)(0x2746cd003e3e73feU)),.hi = ((u64)(0x03a162b4923d708bU)),}, (strconv__Uint128){.lo = ((u64)(0x1f6bd73364fec332U)),.hi = ((u64)(0x02e7822a0e978d3cU)),}, (strconv__Uint128){.lo = ((u64)(0xe5efdf5c50cbcf5bU)),.hi = ((u64)(0x0252ce880bac70fcU)),}, (strconv__Uint128){.lo = ((u64)(0x3cb2fefa1adfb22bU)),.hi = ((u64)(0x03b7b0d9ac471b2eU)),}, (strconv__Uint128){.lo = ((u64)(0x308f3261af195b56U)),.hi = ((u64)(0x02f95a47bd05af58U)),}, (strconv__Uint128){.lo = ((u64)(0x5a0c284e25ade2abU)),.hi = ((u64)(0x0261150630d15913U)),}, (strconv__Uint128){.lo = ((u64)(0x29ad0d49d5e30445U)),.hi = ((u64)(0x03ce8809e7b55b52U)),}, (strconv__Uint128){.lo = ((u64)(0x548a7107de4f369dU)),.hi = ((u64)(0x030ba007ec9115dbU)),}, (strconv__Uint128){.lo = ((u64)(0xdd3b8d9fe50c2bb1U)),.hi = ((u64)(0x026fb3398a0dab15U)),}, (strconv__Uint128){.lo = ((u64)(0x952c15cca1ad12b5U)),.hi = ((u64)(0x03e5eb8f434911bcU)),}, (strconv__Uint128){.lo = ((u64)(0x775677d6e7bda891U)),.hi = ((u64)(0x031e560c35d40e30U)),}, (strconv__Uint128){.lo = ((u64)(0xc5dec645863153a7U)),.hi = ((u64)(0x027eab3cf7dcd826U)),}}));
	// Initializations for module builtin :
	_const_init_capicity = 1 << _const_init_log_capicity;
	_const_init_cap = _const_init_capicity - 2;
	_const_hash_mask = ((u32)(0x00FFFFFFU));
	_const_probe_inc = ((u32)(0x01000000U));
	_const_mid_index = _const_degree - 1;
	_const_max_len = 2 * _const_degree - 1;
	_const_children_bytes = /*SizeOfType*/ sizeof(voidptr) * (_const_max_len + 1);
	// Initializations for module os :
	_const_os__std_input_handle = -10;
	_const_os__std_output_handle = -11;
	_const_os__std_error_handle = -12;
	_const_os__args = __new_array_with_default(0, 0, sizeof(string), 0);
	_const_os__wd_at_startup = os__getwd();
	// Initializations for module math :
	_const_math__uvnan = ((u64)(0x7FF8000000000001U));
	_const_math__uvinf = ((u64)(0x7FF0000000000000U));
	_const_math__uvneginf = ((u64)(0xFFF0000000000000U));
	_const_math__uvone = ((u64)(0x3FF0000000000000U));
	_const_math__shift = 64 - 11 - 1;
	_const_math__sign_mask = (((u64)(1U)) << 63);
	_const_math__frac_mask = ((((u64)(1U)) << ((u64)(_const_math__shift))) - ((u64)(1U)));
	_const_math__log2_e = 1.0 / _const_math__ln2;
	_const_math__log10_e = 1.0 / _const_math__ln10;
	_const_math__min_i8 = -128;
	_const_math__min_i16 = -32768;
	_const_math__min_i32 = -2147483648;
	_const_math__min_i64 = ((i64)(-9223372036854775807 - 1));
	_const_math__max_i64 = ((i64)(9223372036854775807));
	_const_math__max_u32 = ((u32)(4294967295U));
	_const_math__max_u64 = ((u64)(18446744073709551615U));
	// Initializations for module eventbus :
	// Initializations for module time :
	_const_time__month_days = new_array_from_c_array(12, 12, sizeof(int), _MOV((int[12]){
		31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31}));
	_const_time__absolute_zero_year = ((i64)(-292277022399));
	_const_time__seconds_per_hour = 60 * _const_time__seconds_per_minute;
	_const_time__seconds_per_day = 24 * _const_time__seconds_per_hour;
	_const_time__seconds_per_week = 7 * _const_time__seconds_per_day;
	_const_time__days_per_400_years = 365 * 400 + 97;
	_const_time__days_per_100_years = 365 * 100 + 24;
	_const_time__days_per_4_years = 365 * 4 + 1;
	_const_time__days_before = new_array_from_c_array(13, 13, sizeof(int), _MOV((int[13]){
		0, 31, 31 + 28, 31 + 28 + 31, 31 + 28 + 31 + 30, 31 + 28 + 31 + 30 + 31, 31 + 28 + 31 + 30 + 31 + 30, 31 + 28 + 31 + 30 + 31 + 30 + 31, 31 + 28 + 31 + 30 + 31 + 30 + 31 + 31, 31 + 28 + 31 + 30 + 31 + 30 + 31 + 31 + 30, 31 + 28 + 31 + 30 + 31 + 30 + 31 + 31 + 30 + 31, 31 + 28 + 31 + 30 + 31 + 30 + 31 + 31 + 30 + 31 + 30, 31 + 28 + 31 + 30 + 31 + 30 + 31 + 31 + 30 + 31 + 30 + 31}));
	_const_time__long_days = new_array_from_c_array(7, 7, sizeof(string), _MOV((string[7]){tos_lit("Monday"), tos_lit("Tuesday"), tos_lit("Wednesday"), tos_lit("Thusday"), tos_lit("Friday"), tos_lit("Saturday"), tos_lit("Sunday")}));
	_const_time__nanosecond = ((time__Duration)(1));
	_const_time__microsecond = ((time__Duration)(1000)) * _const_time__nanosecond;
	_const_time__millisecond = ((time__Duration)(1000)) * _const_time__microsecond;
	_const_time__second = ((time__Duration)(1000)) * _const_time__millisecond;
	_const_time__minute = ((time__Duration)(60)) * _const_time__second;
	_const_time__hour = ((time__Duration)(60)) * _const_time__minute;
	_const_time__infinite = ((time__Duration)(-1));
	// Initializations for module sokol.sapp :
	// Initializations for module fontstash :
	// Initializations for module sokol.gfx :
	// Initializations for module stbi :
	stbi__init();
	// Initializations for module sokol.c :
	// Initializations for module gx :
	_const_gx__blue = (gx__Color){.r = 0,.g = 0,.b = 255,.a = 255,};
	_const_gx__red = (gx__Color){.r = 255,.g = 0,.b = 0,.a = 255,};
	_const_gx__green = (gx__Color){.r = 0,.g = 255,.b = 0,.a = 255,};
	_const_gx__yellow = (gx__Color){.r = 255,.g = 255,.b = 0,.a = 255,};
	_const_gx__orange = (gx__Color){.r = 255,.g = 165,.b = 0,.a = 255,};
	_const_gx__purple = (gx__Color){.r = 128,.g = 0,.b = 128,.a = 255,};
	_const_gx__black = (gx__Color){.r = 0,.g = 0,.b = 0,.a = 255,};
	_const_gx__gray = (gx__Color){.r = 128,.g = 128,.b = 128,.a = 255,};
	_const_gx__indigo = (gx__Color){.r = 75,.g = 0,.b = 130,.a = 255,};
	_const_gx__pink = (gx__Color){.r = 255,.g = 192,.b = 203,.a = 255,};
	_const_gx__violet = (gx__Color){.r = 238,.g = 130,.b = 238,.a = 255,};
	_const_gx__white = (gx__Color){.r = 255,.g = 255,.b = 255,.a = 255,};
	_const_gx__dark_blue = (gx__Color){.r = 0,.g = 0,.b = 139,.a = 255,};
	_const_gx__dark_gray = (gx__Color){.r = 169,.g = 169,.b = 169,.a = 255,};
	_const_gx__dark_green = (gx__Color){.r = 0,.g = 100,.b = 0,.a = 255,};
	_const_gx__dark_red = (gx__Color){.r = 139,.g = 0,.b = 0,.a = 255,};
	_const_gx__light_blue = (gx__Color){.r = 173,.g = 216,.b = 230,.a = 255,};
	_const_gx__light_gray = (gx__Color){.r = 211,.g = 211,.b = 211,.a = 255,};
	_const_gx__light_green = (gx__Color){.r = 144,.g = 238,.b = 144,.a = 255,};
	_const_gx__light_red = (gx__Color){.r = 255,.g = 204,.b = 203,.a = 255,};
	_const_gx__string_colors = new_map_init(3, sizeof(gx__Color), _MOV((string[3]){tos_lit("black"), tos_lit("blue"), tos_lit("red"), }), _MOV((gx__Color[3]){_const_gx__black, _const_gx__blue, _const_gx__red, }));
	_const_gx__used_import = _const_fontstash__used_import;
	_const_gx__align_left = gx__HorizontalAlign_left;
	_const_gx__align_right = gx__HorizontalAlign_right;
	// Initializations for module sokol.sgl :
	_const_sokol__sgl__version = _const_sokol__gfx__version + 1;
	// Initializations for module sokol.sfons :
	_const_sokol__sfons__used_import = _const_fontstash__used_import + 1;
	// Initializations for module runtime :
	// Initializations for module sokol.f :
	_const_sokol__f__used_import = 1 + _const_fontstash__used_import;
	// Initializations for module rand.util :
	_const_rand__util__lower_mask = ((u64)(0x00000000FFFFFFFFU));
	_const_rand__util__max_u32_as_f32 = ((f32)(_const_rand__util__max_u32)) + 1;
	_const_rand__util__max_u64_as_f64 = ((f64)(_const_rand__util__max_u64)) + 1;
	_const_rand__util__u31_mask = ((u32)(0x7FFFFFFFU));
	_const_rand__util__u63_mask = ((u64)(0x7FFFFFFFFFFFFFFFU));
	// Initializations for module sokol :
	_const_sokol__used_import = _const_sokol__c__used_import + _const_sokol__f__used_import;
	// Initializations for module rand.wyrand :
	_const_rand__wyrand__wyp0 = ((u64)(0xa0761d6478bd642fU));
	_const_rand__wyrand__wyp1 = ((u64)(0xe7037ed1a0b428dbU));
	// Initializations for module gg :
	// Initializations for module rand :
	rand__init();
	// Initializations for module sync :
	_const_sync__no_result = ((voidptr)(0));
	// Initializations for module clipboard :
	_const_clipboard__atom_names = new_array_from_c_array(8, 8, sizeof(string), _MOV((string[8]){tos_lit("TARGETS"), tos_lit("CLIPBOARD"), tos_lit("PRIMARY"), tos_lit("SECONDARY"), tos_lit("TEXT"), tos_lit("UTF8_STRING"), tos_lit("text/plain"), tos_lit("text/html")}));
	// Initializations for module ui :
	_const_ui__button_bg_color = gx__rgb(28, 28, 28);
	_const_ui__button_border_color = gx__rgb(200, 200, 200);
	_const_ui__btn_text_cfg = (gx__TextCfg){.color = gx__rgb(38, 38, 38),.size = 16,.align = _const_gx__align_left,.vertical_align = gx__VerticalAlign_top,.max_width = 0,.family = (string){.str=(byteptr)""},.bold = 0,.mono = 0,.italic = 0,};
	_const_ui__cb_border_color = gx__rgb(76, 145, 244);
	_const_ui__cb_image = ((u32)(0U));
	_const_ui__events = (ui__EventNames){.on_click = tos_lit("on_click"),.on_mouse_move = tos_lit("on_mouse_move"),.on_mouse_down = tos_lit("on_mouse_down"),.on_mouse_up = tos_lit("on_mouse_up"),.on_key_down = tos_lit("on_key_down"),.on_key_up = tos_lit("on_key_up"),.on_scroll = tos_lit("on_scroll"),};
	_const_ui__dropdown_color = gx__rgb(240, 240, 240);
	_const_ui__border_color = gx__rgb(223, 223, 223);
	_const_ui__drawer_color = gx__rgb(255, 255, 255);
	_const_ui___col_list_bkgrnd = _const_gx__white;
	_const_ui___col_item_select = _const_gx__light_blue;
	_const_ui___col_border = _const_gx__gray;
	_const_ui__menu_color = gx__rgb(240, 240, 240);
	_const_ui__menu_border_color = gx__rgb(223, 223, 223);
	_const_ui__progress_bar_color = gx__rgb(87, 153, 245);
	_const_ui__progress_bar_border_color = gx__rgb(76, 133, 213);
	_const_ui__progress_bar_background_color = gx__rgb(219, 219, 219);
	_const_ui__progress_bar_background_border_color = gx__rgb(191, 191, 191);
	_const_ui__thumb_color = gx__rgb(87, 153, 245);
	_const_ui__slider_background_color = gx__rgb(219, 219, 219);
	_const_ui__slider_background_border_color = gx__rgb(191, 191, 191);
	_const_ui__slider_focused_background_border_color = gx__rgb(255, 0, 0);
	_const_ui__sw_open_bg_color = gx__rgb(19, 206, 102);
	_const_ui__sw_close_bg_color = gx__rgb(220, 223, 230);
	_const_ui__placeholder_cfg = (gx__TextCfg){.color = _const_gx__gray,.size = 16,.align = _const_gx__align_left,.vertical_align = gx__VerticalAlign_top,.max_width = 0,.family = (string){.str=(byteptr)""},.bold = 0,.mono = 0,.italic = 0,};
	_const_ui__text_border_color = gx__rgb(177, 177, 177);
	_const_ui__text_inner_border_color = gx__rgb(240, 240, 240);
	_const_ui__text_border_accentuated_color = gx__rgb(255, 0, 0);
	_const_ui__selection_color = gx__rgb(186, 214, 251);
	_const_ui__default_window_color = gx__rgb(236, 236, 236);
	// Initializations for module vuipy :
}

// THE END.

