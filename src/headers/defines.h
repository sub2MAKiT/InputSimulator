
#define _ERR_TYPE short

#define _OUT extern

//-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+
//
// MAIN FUNCTION DEFINES
//
//-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+

#define USER_INPUT int argc, char ** argv // Basic user input

//-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+
//
// ERROR DEFINES
//
//-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+

#define RETURN_ELIF_ERR if(_MKT_Error)return _MKT_Error;else
#define RETURN_IF_ERR if(_MKT_Error)return _MKT_Error;
#define RETURN_ERR return _MKT_Error;