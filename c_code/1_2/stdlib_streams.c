/* Generated by Nim Compiler v0.10.3 */
/*   (c) 2015 Andreas Rumpf */
/* The generated code is subject to the original license. */
#define NIM_INTBITS 64
#include "nimbase.h"

#include <stdio.h>
typedef struct TNimType TNimType;
typedef struct TNimNode TNimNode;
typedef struct streamobj138027 streamobj138027;
typedef struct TNimObject TNimObject;
typedef struct filestreamobj138692 filestreamobj138692;
typedef struct NimStringDesc NimStringDesc;
typedef struct TGenericSeq TGenericSeq;
typedef struct ioerror3431 ioerror3431;
typedef struct systemerror3429 systemerror3429;
typedef struct Exception Exception;
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
typedef N_NIMCALL_PTR(void, TY138028) (streamobj138027* s);
typedef N_NIMCALL_PTR(NIM_BOOL, TY138032) (streamobj138027* s);
typedef N_NIMCALL_PTR(void, TY138036) (streamobj138027* s, NI pos);
typedef N_NIMCALL_PTR(NI, TY138041) (streamobj138027* s);
typedef N_NIMCALL_PTR(NI, TY138045) (streamobj138027* s, void* buffer, NI buflen);
typedef N_NIMCALL_PTR(void, TY138051) (streamobj138027* s, void* buffer, NI buflen);
typedef N_NIMCALL_PTR(void, TY138057) (streamobj138027* s);
struct  streamobj138027  {
  TNimObject Sup;
TY138028 Closeimpl;
TY138032 Atendimpl;
TY138036 Setpositionimpl;
TY138041 Getpositionimpl;
TY138045 Readdataimpl;
TY138051 Writedataimpl;
TY138057 Flushimpl;
};
struct  TGenericSeq  {
NI len;
NI reserved;
};
struct  NimStringDesc  {
  TGenericSeq Sup;
NIM_CHAR data[SEQ_DECL_SIZE];
};
struct  filestreamobj138692  {
  streamobj138027 Sup;
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
typedef NI TY27020[8];
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
N_NIMCALL(void, TMP2748)(void* p, NI op);
N_NIMCALL(NIM_BOOL, open_13203)(FILE** f, NimStringDesc* filename, NU8 mode, NI bufsize);
N_NIMCALL(filestreamobj138692*, newfilestream_138759)(FILE* f);
N_NIMCALL(void, TMP2749)(void* p, NI op);
N_NIMCALL(void*, newObj)(TNimType* typ, NI size);
N_NIMCALL(void, fsclose_138696)(streamobj138027* s);
N_NIMCALL(NIM_BOOL, fsatend_138720)(streamobj138027* s);
N_NIMCALL(NIM_BOOL, endoffile_13422)(FILE* f);
N_NIMCALL(void, fssetposition_138727)(streamobj138027* s, NI pos);
N_NIMCALL(void, setfilepos_13542)(FILE* f, NI64 pos);
N_NIMCALL(NI, fsgetposition_138734)(streamobj138027* s);
N_NIMCALL(NI64, getfilepos_13546)(FILE* f);
N_NIMCALL(NI, fsreaddata_138742)(streamobj138027* s, void* buffer, NI buflen);
N_NIMCALL(NI, readbuffer_13515)(FILE* f, void* buffer, NI len);
N_NIMCALL(void, fswritedata_138751)(streamobj138027* s, void* buffer, NI buflen);
N_NIMCALL(NI, writebuffer_13537)(FILE* f, void* buffer, NI len);
N_NIMCALL(ioerror3431*, neweio_138005)(NimStringDesc* msg);
N_NIMCALL(NimStringDesc*, copyStringRC1)(NimStringDesc* src);
static N_INLINE(void, nimGCunrefNoCycle)(void* p);
static N_INLINE(tcell45946*, usrtocell_49446)(void* usr);
static N_INLINE(void, rtladdzct_51004)(tcell45946* c);
N_NOINLINE(void, addzct_49417)(tcellseq45962* s, tcell45946* c);
N_NIMCALL(void, raiseException)(Exception* e, NCSTRING ename);
N_NIMCALL(void, fsflush_138714)(streamobj138027* s);
N_NIMCALL(void, writedata_138199)(streamobj138027* s, void* buffer, NI buflen);
N_NIMCALL(NimStringDesc*, copyString)(NimStringDesc* src);
N_NIMCALL(NIM_CHAR, readchar_138287)(streamobj138027* s);
N_NIMCALL(NI, readdata_138174)(streamobj138027* s, void* buffer, NI buflen);
N_NIMCALL(NimStringDesc*, addChar)(NimStringDesc* s, NIM_CHAR c);
STRING_LITERAL(TMP2752, "cannot write to stream", 22);
STRING_LITERAL(TMP2953, "", 0);
extern TNimType NTI3411; /* RootObj */
TNimType NTI138027; /* StreamObj */
TNimType NTI138028; /* proc (Stream){.gcsafe.} */
TNimType NTI138032; /* proc (Stream): bool{.gcsafe.} */
TNimType NTI138036; /* proc (Stream, int){.gcsafe.} */
TNimType NTI138041; /* proc (Stream): int{.gcsafe.} */
TNimType NTI138045; /* proc (Stream, pointer, int): int{.gcsafe.} */
TNimType NTI138051; /* proc (Stream, pointer, int){.gcsafe.} */
TNimType NTI138057; /* proc (Stream){.gcsafe.} */
TNimType NTI138025; /* Stream */
TNimType NTI138692; /* FileStreamObj */
extern TNimType NTI13004; /* File */
TNimType NTI138690; /* FileStream */
extern TNimType NTI77801; /* ref IOError */
extern TNimType NTI3431; /* IOError */
extern tgcheap47816 gch_47844;
N_NIMCALL(void, TMP2748)(void* p, NI op) {
	streamobj138027* a;
	a = (streamobj138027*)p;
}

N_NIMCALL(NI, readdata_138174)(streamobj138027* s, void* buffer, NI buflen) {
	NI result;
	result = 0;
	result = (*s).Readdataimpl(s, buffer, buflen);
	return result;
}
N_NIMCALL(void, TMP2749)(void* p, NI op) {
	filestreamobj138692* a;
	a = (filestreamobj138692*)p;
}

N_NIMCALL(void, fsclose_138696)(streamobj138027* s) {
	{
		if (!!(((*((filestreamobj138692*) (s))).F == NIM_NIL))) goto LA3;
		fclose((*((filestreamobj138692*) (s))).F);
		(*((filestreamobj138692*) (s))).F = NIM_NIL;
	}
	LA3: ;
}

N_NIMCALL(NIM_BOOL, fsatend_138720)(streamobj138027* s) {
	NIM_BOOL result;
{	result = 0;
	result = endoffile_13422((*((filestreamobj138692*) (s))).F);
	goto BeforeRet;
	}BeforeRet: ;
	return result;
}

N_NIMCALL(void, fssetposition_138727)(streamobj138027* s, NI pos) {
	setfilepos_13542((*((filestreamobj138692*) (s))).F, ((NI64) (pos)));
}

N_NIMCALL(NI, fsgetposition_138734)(streamobj138027* s) {
	NI result;
	NI64 LOC1;
{	result = 0;
	LOC1 = 0;
	LOC1 = getfilepos_13546((*((filestreamobj138692*) (s))).F);
	result = ((NI) (LOC1));
	goto BeforeRet;
	}BeforeRet: ;
	return result;
}

N_NIMCALL(NI, fsreaddata_138742)(streamobj138027* s, void* buffer, NI buflen) {
	NI result;
	result = 0;
	result = readbuffer_13515((*((filestreamobj138692*) (s))).F, buffer, buflen);
	return result;
}

static N_INLINE(tcell45946*, usrtocell_49446)(void* usr) {
	tcell45946* result;
	result = 0;
	result = ((tcell45946*) ((NI)((NU64)(((NI) (usr))) - (NU64)(((NI)sizeof(tcell45946))))));
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
		if (!((NU64)((*c).Refcount) < (NU64)(((NI) 8)))) goto LA3;
		rtladdzct_51004(c);
	}
	LA3: ;
}

