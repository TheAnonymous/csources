/* Generated by Nim Compiler v0.10.3 */
/*   (c) 2015 Andreas Rumpf */
/* The generated code is subject to the original license. */
#define NIM_INTBITS 32
#include "nimbase.h"

#include <stdio.h>
typedef struct tnode209813 tnode209813;
typedef struct NimStringDesc NimStringDesc;
typedef struct TGenericSeq TGenericSeq;
typedef struct ttype209849 ttype209849;
typedef struct tlineinfo182338 tlineinfo182338;
typedef struct tsym209843 tsym209843;
typedef struct tident186021 tident186021;
typedef struct tnodeseq209807 tnodeseq209807;
typedef struct tllstream196204 tllstream196204;
typedef struct tidobj186015 tidobj186015;
typedef struct TNimObject TNimObject;
typedef struct TNimType TNimType;
typedef struct TNimNode TNimNode;
typedef struct ttypeseq209845 ttypeseq209845;
typedef struct tloc209827 tloc209827;
typedef struct trope179009 trope179009;
typedef struct tscope209837 tscope209837;
typedef struct TY209944 TY209944;
typedef struct tinstantiation209833 tinstantiation209833;
typedef struct tstrtable209817 tstrtable209817;
typedef struct tsymseq209815 tsymseq209815;
typedef struct tlib209831 tlib209831;
typedef struct TY209933 TY209933;
typedef struct tlistentry130022 tlistentry130022;
struct  TGenericSeq  {
NI len;
NI reserved;
};
struct  NimStringDesc  {
  TGenericSeq Sup;
NIM_CHAR data[SEQ_DECL_SIZE];
};
struct  tlineinfo182338  {
NI16 Line;
NI16 Col;
NI32 Fileindex;
};
struct  tnode209813  {
ttype209849* Typ;
tlineinfo182338 Info;
NU16 Flags;
NU8 Kind;
union{
struct {NI64 Intval;
} S1;
struct {NF Floatval;
} S2;
struct {NimStringDesc* Strval;
} S3;
struct {tsym209843* Sym;
} S4;
struct {tident186021* Ident;
} S5;
struct {tnodeseq209807* Sons;
} S6;
} kindU;
NimStringDesc* Comment;
};
typedef N_NIMCALL_PTR(void, TY3289) (void* p, NI op);
typedef N_NIMCALL_PTR(void*, TY3294) (void* p);
struct  TNimType  {
NI size;
NU8 kind;
NU8 flags;
TNimType* base;
TNimNode* node;
void* finalizer;
TY3289 marker;
TY3294 deepcopy;
};
struct  TNimObject  {
TNimType* m_type;
};
struct  tidobj186015  {
  TNimObject Sup;
NI Id;
};
struct  tloc209827  {
NU8 K;
NU8 S;
NU16 Flags;
ttype209849* T;
trope179009* R;
trope179009* Heaproot;
};
struct  ttype209849  {
  tidobj186015 Sup;
NU8 Kind;
NU8 Callconv;
NU32 Flags;
ttypeseq209845* Sons;
tnode209813* N;
tsym209843* Owner;
tsym209843* Sym;
tsym209843* Destructor;
tsym209843* Deepcopy;
NI64 Size;
NI16 Align;
NI16 Locklevel;
tloc209827 Loc;
};
struct  tstrtable209817  {
NI Counter;
tsymseq209815* Data;
};
struct  tsym209843  {
  tidobj186015 Sup;
NU8 Kind;
union{
struct {ttypeseq209845* Typeinstcache;
tscope209837* Typscope;
} S1;
struct {TY209944* Procinstcache;
tscope209837* Scope;
} S2;
struct {TY209944* Usedgenerics;
tstrtable209817 Tab;
} S3;
struct {tsym209843* Guard;
} S4;
} kindU;
NU16 Magic;
ttype209849* Typ;
tident186021* Name;
tlineinfo182338 Info;
tsym209843* Owner;
NU32 Flags;
tnode209813* Ast;
NU32 Options;
NI Position;
NI Offset;
tloc209827 Loc;
tlib209831* Annex;
tnode209813* Constraint;
};
struct  tident186021  {
  tidobj186015 Sup;
NimStringDesc* S;
tident186021* Next;
NI H;
};
struct  tllstream196204  {
  TNimObject Sup;
NU8 Kind;
FILE* F;
NimStringDesc* S;
NI Rd;
NI Wr;
NI Lineoffset;
};
struct  TNimNode  {
NU8 kind;
NI offset;
TNimType* typ;
NCSTRING name;
NI len;
TNimNode** sons;
};
struct  trope179009  {
  TNimObject Sup;
trope179009* Left;
trope179009* Right;
NI Length;
NimStringDesc* Data;
};
struct  tscope209837  {
NI Depthlevel;
tstrtable209817 Symbols;
tnodeseq209807* Usingsyms;
tscope209837* Parent;
};
struct  tinstantiation209833  {
tsym209843* Sym;
ttypeseq209845* Concretetypes;
TY209933* Usedby;
};
struct  tlistentry130022  {
  TNimObject Sup;
tlistentry130022* Prev;
tlistentry130022* Next;
};
struct  tlib209831  {
  tlistentry130022 Sup;
NU8 Kind;
NIM_BOOL Generated;
NIM_BOOL Isoverriden;
trope179009* Name;
tnode209813* Path;
};
struct tnodeseq209807 {
  TGenericSeq Sup;
  tnode209813* data[SEQ_DECL_SIZE];
};
struct ttypeseq209845 {
  TGenericSeq Sup;
  ttype209849* data[SEQ_DECL_SIZE];
};
struct TY209944 {
  TGenericSeq Sup;
  tinstantiation209833* data[SEQ_DECL_SIZE];
};
struct tsymseq209815 {
  TGenericSeq Sup;
  tsym209843* data[SEQ_DECL_SIZE];
};
struct TY209933 {
  TGenericSeq Sup;
  NI32 data[SEQ_DECL_SIZE];
};
N_NIMCALL(tnode209813*, getarg_234057)(tnode209813* n, NimStringDesc* name, NI pos);
N_NIMCALL(NI, sonslen_212403)(tnode209813* n);
N_NIMCALL(void, invalidpragma_234047)(tnode209813* n);
N_NIMCALL(void, localerror_184392)(tlineinfo182338 info, NU16 msg, NimStringDesc* arg);
N_NIMCALL(NimStringDesc*, rendertree_230058)(tnode209813* n, NU8 renderflags);
N_NIMCALL(NIM_BOOL, identeq_186484)(tident186021* id, NimStringDesc* name);
N_NIMCALL(NimStringDesc*, copyString)(NimStringDesc* src);
N_NIMCALL(NimStringDesc*, strarg_234029)(tnode209813* n, NimStringDesc* name, NI pos, NimStringDesc* default_234034);
N_NIMCALL(NIM_BOOL, boolarg_234038)(tnode209813* n, NimStringDesc* name, NI pos, NIM_BOOL default_234043);
N_NIMCALL(tllstream196204*, llstreamopen_196220)(NimStringDesc* data);
N_NIMCALL(NimStringDesc*, rawNewString)(NI space);
N_NIMCALL(NimStringDesc*, rawNewString)(NI cap);
N_NIMCALL(NIM_BOOL, llstreamreadline_196610)(tllstream196204* s, NimStringDesc** line);
N_NIMCALL(NimStringDesc*, nsuStrip)(NimStringDesc* s, NIM_BOOL leading, NIM_BOOL trailing);
N_NIMCALL(NIM_BOOL, nsuStartsWith)(NimStringDesc* s, NimStringDesc* prefix);
N_NIMCALL(void, llstreamwriteln_196686)(tllstream196204* s, NimStringDesc* data);
N_NIMCALL(void, llstreamclose_196310)(tllstream196204* s);
N_NIMCALL(NimStringDesc*, nsuReplaceStr)(NimStringDesc* s, NimStringDesc* sub, NimStringDesc* by);
STRING_LITERAL(TMP1365, "startswith", 10);
STRING_LITERAL(TMP1366, "", 0);
STRING_LITERAL(TMP1367, "true", 4);
STRING_LITERAL(TMP1368, "false", 5);
STRING_LITERAL(TMP1369, "leading", 7);
STRING_LITERAL(TMP1370, "trailing", 8);
STRING_LITERAL(TMP1371, "sub", 3);
STRING_LITERAL(TMP1372, "by", 2);

