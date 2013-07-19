/* Generated by Nimrod Compiler v0.9.3 */
/*   (c) 2012 Andreas Rumpf */
/* The generated code is subject to the original license. */
#define NIM_INTBITS 64
#include "nimbase.h"

#include <string.h>

#include <stdio.h>
typedef struct tbaselexer159018 tbaselexer159018;
typedef struct TNimObject TNimObject;
typedef struct TNimType TNimType;
typedef struct TNimNode TNimNode;
typedef struct tllstream158204 tllstream158204;
typedef struct NimStringDesc NimStringDesc;
typedef struct TGenericSeq TGenericSeq;
typedef NU8 TY104134[32];
typedef N_NIMCALL_PTR(void, TY891) (void* p, NI op);
struct TNimType {
NI size;
NU8 kind;
NU8 flags;
TNimType* base;
TNimNode* node;
void* finalizer;
TY891 marker;
};
struct TNimObject {
TNimType* m_type;
};
struct tbaselexer159018 {
  TNimObject Sup;
NI Bufpos;
NCSTRING Buf;
NI Buflen;
tllstream158204* Stream;
NI Linenumber;
NI Sentinel;
NI Linestart;
};
struct TGenericSeq {
NI len;
NI reserved;
};
typedef NIM_CHAR TY611[100000001];
struct NimStringDesc {
  TGenericSeq Sup;
TY611 data;
};
struct TNimNode {
NU8 kind;
NI offset;
TNimType* typ;
NCSTRING name;
NI len;
TNimNode** sons;
};
struct tllstream158204 {
  TNimObject Sup;
NU8 Kind;
FILE* F;
NimStringDesc* S;
NI Rd;
NI Wr;
NI Lineoffset;
};
N_NIMCALL(void, closebaselexer_159036)(tbaselexer159018* l);
N_NOCONV(void, dealloc_4011)(void* p);
N_NIMCALL(void, llstreamclose_158238)(tllstream158204* s);
static N_INLINE(void, nimFrame)(TFrame* s);
static N_INLINE(void, popFrame)(void);
N_NIMCALL(void, fillbuffer_159073)(tbaselexer159018* l);
N_NIMCALL(void, hiddenraiseassert_71620)(NimStringDesc* msg);
static N_INLINE(NI, subInt)(NI a, NI b);
N_NOINLINE(void, raiseOverflow)(void);
static N_INLINE(NI, addInt)(NI a, NI b);
N_NIMCALL(NI, mulInt)(NI a, NI b);
N_NIMCALL(NI, llstreamread_158242)(tllstream158204* s, void* buf, NI buflen);
static N_INLINE(NI, divInt)(NI a, NI b);
N_NOINLINE(void, raiseDivByZero)(void);
N_NOCONV(void*, realloc_4007)(void* p, NI newsize);
N_NIMCALL(NI, fillbaselexer_159813)(tbaselexer159018* l, NI pos);
N_NIMCALL(NI, handlecr_159051)(tbaselexer159018* l, NI pos);
N_NIMCALL(NI, handlelf_159057)(tbaselexer159018* l, NI pos);
N_NIMCALL(void, skiputf8bom_160415)(tbaselexer159018* l);
N_NIMCALL(void, openbaselexer_159027)(tbaselexer159018* l, tllstream158204* inputstream, NI buflen);
N_NOCONV(void*, alloc_4001)(NI size);
N_NIMCALL(void, unsureAsgnRef)(void** dest, void* src);
N_NIMCALL(NI, getcolnumber_159046)(tbaselexer159018* l, NI pos);
N_NIMCALL(NimStringDesc*, getcurrentline_159041)(tbaselexer159018* l, NIM_BOOL marker);
N_NIMCALL(NimStringDesc*, copyString)(NimStringDesc* src);
N_NIMCALL(NimStringDesc*, addChar)(NimStringDesc* s, NIM_CHAR c);
static N_INLINE(void, appendString)(NimStringDesc* dest, NimStringDesc* src);
N_NIMCALL(NimStringDesc*, resizeString)(NimStringDesc* dest, NI addlen);
N_NIMCALL(NimStringDesc*, nsuRepeatChar)(NI count, NIM_CHAR c);
N_NIMCALL(NimStringDesc*, rawNewString)(NI space);
NIM_CONST TY104134 newlines_159014 = {
0x00, 0x24, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}
;
STRING_LITERAL(TMP1560, "L.sentinel < L.bufLen ", 22);
STRING_LITERAL(TMP1563, "0 <= toCopy ", 12);
STRING_LITERAL(TMP1571, "s < L.bufLen ", 13);
STRING_LITERAL(TMP1575, "L.bufLen - oldBufLen == oldBufLen ", 34);
STRING_LITERAL(TMP1581, "pos <= L.sentinel ", 18);
STRING_LITERAL(TMP1583, "L.buf[pos] == \'\\x0D\' ", 21);
STRING_LITERAL(TMP1584, "L.buf[pos] == \'\\x0A\' ", 21);
STRING_LITERAL(TMP1585, "0 < bufLen ", 11);
STRING_LITERAL(TMP1589, "", 0);
STRING_LITERAL(TMP1590, "\012", 1);
STRING_LITERAL(TMP1591, "^\012", 2);
extern TFrame* frameptr_12027;
extern TNimType NTI1009; /* TObject */
TNimType NTI159018; /* TBaseLexer */
extern TNimType NTI105; /* int */
extern TNimType NTI145; /* cstring */
extern TNimType NTI158206; /* PLLStream */

