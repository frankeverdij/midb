/* chown function to translate between uid/gid and their respective strings */
static void do_chown (const char *file_path, const char *user_name, const char *group_name);

/* allocate new subproduct struct */
static SUB *creat_sub(char *name);

/* get a pointer to the specified subproduct in the idb. */
static SUB *getsub(IDB *idb, char *name);

/* Get a value out of a lut */
static int getlut(LUTENT *lut, char *val);

/* Get a string out of a lut */
static char* getstr(LUTENT *lut, int val);

/* Get an index for that variable.*/
static int getval(char *type, char *val);

static char unparse(SFILE *sfile);

/* Get the variable value */
static int getvar(char *assign);

/* Parse the atributes.
   atr : list of attributes ex: "sum(18156) size(32816) f(2748824473) cmpsize(14496)"
   subgrp : subgroup in subproduct ex: c.man.util
   sfile : data structure for that file. */
static void finval(char *atr);
static int getint(char *val);
static int parse(char *atr, char *subgrp, SFILE *sfile);

/* This function will read in the content of a IDB file and set
   a database according to the parsed information.*/
static IDB *read_idb(char *name);

/* This program can be used to list/extract files from
   an product distribution package. */
static int usage();

/* Match with expression.*/
static int matchexpr(int nmatch, int *matches);

/* Get the file from the product database. */
static int extract(SFILE *sfile);

static void dopath(char *p);

/* Extract from GNU cpio package */

/* Like glob_match, but match PATTERN against any final segment of TEXT.  */
static int glob_match_after_star();
static int glob_match (char *pattern, char *text, int dot_special);
static int glob_match_after_star (char *pattern, char *text);

/* Is that one of the files we want */
static int inlist(SFILE *sfile);
