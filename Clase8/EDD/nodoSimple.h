#ifndef NODOSIMPLE_H
#define NODOSIMPLE_H
#include <stddef.h>

class nodosimple
{
public:
    int valor;
    nodosimple *sig;
    nodosimple()
    {
        sig = NULL;
        valor = 0;
    }

private:
};
#endif /* NODOSIMPLE_H */
