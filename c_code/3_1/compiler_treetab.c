/* Generated by Nim Compiler v0.10.3 */
/*   (c) 2015 Andreas Rumpf */
/* The generated code is subject to the original license. */
#define NIM_INTBITS 32
#include "nimbase.h"

#include <string.h>
typedef struct tnodetable207873 tnodetable207873;
typedef struct tnode207813 tnode207813;
typedef struct tnodepairseq207871 tnodepairseq207871;
typedef struct tnodepair207869 tnodepair207869;
typedef struct TGenericSeq TGenericSeq;
typedef struct ttype207849 ttype207849;
typedef struct tlineinfo180338 tlineinfo180338;
typedef struct NimStringDesc NimStringDesc;
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
typedef struct tcell46147 tcell46147;
typedef struct tcellseq46163 tcellseq46163;
typedef struct tgcheap48016 tgcheap48016;
typedef struct tcellset46159 tcellset46159;
typedef struct tpagedesc46155 tpagedesc46155;
typedef struct tmemregion28010 tmemregion28010;
typedef struct tsmallchunk27240 tsmallchunk27240;
typedef struct tllchunk28004 tllchunk28004;
typedef struct tbigchunk27242 tbigchunk27242;
typedef struct tintset27217 tintset27217;
typedef struct ttrunk27213 ttrunk27213;
typedef struct tavlnode28008 tavlnode28008;
typedef struct tgcstat48014 tgcstat48014;
typedef struct TY207933 TY207933;
typedef struct tlistentry127022 tlistentry127022;
typedef struct tbasechunk27238 tbasechunk27238;
typedef struct tfreecell27230 tfreecell27230;
struct  tnodepair207869  {
NI H;
tnode207813* Key;
NI Val;
};
struct  TGenericSeq  {
NI len;
NI reserved;
};
struct  tlineinfo180338  {
NI16 Line;
NI16 Col;
NI32 Fileindex;
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
struct  tident184021  {
  tidobj184015 Sup;
NimStringDesc* S;
tident184021* Next;
NI H;
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
struct  tnodetable207873  {
NI Counter;
tnodepairseq207871* Data;
};
struct  TNimNode  {
NU8 kind;
NI offset;
TNimType* typ;
NCSTRING name;
NI len;
TNimNode** sons;
};
struct  tcell46147  {
NI Refcount;
TNimType* Typ;
};
struct  tcellseq46163  {
NI Len;
NI Cap;
tcell46147** D;
};
struct  tcellset46159  {
NI Counter;
NI Max;
tpagedesc46155* Head;
tpagedesc46155** Data;
};
typedef tsmallchunk27240* TY28022[512];
typedef ttrunk27213* ttrunkbuckets27215[256];
struct  tintset27217  {
ttrunkbuckets27215 Data;
};
struct  tmemregion28010  {
NI Minlargeobj;
NI Maxlargeobj;
TY28022 Freesmallchunks;
tllchunk28004* Llmem;
NI Currmem;
NI Maxmem;
NI Freemem;
NI Lastsize;
tbigchunk27242* Freechunkslist;
tintset27217 Chunkstarts;
tavlnode28008* Root;
tavlnode28008* Deleted;
tavlnode28008* Last;
tavlnode28008* Freeavlnodes;
};
struct  tgcstat48014  {
NI Stackscans;
NI Cyclecollections;
NI Maxthreshold;
NI Maxstacksize;
NI Maxstackcells;
NI Cycletablesize;
NI64 Maxpause;
};
struct  tgcheap48016  {
void* Stackbottom;
NI Cyclethreshold;
tcellseq46163 Zct;
tcellseq46163 Decstack;
tcellset46159 Cycleroots;
tcellseq46163 Tempstack;
NI Recgclock;
tmemregion28010 Region;
tgcstat48014 Stat;
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
typedef NI TY27220[16];
struct  tpagedesc46155  {
tpagedesc46155* Next;
NI Key;
TY27220 Bits;
};
struct  tbasechunk27238  {
NI Prevsize;
NI Size;
NIM_BOOL Used;
};
struct  tsmallchunk27240  {
  tbasechunk27238 Sup;
tsmallchunk27240* Next;
tsmallchunk27240* Prev;
tfreecell27230* Freelist;
NI Free;
NI Acc;
NF Data;
};
struct  tllchunk28004  {
NI Size;
NI Acc;
tllchunk28004* Next;
};
struct  tbigchunk27242  {
  tbasechunk27238 Sup;
tbigchunk27242* Next;
tbigchunk27242* Prev;
NI Align;
NF Data;
};
struct  ttrunk27213  {
ttrunk27213* Next;
NI Key;
TY27220 Bits;
};
typedef tavlnode28008* TY28014[2];
struct  tavlnode28008  {
TY28014 Link;
NI Key;
NI Upperbound;
NI Level;
};
struct  tfreecell27230  {
tfreecell27230* Next;
NI Zerofield;
};
struct tnodepairseq207871 {
  TGenericSeq Sup;
  tnodepair207869 data[SEQ_DECL_SIZE];
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
struct TY207933 {
  TGenericSeq Sup;
  NI32 data[SEQ_DECL_SIZE];
};
N_NIMCALL(NI, hashtree_257027)(tnode207813* n);
static N_INLINE(NI, HEX21HEX26_128025)(NI h, NI val);
N_NIMCALL(NI, hash_128839)(NimStringDesc* x);
N_NIMCALL(NI, sonslen_210403)(tnode207813* n);
N_NIMCALL(NI, nodetablerawget_257210)(tnodetable207873 t, NI k, tnode207813* key);
N_NIMCALL(NIM_BOOL, treesequivalent_257111)(tnode207813* a, tnode207813* b);
static N_INLINE(NIM_BOOL, eqStrings)(NimStringDesc* a, NimStringDesc* b);
N_NIMCALL(NIM_BOOL, sametypeornil_241098)(ttype207849* a, ttype207849* b, NU8 flags);
static N_INLINE(NI, nexttry_214256)(NI h, NI maxhash);
N_NIMCALL(NIM_BOOL, mustrehash_214249)(NI length, NI counter);
N_NIMCALL(void*, newSeq)(TNimType* typ, NI len);
N_NIMCALL(void, nodetablerawinsert_257258)(tnodepairseq207871** data, NI k, tnode207813* key, NI val);
static N_INLINE(void, asgnRefNoCycle)(void** dest, void* src);
static N_INLINE(tcell46147*, usrtocell_49646)(void* usr);
static N_INLINE(void, rtladdzct_51204)(tcell46147* c);
N_NOINLINE(void, addzct_49617)(tcellseq46163* s, tcell46147* c);
N_NIMCALL(void, unsureAsgnRef)(void** dest, void* src);
extern TNimType NTI207871; /* TNodePairSeq */
extern tgcheap48016 gch_48044;

static N_INLINE(NI, HEX21HEX26_128025)(NI h, NI val) {
	NI result;
	result = 0;
	result = (NI)((NU32)(h) + (NU32)(val));
	result = (NI)((NU32)(result) + (NU32)((NI)((NU32)(result) << (NU32)(((NI) 10)))));
	result = (NI)(result ^ (NI)((NU32)(result) >> (NU32)(((NI) 6))));
	return result;
}

N_NIMCALL(NI, hashtree_257027)(tnode207813* n) {
	NI result;
{	result = 0;
	{
		if (!(n == NIM_NIL)) goto LA3;
		goto BeforeRet;
	}
	LA3: ;
	result = ((NI) ((*n).Kind));
	switch ((*n).Kind) {
	case ((NU8) 1):
	case ((NU8) 23):
	case ((NU8) 4):
	{
	}
	break;
	case ((NU8) 2):
	{
		result = HEX21HEX26_128025(result, (*(*n).kindU.S5.Ident).H);
	}
	break;
	case ((NU8) 3):
	{
		result = HEX21HEX26_128025(result, (*(*(*n).kindU.S4.Sym).Name).H);
	}
	break;
	case ((NU8) 5) ... ((NU8) 15):
	{
		{
			NIM_BOOL LOC11;
			LOC11 = 0;
			LOC11 = (IL64(-2147483648) <= (*n).kindU.S1.Intval);
			if (!(LOC11)) goto LA12;
			LOC11 = ((*n).kindU.S1.Intval <= IL64(2147483647));
			LA12: ;
			if (!LOC11) goto LA13;
			result = HEX21HEX26_128025(result, ((NI) ((*n).kindU.S1.Intval)));
		}
		LA13: ;
	}
	break;
	case ((NU8) 16) ... ((NU8) 18):
	{
		{
			NIM_BOOL LOC18;
			LOC18 = 0;
			LOC18 = (-1.0000000000000000e+06 <= (*n).kindU.S2.Floatval);
			if (!(LOC18)) goto LA19;
			LOC18 = ((*n).kindU.S2.Floatval <= 1.0000000000000000e+06);
			LA19: ;
			if (!LOC18) goto LA20;
			result = HEX21HEX26_128025(result, float64ToInt32((*n).kindU.S2.Floatval));
		}
		LA20: ;
	}
	break;
	case ((NU8) 20) ... ((NU8) 22):
	{
		{
			NI LOC27;
			if (!!((*n).kindU.S3.Strval == 0)) goto LA25;
			LOC27 = 0;
			LOC27 = hash_128839((*n).kindU.S3.Strval);
			result = HEX21HEX26_128025(result, LOC27);
		}
		LA25: ;
	}
	break;
	default:
	{
		{
			NI i_257082;
			NI HEX3Atmp_257089;
			NI LOC30;
			NI res_257092;
			i_257082 = 0;
			HEX3Atmp_257089 = 0;
			LOC30 = 0;
			LOC30 = sonslen_210403(n);
			HEX3Atmp_257089 = (NI32)(LOC30 - ((NI) 1));
			res_257092 = ((NI) 0);
			{
				while (1) {
					NI LOC33;
					if (!(res_257092 <= HEX3Atmp_257089)) goto LA32;
					i_257082 = res_257092;
					LOC33 = 0;
					LOC33 = hashtree_257027((*n).kindU.S6.Sons->data[i_257082]);
					result = HEX21HEX26_128025(result, LOC33);
					res_257092 += ((NI) 1);
				} LA32: ;
			}
		}
	}
	break;
	}
	}BeforeRet: ;
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

N_NIMCALL(NIM_BOOL, treesequivalent_257111)(tnode207813* a, tnode207813* b) {
	NIM_BOOL result;
{	result = 0;
	{
		if (!(a == b)) goto LA3;
		result = NIM_TRUE;
	}
	goto LA1;
	LA3: ;
	{
		NIM_BOOL LOC6;
		NIM_BOOL LOC7;
		LOC6 = 0;
		LOC7 = 0;
		LOC7 = !((a == NIM_NIL));
		if (!(LOC7)) goto LA8;
		LOC7 = !((b == NIM_NIL));
		LA8: ;
		LOC6 = LOC7;
		if (!(LOC6)) goto LA9;
		LOC6 = ((*a).Kind == (*b).Kind);
		LA9: ;
		if (!LOC6) goto LA10;
		switch ((*a).Kind) {
		case ((NU8) 1):
		case ((NU8) 23):
		case ((NU8) 4):
		{
			result = NIM_TRUE;
		}
		break;
		case ((NU8) 3):
		{
			result = ((*(*a).kindU.S4.Sym).Sup.Id == (*(*b).kindU.S4.Sym).Sup.Id);
		}
		break;
		case ((NU8) 2):
		{
			result = ((*(*a).kindU.S5.Ident).Sup.Id == (*(*b).kindU.S5.Ident).Sup.Id);
		}
		break;
		case ((NU8) 5) ... ((NU8) 15):
		{
			result = ((*a).kindU.S1.Intval == (*b).kindU.S1.Intval);
		}
		break;
		case ((NU8) 16) ... ((NU8) 18):
		{
			result = ((*a).kindU.S2.Floatval == (*b).kindU.S2.Floatval);
		}
		break;
		case ((NU8) 20) ... ((NU8) 22):
		{
			result = eqStrings((*a).kindU.S3.Strval, (*b).kindU.S3.Strval);
		}
		break;
		default:
		{
			{
				NI LOC21;
				NI LOC22;
				LOC21 = 0;
				LOC21 = sonslen_210403(a);
				LOC22 = 0;
				LOC22 = sonslen_210403(b);
				if (!(LOC21 == LOC22)) goto LA23;
				{
					NI i_257184;
					NI HEX3Atmp_257188;
					NI LOC26;
					NI res_257191;
					i_257184 = 0;
					HEX3Atmp_257188 = 0;
					LOC26 = 0;
					LOC26 = sonslen_210403(a);
					HEX3Atmp_257188 = (NI32)(LOC26 - ((NI) 1));
					res_257191 = ((NI) 0);
					{
						while (1) {
							if (!(res_257191 <= HEX3Atmp_257188)) goto LA28;
							i_257184 = res_257191;
							{
								NIM_BOOL LOC31;
								LOC31 = 0;
								LOC31 = treesequivalent_257111((*a).kindU.S6.Sons->data[i_257184], (*b).kindU.S6.Sons->data[i_257184]);
								if (!!(LOC31)) goto LA32;
								goto BeforeRet;
							}
							LA32: ;
							res_257191 += ((NI) 1);
						} LA28: ;
					}
				}
				result = NIM_TRUE;
			}
			LA23: ;
		}
		break;
		}
		{
			if (!result) goto LA36;
			result = sametypeornil_241098((*a).Typ, (*b).Typ, 0);
		}
		LA36: ;
	}
	goto LA1;
	LA10: ;
	LA1: ;
	}BeforeRet: ;
	return result;
}

static N_INLINE(NI, nexttry_214256)(NI h, NI maxhash) {
	NI result;
	result = 0;
	result = (NI)((NI32)((NI32)(((NI) 5) * h) + ((NI) 1)) & maxhash);
	return result;
}

N_NIMCALL(NI, nodetablerawget_257210)(tnodetable207873 t, NI k, tnode207813* key) {
	NI result;
	NI h;
{	result = 0;
	h = (NI)(k & (t.Data->Sup.len-1));
	{
		while (1) {
			if (!!((t.Data->data[h].Key == NIM_NIL))) goto LA2;
			{
				NIM_BOOL LOC5;
				LOC5 = 0;
				LOC5 = (t.Data->data[h].H == k);
				if (!(LOC5)) goto LA6;
				LOC5 = treesequivalent_257111(t.Data->data[h].Key, key);
				LA6: ;
				if (!LOC5) goto LA7;
				result = h;
				goto BeforeRet;
			}
			LA7: ;
			h = nexttry_214256(h, (t.Data->Sup.len-1));
		} LA2: ;
	}
	result = ((NI) -1);
	}BeforeRet: ;
	return result;
}

static N_INLINE(tcell46147*, usrtocell_49646)(void* usr) {
	tcell46147* result;
	result = 0;
	result = ((tcell46147*) ((NI)((NU32)(((NI) (usr))) - (NU32)(((NI)sizeof(tcell46147))))));
	return result;
}

static N_INLINE(void, rtladdzct_51204)(tcell46147* c) {
	addzct_49617((&gch_48044.Zct), c);
}

static N_INLINE(void, asgnRefNoCycle)(void** dest, void* src) {
	{
		tcell46147* c;
		if (!!((src == NIM_NIL))) goto LA3;
		c = usrtocell_49646(src);
		(*c).Refcount += ((NI) 8);
	}
	LA3: ;
	{
		tcell46147* c;
		if (!!(((*dest) == NIM_NIL))) goto LA7;
		c = usrtocell_49646((*dest));
		{
			(*c).Refcount -= ((NI) 8);
			if (!((NU32)((*c).Refcount) < (NU32)(((NI) 8)))) goto LA11;
			rtladdzct_51204(c);
		}
		LA11: ;
	}
	LA7: ;
	(*dest) = src;
}

N_NIMCALL(void, nodetablerawinsert_257258)(tnodepairseq207871** data, NI k, tnode207813* key, NI val) {
	NI h;
	h = (NI)(k & ((*data)->Sup.len-1));
	{
		while (1) {
			if (!!(((*data)->data[h].Key == NIM_NIL))) goto LA2;
			h = nexttry_214256(h, ((*data)->Sup.len-1));
		} LA2: ;
	}
	(*data)->data[h].H = k;
	asgnRefNoCycle((void**) (&(*data)->data[h].Key), key);
	(*data)->data[h].Val = val;
}

N_NIMCALL(NI, nodetabletestorset_257698)(tnodetable207873* t, tnode207813* key, NI val) {
	NI result;
	tnodepairseq207871* n;
	NI k;
	NI index;
	result = 0;
	n = 0;
	k = hashtree_257027(key);
	index = nodetablerawget_257210((*t), k, key);
	{
		if (!(((NI) 0) <= index)) goto LA3;
		result = (*t).Data->data[index].Val;
	}
	goto LA1;
	LA3: ;
	{
		{
			NIM_BOOL LOC8;
			tnodepairseq207871* LOC18;
			LOC8 = 0;
			LOC8 = mustrehash_214249((*t).Data->Sup.len, (*t).Counter);
			if (!LOC8) goto LA9;
			n = (tnodepairseq207871*) newSeq((&NTI207871), (NI32)((*t).Data->Sup.len * ((NI) 2)));
			{
				NI i_257839;
				NI HEX3Atmp_257876;
				NI res_257879;
				i_257839 = 0;
				HEX3Atmp_257876 = 0;
				HEX3Atmp_257876 = ((*t).Data->Sup.len-1);
				res_257879 = ((NI) 0);
				{
					while (1) {
						if (!(res_257879 <= HEX3Atmp_257876)) goto LA13;
						i_257839 = res_257879;
						{
							if (!!(((*t).Data->data[i_257839].Key == NIM_NIL))) goto LA16;
							nodetablerawinsert_257258((&n), (*t).Data->data[i_257839].H, (*t).Data->data[i_257839].Key, (*t).Data->data[i_257839].Val);
						}
						LA16: ;
						res_257879 += ((NI) 1);
					} LA13: ;
				}
			}
			LOC18 = 0;
			LOC18 = (*t).Data;
			unsureAsgnRef((void**) (&(*t).Data), n);
			n = LOC18;
		}
		LA9: ;
		nodetablerawinsert_257258((&(*t).Data), k, key, val);
		result = val;
		(*t).Counter += ((NI) 1);
	}
	LA1: ;
	return result;
}
NIM_EXTERNC N_NOINLINE(void, compiler_treetabInit)(void) {
}

NIM_EXTERNC N_NOINLINE(void, compiler_treetabDatInit)(void) {
}

