/* Generated by Nim Compiler v0.10.3 */
/*   (c) 2015 Andreas Rumpf */
/* The generated code is subject to the original license. */
#define NIM_INTBITS 32
#include "nimbase.h"

#include <stdio.h>
typedef struct TNimType TNimType;
typedef struct TNimNode TNimNode;
typedef struct streamobj135027 streamobj135027;
typedef struct TNimObject TNimObject;
typedef struct filestreamobj135692 filestreamobj135692;
typedef struct NimStringDesc NimStringDesc;
typedef struct TGenericSeq TGenericSeq;
typedef struct ioerror3431 ioerror3431;
typedef struct systemerror3429 systemerror3429;
typedef struct Exception Exception;
typedef struct tcell45947 tcell45947;
typedef struct tcellseq45963 tcellseq45963;
typedef struct tgcheap47816 tgcheap47816;
typedef struct tcellset45959 tcellset45959;
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
struct  TNimObject  {
TNimType* m_type;
};
typedef N_NIMCALL_PTR(void, TY135028) (streamobj135027* s);
typedef N_NIMCALL_PTR(NIM_BOOL, TY135032) (streamobj135027* s);
typedef N_NIMCALL_PTR(void, TY135036) (streamobj135027* s, NI pos);
typedef N_NIMCALL_PTR(NI, TY135041) (streamobj135027* s);
typedef N_NIMCALL_PTR(NI, TY135045) (streamobj135027* s, void* buffer, NI buflen);
typedef N_NIMCALL_PTR(void, TY135051) (streamobj135027* s, void* buffer, NI buflen);
typedef N_NIMCALL_PTR(void, TY135057) (streamobj135027* s);
struct  streamobj135027  {
  TNimObject Sup;
TY135028 Closeimpl;
TY135032 Atendimpl;
TY135036 Setpositionimpl;
TY135041 Getpositionimpl;
TY135045 Readdataimpl;
TY135051 Writedataimpl;
TY135057 Flushimpl;
};
struct  TGenericSeq  {
NI len;
NI reserved;
};
struct  NimStringDesc  {
  TGenericSeq Sup;
NIM_CHAR data[SEQ_DECL_SIZE];
};
struct  filestreamobj135692  {
  streamobj135027 Sup;
FILE* F;
};
struct  Exception  {
  TNimObject Sup;
Exception* parent;
NCSTRING name;
NimStringDesc* message;
NimStringDesc* trace;
};
struct  systemerror3429  {
  Exception Sup;
};
struct  ioerror3431  {
  systemerror3429 Sup;
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
typedef NI TY27020[16];
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
N_NIMCALL(void, TMP2744)(void* p, NI op);
N_NIMCALL(NIM_BOOL, open_13203)(FILE** f, NimStringDesc* filename, NU8 mode, NI bufsize);
N_NIMCALL(filestreamobj135692*, newfilestream_135758)(FILE* f);
N_NIMCALL(void, TMP2745)(void* p, NI op);
N_NIMCALL(void*, newObj)(TNimType* typ, NI size);
N_NIMCALL(void, fsclose_135696)(streamobj135027* s);
N_NIMCALL(NIM_BOOL, fsatend_135720)(streamobj135027* s);
N_NIMCALL(NIM_BOOL, endoffile_13422)(FILE* f);
N_NIMCALL(void, fssetposition_135727)(streamobj135027* s, NI pos);
N_NIMCALL(void, setfilepos_13542)(FILE* f, NI64 pos);
N_NIMCALL(NI, fsgetposition_135734)(streamobj135027* s);
N_NIMCALL(NI64, getfilepos_13546)(FILE* f);
N_NIMCALL(NI, fsreaddata_135741)(streamobj135027* s, void* buffer, NI buflen);
N_NIMCALL(NI, readbuffer_13515)(FILE* f, void* buffer, NI len);
N_NIMCALL(void, fswritedata_135750)(streamobj135027* s, void* buffer, NI buflen);
N_NIMCALL(NI, writebuffer_13537)(FILE* f, void* buffer, NI len);
N_NIMCALL(ioerror3431*, neweio_135005)(NimStringDesc* msg);
N_NIMCALL(NimStringDesc*, copyStringRC1)(NimStringDesc* src);
static N_INLINE(void, nimGCunrefNoCycle)(void* p);
static N_INLINE(tcell45947*, usrtocell_49446)(void* usr);
static N_INLINE(void, rtladdzct_51004)(tcell45947* c);
N_NOINLINE(void, addzct_49417)(tcellseq45963* s, tcell45947* c);
N_NIMCALL(void, raiseException)(Exception* e, NCSTRING ename);
N_NIMCALL(void, fsflush_135714)(streamobj135027* s);
N_NIMCALL(void, writedata_135199)(streamobj135027* s, void* buffer, NI buflen);
N_NIMCALL(NimStringDesc*, copyString)(NimStringDesc* src);
N_NIMCALL(NIM_CHAR, readchar_135287)(streamobj135027* s);
N_NIMCALL(NI, readdata_135174)(streamobj135027* s, void* buffer, NI buflen);
N_NIMCALL(NimStringDesc*, addChar)(NimStringDesc* s, NIM_CHAR c);
STRING_LITERAL(TMP2748, "cannot write to stream", 22);
STRING_LITERAL(TMP2953, "", 0);
extern TNimType NTI3411; /* RootObj */
TNimType NTI135027; /* StreamObj */
TNimType NTI135028; /* proc (Stream){.gcsafe.} */
TNimType NTI135032; /* proc (Stream): bool{.gcsafe.} */
TNimType NTI135036; /* proc (Stream, int){.gcsafe.} */
TNimType NTI135041; /* proc (Stream): int{.gcsafe.} */
TNimType NTI135045; /* proc (Stream, pointer, int): int{.gcsafe.} */
TNimType NTI135051; /* proc (Stream, pointer, int){.gcsafe.} */
TNimType NTI135057; /* proc (Stream){.gcsafe.} */
TNimType NTI135025; /* Stream */
TNimType NTI135692; /* FileStreamObj */
extern TNimType NTI13004; /* File */
TNimType NTI135690; /* FileStream */
extern TNimType NTI77801; /* ref IOError */
extern TNimType NTI3431; /* IOError */
extern tgcheap47816 gch_47844;
N_NIMCALL(void, TMP2744)(void* p, NI op) {
	streamobj135027* a;
	a = (streamobj135027*)p;
}

N_NIMCALL(NI, readdata_135174)(streamobj135027* s, void* buffer, NI buflen) {
	NI result;
	result = 0;
	result = (*s).Readdataimpl(s, buffer, buflen);
	return result;
}
N_NIMCALL(void, TMP2745)(void* p, NI op) {
	filestreamobj135692* a;
	a = (filestreamobj135692*)p;
}

N_NIMCALL(void, fsclose_135696)(streamobj135027* s) {
	{
		if (!!(((*((filestreamobj135692*) (s))).F == NIM_NIL))) goto LA3;
		fclose((*((filestreamobj135692*) (s))).F);
		(*((filestreamobj135692*) (s))).F = NIM_NIL;
	}
	LA3: ;
}

N_NIMCALL(NIM_BOOL, fsatend_135720)(streamobj135027* s) {
	NIM_BOOL result;
{	result = 0;
	result = endoffile_13422((*((filestreamobj135692*) (s))).F);
	goto BeforeRet;
	}BeforeRet: ;
	return result;
}

N_NIMCALL(void, fssetposition_135727)(streamobj135027* s, NI pos) {
	setfilepos_13542((*((filestreamobj135692*) (s))).F, ((NI64) (pos)));
}

N_NIMCALL(NI, fsgetposition_135734)(streamobj135027* s) {
	NI result;
	NI64 LOC1;
{	result = 0;
	LOC1 = 0;
	LOC1 = getfilepos_13546((*((filestreamobj135692*) (s))).F);
	result = ((NI) (LOC1));
	goto BeforeRet;
	}BeforeRet: ;
	return result;
}

N_NIMCALL(NI, fsreaddata_135741)(streamobj135027* s, void* buffer, NI buflen) {
	NI result;
	result = 0;
	result = readbuffer_13515((*((filestreamobj135692*) (s))).F, buffer, buflen);
	return result;
}

static N_INLINE(tcell45947*, usrtocell_49446)(void* usr) {
	tcell45947* result;
	result = 0;
	result = ((tcell45947*) ((NI)((NU32)(((NI) (usr))) - (NU32)(((NI)sizeof(tcell45947))))));
	return result;
}

static N_INLINE(void, rtladdzct_51004)(tcell45947* c) {
	addzct_49417((&gch_47844.Zct), c);
}

static N_INLINE(void, nimGCunrefNoCycle)(void* p) {
	tcell45947* c;
	c = usrtocell_49446(p);
	{
		(*c).Refcount -= ((NI) 8);
		if (!((NU32)((*c).Refcount) < (NU32)(((NI) 8)))) goto LA3;
		rtladdzct_51004(c);
	}
	LA3: ;
}

N_NIMCALL(ioerror3431*, neweio_135005)(NimStringDesc* msg) {
	ioerror3431* result;
	NimStringDesc* LOC1;
	result = 0;
	result = (ioerror3431*) newObj((&NTI77801), sizeof(ioerror3431));
	(*result).Sup.Sup.Sup.m_type = (&NTI3431);
	LOC1 = 0;
	LOC1 = (*result).Sup.Sup.message; (*result).Sup.Sup.message = copyStringRC1(msg);
	if (LOC1) nimGCunrefNoCycle(LOC1);
	return result;
}

N_NIMCALL(void, fswritedata_135750)(streamobj135027* s, void* buffer, NI buflen) {
	{
		NI LOC3;
		ioerror3431* LOC6;
		LOC3 = 0;
		LOC3 = writebuffer_13537((*((filestreamobj135692*) (s))).F, buffer, buflen);
		if (!!((LOC3 == buflen))) goto LA4;
		LOC6 = 0;
		LOC6 = neweio_135005(((NimStringDesc*) &TMP2748));
		raiseException((Exception*)LOC6, "IOError");
	}
	LA4: ;
}

N_NIMCALL(void, fsflush_135714)(streamobj135027* s) {
	fflush((*((filestreamobj135692*) (s))).F);
}

N_NIMCALL(filestreamobj135692*, newfilestream_135758)(FILE* f) {
	filestreamobj135692* result;
	result = 0;
	result = (filestreamobj135692*) newObj((&NTI135690), sizeof(filestreamobj135692));
	(*result).Sup.Sup.m_type = (&NTI135692);
	(*result).F = f;
	(*result).Sup.Closeimpl = fsclose_135696;
	(*result).Sup.Atendimpl = fsatend_135720;
	(*result).Sup.Setpositionimpl = fssetposition_135727;
	(*result).Sup.Getpositionimpl = fsgetposition_135734;
	(*result).Sup.Readdataimpl = fsreaddata_135741;
	(*result).Sup.Writedataimpl = fswritedata_135750;
	(*result).Sup.Flushimpl = fsflush_135714;
	return result;
}

N_NIMCALL(filestreamobj135692*, newfilestream_135773)(NimStringDesc* filename, NU8 mode) {
	filestreamobj135692* result;
	FILE* f;
	result = 0;
	f = 0;
	{
		NIM_BOOL LOC3;
		LOC3 = 0;
		LOC3 = open_13203(&f, filename, mode, ((NI) -1));
		if (!LOC3) goto LA4;
		result = newfilestream_135758(f);
	}
	LA4: ;
	return result;
}

N_NIMCALL(void, close_135085)(streamobj135027* s) {
	{
		if (!!((*s).Closeimpl == 0)) goto LA3;
		(*s).Closeimpl(s);
	}
	LA3: ;
}

N_NIMCALL(void, writedata_135199)(streamobj135027* s, void* buffer, NI buflen) {
	(*s).Writedataimpl(s, buffer, buflen);
}

N_NIMCALL(void, write_135233)(streamobj135027* s, NimStringDesc* x) {
	writedata_135199(s, ((void*) (x->data)), x->Sup.len);
}

N_NIMCALL(NIM_BOOL, atend_135111)(streamobj135027* s) {
	NIM_BOOL result;
	result = 0;
	result = (*s).Atendimpl(s);
	return result;
}

N_NIMCALL(NIM_CHAR, readchar_135287)(streamobj135027* s) {
	NIM_CHAR result;
	result = 0;
	{
		NI LOC3;
		LOC3 = 0;
		LOC3 = readdata_135174(s, ((void*) ((&result))), ((NI) 1));
		if (!!((LOC3 == ((NI) 1)))) goto LA4;
		result = 0;
	}
	LA4: ;
	return result;
}

N_NIMCALL(NimStringDesc*, readline_135531)(streamobj135027* s) {
	NimStringDesc* result;
	result = 0;
	result = copyString(((NimStringDesc*) &TMP2953));
	{
		while (1) {
			NIM_CHAR c;
			c = readchar_135287(s);
			{
				if (!((NU8)(c) == (NU8)(13))) goto LA5;
				c = readchar_135287(s);
				goto LA1;
			}
			LA5: ;
			{
				NIM_BOOL LOC9;
				LOC9 = 0;
				LOC9 = ((NU8)(c) == (NU8)(10));
				if (LOC9) goto LA10;
				LOC9 = ((NU8)(c) == (NU8)(0));
				LA10: ;
				if (!LOC9) goto LA11;
				goto LA1;
			}
			goto LA7;
			LA11: ;
			{
				result = addChar(result, c);
			}
			LA7: ;
		}
	} LA1: ;
	return result;
}
NIM_EXTERNC N_NOINLINE(void, stdlib_streamsInit)(void) {
}

NIM_EXTERNC N_NOINLINE(void, stdlib_streamsDatInit)(void) {
static TNimNode* TMP2743[7];
static TNimNode TMP31[9];
NTI135027.size = sizeof(streamobj135027);
NTI135027.kind = 17;
NTI135027.base = (&NTI3411);
NTI135027.flags = 1;
TMP2743[0] = &TMP31[1];
NTI135028.size = sizeof(TY135028);
NTI135028.kind = 25;
NTI135028.base = 0;
NTI135028.flags = 3;
TMP31[1].kind = 1;
TMP31[1].offset = offsetof(streamobj135027, Closeimpl);
TMP31[1].typ = (&NTI135028);
TMP31[1].name = "closeImpl";
TMP2743[1] = &TMP31[2];
NTI135032.size = sizeof(TY135032);
NTI135032.kind = 25;
NTI135032.base = 0;
NTI135032.flags = 3;
TMP31[2].kind = 1;
TMP31[2].offset = offsetof(streamobj135027, Atendimpl);
TMP31[2].typ = (&NTI135032);
TMP31[2].name = "atEndImpl";
TMP2743[2] = &TMP31[3];
NTI135036.size = sizeof(TY135036);
NTI135036.kind = 25;
NTI135036.base = 0;
NTI135036.flags = 3;
TMP31[3].kind = 1;
TMP31[3].offset = offsetof(streamobj135027, Setpositionimpl);
TMP31[3].typ = (&NTI135036);
TMP31[3].name = "setPositionImpl";
TMP2743[3] = &TMP31[4];
NTI135041.size = sizeof(TY135041);
NTI135041.kind = 25;
NTI135041.base = 0;
NTI135041.flags = 3;
TMP31[4].kind = 1;
TMP31[4].offset = offsetof(streamobj135027, Getpositionimpl);
TMP31[4].typ = (&NTI135041);
TMP31[4].name = "getPositionImpl";
TMP2743[4] = &TMP31[5];
NTI135045.size = sizeof(TY135045);
NTI135045.kind = 25;
NTI135045.base = 0;
NTI135045.flags = 3;
TMP31[5].kind = 1;
TMP31[5].offset = offsetof(streamobj135027, Readdataimpl);
TMP31[5].typ = (&NTI135045);
TMP31[5].name = "readDataImpl";
TMP2743[5] = &TMP31[6];
NTI135051.size = sizeof(TY135051);
NTI135051.kind = 25;
NTI135051.base = 0;
NTI135051.flags = 3;
TMP31[6].kind = 1;
TMP31[6].offset = offsetof(streamobj135027, Writedataimpl);
TMP31[6].typ = (&NTI135051);
TMP31[6].name = "writeDataImpl";
TMP2743[6] = &TMP31[7];
NTI135057.size = sizeof(TY135057);
NTI135057.kind = 25;
NTI135057.base = 0;
NTI135057.flags = 3;
TMP31[7].kind = 1;
TMP31[7].offset = offsetof(streamobj135027, Flushimpl);
TMP31[7].typ = (&NTI135057);
TMP31[7].name = "flushImpl";
TMP31[0].len = 7; TMP31[0].kind = 2; TMP31[0].sons = &TMP2743[0];
NTI135027.node = &TMP31[0];
NTI135025.size = sizeof(streamobj135027*);
NTI135025.kind = 22;
NTI135025.base = (&NTI135027);
NTI135025.marker = TMP2744;
NTI135692.size = sizeof(filestreamobj135692);
NTI135692.kind = 17;
NTI135692.base = (&NTI135027);
NTI135692.flags = 1;
TMP31[8].kind = 1;
TMP31[8].offset = offsetof(filestreamobj135692, F);
TMP31[8].typ = (&NTI13004);
TMP31[8].name = "f";
NTI135692.node = &TMP31[8];
NTI135690.size = sizeof(filestreamobj135692*);
NTI135690.kind = 22;
NTI135690.base = (&NTI135692);
NTI135690.marker = TMP2745;
}

