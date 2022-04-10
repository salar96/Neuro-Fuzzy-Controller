# ------------------- Required for MSVC nmake ---------------------------------
# This file should be included at the top of a MAKEFILE as follows:


CPU = AMD64

MODEL  = inverse_pendulum
TARGET = cgxe
MODULE_SRCS 	= m_BTeovP3vODQtQdRntBRxBE.c
MODEL_SRC	= inverse_pendulum_cgxe.c
MODEL_REG = inverse_pendulum_cgxe_registry.c
MAKEFILE    = inverse_pendulum_cgxe.mak
MATLAB_ROOT	= E:\Program Files\MATLAB\R2016a
BUILDARGS   =

#--------------------------- Tool Specifications ------------------------------
#
#
MSVC_ROOT1 = $(MSDEVDIR:SharedIDE=vc)
MSVC_ROOT2 = $(MSVC_ROOT1:SHAREDIDE=vc)
MSVC_ROOT  = $(MSVC_ROOT2:sharedide=vc)

# Compiler tool locations, CC, LD, LIBCMD:
CC     = cl.exe
LD     = link.exe
LIBCMD = lib.exe
#------------------------------ Include/Lib Path ------------------------------


USER_INCLUDES   = 

MLSL_INCLUDES     = \
    /I "E:\Program Files\MATLAB\R2016a\extern\include" \
    /I "E:\Program Files\MATLAB\R2016a\simulink\include" \
    /I "E:\Program Files\MATLAB\R2016a\rtw\c\src"
COMPILER_INCLUDES = /I "$(MSVC_ROOT)\include"

THIRD_PARTY_INCLUDES   = 
INCLUDE_PATH = $(MLSL_INCLUDES) $(USER_INCLUDES) $(THIRD_PARTY_INCLUDES)
LIB_PATH     = "$(MSVC_ROOT)\lib"
CFLAGS = /c /Zp8 /GR /W3 /EHs /D_CRT_SECURE_NO_DEPRECATE /D_SCL_SECURE_NO_DEPRECATE /D_SECURE_SCL=0 /DMATLAB_MEX_FILE /DMX_COMPAT_32 /nologo /MD 
LDFLAGS = /nologo /dll /MANIFEST /OPT:NOREF /export:mexFunction  
#----------------------------- Source Files -----------------------------------

USER_ABS_OBJS =

AUX_SRCS =   

REQ_SRCS  = $(MODEL_SRC) $(MODEL_REG) $(MODULE_SRCS) $(AUX_SRCS)
REQ_OBJS = $(REQ_SRCS:.cpp=.obj)
REQ_OBJS2 = $(REQ_OBJS:.c=.obj)
OBJS = $(REQ_OBJS2) $(USER_ABS_OBJS) $(AUX_ABS_OBJS)
OBJLIST_FILE = inverse_pendulum_cgxe.mol
TMWLIB = "E:\Program Files\MATLAB\R2016a\extern\lib\win64\microsoft\libmx.lib" "E:\Program Files\MATLAB\R2016a\extern\lib\win64\microsoft\libmex.lib" "E:\Program Files\MATLAB\R2016a\extern\lib\win64\microsoft\libmat.lib" "E:\Program Files\MATLAB\R2016a\extern\lib\win64\microsoft\libfixedpoint.lib" "E:\Program Files\MATLAB\R2016a\extern\lib\win64\microsoft\libut.lib" "E:\Program Files\MATLAB\R2016a\extern\lib\win64\microsoft\libmwmathutil.lib" "E:\Program Files\MATLAB\R2016a\extern\lib\win64\microsoft\libemlrt.lib" "E:\Program Files\MATLAB\R2016a\extern\lib\win64\microsoft\libmwcgxert.lib" "E:\Program Files\MATLAB\R2016a\extern\lib\win64\microsoft\libmwslexec_simbridge.lib" "E:\Program Files\MATLAB\R2016a\lib\win64\libmwipp.lib" "E:\Program Files\MATLAB\R2016a\extern\lib\win64\microsoft\libcovrt.lib" 
THIRD_PARTY_LIBS = 

#--------------------------------- Rules --------------------------------------

MEX_FILE_NAME_WO_EXT = $(MODEL)_$(TARGET)
MEX_FILE_NAME = $(MEX_FILE_NAME_WO_EXT).mexw64
all : $(MEX_FILE_NAME) 


$(MEX_FILE_NAME) : $(MAKEFILE) $(OBJS)
	@echo ### Linking ...
	$(LD) $(LDFLAGS) /OUT:$(MEX_FILE_NAME) /map:"$(MEX_FILE_NAME_WO_EXT).map" $(TMWLIB) $(THIRD_PARTY_LIBS) @$(OBJLIST_FILE)
     mt -outputresource:"$(MEX_FILE_NAME);2" -manifest "$(MEX_FILE_NAME).manifest"
	@echo ### Created $@

.c.obj :
	@echo ### Compiling "$<"
	$(CC) $(CFLAGS) $(INCLUDE_PATH) "$<"

.cpp.obj :
	@echo ### Compiling "$<"
	$(CC) $(CFLAGS) $(INCLUDE_PATH) "$<"