static N_INLINE(void, nimFrame)(TFrame* s) {
	(*s).prev = frameptr_12027;
	frameptr_12027 = s;
}

static N_INLINE(void, popFrame)(void) {
	frameptr_12027 = (*frameptr_12027).prev;
}

N_NIMCALL(void, closebaselexer_159036)(tbaselexer159018* l) {
	nimfr("closeBaseLexer", "nimlexbase.nim")
	nimln(71, "nimlexbase.nim");
	dealloc_4011(((void*) ((*l).Buf)));
	nimln(72, "nimlexbase.nim");
	llstreamclose_158238((*l).Stream);
	popFrame();
}

static N_INLINE(NI, subInt)(NI a, NI b) {
	NI result;
	result = 0;
	result = (NI)((NU64)(a) - (NU64)(b));
	{
		NIM_BOOL LOC3;
		LOC3 = (0 <= (NI)(result ^ a));
		if (LOC3) goto LA4;
		LOC3 = (0 <= (NI)(result ^ (NI)((NU64) ~(b))));
		LA4: ;
		if (!LOC3) goto LA5;
		goto BeforeRet;
	}
	LA5: ;
	raiseOverflow();
	BeforeRet: ;
	return result;
}

static N_INLINE(NI, addInt)(NI a, NI b) {
	NI result;
	result = 0;
	result = (NI)((NU64)(a) + (NU64)(b));
	{
		NIM_BOOL LOC3;
		LOC3 = (0 <= (NI)(result ^ a));
		if (LOC3) goto LA4;
		LOC3 = (0 <= (NI)(result ^ b));
		LA4: ;
		if (!LOC3) goto LA5;
		goto BeforeRet;
	}
	LA5: ;
	raiseOverflow();
	BeforeRet: ;
	return result;
}

static N_INLINE(NI, divInt)(NI a, NI b) {
	NI result;
	result = 0;
	{
		if (!(b == 0)) goto LA3;
		raiseDivByZero();
	}
	LA3: ;
	{
		NIM_BOOL LOC7;
		LOC7 = (a == (IL64(-9223372036854775807) - IL64(1)));
		if (!(LOC7)) goto LA8;
		LOC7 = (b == -1);
		LA8: ;
		if (!LOC7) goto LA9;
		raiseOverflow();
	}
	LA9: ;
	result = (NI64)(a / b);
	goto BeforeRet;
	BeforeRet: ;
	return result;
}

