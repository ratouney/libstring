# Libstring made by Ratouney [++plKuro]
Thank Kuro for the idea ...

Usage of the Library :

    Open a terminal and type [make re]
    If no error appears, you will have a [libratstring.a] file
    To use the library, just add it to your gcc compilation sources

Creation of a String :

    t_string *slib_newstr(char *str, int mode)

    [Str] 
        String you want to select

    [Mode]
        0 == Doesn't free's original String
        1 == Free's original String

    [RETURN]
        Return a structure with the corresponding string


Print content of a String :

    void str->show(t_string *str, int mode)
    
    [Str]
        Structure to display (uses write in standart output)

    [Mode]
        0 == Displays only the string
        1 == Prints a fancy presentation of the string
        2 == Same as number 1 but with a line jump after the string


Deletion of a String :

    void    delstr(t_string *str)

    [Str]
        Pointer to the structure to be deleted (free'd)

    [RETURN]
        Nothing...


Adding text to current String :

    char    *str->fuse(t_string *str, char *fuse, int mode)

    [Str]
        Main string structure
    
    [Fuse]
        String to concatenate at the end of the main strucute's string
    
    [Mode]
        0 == Free nothing
        1 == Free's the structure's string
        2 == Free's the [Fuse] string
        3 == Free's both strings
        4 == Free's both strings and put the concatenation into the structure

    [RETURN]
        0, 1, 2 == Concatenation of both strings
        3 == NULL


Copy content of the current String :
    
    char    *str->copy(t_string *str, int mode)

    [Str]
        Source string to be copied

    [Mode]
        0 == Copies all caracters (up to terminating caracter)
        0 > Amount of caracters to be copied
        (if a null terminating caracter is found, it's only copied up to it)

    [RETURN]
        A pointer to a malloc'ed string containting the copied string

Copy a part of the current string :

    char *str->sl(t_string *str, int from, int to)

    [Str]
        Source string to check

    [From]
        Start copying from here (if it's negative, it'll start from 0)

    [To]
        Copy up to before this point (it it's bigger than str->len(str), it will only copy up to that
        Replace it with 0, if you want to select up to the end.

    [Exemple with "Hello world !" ]

        str->sl (3, 20)
            == > "lo world !"

        str->sl (-2, 2)
            == > "He"
        
        str->sl (5, 0)
            == > " World !"

        str->sl (6, 3)
            == > NULL

    [RETURN]
        On success, it returns a pointer to a new malloc'ed string between the selected limits
        If [From] > [To], it returns NULL.

Getting the lenght of the current string :

    int     str->len(t_string *str)

    [Str]
        String to parse

    [RETURN]
        Number of caracters up to the null terminating caracter (same as strlen)


Compare the string with another :

