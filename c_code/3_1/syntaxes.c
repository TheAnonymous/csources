/* Generated by Nim Compiler v0.10.0 */
/*   (c) 2014 Andreas Rumpf */
/* The generated code is subject to the original license. */
#define NIM_INTBITS 32
#include "nimbase.h"

#include <string.h>

#include <stdio.h>
typedef struct tnode224819 tnode224819;
typedef struct tparsers258035 tparsers258035;
typedef struct tparser243205 tparser243205;
typedef struct tlexer215186 tlexer215186;
typedef struct tbaselexer213024 tbaselexer213024;
typedef struct TNimObject TNimObject;
typedef struct TNimType TNimType;
typedef struct TNimNode TNimNode;
typedef struct tllstream211204 tllstream211204;
typedef struct ttoken215184 ttoken215184;
typedef struct tident200021 tident200021;
typedef struct NimStringDesc NimStringDesc;
typedef struct TGenericSeq TGenericSeq;
typedef struct ttype224855 ttype224855;
typedef struct tlineinfo195539 tlineinfo195539;
typedef struct tsym224849 tsym224849;
typedef struct tnodeseq224813 tnodeseq224813;
typedef struct tidobj200015 tidobj200015;
typedef struct ttypeseq224851 ttypeseq224851;
typedef struct tloc224833 tloc224833;
typedef struct trope177009 trope177009;
typedef struct tscope224843 tscope224843;
typedef struct TY224950 TY224950;
typedef struct tinstantiation224839 tinstantiation224839;
typedef struct tstrtable224823 tstrtable224823;
typedef struct tsymseq224821 tsymseq224821;
typedef struct tlib224837 tlib224837;
typedef struct TY224939 TY224939;
typedef struct tlistentry127022 tlistentry127022;
typedef N_NIMCALL_PTR(void, TY3089) (void* p, NI op);
typedef N_NIMCALL_PTR(void*, TY3094) (void* p);
struct  TNimType  {
NI size;
NU8 kind;
NU8 flags;
TNimType* base;
TNimNode* node;
void* finalizer;
TY3089 marker;
TY3094 deepcopy;
};
struct  TNimObject  {
TNimType* m_type;
};
struct  tbaselexer213024  {
  TNimObject Sup;
NI Bufpos;
NCSTRING Buf;
NI Buflen;
tllstream211204* Stream;
NI Linenumber;
NI Sentinel;
NI Linestart;
};
struct  tlexer215186  {
  tbaselexer213024 Sup;
NI32 Fileidx;
NI Indentahead;
NI Currlineindent;
NIM_BOOL Strongspaces;
};
struct  TGenericSeq  {
NI len;
NI reserved;
};
struct  NimStringDesc  {
  TGenericSeq Sup;
NIM_CHAR data[SEQ_DECL_SIZE];
};
struct  ttoken215184  {
NU8 Toktype;
NI Indent;
tident200021* Ident;
NI64 Inumber;
NF Fnumber;
NU8 Base;
NI8 Strongspacea;
NI8 Strongspaceb;
NimStringDesc* Literal;
NI Line;
NI Col;
};
struct  tparser243205  {
NI Currind;
NIM_BOOL Firsttok;
NIM_BOOL Strongspaces;
tlexer215186 Lex;
ttoken215184 Tok;
NI Inpragma;
NI Insemistmtlist;
};
struct  tparsers258035  {
NU8 Skin;
tparser243205 Parser;
};
struct  TNimNode  {
NU8 kind;
NI offset;
TNimType* typ;
NCSTRING name;
NI len;
TNimNode** sons;
};
struct  tlineinfo195539  {
NI16 Line;
NI16 Col;
NI32 Fileindex;
};
struct  tnode224819  {
ttype224855* Typ;
tlineinfo195539 Info;
NU16 Flags;
NU8 Kind;
union {
struct {NI64 Intval;
} S1;
struct {NF Floatval;
} S2;
struct {NimStringDesc* Strval;
} S3;
struct {tsym224849* Sym;
} S4;
struct {tident200021* Ident;
} S5;
struct {tnodeseq224813* Sons;
} S6;
} kindU;
NimStringDesc* Comment;
};
typedef NimStringDesc* TY258026[4];
typedef NimStringDesc* TY258020[4];
struct  tidobj200015  {
  TNimObject Sup;
NI Id;
};
struct  tident200021  {
  tidobj200015 Sup;
NimStringDesc* S;
tident200021* Next;
NI H;
};
typedef NimStringDesc* TY258532[1];
struct  tllstream211204  {
  TNimObject Sup;
NU8 Kind;
FILE* F;
NimStringDesc* S;
NI Rd;
NI Wr;
NI Lineoffset;
};
struct  tloc224833  {
NU8 K;
NU8 S;
NU8 Flags;
ttype224855* T;
trope177009* R;
trope177009* Heaproot;
};
struct  ttype224855  {
  tidobj200015 Sup;
NU8 Kind;
NU8 Callconv;
NU32 Flags;
ttypeseq224851* Sons;
tnode224819* N;
tsym224849* Owner;
tsym224849* Sym;
tsym224849* Destructor;
tsym224849* Deepcopy;
NI64 Size;
NI16 Align;
NI16 Locklevel;
tloc224833 Loc;
};
struct  tstrtable224823  {
NI Counter;
tsymseq224821* Data;
};
struct  tsym224849  {
  tidobj200015 Sup;
NU8 Kind;
union {
struct {ttypeseq224851* Typeinstcache;
tscope224843* Typscope;
} S1;
struct {TY224950* Procinstcache;
tscope224843* Scope;
} S2;
struct {TY224950* Usedgenerics;
tstrtable224823 Tab;
} S3;
struct {tsym224849* Guard;
} S4;
} kindU;
NU16 Magic;
ttype224855* Typ;
tident200021* Name;
tlineinfo195539 Info;
tsym224849* Owner;
NU32 Flags;
tnode224819* Ast;
NU32 Options;
NI Position;
NI Offset;
tloc224833 Loc;
tlib224837* Annex;
tnode224819* Constraint;
};
struct  trope177009  {
  TNimObject Sup;
trope177009* Left;
trope177009* Right;
NI Length;
NimStringDesc* Data;
};
struct  tscope224843  {
NI Depthlevel;
tstrtable224823 Symbols;
tnodeseq224813* Usingsyms;
tscope224843* Parent;
};
struct  tinstantiation224839  {
tsym224849* Sym;
ttypeseq224851* Concretetypes;
TY224939* Usedby;
};
struct  tlistentry127022  {
  TNimObject Sup;
tlistentry127022* Prev;
tlistentry127022* Next;
};
struct  tlib224837  {
  tlistentry127022 Sup;
NU8 Kind;
NIM_BOOL Generated;
NIM_BOOL Isoverriden;
trope177009* Name;
tnode224819* Path;
};
struct tnodeseq224813 {
  TGenericSeq Sup;
  tnode224819* data[SEQ_DECL_SIZE];
};
struct ttypeseq224851 {
  TGenericSeq Sup;
  ttype224855* data[SEQ_DECL_SIZE];
};
struct TY224950 {
  TGenericSeq Sup;
  tinstantiation224839* data[SEQ_DECL_SIZE];
};
struct tsymseq224821 {
  TGenericSeq Sup;
  tsym224849* data[SEQ_DECL_SIZE];
};
struct TY224939 {
  TGenericSeq Sup;
  NI32 data[SEQ_DECL_SIZE];
};
N_NIMCALL(void, objectInit)(void* dest, TNimType* typ);
N_NIMCALL(NimStringDesc*, tofullpath_197037)(NI32 fileidx);
N_NIMCALL(NIM_BOOL, open_12603)(FILE** f, NimStringDesc* filename, NU8 mode, NI bufsize);
N_NIMCALL(void, rawmessage_197733)(NU16 msg, NimStringDesc* arg);
N_NIMCALL(void, openparsers_258047)(tparsers258035* p, NI32 fileidx, tllstream211204* inputstream);
N_NIMCALL(tnode224819*, parsepipe_258177)(NimStringDesc* filename, tllstream211204* inputstream);
N_NIMCALL(tllstream211204*, llstreamopen_211233)(NimStringDesc* filename, NU8 mode);
N_NIMCALL(NimStringDesc*, rawNewString)(NI space);
N_NIMCALL(NimStringDesc*, rawNewString)(NI cap);
N_NIMCALL(NIM_BOOL, llstreamreadline_211264)(tllstream211204* s, NimStringDesc** line);
N_NIMCALL(NI, utf8bom_258123)(NimStringDesc* s);
N_NIMCALL(NIM_BOOL, containsshebang_258133)(NimStringDesc* s, NI i);
N_NIMCALL(void, openparser_243425)(tparser243205* p, NimStringDesc* filename, tllstream211204* inputstream, NIM_BOOL strongspaces);
N_NIMCALL(tllstream211204*, llstreamopen_211220)(NimStringDesc* data);
N_NIMCALL(NimStringDesc*, copyStr)(NimStringDesc* s, NI start);
N_NIMCALL(NimStringDesc*, copyStr)(NimStringDesc* s, NI first);
N_NIMCALL(tnode224819*, parseall_243216)(tparser243205* p);
N_NIMCALL(void, closeparser_243223)(tparser243205* p);
N_NIMCALL(void, llstreamclose_211250)(tllstream211204* s);
N_NIMCALL(tllstream211204*, evalpipe_258546)(tparsers258035* p, tnode224819* n, NimStringDesc* filename, tllstream211204* start);
N_NIMCALL(NIM_BOOL, identeq_200493)(tident200021* id, NimStringDesc* name);
N_NIMCALL(tllstream211204*, applyfilter_258507)(tparsers258035* p, tnode224819* n, NimStringDesc* filename, tllstream211204* stdin_258513);
N_NIMCALL(tident200021*, getcallee_258410)(tnode224819* n);
N_NIMCALL(NimStringDesc*, rendertree_249057)(tnode224819* n, NU8 renderflags);
N_NIMCALL(NU8, getfilter_258260)(tident200021* ident);
N_NIMCALL(NU8, getparser_258335)(tident200021* ident);
N_NIMCALL(tllstream211204*, filtertmpl_257009)(tllstream211204* stdin_257011, NimStringDesc* filename, tnode224819* call);
N_NIMCALL(tllstream211204*, filterstrip_256012)(tllstream211204* stdin_256014, NimStringDesc* filename, tnode224819* call);
N_NIMCALL(tllstream211204*, filterreplace_256004)(tllstream211204* stdin_256006, NimStringDesc* filename, tnode224819* call);
N_NIMCALL(void, rawmessage_197643)(NU16 msg, NimStringDesc** args, NI argsLen0);
N_NIMCALL(void, msgwriteln_197236)(NimStringDesc* s);
N_NIMCALL(void, openparser_243410)(tparser243205* p, NI32 fileidx, tllstream211204* inputstream, NIM_BOOL strongspaces);
N_NIMCALL(tllstream211204*, llstreamopen_211226)(FILE** f);
N_NIMCALL(tnode224819*, parseall_258063)(tparsers258035* p);
N_NIMCALL(tnode224819*, parseall_248009)(tparser243205* p);
N_NIMCALL(void, internalerror_197989)(NimStringDesc* errmsg);
N_NIMCALL(void, closeparsers_258056)(tparsers258035* p);
N_NIMCALL(tnode224819*, parsetoplevelstmt_243230)(tparser243205* p);
N_NIMCALL(tnode224819*, parsetoplevelstmt_248020)(tparser243205* p);
STRING_LITERAL(TMP1196, "|", 1);
STRING_LITERAL(TMP1305, "none", 4);
STRING_LITERAL(TMP1306, "stdtmpl", 7);
STRING_LITERAL(TMP1307, "replace", 7);
STRING_LITERAL(TMP1308, "strip", 5);
NIM_CONST TY258026 filternames_258025 = {((NimStringDesc*) &TMP1305),
((NimStringDesc*) &TMP1306),
((NimStringDesc*) &TMP1307),
((NimStringDesc*) &TMP1308)}
;
STRING_LITERAL(TMP1309, "standard", 8);
STRING_LITERAL(TMP1310, "strongspaces", 12);
STRING_LITERAL(TMP1311, "braces", 6);
STRING_LITERAL(TMP1312, "endx", 4);
NIM_CONST TY258020 parsernames_258019 = {((NimStringDesc*) &TMP1309),
((NimStringDesc*) &TMP1310),
((NimStringDesc*) &TMP1311),
((NimStringDesc*) &TMP1312)}
;
STRING_LITERAL(TMP1343, "parser to implement", 19);
TNimType NTI258035; /* TParsers */
TNimType NTI258007; /* TParserKind */
extern TNimType NTI243205; /* TParser */
extern tnode224819* emptynode_225738;
extern NI gverbosity_169127;