N_NIMCALL(void, invalidpragma_234047)(tnode209813* n) {
	NimStringDesc* LOC1;
	LOC1 = 0;
	LOC1 = rendertree_230058(n, 4);
	localerror_184392((*n).Info, ((NU16) 163), LOC1);
}

N_NIMCALL(tnode209813*, getarg_234057)(tnode209813* n, NimStringDesc* name, NI pos) {
	tnode209813* result;
{	result = 0;
	result = NIM_NIL;
	{
		if (!((*n).Kind >= ((NU8) 1) && (*n).Kind <= ((NU8) 23))) goto LA3;
		goto BeforeRet;
	}
	LA3: ;
	{
		NI i_234086;
		NI HEX3Atmp_234115;
		NI LOC6;
		NI res_234118;
		i_234086 = 0;
		HEX3Atmp_234115 = 0;
		LOC6 = 0;
		LOC6 = sonslen_212403(n);
		HEX3Atmp_234115 = (NI32)(LOC6 - ((NI) 1));
		res_234118 = ((NI) 1);
		{
			while (1) {
				if (!(res_234118 <= HEX3Atmp_234115)) goto LA8;
				i_234086 = res_234118;
				{
					if (!((*(*n).kindU.S6.Sons->data[i_234086]).Kind == ((NU8) 33))) goto LA11;
					{
						if (!!(((*(*(*n).kindU.S6.Sons->data[i_234086]).kindU.S6.Sons->data[((NI) 0)]).Kind == ((NU8) 2)))) goto LA15;
						invalidpragma_234047(n);
					}
					LA15: ;
					{
						NIM_BOOL LOC19;
						LOC19 = 0;
						LOC19 = identeq_186484((*(*(*n).kindU.S6.Sons->data[i_234086]).kindU.S6.Sons->data[((NI) 0)]).kindU.S5.Ident, name);
						if (!LOC19) goto LA20;
						result = (*(*n).kindU.S6.Sons->data[i_234086]).kindU.S6.Sons->data[((NI) 1)];
						goto BeforeRet;
					}
					LA20: ;
				}
				goto LA9;
				LA11: ;
				{
					if (!(i_234086 == pos)) goto LA23;
					result = (*n).kindU.S6.Sons->data[i_234086];
					goto BeforeRet;
				}
				goto LA9;
				LA23: ;
				LA9: ;
				res_234118 += ((NI) 1);
			} LA8: ;
		}
	}
	}BeforeRet: ;
	return result;
}