N_NIMCALL(void, fillbuffer_159073)(tbaselexer159018* l) {
	NI charsread;
	NI tocopy;
	NI s;
	NI oldbuflen;
	NI TMP1561;
	NI TMP1562;
	NI TMP1566;
	NI TMP1567;
	NI LOC13;
	NI TMP1568;
	NI TMP1569;
	nimfr("FillBuffer", "nimlexbase.nim")
	charsread = 0;
	tocopy = 0;
	s = 0;
	oldbuflen = 0;
	nimln(82, "nimlexbase.nim");
	{
		nimln(82, "nimlexbase.nim");
		nimln(82, "nimlexbase.nim");
		if (!!(((*l).Sentinel < (*l).Buflen))) goto LA3;
		nimln(82, "nimlexbase.nim");
		hiddenraiseassert_71620(((NimStringDesc*) &TMP1560));
	}
	LA3: ;
	nimln(83, "nimlexbase.nim");
	nimln(83, "nimlexbase.nim");
	nimln(83, "nimlexbase.nim");
	TMP1561 = subInt((*l).Buflen, (*l).Sentinel);
	TMP1562 = subInt((NI64)(TMP1561), 1);
	tocopy = (NI64)(TMP1562);
	nimln(84, "nimlexbase.nim");
	{
		nimln(84, "nimlexbase.nim");
		nimln(84, "nimlexbase.nim");
		if (!!((0 <= tocopy))) goto LA7;
		nimln(84, "nimlexbase.nim");
		hiddenraiseassert_71620(((NimStringDesc*) &TMP1563));
	}
	LA7: ;
	nimln(85, "nimlexbase.nim");
	{
		NI TMP1564;
		NI TMP1565;
		nimln(692, "system.nim");
		if (!(0 < tocopy)) goto LA11;
		nimln(86, "nimlexbase.nim");
		nimln(86, "nimlexbase.nim");
		TMP1564 = addInt((*l).Sentinel, 1);
		nimln(86, "nimlexbase.nim");
		TMP1565 = mulInt(tocopy, 1);
		memmove(((void*) ((*l).Buf)), ((void*) (&(*l).Buf[(NI64)(TMP1564)])), (NI64)(TMP1565));
	}
	LA11: ;
	nimln(88, "nimlexbase.nim");
	nimln(89, "nimlexbase.nim");
	nimln(88, "nimlexbase.nim");
	nimln(89, "nimlexbase.nim");
	nimln(89, "nimlexbase.nim");
	TMP1566 = addInt((*l).Sentinel, 1);
	TMP1567 = mulInt((NI64)(TMP1566), 1);
	LOC13 = llstreamread_158242((*l).Stream, ((void*) (&(*l).Buf[tocopy])), (NI64)(TMP1567));
	TMP1568 = divInt(LOC13, 1);
	charsread = (NI64)(TMP1568);
	nimln(90, "nimlexbase.nim");
	nimln(90, "nimlexbase.nim");
	TMP1569 = addInt(tocopy, charsread);
	s = (NI64)(TMP1569);
	nimln(91, "nimlexbase.nim");
	{
		NI TMP1570;
		nimln(91, "nimlexbase.nim");
		nimln(91, "nimlexbase.nim");
		TMP1570 = addInt((*l).Sentinel, 1);
		if (!(charsread < (NI64)(TMP1570))) goto LA16;
		nimln(92, "nimlexbase.nim");
		(*l).Buf[s] = 0;
		nimln(93, "nimlexbase.nim");
		(*l).Sentinel = s;
	}
	goto LA14;
	LA16: ;
	{
		nimln(96, "nimlexbase.nim");
		s = subInt(s, 1);
		nimln(97, "nimlexbase.nim");
		while (1) {
			nimln(98, "nimlexbase.nim");
			{
				nimln(98, "nimlexbase.nim");
				nimln(98, "nimlexbase.nim");
				if (!!((s < (*l).Buflen))) goto LA22;
				nimln(98, "nimlexbase.nim");
				hiddenraiseassert_71620(((NimStringDesc*) &TMP1571));
			}
			LA22: ;
			nimln(99, "nimlexbase.nim");
			while (1) {
				NIM_BOOL LOC25;
				nimln(99, "nimlexbase.nim");
				nimln(688, "system.nim");
				LOC25 = (0 <= s);
				if (!(LOC25)) goto LA26;
				nimln(99, "nimlexbase.nim");
				nimln(716, "system.nim");
				LOC25 = !((((NU8)((*l).Buf[s])) == ((NU8)(13)) || ((NU8)((*l).Buf[s])) == ((NU8)(10))));
				LA26: ;
				if (!LOC25) goto LA24;
				nimln(99, "nimlexbase.nim");
				s = subInt(s, 1);
			} LA24: ;
			nimln(100, "nimlexbase.nim");
			{
				nimln(688, "system.nim");
				if (!(0 <= s)) goto LA29;
				nimln(102, "nimlexbase.nim");
				(*l).Sentinel = s;
				nimln(103, "nimlexbase.nim");
				goto LA19;
			}
			goto LA27;
			LA29: ;
			{
				NI TMP1572;
				NI TMP1573;
				void* LOC32;
				NI TMP1576;
				NI LOC37;
				NI TMP1577;
				NI TMP1580;
				nimln(107, "nimlexbase.nim");
				oldbuflen = (*l).Buflen;
				nimln(108, "nimlexbase.nim");
				nimln(108, "nimlexbase.nim");
				TMP1572 = mulInt((*l).Buflen, 2);
				(*l).Buflen = (NI64)(TMP1572);
				nimln(109, "nimlexbase.nim");
				nimln(109, "nimlexbase.nim");
				nimln(109, "nimlexbase.nim");
				TMP1573 = mulInt((*l).Buflen, 1);
				LOC32 = realloc_4007(((void*) ((*l).Buf)), (NI64)(TMP1573));
				(*l).Buf = ((NCSTRING) (LOC32));
				nimln(110, "nimlexbase.nim");
				{
					NI TMP1574;
					nimln(110, "nimlexbase.nim");
					nimln(110, "nimlexbase.nim");
					nimln(110, "nimlexbase.nim");
					TMP1574 = subInt((*l).Buflen, oldbuflen);
					if (!!(((NI64)(TMP1574) == oldbuflen))) goto LA35;
					nimln(110, "nimlexbase.nim");
					hiddenraiseassert_71620(((NimStringDesc*) &TMP1575));
				}
				LA35: ;
				nimln(111, "nimlexbase.nim");
				nimln(112, "nimlexbase.nim");
				nimln(111, "nimlexbase.nim");
				nimln(112, "nimlexbase.nim");
				TMP1576 = mulInt(oldbuflen, 1);
				LOC37 = llstreamread_158242((*l).Stream, ((void*) (&(*l).Buf[oldbuflen])), (NI64)(TMP1576));
				TMP1577 = divInt(LOC37, 1);
				charsread = (NI64)(TMP1577);
				nimln(113, "nimlexbase.nim");
				{
					NI TMP1578;
					NI TMP1579;
					nimln(113, "nimlexbase.nim");
					if (!(charsread < oldbuflen)) goto LA40;
					nimln(114, "nimlexbase.nim");
					nimln(114, "nimlexbase.nim");
					TMP1578 = addInt(oldbuflen, charsread);
					(*l).Buf[(NI64)(TMP1578)] = 0;
					nimln(115, "nimlexbase.nim");
					nimln(115, "nimlexbase.nim");
					TMP1579 = addInt(oldbuflen, charsread);
					(*l).Sentinel = (NI64)(TMP1579);
					nimln(116, "nimlexbase.nim");
					goto LA19;
				}
				LA40: ;
				nimln(117, "nimlexbase.nim");
				nimln(117, "nimlexbase.nim");
				TMP1580 = subInt((*l).Buflen, 1);
				s = (NI64)(TMP1580);
			}
			LA27: ;
		} LA19: ;
	}
	LA14: ;
	popFrame();
}