N_NIMCALL(NI, utf8bom_258123)(NimStringDesc* s) {
	NI result;
	result = 0;
	{
		NIM_BOOL LOC3;
		NIM_BOOL LOC4;
		LOC3 = 0;
		LOC4 = 0;
		LOC4 = ((NU8)(s->data[0]) == (NU8)(239));
		if (!(LOC4)) goto LA5;
		LOC4 = ((NU8)(s->data[1]) == (NU8)(187));
		LA5: ;
		LOC3 = LOC4;
		if (!(LOC3)) goto LA6;
		LOC3 = ((NU8)(s->data[2]) == (NU8)(191));
		LA6: ;
		if (!LOC3) goto LA7;
		result = 3;
	}
	goto LA1;
	LA7: ;
	{
		result = 0;
	}
	LA1: ;
	return result;
}

N_NIMCALL(NIM_BOOL, containsshebang_258133)(NimStringDesc* s, NI i) {
	NIM_BOOL result;
	result = 0;
	{
		NIM_BOOL LOC3;
		NI j;
		LOC3 = 0;
		LOC3 = ((NU8)(s->data[i]) == (NU8)(35));
		if (!(LOC3)) goto LA4;
		LOC3 = ((NU8)(s->data[(NI32)(i + 1)]) == (NU8)(33));
		LA4: ;
		if (!LOC3) goto LA5;
		j = (NI32)(i + 2);
		{
			while (1) {
				if (!(((NU8)(s->data[j])) == ((NU8)(32)) || ((NU8)(s->data[j])) == ((NU8)(9)) || ((NU8)(s->data[j])) == ((NU8)(11)) || ((NU8)(s->data[j])) == ((NU8)(13)) || ((NU8)(s->data[j])) == ((NU8)(10)) || ((NU8)(s->data[j])) == ((NU8)(12)))) goto LA8;
				j += 1;
			} LA8: ;
		}
		result = ((NU8)(s->data[j]) == (NU8)(47));
	}
	LA5: ;
	return result;
}

