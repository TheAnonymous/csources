/* Generated by Nim Compiler v0.10.3 */
/*   (c) 2015 Andreas Rumpf */
/* The generated code is subject to the original license. */
#define NIM_INTBITS 64
#include "nimbase.h"

#include <string.h>
typedef struct tnode207813 tnode207813;
typedef struct ttype207849 ttype207849;
typedef struct tlineinfo180338 tlineinfo180338;
typedef struct NimStringDesc NimStringDesc;
typedef struct TGenericSeq TGenericSeq;
typedef struct tsym207843 tsym207843;
typedef struct tident184021 tident184021;
typedef struct tnodeseq207807 tnodeseq207807;
typedef struct tidobj184015 tidobj184015;
typedef struct TNimObject TNimObject;
typedef struct TNimType TNimType;
typedef struct TNimNode TNimNode;
typedef struct ttypeseq207845 ttypeseq207845;
typedef struct tscope207837 tscope207837;
typedef struct TY207944 TY207944;
typedef struct tinstantiation207833 tinstantiation207833;
typedef struct tstrtable207817 tstrtable207817;
typedef struct tsymseq207815 tsymseq207815;
typedef struct tloc207827 tloc207827;
typedef struct trope177009 trope177009;
typedef struct tlib207831 tlib207831;
typedef struct intset204056 intset204056;
typedef struct ttrunk204052 ttrunk204052;
typedef struct ttrunkseq204054 ttrunkseq204054;
typedef struct TY207933 TY207933;
typedef struct tlistentry127022 tlistentry127022;
struct  tlineinfo180338  {
NI16 Line;
NI16 Col;
NI32 Fileindex;
};
struct  TGenericSeq  {
NI len;
NI reserved;
};
struct  NimStringDesc  {
  TGenericSeq Sup;
NIM_CHAR data[SEQ_DECL_SIZE];
};
struct  tnode207813  {
ttype207849* Typ;
tlineinfo180338 Info;
NU16 Flags;
NU8 Kind;
union{
struct {NI64 Intval;
} S1;
struct {NF Floatval;
} S2;
struct {NimStringDesc* Strval;
} S3;
struct {tsym207843* Sym;
} S4;
struct {tident184021* Ident;
} S5;
struct {tnodeseq207807* Sons;
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
struct  tidobj184015  {
  TNimObject Sup;
NI Id;
};
struct  tstrtable207817  {
NI Counter;
tsymseq207815* Data;
};
struct  tloc207827  {
NU8 K;
NU8 S;
NU16 Flags;
ttype207849* T;
trope177009* R;
trope177009* Heaproot;
};
struct  tsym207843  {
  tidobj184015 Sup;
NU8 Kind;
union{
struct {ttypeseq207845* Typeinstcache;
tscope207837* Typscope;
} S1;
struct {TY207944* Procinstcache;
tscope207837* Scope;
} S2;
struct {TY207944* Usedgenerics;
tstrtable207817 Tab;
} S3;
struct {tsym207843* Guard;
} S4;
} kindU;
NU16 Magic;
ttype207849* Typ;
tident184021* Name;
tlineinfo180338 Info;
tsym207843* Owner;
NU32 Flags;
tnode207813* Ast;
NU32 Options;
NI Position;
NI Offset;
tloc207827 Loc;
tlib207831* Annex;
tnode207813* Constraint;
};
struct  intset204056  {
NI Counter;
NI Max;
ttrunk204052* Head;
ttrunkseq204054* Data;
};
struct  ttype207849  {
  tidobj184015 Sup;
NU8 Kind;
NU8 Callconv;
NU32 Flags;
ttypeseq207845* Sons;
tnode207813* N;
tsym207843* Owner;
tsym207843* Sym;
tsym207843* Destructor;
tsym207843* Deepcopy;
NI64 Size;
NI16 Align;
NI16 Locklevel;
tloc207827 Loc;
};
struct  tident184021  {
  tidobj184015 Sup;
NimStringDesc* S;
tident184021* Next;
NI H;
};
struct  TNimNode  {
NU8 kind;
NI offset;
TNimType* typ;
NCSTRING name;
NI len;
TNimNode** sons;
};
struct  tscope207837  {
NI Depthlevel;
tstrtable207817 Symbols;
tnodeseq207807* Usingsyms;
tscope207837* Parent;
};
struct  tinstantiation207833  {
tsym207843* Sym;
ttypeseq207845* Concretetypes;
TY207933* Usedby;
};
struct  trope177009  {
  TNimObject Sup;
trope177009* Left;
trope177009* Right;
NI Length;
NimStringDesc* Data;
};
struct  tlistentry127022  {
  TNimObject Sup;
tlistentry127022* Prev;
tlistentry127022* Next;
};
struct  tlib207831  {
  tlistentry127022 Sup;
NU8 Kind;
NIM_BOOL Generated;
NIM_BOOL Isoverriden;
trope177009* Name;
tnode207813* Path;
};
typedef NI TY27020[8];
struct  ttrunk204052  {
ttrunk204052* Next;
NI Key;
TY27020 Bits;
};
struct tnodeseq207807 {
  TGenericSeq Sup;
  tnode207813* data[SEQ_DECL_SIZE];
};
struct ttypeseq207845 {
  TGenericSeq Sup;
  ttype207849* data[SEQ_DECL_SIZE];
};
struct TY207944 {
  TGenericSeq Sup;
  tinstantiation207833* data[SEQ_DECL_SIZE];
};
struct tsymseq207815 {
  TGenericSeq Sup;
  tsym207843* data[SEQ_DECL_SIZE];
};
struct ttrunkseq204054 {
  TGenericSeq Sup;
  ttrunk204052* data[SEQ_DECL_SIZE];
};
struct TY207933 {
  TGenericSeq Sup;
  NI32 data[SEQ_DECL_SIZE];
};
N_NIMCALL(NU8, ispartof_411362)(ttype207849* a, ttype207849* b);
N_NIMCALL(void, initintset_204927)(intset204056* Result);
N_NOINLINE(void, chckNil)(void* p);
N_NIMCALL(NU8, ispartofaux_411020)(ttype207849* a, ttype207849* b, intset204056* marker);
N_NIMCALL(NIM_BOOL, containsorincl_204898)(intset204056* s, NI key);
N_NIMCALL(NIM_BOOL, comparetypes_243038)(ttype207849* x, ttype207849* y, NU8 cmp, NU8 flags);
N_NIMCALL(NU8, ispartofaux_411029)(tnode207813* n, ttype207849* b, intset204056* marker);
N_NIMCALL(NI, sonslen_210403)(tnode207813* n);
N_NIMCALL(tnode207813*, lastson_210431)(tnode207813* n);
N_NIMCALL(void, internalerror_182443)(NimStringDesc* errmsg);
N_NIMCALL(void, internalerror_182424)(tlineinfo180338 info, NimStringDesc* errmsg);
N_NIMCALL(ttype207849*, lastson_210442)(ttype207849* n);
N_NIMCALL(NI, sonslen_210351)(ttype207849* n);
N_NIMCALL(NU8, ispartof_411375)(tnode207813* a, tnode207813* b);
static N_INLINE(tnode207813*, HEX5BHEX5D_208246)(tnode207813* n, NI i);
static N_INLINE(NI, len_208097)(tnode207813* n);
N_NIMCALL(NIM_BOOL, isdeepconstexpr_235459)(tnode207813* n);
N_NIMCALL(NIM_BOOL, samevalue_214324)(tnode207813* a, tnode207813* b);
STRING_LITERAL(TMP3165, "isPartOfAux(record case branch)", 31);
STRING_LITERAL(TMP3166, "isPartOfAux()", 13);

N_NIMCALL(NU8, ispartofaux_411029)(tnode207813* n, ttype207849* b, intset204056* marker) {
	NU8 result;
{	result = 0;
	result = ((NU8) 0);
	switch ((*n).Kind) {
	case ((NU8) 138):
	{
		{
			NI i_411048;
			NI HEX3Atmp_411238;
			NI LOC3;
			NI res_411241;
			i_411048 = 0;
			HEX3Atmp_411238 = 0;
			LOC3 = 0;
			LOC3 = sonslen_210403(n);
			HEX3Atmp_411238 = (NI64)(LOC3 - ((NI) 1));
			res_411241 = ((NI) 0);
			{
				while (1) {
					if (!(res_411241 <= HEX3Atmp_411238)) goto LA5;
					i_411048 = res_411241;
					result = ispartofaux_411029((*n).kindU.S6.Sons->data[i_411048], b, marker);
					{
						if (!(result == ((NU8) 2))) goto LA8;
						goto BeforeRet;
					}
					LA8: ;
					res_411241 += ((NI) 1);
				} LA5: ;
			}
		}
	}
	break;
	case ((NU8) 139):
	{
		result = ispartofaux_411029((*n).kindU.S6.Sons->data[((NI) 0)], b, marker);
		{
			if (!(result == ((NU8) 2))) goto LA13;
			goto BeforeRet;
		}
		LA13: ;
		{
			NI i_411223;
			NI HEX3Atmp_411246;
			NI LOC16;
			NI res_411249;
			i_411223 = 0;
			HEX3Atmp_411246 = 0;
			LOC16 = 0;
			LOC16 = sonslen_210403(n);
			HEX3Atmp_411246 = (NI64)(LOC16 - ((NI) 1));
			res_411249 = ((NI) 1);
			{
				while (1) {
					if (!(res_411249 <= HEX3Atmp_411246)) goto LA18;
					i_411223 = res_411249;
					switch ((*(*n).kindU.S6.Sons->data[i_411223]).Kind) {
					case ((NU8) 85):
					case ((NU8) 88):
					{
						tnode207813* LOC20;
						LOC20 = 0;
						LOC20 = lastson_210431((*n).kindU.S6.Sons->data[i_411223]);
						result = ispartofaux_411029(LOC20, b, marker);
						{
							if (!(result == ((NU8) 2))) goto LA23;
							goto BeforeRet;
						}
						LA23: ;
					}
					break;
					default:
					{
						internalerror_182443(((NimStringDesc*) &TMP3165));
					}
					break;
					}
					res_411249 += ((NI) 1);
				} LA18: ;
			}
		}
	}
	break;
	case ((NU8) 3):
	{
		result = ispartofaux_411020((*(*n).kindU.S4.Sym).Typ, b, marker);
	}
	break;
	default:
	{
		internalerror_182424((*n).Info, ((NimStringDesc*) &TMP3166));
	}
	break;
	}
	}BeforeRet: ;
	return result;
}

N_NIMCALL(NU8, ispartofaux_411020)(ttype207849* a, ttype207849* b, intset204056* marker) {
	NU8 result;
{	result = 0;
	result = ((NU8) 0);
	{
		NIM_BOOL LOC3;
		LOC3 = 0;
		LOC3 = (a == NIM_NIL);
		if (LOC3) goto LA4;
		LOC3 = (b == NIM_NIL);
		LA4: ;
		if (!LOC3) goto LA5;
		goto BeforeRet;
	}
	LA5: ;
	{
		NIM_BOOL LOC9;
		LOC9 = 0;
		LOC9 = containsorincl_204898(marker, (*a).Sup.Id);
		if (!LOC9) goto LA10;
		goto BeforeRet;
	}
	LA10: ;
	{
		NIM_BOOL LOC14;
		LOC14 = 0;
		LOC14 = comparetypes_243038(a, b, ((NU8) 1), 0);
		if (!LOC14) goto LA15;
		result = ((NU8) 2);
		goto BeforeRet;
	}
	LA15: ;
	switch ((*a).Kind) {
	case ((NU8) 17):
	{
		result = ispartofaux_411020((*a).Sons->data[((NI) 0)], b, marker);
		{
			if (!(result == ((NU8) 0))) goto LA20;
			result = ispartofaux_411029((*a).N, b, marker);
		}
		LA20: ;
	}
	break;
	case ((NU8) 11):
	case ((NU8) 13):
	{
		ttype207849* LOC23;
		LOC23 = 0;
		LOC23 = lastson_210442(a);
		result = ispartofaux_411020(LOC23, b, marker);
	}
	break;
	case ((NU8) 16):
	case ((NU8) 4):
	case ((NU8) 19):
	case ((NU8) 18):
	{
		{
			NI i_411329;
			NI HEX3Atmp_411340;
			NI LOC26;
			NI res_411343;
			i_411329 = 0;
			HEX3Atmp_411340 = 0;
			LOC26 = 0;
			LOC26 = sonslen_210351(a);
			HEX3Atmp_411340 = (NI64)(LOC26 - ((NI) 1));
			res_411343 = ((NI) 0);
			{
				while (1) {
					if (!(res_411343 <= HEX3Atmp_411340)) goto LA28;
					i_411329 = res_411343;
					result = ispartofaux_411020((*a).Sons->data[i_411329], b, marker);
					{
						if (!(result == ((NU8) 2))) goto LA31;
						goto BeforeRet;
					}
					LA31: ;
					res_411343 += ((NI) 1);
				} LA28: ;
			}
		}
	}
	break;
	default:
	{
	}
	break;
	}
	}BeforeRet: ;
	return result;
}

N_NIMCALL(NU8, ispartof_411362)(ttype207849* a, ttype207849* b) {
	NU8 result;
	intset204056 marker;
	result = 0;
	memset((void*)(&marker), 0, sizeof(marker));
	chckNil((void*)(&marker));
	memset((void*)(&marker), 0, sizeof(marker));
	initintset_204927((&marker));
	result = ispartofaux_411020(b, a, (&marker));
	return result;
}

static N_INLINE(tnode207813*, HEX5BHEX5D_208246)(tnode207813* n, NI i) {
	tnode207813* result;
	result = 0;
	result = (*n).kindU.S6.Sons->data[i];
	return result;
}

static N_INLINE(NI, len_208097)(tnode207813* n) {
	NI result;
	result = 0;
	{
		if (!(*n).kindU.S6.Sons == 0) goto LA3;
		result = ((NI) 0);
	}
	goto LA1;
	LA3: ;
	{
		result = (*n).kindU.S6.Sons->Sup.len;
	}
	LA1: ;
	return result;
}

N_NIMCALL(NU8, ispartof_411375)(tnode207813* a, tnode207813* b) {
	NU8 result;
	result = 0;
	{
		if (!((*a).Kind == (*b).Kind)) goto LA3;
		switch ((*a).Kind) {
		case ((NU8) 3):
		{
			{
				if (!((*(*a).kindU.S4.Sym).Sup.Id == (*(*b).kindU.S4.Sym).Sup.Id)) goto LA8;
				result = ((NU8) 2);
			}
			goto LA6;
			LA8: ;
			{
				NIM_BOOL LOC11;
				LOC11 = 0;
				LOC11 = ((4384 &(1<<(((*(*a).kindU.S4.Sym).Kind)&31)))!=0);
				if (LOC11) goto LA12;
				LOC11 = ((4384 &(1<<(((*(*b).kindU.S4.Sym).Kind)&31)))!=0);
				LA12: ;
				if (!LOC11) goto LA13;
				result = ((NU8) 0);
			}
			goto LA6;
			LA13: ;
			{
				{
					NU8 LOC18;
					LOC18 = 0;
					LOC18 = ispartof_411362((*(*a).kindU.S4.Sym).Typ, (*(*b).kindU.S4.Sym).Typ);
					if (!!((LOC18 == ((NU8) 0)))) goto LA19;
					result = ((NU8) 1);
				}
				LA19: ;
			}
			LA6: ;
		}
		break;
		case ((NU8) 42):
		{
			tnode207813* LOC22;
			tnode207813* LOC23;
			LOC22 = 0;
			LOC22 = HEX5BHEX5D_208246(a, ((NI) 0));
			LOC23 = 0;
			LOC23 = HEX5BHEX5D_208246(b, ((NI) 0));
			result = ispartof_411375(LOC22, LOC23);
			{
				NIM_BOOL LOC26;
				NI LOC27;
				NI LOC29;
				LOC26 = 0;
				LOC27 = 0;
				LOC27 = len_208097(a);
				LOC26 = (((NI) 2) <= LOC27);
				if (!(LOC26)) goto LA28;
				LOC29 = 0;
				LOC29 = len_208097(b);
				LOC26 = (((NI) 2) <= LOC29);
				LA28: ;
				if (!LOC26) goto LA30;
				{
					NIM_BOOL LOC34;
					NIM_BOOL LOC35;
					tnode207813* LOC37;
					tnode207813* LOC39;
					tnode207813* x;
					tnode207813* y;
					LOC34 = 0;
					LOC35 = 0;
					LOC35 = (result == ((NU8) 2));
					if (!(LOC35)) goto LA36;
					LOC37 = 0;
					LOC37 = HEX5BHEX5D_208246(a, ((NI) 1));
					LOC35 = isdeepconstexpr_235459(LOC37);
					LA36: ;
					LOC34 = LOC35;
					if (!(LOC34)) goto LA38;
					LOC39 = 0;
					LOC39 = HEX5BHEX5D_208246(b, ((NI) 1));
					LOC34 = isdeepconstexpr_235459(LOC39);
					LA38: ;
					if (!LOC34) goto LA40;
					{
						tnode207813* LOC44;
						tnode207813* LOC47;
						LOC44 = 0;
						LOC44 = HEX5BHEX5D_208246(a, ((NI) 1));
						if (!((*LOC44).Kind == ((NU8) 58))) goto LA45;
						LOC47 = 0;
						LOC47 = HEX5BHEX5D_208246(a, ((NI) 1));
						x = HEX5BHEX5D_208246(LOC47, ((NI) 1));
					}
					goto LA42;
					LA45: ;
					{
						x = HEX5BHEX5D_208246(a, ((NI) 1));
					}
					LA42: ;
					{
						tnode207813* LOC51;
						tnode207813* LOC54;
						LOC51 = 0;
						LOC51 = HEX5BHEX5D_208246(b, ((NI) 1));
						if (!((*LOC51).Kind == ((NU8) 58))) goto LA52;
						LOC54 = 0;
						LOC54 = HEX5BHEX5D_208246(b, ((NI) 1));
						y = HEX5BHEX5D_208246(LOC54, ((NI) 1));
					}
					goto LA49;
					LA52: ;
					{
						y = HEX5BHEX5D_208246(b, ((NI) 1));
					}
					LA49: ;
					{
						NIM_BOOL LOC58;
						LOC58 = 0;
						LOC58 = samevalue_214324(x, y);
						if (!LOC58) goto LA59;
						result = ((NU8) 2);
					}
					goto LA56;
					LA59: ;
					{
						result = ((NU8) 0);
					}
					LA56: ;
				}
				LA40: ;
			}
			goto LA24;
			LA30: ;
			{
				{
					if (!!((result == ((NU8) 2)))) goto LA65;
					{
						NU8 LOC69;
						LOC69 = 0;
						LOC69 = ispartof_411362((*a).Typ, (*b).Typ);
						if (!!((LOC69 == ((NU8) 0)))) goto LA70;
						result = ((NU8) 1);
					}
					LA70: ;
				}
				LA65: ;
			}
			LA24: ;
		}
		break;
		case ((NU8) 45):
		{
			tnode207813* LOC73;
			tnode207813* LOC74;
			LOC73 = 0;
			LOC73 = HEX5BHEX5D_208246(a, ((NI) 0));
			LOC74 = 0;
			LOC74 = HEX5BHEX5D_208246(b, ((NI) 0));
			result = ispartof_411375(LOC73, LOC74);
			{
				if (!!((result == ((NU8) 0)))) goto LA77;
				{
					tnode207813* LOC81;
					tnode207813* LOC82;
					LOC81 = 0;
					LOC81 = HEX5BHEX5D_208246(a, ((NI) 1));
					LOC82 = 0;
					LOC82 = HEX5BHEX5D_208246(b, ((NI) 1));
					if (!!(((*(*LOC81).kindU.S4.Sym).Sup.Id == (*(*LOC82).kindU.S4.Sym).Sup.Id))) goto LA83;
					result = ((NU8) 0);
				}
				LA83: ;
			}
			LA77: ;
		}
		break;
		case ((NU8) 65):
		case ((NU8) 47):
		{
			tnode207813* LOC86;
			tnode207813* LOC87;
			LOC86 = 0;
			LOC86 = HEX5BHEX5D_208246(a, ((NI) 0));
			LOC87 = 0;
			LOC87 = HEX5BHEX5D_208246(b, ((NI) 0));
			result = ispartof_411375(LOC86, LOC87);
			{
				if (!!((result == ((NU8) 2)))) goto LA90;
				{
					NU8 LOC94;
					LOC94 = 0;
					LOC94 = ispartof_411362((*a).Typ, (*b).Typ);
					if (!!((LOC94 == ((NU8) 0)))) goto LA95;
					result = ((NU8) 1);
				}
				LA95: ;
			}
			LA90: ;
		}
		break;
		case ((NU8) 58):
		case ((NU8) 59):
		case ((NU8) 60):
		{
			tnode207813* LOC98;
			tnode207813* LOC99;
			LOC98 = 0;
			LOC98 = HEX5BHEX5D_208246(a, ((NI) 1));
			LOC99 = 0;
			LOC99 = HEX5BHEX5D_208246(b, ((NI) 1));
			result = ispartof_411375(LOC98, LOC99);
		}
		break;
		case ((NU8) 67):
		case ((NU8) 66):
		case ((NU8) 46):
		{
			tnode207813* LOC101;
			tnode207813* LOC102;
			LOC101 = 0;
			LOC101 = HEX5BHEX5D_208246(a, ((NI) 0));
			LOC102 = 0;
			LOC102 = HEX5BHEX5D_208246(b, ((NI) 0));
			result = ispartof_411375(LOC101, LOC102);
		}
		break;
		default:
		{
		}
		break;
		}
	}
	goto LA1;
	LA3: ;
	{
		switch ((*b).Kind) {
		case ((NU8) 45):
		case ((NU8) 42):
		case ((NU8) 67):
		case ((NU8) 66):
		case ((NU8) 46):
		{
			tnode207813* LOC106;
			LOC106 = 0;
			LOC106 = HEX5BHEX5D_208246(b, ((NI) 0));
			result = ispartof_411375(a, LOC106);
		}
		break;
		case ((NU8) 65):
		case ((NU8) 47):
		{
			{
				NU8 LOC110;
				tnode207813* LOC113;
				LOC110 = 0;
				LOC110 = ispartof_411362((*a).Typ, (*b).Typ);
				if (!!((LOC110 == ((NU8) 0)))) goto LA111;
				LOC113 = 0;
				LOC113 = HEX5BHEX5D_208246(b, ((NI) 0));
				result = ispartof_411375(a, LOC113);
				{
					if (!(result == ((NU8) 0))) goto LA116;
					result = ((NU8) 1);
				}
				LA116: ;
			}
			LA111: ;
		}
		break;
		case ((NU8) 58):
		case ((NU8) 59):
		case ((NU8) 60):
		{
			tnode207813* LOC119;
			LOC119 = 0;
			LOC119 = HEX5BHEX5D_208246(b, ((NI) 1));
			result = ispartof_411375(a, LOC119);
		}
		break;
		case ((NU8) 3):
		{
			switch ((*a).Kind) {
			case ((NU8) 45):
			case ((NU8) 42):
			case ((NU8) 67):
			case ((NU8) 66):
			case ((NU8) 46):
			{
				tnode207813* LOC122;
				LOC122 = 0;
				LOC122 = HEX5BHEX5D_208246(a, ((NI) 0));
				result = ispartof_411375(LOC122, b);
			}
			break;
			case ((NU8) 58):
			case ((NU8) 59):
			case ((NU8) 60):
			{
				tnode207813* LOC124;
				LOC124 = 0;
				LOC124 = HEX5BHEX5D_208246(a, ((NI) 1));
				result = ispartof_411375(LOC124, b);
			}
			break;
			case ((NU8) 65):
			case ((NU8) 47):
			{
				{
					NU8 LOC128;
					tnode207813* LOC131;
					LOC128 = 0;
					LOC128 = ispartof_411362((*a).Typ, (*b).Typ);
					if (!!((LOC128 == ((NU8) 0)))) goto LA129;
					LOC131 = 0;
					LOC131 = HEX5BHEX5D_208246(a, ((NI) 0));
					result = ispartof_411375(LOC131, b);
					{
						if (!(result == ((NU8) 0))) goto LA134;
						result = ((NU8) 1);
					}
					LA134: ;
				}
				LA129: ;
			}
			break;
			default:
			{
			}
			break;
			}
		}
		break;
		default:
		{
		}
		break;
		}
	}
	LA1: ;
	return result;
}
NIM_EXTERNC N_NOINLINE(void, compiler_aliasesInit)(void) {
}

NIM_EXTERNC N_NOINLINE(void, compiler_aliasesDatInit)(void) {
}