N_NIMCALL(NI, fillbaselexer_159813)(tbaselexer159018* l, NI pos) {
	NI result;
	nimfr("fillBaseLexer", "nimlexbase.nim")
	result = 0;
	nimln(120, "nimlexbase.nim");
	{
		nimln(120, "nimlexbase.nim");
		nimln(120, "nimlexbase.nim");
		if (!!((pos <= (*l).Sentinel))) goto LA3;
		nimln(120, "nimlexbase.nim");
		hiddenraiseassert_71620(((NimStringDesc*) &TMP1581));
	}
	LA3: ;
	nimln(121, "nimlexbase.nim");
	{
		NI TMP1582;
		nimln(121, "nimlexbase.nim");
		if (!(pos < (*l).Sentinel)) goto LA7;
		nimln(122, "nimlexbase.nim");
		nimln(122, "nimlexbase.nim");
		TMP1582 = addInt(pos, 1);
		result = (NI64)(TMP1582);
	}
	goto LA5;
	LA7: ;
	{
		nimln(124, "nimlexbase.nim");
		fillbuffer_159073(l);
		nimln(125, "nimlexbase.nim");
		(*l).Bufpos = 0;
		nimln(126, "nimlexbase.nim");
		result = 0;
	}
	LA5: ;
	nimln(127, "nimlexbase.nim");
	(*l).Linestart = result;
	popFrame();
	return result;
}