N_NIMCALL(tnode224819*, parsepipe_258177)(NimStringDesc* filename, tllstream211204* inputstream) {
	tnode224819* result;
	tllstream211204* s;
	result = 0;
	result = emptynode_225738;
	s = llstreamopen_211233(filename, ((NU8) 0));
	{
		NimStringDesc* line;
		NIM_BOOL LOC5;
		NI i;
		if (!!((s == NIM_NIL))) goto LA3;
		line = rawNewString(80);
		LOC5 = 0;
		LOC5 = llstreamreadline_211264(s, &line);
		i = utf8bom_258123(line);
		{
			NIM_BOOL LOC8;
			NIM_BOOL LOC11;
			LOC8 = 0;
			LOC8 = containsshebang_258133(line, i);
			if (!LOC8) goto LA9;
			LOC11 = 0;
			LOC11 = llstreamreadline_211264(s, &line);
			i = 0;
		}
		LA9: ;
		{
			NIM_BOOL LOC14;
			tparser243205 q;
			NimStringDesc* LOC20;
			tllstream211204* LOC21;
			LOC14 = 0;
			LOC14 = ((NU8)(line->data[i]) == (NU8)(35));
			if (!(LOC14)) goto LA15;
			LOC14 = ((NU8)(line->data[(NI32)(i + 1)]) == (NU8)(33));
			LA15: ;
			if (!LOC14) goto LA16;
			i += 2;
			{
				while (1) {
					if (!(((NU8)(line->data[i])) == ((NU8)(32)) || ((NU8)(line->data[i])) == ((NU8)(9)) || ((NU8)(line->data[i])) == ((NU8)(11)) || ((NU8)(line->data[i])) == ((NU8)(13)) || ((NU8)(line->data[i])) == ((NU8)(10)) || ((NU8)(line->data[i])) == ((NU8)(12)))) goto LA19;
					i += 1;
				} LA19: ;
			}
			memset((void*)&q, 0, sizeof(q));
			objectInit(&q, (&NTI243205));
			LOC20 = 0;
			LOC20 = copyStr(line, i);
			LOC21 = 0;
			LOC21 = llstreamopen_211220(LOC20);
			openparser_243425(&q, filename, LOC21, NIM_FALSE);
			result = parseall_243216(&q);
			closeparser_243223(&q);
		}
		LA16: ;
		llstreamclose_211250(s);
	}
	LA3: ;
	return result;
}

