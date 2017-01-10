# libstring
Thank Kuro for the idea ...

Usage of the Library :

    Using the structure of type *t_string*

Creation of a String :

    t_string *slib_newstr(char *str, int mode)

    [Str] 
        String you want to select

    [Mode]
        0 == Doesn't free's original String
        1 == Free's original String

    [RETURN]
        Return a structure with the corresponding string

Deletion of a String :

    void    delstr(t_string *str)

    [Str]
        Pointer to the structure to be deleted (free'd)

    [RETURN]
        Nothing...