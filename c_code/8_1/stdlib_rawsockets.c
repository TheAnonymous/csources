/* Generated by Nim Compiler v0.10.3 */
/*   (c) 2015 Andreas Rumpf */
/* The generated code is subject to the original license. */
#define NIM_INTBITS 32
#include "nimbase.h"

#include <sys/socket.h>

#include <netinet/in.h>

#include <netdb.h>

#include <string.h>

#include <sys/select.h>

#include <unistd.h>
typedef struct NimStringDesc NimStringDesc;
typedef struct TGenericSeq TGenericSeq;
typedef struct oserror3433 oserror3433;
typedef struct systemerror3429 systemerror3429;
typedef struct Exception Exception;
typedef struct TNimObject TNimObject;
typedef struct TNimType TNimType;
typedef struct TNimNode TNimNode;
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
typedef struct TY523225 TY523225;
typedef struct tbasechunk27038 tbasechunk27038;
typedef struct tfreecell27030 tfreecell27030;
struct  TGenericSeq  {
NI len;
NI reserved;
};
struct  NimStringDesc  {
  TGenericSeq Sup;
NIM_CHAR data[SEQ_DECL_SIZE];
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
struct  oserror3433  {
  systemerror3429 Sup;
NI32 Errorcode;
};
struct  TNimNode  {
NU8 kind;
NI offset;
TNimType* typ;
NCSTRING name;
NI len;
TNimNode** sons;
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
typedef NIM_CHAR TY105380[256];
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
struct TY523225 {
  TGenericSeq Sup;
  int data[SEQ_DECL_SIZE];
};
N_NIMCALL(int, toint_515629)(NU8 domain);
N_NIMCALL(int, toint_515635)(NU8 typ);
N_NIMCALL(int, toint_515641)(NU8 p);
N_NIMCALL(NI16, ntohs_516607)(NI16 x);
N_NIMCALL(NI32, ntohl_516431)(NI32 x);
N_NIMCALL(NimStringDesc*, HEX24_6401)(NU64 x);
N_NIMCALL(void*, newObj)(TNimType* typ, NI size);
N_NIMCALL(NimStringDesc*, cstrToNimstr)(NCSTRING str);
static N_INLINE(void, asgnRefNoCycle)(void** dest, void* src);
static N_INLINE(tcell45947*, usrtocell_49446)(void* usr);
static N_INLINE(void, rtladdzct_51004)(tcell45947* c);
N_NOINLINE(void, addzct_49417)(tcellseq45963* s, tcell45947* c);
N_NIMCALL(void, raiseException)(Exception* e, NCSTRING ename);
N_NIMCALL(struct timeval, timevalfrommilliseconds_518428)(NI timeout);
N_NIMCALL(void, createfdset_518445)(fd_set* fd, TY523225* s, NI* m);
N_NIMCALL(void, prunesocketset_518646)(TY523225** s, fd_set* fd);
N_NIMCALL(TGenericSeq*, setLengthSeq)(TGenericSeq* seq, NI elemsize, NI newlen);
int osinvalidsocket_515460;
extern TNimType NTI114812; /* ref OSError */
extern TNimType NTI3433; /* OSError */
extern tgcheap47816 gch_47844;

N_NIMCALL(int, toint_515629)(NU8 domain) {
	int result;
	result = 0;
	switch (domain) {
	case ((NU8) 0):
	{
		result = AF_UNIX;
	}
	break;
	case ((NU8) 2):
	{
		result = AF_INET;
	}
	break;
	case ((NU8) 23):
	{
		result = AF_INET6;
	}
	break;
	default:
	{
	}
	break;
	}
	return result;
}

N_NIMCALL(int, toint_515635)(NU8 typ) {
	int result;
	result = 0;
	switch (typ) {
	case ((NU8) 1):
	{
		result = SOCK_STREAM;
	}
	break;
	case ((NU8) 2):
	{
		result = SOCK_DGRAM;
	}
	break;
	case ((NU8) 5):
	{
		result = SOCK_SEQPACKET;
	}
	break;
	case ((NU8) 3):
	{
		result = SOCK_RAW;
	}
	break;
	default:
	{
	}
	break;
	}
	return result;
}

N_NIMCALL(int, toint_515641)(NU8 p) {
	int result;
	result = 0;
	switch (p) {
	case ((NU8) 6):
	{
		result = IPPROTO_TCP;
	}
	break;
	case ((NU8) 17):
	{
		result = IPPROTO_UDP;
	}
	break;
	case ((NU8) 18):
	{
		result = IPPROTO_IP;
	}
	break;
	case ((NU8) 19):
	{
		result = IPPROTO_IPV6;
	}
	break;
	case ((NU8) 20):
	{
		result = IPPROTO_RAW;
	}
	break;
	case ((NU8) 21):
	{
		result = IPPROTO_ICMP;
	}
	break;
	default:
	{
	}
	break;
	}
	return result;
}

N_NIMCALL(int, newrawsocket_515804)(NU8 domain, NU8 typ, NU8 protocol) {
	int result;
	int LOC1;
	int LOC2;
	int LOC3;
	result = 0;
	LOC1 = 0;
	LOC1 = toint_515629(domain);
	LOC2 = 0;
	LOC2 = toint_515635(typ);
	LOC3 = 0;
	LOC3 = toint_515641(protocol);
	result = socket(LOC1, LOC2, LOC3);
	return result;
}

N_NIMCALL(NI16, ntohs_516607)(NI16 x) {
	NI16 result;
	result = 0;
	result = (NI16)((NI16)((NU16)(x) >> (NU16)(((NI16) 8))) | (NI16)((NU16)(x) << (NU16)(((NI16) 8))));
	return result;
}

N_NIMCALL(NI16, htons_516817)(NI16 x) {
	NI16 result;
	result = 0;
	result = ntohs_516607(x);
	return result;
}

N_NIMCALL(NI32, ntohl_516431)(NI32 x) {
	NI32 result;
	result = 0;
	result = (NI32)((NI32)((NI32)((NI32)((NU32)(x) >> (NU32)(((NI32) 24))) | (NI32)((NI32)((NU32)(x) >> (NU32)(((NI32) 8))) & ((NI32) 65280))) | (NI32)((NI32)((NU32)(x) << (NU32)(((NI32) 8))) & ((NI32) 16711680))) | (NI32)((NU32)(x) << (NU32)(((NI32) 24))));
	return result;
}

N_NIMCALL(NI32, htonl_516807)(NI32 x) {
	NI32 result;
	result = 0;
	result = ntohl_516431(x);
	return result;
}

N_NIMCALL(int, bindaddr_516014)(int socket, struct sockaddr* name, socklen_t namelen) {
	int result;
	result = 0;
	result = bind(socket, name, namelen);
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
			if (!((NU32)((*c).Refcount) < (NU32)(((NI) 8)))) goto LA11;
			rtladdzct_51004(c);
		}
		LA11: ;
	}
	LA7: ;
	(*dest) = src;
}

