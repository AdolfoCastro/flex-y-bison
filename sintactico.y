%{

/**************************************************************** 
                     * Declaraciones en C *
 ****************************************************************/
	#include <stdio.h>
	#include <stdlib.h>
	#include <string.h>
	#include <math.h>
  #include "stack.c"
  #include "tvariables.c"

	extern int yylex(void);
	extern char *yytext;
	extern int linea;
  extern FILE *yyin;
  void yyerror(char *s);

  void unoExpInt(char *nombre);
  void unoExpFloat(char *nombre);
  void unoExpStr(char *nombre);
  void unoExpBool(char *nombre);
  void dosExp(int operando);
  void tresExp(int operando);
  void cuatroExp();
  void cincoExp();
  void seisExp();
  void sieteExp();
  void ochoExp();
  void nueveExp();
  void diezExp(char *nombre);

	int memoriaInt();
  int operando;
  int gltc;
  int eragltc;
  int estipo;
  char *nomConsInt;
  char *nomConsFloat;

  StackNodePtr apuntadorApOper;


  int esSumResMulDiv;

  char *nombrefuncion;
  TproNodoPtr startProList = NULL;
%}
/*******************************************************************
                       Declaraciones de Bison *
 *******************************************************************/
%union
{
  float real;
  int numero;
  char* texto;
}

%start programa;

%token <texto> ID
%token <texto> NVAR
%token <numero> CINT
%token <real> CFLOAT
%token <texto> CSTR
%token <texto> CBOOL

%token PROG
%token VAR
%token NEW
%token PRINT
%token FUNC
%token MAIN
%token READ
%token INT
%token FLOAT
%token STR
%token BOOL
%token LIST

%token IF
%token ELSE
%token FOR

%token PARA
%token PARC
%token COMA
%token IGUAL
%token LLAVEA
%token LLAVEC
%token PTCM
%token DOSP
%token MAYOR
%token MENOR
%token DIFE
%token MAS
%token MENOS
%token ASTE
%token SLASH
%token AND
%token OR
%token COMILLA

%%
/*****************************************************************
                   * Reglas Gramaticales *
 *****************************************************************/
/**********programa*************/
programa:PROG ID LLAVEA {gltc=1;}{insertPro(&startProList,"Global",5,1);}a {gltc=2;} main b LLAVEC {printf("Programa hecho \n");};
a:vars a;
a:vacio;
b:funcion b;
b:vacio;

/**********vars*************/
vars:tipo NVAR cc c PTCM {
  if (estipo==1){
    unoExpInt($2);
    //printf("%s\n",$2 );
  }
  if (estipo==2){
    unoExpFloat($2);
    //printf("%s\n",$2 );
  }
  if (estipo==3){
    unoExpStr($2);
    //printf("%s\n",$2 );
  }
  if (estipo==4){
    unoExpBool($2);
    //printf("%s\n",$2 );
  }
};
c:IGUAL d;
c:vacio;
cc:COMA NVAR cc{
  if (estipo==1){
    unoExpInt($2);
    //printf("%s\n",$2 );
  }
  if (estipo==2){
    unoExpFloat($2);
    //printf("%s\n",$2 );
  }
  if (estipo==3){
    unoExpStr($2);
    //printf("%s\n",$2 );
  }
  if (estipo==4){
    unoExpBool($2);
    //printf("%s\n",$2 );
  }
};
cc:vacio;

d:NEW estr;
d:COMILLA CSTR COMILLA;
d:CINT;
d:CFLOAT;

/**********tipo*************/
tipo:INT{estipo=1;};
tipo:FLOAT{estipo=2;};
tipo:STR{estipo=3;};	
tipo:BOOL{estipo=4;};

/**********estr************/
estr: list;

/**********list*************/
list:LIST ee;
e:COMA cons e;
e:vacio;
ee:PARA cons e PARC;
ee:vacio;

/**********bloque*************/
bloque:f;
f:estatuto f;
f:vacio;

/**********estatuto*************/
estatuto:condicion;
estatuto:ciclo;
estatuto:lectura;
estatuto:escritura;
estatuto:asignacion;
estatuto:llamada;
estatuto:vars;

