/* Generated by Nim Compiler v0.10.3 */
/*   (c) 2015 Andreas Rumpf */
/* The generated code is subject to the original license. */
#define NIM_INTBITS 64
#include "nimbase.h"

#include <string.h>
typedef struct jsonnodeobj304738 jsonnodeobj304738;
typedef struct TY305056 TY305056;
typedef struct NimStringDesc NimStringDesc;
typedef struct TGenericSeq TGenericSeq;
typedef struct TY304753 TY304753;
typedef struct TY304758 TY304758;
typedef struct TNimType TNimType;
typedef struct TNimNode TNimNode;
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
typedef struct tbasechunk27238 tbasechunk27238;
typedef struct tfreecell27230 tfreecell27230;
struct  TGenericSeq  {
NI len;
NI reserved;
};
struct  NimStringDesc  {
  TGenericSeq Sup;
NIM_CHAR data[SEQ_DECL_SIZE];
};
struct TY305056 {
NimStringDesc* Field0;
jsonnodeobj304738* Field1;
};
struct  jsonnodeobj304738  {
NU8 Kind;
union{
struct {NimStringDesc* Str;
} S1;
struct {NI64 Num;
} S2;
struct {NF Fnum;
} S3;
struct {NIM_BOOL Bval;
} S4;
struct {TY304753* Fields;
} S6;
struct {TY304758* Elems;
} S7;
} kindU;
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
typedef NI TY27220[8];
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
struct TY304753 {
  TGenericSeq Sup;
  TY305056 data[SEQ_DECL_SIZE];
};
struct TY304758 {
  TGenericSeq Sup;
  jsonnodeobj304738* data[SEQ_DECL_SIZE];
};
N_NIMCALL(void, nimGCvisit)(void* d, NI op);
N_NIMCALL(void, TMP4843)(void* p, NI op);
N_NIMCALL(void, TMP4844)(void* p, NI op);
N_NIMCALL(void, TMP4845)(void* p, NI op);
N_NIMCALL(void*, newObj)(TNimType* typ, NI size);
static N_INLINE(void, nimGCunrefNoCycle)(void* p);
static N_INLINE(tcell46147*, usrtocell_49646)(void* usr);
static N_INLINE(void, rtladdzct_51204)(tcell46147* c);
N_NOINLINE(void, addzct_49617)(tcellseq46163* s, tcell46147* c);
N_NIMCALL(void*, newSeqRC1)(TNimType* typ, NI len);
N_NIMCALL(NimStringDesc*, copyStringRC1)(NimStringDesc* src);
static N_INLINE(void, asgnRefNoCycle)(void** dest, void* src);
static N_INLINE(NIM_BOOL, eqStrings)(NimStringDesc* a, NimStringDesc* b);
N_NIMCALL(NimStringDesc*, copyString)(NimStringDesc* src);
N_NIMCALL(TGenericSeq*, incrSeq)(TGenericSeq* seq, NI elemsize);
N_NIMCALL(NIM_BOOL, HEX3DHEX3D_305513)(TY304758* x, TY304758* y);
N_NIMCALL(NIM_BOOL, HEX3DHEX3D_305617)(TY304753* x, TY304753* y);
N_NIMCALL(void, topretty_308132)(NimStringDesc** result, jsonnodeobj304738* node, NI indent, NIM_BOOL ml, NIM_BOOL lstarr, NI currindent);
N_NIMCALL(void, nl_308084)(NimStringDesc** s, NIM_BOOL ml);
static N_INLINE(void, appendString)(NimStringDesc* dest, NimStringDesc* src);
N_NIMCALL(NimStringDesc*, resizeString)(NimStringDesc* dest, NI addlen);
N_NIMCALL(void, indent_308061)(NimStringDesc** s, NI i);
N_NIMCALL(NimStringDesc*, nsuRepeatChar)(NIM_CHAR c, NI count);
N_NIMCALL(NI, newindent_308072)(NI curr, NI indent, NIM_BOOL ml);
N_NIMCALL(NimStringDesc*, escapejson_308095)(NimStringDesc* s);
N_NIMCALL(NimStringDesc*, rawNewString)(NI space);
N_NIMCALL(NimStringDesc*, rawNewString)(NI cap);
N_NIMCALL(NimStringDesc*, addChar)(NimStringDesc* s, NIM_CHAR c);
N_NIMCALL(NimStringDesc*, nsuToHex)(NI64 x, NI len);
N_NIMCALL(NimStringDesc*, nimInt64ToStr)(NI64 x);
N_NIMCALL(NimStringDesc*, nimFloatToStr)(NF f);
N_NIMCALL(NimStringDesc*, nimBoolToStr)(NIM_BOOL x);
TNimNode* NimDT_304738_kind[8];
STRING_LITERAL(TMP4850, "", 0);
STRING_LITERAL(TMP4851, "\012", 1);
STRING_LITERAL(TMP4852, "{", 1);
STRING_LITERAL(TMP4853, ", ", 2);
STRING_LITERAL(TMP4854, "\"", 1);
STRING_LITERAL(TMP4855, "\\\"", 2);
STRING_LITERAL(TMP4856, "\\\\", 2);
STRING_LITERAL(TMP4857, "\\u", 2);
STRING_LITERAL(TMP4858, ": ", 2);
STRING_LITERAL(TMP4859, "}", 1);
STRING_LITERAL(TMP4860, "{}", 2);
STRING_LITERAL(TMP4863, "[", 1);
STRING_LITERAL(TMP4864, "]", 1);
STRING_LITERAL(TMP4865, "[]", 2);
STRING_LITERAL(TMP4866, "null", 4);
TNimType NTI304738; /* JsonNodeObj */
TNimType NTI304734; /* JsonNodeKind */
extern TNimType NTI149; /* string */
extern TNimType NTI5710; /* BiggestInt */
extern TNimType NTI128; /* float */
extern TNimType NTI138; /* bool */
TNimType NTI305056; /* tuple[key: string, val: JsonNode] */
TNimType NTI304753; /* seq[tuple[key: string, val: JsonNode]] */
TNimType NTI304758; /* seq[JsonNode] */
TNimType NTI304736; /* JsonNode */
extern tgcheap48016 gch_48044;
N_NIMCALL(void, TMP4843)(void* p, NI op) {
	TY304753* a;
	NI LOC1;
	a = (TY304753*)p;
	LOC1 = 0;
	for (LOC1 = 0; LOC1 < a->Sup.len; LOC1++) {
	nimGCvisit((void*)a->data[LOC1].Field0, op);
	nimGCvisit((void*)a->data[LOC1].Field1, op);
	}
}
N_NIMCALL(void, TMP4844)(void* p, NI op) {
	TY304758* a;
	NI LOC1;
	a = (TY304758*)p;
	LOC1 = 0;
	for (LOC1 = 0; LOC1 < a->Sup.len; LOC1++) {
	nimGCvisit((void*)a->data[LOC1], op);
	}
}
N_NIMCALL(void, TMP4845)(void* p, NI op) {
	jsonnodeobj304738* a;
	a = (jsonnodeobj304738*)p;
	switch ((*a).Kind) {
	case ((NU8) 4):
	nimGCvisit((void*)(*a).kindU.S1.Str, op);
	break;
	case ((NU8) 2):
	break;
	case ((NU8) 3):
	break;
	case ((NU8) 1):
	break;
	case ((NU8) 0):
	break;
	case ((NU8) 5):
	nimGCvisit((void*)(*a).kindU.S6.Fields, op);
	break;
	case ((NU8) 6):
	nimGCvisit((void*)(*a).kindU.S7.Elems, op);
	break;
	} 
}

static N_INLINE(tcell46147*, usrtocell_49646)(void* usr) {
	tcell46147* result;
	result = 0;
	result = ((tcell46147*) ((NI)((NU64)(((NI) (usr))) - (NU64)(((NI)sizeof(tcell46147))))));
	return result;
}

static N_INLINE(void, rtladdzct_51204)(tcell46147* c) {
	addzct_49617((&gch_48044.Zct), c);
}

static N_INLINE(void, nimGCunrefNoCycle)(void* p) {
	tcell46147* c;
	c = usrtocell_49646(p);
	{
		(*c).Refcount -= ((NI) 8);
		if (!((NU64)((*c).Refcount) < (NU64)(((NI) 8)))) goto LA3;
		rtladdzct_51204(c);
	}
	LA3: ;
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
			if (!((NU64)((*c).Refcount) < (NU64)(((NI) 8)))) goto LA11;
			rtladdzct_51204(c);
		}
		LA11: ;
	}
	LA7: ;
	(*dest) = src;
}