N_NIMCALL(struct addrinfo*, getaddrinfo_516208)(NimStringDesc* address, NU16 port, NU8 af, NU8 typ, NU8 prot) {
	struct addrinfo* result;
	struct addrinfo hints;
	int gairesult;
	NimStringDesc* LOC1;
	result = 0;
	memset((void*)(&hints), 0, sizeof(hints));
	result = NIM_NIL;
	hints.ai_family = toint_515629(af);
	hints.ai_socktype = toint_515635(typ);
	hints.ai_protocol = toint_515641(prot);
	LOC1 = 0;
	LOC1 = HEX24_6401(port);
	gairesult = getaddrinfo(address->data, LOC1->data, (&hints), &result);
	{
		oserror3433* e_516403;
		NCSTRING LOC6;
		if (!!((gairesult == ((NI32) 0)))) goto LA4;
		e_516403 = 0;
		e_516403 = (oserror3433*) newObj((&NTI114812), sizeof(oserror3433));
		(*e_516403).Sup.Sup.Sup.m_type = (&NTI3433);
		LOC6 = 0;
		LOC6 = gai_strerror(gairesult);
		asgnRefNoCycle((void**) (&(*e_516403).Sup.Sup.message), cstrToNimstr(LOC6));
		raiseException((Exception*)e_516403, "OSError");
	}
	LA4: ;
	return result;
}

