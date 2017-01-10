# libstring
Thank Kuro for the idea ...

Creation of a String :

    slib_newstr(char *str, int mode)

    Char * : String you want to select
    Int    :  If Mode == 0
              Doesn't free's original String
              If Mode == 1
              Free's original String