N_NIMCALL(jsonnodeobj304738*, HEX25_305053)(TY305056* keyvals, NI keyvalsLen0) {
	jsonnodeobj304738* result;
	result = 0;
	result = (jsonnodeobj304738*) newObj((&NTI304736), sizeof(jsonnodeobj304738));
	(*result).Kind = ((NU8) 5);
	if ((*result).kindU.S6.Fields) nimGCunrefNoCycle((*result).kindU.S6.Fields);
	(*result).kindU.S6.Fields = (TY304753*) newSeqRC1((&NTI304753), keyvalsLen0);
	{
		NI i_305128;
		TY305056 p_305129;
		NI i_305134;
		i_305128 = 0;
		memset((void*)(&p_305129), 0, sizeof(p_305129));
		i_305134 = ((NI) 0);
		{
			while (1) {
				NimStringDesc* LOC4;
				if (!(i_305134 < keyvalsLen0)) goto LA3;
				i_305128 = i_305134;
				p_305129.Field0 = keyvals[i_305134].Field0;
				p_305129.Field1 = keyvals[i_305134].Field1;
				LOC4 = 0;
				LOC4 = (*result).kindU.S6.Fields->data[i_305128].Field0; (*result).kindU.S6.Fields->data[i_305128].Field0 = copyStringRC1(p_305129.Field0);
				if (LOC4) nimGCunrefNoCycle(LOC4);
				asgnRefNoCycle((void**) (&(*result).kindU.S6.Fields->data[i_305128].Field1), p_305129.Field1);
				i_305134 += ((NI) 1);
			} LA3: ;
		}
	}
	return result;
}