N_NIMCALL(NIM_CHAR, chararg_234020)(tnode209813* n, NimStringDesc* name, NI pos, NIM_CHAR default_234025) {
	NIM_CHAR result;
	tnode209813* x;
	result = 0;
	x = getarg_234057(n, name, pos);
	{
		if (!(x == NIM_NIL)) goto LA3;
		result = default_234025;
	}
	goto LA1;
	LA3: ;
	{
		if (!((*x).Kind == ((NU8) 5))) goto LA6;
		result = ((NIM_CHAR) (((NI) (((NI) ((*x).kindU.S1.Intval))))));
	}
	goto LA1;
	LA6: ;
	{
		invalidpragma_234047(n);
	}
	LA1: ;
	return result;
}

N_NIMCALL(NimStringDesc*, strarg_234029)(tnode209813* n, NimStringDesc* name, NI pos, NimStringDesc* default_234034) {
	NimStringDesc* result;
	tnode209813* x;
	result = 0;
	x = getarg_234057(n, name, pos);
	{
		if (!(x == NIM_NIL)) goto LA3;
		result = copyString(default_234034);
	}
	goto LA1;
	LA3: ;
	{
		if (!((*x).Kind >= ((NU8) 20) && (*x).Kind <= ((NU8) 22))) goto LA6;
		result = copyString((*x).kindU.S3.Strval);
	}
	goto LA1;
	LA6: ;
	{
		invalidpragma_234047(n);
	}
	LA1: ;
	return result;
}