N_NIMCALL(NI, handlecr_159051)(tbaselexer159018* l, NI pos) {
	NI result;
	nimfr("HandleCR", "nimlexbase.nim")
	result = 0;
	nimln(130, "nimlexbase.nim");
	{
		nimln(130, "nimlexbase.nim");
		nimln(130, "nimlexbase.nim");
		if (!!(((NU8)((*l).Buf[pos]) == (NU8)(13)))) goto LA3;
		nimln(130, "nimlexbase.nim");
		hiddenraiseassert_71620(((NimStringDesc*) &TMP1583));
	}
	LA3: ;
	nimln(131, "nimlexbase.nim");
	(*l).Linenumber = addInt((*l).Linenumber, 1);
	nimln(132, "nimlexbase.nim");
	result = fillbaselexer_159813(l, pos);
	nimln(133, "nimlexbase.nim");
	{
		nimln(133, "nimlexbase.nim");
		if (!((NU8)((*l).Buf[result]) == (NU8)(10))) goto LA7;
		nimln(134, "nimlexbase.nim");
		result = fillbaselexer_159813(l, result);
	}
	LA7: ;
	popFrame();
	return result;
}

N_NIMCALL(NI, handlelf_159057)(tbaselexer159018* l, NI pos) {
	NI result;
	nimfr("HandleLF", "nimlexbase.nim")
	result = 0;
	nimln(137, "nimlexbase.nim");
	{
		nimln(137, "nimlexbase.nim");
		nimln(137, "nimlexbase.nim");
		if (!!(((NU8)((*l).Buf[pos]) == (NU8)(10)))) goto LA3;
		nimln(137, "nimlexbase.nim");
		hiddenraiseassert_71620(((NimStringDesc*) &TMP1584));
	}
	LA3: ;
	nimln(138, "nimlexbase.nim");
	(*l).Linenumber = addInt((*l).Linenumber, 1);
	nimln(139, "nimlexbase.nim");
	result = fillbaselexer_159813(l, pos);
	popFrame();
	return result;
}

