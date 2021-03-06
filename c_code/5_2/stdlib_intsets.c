/* Generated by Nim Compiler v0.10.3 */
/*   (c) 2015 Andreas Rumpf */
/* The generated code is subject to the original license. */
#define NIM_INTBITS 64
#include "nimbase.h"

#include <string.h>
typedef struct intset204056 intset204056;
typedef struct ttrunk204052 ttrunk204052;
typedef struct ttrunkseq204054 ttrunkseq204054;
typedef struct TGenericSeq TGenericSeq;
typedef struct TNimType TNimType;
typedef struct TNimNode TNimNode;
typedef struct tcell45947 tcell45947;
typedef struct tcellset45959 tcellset45959;
typedef struct tgcheap47816 tgcheap47816;
typedef struct tcellseq45963 tcellseq45963;
typedef struct tpagedesc45955 tpagedesc45955;
typedef struct tmemregion27810 tmemregion27810;
typedef struct tsmallchunk27040 tsmallchunk27040;
typedef struct tllchunk27804 tllchunk27804;
typedef struct tbigchunk27042 tbigchunk27042;
typedef struct tintset27017 tintset27017;
typedef struct ttrunk27013 ttrunk27013;
typedef struct tavlnode27808 tavlnode27808;
typedef struct tgcstat47814 tgcstat47814;
typedef struct tbasechunk27038 tbasechunk27038;
typedef struct tfreecell27030 tfreecell27030;
struct  TGenericSeq  {
NI len;
NI reserved;
};
struct  intset204056  {
NI Counter;
NI Max;
ttrunk204052* Head;
ttrunkseq204054* Data;
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
typedef NI TY27020[8];
struct  ttrunk204052  {
ttrunk204052* Next;
NI Key;
TY27020 Bits;
};
struct  tcell45947  {
NI Refcount;
TNimType* Typ;
};
struct  tcellseq45963  {
NI Len;
NI Cap;
tcell45947** D;
};
struct  tcellset45959  {
NI Counter;
NI Max;
tpagedesc45955* Head;
tpagedesc45955** Data;
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
tcellseq45963 Zct;
tcellseq45963 Decstack;
tcellset45959 Cycleroots;
tcellseq45963 Tempstack;
NI Recgclock;
tmemregion27810 Region;
tgcstat47814 Stat;
};
struct  tpagedesc45955  {
tpagedesc45955* Next;
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
struct ttrunkseq204054 {
  TGenericSeq Sup;
  ttrunk204052* data[SEQ_DECL_SIZE];
};
N_NIMCALL(void, nimGCvisit)(void* d, NI op);
N_NIMCALL(void, TMP964)(void* p, NI op);
N_NIMCALL(void, TMP965)(void* p, NI op);
N_NIMCALL(void*, newSeq)(TNimType* typ, NI len);
N_NIMCALL(void, unsureAsgnRef)(void** dest, void* src);
N_NIMCALL(ttrunk204052*, intsetget_204218)(intset204056* t, NI key);
static N_INLINE(NI, nexttry_204207)(NI h, NI maxhash);
N_NIMCALL(void, incl_204856)(intset204056* s, NI key);
N_NIMCALL(ttrunk204052*, intsetput_204689)(intset204056* t, NI key);
static N_INLINE(NIM_BOOL, mustrehash_204073)(NI length, NI counter);
N_NIMCALL(void, intsetenlarge_204614)(intset204056* t);
N_NIMCALL(void, intsetrawinsert_204249)(intset204056* t, ttrunkseq204054** data, ttrunk204052* desc);
static N_INLINE(void, asgnRef)(void** dest, void* src);
static N_INLINE(void, incref_51822)(tcell45947* c);
static N_INLINE(NIM_BOOL, canbecycleroot_49467)(tcell45947* c);
static N_INLINE(void, rtladdcycleroot_50223)(tcell45947* c);
N_NOINLINE(void, incl_46667)(tcellset45959* s, tcell45947* cell);
static N_INLINE(tcell45947*, usrtocell_49446)(void* usr);
static N_INLINE(void, decref_51404)(tcell45947* c);
static N_INLINE(void, rtladdzct_51004)(tcell45947* c);
N_NOINLINE(void, addzct_49417)(tcellseq45963* s, tcell45947* c);
N_NIMCALL(void*, newObj)(TNimType* typ, NI size);
TNimType NTI204056; /* IntSet */
extern TNimType NTI108; /* int */
TNimType NTI204052; /* TTrunk */
extern TNimType NTI27020; /* array[0..7, int] */
TNimType NTI204050; /* PTrunk */
TNimType NTI204054; /* TTrunkSeq */
extern tgcheap47816 gch_47844;
N_NIMCALL(void, TMP964)(void* p, NI op) {
	ttrunk204052* a;
	NI LOC1;
	a = (ttrunk204052*)p;
	nimGCvisit((void*)(*a).Next, op);
	LOC1 = 0;
	for (LOC1 = 0; LOC1 < 8; LOC1++) {
	}
}
N_NIMCALL(void, TMP965)(void* p, NI op) {
	ttrunkseq204054* a;
	NI LOC1;
	a = (ttrunkseq204054*)p;
	LOC1 = 0;
	for (LOC1 = 0; LOC1 < a->Sup.len; LOC1++) {
	nimGCvisit((void*)a->data[LOC1], op);
	}
}

N_NIMCALL(void, initintset_204927)(intset204056* Result) {
	unsureAsgnRef((void**) (&(*Result).Data), (ttrunkseq204054*) newSeq((&NTI204054), ((NI) 8)));
	(*Result).Max = ((NI) 7);
	(*Result).Counter = ((NI) 0);
	unsureAsgnRef((void**) (&(*Result).Head), NIM_NIL);
}

static N_INLINE(NI, nexttry_204207)(NI h, NI maxhash) {
	NI result;
	result = 0;
	result = (NI)((NI64)((NI64)(((NI) 5) * h) + ((NI) 1)) & maxhash);
	return result;
}

N_NIMCALL(ttrunk204052*, intsetget_204218)(intset204056* t, NI key) {
	ttrunk204052* result;
	NI h;
{	result = 0;
	h = (NI)(key & (*t).Max);
	{
		while (1) {
			if (!!(((*t).Data->data[h] == NIM_NIL))) goto LA2;
			{
				if (!((*(*t).Data->data[h]).Key == key)) goto LA5;
				result = (*t).Data->data[h];
				goto BeforeRet;
			}
			LA5: ;
			h = nexttry_204207(h, (*t).Max);
		} LA2: ;
	}
	result = NIM_NIL;
	}BeforeRet: ;
	return result;
}

static N_INLINE(NIM_BOOL, mustrehash_204073)(NI length, NI counter) {
	NIM_BOOL result;
	NIM_BOOL LOC1;
	result = 0;
	LOC1 = 0;
	LOC1 = ((NI64)(length * ((NI) 2)) < (NI64)(counter * ((NI) 3)));
	if (LOC1) goto LA2;
	LOC1 = ((NI64)(length - counter) < ((NI) 4));
	LA2: ;
	result = LOC1;
	return result;
}

static N_INLINE(NIM_BOOL, canbecycleroot_49467)(tcell45947* c) {
	NIM_BOOL result;
	result = 0;
	result = !((((*(*c).Typ).flags &(1<<((((NU8) 1))&7)))!=0));
	return result;
}

static N_INLINE(void, rtladdcycleroot_50223)(tcell45947* c) {
	{
		if (!!((((NI) ((NI)((*c).Refcount & ((NI) 3)))) == ((NI) 3)))) goto LA3;
		(*c).Refcount = (NI)((NI)((*c).Refcount & ((NI) -4)) | ((NI) 3));
		incl_46667((&gch_47844.Cycleroots), c);
	}
	LA3: ;
}

static N_INLINE(void, incref_51822)(tcell45947* c) {
	(*c).Refcount = (NI)((NU64)((*c).Refcount) + (NU64)(((NI) 8)));
	{
		NIM_BOOL LOC3;
		LOC3 = 0;
		LOC3 = canbecycleroot_49467(c);
		if (!LOC3) goto LA4;
		rtladdcycleroot_50223(c);
	}
	LA4: ;
}

static N_INLINE(tcell45947*, usrtocell_49446)(void* usr) {
	tcell45947* result;
	result = 0;
	result = ((tcell45947*) ((NI)((NU64)(((NI) (usr))) - (NU64)(((NI)sizeof(tcell45947))))));
	return result;
}

static N_INLINE(void, rtladdzct_51004)(tcell45947* c) {
	addzct_49417((&gch_47844.Zct), c);
}

static N_INLINE(void, decref_51404)(tcell45947* c) {
	{
		(*c).Refcount -= ((NI) 8);
		if (!((NU64)((*c).Refcount) < (NU64)(((NI) 8)))) goto LA3;
		rtladdzct_51004(c);
	}
	goto LA1;
	LA3: ;
	{
		NIM_BOOL LOC6;
		LOC6 = 0;
		LOC6 = canbecycleroot_49467(c);
		if (!LOC6) goto LA7;
		rtladdcycleroot_50223(c);
	}
	goto LA1;
	LA7: ;
	LA1: ;
}

static N_INLINE(void, asgnRef)(void** dest, void* src) {
	{
		tcell45947* LOC5;
		if (!!((src == NIM_NIL))) goto LA3;
		LOC5 = 0;
		LOC5 = usrtocell_49446(src);
		incref_51822(LOC5);
	}
	LA3: ;
	{
		tcell45947* LOC10;
		if (!!(((*dest) == NIM_NIL))) goto LA8;
		LOC10 = 0;
		LOC10 = usrtocell_49446((*dest));
		decref_51404(LOC10);
	}
	LA8: ;
	(*dest) = src;
}

N_NIMCALL(void, intsetrawinsert_204249)(intset204056* t, ttrunkseq204054** data, ttrunk204052* desc) {
	NI h;
	h = (NI)((*desc).Key & (*t).Max);
	{
		while (1) {
			if (!!(((*data)->data[h] == NIM_NIL))) goto LA2;
			h = nexttry_204207(h, (*t).Max);
		} LA2: ;
	}
	asgnRef((void**) (&(*data)->data[h]), desc);
}

N_NIMCALL(void, intsetenlarge_204614)(intset204056* t) {
	ttrunkseq204054* n;
	NI oldmax;
	ttrunkseq204054* LOC8;
	n = 0;
	oldmax = (*t).Max;
	(*t).Max = (NI64)((NI64)((NI64)((*t).Max + ((NI) 1)) * ((NI) 2)) - ((NI) 1));
	n = (ttrunkseq204054*) newSeq((&NTI204054), (NI64)((*t).Max + ((NI) 1)));
	{
		NI i_204642;
		NI res_204670;
		i_204642 = 0;
		res_204670 = ((NI) 0);
		{
			while (1) {
				if (!(res_204670 <= oldmax)) goto LA3;
				i_204642 = res_204670;
				{
					if (!!(((*t).Data->data[i_204642] == NIM_NIL))) goto LA6;
					intsetrawinsert_204249((&(*t)), (&n), (*t).Data->data[i_204642]);
				}
				LA6: ;
				res_204670 += ((NI) 1);
			} LA3: ;
		}
	}
	LOC8 = 0;
	LOC8 = (*t).Data;
	unsureAsgnRef((void**) (&(*t).Data), n);
	n = LOC8;
}

N_NIMCALL(ttrunk204052*, intsetput_204689)(intset204056* t, NI key) {
	ttrunk204052* result;
	NI h;
{	result = 0;
	h = (NI)(key & (*t).Max);
	{
		while (1) {
			if (!!(((*t).Data->data[h] == NIM_NIL))) goto LA2;
			{
				if (!((*(*t).Data->data[h]).Key == key)) goto LA5;
				result = (*t).Data->data[h];
				goto BeforeRet;
			}
			LA5: ;
			h = nexttry_204207(h, (*t).Max);
		} LA2: ;
	}
	{
		NIM_BOOL LOC9;
		LOC9 = 0;
		LOC9 = mustrehash_204073((NI64)((*t).Max + ((NI) 1)), (*t).Counter);
		if (!LOC9) goto LA10;
		intsetenlarge_204614(t);
	}
	LA10: ;
	(*t).Counter += ((NI) 1);
	h = (NI)(key & (*t).Max);
	{
		while (1) {
			if (!!(((*t).Data->data[h] == NIM_NIL))) goto LA13;
			h = nexttry_204207(h, (*t).Max);
		} LA13: ;
	}
	result = (ttrunk204052*) newObj((&NTI204050), sizeof(ttrunk204052));
	asgnRef((void**) (&(*result).Next), (*t).Head);
	(*result).Key = key;
	unsureAsgnRef((void**) (&(*t).Head), result);
	asgnRef((void**) (&(*t).Data->data[h]), result);
	}BeforeRet: ;
	return result;
}

N_NIMCALL(void, incl_204856)(intset204056* s, NI key) {
	ttrunk204052* t;
	NI u;
	t = intsetput_204689(s, (NI)((NU64)(key) >> (NU64)(((NI) 9))));
	u = (NI)(key & ((NI) 511));
	(*t).Bits[((NI)((NU64)(((NI) (u))) >> (NU64)(((NI) 6))))- 0] = (NI)((*t).Bits[((NI)((NU64)(((NI) (u))) >> (NU64)(((NI) 6))))- 0] | (NI)((NU64)(((NI) 1)) << (NU64)(((NI) ((NI)(((NI) (u)) & ((NI) 63)))))));
}

N_NIMCALL(NIM_BOOL, containsorincl_204898)(intset204056* s, NI key) {
	NIM_BOOL result;
	ttrunk204052* t;
	result = 0;
	t = intsetget_204218((&(*s)), (NI)((NU64)(key) >> (NU64)(((NI) 9))));
	{
		NI u;
		if (!!((t == NIM_NIL))) goto LA3;
		u = (NI)(key & ((NI) 511));
		result = !(((NI)((*t).Bits[((NI)((NU64)(((NI) (u))) >> (NU64)(((NI) 6))))- 0] & (NI)((NU64)(((NI) 1)) << (NU64)(((NI) ((NI)(((NI) (u)) & ((NI) 63))))))) == ((NI) 0)));
		{
			if (!!(result)) goto LA7;
			(*t).Bits[((NI)((NU64)(((NI) (u))) >> (NU64)(((NI) 6))))- 0] = (NI)((*t).Bits[((NI)((NU64)(((NI) (u))) >> (NU64)(((NI) 6))))- 0] | (NI)((NU64)(((NI) 1)) << (NU64)(((NI) ((NI)(((NI) (u)) & ((NI) 63)))))));
		}
		LA7: ;
	}
	goto LA1;
	LA3: ;
	{
		incl_204856(s, key);
		result = NIM_FALSE;
	}
	LA1: ;
	return result;
}

N_NIMCALL(NIM_BOOL, contains_204829)(intset204056* s, NI key) {
	NIM_BOOL result;
	ttrunk204052* t;
	result = 0;
	t = intsetget_204218(s, (NI)((NU64)(key) >> (NU64)(((NI) 9))));
	{
		NI u;
		if (!!((t == NIM_NIL))) goto LA3;
		u = (NI)(key & ((NI) 511));
		result = !(((NI)((*t).Bits[((NI)((NU64)(((NI) (u))) >> (NU64)(((NI) 6))))- 0] & (NI)((NU64)(((NI) 1)) << (NU64)(((NI) ((NI)(((NI) (u)) & ((NI) 63))))))) == ((NI) 0)));
	}
	goto LA1;
	LA3: ;
	{
		result = NIM_FALSE;
	}
	LA1: ;
	return result;
}

N_NIMCALL(void, excl_204871)(intset204056* s, NI key) {
	ttrunk204052* t;
	t = intsetget_204218((&(*s)), (NI)((NU64)(key) >> (NU64)(((NI) 9))));
	{
		NI u;
		if (!!((t == NIM_NIL))) goto LA3;
		u = (NI)(key & ((NI) 511));
		(*t).Bits[((NI)((NU64)(((NI) (u))) >> (NU64)(((NI) 6))))- 0] = (NI)((*t).Bits[((NI)((NU64)(((NI) (u))) >> (NU64)(((NI) 6))))- 0] & (NI)((NU64) ~((NI)((NU64)(((NI) 1)) << (NU64)(((NI) ((NI)(((NI) (u)) & ((NI) 63)))))))));
	}
	LA3: ;
}

N_NIMCALL(void, assign_204946)(intset204056* dest, intset204056* src) {
	ttrunk204052* it;
	(*dest).Counter = (*src).Counter;
	(*dest).Max = (*src).Max;
	unsureAsgnRef((void**) (&(*dest).Data), (ttrunkseq204054*) newSeq((&NTI204054), (*src).Data->Sup.len));
	it = (*src).Head;
	{
		while (1) {
			NI h;
			ttrunk204052* n;
			if (!!((it == NIM_NIL))) goto LA2;
			h = (NI)((*it).Key & (*dest).Max);
			{
				while (1) {
					if (!!(((*dest).Data->data[h] == NIM_NIL))) goto LA4;
					h = nexttry_204207(h, (*dest).Max);
				} LA4: ;
			}
			n = 0;
			n = (ttrunk204052*) newObj((&NTI204050), sizeof(ttrunk204052));
			asgnRef((void**) (&(*n).Next), (*dest).Head);
			(*n).Key = (*it).Key;
			memcpy((void*)(*n).Bits, (NIM_CONST void*)(*it).Bits, sizeof((*n).Bits));
			unsureAsgnRef((void**) (&(*dest).Head), n);
			asgnRef((void**) (&(*dest).Data->data[h]), n);
			it = (*it).Next;
		} LA2: ;
	}
}
NIM_EXTERNC N_NOINLINE(void, stdlib_intsetsInit)(void) {
}

NIM_EXTERNC N_NOINLINE(void, stdlib_intsetsDatInit)(void) {
static TNimNode* TMP962[4];
static TNimNode* TMP963[3];
static TNimNode TMP723[9];
NTI204056.size = sizeof(intset204056);
NTI204056.kind = 18;
NTI204056.base = 0;
NTI204056.flags = 2;
TMP962[0] = &TMP723[1];
TMP723[1].kind = 1;
TMP723[1].offset = offsetof(intset204056, Counter);
TMP723[1].typ = (&NTI108);
TMP723[1].name = "counter";
TMP962[1] = &TMP723[2];
TMP723[2].kind = 1;
TMP723[2].offset = offsetof(intset204056, Max);
TMP723[2].typ = (&NTI108);
TMP723[2].name = "max";
TMP962[2] = &TMP723[3];
NTI204052.size = sizeof(ttrunk204052);
NTI204052.kind = 18;
NTI204052.base = 0;
TMP963[0] = &TMP723[5];
TMP723[5].kind = 1;
TMP723[5].offset = offsetof(ttrunk204052, Next);
TMP723[5].typ = (&NTI204050);
TMP723[5].name = "next";
TMP963[1] = &TMP723[6];
TMP723[6].kind = 1;
TMP723[6].offset = offsetof(ttrunk204052, Key);
TMP723[6].typ = (&NTI108);
TMP723[6].name = "key";
TMP963[2] = &TMP723[7];
TMP723[7].kind = 1;
TMP723[7].offset = offsetof(ttrunk204052, Bits);
TMP723[7].typ = (&NTI27020);
TMP723[7].name = "bits";
TMP723[4].len = 3; TMP723[4].kind = 2; TMP723[4].sons = &TMP963[0];
NTI204052.node = &TMP723[4];
NTI204050.size = sizeof(ttrunk204052*);
NTI204050.kind = 22;
NTI204050.base = (&NTI204052);
NTI204050.marker = TMP964;
TMP723[3].kind = 1;
TMP723[3].offset = offsetof(intset204056, Head);
TMP723[3].typ = (&NTI204050);
TMP723[3].name = "head";
TMP962[3] = &TMP723[8];
NTI204054.size = sizeof(ttrunkseq204054*);
NTI204054.kind = 24;
NTI204054.base = (&NTI204050);
NTI204054.flags = 2;
NTI204054.marker = TMP965;
TMP723[8].kind = 1;
TMP723[8].offset = offsetof(intset204056, Data);
TMP723[8].typ = (&NTI204054);
TMP723[8].name = "data";
TMP723[0].len = 4; TMP723[0].kind = 2; TMP723[0].sons = &TMP962[0];
NTI204056.node = &TMP723[0];
}

