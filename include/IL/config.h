/*
 * config.h
 *
 *  Created on: Jan 30, 2012
 *      Author: tnunes
 */

#ifndef CONFIG_H_
#define CONFIG_H_


/* include/IL/config.h.in.  Generated from configure.ac by autoheader.  */

/* Altivec extension found */
#undef ALTIVEC_GCC

/* "Enable debug code features" */
#undef DEBUG

/* PPC_ASM assembly found */
#undef GCC_PCC_ASM

/* X86_64_ASM assembly found */
#undef GCC_X86_64_ASM

/* X86_ASM assembly found */
#undef GCC_X86_ASM

/* Define to 1 if you have the <dlfcn.h> header file. */
#undef HAVE_DLFCN_H

/* Define to 1 if you have the <GLUT/glut.h> header file. */
#undef HAVE_GLUT_GLUT_H

/* Define to 1 if you have the <GL/glut.h> header file. */
#undef HAVE_GL_GLUT_H

/* Define to 1 if you have the <GL/glu.h> header file. */
#undef HAVE_GL_GLU_H

/* Define to 1 if you have the <GL/gl.h> header file. */
#undef HAVE_GL_GL_H

/* Define to 1 if you have the <inttypes.h> header file. */
#undef HAVE_INTTYPES_H

/* Define to 1 if you have the `m' library (-lm). */
#define HAVE_LIBM 1

/* Define to 1 if you have the `z' library (-lz). */
#define HAVE_LIBZ 1

/* Define to 1 if you have the <memory.h> header file. */
#undef HAVE_MEMORY_H

/* Define to 1 if you have the <OpenGL/glu.h> header file. */
#undef HAVE_OPENGL_GLU_H

/* Define to 1 if you have the <OpenGL/gl.h> header file. */
#undef HAVE_OPENGL_GL_H

/* Define if you have POSIX threads libraries and header files. */
#define HAVE_PTHREAD 1

/* Define to 1 if you have the <stdint.h> header file. */
#undef HAVE_STDINT_H

/* Define to 1 if you have the <stdlib.h> header file. */
#undef HAVE_STDLIB_H

/* Define to 1 if you have the <strings.h> header file. */
#undef HAVE_STRINGS_H

/* Define to 1 if you have the <string.h> header file. */
#define HAVE_STRING_H 1

/* Define to 1 if you have the <sys/stat.h> header file. */
#define HAVE_SYS_STAT_H 1

/* Define to 1 if you have the <sys/types.h> header file. */
#define HAVE_SYS_TYPES_H 1

/* Define to 1 if you have the <unistd.h> header file. */
#define HAVE_UNISTD_H 1

/* Use nonstandard varargs form for the GLU tesselator callback */
#undef HAVE_VARARGS_GLU_TESSCB

/* Define to 1 if you have the <windows.h> header file. */
#undef HAVE_WINDOWS_H

/* Support Allegro API */
#undef ILUT_USE_ALLEGRO

/* Support DirectX8 API */
#undef ILUT_USE_DIRECTX8

/* Support DirectX9 API */
#undef ILUT_USE_DIRECTX9

/* Define if system supports OpenGL API */
#undef ILUT_USE_OPENGL

/* Support SDL API */
#undef ILUT_USE_SDL

/* Support X11 API */
#undef ILUT_USE_X11

/* Support X11 XRender extension */
#undef ILUT_USE_XRENDER

/* Support X11 XShm extension */
#undef ILUT_USE_XSHM

/* Define if you want to build ILU part of DevIL (used in DevIL
   examples/tests) */
#undef ILU_ENABLED

/* Define if you can support at least some ASM */
#undef IL_INLINE_ASM

/* blp support (BLP is the texture format for Blizzard games.) */
#undef IL_NO_BLP

/* bmp support (BMP is a standard Windows bitmap.) */
#undef IL_NO_BMP

/* dcx support (DCX is a multi-page PCX file.) */
#undef IL_NO_DCX

/* dds support (DDS (DirectDraw Surface) is used by DirectX to load images
   (usually DXTC).) */
#undef IL_NO_DDS

/* dicom support (DICOM (Digital Imaging and Communications in Medicine) is
   used extensively in medical imaging.) */
#undef IL_NO_DICOM

/* exr support (EXR is a HDR image file format standardized by Industrial
   Light and Magic. OpenEXR powered) */
#undef IL_NO_EXR

/* fits support (FITS (Flexible Image Transport System) is used for storing
   scientific images and is used extensively in astronomy.) */
#undef IL_NO_FITS

/* Define if you want to disable support for various game formats */
#undef IL_NO_GAMES

/* gif support (GIF is lossy and proprietary format used mainly to make
   animations) */
#undef IL_NO_GIF

/* hdr support (HDR is the Radiance High Dynamic Range format, using more bits
   per channel than normal.) */
#undef IL_NO_HDR

/* icns support (ICNS is the icon format for the Mac OS X operation system.)
   */
#undef IL_NO_ICNS

/* icon support (ICO is the icon format for the Windows operating system.) */
#undef IL_NO_ICON

