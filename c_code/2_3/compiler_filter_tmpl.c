/* Generated by Nim Compiler v0.10.3 */
/*   (c) 2015 Andreas Rumpf */
/* The generated code is subject to the original license. */
#define NIM_INTBITS 64
#include "nimbase.h"

#include <string.h>

#include <stdio.h>
typedef struct tllstream195204 tllstream195204;
typedef struct NimStringDesc NimStringDesc;
typedef struct TGenericSeq TGenericSeq;
typedef struct tnode208813 tnode208813;
typedef struct ttmplparser234020 ttmplparser234020;
typedef struct tlineinfo181338 tlineinfo181338;
typedef struct TNimObject TNimObject;
typedef struct TNimType TNimType;
typedef struct TNimNode TNimNode;
typedef struct ttype208849 ttype208849;
typedef struct tsym208843 tsym208843;
typedef struct tident185021 tident185021;
typedef struct tnodeseq208807 tnodeseq208807;
typedef struct tidobj185015 tidobj185015;
typedef struct ttypeseq208845 ttypeseq208845;
typedef struct tloc208827 tloc208827;
typedef struct trope178009 trope178009;
typedef struct tscope208837 tscope208837;
typedef struct TY208944 TY208944;
typedef struct tinstantiation208833 tinstantiation208833;
typedef struct tstrtable208817 tstrtable208817;
typedef struct tsymseq208815 tsymseq208815;
typedef struct tlib208831 tlib208831;
typedef struct TY208933 TY208933;
typedef struct tlistentry127022 tlistentry127022;
struct  TGenericSeq  {
NI len;
NI reserved;
};
struct  NimStringDesc  {
  TGenericSeq Sup;
NIM_CHAR data[SEQ_DECL_SIZE];
};
struct  tlineinfo181338  {
NI16 Line;
NI16 Col;
NI32 Fileindex;
};
struct  ttmplparser234020  {
tllstream195204* Inp;
NU8 State;
tlineinfo181338 Info;
NI Indent;
NI Emitpar;
NimStringDesc* X;
tllstream195204* Outp;
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
typedef NU8 TY195407[32];
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
struct  tllstream195204  {
  TNimObject Sup;
NU8 Kind;
FILE* F;
NimStringDesc* S;
NI Rd;
NI Wr;
NI Lineoffset;
};
struct  tnode208813  {
ttype208849* Typ;
tlineinfo181338 Info;
NU16 Flags;
NU8 Kind;
union{
struct {NI64 Intval;
} S1;
struct {NF Floatval;
} S2;
struct {NimStringDesc* Strval;
} S3;
struct {tsym208843* Sym;
} S4;
struct {tident185021* Ident;
} S5;
struct {tnodeseq208807* Sons;
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
struct  tidobj185015  {
  TNimObject Sup;
NI Id;
};
struct  tloc208827  {
NU8 K;
NU8 S;
NU16 Flags;
ttype208849* T;
trope178009* R;
trope178009* Heaproot;
};
struct  ttype208849  {
  tidobj185015 Sup;
NU8 Kind;
NU8 Callconv;
NU32 Flags;
ttypeseq208845* Sons;
tnode208813* N;
tsym208843* Owner;
tsym208843* Sym;
tsym208843* Destructor;
tsym208843* Deepcopy;
NI64 Size;
NI16 Align;
NI16 Locklevel;
tloc208827 Loc;
};
struct  tstrtable208817  {
NI Counter;
tsymseq208815* Data;
};
struct  tsym208843  {
  tidobj185015 Sup;
NU8 Kind;
union{
struct {ttypeseq208845* Typeinstcache;
tscope208837* Typscope;
} S1;
struct {TY208944* Procinstcache;
tscope208837* Scope;
} S2;
struct {TY208944* Usedgenerics;
tstrtable208817 Tab;
} S3;
struct {tsym208843* Guard;
} S4;
} kindU;
NU16 Magic;
ttype208849* Typ;
tident185021* Name;
tlineinfo181338 Info;
tsym208843* Owner;
NU32 Flags;
tnode208813* Ast;
NU32 Options;
NI Position;
NI Offset;
tloc208827 Loc;
tlib208831* Annex;
tnode208813* Constraint;
};
struct  tident185021  {
  tidobj185015 Sup;
NimStringDesc* S;
tident185021* Next;
NI H;
};
struct  trope178009  {
  TNimObject Sup;
trope178009* Left;
trope178009* Right;
NI Length;
NimStringDesc* Data;
};
struct  tscope208837  {
NI Depthlevel;
tstrtable208817 Symbols;
tnodeseq208807* Usingsyms;
tscope208837* Parent;
};
struct  tinstantiation208833  {
tsym208843* Sym;
ttypeseq208845* Concretetypes;
TY208933* Usedby;
};
struct  tlistentry127022  {
  TNimObject Sup;
tlistentry127022* Prev;
tlistentry127022* Next;
};
struct  tlib208831  {
  tlistentry127022 Sup;
NU8 Kind;
NIM_BOOL Generated;
NIM_BOOL Isoverriden;
trope178009* Name;
tnode208813* Path;
};
struct tnodeseq208807 {
  TGenericSeq Sup;
  tnode208813* data[SEQ_DECL_SIZE];
};
struct ttypeseq208845 {
  TGenericSeq Sup;
  ttype208849* data[SEQ_DECL_SIZE];
};
struct TY208944 {
  TGenericSeq Sup;
  tinstantiation208833* data[SEQ_DECL_SIZE];
};
struct tsymseq208815 {
  TGenericSeq Sup;
  tsym208843* data[SEQ_DECL_SIZE];
};
struct TY208933 {
  TGenericSeq Sup;
  NI32 data[SEQ_DECL_SIZE];
};
static N_INLINE(tlineinfo181338, newlineinfo_181881)(NimStringDesc* filename, NI line, NI col);
N_NIMCALL(tlineinfo181338, newlineinfo_181869)(NI32 fileinfoidx, NI line, NI col);
N_NIMCALL(NI32, fileinfoidx_181856)(NimStringDesc* filename);
N_NIMCALL(tllstream195204*, llstreamopen_195220)(NimStringDesc* data);
N_NIMCALL(NIM_CHAR, chararg_233020)(tnode208813* n, NimStringDesc* name, NI pos, NIM_CHAR default_233025);
N_NIMCALL(NimStringDesc*, strarg_233029)(tnode208813* n, NimStringDesc* name, NI pos, NimStringDesc* default_233034);
N_NIMCALL(NimStringDesc*, rawNewString)(NI space);
N_NIMCALL(NimStringDesc*, rawNewString)(NI cap);
N_NIMCALL(NIM_BOOL, llstreamreadline_195610)(tllstream195204* s, NimStringDesc** line);
N_NIMCALL(void, parseline_234149)(ttmplparser234020* p);
N_NIMCALL(void, newline_234047)(ttmplparser234020* p);
N_NIMCALL(void, llstreamwrite_195665)(tllstream195204* s, NimStringDesc* data);
N_NIMCALL(NimStringDesc*, nsuRepeatChar)(NIM_CHAR c, NI count);
N_NIMCALL(NimStringDesc*, copyString)(NimStringDesc* src);
N_NIMCALL(NimStringDesc*, addChar)(NimStringDesc* s, NIM_CHAR c);
N_NIMCALL(void, scanpar_234057)(ttmplparser234020* p, NI d);
static N_INLINE(NIM_BOOL, withinexpr_234139)(ttmplparser234020* p);
N_NIMCALL(NIM_BOOL, endswithopr_195450)(NimStringDesc* x);
N_NIMCALL(NU8, whichkeyword_189394)(NimStringDesc* id);
N_NIMCALL(void, localerror_183392)(tlineinfo181338 info, NU16 msg, NimStringDesc* arg);
N_NIMCALL(NimStringDesc*, copyStr)(NimStringDesc* s, NI start);
N_NIMCALL(NimStringDesc*, copyStr)(NimStringDesc* s, NI first);
N_NIMCALL(NIM_BOOL, contains_97907)(NimStringDesc* s, TY195407 chars);
N_NIMCALL(NimStringDesc*, nsuToHex)(NI64 x, NI len);
N_NIMCALL(void, llstreamwrite_195696)(tllstream195204* s, NIM_CHAR data);
N_NIMCALL(void, llstreamclose_195310)(tllstream195204* s);
STRING_LITERAL(TMP1337, "", 0);
STRING_LITERAL(TMP1338, "subschar", 8);
STRING_LITERAL(TMP1339, "metachar", 8);
STRING_LITERAL(TMP1340, "emit", 4);
STRING_LITERAL(TMP1341, "result.add", 10);
STRING_LITERAL(TMP1342, "conc", 4);
STRING_LITERAL(TMP1343, " & ", 3);
STRING_LITERAL(TMP1344, "tostring", 8);
STRING_LITERAL(TMP1345, "$", 1);
STRING_LITERAL(TMP1346, "\012", 1);
STRING_LITERAL(TMP1348, "end", 3);
STRING_LITERAL(TMP1349, "#end", 4);
static NIM_CONST TY195407 TMP1350 = {
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x24,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}
;
STRING_LITERAL(TMP1351, "\"", 1);
STRING_LITERAL(TMP1352, "(\"", 2);
STRING_LITERAL(TMP1353, "\\x", 2);
STRING_LITERAL(TMP1354, "\\\\", 2);
STRING_LITERAL(TMP1355, "\\\'", 2);
STRING_LITERAL(TMP1356, "\\\"", 2);
STRING_LITERAL(TMP1357, "}", 1);
STRING_LITERAL(TMP1358, "\\n\"", 3);

static N_INLINE(tlineinfo181338, newlineinfo_181881)(NimStringDesc* filename, NI line, NI col) {
	tlineinfo181338 result;
	NI32 LOC1;
	memset((void*)(&result), 0, sizeof(result));
	LOC1 = 0;
	LOC1 = fileinfoidx_181856(filename);
	result = newlineinfo_181869(LOC1, line, col);
	return result;
}

N_NIMCALL(void, newline_234047)(ttmplparser234020* p) {
	NimStringDesc* LOC1;
	LOC1 = 0;
	LOC1 = nsuRepeatChar(41, (*p).Emitpar);
	llstreamwrite_195665((*p).Outp, LOC1);
	(*p).Emitpar = ((NI) 0);
	{
		if (!(((NI16) 1) < (*p).Info.Line)) goto LA4;
		llstreamwrite_195665((*p).Outp, ((NimStringDesc*) &TMP1346));
	}
	LA4: ;
	{
		NimStringDesc* LOC10;
		if (!(*p).Pendingexprline) goto LA8;
		LOC10 = 0;
		LOC10 = nsuRepeatChar(32, ((NI) 2));
		llstreamwrite_195665((*p).Outp, LOC10);
		(*p).Pendingexprline = NIM_FALSE;
	}
	LA8: ;
}

N_NIMCALL(void, scanpar_234057)(ttmplparser234020* p, NI d) {
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

static N_INLINE(NIM_BOOL, withinexpr_234139)(ttmplparser234020* p) {
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

N_NIMCALL(void, parseline_234149)(ttmplparser234020* p) {
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
		newline_234047(p);
	}
	goto LA3;
	LA7: ;
	{
		NIM_BOOL LOC16;
		NU8 LOC18;
		if (!((NU8)((*p).X->data[j]) == (NU8)((*p).Nimdirective))) goto LA10;
		newline_234047(p);
		j += ((NI) 1);
		{
			while (1) {
				if (!((NU8)((*p).X->data[j]) == (NU8)(32))) goto LA13;
				j += ((NI) 1);
			} LA13: ;
		}
		d = j;
		keyw = copyString(((NimStringDesc*) &TMP1337));
		{
			while (1) {
				if (!(((NU8)((*p).X->data[j])) >= ((NU8)(97)) && ((NU8)((*p).X->data[j])) <= ((NU8)(122)) || ((NU8)((*p).X->data[j])) >= ((NU8)(65)) && ((NU8)((*p).X->data[j])) <= ((NU8)(90)) || ((NU8)((*p).X->data[j])) >= ((NU8)(48)) && ((NU8)((*p).X->data[j])) <= ((NU8)(57)) || ((NU8)((*p).X->data[j])) >= ((NU8)(128)) && ((NU8)((*p).X->data[j])) <= ((NU8)(255)) || ((NU8)((*p).X->data[j])) == ((NU8)(46)) || ((NU8)((*p).X->data[j])) == ((NU8)(95)))) goto LA15;
				keyw = addChar(keyw, (*p).X->data[j]);
				j += ((NI) 1);
			} LA15: ;
		}
		scanpar_234057(p, j);
		LOC16 = 0;
		LOC16 = withinexpr_234139((&(*p)));
		if (LOC16) goto LA17;
		LOC16 = endswithopr_195450((*p).X);
		LA17: ;
		(*p).Pendingexprline = LOC16;
		LOC18 = 0;
		LOC18 = whichkeyword_189394(keyw);
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
				localerror_183392((*p).Info, ((NU16) 163), ((NimStringDesc*) &TMP1348));
			}
			LA20: ;
			LOC25 = 0;
			LOC25 = nsuRepeatChar(32, (*p).Indent);
			llstreamwrite_195665((*p).Outp, LOC25);
			llstreamwrite_195665((*p).Outp, ((NimStringDesc*) &TMP1349));
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
			llstreamwrite_195665((*p).Outp, LOC27);
			LOC28 = 0;
			LOC28 = copyStr((*p).X, d);
			llstreamwrite_195665((*p).Outp, LOC28);
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
			LOC30 = nsuRepeatChar(32, (NI64)((*p).Indent - ((NI) 2)));
			llstreamwrite_195665((*p).Outp, LOC30);
			LOC31 = 0;
			LOC31 = copyStr((*p).X, d);
			llstreamwrite_195665((*p).Outp, LOC31);
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
			llstreamwrite_195665((*p).Outp, LOC33);
			LOC34 = 0;
			LOC34 = copyStr((*p).X, d);
			llstreamwrite_195665((*p).Outp, LOC34);
			{
				NIM_BOOL LOC37;
				LOC37 = 0;
				LOC37 = contains_97907((*p).X, TMP1350);
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
			llstreamwrite_195665((*p).Outp, LOC41);
			LOC42 = 0;
			LOC42 = copyStr((*p).X, d);
			llstreamwrite_195665((*p).Outp, LOC42);
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
			llstreamwrite_195665((*p).Outp, (*p).Conc);
			llstreamwrite_195665((*p).Outp, ((NimStringDesc*) &TMP1346));
			LOC45 = 0;
			LOC45 = nsuRepeatChar(32, (NI64)((*p).Indent + ((NI) 2)));
			llstreamwrite_195665((*p).Outp, LOC45);
			llstreamwrite_195665((*p).Outp, ((NimStringDesc*) &TMP1351));
		}
		break;
		case ((NU8) 0):
		{
			NimStringDesc* LOC47;
			newline_234047(p);
			LOC47 = 0;
			LOC47 = nsuRepeatChar(32, (*p).Indent);
			llstreamwrite_195665((*p).Outp, LOC47);
			llstreamwrite_195665((*p).Outp, (*p).Emit);
			llstreamwrite_195665((*p).Outp, ((NimStringDesc*) &TMP1352));
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
					llstreamwrite_195665((*p).Outp, ((NimStringDesc*) &TMP1353));
					LOC52 = 0;
					LOC52 = nsuToHex(((NI64) (((NU8)((*p).X->data[j])))), ((NI) 2));
					llstreamwrite_195665((*p).Outp, LOC52);
					j += ((NI) 1);
				}
				break;
				case 92:
				{
					llstreamwrite_195665((*p).Outp, ((NimStringDesc*) &TMP1354));
					j += ((NI) 1);
				}
				break;
				case 39:
				{
					llstreamwrite_195665((*p).Outp, ((NimStringDesc*) &TMP1355));
					j += ((NI) 1);
				}
				break;
				case 34:
				{
					llstreamwrite_195665((*p).Outp, ((NimStringDesc*) &TMP1356));
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
							llstreamwrite_195696((*p).Outp, 34);
							llstreamwrite_195665((*p).Outp, (*p).Conc);
							llstreamwrite_195665((*p).Outp, (*p).Tostr);
							llstreamwrite_195696((*p).Outp, 40);
							j += ((NI) 1);
							curly = ((NI) 0);
							{
								while (1) {
									switch (((NU8)((*p).X->data[j]))) {
									case 0:
									{
										localerror_183392((*p).Info, ((NU16) 188), ((NimStringDesc*) &TMP1357));
										goto LA62;
									}
									break;
									case 123:
									{
										j += ((NI) 1);
										curly += ((NI) 1);
										llstreamwrite_195696((*p).Outp, 123);
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
										llstreamwrite_195696((*p).Outp, 125);
									}
									break;
									default:
									{
										llstreamwrite_195696((*p).Outp, (*p).X->data[j]);
										j += ((NI) 1);
									}
									break;
									}
								}
							} LA62: ;
							llstreamwrite_195696((*p).Outp, 41);
							llstreamwrite_195665((*p).Outp, (*p).Conc);
							llstreamwrite_195696((*p).Outp, 34);
						}
						break;
						case 97 ... 122:
						case 65 ... 90:
						case 128 ... 255:
						{
							llstreamwrite_195696((*p).Outp, 34);
							llstreamwrite_195665((*p).Outp, (*p).Conc);
							llstreamwrite_195665((*p).Outp, (*p).Tostr);
							llstreamwrite_195696((*p).Outp, 40);
							{
								while (1) {
									if (!(((NU8)((*p).X->data[j])) >= ((NU8)(97)) && ((NU8)((*p).X->data[j])) <= ((NU8)(122)) || ((NU8)((*p).X->data[j])) >= ((NU8)(65)) && ((NU8)((*p).X->data[j])) <= ((NU8)(90)) || ((NU8)((*p).X->data[j])) >= ((NU8)(48)) && ((NU8)((*p).X->data[j])) <= ((NU8)(57)) || ((NU8)((*p).X->data[j])) >= ((NU8)(128)) && ((NU8)((*p).X->data[j])) <= ((NU8)(255)) || ((NU8)((*p).X->data[j])) == ((NU8)(46)) || ((NU8)((*p).X->data[j])) == ((NU8)(95)))) goto LA78;
									llstreamwrite_195696((*p).Outp, (*p).X->data[j]);
									j += ((NI) 1);
								} LA78: ;
							}
							llstreamwrite_195696((*p).Outp, 41);
							llstreamwrite_195665((*p).Outp, (*p).Conc);
							llstreamwrite_195696((*p).Outp, 34);
						}
						break;
						default:
						{
							{
								if (!((NU8)((*p).X->data[j]) == (NU8)((*p).Subschar))) goto LA82;
								llstreamwrite_195696((*p).Outp, (*p).Subschar);
								j += ((NI) 1);
							}
							goto LA80;
							LA82: ;
							{
								(*p).Info.Col = ((NI16) (j));
								localerror_183392((*p).Info, ((NU16) 167), ((NimStringDesc*) &TMP1345));
							}
							LA80: ;
						}
						break;
						}
					}
					goto LA57;
					LA59: ;
					{
						llstreamwrite_195696((*p).Outp, (*p).X->data[j]);
						j += ((NI) 1);
					}
					LA57: ;
				}
				break;
				}
			}
		} LA48: ;
		llstreamwrite_195665((*p).Outp, ((NimStringDesc*) &TMP1358));
	}
	LA3: ;
}