N_NIMCALL(ioerror3431*, neweio_138005)(NimStringDesc* msg) {
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

N_NIMCALL(void, fswritedata_138751)(streamobj138027* s, void* buffer, NI buflen) {
	{
		NI LOC3;
		ioerror3431* LOC6;
		LOC3 = 0;
		LOC3 = writebuffer_13537((*((filestreamobj138692*) (s))).F, buffer, buflen);
		if (!!((LOC3 == buflen))) goto LA4;
		LOC6 = 0;
		LOC6 = neweio_138005(((NimStringDesc*) &TMP2752));
		raiseException((Exception*)LOC6, "IOError");
	}
	LA4: ;
}

N_NIMCALL(void, fsflush_138714)(streamobj138027* s) {
	fflush((*((filestreamobj138692*) (s))).F);
}

N_NIMCALL(filestreamobj138692*, newfilestream_138759)(FILE* f) {
	filestreamobj138692* result;
	result = 0;
	result = (filestreamobj138692*) newObj((&NTI138690), sizeof(filestreamobj138692));
	(*result).Sup.Sup.m_type = (&NTI138692);
	(*result).F = f;
	(*result).Sup.Closeimpl = fsclose_138696;
	(*result).Sup.Atendimpl = fsatend_138720;
	(*result).Sup.Setpositionimpl = fssetposition_138727;
	(*result).Sup.Getpositionimpl = fsgetposition_138734;
	(*result).Sup.Readdataimpl = fsreaddata_138742;
	(*result).Sup.Writedataimpl = fswritedata_138751;
	(*result).Sup.Flushimpl = fsflush_138714;
	return result;
}

N_NIMCALL(filestreamobj138692*, newfilestream_138774)(NimStringDesc* filename, NU8 mode) {
	filestreamobj138692* result;
	FILE* f;
	result = 0;
	f = 0;
	{
		NIM_BOOL LOC3;
		LOC3 = 0;
		LOC3 = open_13203(&f, filename, mode, ((NI) -1));
		if (!LOC3) goto LA4;
		result = newfilestream_138759(f);
	}
	LA4: ;
	return result;
}

N_NIMCALL(void, close_138085)(streamobj138027* s) {
	{
		if (!!((*s).Closeimpl == 0)) goto LA3;
		(*s).Closeimpl(s);
	}
	LA3: ;
}

N_NIMCALL(void, writedata_138199)(streamobj138027* s, void* buffer, NI buflen) {
	(*s).Writedataimpl(s, buffer, buflen);
}

N_NIMCALL(void, write_138233)(streamobj138027* s, NimStringDesc* x) {
	writedata_138199(s, ((void*) (x->data)), x->Sup.len);
}

N_NIMCALL(NIM_BOOL, atend_138111)(streamobj138027* s) {
	NIM_BOOL result;
	result = 0;
	result = (*s).Atendimpl(s);
	return result;
}

N_NIMCALL(NIM_CHAR, readchar_138287)(streamobj138027* s) {
	NIM_CHAR result;
	result = 0;
	{
		NI LOC3;
		LOC3 = 0;
		LOC3 = readdata_138174(s, ((void*) ((&result))), ((NI) 1));
		if (!!((LOC3 == ((NI) 1)))) goto LA4;
		result = 0;
	}
	LA4: ;
	return result;
}

N_NIMCALL(NimStringDesc*, readline_138531)(streamobj138027* s) {
	NimStringDesc* result;
	result = 0;
	result = copyString(((NimStringDesc*) &TMP2953));
	{
		while (1) {
			NIM_CHAR c;
			c = readchar_138287(s);
			{
				if (!((NU8)(c) == (NU8)(13))) goto LA5;
				c = readchar_138287(s);
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
static TNimNode* TMP2747[7];
static TNimNode TMP33[9];
NTI138027.size = sizeof(streamobj138027);
NTI138027.kind = 17;
NTI138027.base = (&NTI3411);
NTI138027.flags = 1;
TMP2747[0] = &TMP33[1];
NTI138028.size = sizeof(TY138028);
NTI138028.kind = 25;
NTI138028.base = 0;
NTI138028.flags = 3;
TMP33[1].kind = 1;
TMP33[1].offset = offsetof(streamobj138027, Closeimpl);
TMP33[1].typ = (&NTI138028);
TMP33[1].name = "closeImpl";
TMP2747[1] = &TMP33[2];
NTI138032.size = sizeof(TY138032);
NTI138032.kind = 25;
NTI138032.base = 0;
NTI138032.flags = 3;
TMP33[2].kind = 1;
TMP33[2].offset = offsetof(streamobj138027, Atendimpl);
TMP33[2].typ = (&NTI138032);
TMP33[2].name = "atEndImpl";
TMP2747[2] = &TMP33[3];
NTI138036.size = sizeof(TY138036);
NTI138036.kind = 25;
NTI138036.base = 0;
NTI138036.flags = 3;
TMP33[3].kind = 1;
TMP33[3].offset = offsetof(streamobj138027, Setpositionimpl);
TMP33[3].typ = (&NTI138036);
TMP33[3].name = "setPositionImpl";
TMP2747[3] = &TMP33[4];
NTI138041.size = sizeof(TY138041);
NTI138041.kind = 25;
NTI138041.base = 0;
NTI138041.flags = 3;
TMP33[4].kind = 1;
TMP33[4].offset = offsetof(streamobj138027, Getpositionimpl);
TMP33[4].typ = (&NTI138041);
TMP33[4].name = "getPositionImpl";
TMP2747[4] = &TMP33[5];
NTI138045.size = sizeof(TY138045);
NTI138045.kind = 25;
NTI138045.base = 0;
NTI138045.flags = 3;
TMP33[5].kind = 1;
TMP33[5].offset = offsetof(streamobj138027, Readdataimpl);
TMP33[5].typ = (&NTI138045);
TMP33[5].name = "readDataImpl";
TMP2747[5] = &TMP33[6];
NTI138051.size = sizeof(TY138051);
NTI138051.kind = 25;
NTI138051.base = 0;
NTI138051.flags = 3;
TMP33[6].kind = 1;
TMP33[6].offset = offsetof(streamobj138027, Writedataimpl);
TMP33[6].typ = (&NTI138051);
TMP33[6].name = "writeDataImpl";
TMP2747[6] = &TMP33[7];
NTI138057.size = sizeof(TY138057);
NTI138057.kind = 25;
NTI138057.base = 0;
NTI138057.flags = 3;
TMP33[7].kind = 1;
TMP33[7].offset = offsetof(streamobj138027, Flushimpl);
TMP33[7].typ = (&NTI138057);
TMP33[7].name = "flushImpl";
TMP33[0].len = 7; TMP33[0].kind = 2; TMP33[0].sons = &TMP2747[0];
NTI138027.node = &TMP33[0];
NTI138025.size = sizeof(streamobj138027*);
NTI138025.kind = 22;
NTI138025.base = (&NTI138027);
NTI138025.marker = TMP2748;
NTI138692.size = sizeof(filestreamobj138692);
NTI138692.kind = 17;
NTI138692.base = (&NTI138027);
NTI138692.flags = 1;
TMP33[8].kind = 1;
TMP33[8].offset = offsetof(filestreamobj138692, F);
TMP33[8].typ = (&NTI13004);
TMP33[8].name = "f";
NTI138692.node = &TMP33[8];
NTI138690.size = sizeof(filestreamobj138692*);
NTI138690.kind = 22;
NTI138690.base = (&NTI138692);
NTI138690.marker = TMP2749;
}