/**********main****************/
main: FUNC tipo MAIN {insertPro(&startProList,"main",estipo,1);}PARA h PARC LLAVEA i LLAVEC {/*printf("funcion \n");*/};

/**********funcion*************/
funcion: FUNC tipo ID {insertPro(&startProList,$3,estipo,1);}PARA h PARC LLAVEA i LLAVEC {/*printf("funcion \n");*/};
h:tipo ID j;
h:;
i:bloque;
i:;
j:COMA h;

/**********condicion*************/
condicion:{eragltc=gltc; gltc=3;}IF PARA k PARC LLAVEA bloque LLAVEC l{gltc=eragltc};
k:expresion k;
k:vacio;
l:ELSE LLAVEA bloque LLAVEC;
l:vacio;

/**********asignacion*************/
asignacion:NVAR IGUAL m PTCM;
m:clist;
m:expresion;
m:NVAR;
m:cons;

/**********escritura*************/
escritura:PRINT PARA n PARC PTCM;
n:expresion o;
n: COMILLA CSTR COMILLA o;
o:COMA n;
o:vacio;

/**********lectura*************/
lectura:READ PARA tipo PARC PTCM;

/**********ciclo*************/
ciclo:{eragltc=gltc; gltc=3;}FOR PARA expresion PARC LLAVEA bloque LLAVEC{gltc=eragltc};

/**********expresion*************/
expresion: exp p;
p:easignacion exp {nueveExp();};
p:vacio;

/**********llamada*************/
llamada:ID PARA q PARC PTCM;
q:exp r;
q:vacio;
r:COMA q;
r:vacio;

/**********exp*************/
exp:T s t;

s:MAS{dosExp(1);};
s:MENOS{dosExp(2);};
s:vacio;
t:T{cuatroExp();}s t;
t:vacio;

T: F u v;
u:ASTE{tresExp(3);};
u:SLASH{tresExp(4);};
u:vacio;
v: F{cincoExp();}u v;
v:vacio;

F:w;
w:PARA{seisExp();} exp PARC{sieteExp();};
w:{eragltc=gltc; gltc=4;} z {gltc=eragltc;};
z:NVAR{diezExp($1);};
z:CINT{unoExpInt(" ");};
z:CFLOAT{unoExpFloat(" ");};
z:COMILLA CSTR COMILLA{unoExpStr(" ");};


/**********easignacion*************/
easignacion:MAYOR{ochoExp(5);};
easignacion:MENOR{ochoExp(6);};
easignacion:DIFE{ochoExp(7);};
easignacion:IGUAL{ochoExp(8);};

/**********ologico*************/
ologico:AND;
ologico:OR;

/**********clist**************/
clist:PARA cons aa PARC;
aa:COMA cons aa;
aa: vacio;

/***********cons**********/
cons:ID;
cons:CINT;
cons:CFLOAT;
cons:COMILLA CSTR COMILLA;

/**********vacio*************/
vacio:;

%%
/**************************************************************************
                      * Codigo C Adicional *
 **************************************************************************/
/**************************************************************************
                   *Generacion de codigo intermedio*
***************************************************************************/
/*******************globales********************/
int contEntGlo=0;
int contFlotGlo=1000;
int contStrGlo=2000;
int contBoolGlo=3000;
int contSaltosGlo=4000;
/*******************Locales********************/
int contEntLoc=5000;
int contFlotLoc=6000;
int contStrLoc=7000;
int contBoolLoc=8000;
int contSaltosLoc=9000;
/*******************Temporales*****************/
int contEntTmp=10000;
int contFlotTmp=11000;
int contStrTmp=12000;
int contBoolTmp=13000;
int contSaltosTmp=14000;
/*******************Constantes*****************/
int contEntCons=15000;
int contFlotCons=16000;
int contStrCons=17000;
int contBoolCons=18000;
int contSaltosCons=19000; 

