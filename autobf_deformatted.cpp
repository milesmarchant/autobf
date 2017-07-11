// "Formatted"

auto o_t='a'-'a';;;auto o_tt='u'-'t';;;;auto ttt_t
='u'-'a';auto ttt_tt='t'-'o';;;;;;auto o_o_t=ttt_t
+ttt_t+ttt_t+o_tt+o_tt;;auto   o_o_tt=ttt_t+ttt_t+
ttt_t;;;;;;;;;                    ;;auto o_o_tt_t=
ttt_t +ttt_t +                    o_tt+o_tt+o_tt;;
auto o_o_tt_tt                    =o_o_tt_t+o_tt +
o_tt;;;;;;;;;;                    auto o_o_tt_tt_t
=o_o_tt_tt+o_tt                   ;;;;;;;;;;;;auto
o_o_tt_tt_tt=o_o_tt_t+o_tt;auto o_o_tt_tt_tt_t='a'
-ttt_tt-o_tt;auto o_o_tt_tt_tt_tt =o_o_tt_tt_tt_t
+o_tt+o_tt;auto                   out=[](){};auto 
o_uuuu= +[](){}                   ;auto a=[](auto&
u){++u;};;;auto                   aa=[](auto& u) {
--u;};auto t=[]                   (auto u){++(*u);
};;;;auto tt=[]                   (auto u){--(*u);
};;;auto o= [](                   auto u, auto uu)


{*uu = *u;};;;;                   auto oo=[] (auto
u,auto uu){*u=*                   uu;};;;;;;  auto
o_oooooo='a';;;                   auto o_aa=o_t;;;
auto o_a="";;;;                   auto o_aaa     =
&o_oooooo;;;;;;                   auto u=[]() { (*
o_aaa==o_t )? (                   o_a++, (*  o_a==
o_o_tt_tt_tt_t)                   ?(o_aa++,out( ) )
:(((((((((* o_a                   ==o_o_tt_tt_tt_tt
))))))))?((o_aa                   --,out())):out())
,(((o_aa!=o_t))                   )?(o_uuuu()):out(
)):out();};auto uu=[](){(*o_a==o_o_tt_tt_tt_t)?(o_aa
++,out()):((((((((((((((*o_a==o_o_tt_tt_tt_tt)))))))
))))))?(o_aa--,out()):out());;;o_a--;;;(o_aa!=o_t)?(


o_uuuu()):out();};auto aauuttoo_uuuu=+[](){};;;;;;;;
;auto a_a=&o_oooooo;auto a_aa=&o_oooooo;;;;auto t_a=
&o_oooooo;;;;;;;;;;auto u_aa=o_t;;auto u_aaa=o_t;;;;
               ;auto t_aaaa="";;;;
               auto aauuttoo_u=[](
               ){(*t_aaaa ==  o_t)
               ?out(): ((*t_aaaa==
               o_o_t)?a(t_a),out():
               (*t_aaaa==o_o_tt)?aa
               (t_a),out():(*t_aaaa
               ==o_o_tt_t)?t(t_a) ,
               out():(*t_aaaa    ==
               o_o_tt_tt)?tt(t_a) ,
               out():  (*t_aaaa  ==
               o_o_tt_tt_t)?o(t_a ,
               a_a+u_aa),++u_aa   ,
               

out():(*t_aaaa==o_o_tt_tt_tt)?oo(t_a,a_aa+u_aaa), ++
u_aaa,out():(*t_aaaa==o_o_tt_tt_tt_t)?o_uuuu=u,o_a =
t_aaaa,o_aa    =                   o_tt,o_aaa=t_a,u(
),t_aaaa=o_a,out                   (): ( *t_aaaa  ==
o_o_tt_tt_tt_tt)                   ?o_uuuu=uu, o_a =
t_aaaa,o_aa=o_t,                   o_aaa = t_a, uu()
,t_aaaa=o_a,out                    ():out(),t_aaaa++
,aauuttoo_uuuu())                  ;};auto aauuttoo=
[](auto&a_,auto&                   aa_,auto&aaa_   ,
auto&aaaa_)    {                   a_a=aa_;a_aa=aaa_
;;;;;;;;;t_a=a_;                   ;;u_aa=o_t;u_aaa=
o_t;t_aaaa=aaaa_;                  ;;;;;;;;;;;;;;;;;
;;;;;;;;;;;;;;;;;                  ;;;;;;;;;;;;;;;;;
;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;
;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;
  
  
aauuttoo_uuuu = aauuttoo_u;aauuttoo_u();};

// non-challenge obeying entry point
#include <memory>
#include <iostream>
int main(int argc, char **argv)
{
  char data[4096];
  memset(data, '\0', sizeof(char) * 4096);
  
  char output[4096];
  memset(output, '\0', sizeof(char) * 4096);
  
  char input[4096];
  if(argc > 1)
    strncpy(input, argv[1], 4096);
  else
    memset(input, '\0', sizeof(char) * 4096);
  
  input[4096 - 1] = '\0';
  
  const char *program = "++++++++[>++++[>++>+++>+++>+<<<<-]>+>->+>>+[<]<-]>>.>>---.+++++++..+++.>.<<-.>.+++.------.--------.>+.>++."; // prints Hello World!
  //const char *program = "+++++++."; // beeps
  //const char *program = ">,[>,]<[.<]"; // reverses the input
  
  
  // launch interpreter
  aauuttoo(data, output, input, program);
  
  std::cout << output;
  
}