N_NIMCALL(tident200021*, getcallee_258410)(tnode224819* n) {
	tident200021* result;
	result = 0;
	{
		NIM_BOOL LOC3;
		LOC3 = 0;
		LOC3 = ((*n).Kind == ((NU8) 27) || (*n).Kind == ((NU8) 29) || (*n).Kind == ((NU8) 30) || (*n).Kind == ((NU8) 31) || (*n).Kind == ((NU8) 26) || (*n).Kind == ((NU8) 28) || (*n).Kind == ((NU8) 32));
		if (!(LOC3)) goto LA4;
		LOC3 = ((*(*n).kindU.S6.Sons->data[0]).Kind == ((NU8) 2));
		LA4: ;
		if (!LOC3) goto LA5;
		result = (*(*n).kindU.S6.Sons->data[0]).kindU.S5.Ident;
	}
	goto LA1;
	LA5: ;
	{
		if (!((*n).Kind == ((NU8) 2))) goto LA8;
		result = (*n).kindU.S5.Ident;
	}
	goto LA1;
	LA8: ;
	{
		NimStringDesc* LOC11;
		LOC11 = 0;
		LOC11 = rendertree_249057(n, 0);
		rawmessage_197733(((NU16) 163), LOC11);
	}
	LA1: ;
	return result;
}