N_NIMCALL(jsonnodeobj304738*, HEX25_304977)(NimStringDesc* s) {
	jsonnodeobj304738* result;
	NimStringDesc* LOC1;
	result = 0;
	result = (jsonnodeobj304738*) newObj((&NTI304736), sizeof(jsonnodeobj304738));
	(*result).Kind = ((NU8) 4);
	LOC1 = 0;
	LOC1 = (*result).kindU.S1.Str; (*result).kindU.S1.Str = copyStringRC1(s);
	if (LOC1) nimGCunrefNoCycle(LOC1);
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

N_NIMCALL(void, HEX5BHEX5DHEX3D_307419)(jsonnodeobj304738* obj, NimStringDesc* key, jsonnodeobj304738* val) {
	TY305056 LOC8;
	NimStringDesc* LOC9;
{	{
		NI i_307620;
		NI HEX3Atmp_307636;
		NI res_307639;
		i_307620 = 0;
		HEX3Atmp_307636 = 0;
		HEX3Atmp_307636 = (NI64)((*obj).kindU.S6.Fields->Sup.len - ((NI) 1));
		res_307639 = ((NI) 0);
		{
			while (1) {
				if (!(res_307639 <= HEX3Atmp_307636)) goto LA3;
				i_307620 = res_307639;
				{
					if (!eqStrings((*obj).kindU.S6.Fields->data[i_307620].Field0, key)) goto LA6;
					asgnRefNoCycle((void**) (&(*obj).kindU.S6.Fields->data[i_307620].Field1), val);
					goto BeforeRet;
				}
				LA6: ;
				res_307639 += ((NI) 1);
			} LA3: ;
		}
	}
	memset((void*)(&LOC8), 0, sizeof(LOC8));
	LOC8.Field0 = copyString(key);
	LOC8.Field1 = val;
	(*obj).kindU.S6.Fields = (TY304753*) incrSeq(&((*obj).kindU.S6.Fields)->Sup, sizeof(TY305056));
	LOC9 = 0;
	LOC9 = (*obj).kindU.S6.Fields->data[(*obj).kindU.S6.Fields->Sup.len-1].Field0; (*obj).kindU.S6.Fields->data[(*obj).kindU.S6.Fields->Sup.len-1].Field0 = copyStringRC1(LOC8.Field0);
	if (LOC9) nimGCunrefNoCycle(LOC9);
	asgnRefNoCycle((void**) (&(*obj).kindU.S6.Fields->data[(*obj).kindU.S6.Fields->Sup.len-1].Field1), LOC8.Field1);
	}BeforeRet: ;
}

N_NIMCALL(NIM_BOOL, HEX3DHEX3D_305461)(jsonnodeobj304738* a, jsonnodeobj304738* b) {
	NIM_BOOL result;
{	result = 0;
	{
		if (!a == 0) goto LA3;
		{
			if (!b == 0) goto LA7;
			result = NIM_TRUE;
			goto BeforeRet;
		}
		LA7: ;
		result = NIM_FALSE;
		goto BeforeRet;
	}
	goto LA1;
	LA3: ;
	{
		NIM_BOOL LOC10;
		LOC10 = 0;
		LOC10 = b == 0;
		if (LOC10) goto LA11;
		LOC10 = !(((*a).Kind == (*b).Kind));
		LA11: ;
		if (!LOC10) goto LA12;
		result = NIM_FALSE;
		goto BeforeRet;
	}
	goto LA1;
	LA12: ;
	{
		switch ((*a).Kind) {
		case ((NU8) 4):
		{
			result = eqStrings((*a).kindU.S1.Str, (*b).kindU.S1.Str);
		}
		break;
		case ((NU8) 2):
		{
			result = ((*a).kindU.S2.Num == (*b).kindU.S2.Num);
		}
		break;
		case ((NU8) 3):
		{
			result = ((*a).kindU.S3.Fnum == (*b).kindU.S3.Fnum);
		}
		break;
		case ((NU8) 1):
		{
			result = ((*a).kindU.S4.Bval == (*b).kindU.S4.Bval);
		}
		break;
		case ((NU8) 0):
		{
			result = NIM_TRUE;
		}
		break;
		case ((NU8) 6):
		{
			result = HEX3DHEX3D_305513((*a).kindU.S7.Elems, (*b).kindU.S7.Elems);
		}
		break;
		case ((NU8) 5):
		{
			result = HEX3DHEX3D_305617((*a).kindU.S6.Fields, (*b).kindU.S6.Fields);
		}
		break;
		}
		goto BeforeRet;
	}
	LA1: ;
	}BeforeRet: ;
	return result;
}

N_NIMCALL(jsonnodeobj304738*, newjarray_304941)(void) {
	jsonnodeobj304738* result;
	result = 0;
	result = (jsonnodeobj304738*) newObj((&NTI304736), sizeof(jsonnodeobj304738));
	(*result).Kind = ((NU8) 6);
	if ((*result).kindU.S7.Elems) nimGCunrefNoCycle((*result).kindU.S7.Elems);
	(*result).kindU.S7.Elems = (TY304758*) newSeqRC1((&NTI304758), 0);
	return result;
}

N_NIMCALL(void, add_307047)(jsonnodeobj304738* father, jsonnodeobj304738* child) {
	(*father).kindU.S7.Elems = (TY304758*) incrSeq(&((*father).kindU.S7.Elems)->Sup, sizeof(jsonnodeobj304738*));
	asgnRefNoCycle((void**) (&(*father).kindU.S7.Elems->data[(*father).kindU.S7.Elems->Sup.len-1]), child);
}

static N_INLINE(void, appendString)(NimStringDesc* dest, NimStringDesc* src) {
	memcpy(((NCSTRING) ((&(*dest).data[((*dest).Sup.len)- 0]))), ((NCSTRING) ((*src).data)), (NI64)((*src).Sup.len + ((NI) 1)));
	(*dest).Sup.len += (*src).Sup.len;
}

N_NIMCALL(void, nl_308084)(NimStringDesc** s, NIM_BOOL ml) {
	{
		if (!ml) goto LA3;
		(*s) = resizeString((*s), 1);
appendString((*s), ((NimStringDesc*) &TMP4851));
	}
	LA3: ;
}

N_NIMCALL(void, indent_308061)(NimStringDesc** s, NI i) {
	NimStringDesc* LOC1;
	LOC1 = 0;
	LOC1 = nsuRepeatChar(32, i);
	(*s) = resizeString((*s), LOC1->Sup.len + 0);
appendString((*s), LOC1);
}

N_NIMCALL(NI, newindent_308072)(NI curr, NI indent, NIM_BOOL ml) {
	NI result;
{	result = 0;
	{
		if (!ml) goto LA3;
		result = (NI64)(curr + indent);
		goto BeforeRet;
	}
	goto LA1;
	LA3: ;
	{
		result = indent;
		goto BeforeRet;
	}
	LA1: ;
	}BeforeRet: ;
	return result;
}

N_NIMCALL(NimStringDesc*, escapejson_308095)(NimStringDesc* s) {
	NimStringDesc* result;
	result = 0;
	result = rawNewString((NI64)(s->Sup.len + (NI)((NU64)(s->Sup.len) >> (NU64)(((NI) 3)))));
	result = resizeString(result, 1);
appendString(result, ((NimStringDesc*) &TMP4854));
	{
		NI x_308099;
		NI i_308107;
		NI result_308109;
		x_308099 = 0;
		i_308107 = ((NI) 0);
		result_308109 = 0;
		{
			while (1) {
				NI r;
				if (!(i_308107 < s->Sup.len)) goto LA3;
				{
					if (!((NU64)(((NI) (((NU8)(s->data[i_308107]))))) <= (NU64)(((NI) 127)))) goto LA6;
					result_308109 = ((NI) (((NU8)(s->data[i_308107]))));
					i_308107 += ((NI) 1);
				}
				goto LA4;
				LA6: ;
				{
					if (!((NI)((NU64)(((NI) (((NU8)(s->data[i_308107]))))) >> (NU64)(((NI) 5))) == ((NI) 6))) goto LA9;
					result_308109 = (NI)((NI)((NU64)(((NI) ((NI)(((NI) (((NU8)(s->data[i_308107])))) & ((NI) 31))))) << (NU64)(((NI) 6))) | ((NI) ((NI)(((NI) (((NU8)(s->data[(NI64)(i_308107 + ((NI) 1))])))) & ((NI) 63)))));
					i_308107 += ((NI) 2);
				}
				goto LA4;
				LA9: ;
				{
					if (!((NI)((NU64)(((NI) (((NU8)(s->data[i_308107]))))) >> (NU64)(((NI) 4))) == ((NI) 14))) goto LA12;
					result_308109 = (NI)((NI)((NI)((NU64)(((NI) ((NI)(((NI) (((NU8)(s->data[i_308107])))) & ((NI) 15))))) << (NU64)(((NI) 12))) | (NI)((NU64)(((NI) ((NI)(((NI) (((NU8)(s->data[(NI64)(i_308107 + ((NI) 1))])))) & ((NI) 63))))) << (NU64)(((NI) 6)))) | ((NI) ((NI)(((NI) (((NU8)(s->data[(NI64)(i_308107 + ((NI) 2))])))) & ((NI) 63)))));
					i_308107 += ((NI) 3);
				}
				goto LA4;
				LA12: ;
				{
					if (!((NI)((NU64)(((NI) (((NU8)(s->data[i_308107]))))) >> (NU64)(((NI) 3))) == ((NI) 30))) goto LA15;
					result_308109 = (NI)((NI)((NI)((NI)((NU64)(((NI) ((NI)(((NI) (((NU8)(s->data[i_308107])))) & ((NI) 7))))) << (NU64)(((NI) 18))) | (NI)((NU64)(((NI) ((NI)(((NI) (((NU8)(s->data[(NI64)(i_308107 + ((NI) 1))])))) & ((NI) 63))))) << (NU64)(((NI) 12)))) | (NI)((NU64)(((NI) ((NI)(((NI) (((NU8)(s->data[(NI64)(i_308107 + ((NI) 2))])))) & ((NI) 63))))) << (NU64)(((NI) 6)))) | ((NI) ((NI)(((NI) (((NU8)(s->data[(NI64)(i_308107 + ((NI) 3))])))) & ((NI) 63)))));
					i_308107 += ((NI) 4);
				}
				goto LA4;
				LA15: ;
				{
					if (!((NI)((NU64)(((NI) (((NU8)(s->data[i_308107]))))) >> (NU64)(((NI) 2))) == ((NI) 62))) goto LA18;
					result_308109 = (NI)((NI)((NI)((NI)((NI)((NU64)(((NI) ((NI)(((NI) (((NU8)(s->data[i_308107])))) & ((NI) 3))))) << (NU64)(((NI) 24))) | (NI)((NU64)(((NI) ((NI)(((NI) (((NU8)(s->data[(NI64)(i_308107 + ((NI) 1))])))) & ((NI) 63))))) << (NU64)(((NI) 18)))) | (NI)((NU64)(((NI) ((NI)(((NI) (((NU8)(s->data[(NI64)(i_308107 + ((NI) 2))])))) & ((NI) 63))))) << (NU64)(((NI) 12)))) | (NI)((NU64)(((NI) ((NI)(((NI) (((NU8)(s->data[(NI64)(i_308107 + ((NI) 3))])))) & ((NI) 63))))) << (NU64)(((NI) 6)))) | ((NI) ((NI)(((NI) (((NU8)(s->data[(NI64)(i_308107 + ((NI) 4))])))) & ((NI) 63)))));
					i_308107 += ((NI) 5);
				}
				goto LA4;
				LA18: ;
				{
					if (!((NI)((NU64)(((NI) (((NU8)(s->data[i_308107]))))) >> (NU64)(((NI) 1))) == ((NI) 126))) goto LA21;
					result_308109 = (NI)((NI)((NI)((NI)((NI)((NI)((NU64)(((NI) ((NI)(((NI) (((NU8)(s->data[i_308107])))) & ((NI) 1))))) << (NU64)(((NI) 30))) | (NI)((NU64)(((NI) ((NI)(((NI) (((NU8)(s->data[(NI64)(i_308107 + ((NI) 1))])))) & ((NI) 63))))) << (NU64)(((NI) 24)))) | (NI)((NU64)(((NI) ((NI)(((NI) (((NU8)(s->data[(NI64)(i_308107 + ((NI) 2))])))) & ((NI) 63))))) << (NU64)(((NI) 18)))) | (NI)((NU64)(((NI) ((NI)(((NI) (((NU8)(s->data[(NI64)(i_308107 + ((NI) 3))])))) & ((NI) 63))))) << (NU64)(((NI) 12)))) | (NI)((NU64)(((NI) ((NI)(((NI) (((NU8)(s->data[(NI64)(i_308107 + ((NI) 4))])))) & ((NI) 63))))) << (NU64)(((NI) 6)))) | ((NI) ((NI)(((NI) (((NU8)(s->data[(NI64)(i_308107 + ((NI) 5))])))) & ((NI) 63)))));
					i_308107 += ((NI) 6);
				}
				goto LA4;
				LA21: ;
				{
					result_308109 = ((NI) (((NU8)(s->data[i_308107]))));
					i_308107 += ((NI) 1);
				}
				LA4: ;
				x_308099 = result_308109;
				r = x_308099;
				{
					NIM_BOOL LOC26;
					NIM_CHAR c;
					LOC26 = 0;
					LOC26 = (((NI) 32) <= r);
					if (!(LOC26)) goto LA27;
					LOC26 = (r <= ((NI) 127));
					LA27: ;
					if (!LOC26) goto LA28;
					c = ((NIM_CHAR) (((NI) (r))));
					switch (((NU8)(c))) {
					case 34:
					{
						result = resizeString(result, 2);
appendString(result, ((NimStringDesc*) &TMP4855));
					}
					break;
					case 92:
					{
						result = resizeString(result, 2);
appendString(result, ((NimStringDesc*) &TMP4856));
					}
					break;
					default:
					{
						result = addChar(result, c);
					}
					break;
					}
				}
				goto LA24;
				LA28: ;
				{
					NimStringDesc* LOC34;
					result = resizeString(result, 2);
appendString(result, ((NimStringDesc*) &TMP4857));
					LOC34 = 0;
					LOC34 = nsuToHex(((NI64) (r)), ((NI) 4));
					result = resizeString(result, LOC34->Sup.len + 0);
appendString(result, LOC34);
				}
				LA24: ;
			} LA3: ;
		}
	}
	result = resizeString(result, 1);
appendString(result, ((NimStringDesc*) &TMP4854));
	return result;
}

N_NIMCALL(void, topretty_308132)(NimStringDesc** result, jsonnodeobj304738* node, NI indent, NIM_BOOL ml, NIM_BOOL lstarr, NI currindent) {
	switch ((*node).Kind) {
	case ((NU8) 5):
	{
		{
			NIM_BOOL LOC4;
			LOC4 = 0;
			LOC4 = !((currindent == ((NI) 0)));
			if (!(LOC4)) goto LA5;
			LOC4 = !(lstarr);
			LA5: ;
			if (!LOC4) goto LA6;
			nl_308084(result, ml);
		}
		LA6: ;
		indent_308061(result, currindent);
		{
			if (!(((NI) 0) < (*node).kindU.S6.Fields->Sup.len)) goto LA10;
			(*result) = resizeString((*result), 1);
appendString((*result), ((NimStringDesc*) &TMP4852));
			nl_308084(result, ml);
			{
				NI i_308169;
				NI HEX3Atmp_308207;
				NI res_308210;
				i_308169 = 0;
				HEX3Atmp_308207 = 0;
				HEX3Atmp_308207 = (NI64)((*node).kindU.S6.Fields->Sup.len - ((NI) 1));
				res_308210 = ((NI) 0);
				{
					while (1) {
						NI LOC19;
						NimStringDesc* LOC20;
						NI LOC21;
						if (!(res_308210 <= HEX3Atmp_308207)) goto LA14;
						i_308169 = res_308210;
						{
							if (!(((NI) 0) < i_308169)) goto LA17;
							(*result) = resizeString((*result), 2);
appendString((*result), ((NimStringDesc*) &TMP4853));
							nl_308084(result, ml);
						}
						LA17: ;
						LOC19 = 0;
						LOC19 = newindent_308072(currindent, indent, ml);
						indent_308061(result, LOC19);
						LOC20 = 0;
						LOC20 = escapejson_308095((*node).kindU.S6.Fields->data[i_308169].Field0);
						(*result) = resizeString((*result), LOC20->Sup.len + 0);
appendString((*result), LOC20);
						(*result) = resizeString((*result), 2);
appendString((*result), ((NimStringDesc*) &TMP4858));
						LOC21 = 0;
						LOC21 = newindent_308072(currindent, indent, ml);
						topretty_308132(result, (*node).kindU.S6.Fields->data[i_308169].Field1, indent, ml, NIM_FALSE, LOC21);
						res_308210 += ((NI) 1);
					} LA14: ;
				}
			}
			nl_308084(result, ml);
			indent_308061(result, currindent);
			(*result) = resizeString((*result), 1);
appendString((*result), ((NimStringDesc*) &TMP4859));
		}
		goto LA8;
		LA10: ;
		{
			(*result) = resizeString((*result), 2);
appendString((*result), ((NimStringDesc*) &TMP4860));
		}
		LA8: ;
	}
	break;
	case ((NU8) 4):
	{
		NimStringDesc* LOC28;
		{
			if (!lstarr) goto LA26;
			indent_308061(result, currindent);
		}
		LA26: ;
		LOC28 = 0;
		LOC28 = escapejson_308095((*node).kindU.S1.Str);
		(*result) = resizeString((*result), LOC28->Sup.len + 0);
appendString((*result), LOC28);
	}
	break;
	case ((NU8) 2):
	{
		NimStringDesc* LOC34;
		{
			if (!lstarr) goto LA32;
			indent_308061(result, currindent);
		}
		LA32: ;
		LOC34 = 0;
		LOC34 = nimInt64ToStr((*node).kindU.S2.Num);
		(*result) = resizeString((*result), LOC34->Sup.len + 0);
appendString((*result), LOC34);
	}
	break;
	case ((NU8) 3):
	{
		NimStringDesc* LOC40;
		{
			if (!lstarr) goto LA38;
			indent_308061(result, currindent);
		}
		LA38: ;
		LOC40 = 0;
		LOC40 = nimFloatToStr((*node).kindU.S3.Fnum);
		(*result) = resizeString((*result), LOC40->Sup.len + 0);
appendString((*result), LOC40);
	}
	break;
	case ((NU8) 1):
	{
		NimStringDesc* LOC46;
		{
			if (!lstarr) goto LA44;
			indent_308061(result, currindent);
		}
		LA44: ;
		LOC46 = 0;
		LOC46 = nimBoolToStr((*node).kindU.S4.Bval);
		(*result) = resizeString((*result), LOC46->Sup.len + 0);
appendString((*result), LOC46);
	}
	break;
	case ((NU8) 6):
	{
		{
			if (!lstarr) goto LA50;
			indent_308061(result, currindent);
		}
		LA50: ;
		{
			if (!!(((*node).kindU.S7.Elems->Sup.len == ((NI) 0)))) goto LA54;
			(*result) = resizeString((*result), 1);
appendString((*result), ((NimStringDesc*) &TMP4863));
			nl_308084(result, ml);
			{
				NI i_308204;
				NI HEX3Atmp_308215;
				NI res_308218;
				i_308204 = 0;
				HEX3Atmp_308215 = 0;
				HEX3Atmp_308215 = (NI64)((*node).kindU.S7.Elems->Sup.len - ((NI) 1));
				res_308218 = ((NI) 0);
				{
					while (1) {
						NI LOC63;
						if (!(res_308218 <= HEX3Atmp_308215)) goto LA58;
						i_308204 = res_308218;
						{
							if (!(((NI) 0) < i_308204)) goto LA61;
							(*result) = resizeString((*result), 2);
appendString((*result), ((NimStringDesc*) &TMP4853));
							nl_308084(result, ml);
						}
						LA61: ;
						LOC63 = 0;
						LOC63 = newindent_308072(currindent, indent, ml);
						topretty_308132(result, (*node).kindU.S7.Elems->data[i_308204], indent, ml, NIM_TRUE, LOC63);
						res_308218 += ((NI) 1);
					} LA58: ;
				}
			}
			nl_308084(result, ml);
			indent_308061(result, currindent);
			(*result) = resizeString((*result), 1);
appendString((*result), ((NimStringDesc*) &TMP4864));
		}
		goto LA52;
		LA54: ;
		{
			(*result) = resizeString((*result), 2);
appendString((*result), ((NimStringDesc*) &TMP4865));
		}
		LA52: ;
	}
	break;
	case ((NU8) 0):
	{
		{
			if (!lstarr) goto LA68;
			indent_308061(result, currindent);
		}
		LA68: ;
		(*result) = resizeString((*result), 4);
appendString((*result), ((NimStringDesc*) &TMP4866));
	}
	break;
	}
}

N_NIMCALL(NimStringDesc*, pretty_308246)(jsonnodeobj304738* node, NI indent) {
	NimStringDesc* result;
	result = 0;
	result = copyString(((NimStringDesc*) &TMP4850));
	topretty_308132((&result), node, indent, NIM_TRUE, NIM_FALSE, ((NI) 0));
	return result;
}

N_NIMCALL(NimStringDesc*, HEX24_308258)(jsonnodeobj304738* node) {
	NimStringDesc* result;
	result = 0;
	result = copyString(((NimStringDesc*) &TMP4850));
	topretty_308132((&result), node, ((NI) 0), NIM_FALSE, NIM_FALSE, ((NI) 0));
	return result;
}
NIM_EXTERNC N_NOINLINE(void, stdlib_jsonInit)(void) {
}

NIM_EXTERNC N_NOINLINE(void, stdlib_jsonDatInit)(void) {
static TNimNode* TMP4839[7];
NI TMP4841;
static char* NIM_CONST TMP4840[7] = {
"JNull", 
"JBool", 
"JInt", 
"JFloat", 
"JString", 
"JObject", 
"JArray"};
static TNimNode* TMP4842[2];
static TNimNode TMP882[19];
NTI304738.size = sizeof(jsonnodeobj304738);
NTI304738.kind = 18;
NTI304738.base = 0;
NTI304738.flags = 2;
NTI304734.size = sizeof(NU8);
NTI304734.kind = 14;
NTI304734.base = 0;
NTI304734.flags = 3;
for (TMP4841 = 0; TMP4841 < 7; TMP4841++) {
TMP882[TMP4841+1].kind = 1;
TMP882[TMP4841+1].offset = TMP4841;
TMP882[TMP4841+1].name = TMP4840[TMP4841];
TMP4839[TMP4841] = &TMP882[TMP4841+1];
}
TMP882[8].len = 7; TMP882[8].kind = 2; TMP882[8].sons = &TMP4839[0];
NTI304734.node = &TMP882[8];
TMP882[0].kind = 3;
TMP882[0].offset = offsetof(jsonnodeobj304738, Kind);
TMP882[0].typ = (&NTI304734);
TMP882[0].name = "kind";
TMP882[0].sons = &NimDT_304738_kind[0];
TMP882[0].len = 7;
TMP882[9].kind = 1;
TMP882[9].offset = offsetof(jsonnodeobj304738, kindU.S1.Str);
TMP882[9].typ = (&NTI149);
TMP882[9].name = "str";
NimDT_304738_kind[4] = &TMP882[9];
TMP882[10].kind = 1;
TMP882[10].offset = offsetof(jsonnodeobj304738, kindU.S2.Num);
TMP882[10].typ = (&NTI5710);
TMP882[10].name = "num";
NimDT_304738_kind[2] = &TMP882[10];
TMP882[11].kind = 1;
TMP882[11].offset = offsetof(jsonnodeobj304738, kindU.S3.Fnum);
TMP882[11].typ = (&NTI128);
TMP882[11].name = "fnum";
NimDT_304738_kind[3] = &TMP882[11];
TMP882[12].kind = 1;
TMP882[12].offset = offsetof(jsonnodeobj304738, kindU.S4.Bval);
TMP882[12].typ = (&NTI138);
TMP882[12].name = "bval";
NimDT_304738_kind[1] = &TMP882[12];
TMP882[13].len = 0; TMP882[13].kind = 2;
NimDT_304738_kind[0] = &TMP882[13];
NTI305056.size = sizeof(TY305056);
NTI305056.kind = 18;
NTI305056.base = 0;
NTI305056.flags = 2;
TMP4842[0] = &TMP882[16];
TMP882[16].kind = 1;
TMP882[16].offset = offsetof(TY305056, Field0);
TMP882[16].typ = (&NTI149);
TMP882[16].name = "Field0";
TMP4842[1] = &TMP882[17];
TMP882[17].kind = 1;
TMP882[17].offset = offsetof(TY305056, Field1);
TMP882[17].typ = (&NTI304736);
TMP882[17].name = "Field1";
TMP882[15].len = 2; TMP882[15].kind = 2; TMP882[15].sons = &TMP4842[0];
NTI305056.node = &TMP882[15];
NTI304753.size = sizeof(TY304753*);
NTI304753.kind = 24;
NTI304753.base = (&NTI305056);
NTI304753.flags = 2;
NTI304753.marker = TMP4843;
TMP882[14].kind = 1;
TMP882[14].offset = offsetof(jsonnodeobj304738, kindU.S6.Fields);
TMP882[14].typ = (&NTI304753);
TMP882[14].name = "fields";
NimDT_304738_kind[5] = &TMP882[14];
NTI304758.size = sizeof(TY304758*);
NTI304758.kind = 24;
NTI304758.base = (&NTI304736);
NTI304758.flags = 2;
NTI304758.marker = TMP4844;
TMP882[18].kind = 1;
TMP882[18].offset = offsetof(jsonnodeobj304738, kindU.S7.Elems);
TMP882[18].typ = (&NTI304758);
TMP882[18].name = "elems";
NimDT_304738_kind[6] = &TMP882[18];
NTI304738.node = &TMP882[0];
NTI304736.size = sizeof(jsonnodeobj304738*);
NTI304736.kind = 22;
NTI304736.base = (&NTI304738);
NTI304736.flags = 2;
NTI304736.marker = TMP4845;
}