N_NIMCALL(void, skiputf8bom_160415)(tbaselexer159018* l) {
	nimfr("skip_UTF_8_BOM", "nimlexbase.nim")
	nimln(142, "nimlexbase.nim");
	{
		NIM_BOOL LOC3;
		NIM_BOOL LOC4;
		nimln(142, "nimlexbase.nim");
		nimln(142, "nimlexbase.nim");
		nimln(142, "nimlexbase.nim");
		LOC4 = ((NU8)((*l).Buf[0]) == (NU8)(239));
		if (!(LOC4)) goto LA5;
		nimln(142, "nimlexbase.nim");
		LOC4 = ((NU8)((*l).Buf[1]) == (NU8)(187));
		LA5: ;
		LOC3 = LOC4;
		if (!(LOC3)) goto LA6;
		nimln(142, "nimlexbase.nim");
		LOC3 = ((NU8)((*l).Buf[2]) == (NU8)(191));
		LA6: ;
		if (!LOC3) goto LA7;
		nimln(143, "nimlexbase.nim");
		(*l).Bufpos = addInt((*l).Bufpos, 3);
		nimln(144, "nimlexbase.nim");
		(*l).Linestart = addInt((*l).Linestart, 3);
	}
	LA7: ;
	popFrame();
}

N_NIMCALL(void, openbaselexer_159027)(tbaselexer159018* l, tllstream158204* inputstream, NI buflen) {
	NI TMP1586;
	void* LOC5;
	NI TMP1587;
	nimfr("openBaseLexer", "nimlexbase.nim")
	nimln(147, "nimlexbase.nim");
	{
		nimln(147, "nimlexbase.nim");
		nimln(147, "nimlexbase.nim");
		if (!!((0 < buflen))) goto LA3;
		nimln(147, "nimlexbase.nim");
		hiddenraiseassert_71620(((NimStringDesc*) &TMP1585));
	}
	LA3: ;
	nimln(148, "nimlexbase.nim");
	(*l).Bufpos = 0;
	nimln(149, "nimlexbase.nim");
	(*l).Buflen = buflen;
	nimln(150, "nimlexbase.nim");
	nimln(150, "nimlexbase.nim");
	nimln(150, "nimlexbase.nim");
	TMP1586 = mulInt(buflen, 1);
	LOC5 = alloc_4001((NI64)(TMP1586));
	(*l).Buf = ((NCSTRING) (LOC5));
	nimln(151, "nimlexbase.nim");
	nimln(151, "nimlexbase.nim");
	TMP1587 = subInt(buflen, 1);
	(*l).Sentinel = (NI64)(TMP1587);
	nimln(152, "nimlexbase.nim");
	(*l).Linestart = 0;
	nimln(153, "nimlexbase.nim");
	(*l).Linenumber = 1;
	nimln(154, "nimlexbase.nim");
	unsureAsgnRef((void**) &(*l).Stream, inputstream);
	nimln(155, "nimlexbase.nim");
	fillbuffer_159073(l);
	nimln(156, "nimlexbase.nim");
	skiputf8bom_160415(l);
	popFrame();
}

N_NIMCALL(NI, getcolnumber_159046)(tbaselexer159018* l, NI pos) {
	NI result;
	NI TMP1588;
	nimfr("getColNumber", "nimlexbase.nim")
	result = 0;
	nimln(159, "nimlexbase.nim");
	nimln(159, "nimlexbase.nim");
	nimln(159, "nimlexbase.nim");
	TMP1588 = subInt(pos, (*l).Linestart);
	if ((NI64)(TMP1588) == (IL64(-9223372036854775807) - IL64(1))) raiseOverflow();
	result = (NI64)abs((NI64)(TMP1588));
	popFrame();
	return result;
}

static N_INLINE(void, appendString)(NimStringDesc* dest, NimStringDesc* src) {
	memcpy(((NCSTRING) (&(*dest).data[((*dest).Sup.len)- 0])), ((NCSTRING) ((*src).data)), (NI64)((*src).Sup.len + 1));
	(*dest).Sup.len += (*src).Sup.len;
}

