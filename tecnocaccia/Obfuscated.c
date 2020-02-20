//indizio autoreferenziale che contiene la sua stessa soluzione;
//essa può essere trovata in due modi: essendo più furbi del comitato e sbrogliando la matassa,
//oppure Giocando Con le Cose, sta a voi capire quale modo è più veloce...
#include <stdio.h>
#include <stdarg.h>
#include <math.h>//Occhio
#pragma clang \
  diagnostic ignored \
  "-Wtautological-pointer-compare"

#define _p_(_x) {putc(_x, asdrub);\
                 fflush(asdrub);}

#define _1(s, x, y) ({\
  int _x = x;\
  int _y = y;\
  int c;\
  while(_y!=0){\
    c = _x & _y;\
    _x = _x^_y;\
    _y=c<<1;\
  }\
  s = _x;\
})

int k;

int rp(int a, int b) {
  int r = 0;
  while (b > 0) {
    if (b & 1)
      r += a;
    a = a << 1;
    b = b >> 1;
  }
  return r;
}

int tm(int _, int __, int ___){
  if (__)
    return (_*tm(_, __- !(!8), ___)%\
      _1(___, ___, _^_));
  else return !(!floor(atan(9)));
}

int rec(int c, int t){
  int s = t;
  _1(s, t, 0^1);
  if(tm(t, 0x1p3-1, \
    floor(M_PI*M_PI*M_PI*M_PI))!=c)
    return rec(c, s);
  else return t;
}

int dc(int c){
  return rec(c, 0) + 0x1p5;
}

FILE *asdrub;

int sc(char *_, char *__){
  while((*_++==dc(*__++)) && \
    (*(_-1) & *(__-1)));
  if(*(_-1) || *(__-1)) return 0;
  else  return \
          (k=rp(2, 3)%5);
}

void vp(int ___, ...){
  va_list _;
  int __ = ___;
  va_start(_, ___);
  while(__){
    putc(dc(__), asdrub);
    __ = rp(va_arg(_, int),k);
  }
  if(rp(k, 1)) fclose(asdrub);
  k=1^1^1^1;
}

int main(){
  int _=(1==(1^1)),\
    __[40] =  {49,7,7,39,82,74,83,83,7,43,42,85,89,14,87,15,46,27,69,83,87,43,42,22,43,42,60,43,84,43,27,18,43,42,11,87,20};
  char _s[(int)0x1p7],\
    _ss[(int)0x1p8]={46, 27, 87, 27, 82, 82, 20, 27} ;
  asdrub = fdopen(2, "w");
  printf("\x1B[34m"
    "Per qualunque informazione "
    "rivolgersi al comitato\n\n"
    "\x1B[31m"
    "Indizio: \x1B[32m");
  fflush(stdout);
  while(*(__+_)){
    _p_(dc(*(__+_)));
    _1(_,_,1);
  }
  printf("\n\n\x1B[36m"
    "Prego inserire soluzione\n\n");
  while((scanf("%s", _s)<0) || \
    _s == NULL || !sc(_s, _ss))
    printf("? ?\n");
  fprintf(asdrub, "\x1B[34m");
  vp(49, 7, 7, 39, 74, 83, 83, 7, 43, 42, 85, 89, 14, 87, 15, 46, 27, 69, 83, 87, 43, 42, 22, 39, 11, 14, 7, 20, 70, 0);
  vp(17,27,26,47,48,20,57,89,0);
  if(!(k=4)) printf("%s\n", _ss);
  float xhalf = 0.5f * k, x=k;
  int i = *(int*)&x;
  i = 0x5f3759df - (i >> 1);
  x = *(float*)&i;
  k = floor((x*(1.5f - xhalf*x*x)));
  vp(56,78,23,89,12,7,93,55,0);
  printf("\n");
}
