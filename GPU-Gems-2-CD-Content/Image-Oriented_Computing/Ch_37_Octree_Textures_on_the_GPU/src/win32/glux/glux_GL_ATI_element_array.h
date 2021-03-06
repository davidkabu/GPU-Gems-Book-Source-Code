
// --------------------------------------------------------
// Generated by glux perl script (Wed Mar 31 17:19:34 2004)
// 
// Sylvain Lefebvre - 2002 - Sylvain.Lefebvre@imag.fr
// --------------------------------------------------------
#include "glux_no_redefine.h"
#include "glux_ext_defs.h"
#include "gluxLoader.h"
#include "gluxPlugin.h"
// --------------------------------------------------------
//         Plugin creation
// --------------------------------------------------------

#ifndef __GLUX_GL_ATI_element_array__
#define __GLUX_GL_ATI_element_array__

GLUX_NEW_PLUGIN(GL_ATI_element_array);
// --------------------------------------------------------
//           Extension conditions
// --------------------------------------------------------
// --------------------------------------------------------
//           Extension defines
// --------------------------------------------------------
#ifndef GL_ELEMENT_ARRAY_ATI
#  define GL_ELEMENT_ARRAY_ATI 0x8768
#endif
#ifndef GL_ELEMENT_ARRAY_TYPE_ATI
#  define GL_ELEMENT_ARRAY_TYPE_ATI 0x8769
#endif
#ifndef GL_ELEMENT_ARRAY_POINTER_ATI
#  define GL_ELEMENT_ARRAY_POINTER_ATI 0x876A
#endif
// --------------------------------------------------------
//           Extension gl function typedefs
// --------------------------------------------------------
#ifndef __GLUX__GLFCT_glElementPointerATI
typedef void (APIENTRYP PFNGLUXELEMENTPOINTERATIPROC) (GLenum type, const GLvoid *pointer);
#endif
#ifndef __GLUX__GLFCT_glDrawElementArrayATI
typedef void (APIENTRYP PFNGLUXDRAWELEMENTARRAYATIPROC) (GLenum mode, GLsizei count);
#endif
#ifndef __GLUX__GLFCT_glDrawRangeElementArrayATI
typedef void (APIENTRYP PFNGLUXDRAWRANGEELEMENTARRAYATIPROC) (GLenum mode, GLuint start, GLuint end, GLsizei count);
#endif
// --------------------------------------------------------
//           Extension gl functions
// --------------------------------------------------------
namespace glux {
#ifndef __GLUX__GLFCT_glElementPointerATI
extern PFNGLUXELEMENTPOINTERATIPROC glElementPointerATI;
#endif
#ifndef __GLUX__GLFCT_glDrawElementArrayATI
extern PFNGLUXDRAWELEMENTARRAYATIPROC glDrawElementArrayATI;
#endif
#ifndef __GLUX__GLFCT_glDrawRangeElementArrayATI
extern PFNGLUXDRAWRANGEELEMENTARRAYATIPROC glDrawRangeElementArrayATI;
#endif
} // namespace glux
// --------------------------------------------------------
#endif
// --------------------------------------------------------
