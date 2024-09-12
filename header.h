#ifndef header_h
#define header_h

void callbyvalue(int life){
    ++life;
}

void callbyref(int *life){
    ++*life;
}
#endif