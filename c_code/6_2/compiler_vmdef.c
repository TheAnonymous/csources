/* Generated by Nim Compiler v0.10.3 */
/*   (c) 2015 Andreas Rumpf */
/* The generated code is subject to the original license. */
#define NIM_INTBITS 64
#include "nimbase.h"

#include <string.h>
typedef struct TNimType TNimType;
typedef struct TNimNode TNimNode;
typedef struct tctx258048 tctx258048;
typedef struct tpasscontext256005 tpasscontext256005;
typedef struct TNimObject TNimObject;
typedef struct TY258250 TY258250;
typedef struct TGenericSeq TGenericSeq;
typedef struct TY181036 TY181036;
typedef struct tlineinfo180338 tlineinfo180338;
typedef struct tnode207813 tnode207813;
typedef struct ttypeseq207845 ttypeseq207845;
typedef struct ttype207849 ttype207849;
typedef struct pprocHEX3Aobjecttype258230 pprocHEX3Aobjecttype258230;
typedef struct tsym207843 tsym207843;
typedef struct TY258269 TY258269;
typedef struct TY258270 TY258270;
typedef struct NimStringDesc NimStringDesc;
typedef struct vmargs258042 vmargs258042;
typedef struct TY258231 TY258231;
typedef struct tblock258030 tblock258030;
typedef struct TY258211 TY258211;
typedef struct TY258237 TY258237;
typedef struct TY529942 TY529942;
typedef struct TY529945 TY529945;
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
typedef struct tident184021 tident184021;
typedef struct tnodeseq207807 tnodeseq207807;
typedef struct tidobj184015 tidobj184015;
typedef struct tloc207827 tloc207827;
typedef struct trope177009 trope177009;
typedef struct tscope207837 tscope207837;
typedef struct TY207944 TY207944;
typedef struct tinstantiation207833 tinstantiation207833;
typedef struct tstrtable207817 tstrtable207817;
typedef struct tsymseq207815 tsymseq207815;
typedef struct tlib207831 tlib207831;
typedef struct tbasechunk27038 tbasechunk27038;
typedef struct tfreecell27030 tfreecell27030;
typedef struct TY207933 TY207933;
typedef struct tlistentry127022 tlistentry127022;
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
struct  tpasscontext256005  {
  TNimObject Sup;
NIM_BOOL Fromcache;
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
typedef struct {
N_NIMCALL_PTR(void, ClPrc) (vmargs258042* args, void* ClEnv);
void* ClEnv;
} vmcallback258044;
struct TY258270 {
NimStringDesc* Field0;
vmcallback258044 Field1;
};
struct  tctx258048  {
  tpasscontext256005 Sup;
TY258250* Code;
TY181036* Debug;
tnode207813* Globals;
tnode207813* Constants;
ttypeseq207845* Types;
tnode207813* Currentexceptiona;
tnode207813* Currentexceptionb;
NI Exceptioninstr;
pprocHEX3Aobjecttype258230* Prc;
tsym207843* Module;
tnode207813* Callsite;
NU8 Mode;
NU8 Features;
NIM_BOOL Traceactive;
NI Loopiterations;
tlineinfo180338 Comesfromheuristic;
TY258269* Callbacks;
NimStringDesc* Errorflag;
};
struct  tblock258030  {
tsym207843* Label;
TY258211* Fixups;
};
struct TY258237 {
NIM_BOOL Field0;
NU8 Field1;
};
typedef TY258237 TY258234[256];
struct  pprocHEX3Aobjecttype258230  {
TY258231* Blocks;
tsym207843* Sym;
TY258234 Slots;
NI Maxslots;
};
struct TY529942 {
void* Field0;
TY529945* Field1;
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
struct  tidobj184015  {
  TNimObject Sup;
NI Id;
};
struct  tloc207827  {
NU8 K;
NU8 S;
NU16 Flags;
ttype207849* T;
trope177009* R;
trope177009* Heaproot;
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
struct  tstrtable207817  {
NI Counter;
tsymseq207815* Data;
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
struct  vmargs258042  {
NI Ra;
NI Rb;
NI Rc;
void* Slots;
tnode207813* Currentexception;
};
struct TY529945 {
char dummy;
};
typedef NI TY27020[8];
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
struct  tident184021  {
  tidobj184015 Sup;
NimStringDesc* S;
tident184021* Next;
NI H;
};
struct  trope177009  {
  TNimObject Sup;
trope177009* Left;
trope177009* Right;
NI Length;
NimStringDesc* Data;
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
struct  tfreecell27030  {
tfreecell27030* Next;
NI Zerofield;
};
struct TY258250 {
  TGenericSeq Sup;
  NU32 data[SEQ_DECL_SIZE];
};
struct TY181036 {
  TGenericSeq Sup;
  tlineinfo180338 data[SEQ_DECL_SIZE];
};
struct ttypeseq207845 {
  TGenericSeq Sup;
  ttype207849* data[SEQ_DECL_SIZE];
};
struct TY258269 {
  TGenericSeq Sup;
  TY258270 data[SEQ_DECL_SIZE];
};
struct TY258211 {
  TGenericSeq Sup;
  NI data[SEQ_DECL_SIZE];
};
struct TY258231 {
  TGenericSeq Sup;
  tblock258030 data[SEQ_DECL_SIZE];
};
struct tnodeseq207807 {
  TGenericSeq Sup;
  tnode207813* data[SEQ_DECL_SIZE];
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
N_NIMCALL(void, TMP1977)(void* p, NI op);
N_NIMCALL(void, TMP1980)(void* p, NI op);
N_NIMCALL(void, nimGCvisit)(void* d, NI op);
N_NIMCALL(void, TMP1981)(void* p, NI op);
N_NIMCALL(void, TMP1986)(void* p, NI op);
N_NIMCALL(void, TMP1995)(void* p, NI op);
N_NIMCALL(void, TMP1996)(void* p, NI op);
N_NIMCALL(void*, newObj)(TNimType* typ, NI size);
static N_INLINE(void, nimGCunrefNoCycle)(void* p);
static N_INLINE(tcell45947*, usrtocell_49446)(void* usr);
static N_INLINE(void, rtladdzct_51004)(tcell45947* c);
N_NOINLINE(void, addzct_49417)(tcellseq45963* s, tcell45947* c);
N_NIMCALL(void*, newSeqRC1)(TNimType* typ, NI len);
N_NIMCALL(tnode207813*, newnode_208401)(NU8 kind);
static N_INLINE(void, asgnRefNoCycle)(void** dest, void* src);
N_NIMCALL(tlineinfo180338, unknownlineinfo_181027)(void);
static N_INLINE(void, nimGCunref)(void* p);
static N_INLINE(void, decref_51404)(tcell45947* c);
static N_INLINE(NIM_BOOL, canbecycleroot_49467)(tcell45947* c);
static N_INLINE(void, rtladdcycleroot_50223)(tcell45947* c);
N_NOINLINE(void, incl_46667)(tcellset45959* s, tcell45947* cell);
N_NIMCALL(NimStringDesc*, copyStringRC1)(NimStringDesc* src);
N_NIMCALL(NimStringDesc*, copyString)(NimStringDesc* src);
N_NIMCALL(TGenericSeq*, incrSeq)(TGenericSeq* seq, NI elemsize);
static N_INLINE(void, asgnRef)(void** dest, void* src);
static N_INLINE(void, incref_51822)(tcell45947* c);
STRING_LITERAL(TMP2757, "", 0);
extern TNimType NTI256005; /* TPassContext */
TNimType NTI258048; /* TCtx */
extern TNimType NTI124; /* uint32 */
TNimType NTI258250; /* seq[TInstr] */
extern TNimType NTI181036; /* seq[TLineInfo] */
extern TNimType NTI207805; /* PNode */
extern TNimType NTI207845; /* TTypeSeq */
extern TNimType NTI108; /* int */
TNimType NTI258230; /* PProc:ObjectType */
TNimType NTI258030; /* TBlock */
extern TNimType NTI207811; /* PSym */
TNimType NTI258211; /* seq[TPosition] */
TNimType NTI258231; /* seq[TBlock] */
TNimType NTI258237; /* tuple[inUse: bool, kind: TSlotKind] */
extern TNimType NTI138; /* bool */
TNimType NTI258038; /* TSlotKind */
TNimType NTI258234; /* array[0..255, tuple[inUse: bool, kind: TSlotKind]] */
TNimType NTI258040; /* PProc */
TNimType NTI258032; /* TEvalMode */
TNimType NTI258034; /* TSandboxFlag */
TNimType NTI258036; /* TSandboxFlags */
extern TNimType NTI180338; /* TLineInfo */
TNimType NTI258270; /* tuple[key: string, value: VmCallback] */
extern TNimType NTI149; /* string */
TNimType NTI258044; /* (pointer, ref tuple[]) */
extern TNimType NTI153; /* pointer */
extern TNimType NTI529944; /* ref tuple[] */
TNimType NTI258269; /* seq[tuple[key: string, value: VmCallback]] */
TNimType NTI258046; /* PCtx */
extern tgcheap47816 gch_47844;
N_NIMCALL(void, TMP1977)(void* p, NI op) {
	TY258250* a;
	NI LOC1;
	a = (TY258250*)p;
	LOC1 = 0;
	for (LOC1 = 0; LOC1 < a->Sup.len; LOC1++) {
	}
}
N_NIMCALL(void, TMP1980)(void* p, NI op) {
	TY258211* a;
	NI LOC1;
	a = (TY258211*)p;
	LOC1 = 0;
	for (LOC1 = 0; LOC1 < a->Sup.len; LOC1++) {
	}
}
N_NIMCALL(void, TMP1981)(void* p, NI op) {
	TY258231* a;
	NI LOC1;
	a = (TY258231*)p;
	LOC1 = 0;
	for (LOC1 = 0; LOC1 < a->Sup.len; LOC1++) {
	nimGCvisit((void*)a->data[LOC1].Label, op);
	nimGCvisit((void*)a->data[LOC1].Fixups, op);
	}
}
N_NIMCALL(void, TMP1986)(void* p, NI op) {
	pprocHEX3Aobjecttype258230* a;
	NI LOC1;
	a = (pprocHEX3Aobjecttype258230*)p;
	nimGCvisit((void*)(*a).Blocks, op);
	nimGCvisit((void*)(*a).Sym, op);
	LOC1 = 0;
	for (LOC1 = 0; LOC1 < 256; LOC1++) {
	}
}
N_NIMCALL(void, TMP1995)(void* p, NI op) {
	TY258269* a;
	NI LOC1;
	a = (TY258269*)p;
	LOC1 = 0;
	for (LOC1 = 0; LOC1 < a->Sup.len; LOC1++) {
	nimGCvisit((void*)a->data[LOC1].Field0, op);
	nimGCvisit((void*)a->data[LOC1].Field1.ClEnv, op);
	}
}
N_NIMCALL(void, TMP1996)(void* p, NI op) {
	tctx258048* a;
	a = (tctx258048*)p;
	nimGCvisit((void*)(*a).Code, op);
	nimGCvisit((void*)(*a).Debug, op);
	nimGCvisit((void*)(*a).Globals, op);
	nimGCvisit((void*)(*a).Constants, op);
	nimGCvisit((void*)(*a).Types, op);
	nimGCvisit((void*)(*a).Currentexceptiona, op);
	nimGCvisit((void*)(*a).Currentexceptionb, op);
	nimGCvisit((void*)(*a).Prc, op);
	nimGCvisit((void*)(*a).Module, op);
	nimGCvisit((void*)(*a).Callsite, op);
	nimGCvisit((void*)(*a).Callbacks, op);
	nimGCvisit((void*)(*a).Errorflag, op);
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

static N_INLINE(void, nimGCunrefNoCycle)(void* p) {
	tcell45947* c;
	c = usrtocell_49446(p);
	{
		(*c).Refcount -= ((NI) 8);
		if (!((NU64)((*c).Refcount) < (NU64)(((NI) 8)))) goto LA3;
		rtladdzct_51004(c);
	}
	LA3: ;
}

static N_INLINE(void, asgnRefNoCycle)(void** dest, void* src) {
	{
		tcell45947* c;
		if (!!((src == NIM_NIL))) goto LA3;
		c = usrtocell_49446(src);
		(*c).Refcount += ((NI) 8);
	}
	LA3: ;
	{
		tcell45947* c;
		if (!!(((*dest) == NIM_NIL))) goto LA7;
		c = usrtocell_49446((*dest));
		{
			(*c).Refcount -= ((NI) 8);
			if (!((NU64)((*c).Refcount) < (NU64)(((NI) 8)))) goto LA11;
			rtladdzct_51004(c);
		}
		LA11: ;
	}
	LA7: ;
	(*dest) = src;
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

static N_INLINE(void, nimGCunref)(void* p) {
	tcell45947* LOC1;
	LOC1 = 0;
	LOC1 = usrtocell_49446(p);
	decref_51404(LOC1);
}

N_NIMCALL(tctx258048*, newctx_258279)(tsym207843* module) {
	tctx258048* result;
	tctx258048* LOC1;
	pprocHEX3Aobjecttype258230* LOC2;
	NimStringDesc* LOC3;
	result = 0;
	LOC1 = 0;
	LOC1 = (tctx258048*) newObj((&NTI258046), sizeof(tctx258048));
	(*LOC1).Sup.Sup.m_type = (&NTI258048);
	if ((*LOC1).Code) nimGCunrefNoCycle((*LOC1).Code);
	(*LOC1).Code = (TY258250*) newSeqRC1((&NTI258250), 0);
	if ((*LOC1).Debug) nimGCunrefNoCycle((*LOC1).Debug);
	(*LOC1).Debug = (TY181036*) newSeqRC1((&NTI181036), 0);
	asgnRefNoCycle((void**) (&(*LOC1).Globals), newnode_208401(((NU8) 126)));
	asgnRefNoCycle((void**) (&(*LOC1).Constants), newnode_208401(((NU8) 115)));
	if ((*LOC1).Types) nimGCunrefNoCycle((*LOC1).Types);
	(*LOC1).Types = (ttypeseq207845*) newSeqRC1((&NTI207845), 0);
	LOC2 = 0;
	LOC2 = (pprocHEX3Aobjecttype258230*) newObj((&NTI258040), sizeof(pprocHEX3Aobjecttype258230));
	if ((*LOC2).Blocks) nimGCunrefNoCycle((*LOC2).Blocks);
	(*LOC2).Blocks = (TY258231*) newSeqRC1((&NTI258231), 0);
	asgnRefNoCycle((void**) (&(*LOC1).Prc), LOC2);
	asgnRefNoCycle((void**) (&(*LOC1).Module), module);
	(*LOC1).Loopiterations = ((NI) 500000);
	(*LOC1).Comesfromheuristic = unknownlineinfo_181027();
	if ((*LOC1).Callbacks) nimGCunref((*LOC1).Callbacks);
	(*LOC1).Callbacks = (TY258269*) newSeqRC1((&NTI258269), 0);
	LOC3 = 0;
	LOC3 = (*LOC1).Errorflag; (*LOC1).Errorflag = copyStringRC1(((NimStringDesc*) &TMP2757));
	if (LOC3) nimGCunrefNoCycle(LOC3);
	result = LOC1;
	return result;
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

N_NIMCALL(void, registercallback_258410)(tctx258048* c, NimStringDesc* name, vmcallback258044 callback) {
	TY258270 LOC1;
	NimStringDesc* LOC2;
	memset((void*)(&LOC1), 0, sizeof(LOC1));
	LOC1.Field0 = copyString(name);
	LOC1.Field1.ClEnv = callback.ClEnv;
	LOC1.Field1.ClPrc = callback.ClPrc;
	(*c).Callbacks = (TY258269*) incrSeq(&((*c).Callbacks)->Sup, sizeof(TY258270));
	LOC2 = 0;
	LOC2 = (*c).Callbacks->data[(*c).Callbacks->Sup.len-1].Field0; (*c).Callbacks->data[(*c).Callbacks->Sup.len-1].Field0 = copyStringRC1(LOC1.Field0);
	if (LOC2) nimGCunrefNoCycle(LOC2);
	asgnRef((void**) (&(*c).Callbacks->data[(*c).Callbacks->Sup.len-1].Field1.ClEnv), LOC1.Field1.ClEnv);
	(*c).Callbacks->data[(*c).Callbacks->Sup.len-1].Field1.ClPrc = LOC1.Field1.ClPrc;
}

N_NIMCALL(void, refresh_258381)(tctx258048* c, tsym207843* module) {
	pprocHEX3Aobjecttype258230* LOC1;
	asgnRefNoCycle((void**) (&(*c).Module), module);
	LOC1 = 0;
	LOC1 = (pprocHEX3Aobjecttype258230*) newObj((&NTI258040), sizeof(pprocHEX3Aobjecttype258230));
	if ((*LOC1).Blocks) nimGCunrefNoCycle((*LOC1).Blocks);
	(*LOC1).Blocks = (TY258231*) newSeqRC1((&NTI258231), 0);
	asgnRefNoCycle((void**) (&(*c).Prc), LOC1);
	(*c).Loopiterations = ((NI) 500000);
}
NIM_EXTERNC N_NOINLINE(void, compiler_vmdefInit)(void) {
}

NIM_EXTERNC N_NOINLINE(void, compiler_vmdefDatInit)(void) {
static TNimNode* TMP1976[18];
static TNimNode* TMP1978[4];
static TNimNode* TMP1979[2];
static TNimNode* TMP1982[2];
static TNimNode* TMP1983[9];
NI TMP1985;
static char* NIM_CONST TMP1984[9] = {
"slotEmpty", 
"slotFixedVar", 
"slotFixedLet", 
"slotTempUnknown", 
"slotTempInt", 
"slotTempFloat", 
"slotTempStr", 
"slotTempComplex", 
"slotTempPerm"};
static TNimNode* TMP1987[5];
NI TMP1989;
static char* NIM_CONST TMP1988[5] = {
"emRepl", 
"emConst", 
"emOptimize", 
"emStaticExpr", 
"emStaticStmt"};
static TNimNode* TMP1990[3];
NI TMP1992;
static char* NIM_CONST TMP1991[3] = {
"allowCast", 
"allowFFI", 
"allowInfiniteLoops"};
static TNimNode* TMP1993[2];
static TNimNode* TMP1994[2];
static TNimNode TMP852[57];
NTI258048.size = sizeof(tctx258048);
NTI258048.kind = 17;
NTI258048.base = (&NTI256005);
TMP1976[0] = &TMP852[1];
NTI258250.size = sizeof(TY258250*);
NTI258250.kind = 24;
NTI258250.base = (&NTI124);
NTI258250.flags = 2;
NTI258250.marker = TMP1977;
TMP852[1].kind = 1;
TMP852[1].offset = offsetof(tctx258048, Code);
TMP852[1].typ = (&NTI258250);
TMP852[1].name = "code";
TMP1976[1] = &TMP852[2];
TMP852[2].kind = 1;
TMP852[2].offset = offsetof(tctx258048, Debug);
TMP852[2].typ = (&NTI181036);
TMP852[2].name = "debug";
TMP1976[2] = &TMP852[3];
TMP852[3].kind = 1;
TMP852[3].offset = offsetof(tctx258048, Globals);
TMP852[3].typ = (&NTI207805);
TMP852[3].name = "globals";
TMP1976[3] = &TMP852[4];
TMP852[4].kind = 1;
TMP852[4].offset = offsetof(tctx258048, Constants);
TMP852[4].typ = (&NTI207805);
TMP852[4].name = "constants";
TMP1976[4] = &TMP852[5];
TMP852[5].kind = 1;
TMP852[5].offset = offsetof(tctx258048, Types);
TMP852[5].typ = (&NTI207845);
TMP852[5].name = "types";
TMP1976[5] = &TMP852[6];
TMP852[6].kind = 1;
TMP852[6].offset = offsetof(tctx258048, Currentexceptiona);
TMP852[6].typ = (&NTI207805);
TMP852[6].name = "currentExceptionA";
TMP1976[6] = &TMP852[7];
TMP852[7].kind = 1;
TMP852[7].offset = offsetof(tctx258048, Currentexceptionb);
TMP852[7].typ = (&NTI207805);
TMP852[7].name = "currentExceptionB";
TMP1976[7] = &TMP852[8];
TMP852[8].kind = 1;
TMP852[8].offset = offsetof(tctx258048, Exceptioninstr);
TMP852[8].typ = (&NTI108);
TMP852[8].name = "exceptionInstr";
TMP1976[8] = &TMP852[9];
NTI258230.size = sizeof(pprocHEX3Aobjecttype258230);
NTI258230.kind = 18;
NTI258230.base = 0;
NTI258230.flags = 2;
TMP1978[0] = &TMP852[11];
NTI258030.size = sizeof(tblock258030);
NTI258030.kind = 18;
NTI258030.base = 0;
NTI258030.flags = 2;
TMP1979[0] = &TMP852[13];
TMP852[13].kind = 1;
TMP852[13].offset = offsetof(tblock258030, Label);
TMP852[13].typ = (&NTI207811);
TMP852[13].name = "label";
TMP1979[1] = &TMP852[14];
NTI258211.size = sizeof(TY258211*);
NTI258211.kind = 24;
NTI258211.base = (&NTI108);
NTI258211.flags = 2;
NTI258211.marker = TMP1980;
TMP852[14].kind = 1;
TMP852[14].offset = offsetof(tblock258030, Fixups);
TMP852[14].typ = (&NTI258211);
TMP852[14].name = "fixups";
TMP852[12].len = 2; TMP852[12].kind = 2; TMP852[12].sons = &TMP1979[0];
NTI258030.node = &TMP852[12];
NTI258231.size = sizeof(TY258231*);
NTI258231.kind = 24;
NTI258231.base = (&NTI258030);
NTI258231.flags = 2;
NTI258231.marker = TMP1981;
TMP852[11].kind = 1;
TMP852[11].offset = offsetof(pprocHEX3Aobjecttype258230, Blocks);
TMP852[11].typ = (&NTI258231);
TMP852[11].name = "blocks";
TMP1978[1] = &TMP852[15];
TMP852[15].kind = 1;
TMP852[15].offset = offsetof(pprocHEX3Aobjecttype258230, Sym);
TMP852[15].typ = (&NTI207811);
TMP852[15].name = "sym";
TMP1978[2] = &TMP852[16];
NTI258237.size = sizeof(TY258237);
NTI258237.kind = 18;
NTI258237.base = 0;
NTI258237.flags = 3;
TMP1982[0] = &TMP852[18];
TMP852[18].kind = 1;
TMP852[18].offset = offsetof(TY258237, Field0);
TMP852[18].typ = (&NTI138);
TMP852[18].name = "Field0";
TMP1982[1] = &TMP852[19];
NTI258038.size = sizeof(NU8);
NTI258038.kind = 14;
NTI258038.base = 0;
NTI258038.flags = 3;
for (TMP1985 = 0; TMP1985 < 9; TMP1985++) {
TMP852[TMP1985+20].kind = 1;
TMP852[TMP1985+20].offset = TMP1985;
TMP852[TMP1985+20].name = TMP1984[TMP1985];
TMP1983[TMP1985] = &TMP852[TMP1985+20];
}
TMP852[29].len = 9; TMP852[29].kind = 2; TMP852[29].sons = &TMP1983[0];
NTI258038.node = &TMP852[29];
TMP852[19].kind = 1;
TMP852[19].offset = offsetof(TY258237, Field1);
TMP852[19].typ = (&NTI258038);
TMP852[19].name = "Field1";
TMP852[17].len = 2; TMP852[17].kind = 2; TMP852[17].sons = &TMP1982[0];
NTI258237.node = &TMP852[17];
NTI258234.size = sizeof(TY258234);
NTI258234.kind = 16;
NTI258234.base = (&NTI258237);
NTI258234.flags = 3;
TMP852[16].kind = 1;
TMP852[16].offset = offsetof(pprocHEX3Aobjecttype258230, Slots);
TMP852[16].typ = (&NTI258234);
TMP852[16].name = "slots";
TMP1978[3] = &TMP852[30];
TMP852[30].kind = 1;
TMP852[30].offset = offsetof(pprocHEX3Aobjecttype258230, Maxslots);
TMP852[30].typ = (&NTI108);
TMP852[30].name = "maxSlots";
TMP852[10].len = 4; TMP852[10].kind = 2; TMP852[10].sons = &TMP1978[0];
NTI258230.node = &TMP852[10];
NTI258040.size = sizeof(pprocHEX3Aobjecttype258230*);
NTI258040.kind = 22;
NTI258040.base = (&NTI258230);
NTI258040.flags = 2;
NTI258040.marker = TMP1986;
TMP852[9].kind = 1;
TMP852[9].offset = offsetof(tctx258048, Prc);
TMP852[9].typ = (&NTI258040);
TMP852[9].name = "prc";
TMP1976[9] = &TMP852[31];
TMP852[31].kind = 1;
TMP852[31].offset = offsetof(tctx258048, Module);
TMP852[31].typ = (&NTI207811);
TMP852[31].name = "module";
TMP1976[10] = &TMP852[32];
TMP852[32].kind = 1;
TMP852[32].offset = offsetof(tctx258048, Callsite);
TMP852[32].typ = (&NTI207805);
TMP852[32].name = "callsite";
TMP1976[11] = &TMP852[33];
NTI258032.size = sizeof(NU8);
NTI258032.kind = 14;
NTI258032.base = 0;
NTI258032.flags = 3;
for (TMP1989 = 0; TMP1989 < 5; TMP1989++) {
TMP852[TMP1989+34].kind = 1;
TMP852[TMP1989+34].offset = TMP1989;
TMP852[TMP1989+34].name = TMP1988[TMP1989];
TMP1987[TMP1989] = &TMP852[TMP1989+34];
}
TMP852[39].len = 5; TMP852[39].kind = 2; TMP852[39].sons = &TMP1987[0];
NTI258032.node = &TMP852[39];
TMP852[33].kind = 1;
TMP852[33].offset = offsetof(tctx258048, Mode);
TMP852[33].typ = (&NTI258032);
TMP852[33].name = "mode";
TMP1976[12] = &TMP852[40];
NTI258034.size = sizeof(NU8);
NTI258034.kind = 14;
NTI258034.base = 0;
NTI258034.flags = 3;
for (TMP1992 = 0; TMP1992 < 3; TMP1992++) {
TMP852[TMP1992+41].kind = 1;
TMP852[TMP1992+41].offset = TMP1992;
TMP852[TMP1992+41].name = TMP1991[TMP1992];
TMP1990[TMP1992] = &TMP852[TMP1992+41];
}
TMP852[44].len = 3; TMP852[44].kind = 2; TMP852[44].sons = &TMP1990[0];
NTI258034.node = &TMP852[44];
NTI258036.size = sizeof(NU8);
NTI258036.kind = 19;
NTI258036.base = (&NTI258034);
NTI258036.flags = 3;
TMP852[45].len = 0; TMP852[45].kind = 0;
NTI258036.node = &TMP852[45];
TMP852[40].kind = 1;
TMP852[40].offset = offsetof(tctx258048, Features);
TMP852[40].typ = (&NTI258036);
TMP852[40].name = "features";
TMP1976[13] = &TMP852[46];
TMP852[46].kind = 1;
TMP852[46].offset = offsetof(tctx258048, Traceactive);
TMP852[46].typ = (&NTI138);
TMP852[46].name = "traceActive";
TMP1976[14] = &TMP852[47];
TMP852[47].kind = 1;
TMP852[47].offset = offsetof(tctx258048, Loopiterations);
TMP852[47].typ = (&NTI108);
TMP852[47].name = "loopIterations";
TMP1976[15] = &TMP852[48];
TMP852[48].kind = 1;
TMP852[48].offset = offsetof(tctx258048, Comesfromheuristic);
TMP852[48].typ = (&NTI180338);
TMP852[48].name = "comesFromHeuristic";
TMP1976[16] = &TMP852[49];
NTI258270.size = sizeof(TY258270);
NTI258270.kind = 18;
NTI258270.base = 0;
TMP1993[0] = &TMP852[51];
TMP852[51].kind = 1;
TMP852[51].offset = offsetof(TY258270, Field0);
TMP852[51].typ = (&NTI149);
TMP852[51].name = "Field0";
TMP1993[1] = &TMP852[52];
NTI258044.size = sizeof(TY529942);
NTI258044.kind = 18;
NTI258044.base = 0;
NTI258044.flags = 2;
TMP1994[0] = &TMP852[54];
TMP852[54].kind = 1;
TMP852[54].offset = offsetof(TY529942, Field0);
TMP852[54].typ = (&NTI153);
TMP852[54].name = "Field0";
TMP1994[1] = &TMP852[55];
TMP852[55].kind = 1;
TMP852[55].offset = offsetof(TY529942, Field1);
TMP852[55].typ = (&NTI529944);
TMP852[55].name = "Field1";
TMP852[53].len = 2; TMP852[53].kind = 2; TMP852[53].sons = &TMP1994[0];
NTI258044.node = &TMP852[53];
TMP852[52].kind = 1;
TMP852[52].offset = offsetof(TY258270, Field1);
TMP852[52].typ = (&NTI258044);
TMP852[52].name = "Field1";
TMP852[50].len = 2; TMP852[50].kind = 2; TMP852[50].sons = &TMP1993[0];
NTI258270.node = &TMP852[50];
NTI258269.size = sizeof(TY258269*);
NTI258269.kind = 24;
NTI258269.base = (&NTI258270);
NTI258269.marker = TMP1995;
TMP852[49].kind = 1;
TMP852[49].offset = offsetof(tctx258048, Callbacks);
TMP852[49].typ = (&NTI258269);
TMP852[49].name = "callbacks";
TMP1976[17] = &TMP852[56];
TMP852[56].kind = 1;
TMP852[56].offset = offsetof(tctx258048, Errorflag);
TMP852[56].typ = (&NTI149);
TMP852[56].name = "errorFlag";
TMP852[0].len = 18; TMP852[0].kind = 2; TMP852[0].sons = &TMP1976[0];
NTI258048.node = &TMP852[0];
NTI258046.size = sizeof(tctx258048*);
NTI258046.kind = 22;
NTI258046.base = (&NTI258048);
NTI258046.marker = TMP1996;
}

