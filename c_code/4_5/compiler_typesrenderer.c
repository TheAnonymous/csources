/* Generated by Nim Compiler v0.10.3 */
/*   (c) 2015 Andreas Rumpf */
/* The generated code is subject to the original license. */
#define NIM_INTBITS 32
#include "nimbase.h"

#include <string.h>
typedef struct NimStringDesc NimStringDesc;
typedef struct TGenericSeq TGenericSeq;
typedef struct tnode207813 tnode207813;
typedef struct ttype207849 ttype207849;
typedef struct tlineinfo180338 tlineinfo180338;
typedef struct tsym207843 tsym207843;
typedef struct tident184021 tident184021;
typedef struct tnodeseq207807 tnodeseq207807;
typedef struct tidobj184015 tidobj184015;
typedef struct TNimObject TNimObject;
typedef struct TNimType TNimType;
typedef struct TNimNode TNimNode;
typedef struct TY120008 TY120008;
typedef struct ttypeseq207845 ttypeseq207845;
typedef struct tscope207837 tscope207837;
typedef struct TY207944 TY207944;
typedef struct tinstantiation207833 tinstantiation207833;
typedef struct tstrtable207817 tstrtable207817;
typedef struct tsymseq207815 tsymseq207815;
typedef struct tloc207827 tloc207827;
typedef struct trope177009 trope177009;
typedef struct tlib207831 tlib207831;
typedef struct tcell45946 tcell45946;
typedef struct tcellseq45962 tcellseq45962;
typedef struct tgcheap47816 tgcheap47816;
typedef struct tcellset45958 tcellset45958;
typedef struct tpagedesc45954 tpagedesc45954;
typedef struct tmemregion27810 tmemregion27810;
typedef struct tsmallchunk27040 tsmallchunk27040;
typedef struct tllchunk27804 tllchunk27804;
typedef struct tbigchunk27042 tbigchunk27042;
typedef struct tintset27017 tintset27017;
typedef struct ttrunk27013 ttrunk27013;
typedef struct tavlnode27808 tavlnode27808;
typedef struct tgcstat47814 tgcstat47814;
typedef struct TY207933 TY207933;
typedef struct tlistentry127022 tlistentry127022;
typedef struct tbasechunk27038 tbasechunk27038;
typedef struct tfreecell27030 tfreecell27030;
struct  TGenericSeq  {
NI len;
NI reserved;
};
struct  NimStringDesc  {
  TGenericSeq Sup;
NIM_CHAR data[SEQ_DECL_SIZE];
};
struct  tlineinfo180338  {
NI16 Line;
NI16 Col;
NI32 Fileindex;
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
struct  tcell45946  {
NI Refcount;
TNimType* Typ;
};
struct  tcellseq45962  {
NI Len;
NI Cap;
tcell45946** D;
};
struct  tcellset45958  {
NI Counter;
NI Max;
tpagedesc45954* Head;
tpagedesc45954** Data;
};
typedef tsmallchunk27040* TY27822[512];
typedef ttrunk27013* ttrunkbuckets27015[256];
struct  tintset27017  {
ttrunkbuckets27015 Data;
};
struct  tmemregion27810  {
NI Minlargeobj;
NI Maxlargeobj;
TY27822 Freesmallchunks;
tllchunk27804* Llmem;
NI Currmem;
NI Maxmem;
NI Freemem;
NI Lastsize;
tbigchunk27042* Freechunkslist;
tintset27017 Chunkstarts;
tavlnode27808* Root;
tavlnode27808* Deleted;
tavlnode27808* Last;
tavlnode27808* Freeavlnodes;
};
struct  tgcstat47814  {
NI Stackscans;
NI Cyclecollections;
NI Maxthreshold;
NI Maxstacksize;
NI Maxstackcells;
NI Cycletablesize;
NI64 Maxpause;
};
struct  tgcheap47816  {
void* Stackbottom;
NI Cyclethreshold;
tcellseq45962 Zct;
tcellseq45962 Decstack;
tcellset45958 Cycleroots;
tcellseq45962 Tempstack;
NI Recgclock;
tmemregion27810 Region;
tgcstat47814 Stat;
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
typedef NI TY27020[16];
struct  tpagedesc45954  {
tpagedesc45954* Next;
NI Key;
TY27020 Bits;
};
struct  tbasechunk27038  {
NI Prevsize;
NI Size;
NIM_BOOL Used;
};
struct  tsmallchunk27040  {
  tbasechunk27038 Sup;
tsmallchunk27040* Next;
tsmallchunk27040* Prev;
tfreecell27030* Freelist;
NI Free;
NI Acc;
NF Data;
};
struct  tllchunk27804  {
NI Size;
NI Acc;
tllchunk27804* Next;
};
struct  tbigchunk27042  {
  tbasechunk27038 Sup;
tbigchunk27042* Next;
tbigchunk27042* Prev;
NI Align;
NF Data;
};
struct  ttrunk27013  {
ttrunk27013* Next;
NI Key;
TY27020 Bits;
};
typedef tavlnode27808* TY27814[2];
struct  tavlnode27808  {
TY27814 Link;
NI Key;
NI Upperbound;
NI Level;
};
struct  tfreecell27030  {
tfreecell27030* Next;
NI Zerofield;
};
struct tnodeseq207807 {
  TGenericSeq Sup;
  tnode207813* data[SEQ_DECL_SIZE];
};
struct TY120008 {
  TGenericSeq Sup;
  NimStringDesc* data[SEQ_DECL_SIZE];
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
struct TY207933 {
  TGenericSeq Sup;
  NI32 data[SEQ_DECL_SIZE];
};
N_NIMCALL(NimStringDesc*, copyString)(NimStringDesc* src);
static N_INLINE(NI, len_208097)(tnode207813* n);
N_NIMCALL(NimStringDesc*, renderplainsymbolname_352013)(tnode207813* n);
static N_INLINE(tnode207813*, HEX5BHEX5D_208246)(tnode207813* n, NI i);
static N_INLINE(NIM_BOOL, eqStrings)(NimStringDesc* a, NimStringDesc* b);
N_NIMCALL(NimStringDesc*, renderdefinitionname_228154)(tsym207843* s, NIM_BOOL noquotes);
N_NIMCALL(void, internalerror_182424)(tlineinfo180338 info, NimStringDesc* errmsg);
static N_INLINE(void, appendString)(NimStringDesc* dest, NimStringDesc* src);
N_NIMCALL(NimStringDesc*, reprEnum)(NI e_81929, TNimType* typ);
N_NIMCALL(NimStringDesc*, rawNewString)(NI space);
N_NIMCALL(void*, newSeq)(TNimType* typ, NI len);
N_NIMCALL(void, renderparamtypes_354275)(TY120008** found, tnode207813* n);
N_NIMCALL(NimStringDesc*, rendertype_352224)(tnode207813* n);
N_NIMCALL(NimStringDesc*, typetostring_236032)(ttype207849* typ, NU8 prefer);
static N_INLINE(void, appendChar)(NimStringDesc* dest, NIM_CHAR c);
N_NIMCALL(NimStringDesc*, resizeString)(NimStringDesc* dest, NI addlen);
N_NIMCALL(TGenericSeq*, incrSeq)(TGenericSeq* seq, NI elemsize);
N_NIMCALL(NimStringDesc*, copyStringRC1)(NimStringDesc* src);
static N_INLINE(void, nimGCunrefNoCycle)(void* p);
static N_INLINE(tcell45946*, usrtocell_49446)(void* usr);
static N_INLINE(void, rtladdzct_51004)(tcell45946* c);
N_NOINLINE(void, addzct_49417)(tcellseq45962* s, tcell45946* c);
N_NIMCALL(NimStringDesc*, nsuJoinSep)(NimStringDesc** a, NI aLen0, NimStringDesc* sep);
STRING_LITERAL(TMP4748, "", 0);
STRING_LITERAL(TMP4749, "*", 1);
STRING_LITERAL(TMP4750, "renderPlainSymbolName() with ", 29);
STRING_LITERAL(TMP4757, "ref.", 4);
STRING_LITERAL(TMP4758, "ptr.", 4);
STRING_LITERAL(TMP4759, "proc(", 5);
STRING_LITERAL(TMP4760, "tuple[", 6);
STRING_LITERAL(TMP4761, "renderParamTypes(found,n) with ", 31);
extern TNimType NTI207029; /* TNodeKind */
extern TNimType NTI120008; /* seq[string] */
extern tgcheap47816 gch_47844;

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

static N_INLINE(tnode207813*, HEX5BHEX5D_208246)(tnode207813* n, NI i) {
	tnode207813* result;
	result = 0;
	result = (*n).kindU.S6.Sons->data[i];
	return result;
}

static N_INLINE(NIM_BOOL, eqStrings)(NimStringDesc* a, NimStringDesc* b) {
	NIM_BOOL result;
	NIM_BOOL LOC11;
	int LOC13;
{	result = 0;
	{
		if (!(a == b)) goto LA3;
		result = NIM_TRUE;
		goto BeforeRet;
	}
	LA3: ;
	{
		NIM_BOOL LOC7;
		LOC7 = 0;
		LOC7 = (a == NIM_NIL);
		if (LOC7) goto LA8;
		LOC7 = (b == NIM_NIL);
		LA8: ;
		if (!LOC7) goto LA9;
		result = NIM_FALSE;
		goto BeforeRet;
	}
	LA9: ;
	LOC11 = 0;
	LOC11 = ((*a).Sup.len == (*b).Sup.len);
	if (!(LOC11)) goto LA12;
	LOC13 = 0;
	LOC13 = memcmp(((NCSTRING) ((*a).data)), ((NCSTRING) ((*b).data)), (*a).Sup.len);
	LOC11 = (LOC13 == ((NI32) 0));
	LA12: ;
	result = LOC11;
	goto BeforeRet;
	}BeforeRet: ;
	return result;
}

static N_INLINE(void, appendString)(NimStringDesc* dest, NimStringDesc* src) {
	memcpy(((NCSTRING) ((&(*dest).data[((*dest).Sup.len)- 0]))), ((NCSTRING) ((*src).data)), (NI32)((*src).Sup.len + ((NI) 1)));
	(*dest).Sup.len += (*src).Sup.len;
}

N_NIMCALL(NimStringDesc*, renderplainsymbolname_352013)(tnode207813* n) {
	NimStringDesc* result;
{	result = 0;
	result = copyString(((NimStringDesc*) &TMP4748));
	switch ((*n).Kind) {
	case ((NU8) 31):
	{
		{
			NI i_352036;
			NI HEX3Atmp_352202;
			NI LOC3;
			NI res_352205;
			i_352036 = 0;
			HEX3Atmp_352202 = 0;
			LOC3 = 0;
			LOC3 = len_208097(n);
			HEX3Atmp_352202 = (LOC3 - 1);
			res_352205 = ((NI) 0);
			{
				while (1) {
					NI LOC6;
					tnode207813* LOC7;
					if (!(res_352205 <= HEX3Atmp_352202)) goto LA5;
					i_352036 = res_352205;
					LOC6 = 0;
					LOC6 = len_208097(n);
					LOC7 = 0;
					LOC7 = HEX5BHEX5D_208246(n, (LOC6 - 1));
					result = renderplainsymbolname_352013(LOC7);
					{
						if (!(((NI) 0) < result->Sup.len)) goto LA10;
						goto BeforeRet;
					}
					LA10: ;
					res_352205 += ((NI) 1);
				} LA5: ;
			}
		}
	}
	break;
	case ((NU8) 2):
	{
		{
			if (!!(eqStrings((*(*n).kindU.S5.Ident).S, ((NimStringDesc*) &TMP4749)))) goto LA15;
			result = copyString((*(*n).kindU.S5.Ident).S);
		}
		LA15: ;
	}
	break;
	case ((NU8) 3):
	{
		result = renderdefinitionname_228154((*n).kindU.S4.Sym, NIM_TRUE);
	}
	break;
	case ((NU8) 43):
	{
		tnode207813* LOC19;
		LOC19 = 0;
		LOC19 = HEX5BHEX5D_208246(n, ((NI) 0));
		result = renderplainsymbolname_352013(LOC19);
	}
	break;
	case ((NU8) 53):
	{
		NI LOC21;
		tnode207813* LOC22;
		LOC21 = 0;
		LOC21 = len_208097(n);
		LOC22 = 0;
		LOC22 = HEX5BHEX5D_208246(n, (LOC21 - 1));
		result = renderplainsymbolname_352013(LOC22);
	}
	break;
	default:
	{
		NimStringDesc* LOC24;
		LOC24 = 0;
		LOC24 = rawNewString(reprEnum((*n).Kind, (&NTI207029))->Sup.len + 29);
appendString(LOC24, ((NimStringDesc*) &TMP4750));
appendString(LOC24, reprEnum((*n).Kind, (&NTI207029)));
		internalerror_182424((*n).Info, LOC24);
	}
	break;
	}
	}BeforeRet: ;
	return result;
}

static N_INLINE(void, appendChar)(NimStringDesc* dest, NIM_CHAR c) {
	(*dest).data[((*dest).Sup.len)- 0] = c;
	(*dest).data[((NI32)((*dest).Sup.len + ((NI) 1)))- 0] = 0;
	(*dest).Sup.len += ((NI) 1);
}

N_NIMCALL(NimStringDesc*, rendertype_352224)(tnode207813* n) {
	NimStringDesc* result;
	result = 0;
	switch ((*n).Kind) {
	case ((NU8) 2):
	{
		result = copyString((*(*n).kindU.S5.Ident).S);
	}
	break;
	case ((NU8) 3):
	{
		result = typetostring_236032((*(*n).kindU.S4.Sym).Typ, ((NU8) 0));
	}
	break;
	case ((NU8) 143):
	{
		tnode207813* LOC4;
		LOC4 = 0;
		LOC4 = HEX5BHEX5D_208246(n, ((NI) 0));
		result = rendertype_352224(LOC4);
	}
	break;
	case ((NU8) 141):
	{
		NimStringDesc* LOC6;
		tnode207813* LOC7;
		NimStringDesc* LOC8;
		LOC6 = 0;
		LOC7 = 0;
		LOC7 = HEX5BHEX5D_208246(n, ((NI) 0));
		LOC8 = 0;
		LOC8 = rendertype_352224(LOC7);
		LOC6 = rawNewString(LOC8->Sup.len + 4);
appendString(LOC6, ((NimStringDesc*) &TMP4757));
appendString(LOC6, LOC8);
		result = LOC6;
	}
	break;
	case ((NU8) 142):
	{
		NimStringDesc* LOC10;
		tnode207813* LOC11;
		NimStringDesc* LOC12;
		LOC10 = 0;
		LOC11 = 0;
		LOC11 = HEX5BHEX5D_208246(n, ((NI) 0));
		LOC12 = 0;
		LOC12 = rendertype_352224(LOC11);
		LOC10 = rawNewString(LOC12->Sup.len + 4);
appendString(LOC10, ((NimStringDesc*) &TMP4758));
appendString(LOC10, LOC12);
		result = LOC10;
	}
	break;
	case ((NU8) 147):
	{
		tnode207813* params;
		params = HEX5BHEX5D_208246(n, ((NI) 0));
		result = copyString(((NimStringDesc*) &TMP4759));
		{
			NI i_353419;
			NI HEX3Atmp_354202;
			NI LOC15;
			NI res_354205;
			i_353419 = 0;
			HEX3Atmp_354202 = 0;
			LOC15 = 0;
			LOC15 = len_208097(params);
			HEX3Atmp_354202 = (LOC15 - 1);
			res_354205 = ((NI) 1);
			{
				while (1) {
					NimStringDesc* LOC18;
					tnode207813* LOC19;
					NimStringDesc* LOC20;
					if (!(res_354205 <= HEX3Atmp_354202)) goto LA17;
					i_353419 = res_354205;
					LOC18 = 0;
					LOC19 = 0;
					LOC19 = HEX5BHEX5D_208246(params, i_353419);
					LOC20 = 0;
					LOC20 = rendertype_352224(LOC19);
					LOC18 = rawNewString(LOC20->Sup.len + 1);
appendString(LOC18, LOC20);
appendChar(LOC18, 44);
					result = resizeString(result, LOC18->Sup.len + 0);
appendString(result, LOC18);
					res_354205 += ((NI) 1);
				} LA17: ;
			}
		}
		result->data[(result->Sup.len - 1)] = 41;
	}
	break;
	case ((NU8) 35):
	{
		NI typepos;
		NI LOC22;
		NimStringDesc* typestr;
		tnode207813* LOC23;
		LOC22 = 0;
		LOC22 = len_208097(n);
		typepos = (NI32)(LOC22 - ((NI) 2));
		LOC23 = 0;
		LOC23 = HEX5BHEX5D_208246(n, typepos);
		typestr = rendertype_352224(LOC23);
		result = copyString(typestr);
		{
			NI i_353621;
			NI HEX3Atmp_354210;
			NI res_354213;
			i_353621 = 0;
			HEX3Atmp_354210 = 0;
			HEX3Atmp_354210 = (typepos - 1);
			res_354213 = ((NI) 1);
			{
				while (1) {
					NimStringDesc* LOC27;
					if (!(res_354213 <= HEX3Atmp_354210)) goto LA26;
					i_353621 = res_354213;
					LOC27 = 0;
					LOC27 = rawNewString(typestr->Sup.len + 1);
appendChar(LOC27, 44);
appendString(LOC27, typestr);
					result = resizeString(result, LOC27->Sup.len + 0);
appendString(result, LOC27);
					res_354213 += ((NI) 1);
				} LA26: ;
			}
		}
	}
	break;
	case ((NU8) 134):
	{
		result = copyString(((NimStringDesc*) &TMP4760));
		{
			NI i_353819;
			NI HEX3Atmp_354218;
			NI LOC30;
			NI res_354221;
			i_353819 = 0;
			HEX3Atmp_354218 = 0;
			LOC30 = 0;
			LOC30 = len_208097(n);
			HEX3Atmp_354218 = (LOC30 - 1);
			res_354221 = ((NI) 0);
			{
				while (1) {
					NimStringDesc* LOC33;
					tnode207813* LOC34;
					NimStringDesc* LOC35;
					if (!(res_354221 <= HEX3Atmp_354218)) goto LA32;
					i_353819 = res_354221;
					LOC33 = 0;
					LOC34 = 0;
					LOC34 = HEX5BHEX5D_208246(n, i_353819);
					LOC35 = 0;
					LOC35 = rendertype_352224(LOC34);
					LOC33 = rawNewString(LOC35->Sup.len + 1);
appendString(LOC33, LOC35);
appendChar(LOC33, 44);
					result = resizeString(result, LOC33->Sup.len + 0);
appendString(result, LOC33);
					res_354221 += ((NI) 1);
				} LA32: ;
			}
		}
		result->data[(result->Sup.len - 1)] = 93;
	}
	break;
	case ((NU8) 42):
	{
		NimStringDesc* LOC37;
		tnode207813* LOC38;
		NimStringDesc* LOC39;
		LOC37 = 0;
		LOC38 = 0;
		LOC38 = HEX5BHEX5D_208246(n, ((NI) 0));
		LOC39 = 0;
		LOC39 = rendertype_352224(LOC38);
		LOC37 = rawNewString(LOC39->Sup.len + 1);
appendString(LOC37, LOC39);
appendChar(LOC37, 91);
		result = LOC37;
		{
			NI i_354019;
			NI HEX3Atmp_354226;
			NI LOC41;
			NI res_354229;
			i_354019 = 0;
			HEX3Atmp_354226 = 0;
			LOC41 = 0;
			LOC41 = len_208097(n);
			HEX3Atmp_354226 = (LOC41 - 1);
			res_354229 = ((NI) 1);
			{
				while (1) {
					NimStringDesc* LOC44;
					tnode207813* LOC45;
					NimStringDesc* LOC46;
					if (!(res_354229 <= HEX3Atmp_354226)) goto LA43;
					i_354019 = res_354229;
					LOC44 = 0;
					LOC45 = 0;
					LOC45 = HEX5BHEX5D_208246(n, i_354019);
					LOC46 = 0;
					LOC46 = rendertype_352224(LOC45);
					LOC44 = rawNewString(LOC46->Sup.len + 1);
appendString(LOC44, LOC46);
appendChar(LOC44, 44);
					result = resizeString(result, LOC44->Sup.len + 0);
appendString(result, LOC44);
					res_354229 += ((NI) 1);
				} LA43: ;
			}
		}
		result->data[(result->Sup.len - 1)] = 93;
	}
	break;
	default:
	{
		result = copyString(((NimStringDesc*) &TMP4748));
	}
	break;
	}
	return result;
}

static N_INLINE(tcell45946*, usrtocell_49446)(void* usr) {
	tcell45946* result;
	result = 0;
	result = ((tcell45946*) ((NI)((NU32)(((NI) (usr))) - (NU32)(((NI)sizeof(tcell45946))))));
	return result;
}

static N_INLINE(void, rtladdzct_51004)(tcell45946* c) {
	addzct_49417((&gch_47844.Zct), c);
}

static N_INLINE(void, nimGCunrefNoCycle)(void* p) {
	tcell45946* c;
	c = usrtocell_49446(p);
	{
		(*c).Refcount -= ((NI) 8);
		if (!((NU32)((*c).Refcount) < (NU32)(((NI) 8)))) goto LA3;
		rtladdzct_51004(c);
	}
	LA3: ;
}

N_NIMCALL(void, renderparamtypes_354275)(TY120008** found, tnode207813* n) {
{	switch ((*n).Kind) {
	case ((NU8) 76):
	{
		{
			NI i_354299;
			NI HEX3Atmp_354619;
			NI LOC3;
			NI res_354622;
			i_354299 = 0;
			HEX3Atmp_354619 = 0;
			LOC3 = 0;
			LOC3 = len_208097(n);
			HEX3Atmp_354619 = (LOC3 - 1);
			res_354622 = ((NI) 1);
			{
				while (1) {
					tnode207813* LOC6;
					if (!(res_354622 <= HEX3Atmp_354619)) goto LA5;
					i_354299 = res_354622;
					LOC6 = 0;
					LOC6 = HEX5BHEX5D_208246(n, i_354299);
					renderparamtypes_354275(found, LOC6);
					res_354622 += ((NI) 1);
				} LA5: ;
			}
		}
	}
	break;
	case ((NU8) 35):
	{
		NI typepos;
		NI LOC8;
		NimStringDesc* typestr;
		tnode207813* LOC9;
		LOC8 = 0;
		LOC8 = len_208097(n);
		typepos = (NI32)(LOC8 - ((NI) 2));
		LOC9 = 0;
		LOC9 = HEX5BHEX5D_208246(n, typepos);
		typestr = rendertype_352224(LOC9);
		{
			NIM_BOOL LOC12;
			tnode207813* LOC14;
			ttype207849* typ;
			tnode207813* LOC17;
			LOC12 = 0;
			LOC12 = (typestr->Sup.len < ((NI) 1));
			if (!(LOC12)) goto LA13;
			LOC14 = 0;
			LOC14 = HEX5BHEX5D_208246(n, (NI32)(typepos + ((NI) 1)));
			LOC12 = !(((*LOC14).Kind == ((NU8) 1)));
			LA13: ;
			if (!LOC12) goto LA15;
			LOC17 = 0;
			LOC17 = HEX5BHEX5D_208246(n, (NI32)(typepos + ((NI) 1)));
			typ = (*LOC17).Typ;
			{
				if (!!(typ == 0)) goto LA20;
				typestr = typetostring_236032(typ, ((NU8) 2));
			}
			LA20: ;
			{
				if (!(typestr->Sup.len < ((NI) 1))) goto LA24;
				goto BeforeRet;
			}
			LA24: ;
		}
		LA15: ;
		{
			NI i_354438;
			NI HEX3Atmp_354627;
			NI res_354630;
			i_354438 = 0;
			HEX3Atmp_354627 = 0;
			HEX3Atmp_354627 = (typepos - 1);
			res_354630 = ((NI) 0);
			{
				while (1) {
					NimStringDesc* LOC29;
					if (!(res_354630 <= HEX3Atmp_354627)) goto LA28;
					i_354438 = res_354630;
					(*found) = (TY120008*) incrSeq(&((*found))->Sup, sizeof(NimStringDesc*));
					LOC29 = 0;
					LOC29 = (*found)->data[(*found)->Sup.len-1]; (*found)->data[(*found)->Sup.len-1] = copyStringRC1(typestr);
					if (LOC29) nimGCunrefNoCycle(LOC29);
					res_354630 += ((NI) 1);
				} LA28: ;
			}
		}
	}
	break;
	default:
	{
		NimStringDesc* LOC31;
		LOC31 = 0;
		LOC31 = rawNewString(reprEnum((*n).Kind, (&NTI207029))->Sup.len + 31);
appendString(LOC31, ((NimStringDesc*) &TMP4761));
appendString(LOC31, reprEnum((*n).Kind, (&NTI207029)));
		internalerror_182424((*n).Info, LOC31);
	}
	break;
	}
	}BeforeRet: ;
}

N_NIMCALL(NimStringDesc*, renderparamtypes_354658)(tnode207813* n, NimStringDesc* sep) {
	NimStringDesc* result;
	TY120008* found;
	result = 0;
	result = copyString(((NimStringDesc*) &TMP4748));
	found = (TY120008*) newSeq((&NTI120008), 0);
	renderparamtypes_354275((&found), n);
	{
		if (!(((NI) 0) < found->Sup.len)) goto LA3;
		result = nsuJoinSep(found->data, found->Sup.len, sep);
	}
	LA3: ;
	return result;
}
NIM_EXTERNC N_NOINLINE(void, compiler_typesrendererInit)(void) {
}

NIM_EXTERNC N_NOINLINE(void, compiler_typesrendererDatInit)(void) {
}

