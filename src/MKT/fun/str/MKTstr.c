#include "../../headers/str/MKTstr.h"

char MKTstrCmp(_STRING a, _STRING b)
{
    _START_0_S3_ITERATOR
    while(a[++i]==b[i])
        if(a[i]==0)
            _R b[i]==a[i];
    _FALSE_R;
}