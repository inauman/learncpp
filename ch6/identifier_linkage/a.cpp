int g_var1{13}; //non-constant external by default
extern const int g_var2{19}; //extern make this internal constant var as externally linked
extern constexpr int g_var3{27}; //while a constexpr can be declared global using extern, it can't be forward declare in another file
//as the compiler won't be able to know what the value of this variable would be in another file