void unoExpInt(char *nombre){
  //printf("%d\n",vEntera );
  if (gltc==1){
    push (&PilaO,contEntGlo);
    push(&PTipos,1);
    insertVar(&startProList->headTvarPtr,nombre,estipo,contEntGlo);
    contEntGlo++;
  }
  if (gltc==2){
    push (&PilaO,contEntLoc);
    push(&PTipos,1);
    insertVar(&startProList->headTvarPtr,nombre,estipo,contEntLoc);
    contEntLoc++;
  }
  if (gltc==3){
    push (&PilaO,contEntTmp);
    push(&PTipos,1);
    insertVar(&startProList->headTvarPtr,nombre,estipo,contEntTmp);
    contEntTmp++;
  }
  if (gltc==4){
    push (&PilaO,contEntCons);
    push(&PTipos,1);
    contEntCons++;
  }
}
void unoExpFloat(char *nombre){
  //printf("%f\n",vFlotante );
  if (gltc==1){
    push(&PilaO,contFlotGlo);
    push(&PTipos,2);
    insertVar(&startProList->headTvarPtr,nombre,estipo,contFlotGlo);
    contFlotGlo++;
  }
  if (gltc==2){
    push(&PilaO,contFlotLoc);
    push(&PTipos,2);
    insertVar(&startProList->headTvarPtr,nombre,estipo,contFlotLoc);
    contFlotLoc++;
  }
  if (gltc==3){
    push(&PilaO,contFlotTmp);
    push(&PTipos,2);
    insertVar(&startProList->headTvarPtr,nombre,estipo,contFlotTmp);
    contFlotTmp++;
  }
  if (gltc==4){
    push(&PilaO,contFlotCons);
    push(&PTipos,2);
    contFlotCons++;
  }
}
void unoExpStr(char *nombre){
  if (gltc==1){
    push (&PilaO, contStrGlo);
    push(&PTipos,3);
    insertVar(&startProList->headTvarPtr,nombre,estipo,contStrGlo);
    contStrGlo++;
  }
  if (gltc==2){
    push (&PilaO, contStrLoc);
    push(&PTipos,3);
    insertVar(&startProList->headTvarPtr,nombre,estipo,contStrLoc);
    contStrLoc++;
  }
  if (gltc==3){
    push (&PilaO, contStrTmp);
    push(&PTipos,3);
    insertVar(&startProList->headTvarPtr,nombre,estipo,contStrTmp);
    contStrTmp++;
  }
  if (gltc==4){
    push (&PilaO, contStrCons);
    push(&PTipos,3);
    contStrCons++;
  }
}
void unoExpBool(char *nombre){
  if (gltc==1){
    push (&PilaO, contBoolGlo);
    push(&PTipos,4);
    insertVar(&startProList->headTvarPtr,nombre,estipo,contBoolGlo);
    contBoolGlo++;
  }
    if (gltc==2){
    push (&PilaO, contBoolLoc);
    push(&PTipos,4);
    insertVar(&startProList->headTvarPtr,nombre,estipo,contBoolLoc);
    contBoolLoc++;
  }
  if (gltc==3){
    push (&PilaO, contBoolTmp);
    push(&PTipos,4);
    insertVar(&startProList->headTvarPtr,nombre,estipo,contBoolTmp);
    contBoolTmp++;
  }
  if (gltc==4){
    push (&PilaO, contBoolCons);
    push(&PTipos,4);
    contBoolCons++;
  }
}
void dosExp(int operando){
  switch (operando){
    case 1:
      push(&POper, 1);
      break;
    case 2:
      push(&POper, 2);
      break;
  }
}
void tresExp(int operando){
  switch (operando){
    case 3:
      push(&POper, 3);
      break;
    case 4:
      push(&POper, 4);
      break;
  }
}