N_NIMCALL(NimStringDesc*, getcurrentline_159041)(tbaselexer159018* l, NIM_BOOL marker) {
	NimStringDesc* result;
	NI i;
	nimfr("getCurrentLine", "nimlexbase.nim")
	result = 0;
	nimln(162, "nimlexbase.nim");
	result = copyString(((NimStringDesc*) &TMP1589));
	nimln(163, "nimlexbase.nim");
	i = (*l).Linestart;
	nimln(164, "nimlexbase.nim");
	while (1) {
		nimln(164, "nimlexbase.nim");
		nimln(716, "system.nim");
		if (!!((((NU8)((*l).Buf[i])) == ((NU8)(13)) || ((NU8)((*l).Buf[i])) == ((NU8)(10)) || ((NU8)((*l).Buf[i])) == ((NU8)(0))))) goto LA1;
		nimln(165, "nimlexbase.nim");
		result = addChar(result, (*l).Buf[i]);
		nimln(166, "nimlexbase.nim");
		i = addInt(i, 1);
	} LA1: ;
	nimln(167, "nimlexbase.nim");
	result = resizeString(result, 1);
appendString(result, ((NimStringDesc*) &TMP1590));
	nimln(168, "nimlexbase.nim");
	{
		NimStringDesc* LOC6;
		NI LOC7;
		NimStringDesc* LOC8;
		if (!marker) goto LA4;
		nimln(169, "nimlexbase.nim");
		nimln(169, "nimlexbase.nim");
		LOC6 = 0;
		nimln(169, "nimlexbase.nim");
		nimln(169, "nimlexbase.nim");
		LOC7 = getcolnumber_159046(l, (*l).Bufpos);
		LOC8 = 0;
		LOC8 = nsuRepeatChar(LOC7, 32);
		LOC6 = rawNewString(LOC8->Sup.len + 2);
appendString(LOC6, LOC8);
appendString(LOC6, ((NimStringDesc*) &TMP1591));
		result = resizeString(result, LOC6->Sup.len + 0);
appendString(result, LOC6);
	}
	LA4: ;
	popFrame();
	return result;
}
N_NOINLINE(void, nimlexbaseInit)(void) {
	nimfr("nimlexbase", "nimlexbase.nim")
	popFrame();
}

N_NOINLINE(void, nimlexbaseDatInit)(void) {
static TNimNode* TMP1828[7];
static TNimNode TMP1535[8];
NTI159018.size = sizeof(tbaselexer159018);
NTI159018.kind = 17;
NTI159018.base = (&NTI1009);
NTI159018.flags = 2;
TMP1828[0] = &TMP1535[1];
TMP1535[1].kind = 1;
TMP1535[1].offset = offsetof(tbaselexer159018, Bufpos);
TMP1535[1].typ = (&NTI105);
TMP1535[1].name = "bufpos";
TMP1828[1] = &TMP1535[2];
TMP1535[2].kind = 1;
TMP1535[2].offset = offsetof(tbaselexer159018, Buf);
TMP1535[2].typ = (&NTI145);
TMP1535[2].name = "buf";
TMP1828[2] = &TMP1535[3];
TMP1535[3].kind = 1;
TMP1535[3].offset = offsetof(tbaselexer159018, Buflen);
TMP1535[3].typ = (&NTI105);
TMP1535[3].name = "bufLen";
TMP1828[3] = &TMP1535[4];
TMP1535[4].kind = 1;
TMP1535[4].offset = offsetof(tbaselexer159018, Stream);
TMP1535[4].typ = (&NTI158206);
TMP1535[4].name = "stream";
TMP1828[4] = &TMP1535[5];
TMP1535[5].kind = 1;
TMP1535[5].offset = offsetof(tbaselexer159018, Linenumber);
TMP1535[5].typ = (&NTI105);
TMP1535[5].name = "LineNumber";
TMP1828[5] = &TMP1535[6];
TMP1535[6].kind = 1;
TMP1535[6].offset = offsetof(tbaselexer159018, Sentinel);
TMP1535[6].typ = (&NTI105);
TMP1535[6].name = "sentinel";
TMP1828[6] = &TMP1535[7];
TMP1535[7].kind = 1;
TMP1535[7].offset = offsetof(tbaselexer159018, Linestart);
TMP1535[7].typ = (&NTI105);
TMP1535[7].name = "lineStart";
TMP1535[0].len = 7; TMP1535[0].kind = 2; TMP1535[0].sons = &TMP1828[0];
NTI159018.node = &TMP1535[0];
}
