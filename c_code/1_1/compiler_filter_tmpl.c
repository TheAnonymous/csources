/* Generated by Nim Compiler v0.10.3 */
/*   (c) 2015 Andreas Rumpf */
/* The generated code is subject to the original license. */
#define NIM_INTBITS 32
#include "nimbase.h"

#include <string.h>

#include <stdio.h>
typedef struct tllstream196204 tllstream196204;
typedef struct NimStringDesc NimStringDesc;
typedef struct TGenericSeq TGenericSeq;
typedef struct tnode209813 tnode209813;
typedef struct ttmplparser235020 ttmplparser235020;
typedef struct tlineinfo182338 tlineinfo182338;
typedef struct TNimObject TNimObject;
typedef struct TNimType TNimType;
typedef struct TNimNode TNimNode;
typedef struct ttype209849 ttype209849;
typedef struct tsym209843 tsym209843;
typedef struct tident186021 tident186021;
typedef struct tnodeseq209807 tnodeseq209807;
typedef struct tidobj186015 tidobj186015;
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
struct  ttmplparser235020  {
tllstream196204* Inp;
NU8 State;
tlineinfo182338 Info;
NI Indent;
NI Emitpar;
NimStringDesc* X;
tllstream196204* Outp;
NIM_CHAR Subschar;
NIM_CHAR Nimdirective;
NimStringDesc* Emit;
NimStringDesc* Conc;
NimStringDesc* Tostr;
NI Curly;
NI Bracket;
NI Par;
NIM_BOOL Pendingexprline;
};
typedef NU8 TY196407[32];
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
struct  tllstream196204  {
  TNimObject Sup;
NU8 Kind;
FILE* F;
NimStringDesc* S;
NI Rd;
NI Wr;
NI Lineoffset;
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
struct  TNimNode  {
NU8 kind;
NI offset;
TNimType* typ;
NCSTRING name;
NI len;
TNimNode** sons;
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
static N_INLINE(tlineinfo182338, newlineinfo_182882)(NimStringDesc* filename, NI line, NI col);
N_NIMCALL(tlineinfo182338, newlineinfo_182870)(NI32 fileinfoidx, NI line, NI col);
N_NIMCALL(NI32, fileinfoidx_182857)(NimStringDesc* filename);
N_NIMCALL(tllstream196204*, llstreamopen_196220)(NimStringDesc* data);
N_NIMCALL(NIM_CHAR, chararg_234020)(tnode209813* n, NimStringDesc* name, NI pos, NIM_CHAR default_234025);
N_NIMCALL(NimStringDesc*, strarg_234029)(tnode209813* n, NimStringDesc* name, NI pos, NimStringDesc* default_234034);
N_NIMCALL(NimStringDesc*, rawNewString)(NI space);
N_NIMCALL(NimStringDesc*, rawNewString)(NI cap);
N_NIMCALL(NIM_BOOL, llstreamreadline_196610)(tllstream196204* s, NimStringDesc** line);
N_NIMCALL(void, parseline_235149)(ttmplparser235020* p);
N_NIMCALL(void, newline_235047)(ttmplparser235020* p);
N_NIMCALL(void, llstreamwrite_196665)(tllstream196204* s, NimStringDesc* data);
N_NIMCALL(NimStringDesc*, nsuRepeatChar)(NIM_CHAR c, NI count);
N_NIMCALL(NimStringDesc*, copyString)(NimStringDesc* src);
N_NIMCALL(NimStringDesc*, addChar)(NimStringDesc* s, NIM_CHAR c);
N_NIMCALL(void, scanpar_235057)(ttmplparser235020* p, NI d);
static N_INLINE(NIM_BOOL, withinexpr_235139)(ttmplparser235020* p);
N_NIMCALL(NIM_BOOL, endswithopr_196450)(NimStringDesc* x);
N_NIMCALL(NU8, whichkeyword_190394)(NimStringDesc* id);
N_NIMCALL(void, localerror_184392)(tlineinfo182338 info, NU16 msg, NimStringDesc* arg);
N_NIMCALL(NimStringDesc*, copyStr)(NimStringDesc* s, NI start);
N_NIMCALL(NimStringDesc*, copyStr)(NimStringDesc* s, NI first);
N_NIMCALL(NIM_BOOL, contains_99907)(NimStringDesc* s, TY196407 chars);
N_NIMCALL(NimStringDesc*, nsuToHex)(NI64 x, NI len);
N_NIMCALL(void, llstreamwrite_196696)(tllstream196204* s, NIM_CHAR data);
N_NIMCALL(void, llstreamclose_196310)(tllstream196204* s);
STRING_LITERAL(TMP1343, "", 0);
STRING_LITERAL(TMP1344, "subschar", 8);
STRING_LITERAL(TMP1345, "metachar", 8);
STRING_LITERAL(TMP1346, "emit", 4);
STRING_LITERAL(TMP1347, "result.add", 10);
STRING_LITERAL(TMP1348, "conc", 4);
STRING_LITERAL(TMP1349, " & ", 3);
STRING_LITERAL(TMP1350, "tostring", 8);
STRING_LITERAL(TMP1351, "$", 1);
STRING_LITERAL(TMP1352, "\015\012", 2);
STRING_LITERAL(TMP1354, "end", 3);
STRING_LITERAL(TMP1355, "#end", 4);
static NIM_CONST TY196407 TMP1356 = {
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x24,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}
;
STRING_LITERAL(TMP1357, "\"", 1);
STRING_LITERAL(TMP1358, "(\"", 2);
STRING_LITERAL(TMP1359, "\\x", 2);
STRING_LITERAL(TMP1360, "\\\\", 2);
STRING_LITERAL(TMP1361, "\\\'", 2);
STRING_LITERAL(TMP1362, "\\\"", 2);
STRING_LITERAL(TMP1363, "}", 1);
STRING_LITERAL(TMP1364, "\\n\"", 3);

static N_INLINE(tlineinfo182338, newlineinfo_182882)(NimStringDesc* filename, NI line, NI col) {
	tlineinfo182338 result;
	NI32 LOC1;
	memset((void*)(&result), 0, sizeof(result));
	LOC1 = 0;
	LOC1 = fileinfoidx_182857(filename);
	result = newlineinfo_182870(LOC1, line, col);
	return result;
}

N_NIMCALL(void, newline_235047)(ttmplparser235020* p) {
	NimStringDesc* LOC1;
	LOC1 = 0;
	LOC1 = nsuRepeatChar(41, (*p).Emitpar);
	llstreamwrite_196665((*p).Outp, LOC1);
	(*p).Emitpar = ((NI) 0);
	{
		if (!(((NI16) 1) < (*p).Info.Line)) goto LA4;
		llstreamwrite_196665((*p).Outp, ((NimStringDesc*) &TMP1352));
	}
	LA4: ;
	{
		NimStringDesc* LOC10;
		if (!(*p).Pendingexprline) goto LA8;
		LOC10 = 0;
		LOC10 = nsuRepeatChar(32, ((NI) 2));
		llstreamwrite_196665((*p).Outp, LOC10);
		(*p).Pendingexprline = NIM_FALSE;
	}
	LA8: ;
}

N_NIMCALL(void, scanpar_235057)(ttmplparser235020* p, NI d) {
	NI i;
	i = d;
	{
		while (1) {
			switch (((NU8)((*p).X->data[i]))) {
			case 0:
			{
				goto LA1;
			}
			break;
			case 40:
			{
				(*p).Par += ((NI) 1);
			}
			break;
			case 41:
			{
				(*p).Par -= ((NI) 1);
			}
			break;
			case 91:
			{
				(*p).Bracket += ((NI) 1);
			}
			break;
			case 93:
			{
				(*p).Bracket -= ((NI) 1);
			}
			break;
			case 123:
			{
				(*p).Curly += ((NI) 1);
			}
			break;
			case 125:
			{
				(*p).Curly -= ((NI) 1);
			}
			break;
			default:
			{
			}
			break;
			}
			i += ((NI) 1);
		}
	} LA1: ;
}

static N_INLINE(NIM_BOOL, withinexpr_235139)(ttmplparser235020* p) {
	NIM_BOOL result;
	NIM_BOOL LOC1;
	NIM_BOOL LOC2;
	result = 0;
	LOC1 = 0;
	LOC2 = 0;
	LOC2 = (((NI) 0) < (*p).Par);
	if (LOC2) goto LA3;
	LOC2 = (((NI) 0) < (*p).Bracket);
	LA3: ;
	LOC1 = LOC2;
	if (LOC1) goto LA4;
	LOC1 = (((NI) 0) < (*p).Curly);
	LA4: ;
	result = LOC1;
	return result;
}

N_NIMCALL(void, parseline_235149)(ttmplparser235020* p) {
	NI d;
	NI j;
	NI curly;
	NimStringDesc* keyw;
	d = 0;
	j = 0;
	curly = 0;
	keyw = 0;
	j = ((NI) 0);
	{
		while (1) {
			if (!((NU8)((*p).X->data[j]) == (NU8)(32))) goto LA2;
			j += ((NI) 1);
		} LA2: ;
	}
	{
		NIM_BOOL LOC5;
		LOC5 = 0;
		LOC5 = ((NU8)((*p).X->data[((NI) 0)]) == (NU8)((*p).Nimdirective));
		if (!(LOC5)) goto LA6;
		LOC5 = ((NU8)((*p).X->data[((NI) 1)]) == (NU8)(33));
		LA6: ;
		if (!LOC5) goto LA7;
		newline_235047(p);
	}
	goto LA3;
	LA7: ;
	{
		NIM_BOOL LOC16;
		NU8 LOC18;
		if (!((NU8)((*p).X->data[j]) == (NU8)((*p).Nimdirective))) goto LA10;
		newline_235047(p);
		j += ((NI) 1);
		{
			while (1) {
				if (!((NU8)((*p).X->data[j]) == (NU8)(32))) goto LA13;
				j += ((NI) 1);
			} LA13: ;
		}
		d = j;
		keyw = copyString(((NimStringDesc*) &TMP1343));
		{
			while (1) {
				if (!(((NU8)((*p).X->data[j])) >= ((NU8)(97)) && ((NU8)((*p).X->data[j])) <= ((NU8)(122)) || ((NU8)((*p).X->data[j])) >= ((NU8)(65)) && ((NU8)((*p).X->data[j])) <= ((NU8)(90)) || ((NU8)((*p).X->data[j])) >= ((NU8)(48)) && ((NU8)((*p).X->data[j])) <= ((NU8)(57)) || ((NU8)((*p).X->data[j])) >= ((NU8)(128)) && ((NU8)((*p).X->data[j])) <= ((NU8)(255)) || ((NU8)((*p).X->data[j])) == ((NU8)(46)) || ((NU8)((*p).X->data[j])) == ((NU8)(95)))) goto LA15;
				keyw = addChar(keyw, (*p).X->data[j]);
				j += ((NI) 1);
			} LA15: ;
		}
		scanpar_235057(p, j);
		LOC16 = 0;
		LOC16 = withinexpr_235139((&(*p)));
		if (LOC16) goto LA17;
		LOC16 = endswithopr_196450((*p).X);
		LA17: ;
		(*p).Pendingexprline = LOC16;
		LOC18 = 0;
		LOC18 = whichkeyword_190394(keyw);
		switch (LOC18) {
		case ((NU8) 21):
		{
			NimStringDesc* LOC25;
			{
				if (!(((NI) 2) <= (*p).Indent)) goto LA22;
				(*p).Indent -= ((NI) 2);
			}
			goto LA20;
			LA22: ;
			{
				(*p).Info.Col = ((NI16) (j));
				localerror_184392((*p).Info, ((NU16) 163), ((NimStringDesc*) &TMP1354));
			}
			LA20: ;
			LOC25 = 0;
			LOC25 = nsuRepeatChar(32, (*p).Indent);
			llstreamwrite_196665((*p).Outp, LOC25);
			llstreamwrite_196665((*p).Outp, ((NimStringDesc*) &TMP1355));
		}
		break;
		case ((NU8) 30):
		case ((NU8) 64):
		case ((NU8) 59):
		case ((NU8) 65):
		case ((NU8) 26):
		case ((NU8) 7):
		case ((NU8) 9):
		case ((NU8) 50):
		case ((NU8) 37):
		case ((NU8) 13):
		case ((NU8) 39):
		case ((NU8) 58):
		case ((NU8) 40):
		{
			NimStringDesc* LOC27;
			NimStringDesc* LOC28;
			LOC27 = 0;
			LOC27 = nsuRepeatChar(32, (*p).Indent);
			llstreamwrite_196665((*p).Outp, LOC27);
			LOC28 = 0;
			LOC28 = copyStr((*p).X, d);
			llstreamwrite_196665((*p).Outp, LOC28);
			(*p).Indent += ((NI) 2);
		}
		break;
		case ((NU8) 19):
		case ((NU8) 47):
		case ((NU8) 20):
		case ((NU8) 23):
		case ((NU8) 25):
		{
			NimStringDesc* LOC30;
			NimStringDesc* LOC31;
			LOC30 = 0;
			LOC30 = nsuRepeatChar(32, (NI32)((*p).Indent - ((NI) 2)));
			llstreamwrite_196665((*p).Outp, LOC30);
			LOC31 = 0;
			LOC31 = copyStr((*p).X, d);
			llstreamwrite_196665((*p).Outp, LOC31);
		}
		break;
		case ((NU8) 38):
		case ((NU8) 63):
		case ((NU8) 11):
		case ((NU8) 61):
		{
			NimStringDesc* LOC33;
			NimStringDesc* LOC34;
			LOC33 = 0;
			LOC33 = nsuRepeatChar(32, (*p).Indent);
			llstreamwrite_196665((*p).Outp, LOC33);
			LOC34 = 0;
			LOC34 = copyStr((*p).X, d);
			llstreamwrite_196665((*p).Outp, LOC34);
			{
				NIM_BOOL LOC37;
				LOC37 = 0;
				LOC37 = contains_99907((*p).X, TMP1356);
				if (!!(LOC37)) goto LA38;
				(*p).Indent += ((NI) 2);
			}
			LA38: ;
		}
		break;
		default:
		{
			NimStringDesc* LOC41;
			NimStringDesc* LOC42;
			LOC41 = 0;
			LOC41 = nsuRepeatChar(32, (*p).Indent);
			llstreamwrite_196665((*p).Outp, LOC41);
			LOC42 = 0;
			LOC42 = copyStr((*p).X, d);
			llstreamwrite_196665((*p).Outp, LOC42);
		}
		break;
		}
		(*p).State = ((NU8) 0);
	}
	goto LA3;
	LA10: ;
	{
		(*p).Par = ((NI) 0);
		(*p).Curly = ((NI) 0);
		(*p).Bracket = ((NI) 0);
		j = ((NI) 0);
		switch ((*p).State) {
		case ((NU8) 1):
		{
			NimStringDesc* LOC45;
			llstreamwrite_196665((*p).Outp, (*p).Conc);
			llstreamwrite_196665((*p).Outp, ((NimStringDesc*) &TMP1352));
			LOC45 = 0;
			LOC45 = nsuRepeatChar(32, (NI32)((*p).Indent + ((NI) 2)));
			llstreamwrite_196665((*p).Outp, LOC45);
			llstreamwrite_196665((*p).Outp, ((NimStringDesc*) &TMP1357));
		}
		break;
		case ((NU8) 0):
		{
			NimStringDesc* LOC47;
			newline_235047(p);
			LOC47 = 0;
			LOC47 = nsuRepeatChar(32, (*p).Indent);
			llstreamwrite_196665((*p).Outp, LOC47);
			llstreamwrite_196665((*p).Outp, (*p).Emit);
			llstreamwrite_196665((*p).Outp, ((NimStringDesc*) &TMP1358));
			(*p).Emitpar += ((NI) 1);
		}
		break;
		}
		(*p).State = ((NU8) 1);
		{
			while (1) {
				switch (((NU8)((*p).X->data[j]))) {
				case 0:
				{
					goto LA48;
				}
				break;
				case 1 ... 31:
				case 128 ... 255:
				{
					NimStringDesc* LOC52;
					llstreamwrite_196665((*p).Outp, ((NimStringDesc*) &TMP1359));
					LOC52 = 0;
					LOC52 = nsuToHex(((NI64) (((NU8)((*p).X->data[j])))), ((NI) 2));
					llstreamwrite_196665((*p).Outp, LOC52);
					j += ((NI) 1);
				}
				break;
				case 92:
				{
					llstreamwrite_196665((*p).Outp, ((NimStringDesc*) &TMP1360));
					j += ((NI) 1);
				}
				break;
				case 39:
				{
					llstreamwrite_196665((*p).Outp, ((NimStringDesc*) &TMP1361));
					j += ((NI) 1);
				}
				break;
				case 34:
				{
					llstreamwrite_196665((*p).Outp, ((NimStringDesc*) &TMP1362));
					j += ((NI) 1);
				}
				break;
				default:
				{
					{
						if (!((NU8)((*p).X->data[j]) == (NU8)((*p).Subschar))) goto LA59;
						j += ((NI) 1);
						switch (((NU8)((*p).X->data[j]))) {
						case 123:
						{
							(*p).Info.Col = ((NI16) (j));
							llstreamwrite_196696((*p).Outp, 34);
							llstreamwrite_196665((*p).Outp, (*p).Conc);
							llstreamwrite_196665((*p).Outp, (*p).Tostr);
							llstreamwrite_196696((*p).Outp, 40);
							j += ((NI) 1);
							curly = ((NI) 0);
							{
								while (1) {
									switch (((NU8)((*p).X->data[j]))) {
									case 0:
									{
										localerror_184392((*p).Info, ((NU16) 188), ((NimStringDesc*) &TMP1363));
										goto LA62;
									}
									break;
									case 123:
									{
										j += ((NI) 1);
										curly += ((NI) 1);
										llstreamwrite_196696((*p).Outp, 123);
									}
									break;
									case 125:
									{
										j += ((NI) 1);
										{
											if (!(curly == ((NI) 0))) goto LA69;
											goto LA62;
										}
										LA69: ;
										{
											if (!(((NI) 0) < curly)) goto LA73;
											curly -= ((NI) 1);
										}
										LA73: ;
										llstreamwrite_196696((*p).Outp, 125);
									}
									break;
									default:
									{
										llstreamwrite_196696((*p).Outp, (*p).X->data[j]);
										j += ((NI) 1);
									}
									break;
									}
								}
							} LA62: ;
							llstreamwrite_196696((*p).Outp, 41);
							llstreamwrite_196665((*p).Outp, (*p).Conc);
							llstreamwrite_196696((*p).Outp, 34);
						}
						break;
						case 97 ... 122:
						case 65 ... 90:
						case 128 ... 255:
						{
							llstreamwrite_196696((*p).Outp, 34);
							llstreamwrite_196665((*p).Outp, (*p).Conc);
							llstreamwrite_196665((*p).Outp, (*p).Tostr);
							llstreamwrite_196696((*p).Outp, 40);
							{
								while (1) {
									if (!(((NU8)((*p).X->data[j])) >= ((NU8)(97)) && ((NU8)((*p).X->data[j])) <= ((NU8)(122)) || ((NU8)((*p).X->data[j])) >= ((NU8)(65)) && ((NU8)((*p).X->data[j])) <= ((NU8)(90)) || ((NU8)((*p).X->data[j])) >= ((NU8)(48)) && ((NU8)((*p).X->data[j])) <= ((NU8)(57)) || ((NU8)((*p).X->data[j])) >= ((NU8)(128)) && ((NU8)((*p).X->data[j])) <= ((NU8)(255)) || ((NU8)((*p).X->data[j])) == ((NU8)(46)) || ((NU8)((*p).X->data[j])) == ((NU8)(95)))) goto LA78;
									llstreamwrite_196696((*p).Outp, (*p).X->data[j]);
									j += ((NI) 1);
								} LA78: ;
							}
							llstreamwrite_196696((*p).Outp, 41);
							llstreamwrite_196665((*p).Outp, (*p).Conc);
							llstreamwrite_196696((*p).Outp, 34);
						}
						break;
						default:
						{
							{
								if (!((NU8)((*p).X->data[j]) == (NU8)((*p).Subschar))) goto LA82;
								llstreamwrite_196696((*p).Outp, (*p).Subschar);
								j += ((NI) 1);
							}
							goto LA80;
							LA82: ;
							{
								(*p).Info.Col = ((NI16) (j));
								localerror_184392((*p).Info, ((NU16) 167), ((NimStringDesc*) &TMP1351));
							}
							LA80: ;
						}
						break;
						}
					}
					goto LA57;
					LA59: ;
					{
						llstreamwrite_196696((*p).Outp, (*p).X->data[j]);
						j += ((NI) 1);
					}
					LA57: ;
				}
				break;
				}
			}
		} LA48: ;
		llstreamwrite_196665((*p).Outp, ((NimStringDesc*) &TMP1364));
	}
	LA3: ;
}

N_NIMCALL(tllstream196204*, filtertmpl_235009)(tllstream196204* stdin_235011, NimStringDesc* filename, tnode209813* call) {
	tllstream196204* result;
	ttmplparser235020 p;
	result = 0;
	memset((void*)(&p), 0, sizeof(p));
	p.Info = newlineinfo_182882(filename, ((NI) 0), ((NI) 0));
	p.Outp = llstreamopen_196220(((NimStringDesc*) &TMP1343));
	p.Inp = stdin_235011;
	p.Subschar = chararg_234020(call, ((NimStringDesc*) &TMP1344), ((NI) 1), 36);
	p.Nimdirective = chararg_234020(call, ((NimStringDesc*) &TMP1345), ((NI) 2), 35);
	p.Emit = strarg_234029(call, ((NimStringDesc*) &TMP1346), ((NI) 3), ((NimStringDesc*) &TMP1347));
	p.Conc = strarg_234029(call, ((NimStringDesc*) &TMP1348), ((NI) 4), ((NimStringDesc*) &TMP1349));
	p.Tostr = strarg_234029(call, ((NimStringDesc*) &TMP1350), ((NI) 5), ((NimStringDesc*) &TMP1351));
	p.X = rawNewString(((NI) 120));
	{
		while (1) {
			NIM_BOOL LOC3;
			LOC3 = 0;
			LOC3 = llstreamreadline_196610(p.Inp, (&p.X));
			if (!LOC3) goto LA2;
			p.Info.Line = (NI16)(p.Info.Line + ((NI16) 1));
			parseline_235149((&p));
		} LA2: ;
	}
	newline_235047((&p));
	result = p.Outp;
	llstreamclose_196310(p.Inp);
	return result;
}
NIM_EXTERNC N_NOINLINE(void, compiler_filter_tmplInit)(void) {
}

NIM_EXTERNC N_NOINLINE(void, compiler_filter_tmplDatInit)(void) {
}