N_NIMCALL(NIM_BOOL, boolarg_234038)(tnode209813* n, NimStringDesc* name, NI pos, NIM_BOOL default_234043) {
	NIM_BOOL result;
	tnode209813* x;
	result = 0;
	x = getarg_234057(n, name, pos);
	{
		if (!(x == NIM_NIL)) goto LA3;
		result = default_234043;
	}
	goto LA1;
	LA3: ;
	{
		NIM_BOOL LOC6;
		LOC6 = 0;
		LOC6 = ((*x).Kind == ((NU8) 2));
		if (!(LOC6)) goto LA7;
		LOC6 = identeq_186484((*x).kindU.S5.Ident, ((NimStringDesc*) &TMP1367));
		LA7: ;
		if (!LOC6) goto LA8;
		result = NIM_TRUE;
	}
	goto LA1;
	LA8: ;
	{
		NIM_BOOL LOC11;
		LOC11 = 0;
		LOC11 = ((*x).Kind == ((NU8) 2));
		if (!(LOC11)) goto LA12;
		LOC11 = identeq_186484((*x).kindU.S5.Ident, ((NimStringDesc*) &TMP1368));
		LA12: ;
		if (!LOC11) goto LA13;
		result = NIM_FALSE;
	}
	goto LA1;
	LA13: ;
	{
		invalidpragma_234047(n);
	}
	LA1: ;
	return result;
}

N_NIMCALL(tllstream196204*, filterstrip_234012)(tllstream196204* stdin_234014, NimStringDesc* filename, tnode209813* call) {
	tllstream196204* result;
	NimStringDesc* pattern;
	NIM_BOOL leading;
	NIM_BOOL trailing;
	NimStringDesc* line;
	result = 0;
	pattern = strarg_234029(call, ((NimStringDesc*) &TMP1365), ((NI) 1), ((NimStringDesc*) &TMP1366));
	leading = boolarg_234038(call, ((NimStringDesc*) &TMP1369), ((NI) 2), NIM_TRUE);
	trailing = boolarg_234038(call, ((NimStringDesc*) &TMP1370), ((NI) 3), NIM_TRUE);
	result = llstreamopen_196220(((NimStringDesc*) &TMP1366));
	line = rawNewString(((NI) 80));
	{
		while (1) {
			NIM_BOOL LOC3;
			NimStringDesc* stripped;
			LOC3 = 0;
			LOC3 = llstreamreadline_196610(stdin_234014, (&line));
			if (!LOC3) goto LA2;
			stripped = nsuStrip(line, leading, trailing);
			{
				NIM_BOOL LOC6;
				LOC6 = 0;
				LOC6 = (pattern->Sup.len == ((NI) 0));
				if (LOC6) goto LA7;
				LOC6 = nsuStartsWith(stripped, pattern);
				LA7: ;
				if (!LOC6) goto LA8;
				llstreamwriteln_196686(result, stripped);
			}
			goto LA4;
			LA8: ;
			{
				llstreamwriteln_196686(result, line);
			}
			LA4: ;
		} LA2: ;
	}
	llstreamclose_196310(stdin_234014);
	return result;
}

N_NIMCALL(tllstream196204*, filterreplace_234004)(tllstream196204* stdin_234006, NimStringDesc* filename, tnode209813* call) {
	tllstream196204* result;
	NimStringDesc* sub;
	NimStringDesc* by;
	NimStringDesc* line;
	result = 0;
	sub = strarg_234029(call, ((NimStringDesc*) &TMP1371), ((NI) 1), ((NimStringDesc*) &TMP1366));
	{
		if (!(sub->Sup.len == ((NI) 0))) goto LA3;
		invalidpragma_234047(call);
	}
	LA3: ;
	by = strarg_234029(call, ((NimStringDesc*) &TMP1372), ((NI) 2), ((NimStringDesc*) &TMP1366));
	result = llstreamopen_196220(((NimStringDesc*) &TMP1366));
	line = rawNewString(((NI) 80));
	{
		while (1) {
			NIM_BOOL LOC7;
			NimStringDesc* LOC8;
			LOC7 = 0;
			LOC7 = llstreamreadline_196610(stdin_234006, (&line));
			if (!LOC7) goto LA6;
			LOC8 = 0;
			LOC8 = nsuReplaceStr(line, sub, by);
			llstreamwriteln_196686(result, LOC8);
		} LA6: ;
	}
	llstreamclose_196310(stdin_234006);
	return result;
}
NIM_EXTERNC N_NOINLINE(void, compiler_filtersInit)(void) {
}

NIM_EXTERNC N_NOINLINE(void, compiler_filtersDatInit)(void) {
}