N_NIMCALL(NU8, getfilter_258260)(tident200021* ident) {
	NU8 result;
	result = 0;
	{
		NU8 i_258312;
		NU8 res_258318;
		i_258312 = 0;
		res_258318 = ((NU8) 0);
		{
			while (1) {
				if (!(res_258318 <= ((NU8) 3))) goto LA3;
				i_258312 = res_258318;
				{
					NIM_BOOL LOC6;
					LOC6 = 0;
					LOC6 = identeq_200493(ident, filternames_258025[(i_258312)- 0]);
					if (!LOC6) goto LA7;
					result = i_258312;
					goto BeforeRet;
				}
				LA7: ;
				res_258318 += 1;
			} LA3: ;
		}
	}
	result = ((NU8) 0);
	BeforeRet: ;
	return result;
}

N_NIMCALL(NU8, getparser_258335)(tident200021* ident) {
	NU8 result;
	result = 0;
	{
		NU8 i_258387;
		NU8 res_258393;
		i_258387 = 0;
		res_258393 = ((NU8) 0);
		{
			while (1) {
				if (!(res_258393 <= ((NU8) 3))) goto LA3;
				i_258387 = res_258393;
				{
					NIM_BOOL LOC6;
					LOC6 = 0;
					LOC6 = identeq_200493(ident, parsernames_258019[(i_258387)- 0]);
					if (!LOC6) goto LA7;
					result = i_258387;
					goto BeforeRet;
				}
				LA7: ;
				res_258393 += 1;
			} LA3: ;
		}
	}
	rawmessage_197733(((NU16) 30), (*ident).S);
	BeforeRet: ;
	return result;
}

