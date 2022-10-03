

//-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+
//
// VARIABLE TYPES DEFINES
//
//-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+

#define _ERR_TYPE short
#define _STRING const char *
#define _SSTRING char *

#define _START_0_S1_ITERATOR unsigned char i = 0;
#define _START_0_S2_ITERATOR unsigned short i = 0;
#define _START_0_S3_ITERATOR unsigned int i = 0;
#define _START_0_S4_ITERATOR unsigned long i = 0;
#define _START_0_S5_ITERATOR unsigned long long i = 0;

#define _ITERSMLEQ(value) i<=value
#define _ITERSML(value) i<value
#define _ITERBIGEQ(value) i>=value
#define _ITERBIG(value) i>value
#define _ITEREQ(value) i==value
#define _ITERNEQ(value) i!=value

#define _IINC i++

#define _IDEC i--

#define _FOR(LOG,I) for(_START_0_S5_ITERATOR,LOG,I)

#define _SIZE unsigned long long

#define _R return
#define _FALSE_R return 0;
#define _TRUE_R return 1;
#define _NULL_R return NULL;

#define _BASEBUFFSIZE 1000
#define _LBUFFSIZE 10000

#define _CHARBUFF(variableName,size) char variableName[size];

#define _OUT extern

//-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+
//
// MAIN FUNCTION DEFINES
//
//-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+

#define USER_INPUT int argc, char ** argv // Basic user input

#define FUNC inline

#define CHECK_UI(x,y) if(MKTstrCmp(argv[x], y)) // Basic check for user input

//-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+
//
// ERROR DEFINES
//
//-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+

// ERROR RETURNS
#define RETURN_ELIF_ERR if(_MKT_Error)return _MKT_Error;else
#define RETURN_IF_ERR if(_MKT_Error)return _MKT_Error;
#define RETURN_ERR return _MKT_Error;

// ERROR SETTING

#define SETUP_ERR _MKT_Error = 0;

#define SET_ERR _MKT_Error =

#define __ERR_VAL__NO_ERROR 0
#define __ERR_VAL__SYS_ERROR 1