/* iff support (IFF (Interchange File Format) is used to transfer images
   between software from different companies.) */
#undef IL_NO_IFF

/* ilbm support (ILBM (Amiga Interleaved BitMap Format).) */
#undef IL_NO_ILBM

/* iwi support (IWI is the Infinity Ward Image format used in the Call of Duty
   games.) */
#undef IL_NO_IWI

/* jp2 support (JP2 (JPEG 2000) is a better, but not so widespread,
   alternative to JPEG. JasPer powered) */
#define  IL_NO_JP2 1

/* jpeg support (JPEG is most common lossy format. libjpeg powered) */
#undef IL_NO_JPG

/* lcms support () */
#define IL_NO_LCMS 1

/* lif support (LIF is the image format of the game Homeworld.) */
#undef IL_NO_LIF

/* mdl support (MDL is the format for models in the game Half-Life.) */
#undef IL_NO_MDL

/* mng support (MNG is basically the animated version of PNG but is not
   widespread.) */
#define IL_NO_MNG 1

/* mp3 support (MP3 (MPEG-1 Audio Layer 3) sometimes have images in them, such
   as cover art.) */
#undef IL_NO_MP3

/* pcd support (PCD is the Kodak PhotoCD format.) */
#undef IL_NO_PCD

/* pcx support (PCX is one of the first widely accepted DOS imaging standards)
   */
#undef IL_NO_PCX

/* pic support (PIC is used by SoftImage software.) */
#undef IL_NO_PIC

/* pix support () */
#undef IL_NO_PIX

/* png support (PNG is a smart, loseless and even open format. libpng
   powered.) */
#undef IL_NO_PNG

/* pnm support (PNM (Portable aNy Map format) is considered the
   least-common-denominator for converting pixmap, graymap, or bitmap files
   between different platforms.) */
#undef IL_NO_PNM

/* psd support (PSD is the PhotoShop native file format.) */
#undef IL_NO_PSD

/* psp support (PSP is the Paint Shop Pro native file format.) */
#undef IL_NO_PSP

/* pxr support (PXR is used by Pixar.) */
#undef IL_NO_PXR

/* raw support (RAW is simply raw data.) */
#undef IL_NO_RAW

/* rot support (ROT is the image format for the game Homeworld 2.) */
#undef IL_NO_ROT

/* sgi support (SGI is the native raster graphics file format for Silicon
   Graphics workstations) */
#undef IL_NO_SGI

/* sun support (SUN is the image format used on Sun's operating systems.) */
#undef IL_NO_SUN

/* texture support (TEXTURE is the format used in Medieval II: Total War
   (similar to DDS).) */
#undef IL_NO_TEXTURE

/* tga support (TGA (aka TARGA file format) has been used mainly in games. It
   is open and simple.) */
#undef IL_NO_TGA

/* tiff support (TIFF is a lossless format supporting greater color depths.
   libtiff powered) */
#define IL_NO_TIF 1

/* tpl support (TPL is the format used by many GameCube and Wii games.) */
#undef IL_NO_TPL

/* utx support (UTX is the format used in the Unreal Tournament game series.)
   */
#undef IL_NO_UTX

/* vtf support (VTF (Valve Texture Format) is used by games based on Valve's
   Source engine.) */
#undef IL_NO_VTF

/* doom support (WAD is the format for graphics in the original DooM I/II.) */
#undef IL_NO_WAD

/* wal support (WAL is the image format used for the game Quake 2.) */
#undef IL_NO_WAL



/* Define if you have libsquish installed */
#undef IL_USE_DXTC_SQUISH

/* Use libjpeg without modification. always enabled. */
#undef IL_USE_JPEGLIB_UNMODIFIED

/* LCMS include without lcms/ support */
#define LCMS_NODIRINCLUDE 1

/* Define to the sub-directory in which libtool stores uninstalled libraries.
   */
#undef LT_OBJDIR

/* Building on Mac OS X */
#undef MAX_OS_X

/* define if you have memalign memory allocation */
#undef MEMALIGN

/* define if you have mm_malloc.h header */
#undef MM_MALLOC

/* Define to 1 if your C compiler doesn't accept -c and -o together. */
#undef NO_MINUS_C_MINUS_O

/* Name of package */
#undef PACKAGE

/* Define to the address where bug reports for this package should be sent. */
#undef PACKAGE_BUGREPORT

/* Define to the full name of this package. */
#undef PACKAGE_NAME

/* Define to the full name and version of this package. */
#undef PACKAGE_STRING

/* Define to the one symbol short name of this package. */
#undef PACKAGE_TARNAME

/* Define to the version of this package. */
#undef PACKAGE_VERSION

/* define if you have posix_memalign memory allocation */
#define POSIX_MEMALIGN 1

/* Define to necessary symbol if this constant uses a non-standard name on
   your system. */
#undef PTHREAD_CREATE_JOINABLE


/* Define to 1 if you have the ANSI C header files. */
#define STDC_HEADERS 1



#endif /* CONFIG_H_ */
