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
  #include "cuadruplos.c"
  #include "semantica.c"
  #include "tabcons.c"

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

  void unoExpIntCons(int valor);
  void unoExpFloatCons(int valor);
  void unoExpStrCons(int valor);
  void unoExpBoolCons(int valor);

  StackNodePtr apuntadorApOper;

  int esSumResMulDiv;

  char *nombrefuncion;
  TproNodoPtr startProList = NULL;
  CuadruplosPtr  startCuadruplos =  NULL;
  TabConsPtr startTabCons = NULL;
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

/**********asignacion*************/
asignacion:NVAR{existeVarAsignar(startProList->headTvarPtr,startProList->headTvarPtr->nextPtr,$1);} IGUAL{ochoExp(8);} m PTCM;
//m:clist;
m:expresion{nueveExp();};
m:NVAR;
m:cons;

/**********condicion*************/
condicion:{eragltc=gltc; gltc=3;}IF PARA k PARC LLAVEA bloque LLAVEC l{gltc=eragltc};
k:expresion k;
k:vacio;
l:ELSE LLAVEA bloque LLAVEC;
l:vacio;



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
p:easignacion exp;
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
z:CINT{unoExpIntCons($1);};
z:CFLOAT{unoExpFloatCons($1);};
z:COMILLA CSTR COMILLA{/*unoExpStrCons($2);*/};


