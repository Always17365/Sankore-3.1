/* aconf.h.  Generated by configure.  */
/*
 * aconf.h
 *
 * Copyright 2002-2003 Glyph & Cog, LLC
 */

#ifndef ACONF_H
#define ACONF_H

#include <aconf2.h>

/*
 * Use A4 paper size instead of Letter for PostScript output.
 */
/* #undef A4_PAPER */

/*
 * Do not allow text selection.
 */
/* #undef NO_TEXT_SELECT */

/*
 * Include support for OPI comments.
 */
/* #undef OPI_SUPPORT */

/*
 * Enable multithreading support.
 */
/* #undef MULTITHREADED */

/*
 * Enable C++ exceptions.
 */
/* #undef USE_EXCEPTIONS */

/*
 * Enable word list support.
 */
/* #undef TEXTOUT_WORD_LIST */

/*
 * Use fixed point (instead of floating point) arithmetic.
 */
/* #undef USE_FIXEDPOINT */

/*
 * Directory with the Xpdf app-defaults file.
 */
/* #undef APPDEFDIR */

/*
 * Full path for the system-wide xpdfrc file.
 */
#define SYSTEM_XPDFRC "/usr/local/etc/xpdfrc"

/*
 * Various include files and functions.
 */
#define HAVE_DIRENT_H 1
/* #undef HAVE_SYS_NDIR_H */
/* #undef HAVE_SYS_DIR_H */
/* #undef HAVE_NDIR_H */
/* #undef HAVE_SYS_SELECT_H */
/* #undef HAVE_SYS_BSDTYPES_H */
#define HAVE_STRINGS_H 1
/* #undef HAVE_BSTRING_H */
#define HAVE_POPEN 1
#define HAVE_MKSTEMP 1
#define HAVE_MKSTEMPS 1
/* #undef SELECT_TAKES_INT */
#define HAVE_FSEEKO 1
/* #undef HAVE_FSEEK64 */
#define _FILE_OFFSET_BITS 64
/* #undef _LARGE_FILES */
/* #undef _LARGEFILE_SOURCE */
#define HAVE_XTAPPSETEXITFLAG 1

/*
 * This is defined if using libXpm.
 */
#define HAVE_X11_XPM_H 1

/*
 * This is defined if using t1lib.
 */
/* #undef HAVE_T1LIB_H */

/*
 * One of these is defined if using FreeType 2.
 */
/* #undef HAVE_FREETYPE_H */
/* #undef HAVE_FREETYPE_FREETYPE_H */

/*
 * This is defined if using libpaper.
 */
/* #undef HAVE_PAPER_H */

/*
 * Enable support for loading plugins.
 */
/* #undef ENABLE_PLUGINS */

/*
 * Defined if the Splash library is avaiable.
 */
/* #undef HAVE_SPLASH */

/*
 * Enable support for CMYK output.
 */
/* #undef SPLASH_CMYK */

#endif