N_NIMCALL(void, dealloc_516421)(struct addrinfo* ai) {
	freeaddrinfo(ai);
}

N_NIMCALL(int, listen_516027)(int socket, int backlog) {
	int result;
	result = 0;
	result = listen(socket, backlog);
	return result;
}

N_NIMCALL(struct timeval, timevalfrommilliseconds_518428)(NI timeout) {
	struct timeval result;
	memset((void*)(&result), 0, sizeof(result));
	{
		NI seconds;
		if (!!((timeout == ((NI) -1)))) goto LA3;
		seconds = (NI32)(timeout / ((NI) 1000));
		result.tv_sec = ((NI) (((NI32) (seconds))));
		result.tv_usec = ((NI) (((NI32) ((NI32)((NI32)(timeout - (NI32)(seconds * ((NI) 1000))) * ((NI) 1000))))));
	}
	LA3: ;
	return result;
}

N_NIMCALL(void, createfdset_518445)(fd_set* fd, TY523225* s, NI* m) {
	FD_ZERO(fd);
	{
		int i_518611;
		NI i_518628;
		NI l_518630;
		i_518611 = 0;
		i_518628 = ((NI) 0);
		l_518630 = s->Sup.len;
		{
			while (1) {
				if (!(i_518628 < l_518630)) goto LA3;
				i_518611 = s->data[i_518628];
				(*m) = (((*m) >= ((NI) (i_518611))) ? (*m) : ((NI) (i_518611)));
				FD_SET(i_518611, fd);
				i_518628 += ((NI) 1);
			} LA3: ;
		}
	}
}

N_NIMCALL(void, prunesocketset_518646)(TY523225** s, fd_set* fd) {
	NI i;
	NI l;
	i = ((NI) 0);
	l = (*s)->Sup.len;
	{
		while (1) {
			if (!(i < l)) goto LA2;
			{
				int LOC5;
				LOC5 = 0;
				LOC5 = FD_ISSET((*s)->data[i], fd);
				if (!(LOC5 == ((NI32) 0))) goto LA6;
				(*s)->data[i] = (*s)->data[(NI32)(l - ((NI) 1))];
				l -= ((NI) 1);
			}
			goto LA3;
			LA6: ;
			{
				i += ((NI) 1);
			}
			LA3: ;
		} LA2: ;
	}
	(*s) = (TY523225*) setLengthSeq(&((*s))->Sup, sizeof(int), l);
}

N_NIMCALL(NI, select_518713)(TY523225** readfds, NI timeout) {
	NI result;
	struct timeval tv;
	fd_set rd;
	NI m;
	result = 0;
	tv = timevalfrommilliseconds_518428(timeout);
	memset((void*)(&rd), 0, sizeof(rd));
	m = ((NI) 0);
	createfdset_518445((&rd), (*readfds), (&m));
	{
		int LOC5;
		if (!!((timeout == ((NI) -1)))) goto LA3;
		LOC5 = 0;
		LOC5 = select(((int) ((NI32)(m + ((NI) 1)))), (&rd), NIM_NIL, NIM_NIL, (&tv));
		result = ((NI) (LOC5));
	}
	goto LA1;
	LA3: ;
	{
		int LOC7;
		LOC7 = 0;
		LOC7 = select(((int) ((NI32)(m + ((NI) 1)))), (&rd), NIM_NIL, NIM_NIL, NIM_NIL);
		result = ((NI) (LOC7));
	}
	LA1: ;
	prunesocketset_518646(readfds, (&rd));
	return result;
}

N_NIMCALL(void, close_515828)(int socket) {
	int LOC1;
	LOC1 = 0;
	LOC1 = close(socket);
}
NIM_EXTERNC N_NOINLINE(void, stdlib_rawsocketsInit)(void) {
	osinvalidsocket_515460 = ((int) -1);
}

NIM_EXTERNC N_NOINLINE(void, stdlib_rawsocketsDatInit)(void) {
}

