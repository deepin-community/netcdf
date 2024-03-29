/*********************************************************************
 *   Copyright 2018, UCAR/Unidata
 *   See netcdf/COPYRIGHT file for copying and redistribution conditions.
 *   Russ Rew
 *********************************************************************/
#ifndef _INDENT_H
#define _INDENT_H

#ifdef __cplusplus
extern "C" {
#endif

/* Handle nested group indentation */
extern void indent_init(void);	/* initialize indent to zero */
extern void indent_out(void);	/* output current indent */
extern void indent_more(void);	/* increment current indent */
extern void indent_less(void);	/* decrement current indent */
extern int  indent_get(void);	/* return current indent */

#ifdef __cplusplus
}
#endif

#endif /* _INDENT_H */