N_NIMCALL(tllstream195204*, filtertmpl_234009)(tllstream195204* stdin_234011, NimStringDesc* filename, tnode208813* call) {
	tllstream195204* result;
	ttmplparser234020 p;
	result = 0;
	memset((void*)(&p), 0, sizeof(p));
	p.Info = newlineinfo_181881(filename, ((NI) 0), ((NI) 0));
	p.Outp = llstreamopen_195220(((NimStringDesc*) &TMP1337));
	p.Inp = stdin_234011;
	p.Subschar = chararg_233020(call, ((NimStringDesc*) &TMP1338), ((NI) 1), 36);
	p.Nimdirective = chararg_233020(call, ((NimStringDesc*) &TMP1339), ((NI) 2), 35);
	p.Emit = strarg_233029(call, ((NimStringDesc*) &TMP1340), ((NI) 3), ((NimStringDesc*) &TMP1341));
	p.Conc = strarg_233029(call, ((NimStringDesc*) &TMP1342), ((NI) 4), ((NimStringDesc*) &TMP1343));
	p.Tostr = strarg_233029(call, ((NimStringDesc*) &TMP1344), ((NI) 5), ((NimStringDesc*) &TMP1345));
	p.X = rawNewString(((NI) 120));
	{
		while (1) {
			NIM_BOOL LOC3;
			LOC3 = 0;
			LOC3 = llstreamreadline_195610(p.Inp, (&p.X));
			if (!LOC3) goto LA2;
			p.Info.Line = (NI16)(p.Info.Line + ((NI16) 1));
			parseline_234149((&p));
		} LA2: ;
	}
	newline_234047((&p));
	result = p.Outp;
	llstreamclose_195310(p.Inp);
	return result;
}
NIM_EXTERNC N_NOINLINE(void, compiler_filter_tmplInit)(void) {
}

NIM_EXTERNC N_NOINLINE(void, compiler_filter_tmplDatInit)(void) {
}