void cuatroExp(){
  if ( POper == NULL ) {
      //puts( "The stack is empty.\n" );
   } // end if
  else { 
    esSumResMulDiv = POper->data;
    if ( esSumResMulDiv == 1|| esSumResMulDiv == 2){
      pop ( &PTipos );
      pop ( &PTipos );
      printf ("%d ", POper->data);
      pop(&POper);
      printf("%d ", PilaO->data);
      pop(&PilaO);
      printf("%d ", PilaO->data);
      pop(&PilaO);
      push(&PTipos,1);
      push(&PilaO, contEntTmp);
      printf("%d\n", contEntTmp );
      contEntTmp++;
    }
  }
}
void cincoExp(){
  if ( POper == NULL ) {
      //puts( "The stack is empty.\n" );
   } // end if
  else { 
    esSumResMulDiv = POper->data;
    if ( esSumResMulDiv == 3 || esSumResMulDiv == 4){
      pop ( &PTipos );
      pop ( &PTipos );
      printf ("%d ", POper->data);
      pop(&POper);
      printf("%d ", PilaO->data);
      pop(&PilaO);
      printf("%d ", PilaO->data);
      pop(&PilaO);
      push(&PTipos,1);
      push(&PilaO, contEntTmp);
      printf("%d\n", contEntTmp );
      contEntTmp++;
    }
  }
}
void seisExp(){
  push(&POper, 9);
}
void sieteExp(){
  pop(&POper);
}

void ochoExp(eAsigna){
  switch (eAsigna){
    case 5:
      push(&POper, 5);
      break;
    case 6:
      push(&POper, 6);
      break;
    case 7:
      push(&POper, 7);
      break;
    case 8:
      push(&POper, 8);
      break;
  }
}

void nueveExp(){
   if ( POper == NULL ) {
      //puts( "The stack is empty.\n" );
   } // end if
  else { 
    esSumResMulDiv = POper->data;
    if ( esSumResMulDiv == 5 || esSumResMulDiv == 6 || esSumResMulDiv == 7|| esSumResMulDiv == 8 ){
      pop ( &PTipos );
      printf ("%d ", POper->data);
      pop(&POper);
      printf("%d ", PilaO->data);
      pop(&PilaO);
      printf("%d \n", PilaO->data);
      pop(&PilaO);
      pop(&PilaO);
    }
  }
}

void diezExp(char *nombre){
    TvarNodoPtr existePtr;
    existePtr = startProList->headTvarPtr;
    int esta = 0;
    int i;

    while ( existePtr != NULL ) {
      i = strcmp (nombre, existePtr->nombreVariable);
       //printf("%s-%s",nombre,existePtr->nombreVariable);
      if (i == 0){
         push ( &PilaO, existePtr->direccion);
         esta = 1;
      }
      existePtr = existePtr->nextPtr;   
      } // end while
    if(esta != 1){
      printf("la variable '%s' no existe  %s\n",nombre,existePtr->nombreVariable);
      exit(EXIT_FAILURE);
    }
}

void yyerror(char *s)
{
  printf("Error sintactico %s \n",s);
}
/**************** main ****************/
int main(int argc,char **argv){
  PilaO = NULL;// points to stack top
  POper = NULL;
  PTipos = NULL;
  int value; // int input by user
  
  if (argc>1)
    yyin=fopen(argv[1],"rt");
  else
    //yyin=stdin;
    yyin=fopen("entrada.txt","rt");

  yyparse();
  
  printf("PilaO \n");
  printStack( PilaO );
  printf("POper \n");
  printStack( POper );
  printf("PTipos \n");
  printStack( PTipos );
  printf("Saltos \n");
  printStack( Saltos );
  



  
   /*insertPro(&startProList,"uno",1,1);
   insertVar(&startProList->headTvarPtr,"all",1,12);
   insertVar(&startProList->headTvarPtr,"ald",1,12);
   insertVar(&startProList->headTvarPtr,"alw",1,12);
   insertVar(&startProList->headTvarPtr,"allf",1,12);
   insertPro(&startProList,"dos",1,2);
   insertVar(&startProList->headTvarPtr,"alle",1,12);
   insertVar(&startProList->headTvarPtr,"all23",1,12);
   insertVar(&startProList->headTvarPtr,"all4",1,12);
   insertVar(&startProList->headTvarPtr,"all1",1,12);
   insertVar(&startProList->headTvarPtr,"all5",1,12);
   insertPro(&startProList,"tres",1,3);
   insertVar(&startProList->headTvarPtr,"all",1,12);
   */

   printTables( startProList );

  return 0;
}
/*****************************************************************/