N_NIMCALL(tllstream211204*, applyfilter_258507)(tparsers258035* p, tnode224819* n, NimStringDesc* filename, tllstream211204* stdin_258513) {
	tllstream211204* result;
	tident200021* ident;
	NU8 f;
	result = 0;
	ident = getcallee_258410(n);
	f = getfilter_258260(ident);
	switch (f) {
	case ((NU8) 0):
	{
		(*p).Skin = getparser_258335(ident);
		result = stdin_258513;
	}
	break;
	case ((NU8) 1):
	{
		result = filtertmpl_257009(stdin_258513, filename, n);
	}
	break;
	case ((NU8) 3):
	{
		result = filterstrip_256012(stdin_258513, filename, n);
	}
	break;
	case ((NU8) 2):
	{
		result = filterreplace_256004(stdin_258513, filename, n);
	}
	break;
	}
	{
		if (!!((f == ((NU8) 0)))) goto LA7;
		{
			TY258532 LOC13;
			TY258532 LOC14;
			if (!(2 <= gverbosity_169127)) goto LA11;
			memset((void*)LOC13, 0, sizeof(LOC13));
			rawmessage_197643(((NU16) 267), LOC13, 0);
			msgwriteln_197236((*result).S);
			memset((void*)LOC14, 0, sizeof(LOC14));
			rawmessage_197643(((NU16) 268), LOC14, 0);
		}
		LA11: ;
	}
	LA7: ;
	return result;
}

N_NIMCALL(tllstream211204*, evalpipe_258546)(tparsers258035* p, tnode224819* n, NimStringDesc* filename, tllstream211204* start) {
	tllstream211204* result;
	result = 0;
	result = start;
	{
		if (!((*n).Kind == ((NU8) 1))) goto LA3;
		goto BeforeRet;
	}
	LA3: ;
	{
		NIM_BOOL LOC7;
		NIM_BOOL LOC8;
		LOC7 = 0;
		LOC8 = 0;
		LOC8 = ((*n).Kind == ((NU8) 29));
		if (!(LOC8)) goto LA9;
		LOC8 = ((*(*n).kindU.S6.Sons->data[0]).Kind == ((NU8) 2));
		LA9: ;
		LOC7 = LOC8;
		if (!(LOC7)) goto LA10;
		LOC7 = identeq_200493((*(*n).kindU.S6.Sons->data[0]).kindU.S5.Ident, ((NimStringDesc*) &TMP1196));
		LA10: ;
		if (!LOC7) goto LA11;
		{
			NI i_258635;
			NI res_258713;
			i_258635 = 0;
			res_258713 = 1;
			{
				while (1) {
					if (!(res_258713 <= 2)) goto LA15;
					i_258635 = res_258713;
					{
						if (!((*(*n).kindU.S6.Sons->data[i_258635]).Kind == ((NU8) 29))) goto LA18;
						result = evalpipe_258546(p, (*n).kindU.S6.Sons->data[i_258635], filename, result);
					}
					goto LA16;
					LA18: ;
					{
						result = applyfilter_258507(p, (*n).kindU.S6.Sons->data[i_258635], filename, result);
					}
					LA16: ;
					res_258713 += 1;
				} LA15: ;
			}
		}
	}
	goto LA5;
	LA11: ;
	{
		if (!((*n).Kind == ((NU8) 114))) goto LA22;
		result = evalpipe_258546(p, (*n).kindU.S6.Sons->data[0], filename, result);
	}
	goto LA5;
	LA22: ;
	{
		result = applyfilter_258507(p, n, filename, result);
	}
	LA5: ;
	BeforeRet: ;
	return result;
}

N_NIMCALL(void, openparsers_258047)(tparsers258035* p, NI32 fileidx, tllstream211204* inputstream) {
	tllstream211204* s;
	NimStringDesc* filename;
	tnode224819* pipe;
	s = 0;
	(*p).Skin = ((NU8) 0);
	filename = tofullpath_197037(fileidx);
	pipe = parsepipe_258177(filename, inputstream);
	{
		if (!!((pipe == NIM_NIL))) goto LA3;
		s = evalpipe_258546(p, pipe, filename, inputstream);
	}
	goto LA1;
	LA3: ;
	{
		s = inputstream;
	}
	LA1: ;
	switch ((*p).Skin) {
	case ((NU8) 0):
	case ((NU8) 2):
	case ((NU8) 3):
	{
		openparser_243410(&(*p).Parser, fileidx, s, NIM_FALSE);
	}
	break;
	case ((NU8) 1):
	{
		openparser_243410(&(*p).Parser, fileidx, s, NIM_TRUE);
	}
	break;
	}
}