/**********easignacion*************/
easignacion:MAYOR{ochoExp(5);};
easignacion:MENOR{ochoExp(6);};
easignacion:DIFE{ochoExp(7);};
easignacion:IGUAL IGUAL;

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
}
void unoExpIntCons(int valor){
  if (gltc==4){
    push (&PilaO,contEntCons);
    push(&PTipos,1);
    insertTabCons (&startTabCons,valor,contEntCons);
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
}
void unoExpFloatCons(int valor){
  if (gltc==4){
    push(&PilaO,contFlotCons);
    push(&PTipos,2);
    insertTabCons (&startTabCons,valor,contFlotCons);
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
}
void unoExpStrCons(int valor){
  if (gltc==4){
    push (&PilaO, contStrCons);
    push(&PTipos,3);
    insertTabCons (&startTabCons,valor,contStrCons);
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
}
void unoExpBoolCons(int valor){
  if (gltc==4){
    push (&PilaO, contBoolCons);
    push(&PTipos,4);
    insertTabCons (&startTabCons,valor,contBoolCons);
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
  int tipoRes;
  int resultado;
  if ( POper == NULL ) {
      //puts( "The stack is empty.\n" );
   } // end if
  else { 
    esSumResMulDiv = POper->data;
    if ( esSumResMulDiv == 1|| esSumResMulDiv == 2){
      int tipo1=PTipos->data;
      pop ( &PTipos );
      int tipo2=PTipos->data;
      pop ( &PTipos );
      if(tipo1==1){
        tipo1=0;
      }else if(tipo1==2){
        tipo1=2;
      }else if(tipo1==3){
        tipo1=5;
      }else if(tipo1==4){
        tipo1=4;
      }
      if(tipo2==1){
        tipo2=0;
      }else if(tipo2==2){
        tipo2=2;
      }else if(tipo2==3){
        tipo2=5;
      }else if(tipo2==4){
        tipo2=4;
      }
      
      if(strcmp(cubo[tipo1][tipo2][esSumResMulDiv],"x")==0){
        printf("%s\n","operacion no valida" );
      }else{
         if(strcmp(cubo[tipo1][tipo2][esSumResMulDiv],"i")==0){
          tipoRes=1;
         }
         if(strcmp(cubo[tipo1][tipo2][esSumResMulDiv],"f")==0){
          tipoRes=2;
         }
         if(strcmp(cubo[tipo1][tipo2][esSumResMulDiv],"s")==0){
          tipoRes=3;
         }
         if(strcmp(cubo[tipo1][tipo2][esSumResMulDiv],"b")==0){
          tipoRes=4;
         }
      }
      printf ("%d ", POper->data);
      int operacion=POper->data;
      pop(&POper);
      printf("%d ", PilaO->data);
      int operando2 = PilaO->data;
      pop(&PilaO);
      printf("%d ", PilaO->data);
      int operando1 = PilaO->data;
      pop(&PilaO);
      push(&PTipos,tipoRes);

      if(tipoRes == 1){
        push(&PilaO, contEntTmp);
        printf("%d\n", contEntTmp );
        resultado = contEntTmp;
        contEntTmp++;
      }
      if(tipoRes == 2){
        push(&PilaO, contFlotTmp);
        printf("%d\n", contFlotTmp );
        resultado = contFlotTmp;
        contFlotTmp++;
      }
      if(tipoRes == 3){
        push(&PilaO, contStrTmp);
        printf("%d\n", contStrTmp );
        resultado = contStrTmp;
        contStrTmp++;
      }
      if(tipoRes == 4){
        push(&PilaO, contBoolTmp);
        printf("%d\n", contBoolTmp );
        resultado = contBoolTmp;
        contBoolTmp++;
      }
      insertCuadruplos( &startCuadruplos, operacion, operando1, operando2, resultado);
    }
  }
}
void cincoExp(){
  int tipoRes;
  int resultado;
  if ( POper == NULL ) {
      //puts( "The stack is empty.\n" );
   } // end if
  else { 
    esSumResMulDiv = POper->data;
    if ( esSumResMulDiv == 3 || esSumResMulDiv == 4){
      int tipo1 = PTipos->data;
      pop ( &PTipos );
      int tipo2 = PTipos->data;
      pop ( &PTipos );

      if(tipo1==1){
        tipo1=0;
      }else if(tipo1==2){
        tipo1=2;
      }else if(tipo1==3){
        tipo1=5;
      }else if(tipo1==4){
        tipo1=4;
      }
      if(tipo2==1){
        tipo2=0;
      }else if(tipo2==2){
        tipo2=2;
      }else if(tipo2==3){
        tipo2=5;
      }else if(tipo2==4){
        tipo2=4;
      }
      if(strcmp(cubo[tipo1][tipo2][esSumResMulDiv],"x")==0){
        printf("%s\n","operacion no valida" );
      }else{
         if(strcmp(cubo[tipo1][tipo2][esSumResMulDiv],"i")==0){
          tipoRes=1;
         }
         if(strcmp(cubo[tipo1][tipo2][esSumResMulDiv],"f")==0){
          tipoRes=2;
         }
         if(strcmp(cubo[tipo1][tipo2][esSumResMulDiv],"s")==0){
          tipoRes=3;
         }
         if(strcmp(cubo[tipo1][tipo2][esSumResMulDiv],"b")==0){
          tipoRes=4;
         }
      }

      printf ("%d ", POper->data);
      int operacion=POper->data;
      pop(&POper);
      printf("%d ", PilaO->data);
      int operando2 = PilaO->data;
      pop(&PilaO);
      printf("%d ", PilaO->data);
      int operando1 = PilaO->data;
      pop(&PilaO);
      push(&PTipos,tipoRes);

      if(tipoRes == 1){
        push(&PilaO, contEntTmp);
        printf("%d\n", contEntTmp );
        resultado = contEntTmp;
        contEntTmp++;
      }
      if(tipoRes == 2){
        push(&PilaO, contFlotTmp);
        printf("%d\n", contFlotTmp );
        resultado = contFlotTmp;
        contFlotTmp++;
      }
      if(tipoRes == 3){
        push(&PilaO, contStrTmp);
        printf("%d\n", contStrTmp );
        resultado = contStrTmp;
        contStrTmp++;
      }
      if(tipoRes == 4){
        push(&PilaO, contBoolTmp);
        printf("%d\n", contBoolTmp );
        resultado = contBoolTmp;
        contBoolTmp++;
      }
      insertCuadruplos( &startCuadruplos, operacion, operando1, operando2, resultado);
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
      int operacion=POper->data;
      pop(&POper);
      printf("%d ", PilaO->data);
      int operando1 = PilaO->data;
      pop(&PilaO);
      printf("%d \n", PilaO->data);
      int resultado = PilaO->data;
      pop(&PilaO);
      int operando2=0;
      insertCuadruplos( &startCuadruplos, operacion, operando1, operando2,resultado);
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

  printTables( startProList );
  printCuadruplos ( startCuadruplos );
  printTabCons( startTabCons);
  return 0;
}
/*****************************************************************/
