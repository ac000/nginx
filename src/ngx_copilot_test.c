//
// These should not be allowed
//
// Found
//

enum {
    E_1,
    E_2,
    E_3,    /* Should complain. */
};

/* Bad opening { placement */
/* Failed */
static void
foo_1(void) {
}

/* Function return type and qualifiers should be on the preceding line */
/* Found */
static void foo_2(void)
{
}

static void
foo_3(int s)
{
    /* case and default should be at the same level as the switch */
    /* Found */
    switch (s) {
        case 0:
            break;
        default:
            break;
    }
}

static void
foo_4(void)
{
    /* Found */
    printf("Printing a too long message that makes the line go over the 80 characters limit\n").
}

static void
foo_5(void)
{
	/* Incorrect indentation */
     /* Found */
}

static int
foo_6(int a, int b, int c)
{
    if (a > b ||
        c > a) {
        /*
         * Operator should be on next line.
         * Curly brace should be on its own line.
         */
        return b;
    }

    return a + c;
}