N_NIMCALL(tnode224819*, parseall_258063)(tparsers258035* p) {
	tnode224819* result;
	result = 0;
	switch ((*p).Skin) {
	case ((NU8) 0):
	case ((NU8) 1):
	{
		result = parseall_243216(&(*p).Parser);
	}
	break;
	case ((NU8) 2):
	{
		result = parseall_248009(&(*p).Parser);
	}
	break;
	case ((NU8) 3):
	{
		internalerror_197989(((NimStringDesc*) &TMP1343));
		result = emptynode_225738;
	}
	break;
	}
	return result;
}

N_NIMCALL(void, closeparsers_258056)(tparsers258035* p) {
	closeparser_243223(&(*p).Parser);
}

N_NIMCALL(tnode224819*, parsefile_258041)(NI32 fileidx) {
	tnode224819* result;
	tparsers258035 p;
	FILE* f;
	NimStringDesc* filename;
	tllstream211204* LOC6;
	result = 0;
	memset((void*)&p, 0, sizeof(p));
	objectInit(&p, (&NTI258035));
	f = 0;
	filename = tofullpath_197037(fileidx);
	{
		NIM_BOOL LOC3;
		LOC3 = 0;
		LOC3 = open_12603(&f, filename, ((NU8) 0), -1);
		if (!!(LOC3)) goto LA4;
		rawmessage_197733(((NU16) 3), filename);
		goto BeforeRet;
	}
	LA4: ;
	LOC6 = 0;
	LOC6 = llstreamopen_211226(&f);
	openparsers_258047(&p, fileidx, LOC6);
	result = parseall_258063(&p);
	closeparsers_258056(&p);
	BeforeRet: ;
	return result;
}

N_NIMCALL(tnode224819*, parsetoplevelstmt_258070)(tparsers258035* p) {
	tnode224819* result;
	result = 0;
	switch ((*p).Skin) {
	case ((NU8) 0):
	case ((NU8) 1):
	{
		result = parsetoplevelstmt_243230(&(*p).Parser);
	}
	break;
	case ((NU8) 2):
	{
		result = parsetoplevelstmt_248020(&(*p).Parser);
	}
	break;
	case ((NU8) 3):
	{
		internalerror_197989(((NimStringDesc*) &TMP1343));
		result = emptynode_225738;
	}
	break;
	}
	return result;
}
NIM_EXTERNC N_NOINLINE(void, HEX00_syntaxesInit)(void) {
}

NIM_EXTERNC N_NOINLINE(void, HEX00_syntaxesDatInit)(void) {
static TNimNode* TMP998[2];
static TNimNode* TMP999[4];
NI TMP1001;
static char* NIM_CONST TMP1000[4] = {
"skinStandard", 
"skinStrongSpaces", 
"skinBraces", 
"skinEndX"};
static TNimNode TMP791[8];
NTI258035.size = sizeof(tparsers258035);
NTI258035.kind = 18;
NTI258035.base = 0;
TMP998[0] = &TMP791[1];
NTI258007.size = sizeof(NU8);
NTI258007.kind = 14;
NTI258007.base = 0;
NTI258007.flags = 3;
for (TMP1001 = 0; TMP1001 < 4; TMP1001++) {
TMP791[TMP1001+2].kind = 1;
TMP791[TMP1001+2].offset = TMP1001;
TMP791[TMP1001+2].name = TMP1000[TMP1001];
TMP999[TMP1001] = &TMP791[TMP1001+2];
}
TMP791[6].len = 4; TMP791[6].kind = 2; TMP791[6].sons = &TMP999[0];
NTI258007.node = &TMP791[6];
TMP791[1].kind = 1;
TMP791[1].offset = offsetof(tparsers258035, Skin);
TMP791[1].typ = (&NTI258007);
TMP791[1].name = "skin";
TMP998[1] = &TMP791[7];
TMP791[7].kind = 1;
TMP791[7].offset = offsetof(tparsers258035, Parser);
TMP791[7].typ = (&NTI243205);
TMP791[7].name = "parser";
TMP791[0].len = 2; TMP791[0].kind = 2; TMP791[0].sons = &TMP998[0];
NTI258035.node = &TMP791[0];
}
